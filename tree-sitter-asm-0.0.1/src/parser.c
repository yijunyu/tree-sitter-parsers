#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 431
#define ALIAS_COUNT 0
#define TOKEN_COUNT 412
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_gs = 3,
  anon_sym_idiv = 4,
  anon_sym_negl = 5,
  anon_sym_negq = 6,
  anon_sym_jp = 7,
  anon_sym_jrcxz = 8,
  anon_sym_notw = 9,
  anon_sym_setl = 10,
  anon_sym_jle = 11,
  anon_sym_divl = 12,
  anon_sym_setge = 13,
  anon_sym_fldt = 14,
  anon_sym_neg = 15,
  anon_sym_notl = 16,
  anon_sym_setb = 17,
  anon_sym_fs = 18,
  anon_sym_push = 19,
  anon_sym_seto = 20,
  anon_sym_sete = 21,
  anon_sym_setle = 22,
  anon_sym_seta = 23,
  anon_sym_not = 24,
  anon_sym_div = 25,
  anon_sym_notrack = 26,
  anon_sym_jns = 27,
  anon_sym_mulw = 28,
  anon_sym_rex_DOTRB = 29,
  anon_sym_incl = 30,
  anon_sym_setbe = 31,
  anon_sym_setp = 32,
  anon_sym_idivl = 33,
  anon_sym_setns = 34,
  anon_sym_inc = 35,
  anon_sym_setne = 36,
  anon_sym_divq = 37,
  anon_sym_prefetcht1 = 38,
  anon_sym_fstpl = 39,
  anon_sym_pop = 40,
  anon_sym_mulq = 41,
  anon_sym_mul = 42,
  anon_sym_bswap = 43,
  anon_sym_fildl = 44,
  anon_sym_dec = 45,
  anon_sym_setae = 46,
  anon_sym_js = 47,
  anon_sym_mull = 48,
  anon_sym_setnp = 49,
  anon_sym_mulb = 50,
  anon_sym_setg = 51,
  anon_sym_COMMA = 52,
  anon_sym_vucomiss = 53,
  anon_sym_vmovss = 54,
  anon_sym_vmovapd = 55,
  anon_sym_vpbroadcastd = 56,
  anon_sym_orl = 57,
  anon_sym_pclmullqlqdq = 58,
  anon_sym_por = 59,
  anon_sym_pcmpgtd = 60,
  anon_sym_movswq = 61,
  anon_sym_psrldq = 62,
  anon_sym_rep = 63,
  anon_sym_kmovw = 64,
  anon_sym_movhlps = 65,
  anon_sym_addq = 66,
  anon_sym_psrlq = 67,
  anon_sym_punpcklwd = 68,
  anon_sym_outsb = 69,
  anon_sym_bsf = 70,
  anon_sym_pcmpeqb = 71,
  anon_sym_maxsd = 72,
  anon_sym_sha1msg1 = 73,
  anon_sym_andpd = 74,
  anon_sym_vmovd = 75,
  anon_sym_pmuludq = 76,
  anon_sym_vbroadcasti32x4 = 77,
  anon_sym_ucomisd = 78,
  anon_sym_popcnt = 79,
  anon_sym_pmovmskb = 80,
  anon_sym_psubusb = 81,
  anon_sym_cmovp = 82,
  anon_sym_psubusw = 83,
  anon_sym_cmova = 84,
  anon_sym_psubq = 85,
  anon_sym_cmovge = 86,
  anon_sym_subl = 87,
  anon_sym_cmovbe = 88,
  anon_sym_punpckhdq = 89,
  anon_sym_psrlw = 90,
  anon_sym_cvttsd2si = 91,
  anon_sym_cmovb = 92,
  anon_sym_cvtsd2ss = 93,
  anon_sym_movzbq = 94,
  anon_sym_rex_DOTWB = 95,
  anon_sym_xchg = 96,
  anon_sym_aesdec = 97,
  anon_sym_punpckhbw = 98,
  anon_sym_cvtsi2sd = 99,
  anon_sym_psubd = 100,
  anon_sym_adox = 101,
  anon_sym_vmovdqa32 = 102,
  anon_sym_packuswb = 103,
  anon_sym_btr = 104,
  anon_sym_cvtsi2sdl = 105,
  anon_sym_vbroadcastss = 106,
  anon_sym_subpd = 107,
  anon_sym_aesdeclast = 108,
  anon_sym_andw = 109,
  anon_sym_pslld = 110,
  anon_sym_vmovaps = 111,
  anon_sym_xorl = 112,
  anon_sym_divss = 113,
  anon_sym_punpckhqdq = 114,
  anon_sym_btl = 115,
  anon_sym_pmaddubsw = 116,
  anon_sym_pmaddwd = 117,
  anon_sym_movsbw = 118,
  anon_sym_orq = 119,
  anon_sym_cvtss2sd = 120,
  anon_sym_divsd = 121,
  anon_sym_vmovq = 122,
  anon_sym_xorw = 123,
  anon_sym_minsd = 124,
  anon_sym_xorps = 125,
  anon_sym_bsr = 126,
  anon_sym_pslldq = 127,
  anon_sym_cmovo = 128,
  anon_sym_lock = 129,
  anon_sym_ucomiss = 130,
  anon_sym_punpcklqdq = 131,
  anon_sym_cmovle = 132,
  anon_sym_roll = 133,
  anon_sym_vbroadcasti128 = 134,
  anon_sym_outsl = 135,
  anon_sym_psubb = 136,
  anon_sym_movhps = 137,
  anon_sym_movapd = 138,
  anon_sym_punpckldq = 139,
  anon_sym_movabs = 140,
  anon_sym_rex = 141,
  anon_sym_cmovne = 142,
  anon_sym_pclmulhqhqdq = 143,
  anon_sym_fmulp = 144,
  anon_sym_cmovns = 145,
  anon_sym_bt = 146,
  anon_sym_orb = 147,
  anon_sym_movbe = 148,
  anon_sym_vmovdqu64 = 149,
  anon_sym_maxss = 150,
  anon_sym_xorpd = 151,
  anon_sym_psllq = 152,
  anon_sym_pcmpeqd = 153,
  anon_sym_punpcklbw = 154,
  anon_sym_cvttss2si = 155,
  anon_sym_andps = 156,
  anon_sym_orw = 157,
  anon_sym_cmove = 158,
  anon_sym_paddd = 159,
  anon_sym_re = 160,
  anon_sym_andb = 161,
  anon_sym_movsb = 162,
  anon_sym_andl = 163,
  anon_sym_vmovdqa = 164,
  anon_sym_paddq = 165,
  anon_sym_aesenclast = 166,
  anon_sym_minss = 167,
  anon_sym_cmovg = 168,
  anon_sym_vucomisd = 169,
  anon_sym_vmovsd = 170,
  anon_sym_adcx = 171,
  anon_sym_cmovl = 172,
  anon_sym_comisd = 173,
  anon_sym_cvtsi2sdq = 174,
  anon_sym_subq = 175,
  anon_sym_knotw = 176,
  anon_sym_pxor = 177,
  anon_sym_pandn = 178,
  anon_sym_repnz = 179,
  anon_sym_bts = 180,
  anon_sym_tzcnt = 181,
  anon_sym_paddw = 182,
  anon_sym_pclmullqhqdq = 183,
  anon_sym_rorl = 184,
  anon_sym_psrld = 185,
  anon_sym_insl = 186,
  anon_sym_insb = 187,
  anon_sym_punpckhwd = 188,
  anon_sym_pshufb = 189,
  anon_sym_cvtsi2ss = 190,
  anon_sym_testl = 191,
  anon_sym_comiss = 192,
  anon_sym_aesenc = 193,
  anon_sym_cvtsi2ssl = 194,
  anon_sym_psrad = 195,
  anon_sym_vpbroadcastq = 196,
  anon_sym_unpckhpd = 197,
  anon_sym_test = 198,
  anon_sym_sha1nexte = 199,
  anon_sym_cmovae = 200,
  anon_sym_sha1msg2 = 201,
  anon_sym_movzbw = 202,
  anon_sym_vmovdqa64 = 203,
  anon_sym_cmovs = 204,
  anon_sym_vpaddb = 205,
  anon_sym_vpsrlq = 206,
  anon_sym_vpmaddubsw = 207,
  anon_sym_shrd = 208,
  anon_sym_vextracti128 = 209,
  anon_sym_vunpcklpd = 210,
  anon_sym_vcvtusi2sd = 211,
  anon_sym_vpsubw = 212,
  anon_sym_shufpd = 213,
  anon_sym_vpunpckhqdq = 214,
  anon_sym_pextrb = 215,
  anon_sym_vxorps = 216,
  anon_sym_vpxord = 217,
  anon_sym_nopw = 218,
  anon_sym_vprord = 219,
  anon_sym_shrx = 220,
  anon_sym_rorx = 221,
  anon_sym_vpunpckhwd = 222,
  anon_sym_pinsrw = 223,
  anon_sym_vpmuludq = 224,
  anon_sym_vpunpcklqdq = 225,
  anon_sym_vpand = 226,
  anon_sym_aeskeygenassist = 227,
  anon_sym_vaesenc = 228,
  anon_sym_vpcmpltud = 229,
  anon_sym_vpextrw = 230,
  anon_sym_vpslldq = 231,
  anon_sym_vprorq = 232,
  anon_sym_blendvps = 233,
  anon_sym_pshufd = 234,
  anon_sym_vpaddw = 235,
  anon_sym_vpsllw = 236,
  anon_sym_vpsrld = 237,
  anon_sym_pextrq = 238,
  anon_sym_vpsubd = 239,
  anon_sym_pextrw = 240,
  anon_sym_shufps = 241,
  anon_sym_pshuflw = 242,
  anon_sym_vpsubq = 243,
  anon_sym_shld = 244,
  anon_sym_vpslld = 245,
  anon_sym_vpermt2d = 246,
  anon_sym_vunpckhpd = 247,
  anon_sym_vmulsd = 248,
  anon_sym_vpunpckhdq = 249,
  anon_sym_vpshufd = 250,
  anon_sym_vpor = 251,
  anon_sym_vpunpckldq = 252,
  anon_sym_vextracti32x4 = 253,
  anon_sym_vsubsd = 254,
  anon_sym_vpmaddwd = 255,
  anon_sym_pblendw = 256,
  anon_sym_vunpckhps = 257,
  anon_sym_vpblendmd = 258,
  anon_sym_vpsllq = 259,
  anon_sym_sarx = 260,
  anon_sym_shlx = 261,
  anon_sym_vpxor = 262,
  anon_sym_vpermd = 263,
  anon_sym_vpcmpgtd = 264,
  anon_sym_vpsubusw = 265,
  anon_sym_vpackusdw = 266,
  anon_sym_mulx = 267,
  anon_sym_vpsrlw = 268,
  anon_sym_vpaddq = 269,
  anon_sym_pshufhw = 270,
  anon_sym_andn = 271,
  anon_sym_vpunpcklwd = 272,
  anon_sym_palignr = 273,
  anon_sym_pinsrd = 274,
  anon_sym_vpsrldq = 275,
  anon_sym_vpermq = 276,
  anon_sym_vunpcklps = 277,
  anon_sym_sha1rnds4 = 278,
  anon_sym_vpermi2d = 279,
  anon_sym_vaesenclast = 280,
  anon_sym_vdivsd = 281,
  anon_sym_vpaddd = 282,
  anon_sym_pinsrb = 283,
  anon_sym_vpmullw = 284,
  anon_sym_vpshufb = 285,
  anon_sym_vpinsrw = 286,
  anon_sym_vpblendd = 287,
  anon_sym_vinserti128 = 288,
  anon_sym_vshufi64x2 = 289,
  anon_sym_addw = 290,
  anon_sym_vperm2i128 = 291,
  anon_sym_vpinsrd = 292,
  anon_sym_vpinsrq = 293,
  anon_sym_vpinsrb = 294,
  anon_sym_vperm2f128 = 295,
  anon_sym_vshufi32x4 = 296,
  anon_sym_vblendps = 297,
  anon_sym_vshufps = 298,
  anon_sym_vpalignr = 299,
  anon_sym_vblendvps = 300,
  anon_sym_vinsertf128 = 301,
  anon_sym_vinserti32x4 = 302,
  anon_sym_movsbl = 303,
  anon_sym_cmpb = 304,
  anon_sym_cwtl = 305,
  anon_sym_shrl = 306,
  anon_sym_xor = 307,
  anon_sym_andq = 308,
  anon_sym_cmp = 309,
  anon_sym_cwtd = 310,
  anon_sym_movdqa = 311,
  anon_sym_movq = 312,
  anon_sym_addb = 313,
  anon_sym_jno = 314,
  anon_sym_rex_DOTW = 315,
  anon_sym_testb = 316,
  anon_sym_addsd = 317,
  anon_sym_rol = 318,
  anon_sym_sar = 319,
  anon_sym_rex_DOTB = 320,
  anon_sym_vmovdqu = 321,
  anon_sym_callq = 322,
  anon_sym_movups = 323,
  anon_sym_vpclmullqhqdq = 324,
  anon_sym_subss = 325,
  anon_sym_jb = 326,
  anon_sym_rex_DOTRXB = 327,
  anon_sym_jae = 328,
  anon_sym_and = 329,
  anon_sym_mulsd = 330,
  anon_sym_addl = 331,
  anon_sym_jmp = 332,
  anon_sym_jne = 333,
  anon_sym_cltq = 334,
  anon_sym_sub = 335,
  anon_sym_je = 336,
  anon_sym_cltd = 337,
  anon_sym_movb = 338,
  anon_sym_movaps = 339,
  anon_sym_cpuid = 340,
  anon_sym_vmovdqu32 = 341,
  anon_sym_jo = 342,
  anon_sym_jmpq = 343,
  anon_sym_or = 344,
  anon_sym_rex_DOTWRB = 345,
  anon_sym_movl = 346,
  anon_sym_retq = 347,
  anon_sym_jge = 348,
  anon_sym_movsd = 349,
  anon_sym_jg = 350,
  anon_sym_movss = 351,
  anon_sym_vpclmulhqhqdq = 352,
  anon_sym_shl = 353,
  anon_sym_subw = 354,
  anon_sym_ror = 355,
  anon_sym_cbtw = 356,
  anon_sym_repz = 357,
  anon_sym_mulss = 358,
  anon_sym_movw = 359,
  anon_sym_vpclmullqlqdq = 360,
  anon_sym_movsbq = 361,
  anon_sym_nopl = 362,
  anon_sym_shll = 363,
  anon_sym_cqto = 364,
  anon_sym_mov = 365,
  anon_sym_ss = 366,
  anon_sym_adc = 367,
  anon_sym_leaveq = 368,
  anon_sym_lea = 369,
  anon_sym_movslq = 370,
  anon_sym_mfence = 371,
  anon_sym_ud2 = 372,
  anon_sym_rex_DOTWRXB = 373,
  anon_sym_shr = 374,
  anon_sym_vpclmulhqlqdq = 375,
  anon_sym_movzbl = 376,
  anon_sym_femms = 377,
  anon_sym_addss = 378,
  anon_sym_movzwl = 379,
  anon_sym_sbb = 380,
  anon_sym_cmpq = 381,
  anon_sym_xgetbv = 382,
  anon_sym_pushq = 383,
  anon_sym_endbr64 = 384,
  anon_sym_vzeroupper = 385,
  anon_sym_ja = 386,
  anon_sym_nop = 387,
  anon_sym_addr32 = 388,
  anon_sym_movdqu = 389,
  anon_sym_pand = 390,
  anon_sym_movswl = 391,
  anon_sym_prefetcht0 = 392,
  anon_sym_vmovups = 393,
  anon_sym_add = 394,
  anon_sym_subsd = 395,
  anon_sym_subb = 396,
  anon_sym_vinserti64x4 = 397,
  anon_sym_rex_DOTXB = 398,
  anon_sym_vzeroall = 399,
  anon_sym_shrq = 400,
  anon_sym_sarl = 401,
  anon_sym_cmpw = 402,
  anon_sym_data16 = 403,
  anon_sym_jbe = 404,
  anon_sym_jl = 405,
  anon_sym_shlq = 406,
  anon_sym_cmpl = 407,
  anon_sym_movd = 408,
  anon_sym_imul = 409,
  aux_sym_operand_token1 = 410,
  sym_two_bytes = 411,
  sym_prog = 412,
  sym__line = 413,
  sym_instruction_one_operand = 414,
  sym_opcodes_one_operand = 415,
  sym_instruction_two_operands = 416,
  sym_opcodes_two_operands = 417,
  sym_instruction_three_operands = 418,
  sym_opcodes_three_operands = 419,
  sym_instruction_four_operands = 420,
  sym_opcodes_four_operands = 421,
  sym_instruction_six_operands = 422,
  sym_opcodes_six_operands = 423,
  sym_instruction_undetermined_operands = 424,
  sym_opcodes_undetermined_operands = 425,
  sym_operand = 426,
  aux_sym_prog_repeat1 = 427,
  aux_sym_instruction_one_operand_repeat1 = 428,
  aux_sym_instruction_one_operand_repeat2 = 429,
  aux_sym_operand_repeat1 = 430,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_gs] = "gs",
  [anon_sym_idiv] = "idiv",
  [anon_sym_negl] = "negl",
  [anon_sym_negq] = "negq",
  [anon_sym_jp] = "jp",
  [anon_sym_jrcxz] = "jrcxz",
  [anon_sym_notw] = "notw",
  [anon_sym_setl] = "setl",
  [anon_sym_jle] = "jle",
  [anon_sym_divl] = "divl",
  [anon_sym_setge] = "setge",
  [anon_sym_fldt] = "fldt",
  [anon_sym_neg] = "neg",
  [anon_sym_notl] = "notl",
  [anon_sym_setb] = "setb",
  [anon_sym_fs] = "fs",
  [anon_sym_push] = "push",
  [anon_sym_seto] = "seto",
  [anon_sym_sete] = "sete",
  [anon_sym_setle] = "setle",
  [anon_sym_seta] = "seta",
  [anon_sym_not] = "not",
  [anon_sym_div] = "div",
  [anon_sym_notrack] = "notrack",
  [anon_sym_jns] = "jns",
  [anon_sym_mulw] = "mulw",
  [anon_sym_rex_DOTRB] = "rex.RB",
  [anon_sym_incl] = "incl",
  [anon_sym_setbe] = "setbe",
  [anon_sym_setp] = "setp",
  [anon_sym_idivl] = "idivl",
  [anon_sym_setns] = "setns",
  [anon_sym_inc] = "inc",
  [anon_sym_setne] = "setne",
  [anon_sym_divq] = "divq",
  [anon_sym_prefetcht1] = "prefetcht1",
  [anon_sym_fstpl] = "fstpl",
  [anon_sym_pop] = "pop",
  [anon_sym_mulq] = "mulq",
  [anon_sym_mul] = "mul",
  [anon_sym_bswap] = "bswap",
  [anon_sym_fildl] = "fildl",
  [anon_sym_dec] = "dec",
  [anon_sym_setae] = "setae",
  [anon_sym_js] = "js",
  [anon_sym_mull] = "mull",
  [anon_sym_setnp] = "setnp",
  [anon_sym_mulb] = "mulb",
  [anon_sym_setg] = "setg",
  [anon_sym_COMMA] = ",",
  [anon_sym_vucomiss] = "vucomiss",
  [anon_sym_vmovss] = "vmovss",
  [anon_sym_vmovapd] = "vmovapd",
  [anon_sym_vpbroadcastd] = "vpbroadcastd",
  [anon_sym_orl] = "orl",
  [anon_sym_pclmullqlqdq] = "pclmullqlqdq",
  [anon_sym_por] = "por",
  [anon_sym_pcmpgtd] = "pcmpgtd",
  [anon_sym_movswq] = "movswq",
  [anon_sym_psrldq] = "psrldq",
  [anon_sym_rep] = "rep",
  [anon_sym_kmovw] = "kmovw",
  [anon_sym_movhlps] = "movhlps",
  [anon_sym_addq] = "addq",
  [anon_sym_psrlq] = "psrlq",
  [anon_sym_punpcklwd] = "punpcklwd",
  [anon_sym_outsb] = "outsb",
  [anon_sym_bsf] = "bsf",
  [anon_sym_pcmpeqb] = "pcmpeqb",
  [anon_sym_maxsd] = "maxsd",
  [anon_sym_sha1msg1] = "sha1msg1",
  [anon_sym_andpd] = "andpd",
  [anon_sym_vmovd] = "vmovd",
  [anon_sym_pmuludq] = "pmuludq",
  [anon_sym_vbroadcasti32x4] = "vbroadcasti32x4",
  [anon_sym_ucomisd] = "ucomisd",
  [anon_sym_popcnt] = "popcnt",
  [anon_sym_pmovmskb] = "pmovmskb",
  [anon_sym_psubusb] = "psubusb",
  [anon_sym_cmovp] = "cmovp",
  [anon_sym_psubusw] = "psubusw",
  [anon_sym_cmova] = "cmova",
  [anon_sym_psubq] = "psubq",
  [anon_sym_cmovge] = "cmovge",
  [anon_sym_subl] = "subl",
  [anon_sym_cmovbe] = "cmovbe",
  [anon_sym_punpckhdq] = "punpckhdq",
  [anon_sym_psrlw] = "psrlw",
  [anon_sym_cvttsd2si] = "cvttsd2si",
  [anon_sym_cmovb] = "cmovb",
  [anon_sym_cvtsd2ss] = "cvtsd2ss",
  [anon_sym_movzbq] = "movzbq",
  [anon_sym_rex_DOTWB] = "rex.WB",
  [anon_sym_xchg] = "xchg",
  [anon_sym_aesdec] = "aesdec",
  [anon_sym_punpckhbw] = "punpckhbw",
  [anon_sym_cvtsi2sd] = "cvtsi2sd",
  [anon_sym_psubd] = "psubd",
  [anon_sym_adox] = "adox",
  [anon_sym_vmovdqa32] = "vmovdqa32",
  [anon_sym_packuswb] = "packuswb",
  [anon_sym_btr] = "btr",
  [anon_sym_cvtsi2sdl] = "cvtsi2sdl",
  [anon_sym_vbroadcastss] = "vbroadcastss",
  [anon_sym_subpd] = "subpd",
  [anon_sym_aesdeclast] = "aesdeclast",
  [anon_sym_andw] = "andw",
  [anon_sym_pslld] = "pslld",
  [anon_sym_vmovaps] = "vmovaps",
  [anon_sym_xorl] = "xorl",
  [anon_sym_divss] = "divss",
  [anon_sym_punpckhqdq] = "punpckhqdq",
  [anon_sym_btl] = "btl",
  [anon_sym_pmaddubsw] = "pmaddubsw",
  [anon_sym_pmaddwd] = "pmaddwd",
  [anon_sym_movsbw] = "movsbw",
  [anon_sym_orq] = "orq",
  [anon_sym_cvtss2sd] = "cvtss2sd",
  [anon_sym_divsd] = "divsd",
  [anon_sym_vmovq] = "vmovq",
  [anon_sym_xorw] = "xorw",
  [anon_sym_minsd] = "minsd",
  [anon_sym_xorps] = "xorps",
  [anon_sym_bsr] = "bsr",
  [anon_sym_pslldq] = "pslldq",
  [anon_sym_cmovo] = "cmovo",
  [anon_sym_lock] = "lock",
  [anon_sym_ucomiss] = "ucomiss",
  [anon_sym_punpcklqdq] = "punpcklqdq",
  [anon_sym_cmovle] = "cmovle",
  [anon_sym_roll] = "roll",
  [anon_sym_vbroadcasti128] = "vbroadcasti128",
  [anon_sym_outsl] = "outsl",
  [anon_sym_psubb] = "psubb",
  [anon_sym_movhps] = "movhps",
  [anon_sym_movapd] = "movapd",
  [anon_sym_punpckldq] = "punpckldq",
  [anon_sym_movabs] = "movabs",
  [anon_sym_rex] = "rex",
  [anon_sym_cmovne] = "cmovne",
  [anon_sym_pclmulhqhqdq] = "pclmulhqhqdq",
  [anon_sym_fmulp] = "fmulp",
  [anon_sym_cmovns] = "cmovns",
  [anon_sym_bt] = "bt",
  [anon_sym_orb] = "orb",
  [anon_sym_movbe] = "movbe",
  [anon_sym_vmovdqu64] = "vmovdqu64",
  [anon_sym_maxss] = "maxss",
  [anon_sym_xorpd] = "xorpd",
  [anon_sym_psllq] = "psllq",
  [anon_sym_pcmpeqd] = "pcmpeqd",
  [anon_sym_punpcklbw] = "punpcklbw",
  [anon_sym_cvttss2si] = "cvttss2si",
  [anon_sym_andps] = "andps",
  [anon_sym_orw] = "orw",
  [anon_sym_cmove] = "cmove",
  [anon_sym_paddd] = "paddd",
  [anon_sym_re] = "re",
  [anon_sym_andb] = "andb",
  [anon_sym_movsb] = "movsb",
  [anon_sym_andl] = "andl",
  [anon_sym_vmovdqa] = "vmovdqa",
  [anon_sym_paddq] = "paddq",
  [anon_sym_aesenclast] = "aesenclast",
  [anon_sym_minss] = "minss",
  [anon_sym_cmovg] = "cmovg",
  [anon_sym_vucomisd] = "vucomisd",
  [anon_sym_vmovsd] = "vmovsd",
  [anon_sym_adcx] = "adcx",
  [anon_sym_cmovl] = "cmovl",
  [anon_sym_comisd] = "comisd",
  [anon_sym_cvtsi2sdq] = "cvtsi2sdq",
  [anon_sym_subq] = "subq",
  [anon_sym_knotw] = "knotw",
  [anon_sym_pxor] = "pxor",
  [anon_sym_pandn] = "pandn",
  [anon_sym_repnz] = "repnz",
  [anon_sym_bts] = "bts",
  [anon_sym_tzcnt] = "tzcnt",
  [anon_sym_paddw] = "paddw",
  [anon_sym_pclmullqhqdq] = "pclmullqhqdq",
  [anon_sym_rorl] = "rorl",
  [anon_sym_psrld] = "psrld",
  [anon_sym_insl] = "insl",
  [anon_sym_insb] = "insb",
  [anon_sym_punpckhwd] = "punpckhwd",
  [anon_sym_pshufb] = "pshufb",
  [anon_sym_cvtsi2ss] = "cvtsi2ss",
  [anon_sym_testl] = "testl",
  [anon_sym_comiss] = "comiss",
  [anon_sym_aesenc] = "aesenc",
  [anon_sym_cvtsi2ssl] = "cvtsi2ssl",
  [anon_sym_psrad] = "psrad",
  [anon_sym_vpbroadcastq] = "vpbroadcastq",
  [anon_sym_unpckhpd] = "unpckhpd",
  [anon_sym_test] = "test",
  [anon_sym_sha1nexte] = "sha1nexte",
  [anon_sym_cmovae] = "cmovae",
  [anon_sym_sha1msg2] = "sha1msg2",
  [anon_sym_movzbw] = "movzbw",
  [anon_sym_vmovdqa64] = "vmovdqa64",
  [anon_sym_cmovs] = "cmovs",
  [anon_sym_vpaddb] = "vpaddb",
  [anon_sym_vpsrlq] = "vpsrlq",
  [anon_sym_vpmaddubsw] = "vpmaddubsw",
  [anon_sym_shrd] = "shrd",
  [anon_sym_vextracti128] = "vextracti128",
  [anon_sym_vunpcklpd] = "vunpcklpd",
  [anon_sym_vcvtusi2sd] = "vcvtusi2sd",
  [anon_sym_vpsubw] = "vpsubw",
  [anon_sym_shufpd] = "shufpd",
  [anon_sym_vpunpckhqdq] = "vpunpckhqdq",
  [anon_sym_pextrb] = "pextrb",
  [anon_sym_vxorps] = "vxorps",
  [anon_sym_vpxord] = "vpxord",
  [anon_sym_nopw] = "nopw",
  [anon_sym_vprord] = "vprord",
  [anon_sym_shrx] = "shrx",
  [anon_sym_rorx] = "rorx",
  [anon_sym_vpunpckhwd] = "vpunpckhwd",
  [anon_sym_pinsrw] = "pinsrw",
  [anon_sym_vpmuludq] = "vpmuludq",
  [anon_sym_vpunpcklqdq] = "vpunpcklqdq",
  [anon_sym_vpand] = "vpand",
  [anon_sym_aeskeygenassist] = "aeskeygenassist",
  [anon_sym_vaesenc] = "vaesenc",
  [anon_sym_vpcmpltud] = "vpcmpltud",
  [anon_sym_vpextrw] = "vpextrw",
  [anon_sym_vpslldq] = "vpslldq",
  [anon_sym_vprorq] = "vprorq",
  [anon_sym_blendvps] = "blendvps",
  [anon_sym_pshufd] = "pshufd",
  [anon_sym_vpaddw] = "vpaddw",
  [anon_sym_vpsllw] = "vpsllw",
  [anon_sym_vpsrld] = "vpsrld",
  [anon_sym_pextrq] = "pextrq",
  [anon_sym_vpsubd] = "vpsubd",
  [anon_sym_pextrw] = "pextrw",
  [anon_sym_shufps] = "shufps",
  [anon_sym_pshuflw] = "pshuflw",
  [anon_sym_vpsubq] = "vpsubq",
  [anon_sym_shld] = "shld",
  [anon_sym_vpslld] = "vpslld",
  [anon_sym_vpermt2d] = "vpermt2d",
  [anon_sym_vunpckhpd] = "vunpckhpd",
  [anon_sym_vmulsd] = "vmulsd",
  [anon_sym_vpunpckhdq] = "vpunpckhdq",
  [anon_sym_vpshufd] = "vpshufd",
  [anon_sym_vpor] = "vpor",
  [anon_sym_vpunpckldq] = "vpunpckldq",
  [anon_sym_vextracti32x4] = "vextracti32x4",
  [anon_sym_vsubsd] = "vsubsd",
  [anon_sym_vpmaddwd] = "vpmaddwd",
  [anon_sym_pblendw] = "pblendw",
  [anon_sym_vunpckhps] = "vunpckhps",
  [anon_sym_vpblendmd] = "vpblendmd",
  [anon_sym_vpsllq] = "vpsllq",
  [anon_sym_sarx] = "sarx",
  [anon_sym_shlx] = "shlx",
  [anon_sym_vpxor] = "vpxor",
  [anon_sym_vpermd] = "vpermd",
  [anon_sym_vpcmpgtd] = "vpcmpgtd",
  [anon_sym_vpsubusw] = "vpsubusw",
  [anon_sym_vpackusdw] = "vpackusdw",
  [anon_sym_mulx] = "mulx",
  [anon_sym_vpsrlw] = "vpsrlw",
  [anon_sym_vpaddq] = "vpaddq",
  [anon_sym_pshufhw] = "pshufhw",
  [anon_sym_andn] = "andn",
  [anon_sym_vpunpcklwd] = "vpunpcklwd",
  [anon_sym_palignr] = "palignr",
  [anon_sym_pinsrd] = "pinsrd",
  [anon_sym_vpsrldq] = "vpsrldq",
  [anon_sym_vpermq] = "vpermq",
  [anon_sym_vunpcklps] = "vunpcklps",
  [anon_sym_sha1rnds4] = "sha1rnds4",
  [anon_sym_vpermi2d] = "vpermi2d",
  [anon_sym_vaesenclast] = "vaesenclast",
  [anon_sym_vdivsd] = "vdivsd",
  [anon_sym_vpaddd] = "vpaddd",
  [anon_sym_pinsrb] = "pinsrb",
  [anon_sym_vpmullw] = "vpmullw",
  [anon_sym_vpshufb] = "vpshufb",
  [anon_sym_vpinsrw] = "vpinsrw",
  [anon_sym_vpblendd] = "vpblendd",
  [anon_sym_vinserti128] = "vinserti128",
  [anon_sym_vshufi64x2] = "vshufi64x2",
  [anon_sym_addw] = "addw",
  [anon_sym_vperm2i128] = "vperm2i128",
  [anon_sym_vpinsrd] = "vpinsrd",
  [anon_sym_vpinsrq] = "vpinsrq",
  [anon_sym_vpinsrb] = "vpinsrb",
  [anon_sym_vperm2f128] = "vperm2f128",
  [anon_sym_vshufi32x4] = "vshufi32x4",
  [anon_sym_vblendps] = "vblendps",
  [anon_sym_vshufps] = "vshufps",
  [anon_sym_vpalignr] = "vpalignr",
  [anon_sym_vblendvps] = "vblendvps",
  [anon_sym_vinsertf128] = "vinsertf128",
  [anon_sym_vinserti32x4] = "vinserti32x4",
  [anon_sym_movsbl] = "movsbl",
  [anon_sym_cmpb] = "cmpb",
  [anon_sym_cwtl] = "cwtl",
  [anon_sym_shrl] = "shrl",
  [anon_sym_xor] = "xor",
  [anon_sym_andq] = "andq",
  [anon_sym_cmp] = "cmp",
  [anon_sym_cwtd] = "cwtd",
  [anon_sym_movdqa] = "movdqa",
  [anon_sym_movq] = "movq",
  [anon_sym_addb] = "addb",
  [anon_sym_jno] = "jno",
  [anon_sym_rex_DOTW] = "rex.W",
  [anon_sym_testb] = "testb",
  [anon_sym_addsd] = "addsd",
  [anon_sym_rol] = "rol",
  [anon_sym_sar] = "sar",
  [anon_sym_rex_DOTB] = "rex.B",
  [anon_sym_vmovdqu] = "vmovdqu",
  [anon_sym_callq] = "callq",
  [anon_sym_movups] = "movups",
  [anon_sym_vpclmullqhqdq] = "vpclmullqhqdq",
  [anon_sym_subss] = "subss",
  [anon_sym_jb] = "jb",
  [anon_sym_rex_DOTRXB] = "rex.RXB",
  [anon_sym_jae] = "jae",
  [anon_sym_and] = "and",
  [anon_sym_mulsd] = "mulsd",
  [anon_sym_addl] = "addl",
  [anon_sym_jmp] = "jmp",
  [anon_sym_jne] = "jne",
  [anon_sym_cltq] = "cltq",
  [anon_sym_sub] = "sub",
  [anon_sym_je] = "je",
  [anon_sym_cltd] = "cltd",
  [anon_sym_movb] = "movb",
  [anon_sym_movaps] = "movaps",
  [anon_sym_cpuid] = "cpuid",
  [anon_sym_vmovdqu32] = "vmovdqu32",
  [anon_sym_jo] = "jo",
  [anon_sym_jmpq] = "jmpq",
  [anon_sym_or] = "or",
  [anon_sym_rex_DOTWRB] = "rex.WRB",
  [anon_sym_movl] = "movl",
  [anon_sym_retq] = "retq",
  [anon_sym_jge] = "jge",
  [anon_sym_movsd] = "movsd",
  [anon_sym_jg] = "jg",
  [anon_sym_movss] = "movss",
  [anon_sym_vpclmulhqhqdq] = "vpclmulhqhqdq",
  [anon_sym_shl] = "shl",
  [anon_sym_subw] = "subw",
  [anon_sym_ror] = "ror",
  [anon_sym_cbtw] = "cbtw",
  [anon_sym_repz] = "repz",
  [anon_sym_mulss] = "mulss",
  [anon_sym_movw] = "movw",
  [anon_sym_vpclmullqlqdq] = "vpclmullqlqdq",
  [anon_sym_movsbq] = "movsbq",
  [anon_sym_nopl] = "nopl",
  [anon_sym_shll] = "shll",
  [anon_sym_cqto] = "cqto",
  [anon_sym_mov] = "mov",
  [anon_sym_ss] = "ss",
  [anon_sym_adc] = "adc",
  [anon_sym_leaveq] = "leaveq",
  [anon_sym_lea] = "lea",
  [anon_sym_movslq] = "movslq",
  [anon_sym_mfence] = "mfence",
  [anon_sym_ud2] = "ud2",
  [anon_sym_rex_DOTWRXB] = "rex.WRXB",
  [anon_sym_shr] = "shr",
  [anon_sym_vpclmulhqlqdq] = "vpclmulhqlqdq",
  [anon_sym_movzbl] = "movzbl",
  [anon_sym_femms] = "femms",
  [anon_sym_addss] = "addss",
  [anon_sym_movzwl] = "movzwl",
  [anon_sym_sbb] = "sbb",
  [anon_sym_cmpq] = "cmpq",
  [anon_sym_xgetbv] = "xgetbv",
  [anon_sym_pushq] = "pushq",
  [anon_sym_endbr64] = "endbr64",
  [anon_sym_vzeroupper] = "vzeroupper",
  [anon_sym_ja] = "ja",
  [anon_sym_nop] = "nop",
  [anon_sym_addr32] = "addr32",
  [anon_sym_movdqu] = "movdqu",
  [anon_sym_pand] = "pand",
  [anon_sym_movswl] = "movswl",
  [anon_sym_prefetcht0] = "prefetcht0",
  [anon_sym_vmovups] = "vmovups",
  [anon_sym_add] = "add",
  [anon_sym_subsd] = "subsd",
  [anon_sym_subb] = "subb",
  [anon_sym_vinserti64x4] = "vinserti64x4",
  [anon_sym_rex_DOTXB] = "rex.XB",
  [anon_sym_vzeroall] = "vzeroall",
  [anon_sym_shrq] = "shrq",
  [anon_sym_sarl] = "sarl",
  [anon_sym_cmpw] = "cmpw",
  [anon_sym_data16] = "data16",
  [anon_sym_jbe] = "jbe",
  [anon_sym_jl] = "jl",
  [anon_sym_shlq] = "shlq",
  [anon_sym_cmpl] = "cmpl",
  [anon_sym_movd] = "movd",
  [anon_sym_imul] = "imul",
  [aux_sym_operand_token1] = "operand_token1",
  [sym_two_bytes] = "two_bytes",
  [sym_prog] = "prog",
  [sym__line] = "_line",
  [sym_instruction_one_operand] = "instruction_one_operand",
  [sym_opcodes_one_operand] = "opcodes_one_operand",
  [sym_instruction_two_operands] = "instruction_two_operands",
  [sym_opcodes_two_operands] = "opcodes_two_operands",
  [sym_instruction_three_operands] = "instruction_three_operands",
  [sym_opcodes_three_operands] = "opcodes_three_operands",
  [sym_instruction_four_operands] = "instruction_four_operands",
  [sym_opcodes_four_operands] = "opcodes_four_operands",
  [sym_instruction_six_operands] = "instruction_six_operands",
  [sym_opcodes_six_operands] = "opcodes_six_operands",
  [sym_instruction_undetermined_operands] = "instruction_undetermined_operands",
  [sym_opcodes_undetermined_operands] = "opcodes_undetermined_operands",
  [sym_operand] = "operand",
  [aux_sym_prog_repeat1] = "prog_repeat1",
  [aux_sym_instruction_one_operand_repeat1] = "instruction_one_operand_repeat1",
  [aux_sym_instruction_one_operand_repeat2] = "instruction_one_operand_repeat2",
  [aux_sym_operand_repeat1] = "operand_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_gs] = anon_sym_gs,
  [anon_sym_idiv] = anon_sym_idiv,
  [anon_sym_negl] = anon_sym_negl,
  [anon_sym_negq] = anon_sym_negq,
  [anon_sym_jp] = anon_sym_jp,
  [anon_sym_jrcxz] = anon_sym_jrcxz,
  [anon_sym_notw] = anon_sym_notw,
  [anon_sym_setl] = anon_sym_setl,
  [anon_sym_jle] = anon_sym_jle,
  [anon_sym_divl] = anon_sym_divl,
  [anon_sym_setge] = anon_sym_setge,
  [anon_sym_fldt] = anon_sym_fldt,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_notl] = anon_sym_notl,
  [anon_sym_setb] = anon_sym_setb,
  [anon_sym_fs] = anon_sym_fs,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_seto] = anon_sym_seto,
  [anon_sym_sete] = anon_sym_sete,
  [anon_sym_setle] = anon_sym_setle,
  [anon_sym_seta] = anon_sym_seta,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_notrack] = anon_sym_notrack,
  [anon_sym_jns] = anon_sym_jns,
  [anon_sym_mulw] = anon_sym_mulw,
  [anon_sym_rex_DOTRB] = anon_sym_rex_DOTRB,
  [anon_sym_incl] = anon_sym_incl,
  [anon_sym_setbe] = anon_sym_setbe,
  [anon_sym_setp] = anon_sym_setp,
  [anon_sym_idivl] = anon_sym_idivl,
  [anon_sym_setns] = anon_sym_setns,
  [anon_sym_inc] = anon_sym_inc,
  [anon_sym_setne] = anon_sym_setne,
  [anon_sym_divq] = anon_sym_divq,
  [anon_sym_prefetcht1] = anon_sym_prefetcht1,
  [anon_sym_fstpl] = anon_sym_fstpl,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_mulq] = anon_sym_mulq,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_bswap] = anon_sym_bswap,
  [anon_sym_fildl] = anon_sym_fildl,
  [anon_sym_dec] = anon_sym_dec,
  [anon_sym_setae] = anon_sym_setae,
  [anon_sym_js] = anon_sym_js,
  [anon_sym_mull] = anon_sym_mull,
  [anon_sym_setnp] = anon_sym_setnp,
  [anon_sym_mulb] = anon_sym_mulb,
  [anon_sym_setg] = anon_sym_setg,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_vucomiss] = anon_sym_vucomiss,
  [anon_sym_vmovss] = anon_sym_vmovss,
  [anon_sym_vmovapd] = anon_sym_vmovapd,
  [anon_sym_vpbroadcastd] = anon_sym_vpbroadcastd,
  [anon_sym_orl] = anon_sym_orl,
  [anon_sym_pclmullqlqdq] = anon_sym_pclmullqlqdq,
  [anon_sym_por] = anon_sym_por,
  [anon_sym_pcmpgtd] = anon_sym_pcmpgtd,
  [anon_sym_movswq] = anon_sym_movswq,
  [anon_sym_psrldq] = anon_sym_psrldq,
  [anon_sym_rep] = anon_sym_rep,
  [anon_sym_kmovw] = anon_sym_kmovw,
  [anon_sym_movhlps] = anon_sym_movhlps,
  [anon_sym_addq] = anon_sym_addq,
  [anon_sym_psrlq] = anon_sym_psrlq,
  [anon_sym_punpcklwd] = anon_sym_punpcklwd,
  [anon_sym_outsb] = anon_sym_outsb,
  [anon_sym_bsf] = anon_sym_bsf,
  [anon_sym_pcmpeqb] = anon_sym_pcmpeqb,
  [anon_sym_maxsd] = anon_sym_maxsd,
  [anon_sym_sha1msg1] = anon_sym_sha1msg1,
  [anon_sym_andpd] = anon_sym_andpd,
  [anon_sym_vmovd] = anon_sym_vmovd,
  [anon_sym_pmuludq] = anon_sym_pmuludq,
  [anon_sym_vbroadcasti32x4] = anon_sym_vbroadcasti32x4,
  [anon_sym_ucomisd] = anon_sym_ucomisd,
  [anon_sym_popcnt] = anon_sym_popcnt,
  [anon_sym_pmovmskb] = anon_sym_pmovmskb,
  [anon_sym_psubusb] = anon_sym_psubusb,
  [anon_sym_cmovp] = anon_sym_cmovp,
  [anon_sym_psubusw] = anon_sym_psubusw,
  [anon_sym_cmova] = anon_sym_cmova,
  [anon_sym_psubq] = anon_sym_psubq,
  [anon_sym_cmovge] = anon_sym_cmovge,
  [anon_sym_subl] = anon_sym_subl,
  [anon_sym_cmovbe] = anon_sym_cmovbe,
  [anon_sym_punpckhdq] = anon_sym_punpckhdq,
  [anon_sym_psrlw] = anon_sym_psrlw,
  [anon_sym_cvttsd2si] = anon_sym_cvttsd2si,
  [anon_sym_cmovb] = anon_sym_cmovb,
  [anon_sym_cvtsd2ss] = anon_sym_cvtsd2ss,
  [anon_sym_movzbq] = anon_sym_movzbq,
  [anon_sym_rex_DOTWB] = anon_sym_rex_DOTWB,
  [anon_sym_xchg] = anon_sym_xchg,
  [anon_sym_aesdec] = anon_sym_aesdec,
  [anon_sym_punpckhbw] = anon_sym_punpckhbw,
  [anon_sym_cvtsi2sd] = anon_sym_cvtsi2sd,
  [anon_sym_psubd] = anon_sym_psubd,
  [anon_sym_adox] = anon_sym_adox,
  [anon_sym_vmovdqa32] = anon_sym_vmovdqa32,
  [anon_sym_packuswb] = anon_sym_packuswb,
  [anon_sym_btr] = anon_sym_btr,
  [anon_sym_cvtsi2sdl] = anon_sym_cvtsi2sdl,
  [anon_sym_vbroadcastss] = anon_sym_vbroadcastss,
  [anon_sym_subpd] = anon_sym_subpd,
  [anon_sym_aesdeclast] = anon_sym_aesdeclast,
  [anon_sym_andw] = anon_sym_andw,
  [anon_sym_pslld] = anon_sym_pslld,
  [anon_sym_vmovaps] = anon_sym_vmovaps,
  [anon_sym_xorl] = anon_sym_xorl,
  [anon_sym_divss] = anon_sym_divss,
  [anon_sym_punpckhqdq] = anon_sym_punpckhqdq,
  [anon_sym_btl] = anon_sym_btl,
  [anon_sym_pmaddubsw] = anon_sym_pmaddubsw,
  [anon_sym_pmaddwd] = anon_sym_pmaddwd,
  [anon_sym_movsbw] = anon_sym_movsbw,
  [anon_sym_orq] = anon_sym_orq,
  [anon_sym_cvtss2sd] = anon_sym_cvtss2sd,
  [anon_sym_divsd] = anon_sym_divsd,
  [anon_sym_vmovq] = anon_sym_vmovq,
  [anon_sym_xorw] = anon_sym_xorw,
  [anon_sym_minsd] = anon_sym_minsd,
  [anon_sym_xorps] = anon_sym_xorps,
  [anon_sym_bsr] = anon_sym_bsr,
  [anon_sym_pslldq] = anon_sym_pslldq,
  [anon_sym_cmovo] = anon_sym_cmovo,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_ucomiss] = anon_sym_ucomiss,
  [anon_sym_punpcklqdq] = anon_sym_punpcklqdq,
  [anon_sym_cmovle] = anon_sym_cmovle,
  [anon_sym_roll] = anon_sym_roll,
  [anon_sym_vbroadcasti128] = anon_sym_vbroadcasti128,
  [anon_sym_outsl] = anon_sym_outsl,
  [anon_sym_psubb] = anon_sym_psubb,
  [anon_sym_movhps] = anon_sym_movhps,
  [anon_sym_movapd] = anon_sym_movapd,
  [anon_sym_punpckldq] = anon_sym_punpckldq,
  [anon_sym_movabs] = anon_sym_movabs,
  [anon_sym_rex] = anon_sym_rex,
  [anon_sym_cmovne] = anon_sym_cmovne,
  [anon_sym_pclmulhqhqdq] = anon_sym_pclmulhqhqdq,
  [anon_sym_fmulp] = anon_sym_fmulp,
  [anon_sym_cmovns] = anon_sym_cmovns,
  [anon_sym_bt] = anon_sym_bt,
  [anon_sym_orb] = anon_sym_orb,
  [anon_sym_movbe] = anon_sym_movbe,
  [anon_sym_vmovdqu64] = anon_sym_vmovdqu64,
  [anon_sym_maxss] = anon_sym_maxss,
  [anon_sym_xorpd] = anon_sym_xorpd,
  [anon_sym_psllq] = anon_sym_psllq,
  [anon_sym_pcmpeqd] = anon_sym_pcmpeqd,
  [anon_sym_punpcklbw] = anon_sym_punpcklbw,
  [anon_sym_cvttss2si] = anon_sym_cvttss2si,
  [anon_sym_andps] = anon_sym_andps,
  [anon_sym_orw] = anon_sym_orw,
  [anon_sym_cmove] = anon_sym_cmove,
  [anon_sym_paddd] = anon_sym_paddd,
  [anon_sym_re] = anon_sym_re,
  [anon_sym_andb] = anon_sym_andb,
  [anon_sym_movsb] = anon_sym_movsb,
  [anon_sym_andl] = anon_sym_andl,
  [anon_sym_vmovdqa] = anon_sym_vmovdqa,
  [anon_sym_paddq] = anon_sym_paddq,
  [anon_sym_aesenclast] = anon_sym_aesenclast,
  [anon_sym_minss] = anon_sym_minss,
  [anon_sym_cmovg] = anon_sym_cmovg,
  [anon_sym_vucomisd] = anon_sym_vucomisd,
  [anon_sym_vmovsd] = anon_sym_vmovsd,
  [anon_sym_adcx] = anon_sym_adcx,
  [anon_sym_cmovl] = anon_sym_cmovl,
  [anon_sym_comisd] = anon_sym_comisd,
  [anon_sym_cvtsi2sdq] = anon_sym_cvtsi2sdq,
  [anon_sym_subq] = anon_sym_subq,
  [anon_sym_knotw] = anon_sym_knotw,
  [anon_sym_pxor] = anon_sym_pxor,
  [anon_sym_pandn] = anon_sym_pandn,
  [anon_sym_repnz] = anon_sym_repnz,
  [anon_sym_bts] = anon_sym_bts,
  [anon_sym_tzcnt] = anon_sym_tzcnt,
  [anon_sym_paddw] = anon_sym_paddw,
  [anon_sym_pclmullqhqdq] = anon_sym_pclmullqhqdq,
  [anon_sym_rorl] = anon_sym_rorl,
  [anon_sym_psrld] = anon_sym_psrld,
  [anon_sym_insl] = anon_sym_insl,
  [anon_sym_insb] = anon_sym_insb,
  [anon_sym_punpckhwd] = anon_sym_punpckhwd,
  [anon_sym_pshufb] = anon_sym_pshufb,
  [anon_sym_cvtsi2ss] = anon_sym_cvtsi2ss,
  [anon_sym_testl] = anon_sym_testl,
  [anon_sym_comiss] = anon_sym_comiss,
  [anon_sym_aesenc] = anon_sym_aesenc,
  [anon_sym_cvtsi2ssl] = anon_sym_cvtsi2ssl,
  [anon_sym_psrad] = anon_sym_psrad,
  [anon_sym_vpbroadcastq] = anon_sym_vpbroadcastq,
  [anon_sym_unpckhpd] = anon_sym_unpckhpd,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_sha1nexte] = anon_sym_sha1nexte,
  [anon_sym_cmovae] = anon_sym_cmovae,
  [anon_sym_sha1msg2] = anon_sym_sha1msg2,
  [anon_sym_movzbw] = anon_sym_movzbw,
  [anon_sym_vmovdqa64] = anon_sym_vmovdqa64,
  [anon_sym_cmovs] = anon_sym_cmovs,
  [anon_sym_vpaddb] = anon_sym_vpaddb,
  [anon_sym_vpsrlq] = anon_sym_vpsrlq,
  [anon_sym_vpmaddubsw] = anon_sym_vpmaddubsw,
  [anon_sym_shrd] = anon_sym_shrd,
  [anon_sym_vextracti128] = anon_sym_vextracti128,
  [anon_sym_vunpcklpd] = anon_sym_vunpcklpd,
  [anon_sym_vcvtusi2sd] = anon_sym_vcvtusi2sd,
  [anon_sym_vpsubw] = anon_sym_vpsubw,
  [anon_sym_shufpd] = anon_sym_shufpd,
  [anon_sym_vpunpckhqdq] = anon_sym_vpunpckhqdq,
  [anon_sym_pextrb] = anon_sym_pextrb,
  [anon_sym_vxorps] = anon_sym_vxorps,
  [anon_sym_vpxord] = anon_sym_vpxord,
  [anon_sym_nopw] = anon_sym_nopw,
  [anon_sym_vprord] = anon_sym_vprord,
  [anon_sym_shrx] = anon_sym_shrx,
  [anon_sym_rorx] = anon_sym_rorx,
  [anon_sym_vpunpckhwd] = anon_sym_vpunpckhwd,
  [anon_sym_pinsrw] = anon_sym_pinsrw,
  [anon_sym_vpmuludq] = anon_sym_vpmuludq,
  [anon_sym_vpunpcklqdq] = anon_sym_vpunpcklqdq,
  [anon_sym_vpand] = anon_sym_vpand,
  [anon_sym_aeskeygenassist] = anon_sym_aeskeygenassist,
  [anon_sym_vaesenc] = anon_sym_vaesenc,
  [anon_sym_vpcmpltud] = anon_sym_vpcmpltud,
  [anon_sym_vpextrw] = anon_sym_vpextrw,
  [anon_sym_vpslldq] = anon_sym_vpslldq,
  [anon_sym_vprorq] = anon_sym_vprorq,
  [anon_sym_blendvps] = anon_sym_blendvps,
  [anon_sym_pshufd] = anon_sym_pshufd,
  [anon_sym_vpaddw] = anon_sym_vpaddw,
  [anon_sym_vpsllw] = anon_sym_vpsllw,
  [anon_sym_vpsrld] = anon_sym_vpsrld,
  [anon_sym_pextrq] = anon_sym_pextrq,
  [anon_sym_vpsubd] = anon_sym_vpsubd,
  [anon_sym_pextrw] = anon_sym_pextrw,
  [anon_sym_shufps] = anon_sym_shufps,
  [anon_sym_pshuflw] = anon_sym_pshuflw,
  [anon_sym_vpsubq] = anon_sym_vpsubq,
  [anon_sym_shld] = anon_sym_shld,
  [anon_sym_vpslld] = anon_sym_vpslld,
  [anon_sym_vpermt2d] = anon_sym_vpermt2d,
  [anon_sym_vunpckhpd] = anon_sym_vunpckhpd,
  [anon_sym_vmulsd] = anon_sym_vmulsd,
  [anon_sym_vpunpckhdq] = anon_sym_vpunpckhdq,
  [anon_sym_vpshufd] = anon_sym_vpshufd,
  [anon_sym_vpor] = anon_sym_vpor,
  [anon_sym_vpunpckldq] = anon_sym_vpunpckldq,
  [anon_sym_vextracti32x4] = anon_sym_vextracti32x4,
  [anon_sym_vsubsd] = anon_sym_vsubsd,
  [anon_sym_vpmaddwd] = anon_sym_vpmaddwd,
  [anon_sym_pblendw] = anon_sym_pblendw,
  [anon_sym_vunpckhps] = anon_sym_vunpckhps,
  [anon_sym_vpblendmd] = anon_sym_vpblendmd,
  [anon_sym_vpsllq] = anon_sym_vpsllq,
  [anon_sym_sarx] = anon_sym_sarx,
  [anon_sym_shlx] = anon_sym_shlx,
  [anon_sym_vpxor] = anon_sym_vpxor,
  [anon_sym_vpermd] = anon_sym_vpermd,
  [anon_sym_vpcmpgtd] = anon_sym_vpcmpgtd,
  [anon_sym_vpsubusw] = anon_sym_vpsubusw,
  [anon_sym_vpackusdw] = anon_sym_vpackusdw,
  [anon_sym_mulx] = anon_sym_mulx,
  [anon_sym_vpsrlw] = anon_sym_vpsrlw,
  [anon_sym_vpaddq] = anon_sym_vpaddq,
  [anon_sym_pshufhw] = anon_sym_pshufhw,
  [anon_sym_andn] = anon_sym_andn,
  [anon_sym_vpunpcklwd] = anon_sym_vpunpcklwd,
  [anon_sym_palignr] = anon_sym_palignr,
  [anon_sym_pinsrd] = anon_sym_pinsrd,
  [anon_sym_vpsrldq] = anon_sym_vpsrldq,
  [anon_sym_vpermq] = anon_sym_vpermq,
  [anon_sym_vunpcklps] = anon_sym_vunpcklps,
  [anon_sym_sha1rnds4] = anon_sym_sha1rnds4,
  [anon_sym_vpermi2d] = anon_sym_vpermi2d,
  [anon_sym_vaesenclast] = anon_sym_vaesenclast,
  [anon_sym_vdivsd] = anon_sym_vdivsd,
  [anon_sym_vpaddd] = anon_sym_vpaddd,
  [anon_sym_pinsrb] = anon_sym_pinsrb,
  [anon_sym_vpmullw] = anon_sym_vpmullw,
  [anon_sym_vpshufb] = anon_sym_vpshufb,
  [anon_sym_vpinsrw] = anon_sym_vpinsrw,
  [anon_sym_vpblendd] = anon_sym_vpblendd,
  [anon_sym_vinserti128] = anon_sym_vinserti128,
  [anon_sym_vshufi64x2] = anon_sym_vshufi64x2,
  [anon_sym_addw] = anon_sym_addw,
  [anon_sym_vperm2i128] = anon_sym_vperm2i128,
  [anon_sym_vpinsrd] = anon_sym_vpinsrd,
  [anon_sym_vpinsrq] = anon_sym_vpinsrq,
  [anon_sym_vpinsrb] = anon_sym_vpinsrb,
  [anon_sym_vperm2f128] = anon_sym_vperm2f128,
  [anon_sym_vshufi32x4] = anon_sym_vshufi32x4,
  [anon_sym_vblendps] = anon_sym_vblendps,
  [anon_sym_vshufps] = anon_sym_vshufps,
  [anon_sym_vpalignr] = anon_sym_vpalignr,
  [anon_sym_vblendvps] = anon_sym_vblendvps,
  [anon_sym_vinsertf128] = anon_sym_vinsertf128,
  [anon_sym_vinserti32x4] = anon_sym_vinserti32x4,
  [anon_sym_movsbl] = anon_sym_movsbl,
  [anon_sym_cmpb] = anon_sym_cmpb,
  [anon_sym_cwtl] = anon_sym_cwtl,
  [anon_sym_shrl] = anon_sym_shrl,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_andq] = anon_sym_andq,
  [anon_sym_cmp] = anon_sym_cmp,
  [anon_sym_cwtd] = anon_sym_cwtd,
  [anon_sym_movdqa] = anon_sym_movdqa,
  [anon_sym_movq] = anon_sym_movq,
  [anon_sym_addb] = anon_sym_addb,
  [anon_sym_jno] = anon_sym_jno,
  [anon_sym_rex_DOTW] = anon_sym_rex_DOTW,
  [anon_sym_testb] = anon_sym_testb,
  [anon_sym_addsd] = anon_sym_addsd,
  [anon_sym_rol] = anon_sym_rol,
  [anon_sym_sar] = anon_sym_sar,
  [anon_sym_rex_DOTB] = anon_sym_rex_DOTB,
  [anon_sym_vmovdqu] = anon_sym_vmovdqu,
  [anon_sym_callq] = anon_sym_callq,
  [anon_sym_movups] = anon_sym_movups,
  [anon_sym_vpclmullqhqdq] = anon_sym_vpclmullqhqdq,
  [anon_sym_subss] = anon_sym_subss,
  [anon_sym_jb] = anon_sym_jb,
  [anon_sym_rex_DOTRXB] = anon_sym_rex_DOTRXB,
  [anon_sym_jae] = anon_sym_jae,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_mulsd] = anon_sym_mulsd,
  [anon_sym_addl] = anon_sym_addl,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_jne] = anon_sym_jne,
  [anon_sym_cltq] = anon_sym_cltq,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_je] = anon_sym_je,
  [anon_sym_cltd] = anon_sym_cltd,
  [anon_sym_movb] = anon_sym_movb,
  [anon_sym_movaps] = anon_sym_movaps,
  [anon_sym_cpuid] = anon_sym_cpuid,
  [anon_sym_vmovdqu32] = anon_sym_vmovdqu32,
  [anon_sym_jo] = anon_sym_jo,
  [anon_sym_jmpq] = anon_sym_jmpq,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_rex_DOTWRB] = anon_sym_rex_DOTWRB,
  [anon_sym_movl] = anon_sym_movl,
  [anon_sym_retq] = anon_sym_retq,
  [anon_sym_jge] = anon_sym_jge,
  [anon_sym_movsd] = anon_sym_movsd,
  [anon_sym_jg] = anon_sym_jg,
  [anon_sym_movss] = anon_sym_movss,
  [anon_sym_vpclmulhqhqdq] = anon_sym_vpclmulhqhqdq,
  [anon_sym_shl] = anon_sym_shl,
  [anon_sym_subw] = anon_sym_subw,
  [anon_sym_ror] = anon_sym_ror,
  [anon_sym_cbtw] = anon_sym_cbtw,
  [anon_sym_repz] = anon_sym_repz,
  [anon_sym_mulss] = anon_sym_mulss,
  [anon_sym_movw] = anon_sym_movw,
  [anon_sym_vpclmullqlqdq] = anon_sym_vpclmullqlqdq,
  [anon_sym_movsbq] = anon_sym_movsbq,
  [anon_sym_nopl] = anon_sym_nopl,
  [anon_sym_shll] = anon_sym_shll,
  [anon_sym_cqto] = anon_sym_cqto,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_ss] = anon_sym_ss,
  [anon_sym_adc] = anon_sym_adc,
  [anon_sym_leaveq] = anon_sym_leaveq,
  [anon_sym_lea] = anon_sym_lea,
  [anon_sym_movslq] = anon_sym_movslq,
  [anon_sym_mfence] = anon_sym_mfence,
  [anon_sym_ud2] = anon_sym_ud2,
  [anon_sym_rex_DOTWRXB] = anon_sym_rex_DOTWRXB,
  [anon_sym_shr] = anon_sym_shr,
  [anon_sym_vpclmulhqlqdq] = anon_sym_vpclmulhqlqdq,
  [anon_sym_movzbl] = anon_sym_movzbl,
  [anon_sym_femms] = anon_sym_femms,
  [anon_sym_addss] = anon_sym_addss,
  [anon_sym_movzwl] = anon_sym_movzwl,
  [anon_sym_sbb] = anon_sym_sbb,
  [anon_sym_cmpq] = anon_sym_cmpq,
  [anon_sym_xgetbv] = anon_sym_xgetbv,
  [anon_sym_pushq] = anon_sym_pushq,
  [anon_sym_endbr64] = anon_sym_endbr64,
  [anon_sym_vzeroupper] = anon_sym_vzeroupper,
  [anon_sym_ja] = anon_sym_ja,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_addr32] = anon_sym_addr32,
  [anon_sym_movdqu] = anon_sym_movdqu,
  [anon_sym_pand] = anon_sym_pand,
  [anon_sym_movswl] = anon_sym_movswl,
  [anon_sym_prefetcht0] = anon_sym_prefetcht0,
  [anon_sym_vmovups] = anon_sym_vmovups,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_subsd] = anon_sym_subsd,
  [anon_sym_subb] = anon_sym_subb,
  [anon_sym_vinserti64x4] = anon_sym_vinserti64x4,
  [anon_sym_rex_DOTXB] = anon_sym_rex_DOTXB,
  [anon_sym_vzeroall] = anon_sym_vzeroall,
  [anon_sym_shrq] = anon_sym_shrq,
  [anon_sym_sarl] = anon_sym_sarl,
  [anon_sym_cmpw] = anon_sym_cmpw,
  [anon_sym_data16] = anon_sym_data16,
  [anon_sym_jbe] = anon_sym_jbe,
  [anon_sym_jl] = anon_sym_jl,
  [anon_sym_shlq] = anon_sym_shlq,
  [anon_sym_cmpl] = anon_sym_cmpl,
  [anon_sym_movd] = anon_sym_movd,
  [anon_sym_imul] = anon_sym_imul,
  [aux_sym_operand_token1] = aux_sym_operand_token1,
  [sym_two_bytes] = sym_two_bytes,
  [sym_prog] = sym_prog,
  [sym__line] = sym__line,
  [sym_instruction_one_operand] = sym_instruction_one_operand,
  [sym_opcodes_one_operand] = sym_opcodes_one_operand,
  [sym_instruction_two_operands] = sym_instruction_two_operands,
  [sym_opcodes_two_operands] = sym_opcodes_two_operands,
  [sym_instruction_three_operands] = sym_instruction_three_operands,
  [sym_opcodes_three_operands] = sym_opcodes_three_operands,
  [sym_instruction_four_operands] = sym_instruction_four_operands,
  [sym_opcodes_four_operands] = sym_opcodes_four_operands,
  [sym_instruction_six_operands] = sym_instruction_six_operands,
  [sym_opcodes_six_operands] = sym_opcodes_six_operands,
  [sym_instruction_undetermined_operands] = sym_instruction_undetermined_operands,
  [sym_opcodes_undetermined_operands] = sym_opcodes_undetermined_operands,
  [sym_operand] = sym_operand,
  [aux_sym_prog_repeat1] = aux_sym_prog_repeat1,
  [aux_sym_instruction_one_operand_repeat1] = aux_sym_instruction_one_operand_repeat1,
  [aux_sym_instruction_one_operand_repeat2] = aux_sym_instruction_one_operand_repeat2,
  [aux_sym_operand_repeat1] = aux_sym_operand_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_negl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_negq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jrcxz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fldt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notrack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTRB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idivl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefetcht1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fstpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bswap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fildl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_js] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vucomiss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovapd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpbroadcastd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pclmullqlqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_por] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcmpgtd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movswq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kmovw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movhlps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrlq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpcklwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bsf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcmpeqb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maxsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha1msg1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmuludq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vbroadcasti32x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ucomisd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popcnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmovmskb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubusb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubusw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmova] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckhdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrlw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvttsd2si] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsd2ss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movzbq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTWB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xchg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aesdec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckhbw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsi2sd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqa32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_packuswb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsi2sdl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vbroadcastss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aesdeclast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pslld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmaddubsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmaddwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsbw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtss2sd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pslldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ucomiss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpcklqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vbroadcasti128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movhps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movapd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movabs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pclmulhqhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fmulp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maxss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psllq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcmpeqd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpcklbw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvttss2si] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paddd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_re] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paddq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aesenclast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vucomisd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adcx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comisd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsi2sdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_knotw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pandn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repnz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tzcnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paddw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pclmullqhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rorl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckhwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshufb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsi2ss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_testl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comiss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aesenc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsi2ssl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpbroadcastq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unpckhpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha1nexte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha1msg2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movzbw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqa64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpaddb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsrlq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpmaddubsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vextracti128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vunpcklpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcvtusi2sd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsubw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shufpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpckhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pextrb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vxorps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpxord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nopw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vprord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rorx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpckhwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinsrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpmuludq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpcklqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aeskeygenassist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vaesenc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpcmpltud] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpextrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpslldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vprorq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blendvps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshufd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpaddw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsllw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsrld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pextrq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsubd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pextrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shufps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshuflw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsubq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpslld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpermt2d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vunpckhpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmulsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpckhdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpshufd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpckldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vextracti32x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vsubsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpmaddwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pblendw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vunpckhps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpblendmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsllq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sarx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shlx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpermd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpcmpgtd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsubusw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpackusdw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsrlw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpaddq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshufhw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpcklwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_palignr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinsrd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsrldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpermq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vunpcklps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha1rnds4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpermi2d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vaesenclast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vdivsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpaddd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinsrb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpmullw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpshufb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpinsrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpblendd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vinserti128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vshufi64x2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vperm2i128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpinsrd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpinsrq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpinsrb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vperm2f128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vshufi32x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vblendps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vshufps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpalignr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vblendvps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vinsertf128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vinserti32x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsbl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cwtl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cwtd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movdqa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jno] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_testb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movups] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpclmullqhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTRXB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cltq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_je] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cltd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cpuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqu32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmpq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTWRB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpclmulhqhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cbtw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpclmullqlqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsbq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nopl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cqto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leaveq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lea] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movslq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mfence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ud2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTWRXB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpclmulhqlqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movzbl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_femms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movzwl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xgetbv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endbr64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vzeroupper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ja] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addr32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movdqu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movswl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefetcht0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovups] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vinserti64x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTXB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vzeroall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sarl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shlq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imul] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operand_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_two_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_prog] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction_one_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_opcodes_one_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_two_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_opcodes_two_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_three_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_opcodes_three_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_four_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_opcodes_four_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_six_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_opcodes_six_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_undetermined_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_opcodes_undetermined_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_prog_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_one_operand_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_one_operand_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 11,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 27,
  [37] = 28,
  [38] = 28,
  [39] = 27,
  [40] = 28,
  [41] = 27,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 28,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(615);
      if (lookahead == ',') ADVANCE(669);
      if (lookahead == ':') ADVANCE(619);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(321);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'g') ADVANCE(473);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'j') ADVANCE(68);
      if (lookahead == 'k') ADVANCE(350);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(616);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(321);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'f') ADVANCE(237);
      if (lookahead == 'g') ADVANCE(473);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'j') ADVANCE(68);
      if (lookahead == 'k') ADVANCE(350);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(617);
      if (lookahead == ',') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1028);
      if (lookahead != 0) ADVANCE(1027);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1032);
      if (lookahead != 0) ADVANCE(1027);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == ',') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1030);
      if (lookahead != 0) ADVANCE(1027);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1029);
      if (lookahead != 0) ADVANCE(1027);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(1009);
      if (lookahead == '1') ADVANCE(655);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(355);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(690);
      if (lookahead == '2') ADVANCE(818);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '3') ADVANCE(34);
      if (lookahead == '6') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '3') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == '3') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(989);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(1005);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(270);
      if (lookahead == 'd') ADVANCE(880);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(893);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(719);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(958);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(906);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(601);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(515);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(496);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(497);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(193);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(194);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(602);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(605);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(519);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(606);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(509);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(523);
      END_STATE();
    case 40:
      if (lookahead == '3') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == '4') ADVANCE(1001);
      END_STATE();
    case 43:
      if (lookahead == '4') ADVANCE(895);
      END_STATE();
    case 44:
      if (lookahead == '4') ADVANCE(820);
      END_STATE();
    case 45:
      if (lookahead == '4') ADVANCE(766);
      END_STATE();
    case 46:
      if (lookahead == '4') ADVANCE(913);
      END_STATE();
    case 47:
      if (lookahead == '4') ADVANCE(919);
      END_STATE();
    case 48:
      if (lookahead == '4') ADVANCE(1014);
      END_STATE();
    case 49:
      if (lookahead == '4') ADVANCE(870);
      END_STATE();
    case 50:
      if (lookahead == '4') ADVANCE(694);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(608);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(603);
      END_STATE();
    case 53:
      if (lookahead == '6') ADVANCE(1020);
      END_STATE();
    case 54:
      if (lookahead == '6') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == '8') ADVANCE(912);
      END_STATE();
    case 56:
      if (lookahead == '8') ADVANCE(908);
      END_STATE();
    case 57:
      if (lookahead == '8') ADVANCE(918);
      END_STATE();
    case 58:
      if (lookahead == '8') ADVANCE(905);
      END_STATE();
    case 59:
      if (lookahead == '8') ADVANCE(826);
      END_STATE();
    case 60:
      if (lookahead == '8') ADVANCE(751);
      END_STATE();
    case 61:
      if (lookahead == 'B') ADVANCE(937);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'W') ADVANCE(932);
      if (lookahead == 'X') ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == 'B') ADVANCE(646);
      if (lookahead == 'X') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'B') ADVANCE(1015);
      END_STATE();
    case 64:
      if (lookahead == 'B') ADVANCE(944);
      END_STATE();
    case 65:
      if (lookahead == 'B') ADVANCE(962);
      if (lookahead == 'X') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'B') ADVANCE(990);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(1036);
      if (lookahead == 'b') ADVANCE(1039);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == 'p') ADVANCE(557);
      if (lookahead == 'q') ADVANCE(545);
      if (lookahead == 'v') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(1033);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(1003);
      if (lookahead == 'b') ADVANCE(943);
      if (lookahead == 'e') ADVANCE(953);
      if (lookahead == 'g') ADVANCE(967);
      if (lookahead == 'l') ADVANCE(1022);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 'o') ADVANCE(959);
      if (lookahead == 'p') ADVANCE(624);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(664);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(600);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(573);
      if (lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'x') ADVANCE(381);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 's') ADVANCE(983);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(986);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(970);
      if (lookahead == 'r') ADVANCE(991);
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead == 'b') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(638);
      if (lookahead == 'g') ADVANCE(668);
      if (lookahead == 'l') ADVANCE(627);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(637);
      if (lookahead == 'p') ADVANCE(649);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead == 'b') ADVANCE(709);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead == 'g') ADVANCE(785);
      if (lookahead == 'l') ADVANCE(789);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(745);
      if (lookahead == 'p') ADVANCE(699);
      if (lookahead == 's') ADVANCE(821);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(928);
      if (lookahead == 'u') ADVANCE(1006);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead == 'u') ADVANCE(938);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(1040);
      if (lookahead == 'e') ADVANCE(1035);
      if (lookahead == 'i') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1033);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'b') ADVANCE(348);
      if (lookahead == 'c') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(303);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == 's') ADVANCE(290);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(385);
      if (lookahead == 'z') ADVANCE(254);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 's') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(379);
      if (lookahead == 'x') ADVANCE(390);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'd') ADVANCE(692);
      if (lookahead == 'q') ADVANCE(739);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(414);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(997);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(952);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(804);
      if (lookahead == 'l') ADVANCE(803);
      END_STATE();
    case 101:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(779);
      if (lookahead == 'd') ADVANCE(966);
      if (lookahead == 'l') ADVANCE(423);
      if (lookahead == 's') ADVANCE(968);
      if (lookahead == 'w') ADVANCE(328);
      END_STATE();
    case 103:
      if (lookahead == 'b') ADVANCE(329);
      if (lookahead == 'w') ADVANCE(330);
      END_STATE();
    case 104:
      if (lookahead == 'b') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(752);
      END_STATE();
    case 105:
      if (lookahead == 'b') ADVANCE(753);
      if (lookahead == 'd') ADVANCE(717);
      if (lookahead == 'q') ADVANCE(702);
      if (lookahead == 'u') ADVANCE(489);
      END_STATE();
    case 106:
      if (lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 107:
      if (lookahead == 'b') ADVANCE(832);
      if (lookahead == 'q') ADVANCE(855);
      if (lookahead == 'w') ADVANCE(857);
      END_STATE();
    case 108:
      if (lookahead == 'b') ADVANCE(900);
      if (lookahead == 'd') ADVANCE(891);
      if (lookahead == 'w') ADVANCE(840);
      END_STATE();
    case 109:
      if (lookahead == 'b') ADVANCE(806);
      if (lookahead == 'd') ADVANCE(851);
      if (lookahead == 'h') ADVANCE(587);
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 110:
      if (lookahead == 'b') ADVANCE(822);
      if (lookahead == 'd') ADVANCE(899);
      if (lookahead == 'q') ADVANCE(886);
      if (lookahead == 'w') ADVANCE(852);
      END_STATE();
    case 111:
      if (lookahead == 'b') ADVANCE(688);
      if (lookahead == 'd') ADVANCE(770);
      END_STATE();
    case 112:
      if (lookahead == 'b') ADVANCE(698);
      if (lookahead == 'w') ADVANCE(700);
      END_STATE();
    case 113:
      if (lookahead == 'b') ADVANCE(911);
      if (lookahead == 'd') ADVANCE(909);
      if (lookahead == 'q') ADVANCE(910);
      if (lookahead == 'w') ADVANCE(903);
      END_STATE();
    case 114:
      if (lookahead == 'b') ADVANCE(902);
      if (lookahead == 'd') ADVANCE(867);
      END_STATE();
    case 115:
      if (lookahead == 'b') ADVANCE(720);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(697);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(476);
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(577);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(593);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead == 'q') ADVANCE(217);
      if (lookahead == 'w') ADVANCE(197);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(594);
      if (lookahead == 'd') ADVANCE(428);
      if (lookahead == 'q') ADVANCE(220);
      if (lookahead == 'w') ADVANCE(198);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(505);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(508);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(513);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 'g') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(714);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(810);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(845);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(599);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(367);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(547);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(320);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(1034);
      if (lookahead == 'e') ADVANCE(1038);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1033);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(562);
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(946);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(954);
      if (lookahead == 'q') ADVANCE(951);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(927);
      if (lookahead == 'l') ADVANCE(922);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(1007);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(934);
      if (lookahead == 's') ADVANCE(995);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(691);
      if (lookahead == 's') ADVANCE(773);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(957);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(738);
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(689);
      if (lookahead == 's') ADVANCE(767);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(741);
      if (lookahead == 's') ADVANCE(784);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(947);
      if (lookahead == 's') ADVANCE(975);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(776);
      if (lookahead == 'q') ADVANCE(782);
      if (lookahead == 'w') ADVANCE(799);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(568);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(727);
      if (lookahead == 'q') ADVANCE(769);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(812);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(802);
      if (lookahead == 'q') ADVANCE(684);
      if (lookahead == 'w') ADVANCE(707);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(724);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(1012);
      if (lookahead == 's') ADVANCE(942);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(843);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(768);
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == 's') ADVANCE(809);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(755);
      if (lookahead == 's') ADVANCE(956);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(830);
      if (lookahead == 's') ADVANCE(858);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(898);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(787);
      if (lookahead == 's') ADVANCE(671);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(865);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(836);
      if (lookahead == 'q') ADVANCE(849);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(862);
      if (lookahead == 'q') ADVANCE(876);
      if (lookahead == 'w') ADVANCE(853);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(854);
      if (lookahead == 'q') ADVANCE(823);
      if (lookahead == 'w') ADVANCE(885);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(856);
      if (lookahead == 'q') ADVANCE(860);
      if (lookahead == 'u') ADVANCE(503);
      if (lookahead == 'w') ADVANCE(829);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(871);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(677);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(734);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(695);
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(672);
      if (lookahead == 's') ADVANCE(728);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(716);
      if (lookahead == 's') ADVANCE(807);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(737);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(814);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(904);
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(881);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(896);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(863);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(872);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(786);
      if (lookahead == 's') ADVANCE(670);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(805);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(685);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(875);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(846);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(864);
      if (lookahead == 's') ADVANCE(874);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(827);
      if (lookahead == 's') ADVANCE(894);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(828);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(839);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'q') ADVANCE(813);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(586);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(256);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(426);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(582);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(429);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(595);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(430);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(431);
      if (lookahead == 'q') ADVANCE(224);
      if (lookahead == 'w') ADVANCE(204);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == 'q') ADVANCE(225);
      if (lookahead == 'w') ADVANCE(205);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(433);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(435);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(441);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(490);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(570);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(1037);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(560);
      if (lookahead == 's') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1033);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(323);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(950);
      if (lookahead == 'o') ADVANCE(931);
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(759);
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(988);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(816);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 'z') ADVANCE(135);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'g') ADVANCE(553);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 266:
      if (lookahead == 'f') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(743);
      if (lookahead == 'w') ADVANCE(81);
      END_STATE();
    case 267:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 268:
      if (lookahead == 'f') ADVANCE(297);
      END_STATE();
    case 269:
      if (lookahead == 'f') ADVANCE(114);
      END_STATE();
    case 270:
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 271:
      if (lookahead == 'f') ADVANCE(408);
      END_STATE();
    case 272:
      if (lookahead == 'f') ADVANCE(259);
      END_STATE();
    case 273:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 274:
      if (lookahead == 'g') ADVANCE(632);
      END_STATE();
    case 275:
      if (lookahead == 'g') ADVANCE(713);
      END_STATE();
    case 276:
      if (lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 277:
      if (lookahead == 'g') ADVANCE(369);
      END_STATE();
    case 278:
      if (lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 279:
      if (lookahead == 'g') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(556);
      END_STATE();
    case 280:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 281:
      if (lookahead == 'h') ADVANCE(636);
      END_STATE();
    case 282:
      if (lookahead == 'h') ADVANCE(275);
      END_STATE();
    case 283:
      if (lookahead == 'h') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 284:
      if (lookahead == 'h') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 285:
      if (lookahead == 'h') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 286:
      if (lookahead == 'h') ADVANCE(442);
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 287:
      if (lookahead == 'h') ADVANCE(416);
      END_STATE();
    case 288:
      if (lookahead == 'h') ADVANCE(443);
      END_STATE();
    case 289:
      if (lookahead == 'h') ADVANCE(535);
      END_STATE();
    case 290:
      if (lookahead == 'h') ADVANCE(559);
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 291:
      if (lookahead == 'h') ADVANCE(444);
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 292:
      if (lookahead == 'h') ADVANCE(561);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 293:
      if (lookahead == 'h') ADVANCE(411);
      if (lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 294:
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 295:
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 296:
      if (lookahead == 'h') ADVANCE(451);
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(482);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(708);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(772);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(579);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 's') ADVANCE(487);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(501);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 312:
      if (lookahead == 'k') ADVANCE(746);
      END_STATE();
    case 313:
      if (lookahead == 'k') ADVANCE(643);
      END_STATE();
    case 314:
      if (lookahead == 'k') ADVANCE(284);
      END_STATE();
    case 315:
      if (lookahead == 'k') ADVANCE(287);
      END_STATE();
    case 316:
      if (lookahead == 'k') ADVANCE(293);
      END_STATE();
    case 317:
      if (lookahead == 'k') ADVANCE(563);
      END_STATE();
    case 318:
      if (lookahead == 'k') ADVANCE(285);
      END_STATE();
    case 319:
      if (lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 320:
      if (lookahead == 'k') ADVANCE(571);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == 't') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1033);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(659);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(935);
      if (lookahead == 'r') ADVANCE(972);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(1026);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(661);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(1008);
      if (lookahead == 'q') ADVANCE(678);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(993);
      if (lookahead == 'q') ADVANCE(711);
      if (lookahead == 'w') ADVANCE(819);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(996);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(1016);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(356);
      if (lookahead == 'm') ADVANCE(397);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(590);
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == 'm') ADVANCE(400);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 350:
      if (lookahead == 'm') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 351:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 352:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(475);
      END_STATE();
    case 354:
      if (lookahead == 'm') ADVANCE(498);
      END_STATE();
    case 355:
      if (lookahead == 'm') ADVANCE(494);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 356:
      if (lookahead == 'm') ADVANCE(565);
      END_STATE();
    case 357:
      if (lookahead == 'm') ADVANCE(569);
      END_STATE();
    case 358:
      if (lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 359:
      if (lookahead == 'm') ADVANCE(309);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1033);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(533);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(534);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(981);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(574);
      if (lookahead == 'p') ADVANCE(926);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 394:
      if (lookahead == 'p') ADVANCE(949);
      END_STATE();
    case 395:
      if (lookahead == 'p') ADVANCE(1004);
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 396:
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 397:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 398:
      if (lookahead == 'p') ADVANCE(660);
      END_STATE();
    case 399:
      if (lookahead == 'p') ADVANCE(761);
      END_STATE();
    case 400:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 401:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 402:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 403:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 404:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 405:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 406:
      if (lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 407:
      if (lookahead == 'p') ADVANCE(419);
      END_STATE();
    case 408:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 409:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 410:
      if (lookahead == 'p') ADVANCE(479);
      END_STATE();
    case 411:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 412:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 413:
      if (lookahead == 'p') ADVANCE(480);
      END_STATE();
    case 414:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(483);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == 'v') ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(486);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 420:
      if (lookahead == 'q') ADVANCE(964);
      END_STATE();
    case 421:
      if (lookahead == 'q') ADVANCE(939);
      END_STATE();
    case 422:
      if (lookahead == 'q') ADVANCE(985);
      END_STATE();
    case 423:
      if (lookahead == 'q') ADVANCE(987);
      END_STATE();
    case 424:
      if (lookahead == 'q') ADVANCE(111);
      END_STATE();
    case 425:
      if (lookahead == 'q') ADVANCE(693);
      END_STATE();
    case 426:
      if (lookahead == 'q') ADVANCE(841);
      END_STATE();
    case 427:
      if (lookahead == 'q') ADVANCE(706);
      END_STATE();
    case 428:
      if (lookahead == 'q') ADVANCE(756);
      END_STATE();
    case 429:
      if (lookahead == 'q') ADVANCE(731);
      END_STATE();
    case 430:
      if (lookahead == 'q') ADVANCE(748);
      END_STATE();
    case 431:
      if (lookahead == 'q') ADVANCE(866);
      END_STATE();
    case 432:
      if (lookahead == 'q') ADVANCE(869);
      END_STATE();
    case 433:
      if (lookahead == 'q') ADVANCE(831);
      END_STATE();
    case 434:
      if (lookahead == 'q') ADVANCE(842);
      END_STATE();
    case 435:
      if (lookahead == 'q') ADVANCE(760);
      END_STATE();
    case 436:
      if (lookahead == 'q') ADVANCE(800);
      END_STATE();
    case 437:
      if (lookahead == 'q') ADVANCE(675);
      END_STATE();
    case 438:
      if (lookahead == 'q') ADVANCE(969);
      END_STATE();
    case 439:
      if (lookahead == 'q') ADVANCE(992);
      END_STATE();
    case 440:
      if (lookahead == 'q') ADVANCE(941);
      END_STATE();
    case 441:
      if (lookahead == 'q') ADVANCE(977);
      END_STATE();
    case 442:
      if (lookahead == 'q') ADVANCE(288);
      END_STATE();
    case 443:
      if (lookahead == 'q') ADVANCE(226);
      END_STATE();
    case 444:
      if (lookahead == 'q') ADVANCE(227);
      END_STATE();
    case 445:
      if (lookahead == 'q') ADVANCE(228);
      END_STATE();
    case 446:
      if (lookahead == 'q') ADVANCE(229);
      END_STATE();
    case 447:
      if (lookahead == 'q') ADVANCE(230);
      END_STATE();
    case 448:
      if (lookahead == 'q') ADVANCE(231);
      END_STATE();
    case 449:
      if (lookahead == 'q') ADVANCE(232);
      END_STATE();
    case 450:
      if (lookahead == 'q') ADVANCE(291);
      END_STATE();
    case 451:
      if (lookahead == 'q') ADVANCE(294);
      END_STATE();
    case 452:
      if (lookahead == 'q') ADVANCE(295);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(961);
      if (lookahead == 'u') ADVANCE(543);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(936);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(794);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(890);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(916);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(1002);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 'x') ADVANCE(552);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 473:
      if (lookahead == 's') ADVANCE(620);
      END_STATE();
    case 474:
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 475:
      if (lookahead == 's') ADVANCE(994);
      END_STATE();
    case 476:
      if (lookahead == 's') ADVANCE(757);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(940);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(682);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(1010);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(915);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(850);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(914);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(917);
      END_STATE();
    case 487:
      if (lookahead == 's') ADVANCE(723);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(597);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(592);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 511:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 513:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 514:
      if (lookahead == 's') ADVANCE(536);
      END_STATE();
    case 515:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 516:
      if (lookahead == 's') ADVANCE(537);
      END_STATE();
    case 517:
      if (lookahead == 's') ADVANCE(538);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(539);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(540);
      END_STATE();
    case 521:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 524:
      if (lookahead == 's') ADVANCE(544);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 534:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 535:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 536:
      if (lookahead == 't') ADVANCE(725);
      END_STATE();
    case 537:
      if (lookahead == 't') ADVANCE(783);
      END_STATE();
    case 538:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 539:
      if (lookahead == 't') ADVANCE(897);
      END_STATE();
    case 540:
      if (lookahead == 't') ADVANCE(844);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 542:
      if (lookahead == 't') ADVANCE(585);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 557:
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 558:
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 559:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 560:
      if (lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 561:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 562:
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 563:
      if (lookahead == 'u') ADVANCE(491);
      END_STATE();
    case 564:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 565:
      if (lookahead == 'u') ADVANCE(331);
      END_STATE();
    case 566:
      if (lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 567:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 568:
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(184);
      END_STATE();
    case 569:
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 570:
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(195);
      END_STATE();
    case 571:
      if (lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 572:
      if (lookahead == 'v') ADVANCE(642);
      END_STATE();
    case 573:
      if (lookahead == 'v') ADVANCE(982);
      END_STATE();
    case 574:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 575:
      if (lookahead == 'v') ADVANCE(621);
      END_STATE();
    case 576:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 577:
      if (lookahead == 'v') ADVANCE(999);
      END_STATE();
    case 578:
      if (lookahead == 'v') ADVANCE(584);
      END_STATE();
    case 579:
      if (lookahead == 'v') ADVANCE(511);
      END_STATE();
    case 580:
      if (lookahead == 'v') ADVANCE(555);
      END_STATE();
    case 581:
      if (lookahead == 'v') ADVANCE(354);
      END_STATE();
    case 582:
      if (lookahead == 'v') ADVANCE(415);
      END_STATE();
    case 583:
      if (lookahead == 'w') ADVANCE(973);
      END_STATE();
    case 584:
      if (lookahead == 'w') ADVANCE(681);
      END_STATE();
    case 585:
      if (lookahead == 'w') ADVANCE(793);
      END_STATE();
    case 586:
      if (lookahead == 'w') ADVANCE(873);
      END_STATE();
    case 587:
      if (lookahead == 'w') ADVANCE(887);
      END_STATE();
    case 588:
      if (lookahead == 'w') ADVANCE(859);
      END_STATE();
    case 589:
      if (lookahead == 'w') ADVANCE(847);
      END_STATE();
    case 590:
      if (lookahead == 'w') ADVANCE(901);
      END_STATE();
    case 591:
      if (lookahead == 'w') ADVANCE(882);
      END_STATE();
    case 592:
      if (lookahead == 'w') ADVANCE(733);
      END_STATE();
    case 593:
      if (lookahead == 'w') ADVANCE(715);
      END_STATE();
    case 594:
      if (lookahead == 'w') ADVANCE(771);
      END_STATE();
    case 595:
      if (lookahead == 'w') ADVANCE(883);
      END_STATE();
    case 596:
      if (lookahead == 'w') ADVANCE(824);
      END_STATE();
    case 597:
      if (lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 598:
      if (lookahead == 'x') ADVANCE(718);
      END_STATE();
    case 599:
      if (lookahead == 'x') ADVANCE(611);
      END_STATE();
    case 600:
      if (lookahead == 'x') ADVANCE(492);
      END_STATE();
    case 601:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 602:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 603:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 604:
      if (lookahead == 'x') ADVANCE(548);
      END_STATE();
    case 605:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 606:
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 607:
      if (lookahead == 'x') ADVANCE(549);
      END_STATE();
    case 608:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 609:
      if (lookahead == 'x') ADVANCE(550);
      END_STATE();
    case 610:
      if (lookahead == 'y') ADVANCE(280);
      END_STATE();
    case 611:
      if (lookahead == 'z') ADVANCE(625);
      END_STATE();
    case 612:
      if (lookahead == 'z') ADVANCE(796);
      END_STATE();
    case 613:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1033);
      END_STATE();
    case 614:
      if (eof) ADVANCE(615);
      if (lookahead == '\n') SKIP(614)
      if (lookahead == ':') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0) ADVANCE(1027);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(617);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1028);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1029);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_idiv);
      if (lookahead == 'l') ADVANCE(650);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_negl);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_negq);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_jp);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_jrcxz);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_notw);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_setl);
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_jle);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_divl);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_setge);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_fldt);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_neg);
      if (lookahead == 'l') ADVANCE(622);
      if (lookahead == 'q') ADVANCE(623);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_notl);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_setb);
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_fs);
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'q') ADVANCE(1000);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_seto);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_sete);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_setle);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_seta);
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'l') ADVANCE(633);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(626);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == 'l') ADVANCE(629);
      if (lookahead == 'q') ADVANCE(654);
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_notrack);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_jns);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_mulw);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_rex_DOTRB);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_incl);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_setbe);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_setp);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_idivl);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_setns);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_inc);
      if (lookahead == 'l') ADVANCE(647);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_setne);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_divq);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_prefetcht1);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_fstpl);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_mulq);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'l') ADVANCE(665);
      if (lookahead == 'q') ADVANCE(658);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == 'w') ADVANCE(645);
      if (lookahead == 'x') ADVANCE(884);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_bswap);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_fildl);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_setae);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_mull);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_setnp);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_mulb);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_setg);
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_vucomiss);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_vmovss);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_vmovapd);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_vpbroadcastd);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_orl);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_pclmullqlqdq);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_por);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_pcmpgtd);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_movswq);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_psrldq);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_rep);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead == 'z') ADVANCE(974);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_kmovw);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_movhlps);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_addq);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_psrlq);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_punpcklwd);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_outsb);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_bsf);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_pcmpeqb);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_maxsd);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_sha1msg1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_andpd);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_vmovd);
      if (lookahead == 'q') ADVANCE(77);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_pmuludq);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_vbroadcasti32x4);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_ucomisd);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_popcnt);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_pmovmskb);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_psubusb);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_cmovp);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_psubusw);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_cmova);
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_psubq);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_cmovge);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_subl);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_cmovbe);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_punpckhdq);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_psrlw);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_cvttsd2si);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_cmovb);
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_cvtsd2ss);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_movzbq);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_rex_DOTWB);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_xchg);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_aesdec);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_punpckhbw);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_cvtsi2sd);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead == 'q') ADVANCE(791);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_psubd);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_adox);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_vmovdqa32);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_packuswb);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_btr);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdl);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_vbroadcastss);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_subpd);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_aesdeclast);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_andw);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_pslld);
      if (lookahead == 'q') ADVANCE(744);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_vmovaps);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_xorl);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_divss);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_punpckhqdq);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_btl);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_pmaddubsw);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_pmaddwd);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_movsbw);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_orq);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_cvtss2sd);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_divsd);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_vmovq);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_xorw);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_minsd);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_xorps);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_bsr);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_pslldq);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_cmovo);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_ucomiss);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_punpcklqdq);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_cmovle);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_roll);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_vbroadcasti128);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_outsl);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_psubb);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_movhps);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_movapd);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_punpckldq);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_movabs);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_rex);
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_cmovne);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_pclmulhqhqdq);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_fmulp);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_cmovns);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_bt);
      if (lookahead == 'l') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(721);
      if (lookahead == 's') ADVANCE(797);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_orb);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_movbe);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_vmovdqu64);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_maxss);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_xorpd);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_psllq);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_pcmpeqd);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_punpcklbw);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_cvttss2si);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_andps);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_orw);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_cmove);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_paddd);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_re);
      if (lookahead == 'p') ADVANCE(680);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == 'x') ADVANCE(758);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_andb);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_movsb);
      if (lookahead == 'l') ADVANCE(920);
      if (lookahead == 'q') ADVANCE(978);
      if (lookahead == 'w') ADVANCE(735);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_andl);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_vmovdqa);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(44);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_paddq);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_aesenclast);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_minss);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_cmovg);
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_vucomisd);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_vmovsd);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_adcx);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_cmovl);
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_comisd);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdq);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_subq);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_knotw);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_pxor);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_pandn);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_repnz);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_bts);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_tzcnt);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_paddw);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_pclmullqhqdq);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_rorl);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_psrld);
      if (lookahead == 'q') ADVANCE(679);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_insl);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_insb);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_punpckhwd);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_pshufb);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_cvtsi2ss);
      if (lookahead == 'l') ADVANCE(811);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_testl);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_comiss);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_aesenc);
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_cvtsi2ssl);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_psrad);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_vpbroadcastq);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_unpckhpd);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == 'b') ADVANCE(933);
      if (lookahead == 'l') ADVANCE(808);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_sha1nexte);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_cmovae);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_sha1msg2);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_movzbw);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_vmovdqa64);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_cmovs);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_vpaddb);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_vpsrlq);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_vpmaddubsw);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_shrd);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_vextracti128);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_vunpcklpd);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_vcvtusi2sd);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_vpsubw);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_shufpd);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_vpunpckhqdq);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_pextrb);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_vxorps);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_vpxord);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_nopw);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_vprord);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_shrx);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_rorx);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_vpunpckhwd);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_pinsrw);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_vpmuludq);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_vpunpcklqdq);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_vpand);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_aeskeygenassist);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_vaesenc);
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_vpcmpltud);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_vpextrw);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_vpslldq);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_vprorq);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_blendvps);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_pshufd);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_vpaddw);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_vpsllw);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_vpsrld);
      if (lookahead == 'q') ADVANCE(892);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_pextrq);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_vpsubd);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_pextrw);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_shufps);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_pshuflw);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_vpsubq);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_shld);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_vpslld);
      if (lookahead == 'q') ADVANCE(848);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_vpermt2d);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_vunpckhpd);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_vmulsd);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_vpunpckhdq);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_vpshufd);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_vpor);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_vpunpckldq);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_vextracti32x4);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_vsubsd);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_vpmaddwd);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_pblendw);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_vunpckhps);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_vpblendmd);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_vpsllq);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_sarx);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_shlx);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_vpxor);
      if (lookahead == 'd') ADVANCE(834);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_vpermd);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_vpcmpgtd);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_vpsubusw);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_vpackusdw);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_mulx);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_vpsrlw);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_vpaddq);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_pshufhw);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_andn);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_vpunpcklwd);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_palignr);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_pinsrd);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_vpsrldq);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_vpermq);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_vunpcklps);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_sha1rnds4);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_vpermi2d);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_vaesenclast);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_vdivsd);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_vpaddd);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_pinsrb);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_vpmullw);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_vpshufb);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_vpinsrw);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_vpblendd);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_vinserti128);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_vshufi64x2);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_addw);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_vperm2i128);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_vpinsrd);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_vpinsrq);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_vpinsrb);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_vperm2f128);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_vshufi32x4);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_vblendps);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_vshufps);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_vpalignr);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_vblendvps);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_vinsertf128);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_vinserti32x4);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_movsbl);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_cmpb);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_cwtl);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_shrl);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == 'l') ADVANCE(729);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == 'w') ADVANCE(740);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_andq);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_cmp);
      if (lookahead == 'b') ADVANCE(921);
      if (lookahead == 'l') ADVANCE(1024);
      if (lookahead == 'q') ADVANCE(998);
      if (lookahead == 'w') ADVANCE(1019);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_cwtd);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_movdqa);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_movq);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_addb);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_jno);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_rex_DOTW);
      if (lookahead == 'B') ADVANCE(712);
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_testb);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_addsd);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_rol);
      if (lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_sar);
      if (lookahead == 'l') ADVANCE(1018);
      if (lookahead == 'x') ADVANCE(877);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_rex_DOTB);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_vmovdqu);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(45);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_callq);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_movups);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_vpclmullqhqdq);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_subss);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_jb);
      if (lookahead == 'e') ADVANCE(1021);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_rex_DOTRXB);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_jae);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == 'b') ADVANCE(778);
      if (lookahead == 'l') ADVANCE(780);
      if (lookahead == 'n') ADVANCE(888);
      if (lookahead == 'p') ADVANCE(155);
      if (lookahead == 'q') ADVANCE(925);
      if (lookahead == 'w') ADVANCE(726);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_mulsd);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_addl);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (lookahead == 'q') ADVANCE(960);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_jne);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_cltq);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == 'b') ADVANCE(1013);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'q') ADVANCE(792);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(971);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_je);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_cltd);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_movb);
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_movaps);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_cpuid);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_vmovdqu32);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_jo);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_jmpq);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'b') ADVANCE(764);
      if (lookahead == 'l') ADVANCE(674);
      if (lookahead == 'q') ADVANCE(736);
      if (lookahead == 'w') ADVANCE(774);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRB);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_movl);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_retq);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_jge);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_movsd);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_jg);
      if (lookahead == 'e') ADVANCE(965);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_movss);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_vpclmulhqhqdq);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == 'd') ADVANCE(861);
      if (lookahead == 'l') ADVANCE(980);
      if (lookahead == 'q') ADVANCE(1023);
      if (lookahead == 'x') ADVANCE(878);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_subw);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_ror);
      if (lookahead == 'l') ADVANCE(801);
      if (lookahead == 'x') ADVANCE(838);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_cbtw);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_repz);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_mulss);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_movw);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_vpclmullqlqdq);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_movsbq);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_nopl);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_shll);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_cqto);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'b') ADVANCE(955);
      if (lookahead == 'd') ADVANCE(1025);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(963);
      if (lookahead == 'q') ADVANCE(929);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(406);
      if (lookahead == 'w') ADVANCE(976);
      if (lookahead == 'z') ADVANCE(103);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_adc);
      if (lookahead == 'x') ADVANCE(788);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_leaveq);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_lea);
      if (lookahead == 'v') ADVANCE(251);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_movslq);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_mfence);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_ud2);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRXB);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_shr);
      if (lookahead == 'd') ADVANCE(825);
      if (lookahead == 'l') ADVANCE(923);
      if (lookahead == 'q') ADVANCE(1017);
      if (lookahead == 'x') ADVANCE(837);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_vpclmulhqlqdq);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_movzbl);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_femms);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_addss);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_movzwl);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_sbb);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_cmpq);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_xgetbv);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_pushq);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_endbr64);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_vzeroupper);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_ja);
      if (lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead == 'l') ADVANCE(979);
      if (lookahead == 'w') ADVANCE(835);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_addr32);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_movdqu);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_pand);
      if (lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_movswl);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_prefetcht0);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_vmovups);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'b') ADVANCE(930);
      if (lookahead == 'l') ADVANCE(948);
      if (lookahead == 'q') ADVANCE(683);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == 'w') ADVANCE(907);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_subsd);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_subb);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_vinserti64x4);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_rex_DOTXB);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_vzeroall);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_shrq);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_sarl);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_cmpw);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_data16);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_jbe);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_jl);
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_shlq);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_cmpl);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_movd);
      if (lookahead == 'q') ADVANCE(76);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_imul);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == '\n') ADVANCE(617);
      if (lookahead == ',') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1028);
      if (lookahead != 0) ADVANCE(1027);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == '\n') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1029);
      if (lookahead != 0) ADVANCE(1027);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == ',') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1027);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == ':') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1027);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1027);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_two_bytes);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 'c') ADVANCE(984);
      if (lookahead == 'd') ADVANCE(1011);
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 'c') ADVANCE(662);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 'm') ADVANCE(353);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 614},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 614},
  [8] = {.lex_state = 614},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 614},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 614},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 614},
  [36] = {.lex_state = 614},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 614},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_gs] = ACTIONS(1),
    [anon_sym_idiv] = ACTIONS(1),
    [anon_sym_negl] = ACTIONS(1),
    [anon_sym_negq] = ACTIONS(1),
    [anon_sym_jp] = ACTIONS(1),
    [anon_sym_jrcxz] = ACTIONS(1),
    [anon_sym_notw] = ACTIONS(1),
    [anon_sym_setl] = ACTIONS(1),
    [anon_sym_jle] = ACTIONS(1),
    [anon_sym_divl] = ACTIONS(1),
    [anon_sym_setge] = ACTIONS(1),
    [anon_sym_fldt] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [anon_sym_notl] = ACTIONS(1),
    [anon_sym_setb] = ACTIONS(1),
    [anon_sym_fs] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_seto] = ACTIONS(1),
    [anon_sym_sete] = ACTIONS(1),
    [anon_sym_setle] = ACTIONS(1),
    [anon_sym_seta] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_notrack] = ACTIONS(1),
    [anon_sym_jns] = ACTIONS(1),
    [anon_sym_mulw] = ACTIONS(1),
    [anon_sym_rex_DOTRB] = ACTIONS(1),
    [anon_sym_incl] = ACTIONS(1),
    [anon_sym_setbe] = ACTIONS(1),
    [anon_sym_setp] = ACTIONS(1),
    [anon_sym_idivl] = ACTIONS(1),
    [anon_sym_setns] = ACTIONS(1),
    [anon_sym_inc] = ACTIONS(1),
    [anon_sym_setne] = ACTIONS(1),
    [anon_sym_divq] = ACTIONS(1),
    [anon_sym_prefetcht1] = ACTIONS(1),
    [anon_sym_fstpl] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_mulq] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_bswap] = ACTIONS(1),
    [anon_sym_fildl] = ACTIONS(1),
    [anon_sym_dec] = ACTIONS(1),
    [anon_sym_setae] = ACTIONS(1),
    [anon_sym_js] = ACTIONS(1),
    [anon_sym_mull] = ACTIONS(1),
    [anon_sym_setnp] = ACTIONS(1),
    [anon_sym_mulb] = ACTIONS(1),
    [anon_sym_setg] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_vucomiss] = ACTIONS(1),
    [anon_sym_vmovss] = ACTIONS(1),
    [anon_sym_vmovapd] = ACTIONS(1),
    [anon_sym_vpbroadcastd] = ACTIONS(1),
    [anon_sym_orl] = ACTIONS(1),
    [anon_sym_pclmullqlqdq] = ACTIONS(1),
    [anon_sym_por] = ACTIONS(1),
    [anon_sym_pcmpgtd] = ACTIONS(1),
    [anon_sym_movswq] = ACTIONS(1),
    [anon_sym_psrldq] = ACTIONS(1),
    [anon_sym_rep] = ACTIONS(1),
    [anon_sym_kmovw] = ACTIONS(1),
    [anon_sym_movhlps] = ACTIONS(1),
    [anon_sym_addq] = ACTIONS(1),
    [anon_sym_psrlq] = ACTIONS(1),
    [anon_sym_punpcklwd] = ACTIONS(1),
    [anon_sym_outsb] = ACTIONS(1),
    [anon_sym_bsf] = ACTIONS(1),
    [anon_sym_pcmpeqb] = ACTIONS(1),
    [anon_sym_maxsd] = ACTIONS(1),
    [anon_sym_sha1msg1] = ACTIONS(1),
    [anon_sym_andpd] = ACTIONS(1),
    [anon_sym_vmovd] = ACTIONS(1),
    [anon_sym_pmuludq] = ACTIONS(1),
    [anon_sym_vbroadcasti32x4] = ACTIONS(1),
    [anon_sym_ucomisd] = ACTIONS(1),
    [anon_sym_popcnt] = ACTIONS(1),
    [anon_sym_pmovmskb] = ACTIONS(1),
    [anon_sym_psubusb] = ACTIONS(1),
    [anon_sym_cmovp] = ACTIONS(1),
    [anon_sym_psubusw] = ACTIONS(1),
    [anon_sym_cmova] = ACTIONS(1),
    [anon_sym_psubq] = ACTIONS(1),
    [anon_sym_cmovge] = ACTIONS(1),
    [anon_sym_subl] = ACTIONS(1),
    [anon_sym_cmovbe] = ACTIONS(1),
    [anon_sym_punpckhdq] = ACTIONS(1),
    [anon_sym_psrlw] = ACTIONS(1),
    [anon_sym_cvttsd2si] = ACTIONS(1),
    [anon_sym_cmovb] = ACTIONS(1),
    [anon_sym_cvtsd2ss] = ACTIONS(1),
    [anon_sym_movzbq] = ACTIONS(1),
    [anon_sym_rex_DOTWB] = ACTIONS(1),
    [anon_sym_xchg] = ACTIONS(1),
    [anon_sym_aesdec] = ACTIONS(1),
    [anon_sym_punpckhbw] = ACTIONS(1),
    [anon_sym_cvtsi2sd] = ACTIONS(1),
    [anon_sym_psubd] = ACTIONS(1),
    [anon_sym_adox] = ACTIONS(1),
    [anon_sym_vmovdqa32] = ACTIONS(1),
    [anon_sym_packuswb] = ACTIONS(1),
    [anon_sym_btr] = ACTIONS(1),
    [anon_sym_cvtsi2sdl] = ACTIONS(1),
    [anon_sym_vbroadcastss] = ACTIONS(1),
    [anon_sym_subpd] = ACTIONS(1),
    [anon_sym_aesdeclast] = ACTIONS(1),
    [anon_sym_andw] = ACTIONS(1),
    [anon_sym_pslld] = ACTIONS(1),
    [anon_sym_vmovaps] = ACTIONS(1),
    [anon_sym_xorl] = ACTIONS(1),
    [anon_sym_divss] = ACTIONS(1),
    [anon_sym_punpckhqdq] = ACTIONS(1),
    [anon_sym_btl] = ACTIONS(1),
    [anon_sym_pmaddubsw] = ACTIONS(1),
    [anon_sym_pmaddwd] = ACTIONS(1),
    [anon_sym_movsbw] = ACTIONS(1),
    [anon_sym_orq] = ACTIONS(1),
    [anon_sym_cvtss2sd] = ACTIONS(1),
    [anon_sym_divsd] = ACTIONS(1),
    [anon_sym_vmovq] = ACTIONS(1),
    [anon_sym_xorw] = ACTIONS(1),
    [anon_sym_minsd] = ACTIONS(1),
    [anon_sym_xorps] = ACTIONS(1),
    [anon_sym_bsr] = ACTIONS(1),
    [anon_sym_pslldq] = ACTIONS(1),
    [anon_sym_cmovo] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_ucomiss] = ACTIONS(1),
    [anon_sym_punpcklqdq] = ACTIONS(1),
    [anon_sym_cmovle] = ACTIONS(1),
    [anon_sym_roll] = ACTIONS(1),
    [anon_sym_vbroadcasti128] = ACTIONS(1),
    [anon_sym_outsl] = ACTIONS(1),
    [anon_sym_psubb] = ACTIONS(1),
    [anon_sym_movhps] = ACTIONS(1),
    [anon_sym_movapd] = ACTIONS(1),
    [anon_sym_punpckldq] = ACTIONS(1),
    [anon_sym_movabs] = ACTIONS(1),
    [anon_sym_rex] = ACTIONS(1),
    [anon_sym_cmovne] = ACTIONS(1),
    [anon_sym_pclmulhqhqdq] = ACTIONS(1),
    [anon_sym_fmulp] = ACTIONS(1),
    [anon_sym_cmovns] = ACTIONS(1),
    [anon_sym_bt] = ACTIONS(1),
    [anon_sym_orb] = ACTIONS(1),
    [anon_sym_movbe] = ACTIONS(1),
    [anon_sym_vmovdqu64] = ACTIONS(1),
    [anon_sym_maxss] = ACTIONS(1),
    [anon_sym_xorpd] = ACTIONS(1),
    [anon_sym_psllq] = ACTIONS(1),
    [anon_sym_pcmpeqd] = ACTIONS(1),
    [anon_sym_punpcklbw] = ACTIONS(1),
    [anon_sym_cvttss2si] = ACTIONS(1),
    [anon_sym_andps] = ACTIONS(1),
    [anon_sym_orw] = ACTIONS(1),
    [anon_sym_cmove] = ACTIONS(1),
    [anon_sym_paddd] = ACTIONS(1),
    [anon_sym_re] = ACTIONS(1),
    [anon_sym_andb] = ACTIONS(1),
    [anon_sym_movsb] = ACTIONS(1),
    [anon_sym_andl] = ACTIONS(1),
    [anon_sym_vmovdqa] = ACTIONS(1),
    [anon_sym_paddq] = ACTIONS(1),
    [anon_sym_aesenclast] = ACTIONS(1),
    [anon_sym_minss] = ACTIONS(1),
    [anon_sym_cmovg] = ACTIONS(1),
    [anon_sym_vucomisd] = ACTIONS(1),
    [anon_sym_vmovsd] = ACTIONS(1),
    [anon_sym_adcx] = ACTIONS(1),
    [anon_sym_cmovl] = ACTIONS(1),
    [anon_sym_comisd] = ACTIONS(1),
    [anon_sym_cvtsi2sdq] = ACTIONS(1),
    [anon_sym_subq] = ACTIONS(1),
    [anon_sym_knotw] = ACTIONS(1),
    [anon_sym_pxor] = ACTIONS(1),
    [anon_sym_pandn] = ACTIONS(1),
    [anon_sym_repnz] = ACTIONS(1),
    [anon_sym_bts] = ACTIONS(1),
    [anon_sym_tzcnt] = ACTIONS(1),
    [anon_sym_paddw] = ACTIONS(1),
    [anon_sym_pclmullqhqdq] = ACTIONS(1),
    [anon_sym_rorl] = ACTIONS(1),
    [anon_sym_psrld] = ACTIONS(1),
    [anon_sym_insl] = ACTIONS(1),
    [anon_sym_insb] = ACTIONS(1),
    [anon_sym_punpckhwd] = ACTIONS(1),
    [anon_sym_pshufb] = ACTIONS(1),
    [anon_sym_cvtsi2ss] = ACTIONS(1),
    [anon_sym_testl] = ACTIONS(1),
    [anon_sym_comiss] = ACTIONS(1),
    [anon_sym_aesenc] = ACTIONS(1),
    [anon_sym_cvtsi2ssl] = ACTIONS(1),
    [anon_sym_psrad] = ACTIONS(1),
    [anon_sym_vpbroadcastq] = ACTIONS(1),
    [anon_sym_unpckhpd] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_sha1nexte] = ACTIONS(1),
    [anon_sym_cmovae] = ACTIONS(1),
    [anon_sym_sha1msg2] = ACTIONS(1),
    [anon_sym_movzbw] = ACTIONS(1),
    [anon_sym_vmovdqa64] = ACTIONS(1),
    [anon_sym_cmovs] = ACTIONS(1),
    [anon_sym_vpaddb] = ACTIONS(1),
    [anon_sym_vpsrlq] = ACTIONS(1),
    [anon_sym_vpmaddubsw] = ACTIONS(1),
    [anon_sym_shrd] = ACTIONS(1),
    [anon_sym_vextracti128] = ACTIONS(1),
    [anon_sym_vunpcklpd] = ACTIONS(1),
    [anon_sym_vcvtusi2sd] = ACTIONS(1),
    [anon_sym_vpsubw] = ACTIONS(1),
    [anon_sym_shufpd] = ACTIONS(1),
    [anon_sym_vpunpckhqdq] = ACTIONS(1),
    [anon_sym_pextrb] = ACTIONS(1),
    [anon_sym_vxorps] = ACTIONS(1),
    [anon_sym_vpxord] = ACTIONS(1),
    [anon_sym_nopw] = ACTIONS(1),
    [anon_sym_vprord] = ACTIONS(1),
    [anon_sym_shrx] = ACTIONS(1),
    [anon_sym_rorx] = ACTIONS(1),
    [anon_sym_vpunpckhwd] = ACTIONS(1),
    [anon_sym_pinsrw] = ACTIONS(1),
    [anon_sym_vpmuludq] = ACTIONS(1),
    [anon_sym_vpunpcklqdq] = ACTIONS(1),
    [anon_sym_vpand] = ACTIONS(1),
    [anon_sym_aeskeygenassist] = ACTIONS(1),
    [anon_sym_vaesenc] = ACTIONS(1),
    [anon_sym_vpcmpltud] = ACTIONS(1),
    [anon_sym_vpextrw] = ACTIONS(1),
    [anon_sym_vpslldq] = ACTIONS(1),
    [anon_sym_vprorq] = ACTIONS(1),
    [anon_sym_blendvps] = ACTIONS(1),
    [anon_sym_pshufd] = ACTIONS(1),
    [anon_sym_vpaddw] = ACTIONS(1),
    [anon_sym_vpsllw] = ACTIONS(1),
    [anon_sym_vpsrld] = ACTIONS(1),
    [anon_sym_pextrq] = ACTIONS(1),
    [anon_sym_vpsubd] = ACTIONS(1),
    [anon_sym_pextrw] = ACTIONS(1),
    [anon_sym_shufps] = ACTIONS(1),
    [anon_sym_pshuflw] = ACTIONS(1),
    [anon_sym_vpsubq] = ACTIONS(1),
    [anon_sym_shld] = ACTIONS(1),
    [anon_sym_vpslld] = ACTIONS(1),
    [anon_sym_vpermt2d] = ACTIONS(1),
    [anon_sym_vunpckhpd] = ACTIONS(1),
    [anon_sym_vmulsd] = ACTIONS(1),
    [anon_sym_vpunpckhdq] = ACTIONS(1),
    [anon_sym_vpshufd] = ACTIONS(1),
    [anon_sym_vpor] = ACTIONS(1),
    [anon_sym_vpunpckldq] = ACTIONS(1),
    [anon_sym_vextracti32x4] = ACTIONS(1),
    [anon_sym_vsubsd] = ACTIONS(1),
    [anon_sym_vpmaddwd] = ACTIONS(1),
    [anon_sym_pblendw] = ACTIONS(1),
    [anon_sym_vunpckhps] = ACTIONS(1),
    [anon_sym_vpblendmd] = ACTIONS(1),
    [anon_sym_vpsllq] = ACTIONS(1),
    [anon_sym_sarx] = ACTIONS(1),
    [anon_sym_shlx] = ACTIONS(1),
    [anon_sym_vpxor] = ACTIONS(1),
    [anon_sym_vpermd] = ACTIONS(1),
    [anon_sym_vpcmpgtd] = ACTIONS(1),
    [anon_sym_vpsubusw] = ACTIONS(1),
    [anon_sym_vpackusdw] = ACTIONS(1),
    [anon_sym_mulx] = ACTIONS(1),
    [anon_sym_vpsrlw] = ACTIONS(1),
    [anon_sym_vpaddq] = ACTIONS(1),
    [anon_sym_pshufhw] = ACTIONS(1),
    [anon_sym_andn] = ACTIONS(1),
    [anon_sym_vpunpcklwd] = ACTIONS(1),
    [anon_sym_palignr] = ACTIONS(1),
    [anon_sym_pinsrd] = ACTIONS(1),
    [anon_sym_vpsrldq] = ACTIONS(1),
    [anon_sym_vpermq] = ACTIONS(1),
    [anon_sym_vunpcklps] = ACTIONS(1),
    [anon_sym_sha1rnds4] = ACTIONS(1),
    [anon_sym_vpermi2d] = ACTIONS(1),
    [anon_sym_vaesenclast] = ACTIONS(1),
    [anon_sym_vdivsd] = ACTIONS(1),
    [anon_sym_vpaddd] = ACTIONS(1),
    [anon_sym_pinsrb] = ACTIONS(1),
    [anon_sym_vpmullw] = ACTIONS(1),
    [anon_sym_vpshufb] = ACTIONS(1),
    [anon_sym_vpinsrw] = ACTIONS(1),
    [anon_sym_vpblendd] = ACTIONS(1),
    [anon_sym_vinserti128] = ACTIONS(1),
    [anon_sym_vshufi64x2] = ACTIONS(1),
    [anon_sym_addw] = ACTIONS(1),
    [anon_sym_vperm2i128] = ACTIONS(1),
    [anon_sym_vpinsrd] = ACTIONS(1),
    [anon_sym_vpinsrq] = ACTIONS(1),
    [anon_sym_vpinsrb] = ACTIONS(1),
    [anon_sym_vperm2f128] = ACTIONS(1),
    [anon_sym_vshufi32x4] = ACTIONS(1),
    [anon_sym_vblendps] = ACTIONS(1),
    [anon_sym_vshufps] = ACTIONS(1),
    [anon_sym_vpalignr] = ACTIONS(1),
    [anon_sym_vblendvps] = ACTIONS(1),
    [anon_sym_vinsertf128] = ACTIONS(1),
    [anon_sym_vinserti32x4] = ACTIONS(1),
    [anon_sym_movsbl] = ACTIONS(1),
    [anon_sym_cmpb] = ACTIONS(1),
    [anon_sym_cwtl] = ACTIONS(1),
    [anon_sym_shrl] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_andq] = ACTIONS(1),
    [anon_sym_cmp] = ACTIONS(1),
    [anon_sym_cwtd] = ACTIONS(1),
    [anon_sym_movdqa] = ACTIONS(1),
    [anon_sym_movq] = ACTIONS(1),
    [anon_sym_addb] = ACTIONS(1),
    [anon_sym_jno] = ACTIONS(1),
    [anon_sym_rex_DOTW] = ACTIONS(1),
    [anon_sym_testb] = ACTIONS(1),
    [anon_sym_addsd] = ACTIONS(1),
    [anon_sym_rol] = ACTIONS(1),
    [anon_sym_sar] = ACTIONS(1),
    [anon_sym_rex_DOTB] = ACTIONS(1),
    [anon_sym_vmovdqu] = ACTIONS(1),
    [anon_sym_callq] = ACTIONS(1),
    [anon_sym_movups] = ACTIONS(1),
    [anon_sym_vpclmullqhqdq] = ACTIONS(1),
    [anon_sym_subss] = ACTIONS(1),
    [anon_sym_jb] = ACTIONS(1),
    [anon_sym_rex_DOTRXB] = ACTIONS(1),
    [anon_sym_jae] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_mulsd] = ACTIONS(1),
    [anon_sym_addl] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_jne] = ACTIONS(1),
    [anon_sym_cltq] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_je] = ACTIONS(1),
    [anon_sym_cltd] = ACTIONS(1),
    [anon_sym_movb] = ACTIONS(1),
    [anon_sym_movaps] = ACTIONS(1),
    [anon_sym_cpuid] = ACTIONS(1),
    [anon_sym_vmovdqu32] = ACTIONS(1),
    [anon_sym_jo] = ACTIONS(1),
    [anon_sym_jmpq] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_rex_DOTWRB] = ACTIONS(1),
    [anon_sym_movl] = ACTIONS(1),
    [anon_sym_retq] = ACTIONS(1),
    [anon_sym_jge] = ACTIONS(1),
    [anon_sym_movsd] = ACTIONS(1),
    [anon_sym_jg] = ACTIONS(1),
    [anon_sym_movss] = ACTIONS(1),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(1),
    [anon_sym_shl] = ACTIONS(1),
    [anon_sym_subw] = ACTIONS(1),
    [anon_sym_ror] = ACTIONS(1),
    [anon_sym_cbtw] = ACTIONS(1),
    [anon_sym_repz] = ACTIONS(1),
    [anon_sym_mulss] = ACTIONS(1),
    [anon_sym_movw] = ACTIONS(1),
    [anon_sym_vpclmullqlqdq] = ACTIONS(1),
    [anon_sym_movsbq] = ACTIONS(1),
    [anon_sym_nopl] = ACTIONS(1),
    [anon_sym_shll] = ACTIONS(1),
    [anon_sym_cqto] = ACTIONS(1),
    [anon_sym_mov] = ACTIONS(1),
    [anon_sym_ss] = ACTIONS(1),
    [anon_sym_adc] = ACTIONS(1),
    [anon_sym_leaveq] = ACTIONS(1),
    [anon_sym_lea] = ACTIONS(1),
    [anon_sym_movslq] = ACTIONS(1),
    [anon_sym_mfence] = ACTIONS(1),
    [anon_sym_ud2] = ACTIONS(1),
    [anon_sym_rex_DOTWRXB] = ACTIONS(1),
    [anon_sym_shr] = ACTIONS(1),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(1),
    [anon_sym_movzbl] = ACTIONS(1),
    [anon_sym_femms] = ACTIONS(1),
    [anon_sym_addss] = ACTIONS(1),
    [anon_sym_movzwl] = ACTIONS(1),
    [anon_sym_sbb] = ACTIONS(1),
    [anon_sym_cmpq] = ACTIONS(1),
    [anon_sym_xgetbv] = ACTIONS(1),
    [anon_sym_pushq] = ACTIONS(1),
    [anon_sym_endbr64] = ACTIONS(1),
    [anon_sym_vzeroupper] = ACTIONS(1),
    [anon_sym_ja] = ACTIONS(1),
    [anon_sym_nop] = ACTIONS(1),
    [anon_sym_addr32] = ACTIONS(1),
    [anon_sym_movdqu] = ACTIONS(1),
    [anon_sym_pand] = ACTIONS(1),
    [anon_sym_movswl] = ACTIONS(1),
    [anon_sym_prefetcht0] = ACTIONS(1),
    [anon_sym_vmovups] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_subsd] = ACTIONS(1),
    [anon_sym_subb] = ACTIONS(1),
    [anon_sym_vinserti64x4] = ACTIONS(1),
    [anon_sym_rex_DOTXB] = ACTIONS(1),
    [anon_sym_vzeroall] = ACTIONS(1),
    [anon_sym_shrq] = ACTIONS(1),
    [anon_sym_sarl] = ACTIONS(1),
    [anon_sym_cmpw] = ACTIONS(1),
    [anon_sym_data16] = ACTIONS(1),
    [anon_sym_jbe] = ACTIONS(1),
    [anon_sym_jl] = ACTIONS(1),
    [anon_sym_shlq] = ACTIONS(1),
    [anon_sym_cmpl] = ACTIONS(1),
    [anon_sym_movd] = ACTIONS(1),
    [anon_sym_imul] = ACTIONS(1),
    [sym_two_bytes] = ACTIONS(1),
  },
  [1] = {
    [sym_prog] = STATE(99),
    [sym__line] = STATE(7),
    [sym_instruction_one_operand] = STATE(139),
    [sym_instruction_two_operands] = STATE(139),
    [sym_instruction_three_operands] = STATE(139),
    [sym_instruction_four_operands] = STATE(139),
    [sym_instruction_six_operands] = STATE(139),
    [sym_instruction_undetermined_operands] = STATE(139),
    [sym_operand] = STATE(26),
    [aux_sym_prog_repeat1] = STATE(7),
    [aux_sym_instruction_one_operand_repeat1] = STATE(26),
    [aux_sym_operand_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(5),
    [aux_sym_operand_token1] = ACTIONS(7),
  },
  [2] = {
    [sym_opcodes_one_operand] = STATE(84),
    [sym_opcodes_two_operands] = STATE(31),
    [sym_opcodes_three_operands] = STATE(32),
    [sym_opcodes_four_operands] = STATE(33),
    [sym_opcodes_six_operands] = STATE(34),
    [sym_opcodes_undetermined_operands] = STATE(12),
    [aux_sym_instruction_one_operand_repeat2] = STATE(5),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_gs] = ACTIONS(11),
    [anon_sym_idiv] = ACTIONS(11),
    [anon_sym_negl] = ACTIONS(11),
    [anon_sym_negq] = ACTIONS(11),
    [anon_sym_jp] = ACTIONS(11),
    [anon_sym_jrcxz] = ACTIONS(11),
    [anon_sym_notw] = ACTIONS(11),
    [anon_sym_setl] = ACTIONS(11),
    [anon_sym_jle] = ACTIONS(11),
    [anon_sym_divl] = ACTIONS(11),
    [anon_sym_setge] = ACTIONS(11),
    [anon_sym_fldt] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_notl] = ACTIONS(11),
    [anon_sym_setb] = ACTIONS(11),
    [anon_sym_fs] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_seto] = ACTIONS(11),
    [anon_sym_sete] = ACTIONS(11),
    [anon_sym_setle] = ACTIONS(11),
    [anon_sym_seta] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_div] = ACTIONS(11),
    [anon_sym_notrack] = ACTIONS(11),
    [anon_sym_jns] = ACTIONS(11),
    [anon_sym_mulw] = ACTIONS(11),
    [anon_sym_rex_DOTRB] = ACTIONS(11),
    [anon_sym_incl] = ACTIONS(11),
    [anon_sym_setbe] = ACTIONS(11),
    [anon_sym_setp] = ACTIONS(11),
    [anon_sym_idivl] = ACTIONS(11),
    [anon_sym_setns] = ACTIONS(11),
    [anon_sym_inc] = ACTIONS(11),
    [anon_sym_setne] = ACTIONS(11),
    [anon_sym_divq] = ACTIONS(11),
    [anon_sym_prefetcht1] = ACTIONS(11),
    [anon_sym_fstpl] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_mulq] = ACTIONS(11),
    [anon_sym_mul] = ACTIONS(11),
    [anon_sym_bswap] = ACTIONS(11),
    [anon_sym_fildl] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [anon_sym_setae] = ACTIONS(11),
    [anon_sym_js] = ACTIONS(11),
    [anon_sym_mull] = ACTIONS(11),
    [anon_sym_setnp] = ACTIONS(11),
    [anon_sym_mulb] = ACTIONS(11),
    [anon_sym_setg] = ACTIONS(11),
    [anon_sym_vucomiss] = ACTIONS(13),
    [anon_sym_vmovss] = ACTIONS(13),
    [anon_sym_vmovapd] = ACTIONS(13),
    [anon_sym_vpbroadcastd] = ACTIONS(13),
    [anon_sym_orl] = ACTIONS(13),
    [anon_sym_pclmullqlqdq] = ACTIONS(13),
    [anon_sym_por] = ACTIONS(13),
    [anon_sym_pcmpgtd] = ACTIONS(13),
    [anon_sym_movswq] = ACTIONS(13),
    [anon_sym_psrldq] = ACTIONS(13),
    [anon_sym_rep] = ACTIONS(13),
    [anon_sym_kmovw] = ACTIONS(13),
    [anon_sym_movhlps] = ACTIONS(13),
    [anon_sym_addq] = ACTIONS(13),
    [anon_sym_psrlq] = ACTIONS(13),
    [anon_sym_punpcklwd] = ACTIONS(13),
    [anon_sym_outsb] = ACTIONS(13),
    [anon_sym_bsf] = ACTIONS(13),
    [anon_sym_pcmpeqb] = ACTIONS(13),
    [anon_sym_maxsd] = ACTIONS(13),
    [anon_sym_sha1msg1] = ACTIONS(13),
    [anon_sym_andpd] = ACTIONS(13),
    [anon_sym_vmovd] = ACTIONS(13),
    [anon_sym_pmuludq] = ACTIONS(13),
    [anon_sym_vbroadcasti32x4] = ACTIONS(13),
    [anon_sym_ucomisd] = ACTIONS(13),
    [anon_sym_popcnt] = ACTIONS(13),
    [anon_sym_pmovmskb] = ACTIONS(13),
    [anon_sym_psubusb] = ACTIONS(13),
    [anon_sym_cmovp] = ACTIONS(13),
    [anon_sym_psubusw] = ACTIONS(13),
    [anon_sym_cmova] = ACTIONS(13),
    [anon_sym_psubq] = ACTIONS(13),
    [anon_sym_cmovge] = ACTIONS(13),
    [anon_sym_subl] = ACTIONS(13),
    [anon_sym_cmovbe] = ACTIONS(13),
    [anon_sym_punpckhdq] = ACTIONS(13),
    [anon_sym_psrlw] = ACTIONS(13),
    [anon_sym_cvttsd2si] = ACTIONS(13),
    [anon_sym_cmovb] = ACTIONS(13),
    [anon_sym_cvtsd2ss] = ACTIONS(13),
    [anon_sym_movzbq] = ACTIONS(13),
    [anon_sym_rex_DOTWB] = ACTIONS(13),
    [anon_sym_xchg] = ACTIONS(13),
    [anon_sym_aesdec] = ACTIONS(13),
    [anon_sym_punpckhbw] = ACTIONS(13),
    [anon_sym_cvtsi2sd] = ACTIONS(13),
    [anon_sym_psubd] = ACTIONS(13),
    [anon_sym_adox] = ACTIONS(13),
    [anon_sym_vmovdqa32] = ACTIONS(13),
    [anon_sym_packuswb] = ACTIONS(13),
    [anon_sym_btr] = ACTIONS(13),
    [anon_sym_cvtsi2sdl] = ACTIONS(13),
    [anon_sym_vbroadcastss] = ACTIONS(13),
    [anon_sym_subpd] = ACTIONS(13),
    [anon_sym_aesdeclast] = ACTIONS(13),
    [anon_sym_andw] = ACTIONS(13),
    [anon_sym_pslld] = ACTIONS(13),
    [anon_sym_vmovaps] = ACTIONS(13),
    [anon_sym_xorl] = ACTIONS(13),
    [anon_sym_divss] = ACTIONS(13),
    [anon_sym_punpckhqdq] = ACTIONS(13),
    [anon_sym_btl] = ACTIONS(13),
    [anon_sym_pmaddubsw] = ACTIONS(13),
    [anon_sym_pmaddwd] = ACTIONS(13),
    [anon_sym_movsbw] = ACTIONS(13),
    [anon_sym_orq] = ACTIONS(13),
    [anon_sym_cvtss2sd] = ACTIONS(13),
    [anon_sym_divsd] = ACTIONS(13),
    [anon_sym_vmovq] = ACTIONS(13),
    [anon_sym_xorw] = ACTIONS(13),
    [anon_sym_minsd] = ACTIONS(13),
    [anon_sym_xorps] = ACTIONS(13),
    [anon_sym_bsr] = ACTIONS(13),
    [anon_sym_pslldq] = ACTIONS(13),
    [anon_sym_cmovo] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(13),
    [anon_sym_ucomiss] = ACTIONS(13),
    [anon_sym_punpcklqdq] = ACTIONS(13),
    [anon_sym_cmovle] = ACTIONS(13),
    [anon_sym_roll] = ACTIONS(13),
    [anon_sym_vbroadcasti128] = ACTIONS(13),
    [anon_sym_outsl] = ACTIONS(13),
    [anon_sym_psubb] = ACTIONS(13),
    [anon_sym_movhps] = ACTIONS(13),
    [anon_sym_movapd] = ACTIONS(13),
    [anon_sym_punpckldq] = ACTIONS(13),
    [anon_sym_movabs] = ACTIONS(13),
    [anon_sym_rex] = ACTIONS(13),
    [anon_sym_cmovne] = ACTIONS(13),
    [anon_sym_pclmulhqhqdq] = ACTIONS(13),
    [anon_sym_fmulp] = ACTIONS(13),
    [anon_sym_cmovns] = ACTIONS(13),
    [anon_sym_bt] = ACTIONS(13),
    [anon_sym_orb] = ACTIONS(13),
    [anon_sym_movbe] = ACTIONS(13),
    [anon_sym_vmovdqu64] = ACTIONS(13),
    [anon_sym_maxss] = ACTIONS(13),
    [anon_sym_xorpd] = ACTIONS(13),
    [anon_sym_psllq] = ACTIONS(13),
    [anon_sym_pcmpeqd] = ACTIONS(13),
    [anon_sym_punpcklbw] = ACTIONS(13),
    [anon_sym_cvttss2si] = ACTIONS(13),
    [anon_sym_andps] = ACTIONS(13),
    [anon_sym_orw] = ACTIONS(13),
    [anon_sym_cmove] = ACTIONS(13),
    [anon_sym_paddd] = ACTIONS(13),
    [anon_sym_re] = ACTIONS(13),
    [anon_sym_andb] = ACTIONS(13),
    [anon_sym_movsb] = ACTIONS(13),
    [anon_sym_andl] = ACTIONS(13),
    [anon_sym_vmovdqa] = ACTIONS(13),
    [anon_sym_paddq] = ACTIONS(13),
    [anon_sym_aesenclast] = ACTIONS(13),
    [anon_sym_minss] = ACTIONS(13),
    [anon_sym_cmovg] = ACTIONS(13),
    [anon_sym_vucomisd] = ACTIONS(13),
    [anon_sym_vmovsd] = ACTIONS(13),
    [anon_sym_adcx] = ACTIONS(13),
    [anon_sym_cmovl] = ACTIONS(13),
    [anon_sym_comisd] = ACTIONS(13),
    [anon_sym_cvtsi2sdq] = ACTIONS(13),
    [anon_sym_subq] = ACTIONS(13),
    [anon_sym_knotw] = ACTIONS(13),
    [anon_sym_pxor] = ACTIONS(13),
    [anon_sym_pandn] = ACTIONS(13),
    [anon_sym_repnz] = ACTIONS(13),
    [anon_sym_bts] = ACTIONS(13),
    [anon_sym_tzcnt] = ACTIONS(13),
    [anon_sym_paddw] = ACTIONS(13),
    [anon_sym_pclmullqhqdq] = ACTIONS(13),
    [anon_sym_rorl] = ACTIONS(13),
    [anon_sym_psrld] = ACTIONS(13),
    [anon_sym_insl] = ACTIONS(13),
    [anon_sym_insb] = ACTIONS(13),
    [anon_sym_punpckhwd] = ACTIONS(13),
    [anon_sym_pshufb] = ACTIONS(13),
    [anon_sym_cvtsi2ss] = ACTIONS(13),
    [anon_sym_testl] = ACTIONS(13),
    [anon_sym_comiss] = ACTIONS(13),
    [anon_sym_aesenc] = ACTIONS(13),
    [anon_sym_cvtsi2ssl] = ACTIONS(13),
    [anon_sym_psrad] = ACTIONS(13),
    [anon_sym_vpbroadcastq] = ACTIONS(13),
    [anon_sym_unpckhpd] = ACTIONS(13),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_sha1nexte] = ACTIONS(13),
    [anon_sym_cmovae] = ACTIONS(13),
    [anon_sym_sha1msg2] = ACTIONS(13),
    [anon_sym_movzbw] = ACTIONS(13),
    [anon_sym_vmovdqa64] = ACTIONS(13),
    [anon_sym_cmovs] = ACTIONS(13),
    [anon_sym_vpaddb] = ACTIONS(15),
    [anon_sym_vpsrlq] = ACTIONS(15),
    [anon_sym_vpmaddubsw] = ACTIONS(15),
    [anon_sym_shrd] = ACTIONS(15),
    [anon_sym_vextracti128] = ACTIONS(15),
    [anon_sym_vunpcklpd] = ACTIONS(15),
    [anon_sym_vcvtusi2sd] = ACTIONS(15),
    [anon_sym_vpsubw] = ACTIONS(15),
    [anon_sym_shufpd] = ACTIONS(15),
    [anon_sym_vpunpckhqdq] = ACTIONS(15),
    [anon_sym_pextrb] = ACTIONS(15),
    [anon_sym_vxorps] = ACTIONS(15),
    [anon_sym_vpxord] = ACTIONS(15),
    [anon_sym_nopw] = ACTIONS(15),
    [anon_sym_vprord] = ACTIONS(15),
    [anon_sym_shrx] = ACTIONS(15),
    [anon_sym_rorx] = ACTIONS(15),
    [anon_sym_vpunpckhwd] = ACTIONS(15),
    [anon_sym_pinsrw] = ACTIONS(15),
    [anon_sym_vpmuludq] = ACTIONS(15),
    [anon_sym_vpunpcklqdq] = ACTIONS(15),
    [anon_sym_vpand] = ACTIONS(15),
    [anon_sym_aeskeygenassist] = ACTIONS(15),
    [anon_sym_vaesenc] = ACTIONS(15),
    [anon_sym_vpcmpltud] = ACTIONS(15),
    [anon_sym_vpextrw] = ACTIONS(15),
    [anon_sym_vpslldq] = ACTIONS(15),
    [anon_sym_vprorq] = ACTIONS(15),
    [anon_sym_blendvps] = ACTIONS(15),
    [anon_sym_pshufd] = ACTIONS(15),
    [anon_sym_vpaddw] = ACTIONS(15),
    [anon_sym_vpsllw] = ACTIONS(15),
    [anon_sym_vpsrld] = ACTIONS(15),
    [anon_sym_pextrq] = ACTIONS(15),
    [anon_sym_vpsubd] = ACTIONS(15),
    [anon_sym_pextrw] = ACTIONS(15),
    [anon_sym_shufps] = ACTIONS(15),
    [anon_sym_pshuflw] = ACTIONS(15),
    [anon_sym_vpsubq] = ACTIONS(15),
    [anon_sym_shld] = ACTIONS(15),
    [anon_sym_vpslld] = ACTIONS(15),
    [anon_sym_vpermt2d] = ACTIONS(15),
    [anon_sym_vunpckhpd] = ACTIONS(15),
    [anon_sym_vmulsd] = ACTIONS(15),
    [anon_sym_vpunpckhdq] = ACTIONS(15),
    [anon_sym_vpshufd] = ACTIONS(15),
    [anon_sym_vpor] = ACTIONS(15),
    [anon_sym_vpunpckldq] = ACTIONS(15),
    [anon_sym_vextracti32x4] = ACTIONS(15),
    [anon_sym_vsubsd] = ACTIONS(15),
    [anon_sym_vpmaddwd] = ACTIONS(15),
    [anon_sym_pblendw] = ACTIONS(15),
    [anon_sym_vunpckhps] = ACTIONS(15),
    [anon_sym_vpblendmd] = ACTIONS(15),
    [anon_sym_vpsllq] = ACTIONS(15),
    [anon_sym_sarx] = ACTIONS(15),
    [anon_sym_shlx] = ACTIONS(15),
    [anon_sym_vpxor] = ACTIONS(15),
    [anon_sym_vpermd] = ACTIONS(15),
    [anon_sym_vpcmpgtd] = ACTIONS(15),
    [anon_sym_vpsubusw] = ACTIONS(15),
    [anon_sym_vpackusdw] = ACTIONS(15),
    [anon_sym_mulx] = ACTIONS(15),
    [anon_sym_vpsrlw] = ACTIONS(15),
    [anon_sym_vpaddq] = ACTIONS(15),
    [anon_sym_pshufhw] = ACTIONS(15),
    [anon_sym_andn] = ACTIONS(15),
    [anon_sym_vpunpcklwd] = ACTIONS(15),
    [anon_sym_palignr] = ACTIONS(15),
    [anon_sym_pinsrd] = ACTIONS(15),
    [anon_sym_vpsrldq] = ACTIONS(15),
    [anon_sym_vpermq] = ACTIONS(15),
    [anon_sym_vunpcklps] = ACTIONS(15),
    [anon_sym_sha1rnds4] = ACTIONS(15),
    [anon_sym_vpermi2d] = ACTIONS(15),
    [anon_sym_vaesenclast] = ACTIONS(15),
    [anon_sym_vdivsd] = ACTIONS(15),
    [anon_sym_vpaddd] = ACTIONS(15),
    [anon_sym_pinsrb] = ACTIONS(15),
    [anon_sym_vpmullw] = ACTIONS(15),
    [anon_sym_vpshufb] = ACTIONS(15),
    [anon_sym_vpinsrw] = ACTIONS(17),
    [anon_sym_vpblendd] = ACTIONS(17),
    [anon_sym_vinserti128] = ACTIONS(17),
    [anon_sym_vshufi64x2] = ACTIONS(17),
    [anon_sym_addw] = ACTIONS(17),
    [anon_sym_vperm2i128] = ACTIONS(17),
    [anon_sym_vpinsrd] = ACTIONS(17),
    [anon_sym_vpinsrq] = ACTIONS(17),
    [anon_sym_vpinsrb] = ACTIONS(17),
    [anon_sym_vperm2f128] = ACTIONS(17),
    [anon_sym_vshufi32x4] = ACTIONS(17),
    [anon_sym_vblendps] = ACTIONS(17),
    [anon_sym_vshufps] = ACTIONS(17),
    [anon_sym_vpalignr] = ACTIONS(17),
    [anon_sym_vblendvps] = ACTIONS(17),
    [anon_sym_vinsertf128] = ACTIONS(19),
    [anon_sym_vinserti32x4] = ACTIONS(19),
    [anon_sym_movsbl] = ACTIONS(21),
    [anon_sym_cmpb] = ACTIONS(21),
    [anon_sym_cwtl] = ACTIONS(21),
    [anon_sym_shrl] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_andq] = ACTIONS(21),
    [anon_sym_cmp] = ACTIONS(21),
    [anon_sym_cwtd] = ACTIONS(21),
    [anon_sym_movdqa] = ACTIONS(21),
    [anon_sym_movq] = ACTIONS(21),
    [anon_sym_addb] = ACTIONS(21),
    [anon_sym_jno] = ACTIONS(21),
    [anon_sym_rex_DOTW] = ACTIONS(21),
    [anon_sym_testb] = ACTIONS(21),
    [anon_sym_addsd] = ACTIONS(21),
    [anon_sym_rol] = ACTIONS(21),
    [anon_sym_sar] = ACTIONS(21),
    [anon_sym_rex_DOTB] = ACTIONS(21),
    [anon_sym_vmovdqu] = ACTIONS(21),
    [anon_sym_callq] = ACTIONS(21),
    [anon_sym_movups] = ACTIONS(21),
    [anon_sym_vpclmullqhqdq] = ACTIONS(21),
    [anon_sym_subss] = ACTIONS(21),
    [anon_sym_jb] = ACTIONS(21),
    [anon_sym_rex_DOTRXB] = ACTIONS(21),
    [anon_sym_jae] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_mulsd] = ACTIONS(21),
    [anon_sym_addl] = ACTIONS(21),
    [anon_sym_jmp] = ACTIONS(21),
    [anon_sym_jne] = ACTIONS(21),
    [anon_sym_cltq] = ACTIONS(21),
    [anon_sym_sub] = ACTIONS(21),
    [anon_sym_je] = ACTIONS(21),
    [anon_sym_cltd] = ACTIONS(21),
    [anon_sym_movb] = ACTIONS(21),
    [anon_sym_movaps] = ACTIONS(21),
    [anon_sym_cpuid] = ACTIONS(21),
    [anon_sym_vmovdqu32] = ACTIONS(21),
    [anon_sym_jo] = ACTIONS(21),
    [anon_sym_jmpq] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_rex_DOTWRB] = ACTIONS(21),
    [anon_sym_movl] = ACTIONS(21),
    [anon_sym_retq] = ACTIONS(21),
    [anon_sym_jge] = ACTIONS(21),
    [anon_sym_movsd] = ACTIONS(21),
    [anon_sym_jg] = ACTIONS(21),
    [anon_sym_movss] = ACTIONS(21),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(21),
    [anon_sym_shl] = ACTIONS(21),
    [anon_sym_subw] = ACTIONS(21),
    [anon_sym_ror] = ACTIONS(21),
    [anon_sym_cbtw] = ACTIONS(21),
    [anon_sym_repz] = ACTIONS(21),
    [anon_sym_mulss] = ACTIONS(21),
    [anon_sym_movw] = ACTIONS(21),
    [anon_sym_vpclmullqlqdq] = ACTIONS(21),
    [anon_sym_movsbq] = ACTIONS(21),
    [anon_sym_nopl] = ACTIONS(21),
    [anon_sym_shll] = ACTIONS(21),
    [anon_sym_cqto] = ACTIONS(21),
    [anon_sym_mov] = ACTIONS(21),
    [anon_sym_ss] = ACTIONS(21),
    [anon_sym_adc] = ACTIONS(21),
    [anon_sym_leaveq] = ACTIONS(21),
    [anon_sym_lea] = ACTIONS(21),
    [anon_sym_movslq] = ACTIONS(21),
    [anon_sym_mfence] = ACTIONS(21),
    [anon_sym_ud2] = ACTIONS(21),
    [anon_sym_rex_DOTWRXB] = ACTIONS(21),
    [anon_sym_shr] = ACTIONS(21),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(21),
    [anon_sym_movzbl] = ACTIONS(21),
    [anon_sym_femms] = ACTIONS(21),
    [anon_sym_addss] = ACTIONS(21),
    [anon_sym_movzwl] = ACTIONS(21),
    [anon_sym_sbb] = ACTIONS(21),
    [anon_sym_cmpq] = ACTIONS(21),
    [anon_sym_xgetbv] = ACTIONS(21),
    [anon_sym_pushq] = ACTIONS(21),
    [anon_sym_endbr64] = ACTIONS(21),
    [anon_sym_vzeroupper] = ACTIONS(21),
    [anon_sym_ja] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(21),
    [anon_sym_addr32] = ACTIONS(21),
    [anon_sym_movdqu] = ACTIONS(21),
    [anon_sym_pand] = ACTIONS(21),
    [anon_sym_movswl] = ACTIONS(21),
    [anon_sym_prefetcht0] = ACTIONS(21),
    [anon_sym_vmovups] = ACTIONS(21),
    [anon_sym_add] = ACTIONS(21),
    [anon_sym_subsd] = ACTIONS(21),
    [anon_sym_subb] = ACTIONS(21),
    [anon_sym_vinserti64x4] = ACTIONS(21),
    [anon_sym_rex_DOTXB] = ACTIONS(21),
    [anon_sym_vzeroall] = ACTIONS(21),
    [anon_sym_shrq] = ACTIONS(21),
    [anon_sym_sarl] = ACTIONS(21),
    [anon_sym_cmpw] = ACTIONS(21),
    [anon_sym_data16] = ACTIONS(21),
    [anon_sym_jbe] = ACTIONS(21),
    [anon_sym_jl] = ACTIONS(21),
    [anon_sym_shlq] = ACTIONS(21),
    [anon_sym_cmpl] = ACTIONS(21),
    [anon_sym_movd] = ACTIONS(21),
    [anon_sym_imul] = ACTIONS(21),
    [sym_two_bytes] = ACTIONS(23),
  },
  [3] = {
    [sym_opcodes_one_operand] = STATE(42),
    [sym_opcodes_two_operands] = STATE(43),
    [sym_opcodes_three_operands] = STATE(44),
    [sym_opcodes_four_operands] = STATE(45),
    [sym_opcodes_six_operands] = STATE(46),
    [sym_opcodes_undetermined_operands] = STATE(10),
    [aux_sym_instruction_one_operand_repeat2] = STATE(4),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_gs] = ACTIONS(11),
    [anon_sym_idiv] = ACTIONS(11),
    [anon_sym_negl] = ACTIONS(11),
    [anon_sym_negq] = ACTIONS(11),
    [anon_sym_jp] = ACTIONS(11),
    [anon_sym_jrcxz] = ACTIONS(11),
    [anon_sym_notw] = ACTIONS(11),
    [anon_sym_setl] = ACTIONS(11),
    [anon_sym_jle] = ACTIONS(11),
    [anon_sym_divl] = ACTIONS(11),
    [anon_sym_setge] = ACTIONS(11),
    [anon_sym_fldt] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_notl] = ACTIONS(11),
    [anon_sym_setb] = ACTIONS(11),
    [anon_sym_fs] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_seto] = ACTIONS(11),
    [anon_sym_sete] = ACTIONS(11),
    [anon_sym_setle] = ACTIONS(11),
    [anon_sym_seta] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_div] = ACTIONS(11),
    [anon_sym_notrack] = ACTIONS(11),
    [anon_sym_jns] = ACTIONS(11),
    [anon_sym_mulw] = ACTIONS(11),
    [anon_sym_rex_DOTRB] = ACTIONS(11),
    [anon_sym_incl] = ACTIONS(11),
    [anon_sym_setbe] = ACTIONS(11),
    [anon_sym_setp] = ACTIONS(11),
    [anon_sym_idivl] = ACTIONS(11),
    [anon_sym_setns] = ACTIONS(11),
    [anon_sym_inc] = ACTIONS(11),
    [anon_sym_setne] = ACTIONS(11),
    [anon_sym_divq] = ACTIONS(11),
    [anon_sym_prefetcht1] = ACTIONS(11),
    [anon_sym_fstpl] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_mulq] = ACTIONS(11),
    [anon_sym_mul] = ACTIONS(11),
    [anon_sym_bswap] = ACTIONS(11),
    [anon_sym_fildl] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [anon_sym_setae] = ACTIONS(11),
    [anon_sym_js] = ACTIONS(11),
    [anon_sym_mull] = ACTIONS(11),
    [anon_sym_setnp] = ACTIONS(11),
    [anon_sym_mulb] = ACTIONS(11),
    [anon_sym_setg] = ACTIONS(11),
    [anon_sym_vucomiss] = ACTIONS(13),
    [anon_sym_vmovss] = ACTIONS(13),
    [anon_sym_vmovapd] = ACTIONS(13),
    [anon_sym_vpbroadcastd] = ACTIONS(13),
    [anon_sym_orl] = ACTIONS(13),
    [anon_sym_pclmullqlqdq] = ACTIONS(13),
    [anon_sym_por] = ACTIONS(13),
    [anon_sym_pcmpgtd] = ACTIONS(13),
    [anon_sym_movswq] = ACTIONS(13),
    [anon_sym_psrldq] = ACTIONS(13),
    [anon_sym_rep] = ACTIONS(13),
    [anon_sym_kmovw] = ACTIONS(13),
    [anon_sym_movhlps] = ACTIONS(13),
    [anon_sym_addq] = ACTIONS(13),
    [anon_sym_psrlq] = ACTIONS(13),
    [anon_sym_punpcklwd] = ACTIONS(13),
    [anon_sym_outsb] = ACTIONS(13),
    [anon_sym_bsf] = ACTIONS(13),
    [anon_sym_pcmpeqb] = ACTIONS(13),
    [anon_sym_maxsd] = ACTIONS(13),
    [anon_sym_sha1msg1] = ACTIONS(13),
    [anon_sym_andpd] = ACTIONS(13),
    [anon_sym_vmovd] = ACTIONS(13),
    [anon_sym_pmuludq] = ACTIONS(13),
    [anon_sym_vbroadcasti32x4] = ACTIONS(13),
    [anon_sym_ucomisd] = ACTIONS(13),
    [anon_sym_popcnt] = ACTIONS(13),
    [anon_sym_pmovmskb] = ACTIONS(13),
    [anon_sym_psubusb] = ACTIONS(13),
    [anon_sym_cmovp] = ACTIONS(13),
    [anon_sym_psubusw] = ACTIONS(13),
    [anon_sym_cmova] = ACTIONS(13),
    [anon_sym_psubq] = ACTIONS(13),
    [anon_sym_cmovge] = ACTIONS(13),
    [anon_sym_subl] = ACTIONS(13),
    [anon_sym_cmovbe] = ACTIONS(13),
    [anon_sym_punpckhdq] = ACTIONS(13),
    [anon_sym_psrlw] = ACTIONS(13),
    [anon_sym_cvttsd2si] = ACTIONS(13),
    [anon_sym_cmovb] = ACTIONS(13),
    [anon_sym_cvtsd2ss] = ACTIONS(13),
    [anon_sym_movzbq] = ACTIONS(13),
    [anon_sym_rex_DOTWB] = ACTIONS(13),
    [anon_sym_xchg] = ACTIONS(13),
    [anon_sym_aesdec] = ACTIONS(13),
    [anon_sym_punpckhbw] = ACTIONS(13),
    [anon_sym_cvtsi2sd] = ACTIONS(13),
    [anon_sym_psubd] = ACTIONS(13),
    [anon_sym_adox] = ACTIONS(13),
    [anon_sym_vmovdqa32] = ACTIONS(13),
    [anon_sym_packuswb] = ACTIONS(13),
    [anon_sym_btr] = ACTIONS(13),
    [anon_sym_cvtsi2sdl] = ACTIONS(13),
    [anon_sym_vbroadcastss] = ACTIONS(13),
    [anon_sym_subpd] = ACTIONS(13),
    [anon_sym_aesdeclast] = ACTIONS(13),
    [anon_sym_andw] = ACTIONS(13),
    [anon_sym_pslld] = ACTIONS(13),
    [anon_sym_vmovaps] = ACTIONS(13),
    [anon_sym_xorl] = ACTIONS(13),
    [anon_sym_divss] = ACTIONS(13),
    [anon_sym_punpckhqdq] = ACTIONS(13),
    [anon_sym_btl] = ACTIONS(13),
    [anon_sym_pmaddubsw] = ACTIONS(13),
    [anon_sym_pmaddwd] = ACTIONS(13),
    [anon_sym_movsbw] = ACTIONS(13),
    [anon_sym_orq] = ACTIONS(13),
    [anon_sym_cvtss2sd] = ACTIONS(13),
    [anon_sym_divsd] = ACTIONS(13),
    [anon_sym_vmovq] = ACTIONS(13),
    [anon_sym_xorw] = ACTIONS(13),
    [anon_sym_minsd] = ACTIONS(13),
    [anon_sym_xorps] = ACTIONS(13),
    [anon_sym_bsr] = ACTIONS(13),
    [anon_sym_pslldq] = ACTIONS(13),
    [anon_sym_cmovo] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(13),
    [anon_sym_ucomiss] = ACTIONS(13),
    [anon_sym_punpcklqdq] = ACTIONS(13),
    [anon_sym_cmovle] = ACTIONS(13),
    [anon_sym_roll] = ACTIONS(13),
    [anon_sym_vbroadcasti128] = ACTIONS(13),
    [anon_sym_outsl] = ACTIONS(13),
    [anon_sym_psubb] = ACTIONS(13),
    [anon_sym_movhps] = ACTIONS(13),
    [anon_sym_movapd] = ACTIONS(13),
    [anon_sym_punpckldq] = ACTIONS(13),
    [anon_sym_movabs] = ACTIONS(13),
    [anon_sym_rex] = ACTIONS(13),
    [anon_sym_cmovne] = ACTIONS(13),
    [anon_sym_pclmulhqhqdq] = ACTIONS(13),
    [anon_sym_fmulp] = ACTIONS(13),
    [anon_sym_cmovns] = ACTIONS(13),
    [anon_sym_bt] = ACTIONS(13),
    [anon_sym_orb] = ACTIONS(13),
    [anon_sym_movbe] = ACTIONS(13),
    [anon_sym_vmovdqu64] = ACTIONS(13),
    [anon_sym_maxss] = ACTIONS(13),
    [anon_sym_xorpd] = ACTIONS(13),
    [anon_sym_psllq] = ACTIONS(13),
    [anon_sym_pcmpeqd] = ACTIONS(13),
    [anon_sym_punpcklbw] = ACTIONS(13),
    [anon_sym_cvttss2si] = ACTIONS(13),
    [anon_sym_andps] = ACTIONS(13),
    [anon_sym_orw] = ACTIONS(13),
    [anon_sym_cmove] = ACTIONS(13),
    [anon_sym_paddd] = ACTIONS(13),
    [anon_sym_re] = ACTIONS(13),
    [anon_sym_andb] = ACTIONS(13),
    [anon_sym_movsb] = ACTIONS(13),
    [anon_sym_andl] = ACTIONS(13),
    [anon_sym_vmovdqa] = ACTIONS(13),
    [anon_sym_paddq] = ACTIONS(13),
    [anon_sym_aesenclast] = ACTIONS(13),
    [anon_sym_minss] = ACTIONS(13),
    [anon_sym_cmovg] = ACTIONS(13),
    [anon_sym_vucomisd] = ACTIONS(13),
    [anon_sym_vmovsd] = ACTIONS(13),
    [anon_sym_adcx] = ACTIONS(13),
    [anon_sym_cmovl] = ACTIONS(13),
    [anon_sym_comisd] = ACTIONS(13),
    [anon_sym_cvtsi2sdq] = ACTIONS(13),
    [anon_sym_subq] = ACTIONS(13),
    [anon_sym_knotw] = ACTIONS(13),
    [anon_sym_pxor] = ACTIONS(13),
    [anon_sym_pandn] = ACTIONS(13),
    [anon_sym_repnz] = ACTIONS(13),
    [anon_sym_bts] = ACTIONS(13),
    [anon_sym_tzcnt] = ACTIONS(13),
    [anon_sym_paddw] = ACTIONS(13),
    [anon_sym_pclmullqhqdq] = ACTIONS(13),
    [anon_sym_rorl] = ACTIONS(13),
    [anon_sym_psrld] = ACTIONS(13),
    [anon_sym_insl] = ACTIONS(13),
    [anon_sym_insb] = ACTIONS(13),
    [anon_sym_punpckhwd] = ACTIONS(13),
    [anon_sym_pshufb] = ACTIONS(13),
    [anon_sym_cvtsi2ss] = ACTIONS(13),
    [anon_sym_testl] = ACTIONS(13),
    [anon_sym_comiss] = ACTIONS(13),
    [anon_sym_aesenc] = ACTIONS(13),
    [anon_sym_cvtsi2ssl] = ACTIONS(13),
    [anon_sym_psrad] = ACTIONS(13),
    [anon_sym_vpbroadcastq] = ACTIONS(13),
    [anon_sym_unpckhpd] = ACTIONS(13),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_sha1nexte] = ACTIONS(13),
    [anon_sym_cmovae] = ACTIONS(13),
    [anon_sym_sha1msg2] = ACTIONS(13),
    [anon_sym_movzbw] = ACTIONS(13),
    [anon_sym_vmovdqa64] = ACTIONS(13),
    [anon_sym_cmovs] = ACTIONS(13),
    [anon_sym_vpaddb] = ACTIONS(15),
    [anon_sym_vpsrlq] = ACTIONS(15),
    [anon_sym_vpmaddubsw] = ACTIONS(15),
    [anon_sym_shrd] = ACTIONS(15),
    [anon_sym_vextracti128] = ACTIONS(15),
    [anon_sym_vunpcklpd] = ACTIONS(15),
    [anon_sym_vcvtusi2sd] = ACTIONS(15),
    [anon_sym_vpsubw] = ACTIONS(15),
    [anon_sym_shufpd] = ACTIONS(15),
    [anon_sym_vpunpckhqdq] = ACTIONS(15),
    [anon_sym_pextrb] = ACTIONS(15),
    [anon_sym_vxorps] = ACTIONS(15),
    [anon_sym_vpxord] = ACTIONS(15),
    [anon_sym_nopw] = ACTIONS(15),
    [anon_sym_vprord] = ACTIONS(15),
    [anon_sym_shrx] = ACTIONS(15),
    [anon_sym_rorx] = ACTIONS(15),
    [anon_sym_vpunpckhwd] = ACTIONS(15),
    [anon_sym_pinsrw] = ACTIONS(15),
    [anon_sym_vpmuludq] = ACTIONS(15),
    [anon_sym_vpunpcklqdq] = ACTIONS(15),
    [anon_sym_vpand] = ACTIONS(15),
    [anon_sym_aeskeygenassist] = ACTIONS(15),
    [anon_sym_vaesenc] = ACTIONS(15),
    [anon_sym_vpcmpltud] = ACTIONS(15),
    [anon_sym_vpextrw] = ACTIONS(15),
    [anon_sym_vpslldq] = ACTIONS(15),
    [anon_sym_vprorq] = ACTIONS(15),
    [anon_sym_blendvps] = ACTIONS(15),
    [anon_sym_pshufd] = ACTIONS(15),
    [anon_sym_vpaddw] = ACTIONS(15),
    [anon_sym_vpsllw] = ACTIONS(15),
    [anon_sym_vpsrld] = ACTIONS(15),
    [anon_sym_pextrq] = ACTIONS(15),
    [anon_sym_vpsubd] = ACTIONS(15),
    [anon_sym_pextrw] = ACTIONS(15),
    [anon_sym_shufps] = ACTIONS(15),
    [anon_sym_pshuflw] = ACTIONS(15),
    [anon_sym_vpsubq] = ACTIONS(15),
    [anon_sym_shld] = ACTIONS(15),
    [anon_sym_vpslld] = ACTIONS(15),
    [anon_sym_vpermt2d] = ACTIONS(15),
    [anon_sym_vunpckhpd] = ACTIONS(15),
    [anon_sym_vmulsd] = ACTIONS(15),
    [anon_sym_vpunpckhdq] = ACTIONS(15),
    [anon_sym_vpshufd] = ACTIONS(15),
    [anon_sym_vpor] = ACTIONS(15),
    [anon_sym_vpunpckldq] = ACTIONS(15),
    [anon_sym_vextracti32x4] = ACTIONS(15),
    [anon_sym_vsubsd] = ACTIONS(15),
    [anon_sym_vpmaddwd] = ACTIONS(15),
    [anon_sym_pblendw] = ACTIONS(15),
    [anon_sym_vunpckhps] = ACTIONS(15),
    [anon_sym_vpblendmd] = ACTIONS(15),
    [anon_sym_vpsllq] = ACTIONS(15),
    [anon_sym_sarx] = ACTIONS(15),
    [anon_sym_shlx] = ACTIONS(15),
    [anon_sym_vpxor] = ACTIONS(15),
    [anon_sym_vpermd] = ACTIONS(15),
    [anon_sym_vpcmpgtd] = ACTIONS(15),
    [anon_sym_vpsubusw] = ACTIONS(15),
    [anon_sym_vpackusdw] = ACTIONS(15),
    [anon_sym_mulx] = ACTIONS(15),
    [anon_sym_vpsrlw] = ACTIONS(15),
    [anon_sym_vpaddq] = ACTIONS(15),
    [anon_sym_pshufhw] = ACTIONS(15),
    [anon_sym_andn] = ACTIONS(15),
    [anon_sym_vpunpcklwd] = ACTIONS(15),
    [anon_sym_palignr] = ACTIONS(15),
    [anon_sym_pinsrd] = ACTIONS(15),
    [anon_sym_vpsrldq] = ACTIONS(15),
    [anon_sym_vpermq] = ACTIONS(15),
    [anon_sym_vunpcklps] = ACTIONS(15),
    [anon_sym_sha1rnds4] = ACTIONS(15),
    [anon_sym_vpermi2d] = ACTIONS(15),
    [anon_sym_vaesenclast] = ACTIONS(15),
    [anon_sym_vdivsd] = ACTIONS(15),
    [anon_sym_vpaddd] = ACTIONS(15),
    [anon_sym_pinsrb] = ACTIONS(15),
    [anon_sym_vpmullw] = ACTIONS(15),
    [anon_sym_vpshufb] = ACTIONS(15),
    [anon_sym_vpinsrw] = ACTIONS(17),
    [anon_sym_vpblendd] = ACTIONS(17),
    [anon_sym_vinserti128] = ACTIONS(17),
    [anon_sym_vshufi64x2] = ACTIONS(17),
    [anon_sym_addw] = ACTIONS(17),
    [anon_sym_vperm2i128] = ACTIONS(17),
    [anon_sym_vpinsrd] = ACTIONS(17),
    [anon_sym_vpinsrq] = ACTIONS(17),
    [anon_sym_vpinsrb] = ACTIONS(17),
    [anon_sym_vperm2f128] = ACTIONS(17),
    [anon_sym_vshufi32x4] = ACTIONS(17),
    [anon_sym_vblendps] = ACTIONS(17),
    [anon_sym_vshufps] = ACTIONS(17),
    [anon_sym_vpalignr] = ACTIONS(17),
    [anon_sym_vblendvps] = ACTIONS(17),
    [anon_sym_vinsertf128] = ACTIONS(19),
    [anon_sym_vinserti32x4] = ACTIONS(19),
    [anon_sym_movsbl] = ACTIONS(21),
    [anon_sym_cmpb] = ACTIONS(21),
    [anon_sym_cwtl] = ACTIONS(21),
    [anon_sym_shrl] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_andq] = ACTIONS(21),
    [anon_sym_cmp] = ACTIONS(21),
    [anon_sym_cwtd] = ACTIONS(21),
    [anon_sym_movdqa] = ACTIONS(21),
    [anon_sym_movq] = ACTIONS(21),
    [anon_sym_addb] = ACTIONS(21),
    [anon_sym_jno] = ACTIONS(21),
    [anon_sym_rex_DOTW] = ACTIONS(21),
    [anon_sym_testb] = ACTIONS(21),
    [anon_sym_addsd] = ACTIONS(21),
    [anon_sym_rol] = ACTIONS(21),
    [anon_sym_sar] = ACTIONS(21),
    [anon_sym_rex_DOTB] = ACTIONS(21),
    [anon_sym_vmovdqu] = ACTIONS(21),
    [anon_sym_callq] = ACTIONS(21),
    [anon_sym_movups] = ACTIONS(21),
    [anon_sym_vpclmullqhqdq] = ACTIONS(21),
    [anon_sym_subss] = ACTIONS(21),
    [anon_sym_jb] = ACTIONS(21),
    [anon_sym_rex_DOTRXB] = ACTIONS(21),
    [anon_sym_jae] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_mulsd] = ACTIONS(21),
    [anon_sym_addl] = ACTIONS(21),
    [anon_sym_jmp] = ACTIONS(21),
    [anon_sym_jne] = ACTIONS(21),
    [anon_sym_cltq] = ACTIONS(21),
    [anon_sym_sub] = ACTIONS(21),
    [anon_sym_je] = ACTIONS(21),
    [anon_sym_cltd] = ACTIONS(21),
    [anon_sym_movb] = ACTIONS(21),
    [anon_sym_movaps] = ACTIONS(21),
    [anon_sym_cpuid] = ACTIONS(21),
    [anon_sym_vmovdqu32] = ACTIONS(21),
    [anon_sym_jo] = ACTIONS(21),
    [anon_sym_jmpq] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_rex_DOTWRB] = ACTIONS(21),
    [anon_sym_movl] = ACTIONS(21),
    [anon_sym_retq] = ACTIONS(21),
    [anon_sym_jge] = ACTIONS(21),
    [anon_sym_movsd] = ACTIONS(21),
    [anon_sym_jg] = ACTIONS(21),
    [anon_sym_movss] = ACTIONS(21),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(21),
    [anon_sym_shl] = ACTIONS(21),
    [anon_sym_subw] = ACTIONS(21),
    [anon_sym_ror] = ACTIONS(21),
    [anon_sym_cbtw] = ACTIONS(21),
    [anon_sym_repz] = ACTIONS(21),
    [anon_sym_mulss] = ACTIONS(21),
    [anon_sym_movw] = ACTIONS(21),
    [anon_sym_vpclmullqlqdq] = ACTIONS(21),
    [anon_sym_movsbq] = ACTIONS(21),
    [anon_sym_nopl] = ACTIONS(21),
    [anon_sym_shll] = ACTIONS(21),
    [anon_sym_cqto] = ACTIONS(21),
    [anon_sym_mov] = ACTIONS(21),
    [anon_sym_ss] = ACTIONS(21),
    [anon_sym_adc] = ACTIONS(21),
    [anon_sym_leaveq] = ACTIONS(21),
    [anon_sym_lea] = ACTIONS(21),
    [anon_sym_movslq] = ACTIONS(21),
    [anon_sym_mfence] = ACTIONS(21),
    [anon_sym_ud2] = ACTIONS(21),
    [anon_sym_rex_DOTWRXB] = ACTIONS(21),
    [anon_sym_shr] = ACTIONS(21),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(21),
    [anon_sym_movzbl] = ACTIONS(21),
    [anon_sym_femms] = ACTIONS(21),
    [anon_sym_addss] = ACTIONS(21),
    [anon_sym_movzwl] = ACTIONS(21),
    [anon_sym_sbb] = ACTIONS(21),
    [anon_sym_cmpq] = ACTIONS(21),
    [anon_sym_xgetbv] = ACTIONS(21),
    [anon_sym_pushq] = ACTIONS(21),
    [anon_sym_endbr64] = ACTIONS(21),
    [anon_sym_vzeroupper] = ACTIONS(21),
    [anon_sym_ja] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(21),
    [anon_sym_addr32] = ACTIONS(21),
    [anon_sym_movdqu] = ACTIONS(21),
    [anon_sym_pand] = ACTIONS(21),
    [anon_sym_movswl] = ACTIONS(21),
    [anon_sym_prefetcht0] = ACTIONS(21),
    [anon_sym_vmovups] = ACTIONS(21),
    [anon_sym_add] = ACTIONS(21),
    [anon_sym_subsd] = ACTIONS(21),
    [anon_sym_subb] = ACTIONS(21),
    [anon_sym_vinserti64x4] = ACTIONS(21),
    [anon_sym_rex_DOTXB] = ACTIONS(21),
    [anon_sym_vzeroall] = ACTIONS(21),
    [anon_sym_shrq] = ACTIONS(21),
    [anon_sym_sarl] = ACTIONS(21),
    [anon_sym_cmpw] = ACTIONS(21),
    [anon_sym_data16] = ACTIONS(21),
    [anon_sym_jbe] = ACTIONS(21),
    [anon_sym_jl] = ACTIONS(21),
    [anon_sym_shlq] = ACTIONS(21),
    [anon_sym_cmpl] = ACTIONS(21),
    [anon_sym_movd] = ACTIONS(21),
    [anon_sym_imul] = ACTIONS(21),
    [sym_two_bytes] = ACTIONS(27),
  },
  [4] = {
    [sym_opcodes_one_operand] = STATE(56),
    [sym_opcodes_two_operands] = STATE(57),
    [sym_opcodes_three_operands] = STATE(58),
    [sym_opcodes_four_operands] = STATE(59),
    [sym_opcodes_six_operands] = STATE(60),
    [sym_opcodes_undetermined_operands] = STATE(14),
    [aux_sym_instruction_one_operand_repeat2] = STATE(6),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_gs] = ACTIONS(11),
    [anon_sym_idiv] = ACTIONS(11),
    [anon_sym_negl] = ACTIONS(11),
    [anon_sym_negq] = ACTIONS(11),
    [anon_sym_jp] = ACTIONS(11),
    [anon_sym_jrcxz] = ACTIONS(11),
    [anon_sym_notw] = ACTIONS(11),
    [anon_sym_setl] = ACTIONS(11),
    [anon_sym_jle] = ACTIONS(11),
    [anon_sym_divl] = ACTIONS(11),
    [anon_sym_setge] = ACTIONS(11),
    [anon_sym_fldt] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_notl] = ACTIONS(11),
    [anon_sym_setb] = ACTIONS(11),
    [anon_sym_fs] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_seto] = ACTIONS(11),
    [anon_sym_sete] = ACTIONS(11),
    [anon_sym_setle] = ACTIONS(11),
    [anon_sym_seta] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_div] = ACTIONS(11),
    [anon_sym_notrack] = ACTIONS(11),
    [anon_sym_jns] = ACTIONS(11),
    [anon_sym_mulw] = ACTIONS(11),
    [anon_sym_rex_DOTRB] = ACTIONS(11),
    [anon_sym_incl] = ACTIONS(11),
    [anon_sym_setbe] = ACTIONS(11),
    [anon_sym_setp] = ACTIONS(11),
    [anon_sym_idivl] = ACTIONS(11),
    [anon_sym_setns] = ACTIONS(11),
    [anon_sym_inc] = ACTIONS(11),
    [anon_sym_setne] = ACTIONS(11),
    [anon_sym_divq] = ACTIONS(11),
    [anon_sym_prefetcht1] = ACTIONS(11),
    [anon_sym_fstpl] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_mulq] = ACTIONS(11),
    [anon_sym_mul] = ACTIONS(11),
    [anon_sym_bswap] = ACTIONS(11),
    [anon_sym_fildl] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [anon_sym_setae] = ACTIONS(11),
    [anon_sym_js] = ACTIONS(11),
    [anon_sym_mull] = ACTIONS(11),
    [anon_sym_setnp] = ACTIONS(11),
    [anon_sym_mulb] = ACTIONS(11),
    [anon_sym_setg] = ACTIONS(11),
    [anon_sym_vucomiss] = ACTIONS(13),
    [anon_sym_vmovss] = ACTIONS(13),
    [anon_sym_vmovapd] = ACTIONS(13),
    [anon_sym_vpbroadcastd] = ACTIONS(13),
    [anon_sym_orl] = ACTIONS(13),
    [anon_sym_pclmullqlqdq] = ACTIONS(13),
    [anon_sym_por] = ACTIONS(13),
    [anon_sym_pcmpgtd] = ACTIONS(13),
    [anon_sym_movswq] = ACTIONS(13),
    [anon_sym_psrldq] = ACTIONS(13),
    [anon_sym_rep] = ACTIONS(13),
    [anon_sym_kmovw] = ACTIONS(13),
    [anon_sym_movhlps] = ACTIONS(13),
    [anon_sym_addq] = ACTIONS(13),
    [anon_sym_psrlq] = ACTIONS(13),
    [anon_sym_punpcklwd] = ACTIONS(13),
    [anon_sym_outsb] = ACTIONS(13),
    [anon_sym_bsf] = ACTIONS(13),
    [anon_sym_pcmpeqb] = ACTIONS(13),
    [anon_sym_maxsd] = ACTIONS(13),
    [anon_sym_sha1msg1] = ACTIONS(13),
    [anon_sym_andpd] = ACTIONS(13),
    [anon_sym_vmovd] = ACTIONS(13),
    [anon_sym_pmuludq] = ACTIONS(13),
    [anon_sym_vbroadcasti32x4] = ACTIONS(13),
    [anon_sym_ucomisd] = ACTIONS(13),
    [anon_sym_popcnt] = ACTIONS(13),
    [anon_sym_pmovmskb] = ACTIONS(13),
    [anon_sym_psubusb] = ACTIONS(13),
    [anon_sym_cmovp] = ACTIONS(13),
    [anon_sym_psubusw] = ACTIONS(13),
    [anon_sym_cmova] = ACTIONS(13),
    [anon_sym_psubq] = ACTIONS(13),
    [anon_sym_cmovge] = ACTIONS(13),
    [anon_sym_subl] = ACTIONS(13),
    [anon_sym_cmovbe] = ACTIONS(13),
    [anon_sym_punpckhdq] = ACTIONS(13),
    [anon_sym_psrlw] = ACTIONS(13),
    [anon_sym_cvttsd2si] = ACTIONS(13),
    [anon_sym_cmovb] = ACTIONS(13),
    [anon_sym_cvtsd2ss] = ACTIONS(13),
    [anon_sym_movzbq] = ACTIONS(13),
    [anon_sym_rex_DOTWB] = ACTIONS(13),
    [anon_sym_xchg] = ACTIONS(13),
    [anon_sym_aesdec] = ACTIONS(13),
    [anon_sym_punpckhbw] = ACTIONS(13),
    [anon_sym_cvtsi2sd] = ACTIONS(13),
    [anon_sym_psubd] = ACTIONS(13),
    [anon_sym_adox] = ACTIONS(13),
    [anon_sym_vmovdqa32] = ACTIONS(13),
    [anon_sym_packuswb] = ACTIONS(13),
    [anon_sym_btr] = ACTIONS(13),
    [anon_sym_cvtsi2sdl] = ACTIONS(13),
    [anon_sym_vbroadcastss] = ACTIONS(13),
    [anon_sym_subpd] = ACTIONS(13),
    [anon_sym_aesdeclast] = ACTIONS(13),
    [anon_sym_andw] = ACTIONS(13),
    [anon_sym_pslld] = ACTIONS(13),
    [anon_sym_vmovaps] = ACTIONS(13),
    [anon_sym_xorl] = ACTIONS(13),
    [anon_sym_divss] = ACTIONS(13),
    [anon_sym_punpckhqdq] = ACTIONS(13),
    [anon_sym_btl] = ACTIONS(13),
    [anon_sym_pmaddubsw] = ACTIONS(13),
    [anon_sym_pmaddwd] = ACTIONS(13),
    [anon_sym_movsbw] = ACTIONS(13),
    [anon_sym_orq] = ACTIONS(13),
    [anon_sym_cvtss2sd] = ACTIONS(13),
    [anon_sym_divsd] = ACTIONS(13),
    [anon_sym_vmovq] = ACTIONS(13),
    [anon_sym_xorw] = ACTIONS(13),
    [anon_sym_minsd] = ACTIONS(13),
    [anon_sym_xorps] = ACTIONS(13),
    [anon_sym_bsr] = ACTIONS(13),
    [anon_sym_pslldq] = ACTIONS(13),
    [anon_sym_cmovo] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(13),
    [anon_sym_ucomiss] = ACTIONS(13),
    [anon_sym_punpcklqdq] = ACTIONS(13),
    [anon_sym_cmovle] = ACTIONS(13),
    [anon_sym_roll] = ACTIONS(13),
    [anon_sym_vbroadcasti128] = ACTIONS(13),
    [anon_sym_outsl] = ACTIONS(13),
    [anon_sym_psubb] = ACTIONS(13),
    [anon_sym_movhps] = ACTIONS(13),
    [anon_sym_movapd] = ACTIONS(13),
    [anon_sym_punpckldq] = ACTIONS(13),
    [anon_sym_movabs] = ACTIONS(13),
    [anon_sym_rex] = ACTIONS(13),
    [anon_sym_cmovne] = ACTIONS(13),
    [anon_sym_pclmulhqhqdq] = ACTIONS(13),
    [anon_sym_fmulp] = ACTIONS(13),
    [anon_sym_cmovns] = ACTIONS(13),
    [anon_sym_bt] = ACTIONS(13),
    [anon_sym_orb] = ACTIONS(13),
    [anon_sym_movbe] = ACTIONS(13),
    [anon_sym_vmovdqu64] = ACTIONS(13),
    [anon_sym_maxss] = ACTIONS(13),
    [anon_sym_xorpd] = ACTIONS(13),
    [anon_sym_psllq] = ACTIONS(13),
    [anon_sym_pcmpeqd] = ACTIONS(13),
    [anon_sym_punpcklbw] = ACTIONS(13),
    [anon_sym_cvttss2si] = ACTIONS(13),
    [anon_sym_andps] = ACTIONS(13),
    [anon_sym_orw] = ACTIONS(13),
    [anon_sym_cmove] = ACTIONS(13),
    [anon_sym_paddd] = ACTIONS(13),
    [anon_sym_re] = ACTIONS(13),
    [anon_sym_andb] = ACTIONS(13),
    [anon_sym_movsb] = ACTIONS(13),
    [anon_sym_andl] = ACTIONS(13),
    [anon_sym_vmovdqa] = ACTIONS(13),
    [anon_sym_paddq] = ACTIONS(13),
    [anon_sym_aesenclast] = ACTIONS(13),
    [anon_sym_minss] = ACTIONS(13),
    [anon_sym_cmovg] = ACTIONS(13),
    [anon_sym_vucomisd] = ACTIONS(13),
    [anon_sym_vmovsd] = ACTIONS(13),
    [anon_sym_adcx] = ACTIONS(13),
    [anon_sym_cmovl] = ACTIONS(13),
    [anon_sym_comisd] = ACTIONS(13),
    [anon_sym_cvtsi2sdq] = ACTIONS(13),
    [anon_sym_subq] = ACTIONS(13),
    [anon_sym_knotw] = ACTIONS(13),
    [anon_sym_pxor] = ACTIONS(13),
    [anon_sym_pandn] = ACTIONS(13),
    [anon_sym_repnz] = ACTIONS(13),
    [anon_sym_bts] = ACTIONS(13),
    [anon_sym_tzcnt] = ACTIONS(13),
    [anon_sym_paddw] = ACTIONS(13),
    [anon_sym_pclmullqhqdq] = ACTIONS(13),
    [anon_sym_rorl] = ACTIONS(13),
    [anon_sym_psrld] = ACTIONS(13),
    [anon_sym_insl] = ACTIONS(13),
    [anon_sym_insb] = ACTIONS(13),
    [anon_sym_punpckhwd] = ACTIONS(13),
    [anon_sym_pshufb] = ACTIONS(13),
    [anon_sym_cvtsi2ss] = ACTIONS(13),
    [anon_sym_testl] = ACTIONS(13),
    [anon_sym_comiss] = ACTIONS(13),
    [anon_sym_aesenc] = ACTIONS(13),
    [anon_sym_cvtsi2ssl] = ACTIONS(13),
    [anon_sym_psrad] = ACTIONS(13),
    [anon_sym_vpbroadcastq] = ACTIONS(13),
    [anon_sym_unpckhpd] = ACTIONS(13),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_sha1nexte] = ACTIONS(13),
    [anon_sym_cmovae] = ACTIONS(13),
    [anon_sym_sha1msg2] = ACTIONS(13),
    [anon_sym_movzbw] = ACTIONS(13),
    [anon_sym_vmovdqa64] = ACTIONS(13),
    [anon_sym_cmovs] = ACTIONS(13),
    [anon_sym_vpaddb] = ACTIONS(15),
    [anon_sym_vpsrlq] = ACTIONS(15),
    [anon_sym_vpmaddubsw] = ACTIONS(15),
    [anon_sym_shrd] = ACTIONS(15),
    [anon_sym_vextracti128] = ACTIONS(15),
    [anon_sym_vunpcklpd] = ACTIONS(15),
    [anon_sym_vcvtusi2sd] = ACTIONS(15),
    [anon_sym_vpsubw] = ACTIONS(15),
    [anon_sym_shufpd] = ACTIONS(15),
    [anon_sym_vpunpckhqdq] = ACTIONS(15),
    [anon_sym_pextrb] = ACTIONS(15),
    [anon_sym_vxorps] = ACTIONS(15),
    [anon_sym_vpxord] = ACTIONS(15),
    [anon_sym_nopw] = ACTIONS(15),
    [anon_sym_vprord] = ACTIONS(15),
    [anon_sym_shrx] = ACTIONS(15),
    [anon_sym_rorx] = ACTIONS(15),
    [anon_sym_vpunpckhwd] = ACTIONS(15),
    [anon_sym_pinsrw] = ACTIONS(15),
    [anon_sym_vpmuludq] = ACTIONS(15),
    [anon_sym_vpunpcklqdq] = ACTIONS(15),
    [anon_sym_vpand] = ACTIONS(15),
    [anon_sym_aeskeygenassist] = ACTIONS(15),
    [anon_sym_vaesenc] = ACTIONS(15),
    [anon_sym_vpcmpltud] = ACTIONS(15),
    [anon_sym_vpextrw] = ACTIONS(15),
    [anon_sym_vpslldq] = ACTIONS(15),
    [anon_sym_vprorq] = ACTIONS(15),
    [anon_sym_blendvps] = ACTIONS(15),
    [anon_sym_pshufd] = ACTIONS(15),
    [anon_sym_vpaddw] = ACTIONS(15),
    [anon_sym_vpsllw] = ACTIONS(15),
    [anon_sym_vpsrld] = ACTIONS(15),
    [anon_sym_pextrq] = ACTIONS(15),
    [anon_sym_vpsubd] = ACTIONS(15),
    [anon_sym_pextrw] = ACTIONS(15),
    [anon_sym_shufps] = ACTIONS(15),
    [anon_sym_pshuflw] = ACTIONS(15),
    [anon_sym_vpsubq] = ACTIONS(15),
    [anon_sym_shld] = ACTIONS(15),
    [anon_sym_vpslld] = ACTIONS(15),
    [anon_sym_vpermt2d] = ACTIONS(15),
    [anon_sym_vunpckhpd] = ACTIONS(15),
    [anon_sym_vmulsd] = ACTIONS(15),
    [anon_sym_vpunpckhdq] = ACTIONS(15),
    [anon_sym_vpshufd] = ACTIONS(15),
    [anon_sym_vpor] = ACTIONS(15),
    [anon_sym_vpunpckldq] = ACTIONS(15),
    [anon_sym_vextracti32x4] = ACTIONS(15),
    [anon_sym_vsubsd] = ACTIONS(15),
    [anon_sym_vpmaddwd] = ACTIONS(15),
    [anon_sym_pblendw] = ACTIONS(15),
    [anon_sym_vunpckhps] = ACTIONS(15),
    [anon_sym_vpblendmd] = ACTIONS(15),
    [anon_sym_vpsllq] = ACTIONS(15),
    [anon_sym_sarx] = ACTIONS(15),
    [anon_sym_shlx] = ACTIONS(15),
    [anon_sym_vpxor] = ACTIONS(15),
    [anon_sym_vpermd] = ACTIONS(15),
    [anon_sym_vpcmpgtd] = ACTIONS(15),
    [anon_sym_vpsubusw] = ACTIONS(15),
    [anon_sym_vpackusdw] = ACTIONS(15),
    [anon_sym_mulx] = ACTIONS(15),
    [anon_sym_vpsrlw] = ACTIONS(15),
    [anon_sym_vpaddq] = ACTIONS(15),
    [anon_sym_pshufhw] = ACTIONS(15),
    [anon_sym_andn] = ACTIONS(15),
    [anon_sym_vpunpcklwd] = ACTIONS(15),
    [anon_sym_palignr] = ACTIONS(15),
    [anon_sym_pinsrd] = ACTIONS(15),
    [anon_sym_vpsrldq] = ACTIONS(15),
    [anon_sym_vpermq] = ACTIONS(15),
    [anon_sym_vunpcklps] = ACTIONS(15),
    [anon_sym_sha1rnds4] = ACTIONS(15),
    [anon_sym_vpermi2d] = ACTIONS(15),
    [anon_sym_vaesenclast] = ACTIONS(15),
    [anon_sym_vdivsd] = ACTIONS(15),
    [anon_sym_vpaddd] = ACTIONS(15),
    [anon_sym_pinsrb] = ACTIONS(15),
    [anon_sym_vpmullw] = ACTIONS(15),
    [anon_sym_vpshufb] = ACTIONS(15),
    [anon_sym_vpinsrw] = ACTIONS(17),
    [anon_sym_vpblendd] = ACTIONS(17),
    [anon_sym_vinserti128] = ACTIONS(17),
    [anon_sym_vshufi64x2] = ACTIONS(17),
    [anon_sym_addw] = ACTIONS(17),
    [anon_sym_vperm2i128] = ACTIONS(17),
    [anon_sym_vpinsrd] = ACTIONS(17),
    [anon_sym_vpinsrq] = ACTIONS(17),
    [anon_sym_vpinsrb] = ACTIONS(17),
    [anon_sym_vperm2f128] = ACTIONS(17),
    [anon_sym_vshufi32x4] = ACTIONS(17),
    [anon_sym_vblendps] = ACTIONS(17),
    [anon_sym_vshufps] = ACTIONS(17),
    [anon_sym_vpalignr] = ACTIONS(17),
    [anon_sym_vblendvps] = ACTIONS(17),
    [anon_sym_vinsertf128] = ACTIONS(19),
    [anon_sym_vinserti32x4] = ACTIONS(19),
    [anon_sym_movsbl] = ACTIONS(21),
    [anon_sym_cmpb] = ACTIONS(21),
    [anon_sym_cwtl] = ACTIONS(21),
    [anon_sym_shrl] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_andq] = ACTIONS(21),
    [anon_sym_cmp] = ACTIONS(21),
    [anon_sym_cwtd] = ACTIONS(21),
    [anon_sym_movdqa] = ACTIONS(21),
    [anon_sym_movq] = ACTIONS(21),
    [anon_sym_addb] = ACTIONS(21),
    [anon_sym_jno] = ACTIONS(21),
    [anon_sym_rex_DOTW] = ACTIONS(21),
    [anon_sym_testb] = ACTIONS(21),
    [anon_sym_addsd] = ACTIONS(21),
    [anon_sym_rol] = ACTIONS(21),
    [anon_sym_sar] = ACTIONS(21),
    [anon_sym_rex_DOTB] = ACTIONS(21),
    [anon_sym_vmovdqu] = ACTIONS(21),
    [anon_sym_callq] = ACTIONS(21),
    [anon_sym_movups] = ACTIONS(21),
    [anon_sym_vpclmullqhqdq] = ACTIONS(21),
    [anon_sym_subss] = ACTIONS(21),
    [anon_sym_jb] = ACTIONS(21),
    [anon_sym_rex_DOTRXB] = ACTIONS(21),
    [anon_sym_jae] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_mulsd] = ACTIONS(21),
    [anon_sym_addl] = ACTIONS(21),
    [anon_sym_jmp] = ACTIONS(21),
    [anon_sym_jne] = ACTIONS(21),
    [anon_sym_cltq] = ACTIONS(21),
    [anon_sym_sub] = ACTIONS(21),
    [anon_sym_je] = ACTIONS(21),
    [anon_sym_cltd] = ACTIONS(21),
    [anon_sym_movb] = ACTIONS(21),
    [anon_sym_movaps] = ACTIONS(21),
    [anon_sym_cpuid] = ACTIONS(21),
    [anon_sym_vmovdqu32] = ACTIONS(21),
    [anon_sym_jo] = ACTIONS(21),
    [anon_sym_jmpq] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_rex_DOTWRB] = ACTIONS(21),
    [anon_sym_movl] = ACTIONS(21),
    [anon_sym_retq] = ACTIONS(21),
    [anon_sym_jge] = ACTIONS(21),
    [anon_sym_movsd] = ACTIONS(21),
    [anon_sym_jg] = ACTIONS(21),
    [anon_sym_movss] = ACTIONS(21),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(21),
    [anon_sym_shl] = ACTIONS(21),
    [anon_sym_subw] = ACTIONS(21),
    [anon_sym_ror] = ACTIONS(21),
    [anon_sym_cbtw] = ACTIONS(21),
    [anon_sym_repz] = ACTIONS(21),
    [anon_sym_mulss] = ACTIONS(21),
    [anon_sym_movw] = ACTIONS(21),
    [anon_sym_vpclmullqlqdq] = ACTIONS(21),
    [anon_sym_movsbq] = ACTIONS(21),
    [anon_sym_nopl] = ACTIONS(21),
    [anon_sym_shll] = ACTIONS(21),
    [anon_sym_cqto] = ACTIONS(21),
    [anon_sym_mov] = ACTIONS(21),
    [anon_sym_ss] = ACTIONS(21),
    [anon_sym_adc] = ACTIONS(21),
    [anon_sym_leaveq] = ACTIONS(21),
    [anon_sym_lea] = ACTIONS(21),
    [anon_sym_movslq] = ACTIONS(21),
    [anon_sym_mfence] = ACTIONS(21),
    [anon_sym_ud2] = ACTIONS(21),
    [anon_sym_rex_DOTWRXB] = ACTIONS(21),
    [anon_sym_shr] = ACTIONS(21),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(21),
    [anon_sym_movzbl] = ACTIONS(21),
    [anon_sym_femms] = ACTIONS(21),
    [anon_sym_addss] = ACTIONS(21),
    [anon_sym_movzwl] = ACTIONS(21),
    [anon_sym_sbb] = ACTIONS(21),
    [anon_sym_cmpq] = ACTIONS(21),
    [anon_sym_xgetbv] = ACTIONS(21),
    [anon_sym_pushq] = ACTIONS(21),
    [anon_sym_endbr64] = ACTIONS(21),
    [anon_sym_vzeroupper] = ACTIONS(21),
    [anon_sym_ja] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(21),
    [anon_sym_addr32] = ACTIONS(21),
    [anon_sym_movdqu] = ACTIONS(21),
    [anon_sym_pand] = ACTIONS(21),
    [anon_sym_movswl] = ACTIONS(21),
    [anon_sym_prefetcht0] = ACTIONS(21),
    [anon_sym_vmovups] = ACTIONS(21),
    [anon_sym_add] = ACTIONS(21),
    [anon_sym_subsd] = ACTIONS(21),
    [anon_sym_subb] = ACTIONS(21),
    [anon_sym_vinserti64x4] = ACTIONS(21),
    [anon_sym_rex_DOTXB] = ACTIONS(21),
    [anon_sym_vzeroall] = ACTIONS(21),
    [anon_sym_shrq] = ACTIONS(21),
    [anon_sym_sarl] = ACTIONS(21),
    [anon_sym_cmpw] = ACTIONS(21),
    [anon_sym_data16] = ACTIONS(21),
    [anon_sym_jbe] = ACTIONS(21),
    [anon_sym_jl] = ACTIONS(21),
    [anon_sym_shlq] = ACTIONS(21),
    [anon_sym_cmpl] = ACTIONS(21),
    [anon_sym_movd] = ACTIONS(21),
    [anon_sym_imul] = ACTIONS(21),
    [sym_two_bytes] = ACTIONS(31),
  },
  [5] = {
    [sym_opcodes_one_operand] = STATE(42),
    [sym_opcodes_two_operands] = STATE(43),
    [sym_opcodes_three_operands] = STATE(44),
    [sym_opcodes_four_operands] = STATE(45),
    [sym_opcodes_six_operands] = STATE(46),
    [sym_opcodes_undetermined_operands] = STATE(10),
    [aux_sym_instruction_one_operand_repeat2] = STATE(6),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_gs] = ACTIONS(11),
    [anon_sym_idiv] = ACTIONS(11),
    [anon_sym_negl] = ACTIONS(11),
    [anon_sym_negq] = ACTIONS(11),
    [anon_sym_jp] = ACTIONS(11),
    [anon_sym_jrcxz] = ACTIONS(11),
    [anon_sym_notw] = ACTIONS(11),
    [anon_sym_setl] = ACTIONS(11),
    [anon_sym_jle] = ACTIONS(11),
    [anon_sym_divl] = ACTIONS(11),
    [anon_sym_setge] = ACTIONS(11),
    [anon_sym_fldt] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_notl] = ACTIONS(11),
    [anon_sym_setb] = ACTIONS(11),
    [anon_sym_fs] = ACTIONS(11),
    [anon_sym_push] = ACTIONS(11),
    [anon_sym_seto] = ACTIONS(11),
    [anon_sym_sete] = ACTIONS(11),
    [anon_sym_setle] = ACTIONS(11),
    [anon_sym_seta] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_div] = ACTIONS(11),
    [anon_sym_notrack] = ACTIONS(11),
    [anon_sym_jns] = ACTIONS(11),
    [anon_sym_mulw] = ACTIONS(11),
    [anon_sym_rex_DOTRB] = ACTIONS(11),
    [anon_sym_incl] = ACTIONS(11),
    [anon_sym_setbe] = ACTIONS(11),
    [anon_sym_setp] = ACTIONS(11),
    [anon_sym_idivl] = ACTIONS(11),
    [anon_sym_setns] = ACTIONS(11),
    [anon_sym_inc] = ACTIONS(11),
    [anon_sym_setne] = ACTIONS(11),
    [anon_sym_divq] = ACTIONS(11),
    [anon_sym_prefetcht1] = ACTIONS(11),
    [anon_sym_fstpl] = ACTIONS(11),
    [anon_sym_pop] = ACTIONS(11),
    [anon_sym_mulq] = ACTIONS(11),
    [anon_sym_mul] = ACTIONS(11),
    [anon_sym_bswap] = ACTIONS(11),
    [anon_sym_fildl] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [anon_sym_setae] = ACTIONS(11),
    [anon_sym_js] = ACTIONS(11),
    [anon_sym_mull] = ACTIONS(11),
    [anon_sym_setnp] = ACTIONS(11),
    [anon_sym_mulb] = ACTIONS(11),
    [anon_sym_setg] = ACTIONS(11),
    [anon_sym_vucomiss] = ACTIONS(13),
    [anon_sym_vmovss] = ACTIONS(13),
    [anon_sym_vmovapd] = ACTIONS(13),
    [anon_sym_vpbroadcastd] = ACTIONS(13),
    [anon_sym_orl] = ACTIONS(13),
    [anon_sym_pclmullqlqdq] = ACTIONS(13),
    [anon_sym_por] = ACTIONS(13),
    [anon_sym_pcmpgtd] = ACTIONS(13),
    [anon_sym_movswq] = ACTIONS(13),
    [anon_sym_psrldq] = ACTIONS(13),
    [anon_sym_rep] = ACTIONS(13),
    [anon_sym_kmovw] = ACTIONS(13),
    [anon_sym_movhlps] = ACTIONS(13),
    [anon_sym_addq] = ACTIONS(13),
    [anon_sym_psrlq] = ACTIONS(13),
    [anon_sym_punpcklwd] = ACTIONS(13),
    [anon_sym_outsb] = ACTIONS(13),
    [anon_sym_bsf] = ACTIONS(13),
    [anon_sym_pcmpeqb] = ACTIONS(13),
    [anon_sym_maxsd] = ACTIONS(13),
    [anon_sym_sha1msg1] = ACTIONS(13),
    [anon_sym_andpd] = ACTIONS(13),
    [anon_sym_vmovd] = ACTIONS(13),
    [anon_sym_pmuludq] = ACTIONS(13),
    [anon_sym_vbroadcasti32x4] = ACTIONS(13),
    [anon_sym_ucomisd] = ACTIONS(13),
    [anon_sym_popcnt] = ACTIONS(13),
    [anon_sym_pmovmskb] = ACTIONS(13),
    [anon_sym_psubusb] = ACTIONS(13),
    [anon_sym_cmovp] = ACTIONS(13),
    [anon_sym_psubusw] = ACTIONS(13),
    [anon_sym_cmova] = ACTIONS(13),
    [anon_sym_psubq] = ACTIONS(13),
    [anon_sym_cmovge] = ACTIONS(13),
    [anon_sym_subl] = ACTIONS(13),
    [anon_sym_cmovbe] = ACTIONS(13),
    [anon_sym_punpckhdq] = ACTIONS(13),
    [anon_sym_psrlw] = ACTIONS(13),
    [anon_sym_cvttsd2si] = ACTIONS(13),
    [anon_sym_cmovb] = ACTIONS(13),
    [anon_sym_cvtsd2ss] = ACTIONS(13),
    [anon_sym_movzbq] = ACTIONS(13),
    [anon_sym_rex_DOTWB] = ACTIONS(13),
    [anon_sym_xchg] = ACTIONS(13),
    [anon_sym_aesdec] = ACTIONS(13),
    [anon_sym_punpckhbw] = ACTIONS(13),
    [anon_sym_cvtsi2sd] = ACTIONS(13),
    [anon_sym_psubd] = ACTIONS(13),
    [anon_sym_adox] = ACTIONS(13),
    [anon_sym_vmovdqa32] = ACTIONS(13),
    [anon_sym_packuswb] = ACTIONS(13),
    [anon_sym_btr] = ACTIONS(13),
    [anon_sym_cvtsi2sdl] = ACTIONS(13),
    [anon_sym_vbroadcastss] = ACTIONS(13),
    [anon_sym_subpd] = ACTIONS(13),
    [anon_sym_aesdeclast] = ACTIONS(13),
    [anon_sym_andw] = ACTIONS(13),
    [anon_sym_pslld] = ACTIONS(13),
    [anon_sym_vmovaps] = ACTIONS(13),
    [anon_sym_xorl] = ACTIONS(13),
    [anon_sym_divss] = ACTIONS(13),
    [anon_sym_punpckhqdq] = ACTIONS(13),
    [anon_sym_btl] = ACTIONS(13),
    [anon_sym_pmaddubsw] = ACTIONS(13),
    [anon_sym_pmaddwd] = ACTIONS(13),
    [anon_sym_movsbw] = ACTIONS(13),
    [anon_sym_orq] = ACTIONS(13),
    [anon_sym_cvtss2sd] = ACTIONS(13),
    [anon_sym_divsd] = ACTIONS(13),
    [anon_sym_vmovq] = ACTIONS(13),
    [anon_sym_xorw] = ACTIONS(13),
    [anon_sym_minsd] = ACTIONS(13),
    [anon_sym_xorps] = ACTIONS(13),
    [anon_sym_bsr] = ACTIONS(13),
    [anon_sym_pslldq] = ACTIONS(13),
    [anon_sym_cmovo] = ACTIONS(13),
    [anon_sym_lock] = ACTIONS(13),
    [anon_sym_ucomiss] = ACTIONS(13),
    [anon_sym_punpcklqdq] = ACTIONS(13),
    [anon_sym_cmovle] = ACTIONS(13),
    [anon_sym_roll] = ACTIONS(13),
    [anon_sym_vbroadcasti128] = ACTIONS(13),
    [anon_sym_outsl] = ACTIONS(13),
    [anon_sym_psubb] = ACTIONS(13),
    [anon_sym_movhps] = ACTIONS(13),
    [anon_sym_movapd] = ACTIONS(13),
    [anon_sym_punpckldq] = ACTIONS(13),
    [anon_sym_movabs] = ACTIONS(13),
    [anon_sym_rex] = ACTIONS(13),
    [anon_sym_cmovne] = ACTIONS(13),
    [anon_sym_pclmulhqhqdq] = ACTIONS(13),
    [anon_sym_fmulp] = ACTIONS(13),
    [anon_sym_cmovns] = ACTIONS(13),
    [anon_sym_bt] = ACTIONS(13),
    [anon_sym_orb] = ACTIONS(13),
    [anon_sym_movbe] = ACTIONS(13),
    [anon_sym_vmovdqu64] = ACTIONS(13),
    [anon_sym_maxss] = ACTIONS(13),
    [anon_sym_xorpd] = ACTIONS(13),
    [anon_sym_psllq] = ACTIONS(13),
    [anon_sym_pcmpeqd] = ACTIONS(13),
    [anon_sym_punpcklbw] = ACTIONS(13),
    [anon_sym_cvttss2si] = ACTIONS(13),
    [anon_sym_andps] = ACTIONS(13),
    [anon_sym_orw] = ACTIONS(13),
    [anon_sym_cmove] = ACTIONS(13),
    [anon_sym_paddd] = ACTIONS(13),
    [anon_sym_re] = ACTIONS(13),
    [anon_sym_andb] = ACTIONS(13),
    [anon_sym_movsb] = ACTIONS(13),
    [anon_sym_andl] = ACTIONS(13),
    [anon_sym_vmovdqa] = ACTIONS(13),
    [anon_sym_paddq] = ACTIONS(13),
    [anon_sym_aesenclast] = ACTIONS(13),
    [anon_sym_minss] = ACTIONS(13),
    [anon_sym_cmovg] = ACTIONS(13),
    [anon_sym_vucomisd] = ACTIONS(13),
    [anon_sym_vmovsd] = ACTIONS(13),
    [anon_sym_adcx] = ACTIONS(13),
    [anon_sym_cmovl] = ACTIONS(13),
    [anon_sym_comisd] = ACTIONS(13),
    [anon_sym_cvtsi2sdq] = ACTIONS(13),
    [anon_sym_subq] = ACTIONS(13),
    [anon_sym_knotw] = ACTIONS(13),
    [anon_sym_pxor] = ACTIONS(13),
    [anon_sym_pandn] = ACTIONS(13),
    [anon_sym_repnz] = ACTIONS(13),
    [anon_sym_bts] = ACTIONS(13),
    [anon_sym_tzcnt] = ACTIONS(13),
    [anon_sym_paddw] = ACTIONS(13),
    [anon_sym_pclmullqhqdq] = ACTIONS(13),
    [anon_sym_rorl] = ACTIONS(13),
    [anon_sym_psrld] = ACTIONS(13),
    [anon_sym_insl] = ACTIONS(13),
    [anon_sym_insb] = ACTIONS(13),
    [anon_sym_punpckhwd] = ACTIONS(13),
    [anon_sym_pshufb] = ACTIONS(13),
    [anon_sym_cvtsi2ss] = ACTIONS(13),
    [anon_sym_testl] = ACTIONS(13),
    [anon_sym_comiss] = ACTIONS(13),
    [anon_sym_aesenc] = ACTIONS(13),
    [anon_sym_cvtsi2ssl] = ACTIONS(13),
    [anon_sym_psrad] = ACTIONS(13),
    [anon_sym_vpbroadcastq] = ACTIONS(13),
    [anon_sym_unpckhpd] = ACTIONS(13),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_sha1nexte] = ACTIONS(13),
    [anon_sym_cmovae] = ACTIONS(13),
    [anon_sym_sha1msg2] = ACTIONS(13),
    [anon_sym_movzbw] = ACTIONS(13),
    [anon_sym_vmovdqa64] = ACTIONS(13),
    [anon_sym_cmovs] = ACTIONS(13),
    [anon_sym_vpaddb] = ACTIONS(15),
    [anon_sym_vpsrlq] = ACTIONS(15),
    [anon_sym_vpmaddubsw] = ACTIONS(15),
    [anon_sym_shrd] = ACTIONS(15),
    [anon_sym_vextracti128] = ACTIONS(15),
    [anon_sym_vunpcklpd] = ACTIONS(15),
    [anon_sym_vcvtusi2sd] = ACTIONS(15),
    [anon_sym_vpsubw] = ACTIONS(15),
    [anon_sym_shufpd] = ACTIONS(15),
    [anon_sym_vpunpckhqdq] = ACTIONS(15),
    [anon_sym_pextrb] = ACTIONS(15),
    [anon_sym_vxorps] = ACTIONS(15),
    [anon_sym_vpxord] = ACTIONS(15),
    [anon_sym_nopw] = ACTIONS(15),
    [anon_sym_vprord] = ACTIONS(15),
    [anon_sym_shrx] = ACTIONS(15),
    [anon_sym_rorx] = ACTIONS(15),
    [anon_sym_vpunpckhwd] = ACTIONS(15),
    [anon_sym_pinsrw] = ACTIONS(15),
    [anon_sym_vpmuludq] = ACTIONS(15),
    [anon_sym_vpunpcklqdq] = ACTIONS(15),
    [anon_sym_vpand] = ACTIONS(15),
    [anon_sym_aeskeygenassist] = ACTIONS(15),
    [anon_sym_vaesenc] = ACTIONS(15),
    [anon_sym_vpcmpltud] = ACTIONS(15),
    [anon_sym_vpextrw] = ACTIONS(15),
    [anon_sym_vpslldq] = ACTIONS(15),
    [anon_sym_vprorq] = ACTIONS(15),
    [anon_sym_blendvps] = ACTIONS(15),
    [anon_sym_pshufd] = ACTIONS(15),
    [anon_sym_vpaddw] = ACTIONS(15),
    [anon_sym_vpsllw] = ACTIONS(15),
    [anon_sym_vpsrld] = ACTIONS(15),
    [anon_sym_pextrq] = ACTIONS(15),
    [anon_sym_vpsubd] = ACTIONS(15),
    [anon_sym_pextrw] = ACTIONS(15),
    [anon_sym_shufps] = ACTIONS(15),
    [anon_sym_pshuflw] = ACTIONS(15),
    [anon_sym_vpsubq] = ACTIONS(15),
    [anon_sym_shld] = ACTIONS(15),
    [anon_sym_vpslld] = ACTIONS(15),
    [anon_sym_vpermt2d] = ACTIONS(15),
    [anon_sym_vunpckhpd] = ACTIONS(15),
    [anon_sym_vmulsd] = ACTIONS(15),
    [anon_sym_vpunpckhdq] = ACTIONS(15),
    [anon_sym_vpshufd] = ACTIONS(15),
    [anon_sym_vpor] = ACTIONS(15),
    [anon_sym_vpunpckldq] = ACTIONS(15),
    [anon_sym_vextracti32x4] = ACTIONS(15),
    [anon_sym_vsubsd] = ACTIONS(15),
    [anon_sym_vpmaddwd] = ACTIONS(15),
    [anon_sym_pblendw] = ACTIONS(15),
    [anon_sym_vunpckhps] = ACTIONS(15),
    [anon_sym_vpblendmd] = ACTIONS(15),
    [anon_sym_vpsllq] = ACTIONS(15),
    [anon_sym_sarx] = ACTIONS(15),
    [anon_sym_shlx] = ACTIONS(15),
    [anon_sym_vpxor] = ACTIONS(15),
    [anon_sym_vpermd] = ACTIONS(15),
    [anon_sym_vpcmpgtd] = ACTIONS(15),
    [anon_sym_vpsubusw] = ACTIONS(15),
    [anon_sym_vpackusdw] = ACTIONS(15),
    [anon_sym_mulx] = ACTIONS(15),
    [anon_sym_vpsrlw] = ACTIONS(15),
    [anon_sym_vpaddq] = ACTIONS(15),
    [anon_sym_pshufhw] = ACTIONS(15),
    [anon_sym_andn] = ACTIONS(15),
    [anon_sym_vpunpcklwd] = ACTIONS(15),
    [anon_sym_palignr] = ACTIONS(15),
    [anon_sym_pinsrd] = ACTIONS(15),
    [anon_sym_vpsrldq] = ACTIONS(15),
    [anon_sym_vpermq] = ACTIONS(15),
    [anon_sym_vunpcklps] = ACTIONS(15),
    [anon_sym_sha1rnds4] = ACTIONS(15),
    [anon_sym_vpermi2d] = ACTIONS(15),
    [anon_sym_vaesenclast] = ACTIONS(15),
    [anon_sym_vdivsd] = ACTIONS(15),
    [anon_sym_vpaddd] = ACTIONS(15),
    [anon_sym_pinsrb] = ACTIONS(15),
    [anon_sym_vpmullw] = ACTIONS(15),
    [anon_sym_vpshufb] = ACTIONS(15),
    [anon_sym_vpinsrw] = ACTIONS(17),
    [anon_sym_vpblendd] = ACTIONS(17),
    [anon_sym_vinserti128] = ACTIONS(17),
    [anon_sym_vshufi64x2] = ACTIONS(17),
    [anon_sym_addw] = ACTIONS(17),
    [anon_sym_vperm2i128] = ACTIONS(17),
    [anon_sym_vpinsrd] = ACTIONS(17),
    [anon_sym_vpinsrq] = ACTIONS(17),
    [anon_sym_vpinsrb] = ACTIONS(17),
    [anon_sym_vperm2f128] = ACTIONS(17),
    [anon_sym_vshufi32x4] = ACTIONS(17),
    [anon_sym_vblendps] = ACTIONS(17),
    [anon_sym_vshufps] = ACTIONS(17),
    [anon_sym_vpalignr] = ACTIONS(17),
    [anon_sym_vblendvps] = ACTIONS(17),
    [anon_sym_vinsertf128] = ACTIONS(19),
    [anon_sym_vinserti32x4] = ACTIONS(19),
    [anon_sym_movsbl] = ACTIONS(21),
    [anon_sym_cmpb] = ACTIONS(21),
    [anon_sym_cwtl] = ACTIONS(21),
    [anon_sym_shrl] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_andq] = ACTIONS(21),
    [anon_sym_cmp] = ACTIONS(21),
    [anon_sym_cwtd] = ACTIONS(21),
    [anon_sym_movdqa] = ACTIONS(21),
    [anon_sym_movq] = ACTIONS(21),
    [anon_sym_addb] = ACTIONS(21),
    [anon_sym_jno] = ACTIONS(21),
    [anon_sym_rex_DOTW] = ACTIONS(21),
    [anon_sym_testb] = ACTIONS(21),
    [anon_sym_addsd] = ACTIONS(21),
    [anon_sym_rol] = ACTIONS(21),
    [anon_sym_sar] = ACTIONS(21),
    [anon_sym_rex_DOTB] = ACTIONS(21),
    [anon_sym_vmovdqu] = ACTIONS(21),
    [anon_sym_callq] = ACTIONS(21),
    [anon_sym_movups] = ACTIONS(21),
    [anon_sym_vpclmullqhqdq] = ACTIONS(21),
    [anon_sym_subss] = ACTIONS(21),
    [anon_sym_jb] = ACTIONS(21),
    [anon_sym_rex_DOTRXB] = ACTIONS(21),
    [anon_sym_jae] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_mulsd] = ACTIONS(21),
    [anon_sym_addl] = ACTIONS(21),
    [anon_sym_jmp] = ACTIONS(21),
    [anon_sym_jne] = ACTIONS(21),
    [anon_sym_cltq] = ACTIONS(21),
    [anon_sym_sub] = ACTIONS(21),
    [anon_sym_je] = ACTIONS(21),
    [anon_sym_cltd] = ACTIONS(21),
    [anon_sym_movb] = ACTIONS(21),
    [anon_sym_movaps] = ACTIONS(21),
    [anon_sym_cpuid] = ACTIONS(21),
    [anon_sym_vmovdqu32] = ACTIONS(21),
    [anon_sym_jo] = ACTIONS(21),
    [anon_sym_jmpq] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_rex_DOTWRB] = ACTIONS(21),
    [anon_sym_movl] = ACTIONS(21),
    [anon_sym_retq] = ACTIONS(21),
    [anon_sym_jge] = ACTIONS(21),
    [anon_sym_movsd] = ACTIONS(21),
    [anon_sym_jg] = ACTIONS(21),
    [anon_sym_movss] = ACTIONS(21),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(21),
    [anon_sym_shl] = ACTIONS(21),
    [anon_sym_subw] = ACTIONS(21),
    [anon_sym_ror] = ACTIONS(21),
    [anon_sym_cbtw] = ACTIONS(21),
    [anon_sym_repz] = ACTIONS(21),
    [anon_sym_mulss] = ACTIONS(21),
    [anon_sym_movw] = ACTIONS(21),
    [anon_sym_vpclmullqlqdq] = ACTIONS(21),
    [anon_sym_movsbq] = ACTIONS(21),
    [anon_sym_nopl] = ACTIONS(21),
    [anon_sym_shll] = ACTIONS(21),
    [anon_sym_cqto] = ACTIONS(21),
    [anon_sym_mov] = ACTIONS(21),
    [anon_sym_ss] = ACTIONS(21),
    [anon_sym_adc] = ACTIONS(21),
    [anon_sym_leaveq] = ACTIONS(21),
    [anon_sym_lea] = ACTIONS(21),
    [anon_sym_movslq] = ACTIONS(21),
    [anon_sym_mfence] = ACTIONS(21),
    [anon_sym_ud2] = ACTIONS(21),
    [anon_sym_rex_DOTWRXB] = ACTIONS(21),
    [anon_sym_shr] = ACTIONS(21),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(21),
    [anon_sym_movzbl] = ACTIONS(21),
    [anon_sym_femms] = ACTIONS(21),
    [anon_sym_addss] = ACTIONS(21),
    [anon_sym_movzwl] = ACTIONS(21),
    [anon_sym_sbb] = ACTIONS(21),
    [anon_sym_cmpq] = ACTIONS(21),
    [anon_sym_xgetbv] = ACTIONS(21),
    [anon_sym_pushq] = ACTIONS(21),
    [anon_sym_endbr64] = ACTIONS(21),
    [anon_sym_vzeroupper] = ACTIONS(21),
    [anon_sym_ja] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(21),
    [anon_sym_addr32] = ACTIONS(21),
    [anon_sym_movdqu] = ACTIONS(21),
    [anon_sym_pand] = ACTIONS(21),
    [anon_sym_movswl] = ACTIONS(21),
    [anon_sym_prefetcht0] = ACTIONS(21),
    [anon_sym_vmovups] = ACTIONS(21),
    [anon_sym_add] = ACTIONS(21),
    [anon_sym_subsd] = ACTIONS(21),
    [anon_sym_subb] = ACTIONS(21),
    [anon_sym_vinserti64x4] = ACTIONS(21),
    [anon_sym_rex_DOTXB] = ACTIONS(21),
    [anon_sym_vzeroall] = ACTIONS(21),
    [anon_sym_shrq] = ACTIONS(21),
    [anon_sym_sarl] = ACTIONS(21),
    [anon_sym_cmpw] = ACTIONS(21),
    [anon_sym_data16] = ACTIONS(21),
    [anon_sym_jbe] = ACTIONS(21),
    [anon_sym_jl] = ACTIONS(21),
    [anon_sym_shlq] = ACTIONS(21),
    [anon_sym_cmpl] = ACTIONS(21),
    [anon_sym_movd] = ACTIONS(21),
    [anon_sym_imul] = ACTIONS(21),
    [sym_two_bytes] = ACTIONS(31),
  },
  [6] = {
    [aux_sym_instruction_one_operand_repeat2] = STATE(6),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_gs] = ACTIONS(35),
    [anon_sym_idiv] = ACTIONS(35),
    [anon_sym_negl] = ACTIONS(35),
    [anon_sym_negq] = ACTIONS(35),
    [anon_sym_jp] = ACTIONS(35),
    [anon_sym_jrcxz] = ACTIONS(35),
    [anon_sym_notw] = ACTIONS(35),
    [anon_sym_setl] = ACTIONS(35),
    [anon_sym_jle] = ACTIONS(35),
    [anon_sym_divl] = ACTIONS(35),
    [anon_sym_setge] = ACTIONS(35),
    [anon_sym_fldt] = ACTIONS(35),
    [anon_sym_neg] = ACTIONS(35),
    [anon_sym_notl] = ACTIONS(35),
    [anon_sym_setb] = ACTIONS(35),
    [anon_sym_fs] = ACTIONS(35),
    [anon_sym_push] = ACTIONS(35),
    [anon_sym_seto] = ACTIONS(35),
    [anon_sym_sete] = ACTIONS(35),
    [anon_sym_setle] = ACTIONS(35),
    [anon_sym_seta] = ACTIONS(35),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_div] = ACTIONS(35),
    [anon_sym_notrack] = ACTIONS(35),
    [anon_sym_jns] = ACTIONS(35),
    [anon_sym_mulw] = ACTIONS(35),
    [anon_sym_rex_DOTRB] = ACTIONS(35),
    [anon_sym_incl] = ACTIONS(35),
    [anon_sym_setbe] = ACTIONS(35),
    [anon_sym_setp] = ACTIONS(35),
    [anon_sym_idivl] = ACTIONS(35),
    [anon_sym_setns] = ACTIONS(35),
    [anon_sym_inc] = ACTIONS(35),
    [anon_sym_setne] = ACTIONS(35),
    [anon_sym_divq] = ACTIONS(35),
    [anon_sym_prefetcht1] = ACTIONS(35),
    [anon_sym_fstpl] = ACTIONS(35),
    [anon_sym_pop] = ACTIONS(35),
    [anon_sym_mulq] = ACTIONS(35),
    [anon_sym_mul] = ACTIONS(35),
    [anon_sym_bswap] = ACTIONS(35),
    [anon_sym_fildl] = ACTIONS(35),
    [anon_sym_dec] = ACTIONS(35),
    [anon_sym_setae] = ACTIONS(35),
    [anon_sym_js] = ACTIONS(35),
    [anon_sym_mull] = ACTIONS(35),
    [anon_sym_setnp] = ACTIONS(35),
    [anon_sym_mulb] = ACTIONS(35),
    [anon_sym_setg] = ACTIONS(35),
    [anon_sym_vucomiss] = ACTIONS(35),
    [anon_sym_vmovss] = ACTIONS(35),
    [anon_sym_vmovapd] = ACTIONS(35),
    [anon_sym_vpbroadcastd] = ACTIONS(35),
    [anon_sym_orl] = ACTIONS(35),
    [anon_sym_pclmullqlqdq] = ACTIONS(35),
    [anon_sym_por] = ACTIONS(35),
    [anon_sym_pcmpgtd] = ACTIONS(35),
    [anon_sym_movswq] = ACTIONS(35),
    [anon_sym_psrldq] = ACTIONS(35),
    [anon_sym_rep] = ACTIONS(35),
    [anon_sym_kmovw] = ACTIONS(35),
    [anon_sym_movhlps] = ACTIONS(35),
    [anon_sym_addq] = ACTIONS(35),
    [anon_sym_psrlq] = ACTIONS(35),
    [anon_sym_punpcklwd] = ACTIONS(35),
    [anon_sym_outsb] = ACTIONS(35),
    [anon_sym_bsf] = ACTIONS(35),
    [anon_sym_pcmpeqb] = ACTIONS(35),
    [anon_sym_maxsd] = ACTIONS(35),
    [anon_sym_sha1msg1] = ACTIONS(35),
    [anon_sym_andpd] = ACTIONS(35),
    [anon_sym_vmovd] = ACTIONS(35),
    [anon_sym_pmuludq] = ACTIONS(35),
    [anon_sym_vbroadcasti32x4] = ACTIONS(35),
    [anon_sym_ucomisd] = ACTIONS(35),
    [anon_sym_popcnt] = ACTIONS(35),
    [anon_sym_pmovmskb] = ACTIONS(35),
    [anon_sym_psubusb] = ACTIONS(35),
    [anon_sym_cmovp] = ACTIONS(35),
    [anon_sym_psubusw] = ACTIONS(35),
    [anon_sym_cmova] = ACTIONS(35),
    [anon_sym_psubq] = ACTIONS(35),
    [anon_sym_cmovge] = ACTIONS(35),
    [anon_sym_subl] = ACTIONS(35),
    [anon_sym_cmovbe] = ACTIONS(35),
    [anon_sym_punpckhdq] = ACTIONS(35),
    [anon_sym_psrlw] = ACTIONS(35),
    [anon_sym_cvttsd2si] = ACTIONS(35),
    [anon_sym_cmovb] = ACTIONS(35),
    [anon_sym_cvtsd2ss] = ACTIONS(35),
    [anon_sym_movzbq] = ACTIONS(35),
    [anon_sym_rex_DOTWB] = ACTIONS(35),
    [anon_sym_xchg] = ACTIONS(35),
    [anon_sym_aesdec] = ACTIONS(35),
    [anon_sym_punpckhbw] = ACTIONS(35),
    [anon_sym_cvtsi2sd] = ACTIONS(35),
    [anon_sym_psubd] = ACTIONS(35),
    [anon_sym_adox] = ACTIONS(35),
    [anon_sym_vmovdqa32] = ACTIONS(35),
    [anon_sym_packuswb] = ACTIONS(35),
    [anon_sym_btr] = ACTIONS(35),
    [anon_sym_cvtsi2sdl] = ACTIONS(35),
    [anon_sym_vbroadcastss] = ACTIONS(35),
    [anon_sym_subpd] = ACTIONS(35),
    [anon_sym_aesdeclast] = ACTIONS(35),
    [anon_sym_andw] = ACTIONS(35),
    [anon_sym_pslld] = ACTIONS(35),
    [anon_sym_vmovaps] = ACTIONS(35),
    [anon_sym_xorl] = ACTIONS(35),
    [anon_sym_divss] = ACTIONS(35),
    [anon_sym_punpckhqdq] = ACTIONS(35),
    [anon_sym_btl] = ACTIONS(35),
    [anon_sym_pmaddubsw] = ACTIONS(35),
    [anon_sym_pmaddwd] = ACTIONS(35),
    [anon_sym_movsbw] = ACTIONS(35),
    [anon_sym_orq] = ACTIONS(35),
    [anon_sym_cvtss2sd] = ACTIONS(35),
    [anon_sym_divsd] = ACTIONS(35),
    [anon_sym_vmovq] = ACTIONS(35),
    [anon_sym_xorw] = ACTIONS(35),
    [anon_sym_minsd] = ACTIONS(35),
    [anon_sym_xorps] = ACTIONS(35),
    [anon_sym_bsr] = ACTIONS(35),
    [anon_sym_pslldq] = ACTIONS(35),
    [anon_sym_cmovo] = ACTIONS(35),
    [anon_sym_lock] = ACTIONS(35),
    [anon_sym_ucomiss] = ACTIONS(35),
    [anon_sym_punpcklqdq] = ACTIONS(35),
    [anon_sym_cmovle] = ACTIONS(35),
    [anon_sym_roll] = ACTIONS(35),
    [anon_sym_vbroadcasti128] = ACTIONS(35),
    [anon_sym_outsl] = ACTIONS(35),
    [anon_sym_psubb] = ACTIONS(35),
    [anon_sym_movhps] = ACTIONS(35),
    [anon_sym_movapd] = ACTIONS(35),
    [anon_sym_punpckldq] = ACTIONS(35),
    [anon_sym_movabs] = ACTIONS(35),
    [anon_sym_rex] = ACTIONS(35),
    [anon_sym_cmovne] = ACTIONS(35),
    [anon_sym_pclmulhqhqdq] = ACTIONS(35),
    [anon_sym_fmulp] = ACTIONS(35),
    [anon_sym_cmovns] = ACTIONS(35),
    [anon_sym_bt] = ACTIONS(35),
    [anon_sym_orb] = ACTIONS(35),
    [anon_sym_movbe] = ACTIONS(35),
    [anon_sym_vmovdqu64] = ACTIONS(35),
    [anon_sym_maxss] = ACTIONS(35),
    [anon_sym_xorpd] = ACTIONS(35),
    [anon_sym_psllq] = ACTIONS(35),
    [anon_sym_pcmpeqd] = ACTIONS(35),
    [anon_sym_punpcklbw] = ACTIONS(35),
    [anon_sym_cvttss2si] = ACTIONS(35),
    [anon_sym_andps] = ACTIONS(35),
    [anon_sym_orw] = ACTIONS(35),
    [anon_sym_cmove] = ACTIONS(35),
    [anon_sym_paddd] = ACTIONS(35),
    [anon_sym_re] = ACTIONS(35),
    [anon_sym_andb] = ACTIONS(35),
    [anon_sym_movsb] = ACTIONS(35),
    [anon_sym_andl] = ACTIONS(35),
    [anon_sym_vmovdqa] = ACTIONS(35),
    [anon_sym_paddq] = ACTIONS(35),
    [anon_sym_aesenclast] = ACTIONS(35),
    [anon_sym_minss] = ACTIONS(35),
    [anon_sym_cmovg] = ACTIONS(35),
    [anon_sym_vucomisd] = ACTIONS(35),
    [anon_sym_vmovsd] = ACTIONS(35),
    [anon_sym_adcx] = ACTIONS(35),
    [anon_sym_cmovl] = ACTIONS(35),
    [anon_sym_comisd] = ACTIONS(35),
    [anon_sym_cvtsi2sdq] = ACTIONS(35),
    [anon_sym_subq] = ACTIONS(35),
    [anon_sym_knotw] = ACTIONS(35),
    [anon_sym_pxor] = ACTIONS(35),
    [anon_sym_pandn] = ACTIONS(35),
    [anon_sym_repnz] = ACTIONS(35),
    [anon_sym_bts] = ACTIONS(35),
    [anon_sym_tzcnt] = ACTIONS(35),
    [anon_sym_paddw] = ACTIONS(35),
    [anon_sym_pclmullqhqdq] = ACTIONS(35),
    [anon_sym_rorl] = ACTIONS(35),
    [anon_sym_psrld] = ACTIONS(35),
    [anon_sym_insl] = ACTIONS(35),
    [anon_sym_insb] = ACTIONS(35),
    [anon_sym_punpckhwd] = ACTIONS(35),
    [anon_sym_pshufb] = ACTIONS(35),
    [anon_sym_cvtsi2ss] = ACTIONS(35),
    [anon_sym_testl] = ACTIONS(35),
    [anon_sym_comiss] = ACTIONS(35),
    [anon_sym_aesenc] = ACTIONS(35),
    [anon_sym_cvtsi2ssl] = ACTIONS(35),
    [anon_sym_psrad] = ACTIONS(35),
    [anon_sym_vpbroadcastq] = ACTIONS(35),
    [anon_sym_unpckhpd] = ACTIONS(35),
    [anon_sym_test] = ACTIONS(35),
    [anon_sym_sha1nexte] = ACTIONS(35),
    [anon_sym_cmovae] = ACTIONS(35),
    [anon_sym_sha1msg2] = ACTIONS(35),
    [anon_sym_movzbw] = ACTIONS(35),
    [anon_sym_vmovdqa64] = ACTIONS(35),
    [anon_sym_cmovs] = ACTIONS(35),
    [anon_sym_vpaddb] = ACTIONS(35),
    [anon_sym_vpsrlq] = ACTIONS(35),
    [anon_sym_vpmaddubsw] = ACTIONS(35),
    [anon_sym_shrd] = ACTIONS(35),
    [anon_sym_vextracti128] = ACTIONS(35),
    [anon_sym_vunpcklpd] = ACTIONS(35),
    [anon_sym_vcvtusi2sd] = ACTIONS(35),
    [anon_sym_vpsubw] = ACTIONS(35),
    [anon_sym_shufpd] = ACTIONS(35),
    [anon_sym_vpunpckhqdq] = ACTIONS(35),
    [anon_sym_pextrb] = ACTIONS(35),
    [anon_sym_vxorps] = ACTIONS(35),
    [anon_sym_vpxord] = ACTIONS(35),
    [anon_sym_nopw] = ACTIONS(35),
    [anon_sym_vprord] = ACTIONS(35),
    [anon_sym_shrx] = ACTIONS(35),
    [anon_sym_rorx] = ACTIONS(35),
    [anon_sym_vpunpckhwd] = ACTIONS(35),
    [anon_sym_pinsrw] = ACTIONS(35),
    [anon_sym_vpmuludq] = ACTIONS(35),
    [anon_sym_vpunpcklqdq] = ACTIONS(35),
    [anon_sym_vpand] = ACTIONS(35),
    [anon_sym_aeskeygenassist] = ACTIONS(35),
    [anon_sym_vaesenc] = ACTIONS(35),
    [anon_sym_vpcmpltud] = ACTIONS(35),
    [anon_sym_vpextrw] = ACTIONS(35),
    [anon_sym_vpslldq] = ACTIONS(35),
    [anon_sym_vprorq] = ACTIONS(35),
    [anon_sym_blendvps] = ACTIONS(35),
    [anon_sym_pshufd] = ACTIONS(35),
    [anon_sym_vpaddw] = ACTIONS(35),
    [anon_sym_vpsllw] = ACTIONS(35),
    [anon_sym_vpsrld] = ACTIONS(35),
    [anon_sym_pextrq] = ACTIONS(35),
    [anon_sym_vpsubd] = ACTIONS(35),
    [anon_sym_pextrw] = ACTIONS(35),
    [anon_sym_shufps] = ACTIONS(35),
    [anon_sym_pshuflw] = ACTIONS(35),
    [anon_sym_vpsubq] = ACTIONS(35),
    [anon_sym_shld] = ACTIONS(35),
    [anon_sym_vpslld] = ACTIONS(35),
    [anon_sym_vpermt2d] = ACTIONS(35),
    [anon_sym_vunpckhpd] = ACTIONS(35),
    [anon_sym_vmulsd] = ACTIONS(35),
    [anon_sym_vpunpckhdq] = ACTIONS(35),
    [anon_sym_vpshufd] = ACTIONS(35),
    [anon_sym_vpor] = ACTIONS(35),
    [anon_sym_vpunpckldq] = ACTIONS(35),
    [anon_sym_vextracti32x4] = ACTIONS(35),
    [anon_sym_vsubsd] = ACTIONS(35),
    [anon_sym_vpmaddwd] = ACTIONS(35),
    [anon_sym_pblendw] = ACTIONS(35),
    [anon_sym_vunpckhps] = ACTIONS(35),
    [anon_sym_vpblendmd] = ACTIONS(35),
    [anon_sym_vpsllq] = ACTIONS(35),
    [anon_sym_sarx] = ACTIONS(35),
    [anon_sym_shlx] = ACTIONS(35),
    [anon_sym_vpxor] = ACTIONS(35),
    [anon_sym_vpermd] = ACTIONS(35),
    [anon_sym_vpcmpgtd] = ACTIONS(35),
    [anon_sym_vpsubusw] = ACTIONS(35),
    [anon_sym_vpackusdw] = ACTIONS(35),
    [anon_sym_mulx] = ACTIONS(35),
    [anon_sym_vpsrlw] = ACTIONS(35),
    [anon_sym_vpaddq] = ACTIONS(35),
    [anon_sym_pshufhw] = ACTIONS(35),
    [anon_sym_andn] = ACTIONS(35),
    [anon_sym_vpunpcklwd] = ACTIONS(35),
    [anon_sym_palignr] = ACTIONS(35),
    [anon_sym_pinsrd] = ACTIONS(35),
    [anon_sym_vpsrldq] = ACTIONS(35),
    [anon_sym_vpermq] = ACTIONS(35),
    [anon_sym_vunpcklps] = ACTIONS(35),
    [anon_sym_sha1rnds4] = ACTIONS(35),
    [anon_sym_vpermi2d] = ACTIONS(35),
    [anon_sym_vaesenclast] = ACTIONS(35),
    [anon_sym_vdivsd] = ACTIONS(35),
    [anon_sym_vpaddd] = ACTIONS(35),
    [anon_sym_pinsrb] = ACTIONS(35),
    [anon_sym_vpmullw] = ACTIONS(35),
    [anon_sym_vpshufb] = ACTIONS(35),
    [anon_sym_vpinsrw] = ACTIONS(35),
    [anon_sym_vpblendd] = ACTIONS(35),
    [anon_sym_vinserti128] = ACTIONS(35),
    [anon_sym_vshufi64x2] = ACTIONS(35),
    [anon_sym_addw] = ACTIONS(35),
    [anon_sym_vperm2i128] = ACTIONS(35),
    [anon_sym_vpinsrd] = ACTIONS(35),
    [anon_sym_vpinsrq] = ACTIONS(35),
    [anon_sym_vpinsrb] = ACTIONS(35),
    [anon_sym_vperm2f128] = ACTIONS(35),
    [anon_sym_vshufi32x4] = ACTIONS(35),
    [anon_sym_vblendps] = ACTIONS(35),
    [anon_sym_vshufps] = ACTIONS(35),
    [anon_sym_vpalignr] = ACTIONS(35),
    [anon_sym_vblendvps] = ACTIONS(35),
    [anon_sym_vinsertf128] = ACTIONS(35),
    [anon_sym_vinserti32x4] = ACTIONS(35),
    [anon_sym_movsbl] = ACTIONS(35),
    [anon_sym_cmpb] = ACTIONS(35),
    [anon_sym_cwtl] = ACTIONS(35),
    [anon_sym_shrl] = ACTIONS(35),
    [anon_sym_xor] = ACTIONS(35),
    [anon_sym_andq] = ACTIONS(35),
    [anon_sym_cmp] = ACTIONS(35),
    [anon_sym_cwtd] = ACTIONS(35),
    [anon_sym_movdqa] = ACTIONS(35),
    [anon_sym_movq] = ACTIONS(35),
    [anon_sym_addb] = ACTIONS(35),
    [anon_sym_jno] = ACTIONS(35),
    [anon_sym_rex_DOTW] = ACTIONS(35),
    [anon_sym_testb] = ACTIONS(35),
    [anon_sym_addsd] = ACTIONS(35),
    [anon_sym_rol] = ACTIONS(35),
    [anon_sym_sar] = ACTIONS(35),
    [anon_sym_rex_DOTB] = ACTIONS(35),
    [anon_sym_vmovdqu] = ACTIONS(35),
    [anon_sym_callq] = ACTIONS(35),
    [anon_sym_movups] = ACTIONS(35),
    [anon_sym_vpclmullqhqdq] = ACTIONS(35),
    [anon_sym_subss] = ACTIONS(35),
    [anon_sym_jb] = ACTIONS(35),
    [anon_sym_rex_DOTRXB] = ACTIONS(35),
    [anon_sym_jae] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(35),
    [anon_sym_mulsd] = ACTIONS(35),
    [anon_sym_addl] = ACTIONS(35),
    [anon_sym_jmp] = ACTIONS(35),
    [anon_sym_jne] = ACTIONS(35),
    [anon_sym_cltq] = ACTIONS(35),
    [anon_sym_sub] = ACTIONS(35),
    [anon_sym_je] = ACTIONS(35),
    [anon_sym_cltd] = ACTIONS(35),
    [anon_sym_movb] = ACTIONS(35),
    [anon_sym_movaps] = ACTIONS(35),
    [anon_sym_cpuid] = ACTIONS(35),
    [anon_sym_vmovdqu32] = ACTIONS(35),
    [anon_sym_jo] = ACTIONS(35),
    [anon_sym_jmpq] = ACTIONS(35),
    [anon_sym_or] = ACTIONS(35),
    [anon_sym_rex_DOTWRB] = ACTIONS(35),
    [anon_sym_movl] = ACTIONS(35),
    [anon_sym_retq] = ACTIONS(35),
    [anon_sym_jge] = ACTIONS(35),
    [anon_sym_movsd] = ACTIONS(35),
    [anon_sym_jg] = ACTIONS(35),
    [anon_sym_movss] = ACTIONS(35),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(35),
    [anon_sym_shl] = ACTIONS(35),
    [anon_sym_subw] = ACTIONS(35),
    [anon_sym_ror] = ACTIONS(35),
    [anon_sym_cbtw] = ACTIONS(35),
    [anon_sym_repz] = ACTIONS(35),
    [anon_sym_mulss] = ACTIONS(35),
    [anon_sym_movw] = ACTIONS(35),
    [anon_sym_vpclmullqlqdq] = ACTIONS(35),
    [anon_sym_movsbq] = ACTIONS(35),
    [anon_sym_nopl] = ACTIONS(35),
    [anon_sym_shll] = ACTIONS(35),
    [anon_sym_cqto] = ACTIONS(35),
    [anon_sym_mov] = ACTIONS(35),
    [anon_sym_ss] = ACTIONS(35),
    [anon_sym_adc] = ACTIONS(35),
    [anon_sym_leaveq] = ACTIONS(35),
    [anon_sym_lea] = ACTIONS(35),
    [anon_sym_movslq] = ACTIONS(35),
    [anon_sym_mfence] = ACTIONS(35),
    [anon_sym_ud2] = ACTIONS(35),
    [anon_sym_rex_DOTWRXB] = ACTIONS(35),
    [anon_sym_shr] = ACTIONS(35),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(35),
    [anon_sym_movzbl] = ACTIONS(35),
    [anon_sym_femms] = ACTIONS(35),
    [anon_sym_addss] = ACTIONS(35),
    [anon_sym_movzwl] = ACTIONS(35),
    [anon_sym_sbb] = ACTIONS(35),
    [anon_sym_cmpq] = ACTIONS(35),
    [anon_sym_xgetbv] = ACTIONS(35),
    [anon_sym_pushq] = ACTIONS(35),
    [anon_sym_endbr64] = ACTIONS(35),
    [anon_sym_vzeroupper] = ACTIONS(35),
    [anon_sym_ja] = ACTIONS(35),
    [anon_sym_nop] = ACTIONS(35),
    [anon_sym_addr32] = ACTIONS(35),
    [anon_sym_movdqu] = ACTIONS(35),
    [anon_sym_pand] = ACTIONS(35),
    [anon_sym_movswl] = ACTIONS(35),
    [anon_sym_prefetcht0] = ACTIONS(35),
    [anon_sym_vmovups] = ACTIONS(35),
    [anon_sym_add] = ACTIONS(35),
    [anon_sym_subsd] = ACTIONS(35),
    [anon_sym_subb] = ACTIONS(35),
    [anon_sym_vinserti64x4] = ACTIONS(35),
    [anon_sym_rex_DOTXB] = ACTIONS(35),
    [anon_sym_vzeroall] = ACTIONS(35),
    [anon_sym_shrq] = ACTIONS(35),
    [anon_sym_sarl] = ACTIONS(35),
    [anon_sym_cmpw] = ACTIONS(35),
    [anon_sym_data16] = ACTIONS(35),
    [anon_sym_jbe] = ACTIONS(35),
    [anon_sym_jl] = ACTIONS(35),
    [anon_sym_shlq] = ACTIONS(35),
    [anon_sym_cmpl] = ACTIONS(35),
    [anon_sym_movd] = ACTIONS(35),
    [anon_sym_imul] = ACTIONS(35),
    [sym_two_bytes] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_COLON,
    ACTIONS(7), 1,
      aux_sym_operand_token1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      aux_sym_operand_repeat1,
    STATE(8), 2,
      sym__line,
      aux_sym_prog_repeat1,
    STATE(26), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
    STATE(139), 6,
      sym_instruction_one_operand,
      sym_instruction_two_operands,
      sym_instruction_three_operands,
      sym_instruction_four_operands,
      sym_instruction_six_operands,
      sym_instruction_undetermined_operands,
  [29] = 7,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      aux_sym_operand_token1,
    STATE(38), 1,
      aux_sym_operand_repeat1,
    STATE(8), 2,
      sym__line,
      aux_sym_prog_repeat1,
    STATE(26), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
    STATE(139), 6,
      sym_instruction_one_operand,
      sym_instruction_two_operands,
      sym_instruction_three_operands,
      sym_instruction_four_operands,
      sym_instruction_six_operands,
      sym_instruction_undetermined_operands,
  [58] = 5,
    ACTIONS(50), 1,
      anon_sym_LF,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      aux_sym_operand_token1,
    STATE(28), 1,
      aux_sym_operand_repeat1,
    STATE(11), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [75] = 5,
    ACTIONS(50), 1,
      anon_sym_LF,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      aux_sym_operand_token1,
    STATE(28), 1,
      aux_sym_operand_repeat1,
    STATE(15), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [92] = 4,
    ACTIONS(58), 1,
      aux_sym_operand_token1,
    STATE(28), 1,
      aux_sym_operand_repeat1,
    ACTIONS(56), 2,
      anon_sym_LF,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [107] = 5,
    ACTIONS(54), 1,
      aux_sym_operand_token1,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_operand_repeat1,
    STATE(9), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [124] = 5,
    ACTIONS(54), 1,
      aux_sym_operand_token1,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_operand_repeat1,
    STATE(11), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [141] = 5,
    ACTIONS(54), 1,
      aux_sym_operand_token1,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_operand_repeat1,
    STATE(13), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [158] = 5,
    ACTIONS(54), 1,
      aux_sym_operand_token1,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_operand_repeat1,
    STATE(11), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [175] = 4,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(73), 1,
      aux_sym_operand_token1,
    STATE(37), 1,
      aux_sym_operand_repeat1,
    STATE(16), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [189] = 4,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      aux_sym_operand_token1,
    STATE(37), 1,
      aux_sym_operand_repeat1,
    STATE(16), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [203] = 4,
    ACTIONS(50), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      aux_sym_operand_token1,
    STATE(37), 1,
      aux_sym_operand_repeat1,
    STATE(24), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [217] = 4,
    ACTIONS(76), 1,
      aux_sym_operand_token1,
    ACTIONS(78), 1,
      anon_sym_LF,
    STATE(37), 1,
      aux_sym_operand_repeat1,
    STATE(16), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [231] = 4,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      aux_sym_operand_token1,
    STATE(37), 1,
      aux_sym_operand_repeat1,
    STATE(19), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [245] = 4,
    ACTIONS(76), 1,
      aux_sym_operand_token1,
    ACTIONS(78), 1,
      anon_sym_LF,
    STATE(37), 1,
      aux_sym_operand_repeat1,
    STATE(22), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [259] = 4,
    ACTIONS(76), 1,
      aux_sym_operand_token1,
    ACTIONS(80), 1,
      anon_sym_LF,
    STATE(37), 1,
      aux_sym_operand_repeat1,
    STATE(16), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [273] = 4,
    ACTIONS(56), 1,
      anon_sym_COLON,
    ACTIONS(82), 1,
      aux_sym_operand_token1,
    STATE(38), 1,
      aux_sym_operand_repeat1,
    STATE(23), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [287] = 4,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      aux_sym_operand_token1,
    STATE(37), 1,
      aux_sym_operand_repeat1,
    STATE(16), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [301] = 4,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      aux_sym_operand_token1,
    STATE(37), 1,
      aux_sym_operand_repeat1,
    STATE(17), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [315] = 4,
    ACTIONS(7), 1,
      aux_sym_operand_token1,
    ACTIONS(85), 1,
      anon_sym_COLON,
    STATE(38), 1,
      aux_sym_operand_repeat1,
    STATE(23), 2,
      sym_operand,
      aux_sym_instruction_one_operand_repeat1,
  [329] = 3,
    ACTIONS(89), 1,
      aux_sym_operand_token1,
    STATE(27), 1,
      aux_sym_operand_repeat1,
    ACTIONS(87), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [340] = 2,
    STATE(27), 1,
      aux_sym_operand_repeat1,
    ACTIONS(92), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      aux_sym_operand_token1,
  [349] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(86), 1,
      sym_operand,
  [359] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(95), 1,
      sym_operand,
  [369] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(114), 1,
      sym_operand,
  [379] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(137), 1,
      sym_operand,
  [389] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(135), 1,
      sym_operand,
  [399] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(134), 1,
      sym_operand,
  [409] = 2,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 2,
      anon_sym_COLON,
      aux_sym_operand_token1,
  [417] = 3,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(100), 1,
      aux_sym_operand_token1,
    STATE(36), 1,
      aux_sym_operand_repeat1,
  [427] = 2,
    STATE(41), 1,
      aux_sym_operand_repeat1,
    ACTIONS(92), 2,
      anon_sym_LF,
      aux_sym_operand_token1,
  [435] = 2,
    STATE(36), 1,
      aux_sym_operand_repeat1,
    ACTIONS(92), 2,
      anon_sym_COLON,
      aux_sym_operand_token1,
  [443] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      aux_sym_operand_token1,
    STATE(39), 1,
      aux_sym_operand_repeat1,
  [453] = 3,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      aux_sym_operand_token1,
    STATE(39), 1,
      aux_sym_operand_repeat1,
  [463] = 3,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      aux_sym_operand_token1,
    STATE(41), 1,
      aux_sym_operand_repeat1,
  [473] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(132), 1,
      sym_operand,
  [483] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(130), 1,
      sym_operand,
  [493] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(127), 1,
      sym_operand,
  [503] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(125), 1,
      sym_operand,
  [513] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(123), 1,
      sym_operand,
  [523] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(120), 1,
      sym_operand,
  [533] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(118), 1,
      sym_operand,
  [543] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(117), 1,
      sym_operand,
  [553] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(112), 1,
      sym_operand,
  [563] = 3,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(113), 1,
      aux_sym_operand_token1,
    STATE(41), 1,
      aux_sym_operand_repeat1,
  [573] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(87), 1,
      sym_operand,
  [583] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(129), 1,
      sym_operand,
  [593] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(128), 1,
      sym_operand,
  [603] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(126), 1,
      sym_operand,
  [613] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(110), 1,
      sym_operand,
  [623] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(109), 1,
      sym_operand,
  [633] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(106), 1,
      sym_operand,
  [643] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(104), 1,
      sym_operand,
  [653] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(100), 1,
      sym_operand,
  [663] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(124), 1,
      sym_operand,
  [673] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(122), 1,
      sym_operand,
  [683] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(121), 1,
      sym_operand,
  [693] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(119), 1,
      sym_operand,
  [703] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(93), 1,
      sym_operand,
  [713] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(92), 1,
      sym_operand,
  [723] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(91), 1,
      sym_operand,
  [733] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(138), 1,
      sym_operand,
  [743] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(116), 1,
      sym_operand,
  [753] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(115), 1,
      sym_operand,
  [763] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(131), 1,
      sym_operand,
  [773] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(111), 1,
      sym_operand,
  [783] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(108), 1,
      sym_operand,
  [793] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(107), 1,
      sym_operand,
  [803] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(88), 1,
      sym_operand,
  [813] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(89), 1,
      sym_operand,
  [823] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(90), 1,
      sym_operand,
  [833] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(103), 1,
      sym_operand,
  [843] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(102), 1,
      sym_operand,
  [853] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(101), 1,
      sym_operand,
  [863] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(97), 1,
      sym_operand,
  [873] = 1,
    ACTIONS(115), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      aux_sym_operand_token1,
  [879] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(94), 1,
      sym_operand,
  [889] = 3,
    ACTIONS(111), 1,
      aux_sym_operand_token1,
    STATE(51), 1,
      aux_sym_operand_repeat1,
    STATE(140), 1,
      sym_operand,
  [899] = 3,
    ACTIONS(94), 1,
      aux_sym_operand_token1,
    STATE(40), 1,
      aux_sym_operand_repeat1,
    STATE(96), 1,
      sym_operand,
  [909] = 1,
    ACTIONS(117), 1,
      anon_sym_COMMA,
  [913] = 1,
    ACTIONS(119), 1,
      anon_sym_LF,
  [917] = 1,
    ACTIONS(121), 1,
      anon_sym_LF,
  [921] = 1,
    ACTIONS(123), 1,
      anon_sym_COMMA,
  [925] = 1,
    ACTIONS(125), 1,
      anon_sym_COMMA,
  [929] = 1,
    ACTIONS(127), 1,
      anon_sym_COMMA,
  [933] = 1,
    ACTIONS(129), 1,
      anon_sym_COMMA,
  [937] = 1,
    ACTIONS(131), 1,
      anon_sym_LF,
  [941] = 1,
    ACTIONS(133), 1,
      anon_sym_LF,
  [945] = 1,
    ACTIONS(135), 1,
      anon_sym_COMMA,
  [949] = 1,
    ACTIONS(137), 1,
      anon_sym_COMMA,
  [953] = 1,
    ACTIONS(139), 1,
      anon_sym_COMMA,
  [957] = 1,
    ACTIONS(141), 1,
      aux_sym_operand_token1,
  [961] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [965] = 1,
    ACTIONS(145), 1,
      anon_sym_COMMA,
  [969] = 1,
    ACTIONS(147), 1,
      anon_sym_LF,
  [973] = 1,
    ACTIONS(149), 1,
      anon_sym_COMMA,
  [977] = 1,
    ACTIONS(151), 1,
      anon_sym_COMMA,
  [981] = 1,
    ACTIONS(153), 1,
      anon_sym_COMMA,
  [985] = 1,
    ACTIONS(155), 1,
      aux_sym_operand_token1,
  [989] = 1,
    ACTIONS(157), 1,
      anon_sym_COMMA,
  [993] = 1,
    ACTIONS(159), 1,
      anon_sym_LF,
  [997] = 1,
    ACTIONS(161), 1,
      anon_sym_COMMA,
  [1001] = 1,
    ACTIONS(163), 1,
      anon_sym_COMMA,
  [1005] = 1,
    ACTIONS(165), 1,
      anon_sym_LF,
  [1009] = 1,
    ACTIONS(167), 1,
      anon_sym_LF,
  [1013] = 1,
    ACTIONS(169), 1,
      anon_sym_COMMA,
  [1017] = 1,
    ACTIONS(171), 1,
      aux_sym_operand_token1,
  [1021] = 1,
    ACTIONS(173), 1,
      anon_sym_COMMA,
  [1025] = 1,
    ACTIONS(175), 1,
      anon_sym_LF,
  [1029] = 1,
    ACTIONS(177), 1,
      anon_sym_COMMA,
  [1033] = 1,
    ACTIONS(179), 1,
      anon_sym_COMMA,
  [1037] = 1,
    ACTIONS(181), 1,
      anon_sym_COMMA,
  [1041] = 1,
    ACTIONS(183), 1,
      anon_sym_COMMA,
  [1045] = 1,
    ACTIONS(185), 1,
      anon_sym_LF,
  [1049] = 1,
    ACTIONS(187), 1,
      anon_sym_LF,
  [1053] = 1,
    ACTIONS(189), 1,
      anon_sym_COMMA,
  [1057] = 1,
    ACTIONS(191), 1,
      anon_sym_COMMA,
  [1061] = 1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
  [1065] = 1,
    ACTIONS(195), 1,
      anon_sym_COMMA,
  [1069] = 1,
    ACTIONS(197), 1,
      anon_sym_LF,
  [1073] = 1,
    ACTIONS(199), 1,
      anon_sym_COMMA,
  [1077] = 1,
    ACTIONS(201), 1,
      anon_sym_COMMA,
  [1081] = 1,
    ACTIONS(203), 1,
      anon_sym_LF,
  [1085] = 1,
    ACTIONS(205), 1,
      anon_sym_COMMA,
  [1089] = 1,
    ACTIONS(207), 1,
      anon_sym_COMMA,
  [1093] = 1,
    ACTIONS(209), 1,
      anon_sym_LF,
  [1097] = 1,
    ACTIONS(211), 1,
      aux_sym_operand_token1,
  [1101] = 1,
    ACTIONS(213), 1,
      anon_sym_COMMA,
  [1105] = 1,
    ACTIONS(215), 1,
      anon_sym_COMMA,
  [1109] = 1,
    ACTIONS(217), 1,
      aux_sym_operand_token1,
  [1113] = 1,
    ACTIONS(219), 1,
      anon_sym_COMMA,
  [1117] = 1,
    ACTIONS(221), 1,
      anon_sym_COMMA,
  [1121] = 1,
    ACTIONS(223), 1,
      anon_sym_LF,
  [1125] = 1,
    ACTIONS(29), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 29,
  [SMALL_STATE(9)] = 58,
  [SMALL_STATE(10)] = 75,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 107,
  [SMALL_STATE(13)] = 124,
  [SMALL_STATE(14)] = 141,
  [SMALL_STATE(15)] = 158,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 189,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 217,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 245,
  [SMALL_STATE(22)] = 259,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 287,
  [SMALL_STATE(25)] = 301,
  [SMALL_STATE(26)] = 315,
  [SMALL_STATE(27)] = 329,
  [SMALL_STATE(28)] = 340,
  [SMALL_STATE(29)] = 349,
  [SMALL_STATE(30)] = 359,
  [SMALL_STATE(31)] = 369,
  [SMALL_STATE(32)] = 379,
  [SMALL_STATE(33)] = 389,
  [SMALL_STATE(34)] = 399,
  [SMALL_STATE(35)] = 409,
  [SMALL_STATE(36)] = 417,
  [SMALL_STATE(37)] = 427,
  [SMALL_STATE(38)] = 435,
  [SMALL_STATE(39)] = 443,
  [SMALL_STATE(40)] = 453,
  [SMALL_STATE(41)] = 463,
  [SMALL_STATE(42)] = 473,
  [SMALL_STATE(43)] = 483,
  [SMALL_STATE(44)] = 493,
  [SMALL_STATE(45)] = 503,
  [SMALL_STATE(46)] = 513,
  [SMALL_STATE(47)] = 523,
  [SMALL_STATE(48)] = 533,
  [SMALL_STATE(49)] = 543,
  [SMALL_STATE(50)] = 553,
  [SMALL_STATE(51)] = 563,
  [SMALL_STATE(52)] = 573,
  [SMALL_STATE(53)] = 583,
  [SMALL_STATE(54)] = 593,
  [SMALL_STATE(55)] = 603,
  [SMALL_STATE(56)] = 613,
  [SMALL_STATE(57)] = 623,
  [SMALL_STATE(58)] = 633,
  [SMALL_STATE(59)] = 643,
  [SMALL_STATE(60)] = 653,
  [SMALL_STATE(61)] = 663,
  [SMALL_STATE(62)] = 673,
  [SMALL_STATE(63)] = 683,
  [SMALL_STATE(64)] = 693,
  [SMALL_STATE(65)] = 703,
  [SMALL_STATE(66)] = 713,
  [SMALL_STATE(67)] = 723,
  [SMALL_STATE(68)] = 733,
  [SMALL_STATE(69)] = 743,
  [SMALL_STATE(70)] = 753,
  [SMALL_STATE(71)] = 763,
  [SMALL_STATE(72)] = 773,
  [SMALL_STATE(73)] = 783,
  [SMALL_STATE(74)] = 793,
  [SMALL_STATE(75)] = 803,
  [SMALL_STATE(76)] = 813,
  [SMALL_STATE(77)] = 823,
  [SMALL_STATE(78)] = 833,
  [SMALL_STATE(79)] = 843,
  [SMALL_STATE(80)] = 853,
  [SMALL_STATE(81)] = 863,
  [SMALL_STATE(82)] = 873,
  [SMALL_STATE(83)] = 879,
  [SMALL_STATE(84)] = 889,
  [SMALL_STATE(85)] = 899,
  [SMALL_STATE(86)] = 909,
  [SMALL_STATE(87)] = 913,
  [SMALL_STATE(88)] = 917,
  [SMALL_STATE(89)] = 921,
  [SMALL_STATE(90)] = 925,
  [SMALL_STATE(91)] = 929,
  [SMALL_STATE(92)] = 933,
  [SMALL_STATE(93)] = 937,
  [SMALL_STATE(94)] = 941,
  [SMALL_STATE(95)] = 945,
  [SMALL_STATE(96)] = 949,
  [SMALL_STATE(97)] = 953,
  [SMALL_STATE(98)] = 957,
  [SMALL_STATE(99)] = 961,
  [SMALL_STATE(100)] = 965,
  [SMALL_STATE(101)] = 969,
  [SMALL_STATE(102)] = 973,
  [SMALL_STATE(103)] = 977,
  [SMALL_STATE(104)] = 981,
  [SMALL_STATE(105)] = 985,
  [SMALL_STATE(106)] = 989,
  [SMALL_STATE(107)] = 993,
  [SMALL_STATE(108)] = 997,
  [SMALL_STATE(109)] = 1001,
  [SMALL_STATE(110)] = 1005,
  [SMALL_STATE(111)] = 1009,
  [SMALL_STATE(112)] = 1013,
  [SMALL_STATE(113)] = 1017,
  [SMALL_STATE(114)] = 1021,
  [SMALL_STATE(115)] = 1025,
  [SMALL_STATE(116)] = 1029,
  [SMALL_STATE(117)] = 1033,
  [SMALL_STATE(118)] = 1037,
  [SMALL_STATE(119)] = 1041,
  [SMALL_STATE(120)] = 1045,
  [SMALL_STATE(121)] = 1049,
  [SMALL_STATE(122)] = 1053,
  [SMALL_STATE(123)] = 1057,
  [SMALL_STATE(124)] = 1061,
  [SMALL_STATE(125)] = 1065,
  [SMALL_STATE(126)] = 1069,
  [SMALL_STATE(127)] = 1073,
  [SMALL_STATE(128)] = 1077,
  [SMALL_STATE(129)] = 1081,
  [SMALL_STATE(130)] = 1085,
  [SMALL_STATE(131)] = 1089,
  [SMALL_STATE(132)] = 1093,
  [SMALL_STATE(133)] = 1097,
  [SMALL_STATE(134)] = 1101,
  [SMALL_STATE(135)] = 1105,
  [SMALL_STATE(136)] = 1109,
  [SMALL_STATE(137)] = 1113,
  [SMALL_STATE(138)] = 1117,
  [SMALL_STATE(139)] = 1121,
  [SMALL_STATE(140)] = 1125,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_one_operand, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_one_operand, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_one_operand, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_one_operand_repeat2, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_one_operand_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_one_operand_repeat2, 2), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(38),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_undetermined_operands, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_one_operand_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_one_operand_repeat1, 2), SHIFT_REPEAT(28),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_undetermined_operands, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_undetermined_operands, 5),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_undetermined_operands, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_one_operand_repeat1, 2), SHIFT_REPEAT(37),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_undetermined_operands, 6),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_undetermined_operands, 7),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_one_operand_repeat1, 2), SHIFT_REPEAT(38),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(27),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(36),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(39),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(41),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcodes_undetermined_operands, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_six_operands, 15),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_three_operands, 7),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_two_operands, 6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_two_operands, 7),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcodes_four_operands, 1),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_three_operands, 8),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcodes_three_operands, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_four_operands, 9),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_one_operand, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_three_operands, 9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcodes_six_operands, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_four_operands, 10),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_two_operands, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_four_operands, 11),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_six_operands, 13),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_six_operands, 14),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_one_operand, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcodes_two_operands, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcodes_one_operand, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_assembly(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
