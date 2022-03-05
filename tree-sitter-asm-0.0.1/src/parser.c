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
#define STATE_COUNT 334
#define LARGE_STATE_COUNT 56
#define SYMBOL_COUNT 574
#define ALIAS_COUNT 0
#define TOKEN_COUNT 517
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  aux_sym_address_token1 = 2,
  sym_two_bytes = 3,
  aux_sym_comment_token1 = 4,
  aux_sym_comment_token2 = 5,
  sym__line_break = 6,
  anon_sym_COMMA = 7,
  anon_sym_ = 8,
  anon_sym_adc = 9,
  anon_sym_add = 10,
  anon_sym_addq = 11,
  anon_sym_addl = 12,
  anon_sym_addss = 13,
  anon_sym_addw = 14,
  anon_sym_addb = 15,
  anon_sym_cmp = 16,
  anon_sym_cmpb = 17,
  anon_sym_cmpw = 18,
  anon_sym_cmpl = 19,
  anon_sym_cmpq = 20,
  anon_sym_comiss = 21,
  anon_sym_comisd = 22,
  anon_sym_inc = 23,
  anon_sym_incl = 24,
  anon_sym_dec = 25,
  anon_sym_div = 26,
  anon_sym_divq = 27,
  anon_sym_divl = 28,
  anon_sym_divss = 29,
  anon_sym_divsd = 30,
  anon_sym_idiv = 31,
  anon_sym_idivl = 32,
  anon_sym_sub = 33,
  anon_sym_subq = 34,
  anon_sym_subl = 35,
  anon_sym_subss = 36,
  anon_sym_subw = 37,
  anon_sym_subb = 38,
  anon_sym_subsd = 39,
  anon_sym_subpd = 40,
  anon_sym_sbb = 41,
  anon_sym_mul = 42,
  anon_sym_mulq = 43,
  anon_sym_mull = 44,
  anon_sym_mulss = 45,
  anon_sym_mulw = 46,
  anon_sym_mulb = 47,
  anon_sym_mulsd = 48,
  anon_sym_mulx = 49,
  anon_sym_imul = 50,
  anon_sym_neg = 51,
  anon_sym_negl = 52,
  anon_sym_negq = 53,
  anon_sym_fmulp = 54,
  anon_sym_vpclmulhqlqdq = 55,
  anon_sym_pclmullqlqdq = 56,
  anon_sym_pclmullqhqdq = 57,
  anon_sym_vpclmullqhqdq = 58,
  anon_sym_vpclmulhqhqdq = 59,
  anon_sym_pclmulhqhqdq = 60,
  anon_sym_vpclmullqlqdq = 61,
  anon_sym_bsf = 62,
  anon_sym_bsr = 63,
  anon_sym_bts = 64,
  anon_sym_bt = 65,
  anon_sym_btr = 66,
  anon_sym_btl = 67,
  anon_sym_setne = 68,
  anon_sym_setb = 69,
  anon_sym_sete = 70,
  anon_sym_setbe = 71,
  anon_sym_seta = 72,
  anon_sym_setge = 73,
  anon_sym_setae = 74,
  anon_sym_setl = 75,
  anon_sym_setle = 76,
  anon_sym_setg = 77,
  anon_sym_seto = 78,
  anon_sym_setnp = 79,
  anon_sym_setp = 80,
  anon_sym_setns = 81,
  anon_sym_test = 82,
  anon_sym_testb = 83,
  anon_sym_testl = 84,
  anon_sym_knotw = 85,
  anon_sym_vpcmpltud = 86,
  anon_sym_gs = 87,
  anon_sym_re = 88,
  anon_sym_ss = 89,
  anon_sym_leaveq = 90,
  anon_sym_retq = 91,
  anon_sym_bswap = 92,
  anon_sym_cbtw = 93,
  anon_sym_cltd = 94,
  anon_sym_cltq = 95,
  anon_sym_cmovbe = 96,
  anon_sym_cmovl = 97,
  anon_sym_cmovae = 98,
  anon_sym_cmovo = 99,
  anon_sym_cmovne = 100,
  anon_sym_cmovns = 101,
  anon_sym_cmovg = 102,
  anon_sym_cmovp = 103,
  anon_sym_cmove = 104,
  anon_sym_cmovge = 105,
  anon_sym_cmovb = 106,
  anon_sym_cmova = 107,
  anon_sym_cmovle = 108,
  anon_sym_cmovs = 109,
  anon_sym_cwtl = 110,
  anon_sym_cwtd = 111,
  anon_sym_cqto = 112,
  anon_sym_cvttsd2si = 113,
  anon_sym_cvtss2sd = 114,
  anon_sym_cvttss2si = 115,
  anon_sym_cvtsi2sd = 116,
  anon_sym_cvtsi2ss = 117,
  anon_sym_cvtsi2sdq = 118,
  anon_sym_cvtsi2sdl = 119,
  anon_sym_cvtsd2ss = 120,
  anon_sym_cvtsi2ssl = 121,
  anon_sym_mov = 122,
  anon_sym_movw = 123,
  anon_sym_movl = 124,
  anon_sym_movq = 125,
  anon_sym_movb = 126,
  anon_sym_movabs = 127,
  anon_sym_movsbw = 128,
  anon_sym_movsbq = 129,
  anon_sym_movsbl = 130,
  anon_sym_movswl = 131,
  anon_sym_movswq = 132,
  anon_sym_movzbw = 133,
  anon_sym_movzbq = 134,
  anon_sym_movzbl = 135,
  anon_sym_movzwl = 136,
  anon_sym_movaps = 137,
  anon_sym_movhlps = 138,
  anon_sym_movss = 139,
  anon_sym_movups = 140,
  anon_sym_movsd = 141,
  anon_sym_movd = 142,
  anon_sym_movhps = 143,
  anon_sym_movdqa = 144,
  anon_sym_movbe = 145,
  anon_sym_movapd = 146,
  anon_sym_movdqu = 147,
  anon_sym_xchg = 148,
  anon_sym_fildl = 149,
  anon_sym_fldt = 150,
  anon_sym_fstpl = 151,
  anon_sym_insb = 152,
  anon_sym_insl = 153,
  anon_sym_outsb = 154,
  anon_sym_outsl = 155,
  anon_sym_or = 156,
  anon_sym_orq = 157,
  anon_sym_orl = 158,
  anon_sym_orb = 159,
  anon_sym_orw = 160,
  anon_sym_xor = 161,
  anon_sym_xorl = 162,
  anon_sym_xorw = 163,
  anon_sym_xorps = 164,
  anon_sym_xorpd = 165,
  anon_sym_vxorps = 166,
  anon_sym_vpxord = 167,
  anon_sym_vpxor = 168,
  anon_sym_and = 169,
  anon_sym_andq = 170,
  anon_sym_andl = 171,
  anon_sym_andw = 172,
  anon_sym_andb = 173,
  anon_sym_andn = 174,
  anon_sym_andpd = 175,
  anon_sym_pand = 176,
  anon_sym_pandn = 177,
  anon_sym_andps = 178,
  anon_sym_vpand = 179,
  anon_sym_not = 180,
  anon_sym_notl = 181,
  anon_sym_notw = 182,
  anon_sym_cpuid = 183,
  anon_sym_lea = 184,
  anon_sym_popcnt = 185,
  anon_sym_nop = 186,
  anon_sym_nopl = 187,
  anon_sym_nopw = 188,
  anon_sym_ud2 = 189,
  anon_sym_data16 = 190,
  anon_sym_sha1rnds4 = 191,
  anon_sym_addr32 = 192,
  anon_sym_sha1msg1 = 193,
  anon_sym_sha1msg2 = 194,
  anon_sym_sha1nexte = 195,
  anon_sym_endbr64 = 196,
  sym_OperatingSystemSupportOpcode = 197,
  anon_sym_packuswb = 198,
  anon_sym_punpckhbw = 199,
  anon_sym_punpckhdq = 200,
  anon_sym_punpckhwd = 201,
  anon_sym_punpcklbw = 202,
  anon_sym_punpckldq = 203,
  anon_sym_punpcklwd = 204,
  anon_sym_vpunpcklwd = 205,
  anon_sym_vpunpckldq = 206,
  anon_sym_punpcklqdq = 207,
  anon_sym_punpckhqdq = 208,
  anon_sym_vpunpckhqdq = 209,
  anon_sym_vpunpckhdq = 210,
  anon_sym_vpunpcklqdq = 211,
  anon_sym_vpunpckhwd = 212,
  anon_sym_rol = 213,
  anon_sym_ror = 214,
  anon_sym_sar = 215,
  anon_sym_sarl = 216,
  anon_sym_sarx = 217,
  anon_sym_shl = 218,
  anon_sym_shll = 219,
  anon_sym_shld = 220,
  anon_sym_shlx = 221,
  anon_sym_shlq = 222,
  anon_sym_shr = 223,
  anon_sym_shrq = 224,
  anon_sym_shrd = 225,
  anon_sym_shrl = 226,
  anon_sym_shrx = 227,
  anon_sym_vprord = 228,
  anon_sym_vprorq = 229,
  anon_sym_rorl = 230,
  anon_sym_roll = 231,
  anon_sym_push = 232,
  anon_sym_pushq = 233,
  anon_sym_pop = 234,
  anon_sym_movslq = 235,
  anon_sym_movsb = 236,
  anon_sym_rep = 237,
  anon_sym_repz = 238,
  anon_sym_repnz = 239,
  anon_sym_rex = 240,
  anon_sym_rex_DOTWB = 241,
  anon_sym_rex_DOTWRB = 242,
  anon_sym_rex_DOTRXB = 243,
  anon_sym_rex_DOTB = 244,
  anon_sym_rex_DOTWRXB = 245,
  anon_sym_rex_DOTXB = 246,
  anon_sym_rex_DOTW = 247,
  anon_sym_rex_DOTRB = 248,
  anon_sym_xgetbv = 249,
  anon_sym_fs = 250,
  anon_sym_kmovw = 251,
  anon_sym_adcx = 252,
  anon_sym_adox = 253,
  anon_sym_aesdec = 254,
  anon_sym_aesdeclast = 255,
  anon_sym_aesenc = 256,
  anon_sym_aesenclast = 257,
  anon_sym_vaesenc = 258,
  anon_sym_vaesenclast = 259,
  anon_sym_aeskeygenassist = 260,
  anon_sym_vblendps = 261,
  anon_sym_vblendvps = 262,
  anon_sym_vcvtusi2sd = 263,
  anon_sym_vdivsd = 264,
  anon_sym_vmovaps = 265,
  anon_sym_vmovapd = 266,
  anon_sym_vmovss = 267,
  anon_sym_vmovdqu = 268,
  anon_sym_vmovdqu64 = 269,
  anon_sym_vmovdqu32 = 270,
  anon_sym_vmovdqa = 271,
  anon_sym_vmovdqa32 = 272,
  anon_sym_vmovdqa64 = 273,
  anon_sym_vmovq = 274,
  anon_sym_vmovups = 275,
  anon_sym_vmovd = 276,
  anon_sym_vmovsd = 277,
  anon_sym_vmulsd = 278,
  anon_sym_vpackusdw = 279,
  anon_sym_vpaddd = 280,
  anon_sym_vpaddb = 281,
  anon_sym_vpaddq = 282,
  anon_sym_vpaddw = 283,
  anon_sym_vpalignr = 284,
  anon_sym_vpcmpgtd = 285,
  anon_sym_vpextrw = 286,
  anon_sym_vpinsrw = 287,
  anon_sym_vpinsrd = 288,
  anon_sym_vpinsrq = 289,
  anon_sym_vpinsrb = 290,
  anon_sym_vpmaddubsw = 291,
  anon_sym_vpmaddwd = 292,
  anon_sym_vpmullw = 293,
  anon_sym_vpmuludq = 294,
  anon_sym_vpor = 295,
  anon_sym_vpshufb = 296,
  anon_sym_vpshufd = 297,
  anon_sym_vpslldq = 298,
  anon_sym_vpslld = 299,
  anon_sym_vpsllq = 300,
  anon_sym_vpsllw = 301,
  anon_sym_vpsrldq = 302,
  anon_sym_vpsrld = 303,
  anon_sym_vpsrlq = 304,
  anon_sym_vpsrlw = 305,
  anon_sym_vpsubusw = 306,
  anon_sym_vpsubq = 307,
  anon_sym_vpsubd = 308,
  anon_sym_vpsubw = 309,
  anon_sym_vshufps = 310,
  anon_sym_vsubsd = 311,
  anon_sym_vucomisd = 312,
  anon_sym_vucomiss = 313,
  anon_sym_vunpckhpd = 314,
  anon_sym_vunpckhps = 315,
  anon_sym_vunpcklpd = 316,
  anon_sym_vunpcklps = 317,
  anon_sym_vbroadcastss = 318,
  anon_sym_vinsertf128 = 319,
  anon_sym_vperm2f128 = 320,
  anon_sym_vzeroall = 321,
  anon_sym_vzeroupper = 322,
  anon_sym_vshufi32x4 = 323,
  anon_sym_vshufi64x2 = 324,
  anon_sym_vpblendmd = 325,
  anon_sym_vextracti128 = 326,
  anon_sym_vextracti32x4 = 327,
  anon_sym_vinserti128 = 328,
  anon_sym_vinserti32x4 = 329,
  anon_sym_vinserti64x4 = 330,
  anon_sym_vpblendd = 331,
  anon_sym_vpbroadcastq = 332,
  anon_sym_vpbroadcastd = 333,
  anon_sym_vbroadcasti128 = 334,
  anon_sym_vbroadcasti32x4 = 335,
  anon_sym_vperm2i128 = 336,
  anon_sym_vpermd = 337,
  anon_sym_vpermq = 338,
  anon_sym_vpermt2d = 339,
  anon_sym_vpermi2d = 340,
  anon_sym_tzcnt = 341,
  anon_sym_rorx = 342,
  anon_sym_psubd = 343,
  anon_sym_pmaddwd = 344,
  anon_sym_pxor = 345,
  anon_sym_psrad = 346,
  anon_sym_pslld = 347,
  anon_sym_pcmpgtd = 348,
  anon_sym_pcmpeqd = 349,
  anon_sym_por = 350,
  anon_sym_paddw = 351,
  anon_sym_psubusw = 352,
  anon_sym_pcmpeqb = 353,
  anon_sym_psubusb = 354,
  anon_sym_psrld = 355,
  anon_sym_psrlw = 356,
  anon_sym_psllq = 357,
  anon_sym_paddd = 358,
  anon_sym_psrlq = 359,
  anon_sym_psubb = 360,
  anon_sym_maxss = 361,
  anon_sym_pmovmskb = 362,
  anon_sym_pinsrw = 363,
  anon_sym_minss = 364,
  anon_sym_prefetcht1 = 365,
  anon_sym_prefetcht0 = 366,
  anon_sym_pextrw = 367,
  anon_sym_ucomiss = 368,
  anon_sym_shufps = 369,
  anon_sym_addsd = 370,
  anon_sym_paddq = 371,
  anon_sym_psubq = 372,
  anon_sym_pshuflw = 373,
  anon_sym_pmuludq = 374,
  anon_sym_pshufd = 375,
  anon_sym_minsd = 376,
  anon_sym_pshufhw = 377,
  anon_sym_mfence = 378,
  anon_sym_maxsd = 379,
  anon_sym_ucomisd = 380,
  anon_sym_shufpd = 381,
  anon_sym_pslldq = 382,
  anon_sym_unpckhpd = 383,
  anon_sym_psrldq = 384,
  anon_sym_palignr = 385,
  anon_sym_pshufb = 386,
  anon_sym_pmaddubsw = 387,
  anon_sym_pinsrb = 388,
  anon_sym_pblendw = 389,
  anon_sym_pextrq = 390,
  anon_sym_blendvps = 391,
  anon_sym_pextrb = 392,
  anon_sym_pinsrd = 393,
  anon_sym_femms = 394,
  anon_sym_f = 395,
  aux_sym_operand_token1 = 396,
  anon_sym_LT = 397,
  aux_sym_operand_token2 = 398,
  anon_sym_GT = 399,
  anon_sym_DOLLAR = 400,
  aux_sym_immediateOperand_token1 = 401,
  anon_sym_PERCENTss = 402,
  anon_sym_PERCENTcs = 403,
  anon_sym_PERCENTds = 404,
  anon_sym_PERCENTes = 405,
  anon_sym_PERCENTfs = 406,
  anon_sym_PERCENTgs = 407,
  anon_sym_PERCENTrax = 408,
  anon_sym_PERCENTrbx = 409,
  anon_sym_PERCENTrcx = 410,
  anon_sym_PERCENTrdx = 411,
  anon_sym_PERCENTrsi = 412,
  anon_sym_PERCENTrdi = 413,
  anon_sym_PERCENTrbp = 414,
  anon_sym_PERCENTrsp = 415,
  anon_sym_PERCENTr8 = 416,
  anon_sym_PERCENTr9 = 417,
  anon_sym_PERCENTr10 = 418,
  anon_sym_PERCENTr11 = 419,
  anon_sym_PERCENTr12 = 420,
  anon_sym_PERCENTr13 = 421,
  anon_sym_PERCENTr14 = 422,
  anon_sym_PERCENTr15 = 423,
  anon_sym_PERCENTeax = 424,
  anon_sym_PERCENTecx = 425,
  anon_sym_PERCENTedx = 426,
  anon_sym_PERCENTebx = 427,
  anon_sym_PERCENTesi = 428,
  anon_sym_PERCENTedi = 429,
  anon_sym_PERCENTebp = 430,
  anon_sym_PERCENTesp = 431,
  anon_sym_PERCENTr8d = 432,
  anon_sym_PERCENTr9d = 433,
  anon_sym_PERCENTr10d = 434,
  anon_sym_PERCENTr11d = 435,
  anon_sym_PERCENTr12d = 436,
  anon_sym_PERCENTr13d = 437,
  anon_sym_PERCENTr14d = 438,
  anon_sym_PERCENTr15d = 439,
  anon_sym_PERCENTax = 440,
  anon_sym_PERCENTcx = 441,
  anon_sym_PERCENTdx = 442,
  anon_sym_PERCENTbx = 443,
  anon_sym_PERCENTsi = 444,
  anon_sym_PERCENTdi = 445,
  anon_sym_PERCENTsp = 446,
  anon_sym_PERCENTbp = 447,
  anon_sym_PERCENTr8w = 448,
  anon_sym_PERCENTr9w = 449,
  anon_sym_PERCENTr10w = 450,
  anon_sym_PERCENTr11w = 451,
  anon_sym_PERCENTr12w = 452,
  anon_sym_PERCENTr13w = 453,
  anon_sym_PERCENTr14w = 454,
  anon_sym_PERCENTr15w = 455,
  anon_sym_PERCENTal = 456,
  anon_sym_PERCENTcl = 457,
  anon_sym_PERCENTdl = 458,
  anon_sym_PERCENTbl = 459,
  anon_sym_PERCENTsil = 460,
  anon_sym_PERCENTdil = 461,
  anon_sym_PERCENTspl = 462,
  anon_sym_PERCENTbpl = 463,
  anon_sym_PERCENTr8b = 464,
  anon_sym_PERCENTr9b = 465,
  anon_sym_PERCENTr10b = 466,
  anon_sym_PERCENTr11b = 467,
  anon_sym_PERCENTr12b = 468,
  anon_sym_PERCENTr13b = 469,
  anon_sym_PERCENTr14b = 470,
  anon_sym_PERCENTr15b = 471,
  anon_sym_DASH = 472,
  anon_sym_LPAREN = 473,
  anon_sym_RPAREN = 474,
  anon_sym_LBRACE = 475,
  aux_sym_memoryIndirectOperand_token1 = 476,
  anon_sym_RBRACE = 477,
  anon_sym_1 = 478,
  anon_sym_2 = 479,
  anon_sym_4 = 480,
  anon_sym_8 = 481,
  anon_sym_movsq = 482,
  anon_sym_cmpsb = 483,
  anon_sym_cmpxchg = 484,
  anon_sym_movsl = 485,
  anon_sym_callq = 486,
  anon_sym_ja = 487,
  anon_sym_jae = 488,
  anon_sym_jb = 489,
  anon_sym_jbe = 490,
  anon_sym_je = 491,
  anon_sym_jg = 492,
  anon_sym_jge = 493,
  anon_sym_jl = 494,
  anon_sym_jle = 495,
  anon_sym_jmp = 496,
  anon_sym_jmpq = 497,
  anon_sym_jne = 498,
  anon_sym_jno = 499,
  anon_sym_jns = 500,
  anon_sym_jo = 501,
  anon_sym_jp = 502,
  anon_sym_jrcxz = 503,
  anon_sym_js = 504,
  anon_sym_notrack = 505,
  anon_sym_STAR = 506,
  anon_sym_PERCENTcr0 = 507,
  anon_sym_PERCENTcr2 = 508,
  anon_sym_PERCENTcr3 = 509,
  anon_sym_PERCENTcr4 = 510,
  anon_sym_PERCENTrip = 511,
  anon_sym_PERCENTeip = 512,
  anon_sym_PERCENTip = 513,
  anon_sym_PERCENTst = 514,
  anon_sym_PERCENT = 515,
  aux_sym_otherFnOperands_token1 = 516,
  sym_prog = 517,
  sym__line = 518,
  sym_address = 519,
  sym_comment = 520,
  sym_instruction = 521,
  sym_opcode = 522,
  sym_BinaryArithmeticOpcode = 523,
  sym_BitAndByteOpcode = 524,
  sym_CuriousOpcode = 525,
  sym_DataTransferOpcode = 526,
  sym_IOOpcode = 527,
  sym_LogicalOpcode = 528,
  sym_MiscellaneousOpcode = 529,
  sym_PackUnpackOpcode = 530,
  sym_ShiftAndRotateOpcode = 531,
  sym_StackOpcode = 532,
  sym_StringOpcode = 533,
  sym_AccessRegisterOpcode = 534,
  sym_ToBeClassifiedOpcode = 535,
  sym_operand = 536,
  sym_immediateOperand = 537,
  sym_registerOperand = 538,
  sym_segmentRegisterOperand = 539,
  sym_generalRegisterOperand = 540,
  sym_generalRegister64Bits = 541,
  sym_generalRegister32Bits = 542,
  sym_generalRegister16Bits = 543,
  sym_generalRegister8Bits = 544,
  sym_memoryOperand = 545,
  sym_memoryScalaredIndexedOperand = 546,
  sym_memorySegmentBaseOperand = 547,
  sym_memoryIndirectOperand = 548,
  sym_offset = 549,
  sym_base = 550,
  sym_index = 551,
  sym_scale = 552,
  sym_memoryAbsoluteOperand = 553,
  sym_someOpcode = 554,
  sym_callq = 555,
  sym_callqOpcode = 556,
  sym_fnOperand = 557,
  sym_indirectOperands = 558,
  sym_controlRegisterOperand = 559,
  sym_instructionRegisterOperand = 560,
  sym_floatRegisterOperand = 561,
  sym_otherRegisterOperand = 562,
  sym_otherFnOperands = 563,
  aux_sym_prog_repeat1 = 564,
  aux_sym__line_repeat1 = 565,
  aux_sym_address_repeat1 = 566,
  aux_sym_instruction_repeat1 = 567,
  aux_sym_operand_repeat1 = 568,
  aux_sym_operand_repeat2 = 569,
  aux_sym_immediateOperand_repeat1 = 570,
  aux_sym_memoryIndirectOperand_repeat1 = 571,
  aux_sym_callq_repeat1 = 572,
  aux_sym_otherFnOperands_repeat1 = 573,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [aux_sym_address_token1] = "address_token1",
  [sym_two_bytes] = "two_bytes",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym__line_break] = "_line_break",
  [anon_sym_COMMA] = ",",
  [anon_sym_] = " ",
  [anon_sym_adc] = "adc",
  [anon_sym_add] = "add",
  [anon_sym_addq] = "addq",
  [anon_sym_addl] = "addl",
  [anon_sym_addss] = "addss",
  [anon_sym_addw] = "addw",
  [anon_sym_addb] = "addb",
  [anon_sym_cmp] = "cmp",
  [anon_sym_cmpb] = "cmpb",
  [anon_sym_cmpw] = "cmpw",
  [anon_sym_cmpl] = "cmpl",
  [anon_sym_cmpq] = "cmpq",
  [anon_sym_comiss] = "comiss",
  [anon_sym_comisd] = "comisd",
  [anon_sym_inc] = "inc",
  [anon_sym_incl] = "incl",
  [anon_sym_dec] = "dec",
  [anon_sym_div] = "div",
  [anon_sym_divq] = "divq",
  [anon_sym_divl] = "divl",
  [anon_sym_divss] = "divss",
  [anon_sym_divsd] = "divsd",
  [anon_sym_idiv] = "idiv",
  [anon_sym_idivl] = "idivl",
  [anon_sym_sub] = "sub",
  [anon_sym_subq] = "subq",
  [anon_sym_subl] = "subl",
  [anon_sym_subss] = "subss",
  [anon_sym_subw] = "subw",
  [anon_sym_subb] = "subb",
  [anon_sym_subsd] = "subsd",
  [anon_sym_subpd] = "subpd",
  [anon_sym_sbb] = "sbb",
  [anon_sym_mul] = "mul",
  [anon_sym_mulq] = "mulq",
  [anon_sym_mull] = "mull",
  [anon_sym_mulss] = "mulss",
  [anon_sym_mulw] = "mulw",
  [anon_sym_mulb] = "mulb",
  [anon_sym_mulsd] = "mulsd",
  [anon_sym_mulx] = "mulx",
  [anon_sym_imul] = "imul",
  [anon_sym_neg] = "neg",
  [anon_sym_negl] = "negl",
  [anon_sym_negq] = "negq",
  [anon_sym_fmulp] = "fmulp",
  [anon_sym_vpclmulhqlqdq] = "vpclmulhqlqdq",
  [anon_sym_pclmullqlqdq] = "pclmullqlqdq",
  [anon_sym_pclmullqhqdq] = "pclmullqhqdq",
  [anon_sym_vpclmullqhqdq] = "vpclmullqhqdq",
  [anon_sym_vpclmulhqhqdq] = "vpclmulhqhqdq",
  [anon_sym_pclmulhqhqdq] = "pclmulhqhqdq",
  [anon_sym_vpclmullqlqdq] = "vpclmullqlqdq",
  [anon_sym_bsf] = "bsf",
  [anon_sym_bsr] = "bsr",
  [anon_sym_bts] = "bts",
  [anon_sym_bt] = "bt",
  [anon_sym_btr] = "btr",
  [anon_sym_btl] = "btl",
  [anon_sym_setne] = "setne",
  [anon_sym_setb] = "setb",
  [anon_sym_sete] = "sete",
  [anon_sym_setbe] = "setbe",
  [anon_sym_seta] = "seta",
  [anon_sym_setge] = "setge",
  [anon_sym_setae] = "setae",
  [anon_sym_setl] = "setl",
  [anon_sym_setle] = "setle",
  [anon_sym_setg] = "setg",
  [anon_sym_seto] = "seto",
  [anon_sym_setnp] = "setnp",
  [anon_sym_setp] = "setp",
  [anon_sym_setns] = "setns",
  [anon_sym_test] = "test",
  [anon_sym_testb] = "testb",
  [anon_sym_testl] = "testl",
  [anon_sym_knotw] = "knotw",
  [anon_sym_vpcmpltud] = "vpcmpltud",
  [anon_sym_gs] = "gs",
  [anon_sym_re] = "re",
  [anon_sym_ss] = "ss",
  [anon_sym_leaveq] = "leaveq",
  [anon_sym_retq] = "retq",
  [anon_sym_bswap] = "bswap",
  [anon_sym_cbtw] = "cbtw",
  [anon_sym_cltd] = "cltd",
  [anon_sym_cltq] = "cltq",
  [anon_sym_cmovbe] = "cmovbe",
  [anon_sym_cmovl] = "cmovl",
  [anon_sym_cmovae] = "cmovae",
  [anon_sym_cmovo] = "cmovo",
  [anon_sym_cmovne] = "cmovne",
  [anon_sym_cmovns] = "cmovns",
  [anon_sym_cmovg] = "cmovg",
  [anon_sym_cmovp] = "cmovp",
  [anon_sym_cmove] = "cmove",
  [anon_sym_cmovge] = "cmovge",
  [anon_sym_cmovb] = "cmovb",
  [anon_sym_cmova] = "cmova",
  [anon_sym_cmovle] = "cmovle",
  [anon_sym_cmovs] = "cmovs",
  [anon_sym_cwtl] = "cwtl",
  [anon_sym_cwtd] = "cwtd",
  [anon_sym_cqto] = "cqto",
  [anon_sym_cvttsd2si] = "cvttsd2si",
  [anon_sym_cvtss2sd] = "cvtss2sd",
  [anon_sym_cvttss2si] = "cvttss2si",
  [anon_sym_cvtsi2sd] = "cvtsi2sd",
  [anon_sym_cvtsi2ss] = "cvtsi2ss",
  [anon_sym_cvtsi2sdq] = "cvtsi2sdq",
  [anon_sym_cvtsi2sdl] = "cvtsi2sdl",
  [anon_sym_cvtsd2ss] = "cvtsd2ss",
  [anon_sym_cvtsi2ssl] = "cvtsi2ssl",
  [anon_sym_mov] = "mov",
  [anon_sym_movw] = "movw",
  [anon_sym_movl] = "movl",
  [anon_sym_movq] = "movq",
  [anon_sym_movb] = "movb",
  [anon_sym_movabs] = "movabs",
  [anon_sym_movsbw] = "movsbw",
  [anon_sym_movsbq] = "movsbq",
  [anon_sym_movsbl] = "movsbl",
  [anon_sym_movswl] = "movswl",
  [anon_sym_movswq] = "movswq",
  [anon_sym_movzbw] = "movzbw",
  [anon_sym_movzbq] = "movzbq",
  [anon_sym_movzbl] = "movzbl",
  [anon_sym_movzwl] = "movzwl",
  [anon_sym_movaps] = "movaps",
  [anon_sym_movhlps] = "movhlps",
  [anon_sym_movss] = "movss",
  [anon_sym_movups] = "movups",
  [anon_sym_movsd] = "movsd",
  [anon_sym_movd] = "movd",
  [anon_sym_movhps] = "movhps",
  [anon_sym_movdqa] = "movdqa",
  [anon_sym_movbe] = "movbe",
  [anon_sym_movapd] = "movapd",
  [anon_sym_movdqu] = "movdqu",
  [anon_sym_xchg] = "xchg",
  [anon_sym_fildl] = "fildl",
  [anon_sym_fldt] = "fldt",
  [anon_sym_fstpl] = "fstpl",
  [anon_sym_insb] = "insb",
  [anon_sym_insl] = "insl",
  [anon_sym_outsb] = "outsb",
  [anon_sym_outsl] = "outsl",
  [anon_sym_or] = "or",
  [anon_sym_orq] = "orq",
  [anon_sym_orl] = "orl",
  [anon_sym_orb] = "orb",
  [anon_sym_orw] = "orw",
  [anon_sym_xor] = "xor",
  [anon_sym_xorl] = "xorl",
  [anon_sym_xorw] = "xorw",
  [anon_sym_xorps] = "xorps",
  [anon_sym_xorpd] = "xorpd",
  [anon_sym_vxorps] = "vxorps",
  [anon_sym_vpxord] = "vpxord",
  [anon_sym_vpxor] = "vpxor",
  [anon_sym_and] = "and",
  [anon_sym_andq] = "andq",
  [anon_sym_andl] = "andl",
  [anon_sym_andw] = "andw",
  [anon_sym_andb] = "andb",
  [anon_sym_andn] = "andn",
  [anon_sym_andpd] = "andpd",
  [anon_sym_pand] = "pand",
  [anon_sym_pandn] = "pandn",
  [anon_sym_andps] = "andps",
  [anon_sym_vpand] = "vpand",
  [anon_sym_not] = "not",
  [anon_sym_notl] = "notl",
  [anon_sym_notw] = "notw",
  [anon_sym_cpuid] = "cpuid",
  [anon_sym_lea] = "lea",
  [anon_sym_popcnt] = "popcnt",
  [anon_sym_nop] = "nop",
  [anon_sym_nopl] = "nopl",
  [anon_sym_nopw] = "nopw",
  [anon_sym_ud2] = "ud2",
  [anon_sym_data16] = "data16",
  [anon_sym_sha1rnds4] = "sha1rnds4",
  [anon_sym_addr32] = "addr32",
  [anon_sym_sha1msg1] = "sha1msg1",
  [anon_sym_sha1msg2] = "sha1msg2",
  [anon_sym_sha1nexte] = "sha1nexte",
  [anon_sym_endbr64] = "endbr64",
  [sym_OperatingSystemSupportOpcode] = "OperatingSystemSupportOpcode",
  [anon_sym_packuswb] = "packuswb",
  [anon_sym_punpckhbw] = "punpckhbw",
  [anon_sym_punpckhdq] = "punpckhdq",
  [anon_sym_punpckhwd] = "punpckhwd",
  [anon_sym_punpcklbw] = "punpcklbw",
  [anon_sym_punpckldq] = "punpckldq",
  [anon_sym_punpcklwd] = "punpcklwd",
  [anon_sym_vpunpcklwd] = "vpunpcklwd",
  [anon_sym_vpunpckldq] = "vpunpckldq",
  [anon_sym_punpcklqdq] = "punpcklqdq",
  [anon_sym_punpckhqdq] = "punpckhqdq",
  [anon_sym_vpunpckhqdq] = "vpunpckhqdq",
  [anon_sym_vpunpckhdq] = "vpunpckhdq",
  [anon_sym_vpunpcklqdq] = "vpunpcklqdq",
  [anon_sym_vpunpckhwd] = "vpunpckhwd",
  [anon_sym_rol] = "rol",
  [anon_sym_ror] = "ror",
  [anon_sym_sar] = "sar",
  [anon_sym_sarl] = "sarl",
  [anon_sym_sarx] = "sarx",
  [anon_sym_shl] = "shl",
  [anon_sym_shll] = "shll",
  [anon_sym_shld] = "shld",
  [anon_sym_shlx] = "shlx",
  [anon_sym_shlq] = "shlq",
  [anon_sym_shr] = "shr",
  [anon_sym_shrq] = "shrq",
  [anon_sym_shrd] = "shrd",
  [anon_sym_shrl] = "shrl",
  [anon_sym_shrx] = "shrx",
  [anon_sym_vprord] = "vprord",
  [anon_sym_vprorq] = "vprorq",
  [anon_sym_rorl] = "rorl",
  [anon_sym_roll] = "roll",
  [anon_sym_push] = "push",
  [anon_sym_pushq] = "pushq",
  [anon_sym_pop] = "pop",
  [anon_sym_movslq] = "movslq",
  [anon_sym_movsb] = "movsb",
  [anon_sym_rep] = "rep",
  [anon_sym_repz] = "repz",
  [anon_sym_repnz] = "repnz",
  [anon_sym_rex] = "rex",
  [anon_sym_rex_DOTWB] = "rex.WB",
  [anon_sym_rex_DOTWRB] = "rex.WRB",
  [anon_sym_rex_DOTRXB] = "rex.RXB",
  [anon_sym_rex_DOTB] = "rex.B",
  [anon_sym_rex_DOTWRXB] = "rex.WRXB",
  [anon_sym_rex_DOTXB] = "rex.XB",
  [anon_sym_rex_DOTW] = "rex.W",
  [anon_sym_rex_DOTRB] = "rex.RB",
  [anon_sym_xgetbv] = "xgetbv",
  [anon_sym_fs] = "fs",
  [anon_sym_kmovw] = "kmovw",
  [anon_sym_adcx] = "adcx",
  [anon_sym_adox] = "adox",
  [anon_sym_aesdec] = "aesdec",
  [anon_sym_aesdeclast] = "aesdeclast",
  [anon_sym_aesenc] = "aesenc",
  [anon_sym_aesenclast] = "aesenclast",
  [anon_sym_vaesenc] = "vaesenc",
  [anon_sym_vaesenclast] = "vaesenclast",
  [anon_sym_aeskeygenassist] = "aeskeygenassist",
  [anon_sym_vblendps] = "vblendps",
  [anon_sym_vblendvps] = "vblendvps",
  [anon_sym_vcvtusi2sd] = "vcvtusi2sd",
  [anon_sym_vdivsd] = "vdivsd",
  [anon_sym_vmovaps] = "vmovaps",
  [anon_sym_vmovapd] = "vmovapd",
  [anon_sym_vmovss] = "vmovss",
  [anon_sym_vmovdqu] = "vmovdqu",
  [anon_sym_vmovdqu64] = "vmovdqu64",
  [anon_sym_vmovdqu32] = "vmovdqu32",
  [anon_sym_vmovdqa] = "vmovdqa",
  [anon_sym_vmovdqa32] = "vmovdqa32",
  [anon_sym_vmovdqa64] = "vmovdqa64",
  [anon_sym_vmovq] = "vmovq",
  [anon_sym_vmovups] = "vmovups",
  [anon_sym_vmovd] = "vmovd",
  [anon_sym_vmovsd] = "vmovsd",
  [anon_sym_vmulsd] = "vmulsd",
  [anon_sym_vpackusdw] = "vpackusdw",
  [anon_sym_vpaddd] = "vpaddd",
  [anon_sym_vpaddb] = "vpaddb",
  [anon_sym_vpaddq] = "vpaddq",
  [anon_sym_vpaddw] = "vpaddw",
  [anon_sym_vpalignr] = "vpalignr",
  [anon_sym_vpcmpgtd] = "vpcmpgtd",
  [anon_sym_vpextrw] = "vpextrw",
  [anon_sym_vpinsrw] = "vpinsrw",
  [anon_sym_vpinsrd] = "vpinsrd",
  [anon_sym_vpinsrq] = "vpinsrq",
  [anon_sym_vpinsrb] = "vpinsrb",
  [anon_sym_vpmaddubsw] = "vpmaddubsw",
  [anon_sym_vpmaddwd] = "vpmaddwd",
  [anon_sym_vpmullw] = "vpmullw",
  [anon_sym_vpmuludq] = "vpmuludq",
  [anon_sym_vpor] = "vpor",
  [anon_sym_vpshufb] = "vpshufb",
  [anon_sym_vpshufd] = "vpshufd",
  [anon_sym_vpslldq] = "vpslldq",
  [anon_sym_vpslld] = "vpslld",
  [anon_sym_vpsllq] = "vpsllq",
  [anon_sym_vpsllw] = "vpsllw",
  [anon_sym_vpsrldq] = "vpsrldq",
  [anon_sym_vpsrld] = "vpsrld",
  [anon_sym_vpsrlq] = "vpsrlq",
  [anon_sym_vpsrlw] = "vpsrlw",
  [anon_sym_vpsubusw] = "vpsubusw",
  [anon_sym_vpsubq] = "vpsubq",
  [anon_sym_vpsubd] = "vpsubd",
  [anon_sym_vpsubw] = "vpsubw",
  [anon_sym_vshufps] = "vshufps",
  [anon_sym_vsubsd] = "vsubsd",
  [anon_sym_vucomisd] = "vucomisd",
  [anon_sym_vucomiss] = "vucomiss",
  [anon_sym_vunpckhpd] = "vunpckhpd",
  [anon_sym_vunpckhps] = "vunpckhps",
  [anon_sym_vunpcklpd] = "vunpcklpd",
  [anon_sym_vunpcklps] = "vunpcklps",
  [anon_sym_vbroadcastss] = "vbroadcastss",
  [anon_sym_vinsertf128] = "vinsertf128",
  [anon_sym_vperm2f128] = "vperm2f128",
  [anon_sym_vzeroall] = "vzeroall",
  [anon_sym_vzeroupper] = "vzeroupper",
  [anon_sym_vshufi32x4] = "vshufi32x4",
  [anon_sym_vshufi64x2] = "vshufi64x2",
  [anon_sym_vpblendmd] = "vpblendmd",
  [anon_sym_vextracti128] = "vextracti128",
  [anon_sym_vextracti32x4] = "vextracti32x4",
  [anon_sym_vinserti128] = "vinserti128",
  [anon_sym_vinserti32x4] = "vinserti32x4",
  [anon_sym_vinserti64x4] = "vinserti64x4",
  [anon_sym_vpblendd] = "vpblendd",
  [anon_sym_vpbroadcastq] = "vpbroadcastq",
  [anon_sym_vpbroadcastd] = "vpbroadcastd",
  [anon_sym_vbroadcasti128] = "vbroadcasti128",
  [anon_sym_vbroadcasti32x4] = "vbroadcasti32x4",
  [anon_sym_vperm2i128] = "vperm2i128",
  [anon_sym_vpermd] = "vpermd",
  [anon_sym_vpermq] = "vpermq",
  [anon_sym_vpermt2d] = "vpermt2d",
  [anon_sym_vpermi2d] = "vpermi2d",
  [anon_sym_tzcnt] = "tzcnt",
  [anon_sym_rorx] = "rorx",
  [anon_sym_psubd] = "psubd",
  [anon_sym_pmaddwd] = "pmaddwd",
  [anon_sym_pxor] = "pxor",
  [anon_sym_psrad] = "psrad",
  [anon_sym_pslld] = "pslld",
  [anon_sym_pcmpgtd] = "pcmpgtd",
  [anon_sym_pcmpeqd] = "pcmpeqd",
  [anon_sym_por] = "por",
  [anon_sym_paddw] = "paddw",
  [anon_sym_psubusw] = "psubusw",
  [anon_sym_pcmpeqb] = "pcmpeqb",
  [anon_sym_psubusb] = "psubusb",
  [anon_sym_psrld] = "psrld",
  [anon_sym_psrlw] = "psrlw",
  [anon_sym_psllq] = "psllq",
  [anon_sym_paddd] = "paddd",
  [anon_sym_psrlq] = "psrlq",
  [anon_sym_psubb] = "psubb",
  [anon_sym_maxss] = "maxss",
  [anon_sym_pmovmskb] = "pmovmskb",
  [anon_sym_pinsrw] = "pinsrw",
  [anon_sym_minss] = "minss",
  [anon_sym_prefetcht1] = "prefetcht1",
  [anon_sym_prefetcht0] = "prefetcht0",
  [anon_sym_pextrw] = "pextrw",
  [anon_sym_ucomiss] = "ucomiss",
  [anon_sym_shufps] = "shufps",
  [anon_sym_addsd] = "addsd",
  [anon_sym_paddq] = "paddq",
  [anon_sym_psubq] = "psubq",
  [anon_sym_pshuflw] = "pshuflw",
  [anon_sym_pmuludq] = "pmuludq",
  [anon_sym_pshufd] = "pshufd",
  [anon_sym_minsd] = "minsd",
  [anon_sym_pshufhw] = "pshufhw",
  [anon_sym_mfence] = "mfence",
  [anon_sym_maxsd] = "maxsd",
  [anon_sym_ucomisd] = "ucomisd",
  [anon_sym_shufpd] = "shufpd",
  [anon_sym_pslldq] = "pslldq",
  [anon_sym_unpckhpd] = "unpckhpd",
  [anon_sym_psrldq] = "psrldq",
  [anon_sym_palignr] = "palignr",
  [anon_sym_pshufb] = "pshufb",
  [anon_sym_pmaddubsw] = "pmaddubsw",
  [anon_sym_pinsrb] = "pinsrb",
  [anon_sym_pblendw] = "pblendw",
  [anon_sym_pextrq] = "pextrq",
  [anon_sym_blendvps] = "blendvps",
  [anon_sym_pextrb] = "pextrb",
  [anon_sym_pinsrd] = "pinsrd",
  [anon_sym_femms] = "femms",
  [anon_sym_f] = "f",
  [aux_sym_operand_token1] = "operand_token1",
  [anon_sym_LT] = "<",
  [aux_sym_operand_token2] = "operand_token2",
  [anon_sym_GT] = ">",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_immediateOperand_token1] = "immediateOperand_token1",
  [anon_sym_PERCENTss] = "%ss",
  [anon_sym_PERCENTcs] = "%cs",
  [anon_sym_PERCENTds] = "%ds",
  [anon_sym_PERCENTes] = "%es",
  [anon_sym_PERCENTfs] = "%fs",
  [anon_sym_PERCENTgs] = "%gs",
  [anon_sym_PERCENTrax] = "%rax",
  [anon_sym_PERCENTrbx] = "%rbx",
  [anon_sym_PERCENTrcx] = "%rcx",
  [anon_sym_PERCENTrdx] = "%rdx",
  [anon_sym_PERCENTrsi] = "%rsi",
  [anon_sym_PERCENTrdi] = "%rdi",
  [anon_sym_PERCENTrbp] = "%rbp",
  [anon_sym_PERCENTrsp] = "%rsp",
  [anon_sym_PERCENTr8] = "%r8",
  [anon_sym_PERCENTr9] = "%r9",
  [anon_sym_PERCENTr10] = "%r10",
  [anon_sym_PERCENTr11] = "%r11",
  [anon_sym_PERCENTr12] = "%r12",
  [anon_sym_PERCENTr13] = "%r13",
  [anon_sym_PERCENTr14] = "%r14",
  [anon_sym_PERCENTr15] = "%r15",
  [anon_sym_PERCENTeax] = "%eax",
  [anon_sym_PERCENTecx] = "%ecx",
  [anon_sym_PERCENTedx] = "%edx",
  [anon_sym_PERCENTebx] = "%ebx",
  [anon_sym_PERCENTesi] = "%esi",
  [anon_sym_PERCENTedi] = "%edi",
  [anon_sym_PERCENTebp] = "%ebp",
  [anon_sym_PERCENTesp] = "%esp",
  [anon_sym_PERCENTr8d] = "%r8d",
  [anon_sym_PERCENTr9d] = "%r9d",
  [anon_sym_PERCENTr10d] = "%r10d",
  [anon_sym_PERCENTr11d] = "%r11d",
  [anon_sym_PERCENTr12d] = "%r12d",
  [anon_sym_PERCENTr13d] = "%r13d",
  [anon_sym_PERCENTr14d] = "%r14d",
  [anon_sym_PERCENTr15d] = "%r15d",
  [anon_sym_PERCENTax] = "%ax",
  [anon_sym_PERCENTcx] = "%cx",
  [anon_sym_PERCENTdx] = "%dx",
  [anon_sym_PERCENTbx] = "%bx",
  [anon_sym_PERCENTsi] = "%si",
  [anon_sym_PERCENTdi] = "%di",
  [anon_sym_PERCENTsp] = "%sp",
  [anon_sym_PERCENTbp] = "%bp",
  [anon_sym_PERCENTr8w] = "%r8w",
  [anon_sym_PERCENTr9w] = "%r9w",
  [anon_sym_PERCENTr10w] = "%r10w",
  [anon_sym_PERCENTr11w] = "%r11w",
  [anon_sym_PERCENTr12w] = "%r12w",
  [anon_sym_PERCENTr13w] = "%r13w",
  [anon_sym_PERCENTr14w] = "%r14w",
  [anon_sym_PERCENTr15w] = "%r15w",
  [anon_sym_PERCENTal] = "%al",
  [anon_sym_PERCENTcl] = "%cl",
  [anon_sym_PERCENTdl] = "%dl",
  [anon_sym_PERCENTbl] = "%bl",
  [anon_sym_PERCENTsil] = "%sil",
  [anon_sym_PERCENTdil] = "%dil",
  [anon_sym_PERCENTspl] = "%spl",
  [anon_sym_PERCENTbpl] = "%bpl",
  [anon_sym_PERCENTr8b] = "%r8b",
  [anon_sym_PERCENTr9b] = "%r9b",
  [anon_sym_PERCENTr10b] = "%r10b",
  [anon_sym_PERCENTr11b] = "%r11b",
  [anon_sym_PERCENTr12b] = "%r12b",
  [anon_sym_PERCENTr13b] = "%r13b",
  [anon_sym_PERCENTr14b] = "%r14b",
  [anon_sym_PERCENTr15b] = "%r15b",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [aux_sym_memoryIndirectOperand_token1] = "memoryIndirectOperand_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_4] = "4",
  [anon_sym_8] = "8",
  [anon_sym_movsq] = "movsq",
  [anon_sym_cmpsb] = "cmpsb",
  [anon_sym_cmpxchg] = "cmpxchg",
  [anon_sym_movsl] = "movsl",
  [anon_sym_callq] = "callq",
  [anon_sym_ja] = "ja",
  [anon_sym_jae] = "jae",
  [anon_sym_jb] = "jb",
  [anon_sym_jbe] = "jbe",
  [anon_sym_je] = "je",
  [anon_sym_jg] = "jg",
  [anon_sym_jge] = "jge",
  [anon_sym_jl] = "jl",
  [anon_sym_jle] = "jle",
  [anon_sym_jmp] = "jmp",
  [anon_sym_jmpq] = "jmpq",
  [anon_sym_jne] = "jne",
  [anon_sym_jno] = "jno",
  [anon_sym_jns] = "jns",
  [anon_sym_jo] = "jo",
  [anon_sym_jp] = "jp",
  [anon_sym_jrcxz] = "jrcxz",
  [anon_sym_js] = "js",
  [anon_sym_notrack] = "notrack",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENTcr0] = "%cr0",
  [anon_sym_PERCENTcr2] = "%cr2",
  [anon_sym_PERCENTcr3] = "%cr3",
  [anon_sym_PERCENTcr4] = "%cr4",
  [anon_sym_PERCENTrip] = "%rip",
  [anon_sym_PERCENTeip] = "%eip",
  [anon_sym_PERCENTip] = "%ip",
  [anon_sym_PERCENTst] = "%st",
  [anon_sym_PERCENT] = "%",
  [aux_sym_otherFnOperands_token1] = "otherFnOperands_token1",
  [sym_prog] = "prog",
  [sym__line] = "_line",
  [sym_address] = "address",
  [sym_comment] = "comment",
  [sym_instruction] = "instruction",
  [sym_opcode] = "opcode",
  [sym_BinaryArithmeticOpcode] = "BinaryArithmeticOpcode",
  [sym_BitAndByteOpcode] = "BitAndByteOpcode",
  [sym_CuriousOpcode] = "CuriousOpcode",
  [sym_DataTransferOpcode] = "DataTransferOpcode",
  [sym_IOOpcode] = "IOOpcode",
  [sym_LogicalOpcode] = "LogicalOpcode",
  [sym_MiscellaneousOpcode] = "MiscellaneousOpcode",
  [sym_PackUnpackOpcode] = "PackUnpackOpcode",
  [sym_ShiftAndRotateOpcode] = "ShiftAndRotateOpcode",
  [sym_StackOpcode] = "StackOpcode",
  [sym_StringOpcode] = "StringOpcode",
  [sym_AccessRegisterOpcode] = "AccessRegisterOpcode",
  [sym_ToBeClassifiedOpcode] = "ToBeClassifiedOpcode",
  [sym_operand] = "operand",
  [sym_immediateOperand] = "immediateOperand",
  [sym_registerOperand] = "registerOperand",
  [sym_segmentRegisterOperand] = "segmentRegisterOperand",
  [sym_generalRegisterOperand] = "generalRegisterOperand",
  [sym_generalRegister64Bits] = "generalRegister64Bits",
  [sym_generalRegister32Bits] = "generalRegister32Bits",
  [sym_generalRegister16Bits] = "generalRegister16Bits",
  [sym_generalRegister8Bits] = "generalRegister8Bits",
  [sym_memoryOperand] = "memoryOperand",
  [sym_memoryScalaredIndexedOperand] = "memoryScalaredIndexedOperand",
  [sym_memorySegmentBaseOperand] = "memorySegmentBaseOperand",
  [sym_memoryIndirectOperand] = "memoryIndirectOperand",
  [sym_offset] = "offset",
  [sym_base] = "base",
  [sym_index] = "index",
  [sym_scale] = "scale",
  [sym_memoryAbsoluteOperand] = "memoryAbsoluteOperand",
  [sym_someOpcode] = "someOpcode",
  [sym_callq] = "callq",
  [sym_callqOpcode] = "callqOpcode",
  [sym_fnOperand] = "fnOperand",
  [sym_indirectOperands] = "indirectOperands",
  [sym_controlRegisterOperand] = "controlRegisterOperand",
  [sym_instructionRegisterOperand] = "instructionRegisterOperand",
  [sym_floatRegisterOperand] = "floatRegisterOperand",
  [sym_otherRegisterOperand] = "otherRegisterOperand",
  [sym_otherFnOperands] = "otherFnOperands",
  [aux_sym_prog_repeat1] = "prog_repeat1",
  [aux_sym__line_repeat1] = "_line_repeat1",
  [aux_sym_address_repeat1] = "address_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_operand_repeat1] = "operand_repeat1",
  [aux_sym_operand_repeat2] = "operand_repeat2",
  [aux_sym_immediateOperand_repeat1] = "immediateOperand_repeat1",
  [aux_sym_memoryIndirectOperand_repeat1] = "memoryIndirectOperand_repeat1",
  [aux_sym_callq_repeat1] = "callq_repeat1",
  [aux_sym_otherFnOperands_repeat1] = "otherFnOperands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_address_token1] = aux_sym_address_token1,
  [sym_two_bytes] = sym_two_bytes,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym__line_break] = sym__line_break,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_] = anon_sym_,
  [anon_sym_adc] = anon_sym_adc,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_addq] = anon_sym_addq,
  [anon_sym_addl] = anon_sym_addl,
  [anon_sym_addss] = anon_sym_addss,
  [anon_sym_addw] = anon_sym_addw,
  [anon_sym_addb] = anon_sym_addb,
  [anon_sym_cmp] = anon_sym_cmp,
  [anon_sym_cmpb] = anon_sym_cmpb,
  [anon_sym_cmpw] = anon_sym_cmpw,
  [anon_sym_cmpl] = anon_sym_cmpl,
  [anon_sym_cmpq] = anon_sym_cmpq,
  [anon_sym_comiss] = anon_sym_comiss,
  [anon_sym_comisd] = anon_sym_comisd,
  [anon_sym_inc] = anon_sym_inc,
  [anon_sym_incl] = anon_sym_incl,
  [anon_sym_dec] = anon_sym_dec,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_divq] = anon_sym_divq,
  [anon_sym_divl] = anon_sym_divl,
  [anon_sym_divss] = anon_sym_divss,
  [anon_sym_divsd] = anon_sym_divsd,
  [anon_sym_idiv] = anon_sym_idiv,
  [anon_sym_idivl] = anon_sym_idivl,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_subq] = anon_sym_subq,
  [anon_sym_subl] = anon_sym_subl,
  [anon_sym_subss] = anon_sym_subss,
  [anon_sym_subw] = anon_sym_subw,
  [anon_sym_subb] = anon_sym_subb,
  [anon_sym_subsd] = anon_sym_subsd,
  [anon_sym_subpd] = anon_sym_subpd,
  [anon_sym_sbb] = anon_sym_sbb,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_mulq] = anon_sym_mulq,
  [anon_sym_mull] = anon_sym_mull,
  [anon_sym_mulss] = anon_sym_mulss,
  [anon_sym_mulw] = anon_sym_mulw,
  [anon_sym_mulb] = anon_sym_mulb,
  [anon_sym_mulsd] = anon_sym_mulsd,
  [anon_sym_mulx] = anon_sym_mulx,
  [anon_sym_imul] = anon_sym_imul,
  [anon_sym_neg] = anon_sym_neg,
  [anon_sym_negl] = anon_sym_negl,
  [anon_sym_negq] = anon_sym_negq,
  [anon_sym_fmulp] = anon_sym_fmulp,
  [anon_sym_vpclmulhqlqdq] = anon_sym_vpclmulhqlqdq,
  [anon_sym_pclmullqlqdq] = anon_sym_pclmullqlqdq,
  [anon_sym_pclmullqhqdq] = anon_sym_pclmullqhqdq,
  [anon_sym_vpclmullqhqdq] = anon_sym_vpclmullqhqdq,
  [anon_sym_vpclmulhqhqdq] = anon_sym_vpclmulhqhqdq,
  [anon_sym_pclmulhqhqdq] = anon_sym_pclmulhqhqdq,
  [anon_sym_vpclmullqlqdq] = anon_sym_vpclmullqlqdq,
  [anon_sym_bsf] = anon_sym_bsf,
  [anon_sym_bsr] = anon_sym_bsr,
  [anon_sym_bts] = anon_sym_bts,
  [anon_sym_bt] = anon_sym_bt,
  [anon_sym_btr] = anon_sym_btr,
  [anon_sym_btl] = anon_sym_btl,
  [anon_sym_setne] = anon_sym_setne,
  [anon_sym_setb] = anon_sym_setb,
  [anon_sym_sete] = anon_sym_sete,
  [anon_sym_setbe] = anon_sym_setbe,
  [anon_sym_seta] = anon_sym_seta,
  [anon_sym_setge] = anon_sym_setge,
  [anon_sym_setae] = anon_sym_setae,
  [anon_sym_setl] = anon_sym_setl,
  [anon_sym_setle] = anon_sym_setle,
  [anon_sym_setg] = anon_sym_setg,
  [anon_sym_seto] = anon_sym_seto,
  [anon_sym_setnp] = anon_sym_setnp,
  [anon_sym_setp] = anon_sym_setp,
  [anon_sym_setns] = anon_sym_setns,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_testb] = anon_sym_testb,
  [anon_sym_testl] = anon_sym_testl,
  [anon_sym_knotw] = anon_sym_knotw,
  [anon_sym_vpcmpltud] = anon_sym_vpcmpltud,
  [anon_sym_gs] = anon_sym_gs,
  [anon_sym_re] = anon_sym_re,
  [anon_sym_ss] = anon_sym_ss,
  [anon_sym_leaveq] = anon_sym_leaveq,
  [anon_sym_retq] = anon_sym_retq,
  [anon_sym_bswap] = anon_sym_bswap,
  [anon_sym_cbtw] = anon_sym_cbtw,
  [anon_sym_cltd] = anon_sym_cltd,
  [anon_sym_cltq] = anon_sym_cltq,
  [anon_sym_cmovbe] = anon_sym_cmovbe,
  [anon_sym_cmovl] = anon_sym_cmovl,
  [anon_sym_cmovae] = anon_sym_cmovae,
  [anon_sym_cmovo] = anon_sym_cmovo,
  [anon_sym_cmovne] = anon_sym_cmovne,
  [anon_sym_cmovns] = anon_sym_cmovns,
  [anon_sym_cmovg] = anon_sym_cmovg,
  [anon_sym_cmovp] = anon_sym_cmovp,
  [anon_sym_cmove] = anon_sym_cmove,
  [anon_sym_cmovge] = anon_sym_cmovge,
  [anon_sym_cmovb] = anon_sym_cmovb,
  [anon_sym_cmova] = anon_sym_cmova,
  [anon_sym_cmovle] = anon_sym_cmovle,
  [anon_sym_cmovs] = anon_sym_cmovs,
  [anon_sym_cwtl] = anon_sym_cwtl,
  [anon_sym_cwtd] = anon_sym_cwtd,
  [anon_sym_cqto] = anon_sym_cqto,
  [anon_sym_cvttsd2si] = anon_sym_cvttsd2si,
  [anon_sym_cvtss2sd] = anon_sym_cvtss2sd,
  [anon_sym_cvttss2si] = anon_sym_cvttss2si,
  [anon_sym_cvtsi2sd] = anon_sym_cvtsi2sd,
  [anon_sym_cvtsi2ss] = anon_sym_cvtsi2ss,
  [anon_sym_cvtsi2sdq] = anon_sym_cvtsi2sdq,
  [anon_sym_cvtsi2sdl] = anon_sym_cvtsi2sdl,
  [anon_sym_cvtsd2ss] = anon_sym_cvtsd2ss,
  [anon_sym_cvtsi2ssl] = anon_sym_cvtsi2ssl,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_movw] = anon_sym_movw,
  [anon_sym_movl] = anon_sym_movl,
  [anon_sym_movq] = anon_sym_movq,
  [anon_sym_movb] = anon_sym_movb,
  [anon_sym_movabs] = anon_sym_movabs,
  [anon_sym_movsbw] = anon_sym_movsbw,
  [anon_sym_movsbq] = anon_sym_movsbq,
  [anon_sym_movsbl] = anon_sym_movsbl,
  [anon_sym_movswl] = anon_sym_movswl,
  [anon_sym_movswq] = anon_sym_movswq,
  [anon_sym_movzbw] = anon_sym_movzbw,
  [anon_sym_movzbq] = anon_sym_movzbq,
  [anon_sym_movzbl] = anon_sym_movzbl,
  [anon_sym_movzwl] = anon_sym_movzwl,
  [anon_sym_movaps] = anon_sym_movaps,
  [anon_sym_movhlps] = anon_sym_movhlps,
  [anon_sym_movss] = anon_sym_movss,
  [anon_sym_movups] = anon_sym_movups,
  [anon_sym_movsd] = anon_sym_movsd,
  [anon_sym_movd] = anon_sym_movd,
  [anon_sym_movhps] = anon_sym_movhps,
  [anon_sym_movdqa] = anon_sym_movdqa,
  [anon_sym_movbe] = anon_sym_movbe,
  [anon_sym_movapd] = anon_sym_movapd,
  [anon_sym_movdqu] = anon_sym_movdqu,
  [anon_sym_xchg] = anon_sym_xchg,
  [anon_sym_fildl] = anon_sym_fildl,
  [anon_sym_fldt] = anon_sym_fldt,
  [anon_sym_fstpl] = anon_sym_fstpl,
  [anon_sym_insb] = anon_sym_insb,
  [anon_sym_insl] = anon_sym_insl,
  [anon_sym_outsb] = anon_sym_outsb,
  [anon_sym_outsl] = anon_sym_outsl,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_orq] = anon_sym_orq,
  [anon_sym_orl] = anon_sym_orl,
  [anon_sym_orb] = anon_sym_orb,
  [anon_sym_orw] = anon_sym_orw,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_xorl] = anon_sym_xorl,
  [anon_sym_xorw] = anon_sym_xorw,
  [anon_sym_xorps] = anon_sym_xorps,
  [anon_sym_xorpd] = anon_sym_xorpd,
  [anon_sym_vxorps] = anon_sym_vxorps,
  [anon_sym_vpxord] = anon_sym_vpxord,
  [anon_sym_vpxor] = anon_sym_vpxor,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_andq] = anon_sym_andq,
  [anon_sym_andl] = anon_sym_andl,
  [anon_sym_andw] = anon_sym_andw,
  [anon_sym_andb] = anon_sym_andb,
  [anon_sym_andn] = anon_sym_andn,
  [anon_sym_andpd] = anon_sym_andpd,
  [anon_sym_pand] = anon_sym_pand,
  [anon_sym_pandn] = anon_sym_pandn,
  [anon_sym_andps] = anon_sym_andps,
  [anon_sym_vpand] = anon_sym_vpand,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_notl] = anon_sym_notl,
  [anon_sym_notw] = anon_sym_notw,
  [anon_sym_cpuid] = anon_sym_cpuid,
  [anon_sym_lea] = anon_sym_lea,
  [anon_sym_popcnt] = anon_sym_popcnt,
  [anon_sym_nop] = anon_sym_nop,
  [anon_sym_nopl] = anon_sym_nopl,
  [anon_sym_nopw] = anon_sym_nopw,
  [anon_sym_ud2] = anon_sym_ud2,
  [anon_sym_data16] = anon_sym_data16,
  [anon_sym_sha1rnds4] = anon_sym_sha1rnds4,
  [anon_sym_addr32] = anon_sym_addr32,
  [anon_sym_sha1msg1] = anon_sym_sha1msg1,
  [anon_sym_sha1msg2] = anon_sym_sha1msg2,
  [anon_sym_sha1nexte] = anon_sym_sha1nexte,
  [anon_sym_endbr64] = anon_sym_endbr64,
  [sym_OperatingSystemSupportOpcode] = sym_OperatingSystemSupportOpcode,
  [anon_sym_packuswb] = anon_sym_packuswb,
  [anon_sym_punpckhbw] = anon_sym_punpckhbw,
  [anon_sym_punpckhdq] = anon_sym_punpckhdq,
  [anon_sym_punpckhwd] = anon_sym_punpckhwd,
  [anon_sym_punpcklbw] = anon_sym_punpcklbw,
  [anon_sym_punpckldq] = anon_sym_punpckldq,
  [anon_sym_punpcklwd] = anon_sym_punpcklwd,
  [anon_sym_vpunpcklwd] = anon_sym_vpunpcklwd,
  [anon_sym_vpunpckldq] = anon_sym_vpunpckldq,
  [anon_sym_punpcklqdq] = anon_sym_punpcklqdq,
  [anon_sym_punpckhqdq] = anon_sym_punpckhqdq,
  [anon_sym_vpunpckhqdq] = anon_sym_vpunpckhqdq,
  [anon_sym_vpunpckhdq] = anon_sym_vpunpckhdq,
  [anon_sym_vpunpcklqdq] = anon_sym_vpunpcklqdq,
  [anon_sym_vpunpckhwd] = anon_sym_vpunpckhwd,
  [anon_sym_rol] = anon_sym_rol,
  [anon_sym_ror] = anon_sym_ror,
  [anon_sym_sar] = anon_sym_sar,
  [anon_sym_sarl] = anon_sym_sarl,
  [anon_sym_sarx] = anon_sym_sarx,
  [anon_sym_shl] = anon_sym_shl,
  [anon_sym_shll] = anon_sym_shll,
  [anon_sym_shld] = anon_sym_shld,
  [anon_sym_shlx] = anon_sym_shlx,
  [anon_sym_shlq] = anon_sym_shlq,
  [anon_sym_shr] = anon_sym_shr,
  [anon_sym_shrq] = anon_sym_shrq,
  [anon_sym_shrd] = anon_sym_shrd,
  [anon_sym_shrl] = anon_sym_shrl,
  [anon_sym_shrx] = anon_sym_shrx,
  [anon_sym_vprord] = anon_sym_vprord,
  [anon_sym_vprorq] = anon_sym_vprorq,
  [anon_sym_rorl] = anon_sym_rorl,
  [anon_sym_roll] = anon_sym_roll,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pushq] = anon_sym_pushq,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_movslq] = anon_sym_movslq,
  [anon_sym_movsb] = anon_sym_movsb,
  [anon_sym_rep] = anon_sym_rep,
  [anon_sym_repz] = anon_sym_repz,
  [anon_sym_repnz] = anon_sym_repnz,
  [anon_sym_rex] = anon_sym_rex,
  [anon_sym_rex_DOTWB] = anon_sym_rex_DOTWB,
  [anon_sym_rex_DOTWRB] = anon_sym_rex_DOTWRB,
  [anon_sym_rex_DOTRXB] = anon_sym_rex_DOTRXB,
  [anon_sym_rex_DOTB] = anon_sym_rex_DOTB,
  [anon_sym_rex_DOTWRXB] = anon_sym_rex_DOTWRXB,
  [anon_sym_rex_DOTXB] = anon_sym_rex_DOTXB,
  [anon_sym_rex_DOTW] = anon_sym_rex_DOTW,
  [anon_sym_rex_DOTRB] = anon_sym_rex_DOTRB,
  [anon_sym_xgetbv] = anon_sym_xgetbv,
  [anon_sym_fs] = anon_sym_fs,
  [anon_sym_kmovw] = anon_sym_kmovw,
  [anon_sym_adcx] = anon_sym_adcx,
  [anon_sym_adox] = anon_sym_adox,
  [anon_sym_aesdec] = anon_sym_aesdec,
  [anon_sym_aesdeclast] = anon_sym_aesdeclast,
  [anon_sym_aesenc] = anon_sym_aesenc,
  [anon_sym_aesenclast] = anon_sym_aesenclast,
  [anon_sym_vaesenc] = anon_sym_vaesenc,
  [anon_sym_vaesenclast] = anon_sym_vaesenclast,
  [anon_sym_aeskeygenassist] = anon_sym_aeskeygenassist,
  [anon_sym_vblendps] = anon_sym_vblendps,
  [anon_sym_vblendvps] = anon_sym_vblendvps,
  [anon_sym_vcvtusi2sd] = anon_sym_vcvtusi2sd,
  [anon_sym_vdivsd] = anon_sym_vdivsd,
  [anon_sym_vmovaps] = anon_sym_vmovaps,
  [anon_sym_vmovapd] = anon_sym_vmovapd,
  [anon_sym_vmovss] = anon_sym_vmovss,
  [anon_sym_vmovdqu] = anon_sym_vmovdqu,
  [anon_sym_vmovdqu64] = anon_sym_vmovdqu64,
  [anon_sym_vmovdqu32] = anon_sym_vmovdqu32,
  [anon_sym_vmovdqa] = anon_sym_vmovdqa,
  [anon_sym_vmovdqa32] = anon_sym_vmovdqa32,
  [anon_sym_vmovdqa64] = anon_sym_vmovdqa64,
  [anon_sym_vmovq] = anon_sym_vmovq,
  [anon_sym_vmovups] = anon_sym_vmovups,
  [anon_sym_vmovd] = anon_sym_vmovd,
  [anon_sym_vmovsd] = anon_sym_vmovsd,
  [anon_sym_vmulsd] = anon_sym_vmulsd,
  [anon_sym_vpackusdw] = anon_sym_vpackusdw,
  [anon_sym_vpaddd] = anon_sym_vpaddd,
  [anon_sym_vpaddb] = anon_sym_vpaddb,
  [anon_sym_vpaddq] = anon_sym_vpaddq,
  [anon_sym_vpaddw] = anon_sym_vpaddw,
  [anon_sym_vpalignr] = anon_sym_vpalignr,
  [anon_sym_vpcmpgtd] = anon_sym_vpcmpgtd,
  [anon_sym_vpextrw] = anon_sym_vpextrw,
  [anon_sym_vpinsrw] = anon_sym_vpinsrw,
  [anon_sym_vpinsrd] = anon_sym_vpinsrd,
  [anon_sym_vpinsrq] = anon_sym_vpinsrq,
  [anon_sym_vpinsrb] = anon_sym_vpinsrb,
  [anon_sym_vpmaddubsw] = anon_sym_vpmaddubsw,
  [anon_sym_vpmaddwd] = anon_sym_vpmaddwd,
  [anon_sym_vpmullw] = anon_sym_vpmullw,
  [anon_sym_vpmuludq] = anon_sym_vpmuludq,
  [anon_sym_vpor] = anon_sym_vpor,
  [anon_sym_vpshufb] = anon_sym_vpshufb,
  [anon_sym_vpshufd] = anon_sym_vpshufd,
  [anon_sym_vpslldq] = anon_sym_vpslldq,
  [anon_sym_vpslld] = anon_sym_vpslld,
  [anon_sym_vpsllq] = anon_sym_vpsllq,
  [anon_sym_vpsllw] = anon_sym_vpsllw,
  [anon_sym_vpsrldq] = anon_sym_vpsrldq,
  [anon_sym_vpsrld] = anon_sym_vpsrld,
  [anon_sym_vpsrlq] = anon_sym_vpsrlq,
  [anon_sym_vpsrlw] = anon_sym_vpsrlw,
  [anon_sym_vpsubusw] = anon_sym_vpsubusw,
  [anon_sym_vpsubq] = anon_sym_vpsubq,
  [anon_sym_vpsubd] = anon_sym_vpsubd,
  [anon_sym_vpsubw] = anon_sym_vpsubw,
  [anon_sym_vshufps] = anon_sym_vshufps,
  [anon_sym_vsubsd] = anon_sym_vsubsd,
  [anon_sym_vucomisd] = anon_sym_vucomisd,
  [anon_sym_vucomiss] = anon_sym_vucomiss,
  [anon_sym_vunpckhpd] = anon_sym_vunpckhpd,
  [anon_sym_vunpckhps] = anon_sym_vunpckhps,
  [anon_sym_vunpcklpd] = anon_sym_vunpcklpd,
  [anon_sym_vunpcklps] = anon_sym_vunpcklps,
  [anon_sym_vbroadcastss] = anon_sym_vbroadcastss,
  [anon_sym_vinsertf128] = anon_sym_vinsertf128,
  [anon_sym_vperm2f128] = anon_sym_vperm2f128,
  [anon_sym_vzeroall] = anon_sym_vzeroall,
  [anon_sym_vzeroupper] = anon_sym_vzeroupper,
  [anon_sym_vshufi32x4] = anon_sym_vshufi32x4,
  [anon_sym_vshufi64x2] = anon_sym_vshufi64x2,
  [anon_sym_vpblendmd] = anon_sym_vpblendmd,
  [anon_sym_vextracti128] = anon_sym_vextracti128,
  [anon_sym_vextracti32x4] = anon_sym_vextracti32x4,
  [anon_sym_vinserti128] = anon_sym_vinserti128,
  [anon_sym_vinserti32x4] = anon_sym_vinserti32x4,
  [anon_sym_vinserti64x4] = anon_sym_vinserti64x4,
  [anon_sym_vpblendd] = anon_sym_vpblendd,
  [anon_sym_vpbroadcastq] = anon_sym_vpbroadcastq,
  [anon_sym_vpbroadcastd] = anon_sym_vpbroadcastd,
  [anon_sym_vbroadcasti128] = anon_sym_vbroadcasti128,
  [anon_sym_vbroadcasti32x4] = anon_sym_vbroadcasti32x4,
  [anon_sym_vperm2i128] = anon_sym_vperm2i128,
  [anon_sym_vpermd] = anon_sym_vpermd,
  [anon_sym_vpermq] = anon_sym_vpermq,
  [anon_sym_vpermt2d] = anon_sym_vpermt2d,
  [anon_sym_vpermi2d] = anon_sym_vpermi2d,
  [anon_sym_tzcnt] = anon_sym_tzcnt,
  [anon_sym_rorx] = anon_sym_rorx,
  [anon_sym_psubd] = anon_sym_psubd,
  [anon_sym_pmaddwd] = anon_sym_pmaddwd,
  [anon_sym_pxor] = anon_sym_pxor,
  [anon_sym_psrad] = anon_sym_psrad,
  [anon_sym_pslld] = anon_sym_pslld,
  [anon_sym_pcmpgtd] = anon_sym_pcmpgtd,
  [anon_sym_pcmpeqd] = anon_sym_pcmpeqd,
  [anon_sym_por] = anon_sym_por,
  [anon_sym_paddw] = anon_sym_paddw,
  [anon_sym_psubusw] = anon_sym_psubusw,
  [anon_sym_pcmpeqb] = anon_sym_pcmpeqb,
  [anon_sym_psubusb] = anon_sym_psubusb,
  [anon_sym_psrld] = anon_sym_psrld,
  [anon_sym_psrlw] = anon_sym_psrlw,
  [anon_sym_psllq] = anon_sym_psllq,
  [anon_sym_paddd] = anon_sym_paddd,
  [anon_sym_psrlq] = anon_sym_psrlq,
  [anon_sym_psubb] = anon_sym_psubb,
  [anon_sym_maxss] = anon_sym_maxss,
  [anon_sym_pmovmskb] = anon_sym_pmovmskb,
  [anon_sym_pinsrw] = anon_sym_pinsrw,
  [anon_sym_minss] = anon_sym_minss,
  [anon_sym_prefetcht1] = anon_sym_prefetcht1,
  [anon_sym_prefetcht0] = anon_sym_prefetcht0,
  [anon_sym_pextrw] = anon_sym_pextrw,
  [anon_sym_ucomiss] = anon_sym_ucomiss,
  [anon_sym_shufps] = anon_sym_shufps,
  [anon_sym_addsd] = anon_sym_addsd,
  [anon_sym_paddq] = anon_sym_paddq,
  [anon_sym_psubq] = anon_sym_psubq,
  [anon_sym_pshuflw] = anon_sym_pshuflw,
  [anon_sym_pmuludq] = anon_sym_pmuludq,
  [anon_sym_pshufd] = anon_sym_pshufd,
  [anon_sym_minsd] = anon_sym_minsd,
  [anon_sym_pshufhw] = anon_sym_pshufhw,
  [anon_sym_mfence] = anon_sym_mfence,
  [anon_sym_maxsd] = anon_sym_maxsd,
  [anon_sym_ucomisd] = anon_sym_ucomisd,
  [anon_sym_shufpd] = anon_sym_shufpd,
  [anon_sym_pslldq] = anon_sym_pslldq,
  [anon_sym_unpckhpd] = anon_sym_unpckhpd,
  [anon_sym_psrldq] = anon_sym_psrldq,
  [anon_sym_palignr] = anon_sym_palignr,
  [anon_sym_pshufb] = anon_sym_pshufb,
  [anon_sym_pmaddubsw] = anon_sym_pmaddubsw,
  [anon_sym_pinsrb] = anon_sym_pinsrb,
  [anon_sym_pblendw] = anon_sym_pblendw,
  [anon_sym_pextrq] = anon_sym_pextrq,
  [anon_sym_blendvps] = anon_sym_blendvps,
  [anon_sym_pextrb] = anon_sym_pextrb,
  [anon_sym_pinsrd] = anon_sym_pinsrd,
  [anon_sym_femms] = anon_sym_femms,
  [anon_sym_f] = anon_sym_f,
  [aux_sym_operand_token1] = aux_sym_operand_token1,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_operand_token2] = aux_sym_operand_token2,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_immediateOperand_token1] = aux_sym_immediateOperand_token1,
  [anon_sym_PERCENTss] = anon_sym_PERCENTss,
  [anon_sym_PERCENTcs] = anon_sym_PERCENTcs,
  [anon_sym_PERCENTds] = anon_sym_PERCENTds,
  [anon_sym_PERCENTes] = anon_sym_PERCENTes,
  [anon_sym_PERCENTfs] = anon_sym_PERCENTfs,
  [anon_sym_PERCENTgs] = anon_sym_PERCENTgs,
  [anon_sym_PERCENTrax] = anon_sym_PERCENTrax,
  [anon_sym_PERCENTrbx] = anon_sym_PERCENTrbx,
  [anon_sym_PERCENTrcx] = anon_sym_PERCENTrcx,
  [anon_sym_PERCENTrdx] = anon_sym_PERCENTrdx,
  [anon_sym_PERCENTrsi] = anon_sym_PERCENTrsi,
  [anon_sym_PERCENTrdi] = anon_sym_PERCENTrdi,
  [anon_sym_PERCENTrbp] = anon_sym_PERCENTrbp,
  [anon_sym_PERCENTrsp] = anon_sym_PERCENTrsp,
  [anon_sym_PERCENTr8] = anon_sym_PERCENTr8,
  [anon_sym_PERCENTr9] = anon_sym_PERCENTr9,
  [anon_sym_PERCENTr10] = anon_sym_PERCENTr10,
  [anon_sym_PERCENTr11] = anon_sym_PERCENTr11,
  [anon_sym_PERCENTr12] = anon_sym_PERCENTr12,
  [anon_sym_PERCENTr13] = anon_sym_PERCENTr13,
  [anon_sym_PERCENTr14] = anon_sym_PERCENTr14,
  [anon_sym_PERCENTr15] = anon_sym_PERCENTr15,
  [anon_sym_PERCENTeax] = anon_sym_PERCENTeax,
  [anon_sym_PERCENTecx] = anon_sym_PERCENTecx,
  [anon_sym_PERCENTedx] = anon_sym_PERCENTedx,
  [anon_sym_PERCENTebx] = anon_sym_PERCENTebx,
  [anon_sym_PERCENTesi] = anon_sym_PERCENTesi,
  [anon_sym_PERCENTedi] = anon_sym_PERCENTedi,
  [anon_sym_PERCENTebp] = anon_sym_PERCENTebp,
  [anon_sym_PERCENTesp] = anon_sym_PERCENTesp,
  [anon_sym_PERCENTr8d] = anon_sym_PERCENTr8d,
  [anon_sym_PERCENTr9d] = anon_sym_PERCENTr9d,
  [anon_sym_PERCENTr10d] = anon_sym_PERCENTr10d,
  [anon_sym_PERCENTr11d] = anon_sym_PERCENTr11d,
  [anon_sym_PERCENTr12d] = anon_sym_PERCENTr12d,
  [anon_sym_PERCENTr13d] = anon_sym_PERCENTr13d,
  [anon_sym_PERCENTr14d] = anon_sym_PERCENTr14d,
  [anon_sym_PERCENTr15d] = anon_sym_PERCENTr15d,
  [anon_sym_PERCENTax] = anon_sym_PERCENTax,
  [anon_sym_PERCENTcx] = anon_sym_PERCENTcx,
  [anon_sym_PERCENTdx] = anon_sym_PERCENTdx,
  [anon_sym_PERCENTbx] = anon_sym_PERCENTbx,
  [anon_sym_PERCENTsi] = anon_sym_PERCENTsi,
  [anon_sym_PERCENTdi] = anon_sym_PERCENTdi,
  [anon_sym_PERCENTsp] = anon_sym_PERCENTsp,
  [anon_sym_PERCENTbp] = anon_sym_PERCENTbp,
  [anon_sym_PERCENTr8w] = anon_sym_PERCENTr8w,
  [anon_sym_PERCENTr9w] = anon_sym_PERCENTr9w,
  [anon_sym_PERCENTr10w] = anon_sym_PERCENTr10w,
  [anon_sym_PERCENTr11w] = anon_sym_PERCENTr11w,
  [anon_sym_PERCENTr12w] = anon_sym_PERCENTr12w,
  [anon_sym_PERCENTr13w] = anon_sym_PERCENTr13w,
  [anon_sym_PERCENTr14w] = anon_sym_PERCENTr14w,
  [anon_sym_PERCENTr15w] = anon_sym_PERCENTr15w,
  [anon_sym_PERCENTal] = anon_sym_PERCENTal,
  [anon_sym_PERCENTcl] = anon_sym_PERCENTcl,
  [anon_sym_PERCENTdl] = anon_sym_PERCENTdl,
  [anon_sym_PERCENTbl] = anon_sym_PERCENTbl,
  [anon_sym_PERCENTsil] = anon_sym_PERCENTsil,
  [anon_sym_PERCENTdil] = anon_sym_PERCENTdil,
  [anon_sym_PERCENTspl] = anon_sym_PERCENTspl,
  [anon_sym_PERCENTbpl] = anon_sym_PERCENTbpl,
  [anon_sym_PERCENTr8b] = anon_sym_PERCENTr8b,
  [anon_sym_PERCENTr9b] = anon_sym_PERCENTr9b,
  [anon_sym_PERCENTr10b] = anon_sym_PERCENTr10b,
  [anon_sym_PERCENTr11b] = anon_sym_PERCENTr11b,
  [anon_sym_PERCENTr12b] = anon_sym_PERCENTr12b,
  [anon_sym_PERCENTr13b] = anon_sym_PERCENTr13b,
  [anon_sym_PERCENTr14b] = anon_sym_PERCENTr14b,
  [anon_sym_PERCENTr15b] = anon_sym_PERCENTr15b,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_memoryIndirectOperand_token1] = aux_sym_memoryIndirectOperand_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_movsq] = anon_sym_movsq,
  [anon_sym_cmpsb] = anon_sym_cmpsb,
  [anon_sym_cmpxchg] = anon_sym_cmpxchg,
  [anon_sym_movsl] = anon_sym_movsl,
  [anon_sym_callq] = anon_sym_callq,
  [anon_sym_ja] = anon_sym_ja,
  [anon_sym_jae] = anon_sym_jae,
  [anon_sym_jb] = anon_sym_jb,
  [anon_sym_jbe] = anon_sym_jbe,
  [anon_sym_je] = anon_sym_je,
  [anon_sym_jg] = anon_sym_jg,
  [anon_sym_jge] = anon_sym_jge,
  [anon_sym_jl] = anon_sym_jl,
  [anon_sym_jle] = anon_sym_jle,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_jmpq] = anon_sym_jmpq,
  [anon_sym_jne] = anon_sym_jne,
  [anon_sym_jno] = anon_sym_jno,
  [anon_sym_jns] = anon_sym_jns,
  [anon_sym_jo] = anon_sym_jo,
  [anon_sym_jp] = anon_sym_jp,
  [anon_sym_jrcxz] = anon_sym_jrcxz,
  [anon_sym_js] = anon_sym_js,
  [anon_sym_notrack] = anon_sym_notrack,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENTcr0] = anon_sym_PERCENTcr0,
  [anon_sym_PERCENTcr2] = anon_sym_PERCENTcr2,
  [anon_sym_PERCENTcr3] = anon_sym_PERCENTcr3,
  [anon_sym_PERCENTcr4] = anon_sym_PERCENTcr4,
  [anon_sym_PERCENTrip] = anon_sym_PERCENTrip,
  [anon_sym_PERCENTeip] = anon_sym_PERCENTeip,
  [anon_sym_PERCENTip] = anon_sym_PERCENTip,
  [anon_sym_PERCENTst] = anon_sym_PERCENTst,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_otherFnOperands_token1] = aux_sym_otherFnOperands_token1,
  [sym_prog] = sym_prog,
  [sym__line] = sym__line,
  [sym_address] = sym_address,
  [sym_comment] = sym_comment,
  [sym_instruction] = sym_instruction,
  [sym_opcode] = sym_opcode,
  [sym_BinaryArithmeticOpcode] = sym_BinaryArithmeticOpcode,
  [sym_BitAndByteOpcode] = sym_BitAndByteOpcode,
  [sym_CuriousOpcode] = sym_CuriousOpcode,
  [sym_DataTransferOpcode] = sym_DataTransferOpcode,
  [sym_IOOpcode] = sym_IOOpcode,
  [sym_LogicalOpcode] = sym_LogicalOpcode,
  [sym_MiscellaneousOpcode] = sym_MiscellaneousOpcode,
  [sym_PackUnpackOpcode] = sym_PackUnpackOpcode,
  [sym_ShiftAndRotateOpcode] = sym_ShiftAndRotateOpcode,
  [sym_StackOpcode] = sym_StackOpcode,
  [sym_StringOpcode] = sym_StringOpcode,
  [sym_AccessRegisterOpcode] = sym_AccessRegisterOpcode,
  [sym_ToBeClassifiedOpcode] = sym_ToBeClassifiedOpcode,
  [sym_operand] = sym_operand,
  [sym_immediateOperand] = sym_immediateOperand,
  [sym_registerOperand] = sym_registerOperand,
  [sym_segmentRegisterOperand] = sym_segmentRegisterOperand,
  [sym_generalRegisterOperand] = sym_generalRegisterOperand,
  [sym_generalRegister64Bits] = sym_generalRegister64Bits,
  [sym_generalRegister32Bits] = sym_generalRegister32Bits,
  [sym_generalRegister16Bits] = sym_generalRegister16Bits,
  [sym_generalRegister8Bits] = sym_generalRegister8Bits,
  [sym_memoryOperand] = sym_memoryOperand,
  [sym_memoryScalaredIndexedOperand] = sym_memoryScalaredIndexedOperand,
  [sym_memorySegmentBaseOperand] = sym_memorySegmentBaseOperand,
  [sym_memoryIndirectOperand] = sym_memoryIndirectOperand,
  [sym_offset] = sym_offset,
  [sym_base] = sym_base,
  [sym_index] = sym_index,
  [sym_scale] = sym_scale,
  [sym_memoryAbsoluteOperand] = sym_memoryAbsoluteOperand,
  [sym_someOpcode] = sym_someOpcode,
  [sym_callq] = sym_callq,
  [sym_callqOpcode] = sym_callqOpcode,
  [sym_fnOperand] = sym_fnOperand,
  [sym_indirectOperands] = sym_indirectOperands,
  [sym_controlRegisterOperand] = sym_controlRegisterOperand,
  [sym_instructionRegisterOperand] = sym_instructionRegisterOperand,
  [sym_floatRegisterOperand] = sym_floatRegisterOperand,
  [sym_otherRegisterOperand] = sym_otherRegisterOperand,
  [sym_otherFnOperands] = sym_otherFnOperands,
  [aux_sym_prog_repeat1] = aux_sym_prog_repeat1,
  [aux_sym__line_repeat1] = aux_sym__line_repeat1,
  [aux_sym_address_repeat1] = aux_sym_address_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_operand_repeat1] = aux_sym_operand_repeat1,
  [aux_sym_operand_repeat2] = aux_sym_operand_repeat2,
  [aux_sym_immediateOperand_repeat1] = aux_sym_immediateOperand_repeat1,
  [aux_sym_memoryIndirectOperand_repeat1] = aux_sym_memoryIndirectOperand_repeat1,
  [aux_sym_callq_repeat1] = aux_sym_callq_repeat1,
  [aux_sym_otherFnOperands_repeat1] = aux_sym_otherFnOperands_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_address_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_two_bytes] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comiss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comisd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idivl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mulx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
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
  [anon_sym_fmulp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpclmulhqlqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pclmullqlqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pclmullqhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpclmullqhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpclmulhqhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pclmulhqhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpclmullqlqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bsf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bsr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_testb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_testl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_knotw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpcmpltud] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_re] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leaveq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_retq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bswap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cbtw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cltd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cltq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmova] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmovs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cwtl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cwtd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cqto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvttsd2si] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtss2sd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvttss2si] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsi2sd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsi2ss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsi2sdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsi2sdl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsd2ss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cvtsi2ssl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movabs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsbw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsbq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsbl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movswl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movswq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movzbw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movzbq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movzbl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movzwl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movhlps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movups] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movhps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movdqa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movapd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movdqu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xchg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fildl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fldt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fstpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_insl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_outsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorpd] = {
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
  [anon_sym_vpxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pandn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cpuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lea] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popcnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nopl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nopw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ud2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha1rnds4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addr32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha1msg1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha1msg2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha1nexte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endbr64] = {
    .visible = true,
    .named = false,
  },
  [sym_OperatingSystemSupportOpcode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_packuswb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckhbw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckhdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckhwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpcklbw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpcklwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpcklwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpckldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpcklqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_punpckhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpckhqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpckhdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpcklqdq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpunpckhwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sarl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sarx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shlx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shlq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shrx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vprord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vprorq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rorl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movslq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repnz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTWB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTWRB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTRXB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTWRXB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTXB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rex_DOTRB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xgetbv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kmovw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adcx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aesdec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aesdeclast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aesenc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aesenclast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vaesenc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vaesenclast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aeskeygenassist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vblendps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vblendvps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vcvtusi2sd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vdivsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovaps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovapd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqu64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqu32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqa32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovdqa64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovups] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmovsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmulsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpackusdw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpaddd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpaddb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpaddq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpaddw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpalignr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpcmpgtd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpextrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpinsrw] = {
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
  [anon_sym_vpmaddubsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpmaddwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpmullw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpmuludq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpshufb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpshufd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpslldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpslld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsllq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsllw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsrldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsrld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsrlq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsrlw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsubusw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsubq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsubd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpsubw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vshufps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vsubsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vucomisd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vucomiss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vunpckhpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vunpckhps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vunpcklpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vunpcklps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vbroadcastss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vinsertf128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vperm2f128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vzeroall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vzeroupper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vshufi32x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vshufi64x2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpblendmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vextracti128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vextracti32x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vinserti128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vinserti32x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vinserti64x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpblendd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpbroadcastq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpbroadcastd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vbroadcasti128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vbroadcasti32x4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vperm2i128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpermd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpermq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpermt2d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpermi2d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tzcnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rorx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmaddwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pslld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcmpgtd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcmpeqd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_por] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paddw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubusw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcmpeqb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubusb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrld] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrlw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psllq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paddd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrlq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maxss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmovmskb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinsrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefetcht1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefetcht0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pextrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ucomiss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shufps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paddq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshuflw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmuludq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshufd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshufhw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mfence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maxsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ucomisd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shufpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pslldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unpckhpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_palignr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshufb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmaddubsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinsrb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pblendw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pextrq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blendvps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pextrb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinsrd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_femms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operand_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operand_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_immediateOperand_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENTss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTcs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTfs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTgs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrbx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrcx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrdx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrsi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrdi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrbp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrsp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTeax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTecx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTedx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTebx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTesi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTedi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTebp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTesp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr8d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr9d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr10d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr11d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr12d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr13d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr14d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr15d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTcx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTbx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTsi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTsp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTbp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr8w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr9w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr10w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr11w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr12w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr13w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr14w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr15w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTcl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTbl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTsil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTspl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTbpl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr8b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr9b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr10b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr11b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr12b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr13b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr14b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr15b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_memoryIndirectOperand_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpsb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmpxchg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_callq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ja] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jae] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jbe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_je] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmpq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jno] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jo] = {
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
  [anon_sym_js] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notrack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTcr0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTcr2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTcr3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTcr4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTeip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_otherFnOperands_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_prog] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_BinaryArithmeticOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_BitAndByteOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_CuriousOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_DataTransferOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_IOOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_LogicalOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_MiscellaneousOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_PackUnpackOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ShiftAndRotateOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_StackOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_StringOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_AccessRegisterOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ToBeClassifiedOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_immediateOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_registerOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_segmentRegisterOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_generalRegisterOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_generalRegister64Bits] = {
    .visible = true,
    .named = true,
  },
  [sym_generalRegister32Bits] = {
    .visible = true,
    .named = true,
  },
  [sym_generalRegister16Bits] = {
    .visible = true,
    .named = true,
  },
  [sym_generalRegister8Bits] = {
    .visible = true,
    .named = true,
  },
  [sym_memoryOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_memoryScalaredIndexedOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_memorySegmentBaseOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_memoryIndirectOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_base] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_scale] = {
    .visible = true,
    .named = true,
  },
  [sym_memoryAbsoluteOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_someOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_callq] = {
    .visible = true,
    .named = true,
  },
  [sym_callqOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_fnOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_indirectOperands] = {
    .visible = true,
    .named = true,
  },
  [sym_controlRegisterOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_instructionRegisterOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_floatRegisterOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_otherRegisterOperand] = {
    .visible = true,
    .named = true,
  },
  [sym_otherFnOperands] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_prog_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_address_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operand_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immediateOperand_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_memoryIndirectOperand_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_callq_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_otherFnOperands_repeat1] = {
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

static inline bool aux_sym_otherFnOperands_token1_character_set_1(int32_t c) {
  return (c < 'A'
    ? (c < '.'
      ? (c < '('
        ? (c >= '$' && c <= '&')
        : c <= ',')
      : (c <= '.' || (c >= '0' && c <= '>')))
    : (c <= '[' || (c < 'a'
      ? (c < '_'
        ? c == ']'
        : c <= '_')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym_otherFnOperands_token1_character_set_2(int32_t c) {
  return (c < 'A'
    ? (c < '+'
      ? (c < '('
        ? (c >= '$' && c <= '&')
        : c <= ')')
      : (c <= '+' || (c < '0'
        ? c == '.'
        : c <= '>')))
    : (c <= '[' || (c < 'a'
      ? (c < '_'
        ? c == ']'
        : c <= '_')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym_otherFnOperands_token1_character_set_3(int32_t c) {
  return (c < '>'
    ? (c < '+'
      ? (c < '('
        ? (c >= '$' && c <= '&')
        : c <= ')')
      : (c <= '+' || (c < '0'
        ? c == '.'
        : c <= '<')))
    : (c <= '>' || (c < '_'
      ? (c < ']'
        ? (c >= 'A' && c <= '[')
        : c <= ']')
      : (c <= '_' || (c < '}'
        ? (c >= 'a' && c <= '{')
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(665);
      if (lookahead == '#') ADVANCE(676);
      if (lookahead == '$') ADVANCE(1097);
      if (lookahead == '%') ADVANCE(1212);
      if (lookahead == '(') ADVANCE(1170);
      if (lookahead == ')') ADVANCE(1171);
      if (lookahead == '*') ADVANCE(1203);
      if (lookahead == '+') ADVANCE(1095);
      if (lookahead == ',') ADVANCE(680);
      if (lookahead == '-') ADVANCE(1169);
      if (lookahead == '.') ADVANCE(1098);
      if (lookahead == '/') ADVANCE(1098);
      if (lookahead == '1') ADVANCE(1175);
      if (lookahead == '2') ADVANCE(1176);
      if (lookahead == '4') ADVANCE(1177);
      if (lookahead == '8') ADVANCE(1178);
      if (lookahead == ':') ADVANCE(666);
      if (lookahead == '<') ADVANCE(1094);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '>') ADVANCE(1096);
      if (lookahead == 'f') ADVANCE(1071);
      if (lookahead == '{') ADVANCE(1172);
      if (lookahead == '}') ADVANCE(1174);
      if (lookahead == '&' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(1214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(667);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1073);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(678);
      if (lookahead == '#') ADVANCE(676);
      if (lookahead == '$') ADVANCE(1097);
      if (lookahead == '%') ADVANCE(1213);
      if (lookahead == '(') ADVANCE(1170);
      if (lookahead == '-') ADVANCE(1169);
      if (lookahead == '<') ADVANCE(1094);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(1083);
      if (lookahead == 'b') ADVANCE(1089);
      if (lookahead == 'c') ADVANCE(1074);
      if (lookahead == 'd') ADVANCE(1080);
      if (lookahead == 'e') ADVANCE(1091);
      if (lookahead == 'f') ADVANCE(1072);
      if (lookahead == 'g') ADVANCE(1093);
      if (lookahead == 'i') ADVANCE(1084);
      if (lookahead == 'j') ADVANCE(1075);
      if (lookahead == 'k') ADVANCE(1090);
      if (lookahead == 'l') ADVANCE(1085);
      if (lookahead == 'm') ADVANCE(1079);
      if (lookahead == 'n') ADVANCE(1086);
      if (lookahead == 'o') ADVANCE(1092);
      if (lookahead == 'p') ADVANCE(1076);
      if (lookahead == 'r') ADVANCE(1087);
      if (lookahead == 's') ADVANCE(1077);
      if (lookahead == 't') ADVANCE(1088);
      if (lookahead == 'u') ADVANCE(1082);
      if (lookahead == 'v') ADVANCE(1078);
      if (lookahead == 'x') ADVANCE(1081);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1073);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(678);
      if (lookahead == '#') ADVANCE(676);
      if (lookahead == '*') ADVANCE(1203);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'j') ADVANCE(1215);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (aux_sym_otherFnOperands_token1_character_set_1(lookahead)) ADVANCE(1214);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(678);
      if (lookahead == '#') ADVANCE(676);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == 'g') ADVANCE(513);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'j') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(150);
      if (lookahead == 'v') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == ' ') ADVANCE(681);
      if (lookahead == '#') ADVANCE(676);
      if (lookahead == '(') ADVANCE(1170);
      if (lookahead == ')') ADVANCE(1171);
      if (lookahead == ',') ADVANCE(680);
      if (lookahead == ':') ADVANCE(666);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '{') ADVANCE(1172);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1073);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == ' ') ADVANCE(681);
      if (lookahead == '#') ADVANCE(676);
      if (lookahead == ',') ADVANCE(680);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(5)
      if (aux_sym_otherFnOperands_token1_character_set_2(lookahead)) ADVANCE(1214);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == ' ') ADVANCE(681);
      if (lookahead == '#') ADVANCE(676);
      if (lookahead == ',') ADVANCE(680);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1098);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead == '(') ADVANCE(1170);
      if (lookahead == ')') ADVANCE(1171);
      if (lookahead == ',') ADVANCE(680);
      if (lookahead == ':') ADVANCE(666);
      if (lookahead == '{') ADVANCE(1172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1073);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead == ',') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (aux_sym_otherFnOperands_token1_character_set_3(lookahead)) ADVANCE(1214);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(682);
      if (lookahead == ',') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1098);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(1213);
      if (lookahead == '(') ADVANCE(1170);
      if (lookahead == ')') ADVANCE(1171);
      if (lookahead == ',') ADVANCE(680);
      if (lookahead == '-') ADVANCE(1169);
      if (lookahead == '{') ADVANCE(1172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1073);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(1204);
      if (lookahead == '2') ADVANCE(1205);
      if (lookahead == '3') ADVANCE(1206);
      if (lookahead == '4') ADVANCE(1207);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(1115);
      if (lookahead == '1') ADVANCE(1116);
      if (lookahead == '2') ADVANCE(1117);
      if (lookahead == '3') ADVANCE(1118);
      if (lookahead == '4') ADVANCE(1119);
      if (lookahead == '5') ADVANCE(1120);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(1042);
      if (lookahead == '1') ADVANCE(1041);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(1175);
      if (lookahead == '2') ADVANCE(1176);
      if (lookahead == '4') ADVANCE(1177);
      if (lookahead == '8') ADVANCE(1178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '8') ADVANCE(1113);
      if (lookahead == '9') ADVANCE(1114);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'b') ADVANCE(428);
      if (lookahead == 'c') ADVANCE(645);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(385);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(869);
      if (lookahead == '2') ADVANCE(870);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(38);
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '3') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(865);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(868);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(288);
      if (lookahead == 'd') ADVANCE(1013);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'q') ADVANCE(1014);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(948);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(946);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(1000);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(649);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(650);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(652);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(654);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(562);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(549);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(210);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(211);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(536);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(538);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(556);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(563);
      END_STATE();
    case 49:
      if (lookahead == '3') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == '3') ADVANCE(37);
      if (lookahead == '6') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(872);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(867);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(949);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(945);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(999);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(1005);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(1006);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(1003);
      END_STATE();
    case 59:
      if (lookahead == '4') ADVANCE(1011);
      END_STATE();
    case 60:
      if (lookahead == '4') ADVANCE(655);
      END_STATE();
    case 61:
      if (lookahead == '4') ADVANCE(651);
      END_STATE();
    case 62:
      if (lookahead == '6') ADVANCE(866);
      END_STATE();
    case 63:
      if (lookahead == '6') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == '8') ADVANCE(996);
      END_STATE();
    case 65:
      if (lookahead == '8') ADVANCE(1012);
      END_STATE();
    case 66:
      if (lookahead == '8') ADVANCE(995);
      END_STATE();
    case 67:
      if (lookahead == '8') ADVANCE(1004);
      END_STATE();
    case 68:
      if (lookahead == '8') ADVANCE(1002);
      END_STATE();
    case 69:
      if (lookahead == '8') ADVANCE(1010);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(677);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(1096);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1095);
      END_STATE();
    case 73:
      if (lookahead == 'B') ADVANCE(920);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(923);
      if (lookahead == 'X') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'B') ADVANCE(924);
      if (lookahead == 'X') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(922);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(919);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(918);
      if (lookahead == 'X') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(921);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'b') ADVANCE(426);
      if (lookahead == 'c') ADVANCE(643);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 's') ADVANCE(1102);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(1184);
      if (lookahead == 'b') ADVANCE(1186);
      if (lookahead == 'e') ADVANCE(1188);
      if (lookahead == 'g') ADVANCE(1189);
      if (lookahead == 'l') ADVANCE(1191);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(1198);
      if (lookahead == 'p') ADVANCE(1199);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 's') ADVANCE(1201);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(375);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == 'x') ADVANCE(411);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 's') ADVANCE(764);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(860);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(894);
      if (lookahead == 'r') ADVANCE(899);
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead == 'b') ADVANCE(744);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == 'g') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(750);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(753);
      if (lookahead == 'p') ADVANCE(755);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(782);
      if (lookahead == 'b') ADVANCE(781);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == 'g') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(772);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(774);
      if (lookahead == 'p') ADVANCE(778);
      if (lookahead == 's') ADVANCE(784);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == 'u') ADVANCE(823);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(947);
      if (lookahead == 'u') ADVANCE(944);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead == 'b') ADVANCE(674);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(600);
      if (lookahead == 'q') ADVANCE(587);
      if (lookahead == 'v') ADVANCE(570);
      if (lookahead == 'w') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(668);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == 'i') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(668);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(623);
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'm') ADVANCE(418);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == 'u') ADVANCE(164);
      if (lookahead == 'x') ADVANCE(416);
      if (lookahead == 'z') ADVANCE(271);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(625);
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'b') ADVANCE(378);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(495);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 'u') ADVANCE(409);
      if (lookahead == 'x') ADVANCE(420);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == 'd') ADVANCE(952);
      if (lookahead == 'q') ADVANCE(950);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(451);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(557);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(355);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 111:
      if (lookahead == 'b') ADVANCE(716);
      END_STATE();
    case 112:
      if (lookahead == 'b') ADVANCE(708);
      END_STATE();
    case 113:
      if (lookahead == 'b') ADVANCE(828);
      if (lookahead == 'l') ADVANCE(829);
      END_STATE();
    case 114:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 115:
      if (lookahead == 'b') ADVANCE(1180);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(912);
      if (lookahead == 'd') ADVANCE(817);
      if (lookahead == 'l') ADVANCE(1182);
      if (lookahead == 'q') ADVANCE(1179);
      if (lookahead == 's') ADVANCE(815);
      if (lookahead == 'w') ADVANCE(356);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(912);
      if (lookahead == 'd') ADVANCE(817);
      if (lookahead == 'l') ADVANCE(461);
      if (lookahead == 's') ADVANCE(815);
      if (lookahead == 'w') ADVANCE(356);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(357);
      if (lookahead == 'w') ADVANCE(358);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(830);
      if (lookahead == 'l') ADVANCE(831);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(1036);
      if (lookahead == 'd') ADVANCE(1019);
      if (lookahead == 'q') ADVANCE(1048);
      if (lookahead == 'u') ADVANCE(530);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(198);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(1068);
      if (lookahead == 'q') ADVANCE(1066);
      if (lookahead == 'w') ADVANCE(1043);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(1064);
      if (lookahead == 'd') ADVANCE(1069);
      if (lookahead == 'w') ADVANCE(1039);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(1062);
      if (lookahead == 'd') ADVANCE(1051);
      if (lookahead == 'h') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(632);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(957);
      if (lookahead == 'd') ADVANCE(956);
      if (lookahead == 'q') ADVANCE(958);
      if (lookahead == 'w') ADVANCE(959);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(1029);
      if (lookahead == 'd') ADVANCE(1025);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(1030);
      if (lookahead == 'w') ADVANCE(1028);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(966);
      if (lookahead == 'd') ADVANCE(964);
      if (lookahead == 'q') ADVANCE(965);
      if (lookahead == 'w') ADVANCE(963);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(972);
      if (lookahead == 'd') ADVANCE(973);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(874);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(1038);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(502);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(620);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(637);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead == 'q') ADVANCE(235);
      if (lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(638);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'q') ADVANCE(236);
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(517);
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(545);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(548);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(553);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'g') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(683);
      if (lookahead == 'd') ADVANCE(684);
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(700);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(930);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(932);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(934);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(342);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(647);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(589);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(335);
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(845);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(769);
      if (lookahead == 'q') ADVANCE(770);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(786);
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(852);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(1046);
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(851);
      if (lookahead == 's') ADVANCE(854);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(859);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(705);
      if (lookahead == 's') ADVANCE(704);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(1055);
      if (lookahead == 's') ADVANCE(1037);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(1052);
      if (lookahead == 's') ADVANCE(1040);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead == 's') ADVANCE(720);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(1034);
      if (lookahead == 'q') ADVANCE(1047);
      if (lookahead == 'w') ADVANCE(1027);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(611);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(1023);
      if (lookahead == 'q') ADVANCE(1033);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(1022);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(1031);
      if (lookahead == 'q') ADVANCE(1035);
      if (lookahead == 'w') ADVANCE(1032);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(715);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(714);
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(855);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(841);
      if (lookahead == 's') ADVANCE(840);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(697);
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(822);
      if (lookahead == 's') ADVANCE(813);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(1057);
      if (lookahead == 's') ADVANCE(1045);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(940);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(953);
      if (lookahead == 's') ADVANCE(943);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(954);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(904);
      if (lookahead == 'q') ADVANCE(905);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(975);
      if (lookahead == 'q') ADVANCE(976);
      if (lookahead == 'w') ADVANCE(977);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(979);
      if (lookahead == 'q') ADVANCE(980);
      if (lookahead == 'w') ADVANCE(981);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(984);
      if (lookahead == 'q') ADVANCE(983);
      if (lookahead == 'u') ADVANCE(542);
      if (lookahead == 'w') ADVANCE(985);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(987);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(1024);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(1020);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(1044);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(942);
      if (lookahead == 's') ADVANCE(941);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(791);
      if (lookahead == 's') ADVANCE(792);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(789);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1059);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1007);
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(961);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1016);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1015);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(968);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(988);
      if (lookahead == 's') ADVANCE(989);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(877);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(880);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(1001);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(761);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(990);
      if (lookahead == 's') ADVANCE(991);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(992);
      if (lookahead == 's') ADVANCE(993);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(939);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(888);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(881);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(1009);
      if (lookahead == 'q') ADVANCE(1008);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(673);
      if (lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(668);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(630);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == 'k') ADVANCE(260);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(573);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(468);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(639);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead == 'q') ADVANCE(241);
      if (lookahead == 'w') ADVANCE(221);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 'q') ADVANCE(242);
      if (lookahead == 'w') ADVANCE(222);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(472);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(473);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(476);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(479);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(613);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead == 'o') ADVANCE(1196);
      if (lookahead == 's') ADVANCE(1197);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(754);
      if (lookahead == 's') ADVANCE(756);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead == 's') ADVANCE(776);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(1054);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(604);
      if (lookahead == 's') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(668);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'z') ADVANCE(151);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'g') ADVANCE(596);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 284:
      if (lookahead == 'f') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(738);
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 285:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 286:
      if (lookahead == 'f') ADVANCE(322);
      END_STATE();
    case 287:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 288:
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 289:
      if (lookahead == 'f') ADVANCE(441);
      END_STATE();
    case 290:
      if (lookahead == 'f') ADVANCE(278);
      END_STATE();
    case 291:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 292:
      if (lookahead == 'g') ADVANCE(726);
      END_STATE();
    case 293:
      if (lookahead == 'g') ADVANCE(824);
      END_STATE();
    case 294:
      if (lookahead == 'g') ADVANCE(1181);
      END_STATE();
    case 295:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 296:
      if (lookahead == 'g') ADVANCE(401);
      END_STATE();
    case 297:
      if (lookahead == 'g') ADVANCE(403);
      END_STATE();
    case 298:
      if (lookahead == 'g') ADVANCE(597);
      if (lookahead == 'l') ADVANCE(599);
      END_STATE();
    case 299:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 300:
      if (lookahead == 'h') ADVANCE(908);
      END_STATE();
    case 301:
      if (lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 302:
      if (lookahead == 'h') ADVANCE(601);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 303:
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 304:
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 305:
      if (lookahead == 'h') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 306:
      if (lookahead == 'h') ADVANCE(480);
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 307:
      if (lookahead == 'h') ADVANCE(481);
      END_STATE();
    case 308:
      if (lookahead == 'h') ADVANCE(452);
      END_STATE();
    case 309:
      if (lookahead == 'h') ADVANCE(577);
      END_STATE();
    case 310:
      if (lookahead == 'h') ADVANCE(602);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 311:
      if (lookahead == 'h') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 312:
      if (lookahead == 'h') ADVANCE(603);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 313:
      if (lookahead == 'h') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 314:
      if (lookahead == 'h') ADVANCE(484);
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 315:
      if (lookahead == 'h') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(487);
      END_STATE();
    case 316:
      if (lookahead == 'h') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(1142);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 's') ADVANCE(1101);
      if (lookahead == 'x') ADVANCE(1139);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(1141);
      if (lookahead == 'p') ADVANCE(1143);
      if (lookahead == 's') ADVANCE(1099);
      if (lookahead == 't') ADVANCE(1211);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(1126);
      if (lookahead == 'x') ADVANCE(1123);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(1110);
      if (lookahead == 'x') ADVANCE(1108);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(1109);
      if (lookahead == 'p') ADVANCE(1112);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(523);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(788);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(541);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 337:
      if (lookahead == 'k') ADVANCE(873);
      END_STATE();
    case 338:
      if (lookahead == 'k') ADVANCE(1202);
      END_STATE();
    case 339:
      if (lookahead == 'k') ADVANCE(303);
      END_STATE();
    case 340:
      if (lookahead == 'k') ADVANCE(308);
      END_STATE();
    case 341:
      if (lookahead == 'k') ADVANCE(313);
      END_STATE();
    case 342:
      if (lookahead == 'k') ADVANCE(608);
      END_STATE();
    case 343:
      if (lookahead == 'k') ADVANCE(305);
      END_STATE();
    case 344:
      if (lookahead == 'k') ADVANCE(131);
      END_STATE();
    case 345:
      if (lookahead == 'k') ADVANCE(614);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(1153);
      if (lookahead == 'x') ADVANCE(1137);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(1156);
      if (lookahead == 'p') ADVANCE(1144);
      if (lookahead == 'x') ADVANCE(1140);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(1100);
      if (lookahead == 'x') ADVANCE(1138);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(668);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(717);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(889);
      if (lookahead == 'r') ADVANCE(890);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(725);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(827);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 356:
      if (lookahead == 'l') ADVANCE(807);
      if (lookahead == 'q') ADVANCE(808);
      END_STATE();
    case 357:
      if (lookahead == 'l') ADVANCE(811);
      if (lookahead == 'q') ADVANCE(810);
      if (lookahead == 'w') ADVANCE(809);
      END_STATE();
    case 358:
      if (lookahead == 'l') ADVANCE(812);
      END_STATE();
    case 359:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(997);
      END_STATE();
    case 361:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 362:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 363:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 364:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(387);
      if (lookahead == 'm') ADVANCE(433);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(634);
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(552);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == 'm') ADVANCE(436);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 379:
      if (lookahead == 'm') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 380:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 381:
      if (lookahead == 'm') ADVANCE(330);
      END_STATE();
    case 382:
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'm') ADVANCE(516);
      END_STATE();
    case 384:
      if (lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 385:
      if (lookahead == 'm') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 386:
      if (lookahead == 'm') ADVANCE(331);
      END_STATE();
    case 387:
      if (lookahead == 'm') ADVANCE(607);
      END_STATE();
    case 388:
      if (lookahead == 'm') ADVANCE(332);
      END_STATE();
    case 389:
      if (lookahead == 'm') ADVANCE(612);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(668);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 392:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 393:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 394:
      if (lookahead == 'n') ADVANCE(540);
      END_STATE();
    case 395:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(499);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 's') ADVANCE(300);
      END_STATE();
    case 408:
      if (lookahead == 'n') ADVANCE(547);
      END_STATE();
    case 409:
      if (lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(787);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 'p') ADVANCE(690);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 'p') ADVANCE(691);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(621);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 424:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(1210);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(1127);
      if (lookahead == 'x') ADVANCE(1124);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(1209);
      END_STATE();
    case 428:
      if (lookahead == 'p') ADVANCE(1111);
      if (lookahead == 'x') ADVANCE(1106);
      END_STATE();
    case 429:
      if (lookahead == 'p') ADVANCE(1208);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(1193);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(862);
      if (lookahead == 't') ADVANCE(856);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(910);
      if (lookahead == 'r') ADVANCE(1026);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 435:
      if (lookahead == 'p') ADVANCE(729);
      END_STATE();
    case 436:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 437:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 441:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 442:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 443:
      if (lookahead == 'p') ADVANCE(456);
      END_STATE();
    case 444:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 445:
      if (lookahead == 'p') ADVANCE(519);
      END_STATE();
    case 446:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 447:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 448:
      if (lookahead == 'p') ADVANCE(520);
      END_STATE();
    case 449:
      if (lookahead == 'p') ADVANCE(457);
      END_STATE();
    case 450:
      if (lookahead == 'p') ADVANCE(521);
      END_STATE();
    case 451:
      if (lookahead == 'p') ADVANCE(522);
      END_STATE();
    case 452:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 453:
      if (lookahead == 'p') ADVANCE(524);
      END_STATE();
    case 454:
      if (lookahead == 'p') ADVANCE(526);
      if (lookahead == 'v') ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 456:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 457:
      if (lookahead == 'q') ADVANCE(1194);
      END_STATE();
    case 458:
      if (lookahead == 'q') ADVANCE(766);
      END_STATE();
    case 459:
      if (lookahead == 'q') ADVANCE(1183);
      END_STATE();
    case 460:
      if (lookahead == 'q') ADVANCE(765);
      END_STATE();
    case 461:
      if (lookahead == 'q') ADVANCE(911);
      END_STATE();
    case 462:
      if (lookahead == 'q') ADVANCE(126);
      END_STATE();
    case 463:
      if (lookahead == 'q') ADVANCE(1050);
      END_STATE();
    case 464:
      if (lookahead == 'q') ADVANCE(970);
      END_STATE();
    case 465:
      if (lookahead == 'q') ADVANCE(876);
      END_STATE();
    case 466:
      if (lookahead == 'q') ADVANCE(879);
      END_STATE();
    case 467:
      if (lookahead == 'q') ADVANCE(884);
      END_STATE();
    case 468:
      if (lookahead == 'q') ADVANCE(883);
      END_STATE();
    case 469:
      if (lookahead == 'q') ADVANCE(886);
      END_STATE();
    case 470:
      if (lookahead == 'q') ADVANCE(882);
      END_STATE();
    case 471:
      if (lookahead == 'q') ADVANCE(885);
      END_STATE();
    case 472:
      if (lookahead == 'q') ADVANCE(887);
      END_STATE();
    case 473:
      if (lookahead == 'q') ADVANCE(735);
      END_STATE();
    case 474:
      if (lookahead == 'q') ADVANCE(732);
      END_STATE();
    case 475:
      if (lookahead == 'q') ADVANCE(731);
      END_STATE();
    case 476:
      if (lookahead == 'q') ADVANCE(734);
      END_STATE();
    case 477:
      if (lookahead == 'q') ADVANCE(730);
      END_STATE();
    case 478:
      if (lookahead == 'q') ADVANCE(733);
      END_STATE();
    case 479:
      if (lookahead == 'q') ADVANCE(736);
      END_STATE();
    case 480:
      if (lookahead == 'q') ADVANCE(307);
      END_STATE();
    case 481:
      if (lookahead == 'q') ADVANCE(243);
      END_STATE();
    case 482:
      if (lookahead == 'q') ADVANCE(244);
      END_STATE();
    case 483:
      if (lookahead == 'q') ADVANCE(245);
      END_STATE();
    case 484:
      if (lookahead == 'q') ADVANCE(246);
      END_STATE();
    case 485:
      if (lookahead == 'q') ADVANCE(247);
      END_STATE();
    case 486:
      if (lookahead == 'q') ADVANCE(248);
      END_STATE();
    case 487:
      if (lookahead == 'q') ADVANCE(249);
      END_STATE();
    case 488:
      if (lookahead == 'q') ADVANCE(311);
      END_STATE();
    case 489:
      if (lookahead == 'q') ADVANCE(314);
      END_STATE();
    case 490:
      if (lookahead == 'q') ADVANCE(315);
      END_STATE();
    case 491:
      if (lookahead == 'r') ADVANCE(832);
      if (lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 492:
      if (lookahead == 'r') ADVANCE(891);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(1021);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(971);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(844);
      END_STATE();
    case 499:
      if (lookahead == 'r') ADVANCE(1061);
      END_STATE();
    case 500:
      if (lookahead == 'r') ADVANCE(960);
      END_STATE();
    case 501:
      if (lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 502:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 503:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 504:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead == 'x') ADVANCE(595);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(633);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 511:
      if (lookahead == 's') ADVANCE(1103);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(1104);
      END_STATE();
    case 513:
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 514:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 515:
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 516:
      if (lookahead == 's') ADVANCE(1070);
      END_STATE();
    case 517:
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(819);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(816);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(842);
      END_STATE();
    case 521:
      if (lookahead == 's') ADVANCE(814);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(951);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(986);
      END_STATE();
    case 524:
      if (lookahead == 's') ADVANCE(1067);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(795);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(937);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(938);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(994);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 530:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 534:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 546:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 547:
      if (lookahead == 's') ADVANCE(503);
      END_STATE();
    case 548:
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 549:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 550:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 551:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 552:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(580);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(581);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 560:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 561:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 562:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 563:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 564:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 565:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 566:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 567:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(826);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(1017);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(861);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(931);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(933);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(935);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(936);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(610);
      END_STATE();
    case 600:
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 601:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 602:
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 603:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 604:
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 605:
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 606:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 607:
      if (lookahead == 'u') ADVANCE(359);
      END_STATE();
    case 608:
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 609:
      if (lookahead == 'u') ADVANCE(534);
      END_STATE();
    case 610:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 611:
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(201);
      END_STATE();
    case 612:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 613:
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 614:
      if (lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 615:
      if (lookahead == 'v') ADVANCE(701);
      END_STATE();
    case 616:
      if (lookahead == 'v') ADVANCE(797);
      END_STATE();
    case 617:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 618:
      if (lookahead == 'v') ADVANCE(706);
      END_STATE();
    case 619:
      if (lookahead == 'v') ADVANCE(103);
      END_STATE();
    case 620:
      if (lookahead == 'v') ADVANCE(925);
      END_STATE();
    case 621:
      if (lookahead == 'v') ADVANCE(628);
      END_STATE();
    case 622:
      if (lookahead == 'v') ADVANCE(798);
      END_STATE();
    case 623:
      if (lookahead == 'v') ADVANCE(598);
      END_STATE();
    case 624:
      if (lookahead == 'v') ADVANCE(551);
      END_STATE();
    case 625:
      if (lookahead == 'v') ADVANCE(384);
      END_STATE();
    case 626:
      if (lookahead == 'v') ADVANCE(453);
      END_STATE();
    case 627:
      if (lookahead == 'w') ADVANCE(768);
      END_STATE();
    case 628:
      if (lookahead == 'w') ADVANCE(927);
      END_STATE();
    case 629:
      if (lookahead == 'w') ADVANCE(760);
      END_STATE();
    case 630:
      if (lookahead == 'w') ADVANCE(1065);
      END_STATE();
    case 631:
      if (lookahead == 'w') ADVANCE(1053);
      END_STATE();
    case 632:
      if (lookahead == 'w') ADVANCE(1049);
      END_STATE();
    case 633:
      if (lookahead == 'w') ADVANCE(962);
      END_STATE();
    case 634:
      if (lookahead == 'w') ADVANCE(969);
      END_STATE();
    case 635:
      if (lookahead == 'w') ADVANCE(982);
      END_STATE();
    case 636:
      if (lookahead == 'w') ADVANCE(1063);
      END_STATE();
    case 637:
      if (lookahead == 'w') ADVANCE(875);
      END_STATE();
    case 638:
      if (lookahead == 'w') ADVANCE(878);
      END_STATE();
    case 639:
      if (lookahead == 'w') ADVANCE(955);
      END_STATE();
    case 640:
      if (lookahead == 'w') ADVANCE(967);
      END_STATE();
    case 641:
      if (lookahead == 'w') ADVANCE(130);
      END_STATE();
    case 642:
      if (lookahead == 'x') ADVANCE(1121);
      END_STATE();
    case 643:
      if (lookahead == 'x') ADVANCE(1122);
      END_STATE();
    case 644:
      if (lookahead == 'x') ADVANCE(1105);
      END_STATE();
    case 645:
      if (lookahead == 'x') ADVANCE(1107);
      END_STATE();
    case 646:
      if (lookahead == 'x') ADVANCE(929);
      END_STATE();
    case 647:
      if (lookahead == 'x') ADVANCE(659);
      END_STATE();
    case 648:
      if (lookahead == 'x') ADVANCE(533);
      END_STATE();
    case 649:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 650:
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 651:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 652:
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 653:
      if (lookahead == 'x') ADVANCE(590);
      END_STATE();
    case 654:
      if (lookahead == 'x') ADVANCE(59);
      END_STATE();
    case 655:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 656:
      if (lookahead == 'x') ADVANCE(592);
      END_STATE();
    case 657:
      if (lookahead == 'x') ADVANCE(593);
      END_STATE();
    case 658:
      if (lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 659:
      if (lookahead == 'z') ADVANCE(1200);
      END_STATE();
    case 660:
      if (lookahead == 'z') ADVANCE(915);
      END_STATE();
    case 661:
      if (lookahead == '}') ADVANCE(1174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(661)
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1173);
      END_STATE();
    case 662:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(662)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1098);
      END_STATE();
    case 663:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(668);
      END_STATE();
    case 664:
      if (eof) ADVANCE(665);
      if (lookahead == '%') ADVANCE(1213);
      if (lookahead == '(') ADVANCE(1170);
      if (lookahead == ')') ADVANCE(1171);
      if (lookahead == ',') ADVANCE(680);
      if (lookahead == ':') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(664)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(667);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_address_token1);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_two_bytes);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 'c') ADVANCE(683);
      if (lookahead == 'd') ADVANCE(684);
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 'c') ADVANCE(700);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_two_bytes);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == ' ') ADVANCE(681);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == ' ') ADVANCE(681);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(682);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_adc);
      if (lookahead == 'x') ADVANCE(928);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'b') ADVANCE(689);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead == 'q') ADVANCE(685);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == 'w') ADVANCE(688);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_addq);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_addl);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_addss);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_addw);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_addb);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_cmp);
      if (lookahead == 'b') ADVANCE(692);
      if (lookahead == 'l') ADVANCE(694);
      if (lookahead == 'q') ADVANCE(695);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 'w') ADVANCE(693);
      if (lookahead == 'x') ADVANCE(160);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_cmp);
      if (lookahead == 'b') ADVANCE(692);
      if (lookahead == 'l') ADVANCE(694);
      if (lookahead == 'q') ADVANCE(695);
      if (lookahead == 'w') ADVANCE(693);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_cmpb);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_cmpw);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_cmpl);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_cmpq);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_comiss);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_comisd);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_inc);
      if (lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_incl);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == 'l') ADVANCE(703);
      if (lookahead == 'q') ADVANCE(702);
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_divq);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_divl);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_divss);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_divsd);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_idiv);
      if (lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_idivl);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == 'b') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(710);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == 'q') ADVANCE(709);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(712);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_subq);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_subl);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_subss);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_subw);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_subb);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_subsd);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_subpd);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_sbb);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'b') ADVANCE(722);
      if (lookahead == 'l') ADVANCE(719);
      if (lookahead == 'q') ADVANCE(718);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(721);
      if (lookahead == 'x') ADVANCE(724);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_mulq);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_mull);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_mulss);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_mulw);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_mulb);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_mulsd);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_mulx);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_imul);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_neg);
      if (lookahead == 'l') ADVANCE(727);
      if (lookahead == 'q') ADVANCE(728);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_negl);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_negq);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_fmulp);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_vpclmulhqlqdq);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_pclmullqlqdq);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_pclmullqhqdq);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_vpclmullqhqdq);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_vpclmulhqhqdq);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_pclmulhqhqdq);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_vpclmullqlqdq);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_bsf);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_bsr);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_bts);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_bt);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead == 'r') ADVANCE(741);
      if (lookahead == 's') ADVANCE(739);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_btr);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_btl);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_setne);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_setb);
      if (lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_sete);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_setbe);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_seta);
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_setge);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_setae);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_setl);
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_setle);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_setg);
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_seto);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_setnp);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_setp);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_setns);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == 'b') ADVANCE(758);
      if (lookahead == 'l') ADVANCE(759);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_testb);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_testl);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_knotw);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_vpcmpltud);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_re);
      if (lookahead == 'p') ADVANCE(913);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == 'x') ADVANCE(916);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_leaveq);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_retq);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_bswap);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_cbtw);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_cltd);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_cltq);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_cmovbe);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_cmovl);
      if (lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_cmovae);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_cmovo);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_cmovne);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_cmovns);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_cmovg);
      if (lookahead == 'e') ADVANCE(780);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_cmovp);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_cmove);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_cmovge);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_cmovb);
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_cmova);
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_cmovle);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_cmovs);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_cwtl);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_cwtd);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_cqto);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_cvttsd2si);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_cvtss2sd);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_cvttss2si);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_cvtsi2sd);
      if (lookahead == 'l') ADVANCE(794);
      if (lookahead == 'q') ADVANCE(793);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_cvtsi2ss);
      if (lookahead == 'l') ADVANCE(796);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdq);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdl);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_cvtsd2ss);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_cvtsi2ssl);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(802);
      if (lookahead == 'd') ADVANCE(818);
      if (lookahead == 'h') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(800);
      if (lookahead == 'q') ADVANCE(801);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(445);
      if (lookahead == 'w') ADVANCE(799);
      if (lookahead == 'z') ADVANCE(118);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(802);
      if (lookahead == 'd') ADVANCE(818);
      if (lookahead == 'h') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(800);
      if (lookahead == 'q') ADVANCE(801);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(445);
      if (lookahead == 'w') ADVANCE(799);
      if (lookahead == 'z') ADVANCE(118);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_movw);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_movl);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_movq);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_movb);
      if (lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_movabs);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_movsbw);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_movsbq);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_movsbl);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_movswl);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_movswq);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_movzbw);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_movzbq);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_movzbl);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_movzwl);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_movaps);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_movhlps);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_movss);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_movups);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_movsd);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_movd);
      if (lookahead == 'q') ADVANCE(87);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_movhps);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_movdqa);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_movbe);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_movapd);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_movdqu);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_xchg);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_fildl);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_fldt);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_fstpl);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_insb);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_insl);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_outsb);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_outsl);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'b') ADVANCE(835);
      if (lookahead == 'l') ADVANCE(834);
      if (lookahead == 'q') ADVANCE(833);
      if (lookahead == 'w') ADVANCE(836);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_orq);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_orl);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_orb);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_orw);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == 'p') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(839);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_xorl);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_xorw);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_xorps);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_xorpd);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_vxorps);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_vpxord);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_vpxor);
      if (lookahead == 'd') ADVANCE(843);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == 'b') ADVANCE(849);
      if (lookahead == 'l') ADVANCE(847);
      if (lookahead == 'n') ADVANCE(850);
      if (lookahead == 'p') ADVANCE(172);
      if (lookahead == 'q') ADVANCE(846);
      if (lookahead == 'w') ADVANCE(848);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_andq);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_andl);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_andw);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_andb);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_andn);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_andpd);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_pand);
      if (lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_pandn);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_andps);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_vpand);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'l') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(858);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_notl);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_notw);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_cpuid);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_lea);
      if (lookahead == 'v') ADVANCE(268);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_popcnt);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead == 'l') ADVANCE(863);
      if (lookahead == 'w') ADVANCE(864);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_nopl);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_nopw);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_ud2);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_data16);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_sha1rnds4);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_addr32);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_sha1msg1);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_sha1msg2);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_sha1nexte);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_endbr64);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_OperatingSystemSupportOpcode);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_packuswb);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_punpckhbw);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_punpckhdq);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_punpckhwd);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_punpcklbw);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_punpckldq);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_punpcklwd);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_vpunpcklwd);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_vpunpckldq);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_punpcklqdq);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_punpckhqdq);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_vpunpckhqdq);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_vpunpckhdq);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_vpunpcklqdq);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_vpunpckhwd);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_rol);
      if (lookahead == 'l') ADVANCE(907);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_ror);
      if (lookahead == 'l') ADVANCE(906);
      if (lookahead == 'x') ADVANCE(1018);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_sar);
      if (lookahead == 'l') ADVANCE(892);
      if (lookahead == 'x') ADVANCE(893);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_sarl);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_sarx);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == 'd') ADVANCE(896);
      if (lookahead == 'l') ADVANCE(895);
      if (lookahead == 'q') ADVANCE(898);
      if (lookahead == 'x') ADVANCE(897);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_shll);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_shld);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_shlx);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_shlq);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_shr);
      if (lookahead == 'd') ADVANCE(901);
      if (lookahead == 'l') ADVANCE(902);
      if (lookahead == 'q') ADVANCE(900);
      if (lookahead == 'x') ADVANCE(903);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_shrq);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_shrd);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_shrl);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_shrx);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_vprord);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_vprorq);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_rorl);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_roll);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'q') ADVANCE(909);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_pushq);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_movslq);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_movsb);
      if (lookahead == 'l') ADVANCE(806);
      if (lookahead == 'q') ADVANCE(805);
      if (lookahead == 'w') ADVANCE(804);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_rep);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead == 'z') ADVANCE(914);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_repz);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_repnz);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_rex);
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_rex_DOTWB);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRB);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_rex_DOTRXB);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_rex_DOTB);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRXB);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_rex_DOTXB);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_rex_DOTW);
      if (lookahead == 'B') ADVANCE(917);
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_rex_DOTRB);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_xgetbv);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_fs);
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_kmovw);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_adcx);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_adox);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_aesdec);
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_aesdeclast);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_aesenc);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_aesenclast);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_vaesenc);
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_vaesenclast);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_aeskeygenassist);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_vblendps);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_vblendvps);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_vcvtusi2sd);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_vdivsd);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_vmovaps);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_vmovapd);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_vmovss);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_vmovdqu);
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_vmovdqu64);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_vmovdqu32);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_vmovdqa);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_vmovdqa32);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_vmovdqa64);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_vmovq);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_vmovups);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_vmovd);
      if (lookahead == 'q') ADVANCE(88);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_vmovsd);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_vmulsd);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_vpackusdw);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_vpaddd);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_vpaddb);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_vpaddq);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_vpaddw);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_vpalignr);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_vpcmpgtd);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_vpextrw);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_vpinsrw);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_vpinsrd);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_vpinsrq);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_vpinsrb);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_vpmaddubsw);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_vpmaddwd);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_vpmullw);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_vpmuludq);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_vpor);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_vpshufb);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_vpshufd);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_vpslldq);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_vpslld);
      if (lookahead == 'q') ADVANCE(974);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_vpsllq);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_vpsllw);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_vpsrldq);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_vpsrld);
      if (lookahead == 'q') ADVANCE(978);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_vpsrlq);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_vpsrlw);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_vpsubusw);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_vpsubq);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_vpsubd);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_vpsubw);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_vshufps);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_vsubsd);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_vucomisd);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_vucomiss);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_vunpckhpd);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_vunpckhps);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_vunpcklpd);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_vunpcklps);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_vbroadcastss);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_vinsertf128);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_vperm2f128);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_vzeroall);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_vzeroupper);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_vshufi32x4);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_vshufi64x2);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_vpblendmd);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_vextracti128);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_vextracti32x4);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_vinserti128);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_vinserti32x4);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_vinserti64x4);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_vpblendd);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_vpbroadcastq);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_vpbroadcastd);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_vbroadcasti128);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_vbroadcasti32x4);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_vperm2i128);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_vpermd);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_vpermq);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_vpermt2d);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_vpermi2d);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_tzcnt);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_rorx);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_psubd);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_pmaddwd);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_pxor);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_psrad);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_pslld);
      if (lookahead == 'q') ADVANCE(1058);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_pcmpgtd);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_pcmpeqd);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_por);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_paddw);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_psubusw);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_pcmpeqb);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_psubusb);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_psrld);
      if (lookahead == 'q') ADVANCE(1060);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_psrlw);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_psllq);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_paddd);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_psrlq);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_psubb);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_maxss);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_pmovmskb);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_pinsrw);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_minss);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_prefetcht1);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_prefetcht0);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_pextrw);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_ucomiss);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_shufps);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_addsd);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_paddq);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_psubq);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_pshuflw);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_pmuludq);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_pshufd);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_minsd);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_pshufhw);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_mfence);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_maxsd);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_ucomisd);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_shufpd);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_pslldq);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_unpckhpd);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_psrldq);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_palignr);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_pshufb);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_pmaddubsw);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_pinsrb);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_pblendw);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_pextrq);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_blendvps);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_pextrb);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_pinsrd);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_femms);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(604);
      if (lookahead == 's') ADVANCE(926);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'b') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(600);
      if (lookahead == 'q') ADVANCE(587);
      if (lookahead == 'v') ADVANCE(570);
      if (lookahead == 'w') ADVANCE(571);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'a') ADVANCE(1184);
      if (lookahead == 'b') ADVANCE(1186);
      if (lookahead == 'e') ADVANCE(1188);
      if (lookahead == 'g') ADVANCE(1189);
      if (lookahead == 'l') ADVANCE(1191);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(1198);
      if (lookahead == 'p') ADVANCE(1199);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == 's') ADVANCE(1201);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(375);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(432);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == 'u') ADVANCE(407);
      if (lookahead == 'x') ADVANCE(411);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 's') ADVANCE(764);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == 'c') ADVANCE(623);
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'm') ADVANCE(418);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == 'u') ADVANCE(164);
      if (lookahead == 'x') ADVANCE(416);
      if (lookahead == 'z') ADVANCE(271);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 'o') ADVANCE(616);
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'a') ADVANCE(584);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'g') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 'm') ADVANCE(605);
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'z') ADVANCE(151);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(740);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'm') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'r') ADVANCE(832);
      if (lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_operand_token2);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_immediateOperand_token1);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_PERCENTss);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_PERCENTcs);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_PERCENTds);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_PERCENTes);
      if (lookahead == 'i') ADVANCE(1125);
      if (lookahead == 'p') ADVANCE(1128);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_PERCENTfs);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_PERCENTgs);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_PERCENTrax);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_PERCENTrbx);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_PERCENTrcx);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_PERCENTrdx);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_PERCENTrsi);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_PERCENTrdi);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_PERCENTrbp);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_PERCENTrsp);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_PERCENTr8);
      if (lookahead == 'b') ADVANCE(1161);
      if (lookahead == 'd') ADVANCE(1129);
      if (lookahead == 'w') ADVANCE(1145);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_PERCENTr9);
      if (lookahead == 'b') ADVANCE(1162);
      if (lookahead == 'd') ADVANCE(1130);
      if (lookahead == 'w') ADVANCE(1146);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_PERCENTr10);
      if (lookahead == 'b') ADVANCE(1163);
      if (lookahead == 'd') ADVANCE(1131);
      if (lookahead == 'w') ADVANCE(1147);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_PERCENTr11);
      if (lookahead == 'b') ADVANCE(1164);
      if (lookahead == 'd') ADVANCE(1132);
      if (lookahead == 'w') ADVANCE(1148);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_PERCENTr12);
      if (lookahead == 'b') ADVANCE(1165);
      if (lookahead == 'd') ADVANCE(1133);
      if (lookahead == 'w') ADVANCE(1149);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_PERCENTr13);
      if (lookahead == 'b') ADVANCE(1166);
      if (lookahead == 'd') ADVANCE(1134);
      if (lookahead == 'w') ADVANCE(1150);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_PERCENTr14);
      if (lookahead == 'b') ADVANCE(1167);
      if (lookahead == 'd') ADVANCE(1135);
      if (lookahead == 'w') ADVANCE(1151);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_PERCENTr15);
      if (lookahead == 'b') ADVANCE(1168);
      if (lookahead == 'd') ADVANCE(1136);
      if (lookahead == 'w') ADVANCE(1152);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_PERCENTeax);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_PERCENTecx);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_PERCENTedx);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_PERCENTebx);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_PERCENTesi);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_PERCENTedi);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_PERCENTebp);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_PERCENTesp);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_PERCENTr8d);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_PERCENTr9d);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_PERCENTr10d);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_PERCENTr11d);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_PERCENTr12d);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_PERCENTr13d);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_PERCENTr14d);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_PERCENTr15d);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_PERCENTax);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_PERCENTcx);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_PERCENTdx);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_PERCENTbx);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_PERCENTsi);
      if (lookahead == 'l') ADVANCE(1157);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_PERCENTdi);
      if (lookahead == 'l') ADVANCE(1158);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_PERCENTsp);
      if (lookahead == 'l') ADVANCE(1159);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_PERCENTbp);
      if (lookahead == 'l') ADVANCE(1160);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_PERCENTr8w);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_PERCENTr9w);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_PERCENTr10w);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_PERCENTr11w);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_PERCENTr12w);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_PERCENTr13w);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_PERCENTr14w);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_PERCENTr15w);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_PERCENTal);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_PERCENTcl);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_PERCENTdl);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_PERCENTbl);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_PERCENTsil);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_PERCENTdil);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_PERCENTspl);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_PERCENTbpl);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_PERCENTr8b);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_PERCENTr9b);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_PERCENTr10b);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_PERCENTr11b);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_PERCENTr12b);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_PERCENTr13b);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_PERCENTr14b);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_PERCENTr15b);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_memoryIndirectOperand_token1);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_movsq);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_cmpsb);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_cmpxchg);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_movsl);
      if (lookahead == 'q') ADVANCE(911);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_callq);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_ja);
      if (lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_jae);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_jb);
      if (lookahead == 'e') ADVANCE(1187);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_jbe);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_je);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_jg);
      if (lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_jge);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_jl);
      if (lookahead == 'e') ADVANCE(1192);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_jle);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (lookahead == 'q') ADVANCE(1194);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_jmpq);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_jne);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_jno);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_jns);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_jo);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_jp);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_jrcxz);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_notrack);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_PERCENTcr0);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_PERCENTcr2);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_PERCENTcr3);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_PERCENTcr4);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_PERCENTrip);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_PERCENTeip);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_PERCENTip);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_PERCENTst);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'a') ADVANCE(346);
      if (lookahead == 'b') ADVANCE(347);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(511);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_otherFnOperands_token1);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_otherFnOperands_token1);
      if (lookahead == 'm') ADVANCE(449);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 664},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 664},
  [28] = {.lex_state = 664},
  [29] = {.lex_state = 664},
  [30] = {.lex_state = 664},
  [31] = {.lex_state = 664},
  [32] = {.lex_state = 664},
  [33] = {.lex_state = 664},
  [34] = {.lex_state = 664},
  [35] = {.lex_state = 664},
  [36] = {.lex_state = 664},
  [37] = {.lex_state = 664},
  [38] = {.lex_state = 664},
  [39] = {.lex_state = 664},
  [40] = {.lex_state = 664},
  [41] = {.lex_state = 664},
  [42] = {.lex_state = 664},
  [43] = {.lex_state = 664},
  [44] = {.lex_state = 664},
  [45] = {.lex_state = 664},
  [46] = {.lex_state = 664},
  [47] = {.lex_state = 664},
  [48] = {.lex_state = 664},
  [49] = {.lex_state = 664},
  [50] = {.lex_state = 664},
  [51] = {.lex_state = 664},
  [52] = {.lex_state = 664},
  [53] = {.lex_state = 664},
  [54] = {.lex_state = 664},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 664},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 664},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 14},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 661},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 661},
  [164] = {.lex_state = 664},
  [165] = {.lex_state = 664},
  [166] = {.lex_state = 72},
  [167] = {.lex_state = 661},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 661},
  [170] = {.lex_state = 661},
  [171] = {.lex_state = 661},
  [172] = {.lex_state = 661},
  [173] = {.lex_state = 661},
  [174] = {.lex_state = 72},
  [175] = {.lex_state = 661},
  [176] = {.lex_state = 661},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 72},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 664},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 664},
  [201] = {.lex_state = 664},
  [202] = {.lex_state = 664},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 664},
  [205] = {.lex_state = 664},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 664},
  [209] = {.lex_state = 664},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 664},
  [213] = {.lex_state = 661},
  [214] = {.lex_state = 664},
  [215] = {.lex_state = 664},
  [216] = {.lex_state = 664},
  [217] = {.lex_state = 664},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 664},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 664},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 7},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 7},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 661},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 7},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 661},
  [256] = {.lex_state = 664},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 661},
  [260] = {.lex_state = 664},
  [261] = {.lex_state = 661},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 664},
  [264] = {.lex_state = 664},
  [265] = {.lex_state = 661},
  [266] = {.lex_state = 661},
  [267] = {.lex_state = 661},
  [268] = {.lex_state = 664},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 662},
  [271] = {.lex_state = 664},
  [272] = {.lex_state = 664},
  [273] = {.lex_state = 664},
  [274] = {.lex_state = 664},
  [275] = {.lex_state = 661},
  [276] = {.lex_state = 664},
  [277] = {.lex_state = 664},
  [278] = {.lex_state = 664},
  [279] = {.lex_state = 664},
  [280] = {.lex_state = 72},
  [281] = {.lex_state = 662},
  [282] = {.lex_state = 72},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 664},
  [285] = {.lex_state = 664},
  [286] = {.lex_state = 664},
  [287] = {.lex_state = 664},
  [288] = {.lex_state = 664},
  [289] = {.lex_state = 664},
  [290] = {.lex_state = 664},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 664},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 664},
  [295] = {.lex_state = 664},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 664},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 664},
  [305] = {.lex_state = 664},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 664},
  [310] = {.lex_state = 664},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 664},
  [313] = {.lex_state = 664},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 664},
  [316] = {.lex_state = 664},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 664},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 1},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 664},
  [328] = {.lex_state = 664},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_address_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [aux_sym_operand_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_operand_token2] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_immediateOperand_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_memoryIndirectOperand_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_otherFnOperands_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_prog] = STATE(296),
    [sym__line] = STATE(79),
    [sym_address] = STATE(328),
    [aux_sym_prog_repeat1] = STATE(79),
    [aux_sym_address_repeat1] = STATE(164),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_address_token1] = ACTIONS(5),
  },
  [2] = {
    [sym_opcode] = STATE(117),
    [sym_BinaryArithmeticOpcode] = STATE(95),
    [sym_BitAndByteOpcode] = STATE(95),
    [sym_CuriousOpcode] = STATE(95),
    [sym_DataTransferOpcode] = STATE(95),
    [sym_IOOpcode] = STATE(95),
    [sym_LogicalOpcode] = STATE(95),
    [sym_MiscellaneousOpcode] = STATE(95),
    [sym_PackUnpackOpcode] = STATE(95),
    [sym_ShiftAndRotateOpcode] = STATE(95),
    [sym_StackOpcode] = STATE(95),
    [sym_StringOpcode] = STATE(95),
    [sym_AccessRegisterOpcode] = STATE(95),
    [sym_ToBeClassifiedOpcode] = STATE(95),
    [sym_operand] = STATE(100),
    [sym_immediateOperand] = STATE(117),
    [sym_registerOperand] = STATE(117),
    [sym_segmentRegisterOperand] = STATE(77),
    [sym_generalRegisterOperand] = STATE(74),
    [sym_generalRegister64Bits] = STATE(73),
    [sym_generalRegister32Bits] = STATE(73),
    [sym_generalRegister16Bits] = STATE(73),
    [sym_generalRegister8Bits] = STATE(73),
    [sym_memoryOperand] = STATE(117),
    [sym_memoryScalaredIndexedOperand] = STATE(119),
    [sym_memorySegmentBaseOperand] = STATE(119),
    [sym_memoryIndirectOperand] = STATE(119),
    [sym_offset] = STATE(327),
    [sym_memoryAbsoluteOperand] = STATE(119),
    [sym_someOpcode] = STATE(117),
    [sym_callqOpcode] = STATE(117),
    [sym_controlRegisterOperand] = STATE(74),
    [sym_instructionRegisterOperand] = STATE(74),
    [sym_floatRegisterOperand] = STATE(74),
    [sym_otherRegisterOperand] = STATE(74),
    [aux_sym_instruction_repeat1] = STATE(4),
    [aux_sym_operand_repeat1] = STATE(61),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym__line_break] = ACTIONS(9),
    [anon_sym_adc] = ACTIONS(11),
    [anon_sym_add] = ACTIONS(11),
    [anon_sym_addq] = ACTIONS(11),
    [anon_sym_addl] = ACTIONS(11),
    [anon_sym_addss] = ACTIONS(11),
    [anon_sym_addw] = ACTIONS(11),
    [anon_sym_addb] = ACTIONS(11),
    [anon_sym_cmp] = ACTIONS(11),
    [anon_sym_cmpb] = ACTIONS(11),
    [anon_sym_cmpw] = ACTIONS(11),
    [anon_sym_cmpl] = ACTIONS(11),
    [anon_sym_cmpq] = ACTIONS(11),
    [anon_sym_comiss] = ACTIONS(11),
    [anon_sym_comisd] = ACTIONS(11),
    [anon_sym_inc] = ACTIONS(11),
    [anon_sym_incl] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [anon_sym_div] = ACTIONS(11),
    [anon_sym_divq] = ACTIONS(11),
    [anon_sym_divl] = ACTIONS(11),
    [anon_sym_divss] = ACTIONS(11),
    [anon_sym_divsd] = ACTIONS(11),
    [anon_sym_idiv] = ACTIONS(11),
    [anon_sym_idivl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_subq] = ACTIONS(11),
    [anon_sym_subl] = ACTIONS(11),
    [anon_sym_subss] = ACTIONS(11),
    [anon_sym_subw] = ACTIONS(11),
    [anon_sym_subb] = ACTIONS(11),
    [anon_sym_subsd] = ACTIONS(11),
    [anon_sym_subpd] = ACTIONS(11),
    [anon_sym_sbb] = ACTIONS(11),
    [anon_sym_mul] = ACTIONS(11),
    [anon_sym_mulq] = ACTIONS(11),
    [anon_sym_mull] = ACTIONS(11),
    [anon_sym_mulss] = ACTIONS(11),
    [anon_sym_mulw] = ACTIONS(11),
    [anon_sym_mulb] = ACTIONS(11),
    [anon_sym_mulsd] = ACTIONS(11),
    [anon_sym_mulx] = ACTIONS(11),
    [anon_sym_imul] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_negl] = ACTIONS(11),
    [anon_sym_negq] = ACTIONS(11),
    [anon_sym_fmulp] = ACTIONS(11),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(11),
    [anon_sym_pclmullqlqdq] = ACTIONS(11),
    [anon_sym_pclmullqhqdq] = ACTIONS(11),
    [anon_sym_vpclmullqhqdq] = ACTIONS(11),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(11),
    [anon_sym_pclmulhqhqdq] = ACTIONS(11),
    [anon_sym_vpclmullqlqdq] = ACTIONS(11),
    [anon_sym_bsf] = ACTIONS(13),
    [anon_sym_bsr] = ACTIONS(13),
    [anon_sym_bts] = ACTIONS(13),
    [anon_sym_bt] = ACTIONS(13),
    [anon_sym_btr] = ACTIONS(13),
    [anon_sym_btl] = ACTIONS(13),
    [anon_sym_setne] = ACTIONS(13),
    [anon_sym_setb] = ACTIONS(13),
    [anon_sym_sete] = ACTIONS(13),
    [anon_sym_setbe] = ACTIONS(13),
    [anon_sym_seta] = ACTIONS(13),
    [anon_sym_setge] = ACTIONS(13),
    [anon_sym_setae] = ACTIONS(13),
    [anon_sym_setl] = ACTIONS(13),
    [anon_sym_setle] = ACTIONS(13),
    [anon_sym_setg] = ACTIONS(13),
    [anon_sym_seto] = ACTIONS(13),
    [anon_sym_setnp] = ACTIONS(13),
    [anon_sym_setp] = ACTIONS(13),
    [anon_sym_setns] = ACTIONS(13),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_testb] = ACTIONS(13),
    [anon_sym_testl] = ACTIONS(13),
    [anon_sym_knotw] = ACTIONS(13),
    [anon_sym_vpcmpltud] = ACTIONS(15),
    [anon_sym_gs] = ACTIONS(15),
    [anon_sym_re] = ACTIONS(15),
    [anon_sym_ss] = ACTIONS(15),
    [anon_sym_leaveq] = ACTIONS(15),
    [anon_sym_retq] = ACTIONS(15),
    [anon_sym_bswap] = ACTIONS(17),
    [anon_sym_cbtw] = ACTIONS(17),
    [anon_sym_cltd] = ACTIONS(17),
    [anon_sym_cltq] = ACTIONS(17),
    [anon_sym_cmovbe] = ACTIONS(17),
    [anon_sym_cmovl] = ACTIONS(17),
    [anon_sym_cmovae] = ACTIONS(17),
    [anon_sym_cmovo] = ACTIONS(17),
    [anon_sym_cmovne] = ACTIONS(17),
    [anon_sym_cmovns] = ACTIONS(17),
    [anon_sym_cmovg] = ACTIONS(17),
    [anon_sym_cmovp] = ACTIONS(17),
    [anon_sym_cmove] = ACTIONS(17),
    [anon_sym_cmovge] = ACTIONS(17),
    [anon_sym_cmovb] = ACTIONS(17),
    [anon_sym_cmova] = ACTIONS(17),
    [anon_sym_cmovle] = ACTIONS(17),
    [anon_sym_cmovs] = ACTIONS(17),
    [anon_sym_cwtl] = ACTIONS(17),
    [anon_sym_cwtd] = ACTIONS(17),
    [anon_sym_cqto] = ACTIONS(17),
    [anon_sym_cvttsd2si] = ACTIONS(17),
    [anon_sym_cvtss2sd] = ACTIONS(17),
    [anon_sym_cvttss2si] = ACTIONS(17),
    [anon_sym_cvtsi2sd] = ACTIONS(17),
    [anon_sym_cvtsi2ss] = ACTIONS(17),
    [anon_sym_cvtsi2sdq] = ACTIONS(17),
    [anon_sym_cvtsi2sdl] = ACTIONS(17),
    [anon_sym_cvtsd2ss] = ACTIONS(17),
    [anon_sym_cvtsi2ssl] = ACTIONS(17),
    [anon_sym_mov] = ACTIONS(17),
    [anon_sym_movw] = ACTIONS(17),
    [anon_sym_movl] = ACTIONS(17),
    [anon_sym_movq] = ACTIONS(17),
    [anon_sym_movb] = ACTIONS(17),
    [anon_sym_movabs] = ACTIONS(17),
    [anon_sym_movsbw] = ACTIONS(17),
    [anon_sym_movsbq] = ACTIONS(17),
    [anon_sym_movsbl] = ACTIONS(17),
    [anon_sym_movswl] = ACTIONS(17),
    [anon_sym_movswq] = ACTIONS(17),
    [anon_sym_movzbw] = ACTIONS(17),
    [anon_sym_movzbq] = ACTIONS(17),
    [anon_sym_movzbl] = ACTIONS(17),
    [anon_sym_movzwl] = ACTIONS(17),
    [anon_sym_movaps] = ACTIONS(17),
    [anon_sym_movhlps] = ACTIONS(17),
    [anon_sym_movss] = ACTIONS(17),
    [anon_sym_movups] = ACTIONS(17),
    [anon_sym_movsd] = ACTIONS(17),
    [anon_sym_movd] = ACTIONS(17),
    [anon_sym_movhps] = ACTIONS(17),
    [anon_sym_movdqa] = ACTIONS(17),
    [anon_sym_movbe] = ACTIONS(17),
    [anon_sym_movapd] = ACTIONS(17),
    [anon_sym_movdqu] = ACTIONS(17),
    [anon_sym_xchg] = ACTIONS(17),
    [anon_sym_fildl] = ACTIONS(17),
    [anon_sym_fldt] = ACTIONS(17),
    [anon_sym_fstpl] = ACTIONS(17),
    [anon_sym_insb] = ACTIONS(19),
    [anon_sym_insl] = ACTIONS(19),
    [anon_sym_outsb] = ACTIONS(19),
    [anon_sym_outsl] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_orq] = ACTIONS(21),
    [anon_sym_orl] = ACTIONS(21),
    [anon_sym_orb] = ACTIONS(21),
    [anon_sym_orw] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_xorl] = ACTIONS(21),
    [anon_sym_xorw] = ACTIONS(21),
    [anon_sym_xorps] = ACTIONS(21),
    [anon_sym_xorpd] = ACTIONS(21),
    [anon_sym_vxorps] = ACTIONS(21),
    [anon_sym_vpxord] = ACTIONS(21),
    [anon_sym_vpxor] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_andq] = ACTIONS(21),
    [anon_sym_andl] = ACTIONS(21),
    [anon_sym_andw] = ACTIONS(21),
    [anon_sym_andb] = ACTIONS(21),
    [anon_sym_andn] = ACTIONS(21),
    [anon_sym_andpd] = ACTIONS(21),
    [anon_sym_pand] = ACTIONS(21),
    [anon_sym_pandn] = ACTIONS(21),
    [anon_sym_andps] = ACTIONS(21),
    [anon_sym_vpand] = ACTIONS(21),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_notl] = ACTIONS(21),
    [anon_sym_notw] = ACTIONS(21),
    [anon_sym_cpuid] = ACTIONS(23),
    [anon_sym_lea] = ACTIONS(23),
    [anon_sym_popcnt] = ACTIONS(23),
    [anon_sym_nop] = ACTIONS(23),
    [anon_sym_nopl] = ACTIONS(23),
    [anon_sym_nopw] = ACTIONS(23),
    [anon_sym_ud2] = ACTIONS(23),
    [anon_sym_data16] = ACTIONS(23),
    [anon_sym_sha1rnds4] = ACTIONS(23),
    [anon_sym_addr32] = ACTIONS(23),
    [anon_sym_sha1msg1] = ACTIONS(23),
    [anon_sym_sha1msg2] = ACTIONS(23),
    [anon_sym_sha1nexte] = ACTIONS(23),
    [anon_sym_endbr64] = ACTIONS(23),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(25),
    [anon_sym_packuswb] = ACTIONS(27),
    [anon_sym_punpckhbw] = ACTIONS(27),
    [anon_sym_punpckhdq] = ACTIONS(27),
    [anon_sym_punpckhwd] = ACTIONS(27),
    [anon_sym_punpcklbw] = ACTIONS(27),
    [anon_sym_punpckldq] = ACTIONS(27),
    [anon_sym_punpcklwd] = ACTIONS(27),
    [anon_sym_vpunpcklwd] = ACTIONS(27),
    [anon_sym_vpunpckldq] = ACTIONS(27),
    [anon_sym_punpcklqdq] = ACTIONS(27),
    [anon_sym_punpckhqdq] = ACTIONS(27),
    [anon_sym_vpunpckhqdq] = ACTIONS(27),
    [anon_sym_vpunpckhdq] = ACTIONS(27),
    [anon_sym_vpunpcklqdq] = ACTIONS(27),
    [anon_sym_vpunpckhwd] = ACTIONS(27),
    [anon_sym_rol] = ACTIONS(29),
    [anon_sym_ror] = ACTIONS(29),
    [anon_sym_sar] = ACTIONS(29),
    [anon_sym_sarl] = ACTIONS(29),
    [anon_sym_sarx] = ACTIONS(29),
    [anon_sym_shl] = ACTIONS(29),
    [anon_sym_shll] = ACTIONS(29),
    [anon_sym_shld] = ACTIONS(29),
    [anon_sym_shlx] = ACTIONS(29),
    [anon_sym_shlq] = ACTIONS(29),
    [anon_sym_shr] = ACTIONS(29),
    [anon_sym_shrq] = ACTIONS(29),
    [anon_sym_shrd] = ACTIONS(29),
    [anon_sym_shrl] = ACTIONS(29),
    [anon_sym_shrx] = ACTIONS(29),
    [anon_sym_vprord] = ACTIONS(29),
    [anon_sym_vprorq] = ACTIONS(29),
    [anon_sym_rorl] = ACTIONS(29),
    [anon_sym_roll] = ACTIONS(29),
    [anon_sym_push] = ACTIONS(31),
    [anon_sym_pushq] = ACTIONS(31),
    [anon_sym_pop] = ACTIONS(31),
    [anon_sym_movslq] = ACTIONS(33),
    [anon_sym_movsb] = ACTIONS(33),
    [anon_sym_rep] = ACTIONS(33),
    [anon_sym_repz] = ACTIONS(33),
    [anon_sym_repnz] = ACTIONS(33),
    [anon_sym_rex] = ACTIONS(35),
    [anon_sym_rex_DOTWB] = ACTIONS(35),
    [anon_sym_rex_DOTWRB] = ACTIONS(35),
    [anon_sym_rex_DOTRXB] = ACTIONS(35),
    [anon_sym_rex_DOTB] = ACTIONS(35),
    [anon_sym_rex_DOTWRXB] = ACTIONS(35),
    [anon_sym_rex_DOTXB] = ACTIONS(35),
    [anon_sym_rex_DOTW] = ACTIONS(35),
    [anon_sym_rex_DOTRB] = ACTIONS(35),
    [anon_sym_xgetbv] = ACTIONS(35),
    [anon_sym_fs] = ACTIONS(35),
    [anon_sym_kmovw] = ACTIONS(35),
    [anon_sym_adcx] = ACTIONS(37),
    [anon_sym_adox] = ACTIONS(37),
    [anon_sym_aesdec] = ACTIONS(37),
    [anon_sym_aesdeclast] = ACTIONS(37),
    [anon_sym_aesenc] = ACTIONS(37),
    [anon_sym_aesenclast] = ACTIONS(37),
    [anon_sym_vaesenc] = ACTIONS(37),
    [anon_sym_vaesenclast] = ACTIONS(37),
    [anon_sym_aeskeygenassist] = ACTIONS(37),
    [anon_sym_vblendps] = ACTIONS(37),
    [anon_sym_vblendvps] = ACTIONS(37),
    [anon_sym_vcvtusi2sd] = ACTIONS(37),
    [anon_sym_vdivsd] = ACTIONS(37),
    [anon_sym_vmovaps] = ACTIONS(37),
    [anon_sym_vmovapd] = ACTIONS(37),
    [anon_sym_vmovss] = ACTIONS(37),
    [anon_sym_vmovdqu] = ACTIONS(37),
    [anon_sym_vmovdqu64] = ACTIONS(37),
    [anon_sym_vmovdqu32] = ACTIONS(37),
    [anon_sym_vmovdqa] = ACTIONS(37),
    [anon_sym_vmovdqa32] = ACTIONS(37),
    [anon_sym_vmovdqa64] = ACTIONS(37),
    [anon_sym_vmovq] = ACTIONS(37),
    [anon_sym_vmovups] = ACTIONS(37),
    [anon_sym_vmovd] = ACTIONS(37),
    [anon_sym_vmovsd] = ACTIONS(37),
    [anon_sym_vmulsd] = ACTIONS(37),
    [anon_sym_vpackusdw] = ACTIONS(37),
    [anon_sym_vpaddd] = ACTIONS(37),
    [anon_sym_vpaddb] = ACTIONS(37),
    [anon_sym_vpaddq] = ACTIONS(37),
    [anon_sym_vpaddw] = ACTIONS(37),
    [anon_sym_vpalignr] = ACTIONS(37),
    [anon_sym_vpcmpgtd] = ACTIONS(37),
    [anon_sym_vpextrw] = ACTIONS(37),
    [anon_sym_vpinsrw] = ACTIONS(37),
    [anon_sym_vpinsrd] = ACTIONS(37),
    [anon_sym_vpinsrq] = ACTIONS(37),
    [anon_sym_vpinsrb] = ACTIONS(37),
    [anon_sym_vpmaddubsw] = ACTIONS(37),
    [anon_sym_vpmaddwd] = ACTIONS(37),
    [anon_sym_vpmullw] = ACTIONS(37),
    [anon_sym_vpmuludq] = ACTIONS(37),
    [anon_sym_vpor] = ACTIONS(37),
    [anon_sym_vpshufb] = ACTIONS(37),
    [anon_sym_vpshufd] = ACTIONS(37),
    [anon_sym_vpslldq] = ACTIONS(37),
    [anon_sym_vpslld] = ACTIONS(37),
    [anon_sym_vpsllq] = ACTIONS(37),
    [anon_sym_vpsllw] = ACTIONS(37),
    [anon_sym_vpsrldq] = ACTIONS(37),
    [anon_sym_vpsrld] = ACTIONS(37),
    [anon_sym_vpsrlq] = ACTIONS(37),
    [anon_sym_vpsrlw] = ACTIONS(37),
    [anon_sym_vpsubusw] = ACTIONS(37),
    [anon_sym_vpsubq] = ACTIONS(37),
    [anon_sym_vpsubd] = ACTIONS(37),
    [anon_sym_vpsubw] = ACTIONS(37),
    [anon_sym_vshufps] = ACTIONS(37),
    [anon_sym_vsubsd] = ACTIONS(37),
    [anon_sym_vucomisd] = ACTIONS(37),
    [anon_sym_vucomiss] = ACTIONS(37),
    [anon_sym_vunpckhpd] = ACTIONS(37),
    [anon_sym_vunpckhps] = ACTIONS(37),
    [anon_sym_vunpcklpd] = ACTIONS(37),
    [anon_sym_vunpcklps] = ACTIONS(37),
    [anon_sym_vbroadcastss] = ACTIONS(37),
    [anon_sym_vinsertf128] = ACTIONS(37),
    [anon_sym_vperm2f128] = ACTIONS(37),
    [anon_sym_vzeroall] = ACTIONS(37),
    [anon_sym_vzeroupper] = ACTIONS(37),
    [anon_sym_vshufi32x4] = ACTIONS(37),
    [anon_sym_vshufi64x2] = ACTIONS(37),
    [anon_sym_vpblendmd] = ACTIONS(37),
    [anon_sym_vextracti128] = ACTIONS(37),
    [anon_sym_vextracti32x4] = ACTIONS(37),
    [anon_sym_vinserti128] = ACTIONS(37),
    [anon_sym_vinserti32x4] = ACTIONS(37),
    [anon_sym_vinserti64x4] = ACTIONS(37),
    [anon_sym_vpblendd] = ACTIONS(37),
    [anon_sym_vpbroadcastq] = ACTIONS(37),
    [anon_sym_vpbroadcastd] = ACTIONS(37),
    [anon_sym_vbroadcasti128] = ACTIONS(37),
    [anon_sym_vbroadcasti32x4] = ACTIONS(37),
    [anon_sym_vperm2i128] = ACTIONS(37),
    [anon_sym_vpermd] = ACTIONS(37),
    [anon_sym_vpermq] = ACTIONS(37),
    [anon_sym_vpermt2d] = ACTIONS(37),
    [anon_sym_vpermi2d] = ACTIONS(37),
    [anon_sym_tzcnt] = ACTIONS(37),
    [anon_sym_rorx] = ACTIONS(37),
    [anon_sym_psubd] = ACTIONS(37),
    [anon_sym_pmaddwd] = ACTIONS(37),
    [anon_sym_pxor] = ACTIONS(37),
    [anon_sym_psrad] = ACTIONS(37),
    [anon_sym_pslld] = ACTIONS(37),
    [anon_sym_pcmpgtd] = ACTIONS(37),
    [anon_sym_pcmpeqd] = ACTIONS(37),
    [anon_sym_por] = ACTIONS(37),
    [anon_sym_paddw] = ACTIONS(37),
    [anon_sym_psubusw] = ACTIONS(37),
    [anon_sym_pcmpeqb] = ACTIONS(37),
    [anon_sym_psubusb] = ACTIONS(37),
    [anon_sym_psrld] = ACTIONS(37),
    [anon_sym_psrlw] = ACTIONS(37),
    [anon_sym_psllq] = ACTIONS(37),
    [anon_sym_paddd] = ACTIONS(37),
    [anon_sym_psrlq] = ACTIONS(37),
    [anon_sym_psubb] = ACTIONS(37),
    [anon_sym_maxss] = ACTIONS(37),
    [anon_sym_pmovmskb] = ACTIONS(37),
    [anon_sym_pinsrw] = ACTIONS(37),
    [anon_sym_minss] = ACTIONS(37),
    [anon_sym_prefetcht1] = ACTIONS(37),
    [anon_sym_prefetcht0] = ACTIONS(37),
    [anon_sym_pextrw] = ACTIONS(37),
    [anon_sym_ucomiss] = ACTIONS(37),
    [anon_sym_shufps] = ACTIONS(37),
    [anon_sym_addsd] = ACTIONS(37),
    [anon_sym_paddq] = ACTIONS(37),
    [anon_sym_psubq] = ACTIONS(37),
    [anon_sym_pshuflw] = ACTIONS(37),
    [anon_sym_pmuludq] = ACTIONS(37),
    [anon_sym_pshufd] = ACTIONS(37),
    [anon_sym_minsd] = ACTIONS(37),
    [anon_sym_pshufhw] = ACTIONS(37),
    [anon_sym_mfence] = ACTIONS(37),
    [anon_sym_maxsd] = ACTIONS(37),
    [anon_sym_ucomisd] = ACTIONS(37),
    [anon_sym_shufpd] = ACTIONS(37),
    [anon_sym_pslldq] = ACTIONS(37),
    [anon_sym_unpckhpd] = ACTIONS(37),
    [anon_sym_psrldq] = ACTIONS(37),
    [anon_sym_palignr] = ACTIONS(37),
    [anon_sym_pshufb] = ACTIONS(37),
    [anon_sym_pmaddubsw] = ACTIONS(37),
    [anon_sym_pinsrb] = ACTIONS(37),
    [anon_sym_pblendw] = ACTIONS(37),
    [anon_sym_pextrq] = ACTIONS(37),
    [anon_sym_blendvps] = ACTIONS(37),
    [anon_sym_pextrb] = ACTIONS(37),
    [anon_sym_pinsrd] = ACTIONS(37),
    [anon_sym_femms] = ACTIONS(37),
    [anon_sym_f] = ACTIONS(39),
    [aux_sym_operand_token1] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(45),
    [anon_sym_PERCENTss] = ACTIONS(47),
    [anon_sym_PERCENTcs] = ACTIONS(47),
    [anon_sym_PERCENTds] = ACTIONS(47),
    [anon_sym_PERCENTes] = ACTIONS(47),
    [anon_sym_PERCENTfs] = ACTIONS(47),
    [anon_sym_PERCENTgs] = ACTIONS(47),
    [anon_sym_PERCENTrax] = ACTIONS(49),
    [anon_sym_PERCENTrbx] = ACTIONS(49),
    [anon_sym_PERCENTrcx] = ACTIONS(49),
    [anon_sym_PERCENTrdx] = ACTIONS(49),
    [anon_sym_PERCENTrsi] = ACTIONS(49),
    [anon_sym_PERCENTrdi] = ACTIONS(49),
    [anon_sym_PERCENTrbp] = ACTIONS(49),
    [anon_sym_PERCENTrsp] = ACTIONS(49),
    [anon_sym_PERCENTr8] = ACTIONS(49),
    [anon_sym_PERCENTr9] = ACTIONS(49),
    [anon_sym_PERCENTr10] = ACTIONS(49),
    [anon_sym_PERCENTr11] = ACTIONS(49),
    [anon_sym_PERCENTr12] = ACTIONS(49),
    [anon_sym_PERCENTr13] = ACTIONS(49),
    [anon_sym_PERCENTr14] = ACTIONS(49),
    [anon_sym_PERCENTr15] = ACTIONS(49),
    [anon_sym_PERCENTeax] = ACTIONS(51),
    [anon_sym_PERCENTecx] = ACTIONS(51),
    [anon_sym_PERCENTedx] = ACTIONS(51),
    [anon_sym_PERCENTebx] = ACTIONS(51),
    [anon_sym_PERCENTesi] = ACTIONS(51),
    [anon_sym_PERCENTedi] = ACTIONS(51),
    [anon_sym_PERCENTebp] = ACTIONS(51),
    [anon_sym_PERCENTesp] = ACTIONS(51),
    [anon_sym_PERCENTr8d] = ACTIONS(51),
    [anon_sym_PERCENTr9d] = ACTIONS(51),
    [anon_sym_PERCENTr10d] = ACTIONS(51),
    [anon_sym_PERCENTr11d] = ACTIONS(51),
    [anon_sym_PERCENTr12d] = ACTIONS(51),
    [anon_sym_PERCENTr13d] = ACTIONS(51),
    [anon_sym_PERCENTr14d] = ACTIONS(51),
    [anon_sym_PERCENTr15d] = ACTIONS(51),
    [anon_sym_PERCENTax] = ACTIONS(53),
    [anon_sym_PERCENTcx] = ACTIONS(53),
    [anon_sym_PERCENTdx] = ACTIONS(53),
    [anon_sym_PERCENTbx] = ACTIONS(53),
    [anon_sym_PERCENTsi] = ACTIONS(53),
    [anon_sym_PERCENTdi] = ACTIONS(53),
    [anon_sym_PERCENTsp] = ACTIONS(53),
    [anon_sym_PERCENTbp] = ACTIONS(53),
    [anon_sym_PERCENTr8w] = ACTIONS(53),
    [anon_sym_PERCENTr9w] = ACTIONS(53),
    [anon_sym_PERCENTr10w] = ACTIONS(53),
    [anon_sym_PERCENTr11w] = ACTIONS(53),
    [anon_sym_PERCENTr12w] = ACTIONS(53),
    [anon_sym_PERCENTr13w] = ACTIONS(53),
    [anon_sym_PERCENTr14w] = ACTIONS(53),
    [anon_sym_PERCENTr15w] = ACTIONS(53),
    [anon_sym_PERCENTal] = ACTIONS(55),
    [anon_sym_PERCENTcl] = ACTIONS(55),
    [anon_sym_PERCENTdl] = ACTIONS(55),
    [anon_sym_PERCENTbl] = ACTIONS(55),
    [anon_sym_PERCENTsil] = ACTIONS(55),
    [anon_sym_PERCENTdil] = ACTIONS(55),
    [anon_sym_PERCENTspl] = ACTIONS(55),
    [anon_sym_PERCENTbpl] = ACTIONS(55),
    [anon_sym_PERCENTr8b] = ACTIONS(55),
    [anon_sym_PERCENTr9b] = ACTIONS(55),
    [anon_sym_PERCENTr10b] = ACTIONS(55),
    [anon_sym_PERCENTr11b] = ACTIONS(55),
    [anon_sym_PERCENTr12b] = ACTIONS(55),
    [anon_sym_PERCENTr13b] = ACTIONS(55),
    [anon_sym_PERCENTr14b] = ACTIONS(55),
    [anon_sym_PERCENTr15b] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_movsq] = ACTIONS(61),
    [anon_sym_cmpsb] = ACTIONS(61),
    [anon_sym_cmpxchg] = ACTIONS(61),
    [anon_sym_movsl] = ACTIONS(61),
    [anon_sym_callq] = ACTIONS(63),
    [anon_sym_ja] = ACTIONS(63),
    [anon_sym_jae] = ACTIONS(63),
    [anon_sym_jb] = ACTIONS(63),
    [anon_sym_jbe] = ACTIONS(63),
    [anon_sym_je] = ACTIONS(63),
    [anon_sym_jg] = ACTIONS(63),
    [anon_sym_jge] = ACTIONS(63),
    [anon_sym_jl] = ACTIONS(63),
    [anon_sym_jle] = ACTIONS(63),
    [anon_sym_jmp] = ACTIONS(63),
    [anon_sym_jmpq] = ACTIONS(63),
    [anon_sym_jne] = ACTIONS(63),
    [anon_sym_jno] = ACTIONS(63),
    [anon_sym_jns] = ACTIONS(63),
    [anon_sym_jo] = ACTIONS(63),
    [anon_sym_jp] = ACTIONS(63),
    [anon_sym_jrcxz] = ACTIONS(63),
    [anon_sym_js] = ACTIONS(63),
    [anon_sym_notrack] = ACTIONS(63),
    [anon_sym_PERCENTcr0] = ACTIONS(65),
    [anon_sym_PERCENTcr2] = ACTIONS(65),
    [anon_sym_PERCENTcr3] = ACTIONS(65),
    [anon_sym_PERCENTcr4] = ACTIONS(65),
    [anon_sym_PERCENTrip] = ACTIONS(67),
    [anon_sym_PERCENTeip] = ACTIONS(67),
    [anon_sym_PERCENTip] = ACTIONS(67),
    [anon_sym_PERCENTst] = ACTIONS(69),
    [anon_sym_PERCENT] = ACTIONS(71),
  },
  [3] = {
    [sym_opcode] = STATE(117),
    [sym_BinaryArithmeticOpcode] = STATE(95),
    [sym_BitAndByteOpcode] = STATE(95),
    [sym_CuriousOpcode] = STATE(95),
    [sym_DataTransferOpcode] = STATE(95),
    [sym_IOOpcode] = STATE(95),
    [sym_LogicalOpcode] = STATE(95),
    [sym_MiscellaneousOpcode] = STATE(95),
    [sym_PackUnpackOpcode] = STATE(95),
    [sym_ShiftAndRotateOpcode] = STATE(95),
    [sym_StackOpcode] = STATE(95),
    [sym_StringOpcode] = STATE(95),
    [sym_AccessRegisterOpcode] = STATE(95),
    [sym_ToBeClassifiedOpcode] = STATE(95),
    [sym_operand] = STATE(118),
    [sym_immediateOperand] = STATE(117),
    [sym_registerOperand] = STATE(117),
    [sym_segmentRegisterOperand] = STATE(77),
    [sym_generalRegisterOperand] = STATE(74),
    [sym_generalRegister64Bits] = STATE(73),
    [sym_generalRegister32Bits] = STATE(73),
    [sym_generalRegister16Bits] = STATE(73),
    [sym_generalRegister8Bits] = STATE(73),
    [sym_memoryOperand] = STATE(117),
    [sym_memoryScalaredIndexedOperand] = STATE(119),
    [sym_memorySegmentBaseOperand] = STATE(119),
    [sym_memoryIndirectOperand] = STATE(119),
    [sym_offset] = STATE(327),
    [sym_memoryAbsoluteOperand] = STATE(119),
    [sym_someOpcode] = STATE(117),
    [sym_callqOpcode] = STATE(117),
    [sym_controlRegisterOperand] = STATE(74),
    [sym_instructionRegisterOperand] = STATE(74),
    [sym_floatRegisterOperand] = STATE(74),
    [sym_otherRegisterOperand] = STATE(74),
    [aux_sym_instruction_repeat1] = STATE(2),
    [aux_sym_operand_repeat1] = STATE(61),
    [aux_sym_comment_token1] = ACTIONS(73),
    [aux_sym_comment_token2] = ACTIONS(73),
    [sym__line_break] = ACTIONS(75),
    [anon_sym_adc] = ACTIONS(11),
    [anon_sym_add] = ACTIONS(11),
    [anon_sym_addq] = ACTIONS(11),
    [anon_sym_addl] = ACTIONS(11),
    [anon_sym_addss] = ACTIONS(11),
    [anon_sym_addw] = ACTIONS(11),
    [anon_sym_addb] = ACTIONS(11),
    [anon_sym_cmp] = ACTIONS(11),
    [anon_sym_cmpb] = ACTIONS(11),
    [anon_sym_cmpw] = ACTIONS(11),
    [anon_sym_cmpl] = ACTIONS(11),
    [anon_sym_cmpq] = ACTIONS(11),
    [anon_sym_comiss] = ACTIONS(11),
    [anon_sym_comisd] = ACTIONS(11),
    [anon_sym_inc] = ACTIONS(11),
    [anon_sym_incl] = ACTIONS(11),
    [anon_sym_dec] = ACTIONS(11),
    [anon_sym_div] = ACTIONS(11),
    [anon_sym_divq] = ACTIONS(11),
    [anon_sym_divl] = ACTIONS(11),
    [anon_sym_divss] = ACTIONS(11),
    [anon_sym_divsd] = ACTIONS(11),
    [anon_sym_idiv] = ACTIONS(11),
    [anon_sym_idivl] = ACTIONS(11),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_subq] = ACTIONS(11),
    [anon_sym_subl] = ACTIONS(11),
    [anon_sym_subss] = ACTIONS(11),
    [anon_sym_subw] = ACTIONS(11),
    [anon_sym_subb] = ACTIONS(11),
    [anon_sym_subsd] = ACTIONS(11),
    [anon_sym_subpd] = ACTIONS(11),
    [anon_sym_sbb] = ACTIONS(11),
    [anon_sym_mul] = ACTIONS(11),
    [anon_sym_mulq] = ACTIONS(11),
    [anon_sym_mull] = ACTIONS(11),
    [anon_sym_mulss] = ACTIONS(11),
    [anon_sym_mulw] = ACTIONS(11),
    [anon_sym_mulb] = ACTIONS(11),
    [anon_sym_mulsd] = ACTIONS(11),
    [anon_sym_mulx] = ACTIONS(11),
    [anon_sym_imul] = ACTIONS(11),
    [anon_sym_neg] = ACTIONS(11),
    [anon_sym_negl] = ACTIONS(11),
    [anon_sym_negq] = ACTIONS(11),
    [anon_sym_fmulp] = ACTIONS(11),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(11),
    [anon_sym_pclmullqlqdq] = ACTIONS(11),
    [anon_sym_pclmullqhqdq] = ACTIONS(11),
    [anon_sym_vpclmullqhqdq] = ACTIONS(11),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(11),
    [anon_sym_pclmulhqhqdq] = ACTIONS(11),
    [anon_sym_vpclmullqlqdq] = ACTIONS(11),
    [anon_sym_bsf] = ACTIONS(13),
    [anon_sym_bsr] = ACTIONS(13),
    [anon_sym_bts] = ACTIONS(13),
    [anon_sym_bt] = ACTIONS(13),
    [anon_sym_btr] = ACTIONS(13),
    [anon_sym_btl] = ACTIONS(13),
    [anon_sym_setne] = ACTIONS(13),
    [anon_sym_setb] = ACTIONS(13),
    [anon_sym_sete] = ACTIONS(13),
    [anon_sym_setbe] = ACTIONS(13),
    [anon_sym_seta] = ACTIONS(13),
    [anon_sym_setge] = ACTIONS(13),
    [anon_sym_setae] = ACTIONS(13),
    [anon_sym_setl] = ACTIONS(13),
    [anon_sym_setle] = ACTIONS(13),
    [anon_sym_setg] = ACTIONS(13),
    [anon_sym_seto] = ACTIONS(13),
    [anon_sym_setnp] = ACTIONS(13),
    [anon_sym_setp] = ACTIONS(13),
    [anon_sym_setns] = ACTIONS(13),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_testb] = ACTIONS(13),
    [anon_sym_testl] = ACTIONS(13),
    [anon_sym_knotw] = ACTIONS(13),
    [anon_sym_vpcmpltud] = ACTIONS(15),
    [anon_sym_gs] = ACTIONS(15),
    [anon_sym_re] = ACTIONS(15),
    [anon_sym_ss] = ACTIONS(15),
    [anon_sym_leaveq] = ACTIONS(15),
    [anon_sym_retq] = ACTIONS(15),
    [anon_sym_bswap] = ACTIONS(17),
    [anon_sym_cbtw] = ACTIONS(17),
    [anon_sym_cltd] = ACTIONS(17),
    [anon_sym_cltq] = ACTIONS(17),
    [anon_sym_cmovbe] = ACTIONS(17),
    [anon_sym_cmovl] = ACTIONS(17),
    [anon_sym_cmovae] = ACTIONS(17),
    [anon_sym_cmovo] = ACTIONS(17),
    [anon_sym_cmovne] = ACTIONS(17),
    [anon_sym_cmovns] = ACTIONS(17),
    [anon_sym_cmovg] = ACTIONS(17),
    [anon_sym_cmovp] = ACTIONS(17),
    [anon_sym_cmove] = ACTIONS(17),
    [anon_sym_cmovge] = ACTIONS(17),
    [anon_sym_cmovb] = ACTIONS(17),
    [anon_sym_cmova] = ACTIONS(17),
    [anon_sym_cmovle] = ACTIONS(17),
    [anon_sym_cmovs] = ACTIONS(17),
    [anon_sym_cwtl] = ACTIONS(17),
    [anon_sym_cwtd] = ACTIONS(17),
    [anon_sym_cqto] = ACTIONS(17),
    [anon_sym_cvttsd2si] = ACTIONS(17),
    [anon_sym_cvtss2sd] = ACTIONS(17),
    [anon_sym_cvttss2si] = ACTIONS(17),
    [anon_sym_cvtsi2sd] = ACTIONS(17),
    [anon_sym_cvtsi2ss] = ACTIONS(17),
    [anon_sym_cvtsi2sdq] = ACTIONS(17),
    [anon_sym_cvtsi2sdl] = ACTIONS(17),
    [anon_sym_cvtsd2ss] = ACTIONS(17),
    [anon_sym_cvtsi2ssl] = ACTIONS(17),
    [anon_sym_mov] = ACTIONS(17),
    [anon_sym_movw] = ACTIONS(17),
    [anon_sym_movl] = ACTIONS(17),
    [anon_sym_movq] = ACTIONS(17),
    [anon_sym_movb] = ACTIONS(17),
    [anon_sym_movabs] = ACTIONS(17),
    [anon_sym_movsbw] = ACTIONS(17),
    [anon_sym_movsbq] = ACTIONS(17),
    [anon_sym_movsbl] = ACTIONS(17),
    [anon_sym_movswl] = ACTIONS(17),
    [anon_sym_movswq] = ACTIONS(17),
    [anon_sym_movzbw] = ACTIONS(17),
    [anon_sym_movzbq] = ACTIONS(17),
    [anon_sym_movzbl] = ACTIONS(17),
    [anon_sym_movzwl] = ACTIONS(17),
    [anon_sym_movaps] = ACTIONS(17),
    [anon_sym_movhlps] = ACTIONS(17),
    [anon_sym_movss] = ACTIONS(17),
    [anon_sym_movups] = ACTIONS(17),
    [anon_sym_movsd] = ACTIONS(17),
    [anon_sym_movd] = ACTIONS(17),
    [anon_sym_movhps] = ACTIONS(17),
    [anon_sym_movdqa] = ACTIONS(17),
    [anon_sym_movbe] = ACTIONS(17),
    [anon_sym_movapd] = ACTIONS(17),
    [anon_sym_movdqu] = ACTIONS(17),
    [anon_sym_xchg] = ACTIONS(17),
    [anon_sym_fildl] = ACTIONS(17),
    [anon_sym_fldt] = ACTIONS(17),
    [anon_sym_fstpl] = ACTIONS(17),
    [anon_sym_insb] = ACTIONS(19),
    [anon_sym_insl] = ACTIONS(19),
    [anon_sym_outsb] = ACTIONS(19),
    [anon_sym_outsl] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_orq] = ACTIONS(21),
    [anon_sym_orl] = ACTIONS(21),
    [anon_sym_orb] = ACTIONS(21),
    [anon_sym_orw] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_xorl] = ACTIONS(21),
    [anon_sym_xorw] = ACTIONS(21),
    [anon_sym_xorps] = ACTIONS(21),
    [anon_sym_xorpd] = ACTIONS(21),
    [anon_sym_vxorps] = ACTIONS(21),
    [anon_sym_vpxord] = ACTIONS(21),
    [anon_sym_vpxor] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_andq] = ACTIONS(21),
    [anon_sym_andl] = ACTIONS(21),
    [anon_sym_andw] = ACTIONS(21),
    [anon_sym_andb] = ACTIONS(21),
    [anon_sym_andn] = ACTIONS(21),
    [anon_sym_andpd] = ACTIONS(21),
    [anon_sym_pand] = ACTIONS(21),
    [anon_sym_pandn] = ACTIONS(21),
    [anon_sym_andps] = ACTIONS(21),
    [anon_sym_vpand] = ACTIONS(21),
    [anon_sym_not] = ACTIONS(21),
    [anon_sym_notl] = ACTIONS(21),
    [anon_sym_notw] = ACTIONS(21),
    [anon_sym_cpuid] = ACTIONS(23),
    [anon_sym_lea] = ACTIONS(23),
    [anon_sym_popcnt] = ACTIONS(23),
    [anon_sym_nop] = ACTIONS(23),
    [anon_sym_nopl] = ACTIONS(23),
    [anon_sym_nopw] = ACTIONS(23),
    [anon_sym_ud2] = ACTIONS(23),
    [anon_sym_data16] = ACTIONS(23),
    [anon_sym_sha1rnds4] = ACTIONS(23),
    [anon_sym_addr32] = ACTIONS(23),
    [anon_sym_sha1msg1] = ACTIONS(23),
    [anon_sym_sha1msg2] = ACTIONS(23),
    [anon_sym_sha1nexte] = ACTIONS(23),
    [anon_sym_endbr64] = ACTIONS(23),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(25),
    [anon_sym_packuswb] = ACTIONS(27),
    [anon_sym_punpckhbw] = ACTIONS(27),
    [anon_sym_punpckhdq] = ACTIONS(27),
    [anon_sym_punpckhwd] = ACTIONS(27),
    [anon_sym_punpcklbw] = ACTIONS(27),
    [anon_sym_punpckldq] = ACTIONS(27),
    [anon_sym_punpcklwd] = ACTIONS(27),
    [anon_sym_vpunpcklwd] = ACTIONS(27),
    [anon_sym_vpunpckldq] = ACTIONS(27),
    [anon_sym_punpcklqdq] = ACTIONS(27),
    [anon_sym_punpckhqdq] = ACTIONS(27),
    [anon_sym_vpunpckhqdq] = ACTIONS(27),
    [anon_sym_vpunpckhdq] = ACTIONS(27),
    [anon_sym_vpunpcklqdq] = ACTIONS(27),
    [anon_sym_vpunpckhwd] = ACTIONS(27),
    [anon_sym_rol] = ACTIONS(29),
    [anon_sym_ror] = ACTIONS(29),
    [anon_sym_sar] = ACTIONS(29),
    [anon_sym_sarl] = ACTIONS(29),
    [anon_sym_sarx] = ACTIONS(29),
    [anon_sym_shl] = ACTIONS(29),
    [anon_sym_shll] = ACTIONS(29),
    [anon_sym_shld] = ACTIONS(29),
    [anon_sym_shlx] = ACTIONS(29),
    [anon_sym_shlq] = ACTIONS(29),
    [anon_sym_shr] = ACTIONS(29),
    [anon_sym_shrq] = ACTIONS(29),
    [anon_sym_shrd] = ACTIONS(29),
    [anon_sym_shrl] = ACTIONS(29),
    [anon_sym_shrx] = ACTIONS(29),
    [anon_sym_vprord] = ACTIONS(29),
    [anon_sym_vprorq] = ACTIONS(29),
    [anon_sym_rorl] = ACTIONS(29),
    [anon_sym_roll] = ACTIONS(29),
    [anon_sym_push] = ACTIONS(31),
    [anon_sym_pushq] = ACTIONS(31),
    [anon_sym_pop] = ACTIONS(31),
    [anon_sym_movslq] = ACTIONS(33),
    [anon_sym_movsb] = ACTIONS(33),
    [anon_sym_rep] = ACTIONS(33),
    [anon_sym_repz] = ACTIONS(33),
    [anon_sym_repnz] = ACTIONS(33),
    [anon_sym_rex] = ACTIONS(35),
    [anon_sym_rex_DOTWB] = ACTIONS(35),
    [anon_sym_rex_DOTWRB] = ACTIONS(35),
    [anon_sym_rex_DOTRXB] = ACTIONS(35),
    [anon_sym_rex_DOTB] = ACTIONS(35),
    [anon_sym_rex_DOTWRXB] = ACTIONS(35),
    [anon_sym_rex_DOTXB] = ACTIONS(35),
    [anon_sym_rex_DOTW] = ACTIONS(35),
    [anon_sym_rex_DOTRB] = ACTIONS(35),
    [anon_sym_xgetbv] = ACTIONS(35),
    [anon_sym_fs] = ACTIONS(35),
    [anon_sym_kmovw] = ACTIONS(35),
    [anon_sym_adcx] = ACTIONS(37),
    [anon_sym_adox] = ACTIONS(37),
    [anon_sym_aesdec] = ACTIONS(37),
    [anon_sym_aesdeclast] = ACTIONS(37),
    [anon_sym_aesenc] = ACTIONS(37),
    [anon_sym_aesenclast] = ACTIONS(37),
    [anon_sym_vaesenc] = ACTIONS(37),
    [anon_sym_vaesenclast] = ACTIONS(37),
    [anon_sym_aeskeygenassist] = ACTIONS(37),
    [anon_sym_vblendps] = ACTIONS(37),
    [anon_sym_vblendvps] = ACTIONS(37),
    [anon_sym_vcvtusi2sd] = ACTIONS(37),
    [anon_sym_vdivsd] = ACTIONS(37),
    [anon_sym_vmovaps] = ACTIONS(37),
    [anon_sym_vmovapd] = ACTIONS(37),
    [anon_sym_vmovss] = ACTIONS(37),
    [anon_sym_vmovdqu] = ACTIONS(37),
    [anon_sym_vmovdqu64] = ACTIONS(37),
    [anon_sym_vmovdqu32] = ACTIONS(37),
    [anon_sym_vmovdqa] = ACTIONS(37),
    [anon_sym_vmovdqa32] = ACTIONS(37),
    [anon_sym_vmovdqa64] = ACTIONS(37),
    [anon_sym_vmovq] = ACTIONS(37),
    [anon_sym_vmovups] = ACTIONS(37),
    [anon_sym_vmovd] = ACTIONS(37),
    [anon_sym_vmovsd] = ACTIONS(37),
    [anon_sym_vmulsd] = ACTIONS(37),
    [anon_sym_vpackusdw] = ACTIONS(37),
    [anon_sym_vpaddd] = ACTIONS(37),
    [anon_sym_vpaddb] = ACTIONS(37),
    [anon_sym_vpaddq] = ACTIONS(37),
    [anon_sym_vpaddw] = ACTIONS(37),
    [anon_sym_vpalignr] = ACTIONS(37),
    [anon_sym_vpcmpgtd] = ACTIONS(37),
    [anon_sym_vpextrw] = ACTIONS(37),
    [anon_sym_vpinsrw] = ACTIONS(37),
    [anon_sym_vpinsrd] = ACTIONS(37),
    [anon_sym_vpinsrq] = ACTIONS(37),
    [anon_sym_vpinsrb] = ACTIONS(37),
    [anon_sym_vpmaddubsw] = ACTIONS(37),
    [anon_sym_vpmaddwd] = ACTIONS(37),
    [anon_sym_vpmullw] = ACTIONS(37),
    [anon_sym_vpmuludq] = ACTIONS(37),
    [anon_sym_vpor] = ACTIONS(37),
    [anon_sym_vpshufb] = ACTIONS(37),
    [anon_sym_vpshufd] = ACTIONS(37),
    [anon_sym_vpslldq] = ACTIONS(37),
    [anon_sym_vpslld] = ACTIONS(37),
    [anon_sym_vpsllq] = ACTIONS(37),
    [anon_sym_vpsllw] = ACTIONS(37),
    [anon_sym_vpsrldq] = ACTIONS(37),
    [anon_sym_vpsrld] = ACTIONS(37),
    [anon_sym_vpsrlq] = ACTIONS(37),
    [anon_sym_vpsrlw] = ACTIONS(37),
    [anon_sym_vpsubusw] = ACTIONS(37),
    [anon_sym_vpsubq] = ACTIONS(37),
    [anon_sym_vpsubd] = ACTIONS(37),
    [anon_sym_vpsubw] = ACTIONS(37),
    [anon_sym_vshufps] = ACTIONS(37),
    [anon_sym_vsubsd] = ACTIONS(37),
    [anon_sym_vucomisd] = ACTIONS(37),
    [anon_sym_vucomiss] = ACTIONS(37),
    [anon_sym_vunpckhpd] = ACTIONS(37),
    [anon_sym_vunpckhps] = ACTIONS(37),
    [anon_sym_vunpcklpd] = ACTIONS(37),
    [anon_sym_vunpcklps] = ACTIONS(37),
    [anon_sym_vbroadcastss] = ACTIONS(37),
    [anon_sym_vinsertf128] = ACTIONS(37),
    [anon_sym_vperm2f128] = ACTIONS(37),
    [anon_sym_vzeroall] = ACTIONS(37),
    [anon_sym_vzeroupper] = ACTIONS(37),
    [anon_sym_vshufi32x4] = ACTIONS(37),
    [anon_sym_vshufi64x2] = ACTIONS(37),
    [anon_sym_vpblendmd] = ACTIONS(37),
    [anon_sym_vextracti128] = ACTIONS(37),
    [anon_sym_vextracti32x4] = ACTIONS(37),
    [anon_sym_vinserti128] = ACTIONS(37),
    [anon_sym_vinserti32x4] = ACTIONS(37),
    [anon_sym_vinserti64x4] = ACTIONS(37),
    [anon_sym_vpblendd] = ACTIONS(37),
    [anon_sym_vpbroadcastq] = ACTIONS(37),
    [anon_sym_vpbroadcastd] = ACTIONS(37),
    [anon_sym_vbroadcasti128] = ACTIONS(37),
    [anon_sym_vbroadcasti32x4] = ACTIONS(37),
    [anon_sym_vperm2i128] = ACTIONS(37),
    [anon_sym_vpermd] = ACTIONS(37),
    [anon_sym_vpermq] = ACTIONS(37),
    [anon_sym_vpermt2d] = ACTIONS(37),
    [anon_sym_vpermi2d] = ACTIONS(37),
    [anon_sym_tzcnt] = ACTIONS(37),
    [anon_sym_rorx] = ACTIONS(37),
    [anon_sym_psubd] = ACTIONS(37),
    [anon_sym_pmaddwd] = ACTIONS(37),
    [anon_sym_pxor] = ACTIONS(37),
    [anon_sym_psrad] = ACTIONS(37),
    [anon_sym_pslld] = ACTIONS(37),
    [anon_sym_pcmpgtd] = ACTIONS(37),
    [anon_sym_pcmpeqd] = ACTIONS(37),
    [anon_sym_por] = ACTIONS(37),
    [anon_sym_paddw] = ACTIONS(37),
    [anon_sym_psubusw] = ACTIONS(37),
    [anon_sym_pcmpeqb] = ACTIONS(37),
    [anon_sym_psubusb] = ACTIONS(37),
    [anon_sym_psrld] = ACTIONS(37),
    [anon_sym_psrlw] = ACTIONS(37),
    [anon_sym_psllq] = ACTIONS(37),
    [anon_sym_paddd] = ACTIONS(37),
    [anon_sym_psrlq] = ACTIONS(37),
    [anon_sym_psubb] = ACTIONS(37),
    [anon_sym_maxss] = ACTIONS(37),
    [anon_sym_pmovmskb] = ACTIONS(37),
    [anon_sym_pinsrw] = ACTIONS(37),
    [anon_sym_minss] = ACTIONS(37),
    [anon_sym_prefetcht1] = ACTIONS(37),
    [anon_sym_prefetcht0] = ACTIONS(37),
    [anon_sym_pextrw] = ACTIONS(37),
    [anon_sym_ucomiss] = ACTIONS(37),
    [anon_sym_shufps] = ACTIONS(37),
    [anon_sym_addsd] = ACTIONS(37),
    [anon_sym_paddq] = ACTIONS(37),
    [anon_sym_psubq] = ACTIONS(37),
    [anon_sym_pshuflw] = ACTIONS(37),
    [anon_sym_pmuludq] = ACTIONS(37),
    [anon_sym_pshufd] = ACTIONS(37),
    [anon_sym_minsd] = ACTIONS(37),
    [anon_sym_pshufhw] = ACTIONS(37),
    [anon_sym_mfence] = ACTIONS(37),
    [anon_sym_maxsd] = ACTIONS(37),
    [anon_sym_ucomisd] = ACTIONS(37),
    [anon_sym_shufpd] = ACTIONS(37),
    [anon_sym_pslldq] = ACTIONS(37),
    [anon_sym_unpckhpd] = ACTIONS(37),
    [anon_sym_psrldq] = ACTIONS(37),
    [anon_sym_palignr] = ACTIONS(37),
    [anon_sym_pshufb] = ACTIONS(37),
    [anon_sym_pmaddubsw] = ACTIONS(37),
    [anon_sym_pinsrb] = ACTIONS(37),
    [anon_sym_pblendw] = ACTIONS(37),
    [anon_sym_pextrq] = ACTIONS(37),
    [anon_sym_blendvps] = ACTIONS(37),
    [anon_sym_pextrb] = ACTIONS(37),
    [anon_sym_pinsrd] = ACTIONS(37),
    [anon_sym_femms] = ACTIONS(37),
    [anon_sym_f] = ACTIONS(39),
    [aux_sym_operand_token1] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(45),
    [anon_sym_PERCENTss] = ACTIONS(47),
    [anon_sym_PERCENTcs] = ACTIONS(47),
    [anon_sym_PERCENTds] = ACTIONS(47),
    [anon_sym_PERCENTes] = ACTIONS(47),
    [anon_sym_PERCENTfs] = ACTIONS(47),
    [anon_sym_PERCENTgs] = ACTIONS(47),
    [anon_sym_PERCENTrax] = ACTIONS(49),
    [anon_sym_PERCENTrbx] = ACTIONS(49),
    [anon_sym_PERCENTrcx] = ACTIONS(49),
    [anon_sym_PERCENTrdx] = ACTIONS(49),
    [anon_sym_PERCENTrsi] = ACTIONS(49),
    [anon_sym_PERCENTrdi] = ACTIONS(49),
    [anon_sym_PERCENTrbp] = ACTIONS(49),
    [anon_sym_PERCENTrsp] = ACTIONS(49),
    [anon_sym_PERCENTr8] = ACTIONS(49),
    [anon_sym_PERCENTr9] = ACTIONS(49),
    [anon_sym_PERCENTr10] = ACTIONS(49),
    [anon_sym_PERCENTr11] = ACTIONS(49),
    [anon_sym_PERCENTr12] = ACTIONS(49),
    [anon_sym_PERCENTr13] = ACTIONS(49),
    [anon_sym_PERCENTr14] = ACTIONS(49),
    [anon_sym_PERCENTr15] = ACTIONS(49),
    [anon_sym_PERCENTeax] = ACTIONS(51),
    [anon_sym_PERCENTecx] = ACTIONS(51),
    [anon_sym_PERCENTedx] = ACTIONS(51),
    [anon_sym_PERCENTebx] = ACTIONS(51),
    [anon_sym_PERCENTesi] = ACTIONS(51),
    [anon_sym_PERCENTedi] = ACTIONS(51),
    [anon_sym_PERCENTebp] = ACTIONS(51),
    [anon_sym_PERCENTesp] = ACTIONS(51),
    [anon_sym_PERCENTr8d] = ACTIONS(51),
    [anon_sym_PERCENTr9d] = ACTIONS(51),
    [anon_sym_PERCENTr10d] = ACTIONS(51),
    [anon_sym_PERCENTr11d] = ACTIONS(51),
    [anon_sym_PERCENTr12d] = ACTIONS(51),
    [anon_sym_PERCENTr13d] = ACTIONS(51),
    [anon_sym_PERCENTr14d] = ACTIONS(51),
    [anon_sym_PERCENTr15d] = ACTIONS(51),
    [anon_sym_PERCENTax] = ACTIONS(53),
    [anon_sym_PERCENTcx] = ACTIONS(53),
    [anon_sym_PERCENTdx] = ACTIONS(53),
    [anon_sym_PERCENTbx] = ACTIONS(53),
    [anon_sym_PERCENTsi] = ACTIONS(53),
    [anon_sym_PERCENTdi] = ACTIONS(53),
    [anon_sym_PERCENTsp] = ACTIONS(53),
    [anon_sym_PERCENTbp] = ACTIONS(53),
    [anon_sym_PERCENTr8w] = ACTIONS(53),
    [anon_sym_PERCENTr9w] = ACTIONS(53),
    [anon_sym_PERCENTr10w] = ACTIONS(53),
    [anon_sym_PERCENTr11w] = ACTIONS(53),
    [anon_sym_PERCENTr12w] = ACTIONS(53),
    [anon_sym_PERCENTr13w] = ACTIONS(53),
    [anon_sym_PERCENTr14w] = ACTIONS(53),
    [anon_sym_PERCENTr15w] = ACTIONS(53),
    [anon_sym_PERCENTal] = ACTIONS(55),
    [anon_sym_PERCENTcl] = ACTIONS(55),
    [anon_sym_PERCENTdl] = ACTIONS(55),
    [anon_sym_PERCENTbl] = ACTIONS(55),
    [anon_sym_PERCENTsil] = ACTIONS(55),
    [anon_sym_PERCENTdil] = ACTIONS(55),
    [anon_sym_PERCENTspl] = ACTIONS(55),
    [anon_sym_PERCENTbpl] = ACTIONS(55),
    [anon_sym_PERCENTr8b] = ACTIONS(55),
    [anon_sym_PERCENTr9b] = ACTIONS(55),
    [anon_sym_PERCENTr10b] = ACTIONS(55),
    [anon_sym_PERCENTr11b] = ACTIONS(55),
    [anon_sym_PERCENTr12b] = ACTIONS(55),
    [anon_sym_PERCENTr13b] = ACTIONS(55),
    [anon_sym_PERCENTr14b] = ACTIONS(55),
    [anon_sym_PERCENTr15b] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_movsq] = ACTIONS(61),
    [anon_sym_cmpsb] = ACTIONS(61),
    [anon_sym_cmpxchg] = ACTIONS(61),
    [anon_sym_movsl] = ACTIONS(61),
    [anon_sym_callq] = ACTIONS(63),
    [anon_sym_ja] = ACTIONS(63),
    [anon_sym_jae] = ACTIONS(63),
    [anon_sym_jb] = ACTIONS(63),
    [anon_sym_jbe] = ACTIONS(63),
    [anon_sym_je] = ACTIONS(63),
    [anon_sym_jg] = ACTIONS(63),
    [anon_sym_jge] = ACTIONS(63),
    [anon_sym_jl] = ACTIONS(63),
    [anon_sym_jle] = ACTIONS(63),
    [anon_sym_jmp] = ACTIONS(63),
    [anon_sym_jmpq] = ACTIONS(63),
    [anon_sym_jne] = ACTIONS(63),
    [anon_sym_jno] = ACTIONS(63),
    [anon_sym_jns] = ACTIONS(63),
    [anon_sym_jo] = ACTIONS(63),
    [anon_sym_jp] = ACTIONS(63),
    [anon_sym_jrcxz] = ACTIONS(63),
    [anon_sym_js] = ACTIONS(63),
    [anon_sym_notrack] = ACTIONS(63),
    [anon_sym_PERCENTcr0] = ACTIONS(65),
    [anon_sym_PERCENTcr2] = ACTIONS(65),
    [anon_sym_PERCENTcr3] = ACTIONS(65),
    [anon_sym_PERCENTcr4] = ACTIONS(65),
    [anon_sym_PERCENTrip] = ACTIONS(67),
    [anon_sym_PERCENTeip] = ACTIONS(67),
    [anon_sym_PERCENTip] = ACTIONS(67),
    [anon_sym_PERCENTst] = ACTIONS(69),
    [anon_sym_PERCENT] = ACTIONS(71),
  },
  [4] = {
    [sym_opcode] = STATE(207),
    [sym_BinaryArithmeticOpcode] = STATE(246),
    [sym_BitAndByteOpcode] = STATE(246),
    [sym_CuriousOpcode] = STATE(246),
    [sym_DataTransferOpcode] = STATE(246),
    [sym_IOOpcode] = STATE(246),
    [sym_LogicalOpcode] = STATE(246),
    [sym_MiscellaneousOpcode] = STATE(246),
    [sym_PackUnpackOpcode] = STATE(246),
    [sym_ShiftAndRotateOpcode] = STATE(246),
    [sym_StackOpcode] = STATE(246),
    [sym_StringOpcode] = STATE(246),
    [sym_AccessRegisterOpcode] = STATE(246),
    [sym_ToBeClassifiedOpcode] = STATE(246),
    [sym_operand] = STATE(254),
    [sym_immediateOperand] = STATE(207),
    [sym_registerOperand] = STATE(207),
    [sym_segmentRegisterOperand] = STATE(191),
    [sym_generalRegisterOperand] = STATE(183),
    [sym_generalRegister64Bits] = STATE(182),
    [sym_generalRegister32Bits] = STATE(182),
    [sym_generalRegister16Bits] = STATE(182),
    [sym_generalRegister8Bits] = STATE(182),
    [sym_memoryOperand] = STATE(207),
    [sym_memoryScalaredIndexedOperand] = STATE(210),
    [sym_memorySegmentBaseOperand] = STATE(210),
    [sym_memoryIndirectOperand] = STATE(210),
    [sym_offset] = STATE(312),
    [sym_memoryAbsoluteOperand] = STATE(210),
    [sym_someOpcode] = STATE(207),
    [sym_callqOpcode] = STATE(207),
    [sym_controlRegisterOperand] = STATE(183),
    [sym_instructionRegisterOperand] = STATE(183),
    [sym_floatRegisterOperand] = STATE(183),
    [sym_otherRegisterOperand] = STATE(183),
    [aux_sym_instruction_repeat1] = STATE(4),
    [aux_sym_operand_repeat1] = STATE(130),
    [aux_sym_comment_token1] = ACTIONS(77),
    [aux_sym_comment_token2] = ACTIONS(77),
    [sym__line_break] = ACTIONS(79),
    [anon_sym_adc] = ACTIONS(81),
    [anon_sym_add] = ACTIONS(81),
    [anon_sym_addq] = ACTIONS(81),
    [anon_sym_addl] = ACTIONS(81),
    [anon_sym_addss] = ACTIONS(81),
    [anon_sym_addw] = ACTIONS(81),
    [anon_sym_addb] = ACTIONS(81),
    [anon_sym_cmp] = ACTIONS(81),
    [anon_sym_cmpb] = ACTIONS(81),
    [anon_sym_cmpw] = ACTIONS(81),
    [anon_sym_cmpl] = ACTIONS(81),
    [anon_sym_cmpq] = ACTIONS(81),
    [anon_sym_comiss] = ACTIONS(81),
    [anon_sym_comisd] = ACTIONS(81),
    [anon_sym_inc] = ACTIONS(81),
    [anon_sym_incl] = ACTIONS(81),
    [anon_sym_dec] = ACTIONS(81),
    [anon_sym_div] = ACTIONS(81),
    [anon_sym_divq] = ACTIONS(81),
    [anon_sym_divl] = ACTIONS(81),
    [anon_sym_divss] = ACTIONS(81),
    [anon_sym_divsd] = ACTIONS(81),
    [anon_sym_idiv] = ACTIONS(81),
    [anon_sym_idivl] = ACTIONS(81),
    [anon_sym_sub] = ACTIONS(81),
    [anon_sym_subq] = ACTIONS(81),
    [anon_sym_subl] = ACTIONS(81),
    [anon_sym_subss] = ACTIONS(81),
    [anon_sym_subw] = ACTIONS(81),
    [anon_sym_subb] = ACTIONS(81),
    [anon_sym_subsd] = ACTIONS(81),
    [anon_sym_subpd] = ACTIONS(81),
    [anon_sym_sbb] = ACTIONS(81),
    [anon_sym_mul] = ACTIONS(81),
    [anon_sym_mulq] = ACTIONS(81),
    [anon_sym_mull] = ACTIONS(81),
    [anon_sym_mulss] = ACTIONS(81),
    [anon_sym_mulw] = ACTIONS(81),
    [anon_sym_mulb] = ACTIONS(81),
    [anon_sym_mulsd] = ACTIONS(81),
    [anon_sym_mulx] = ACTIONS(81),
    [anon_sym_imul] = ACTIONS(81),
    [anon_sym_neg] = ACTIONS(81),
    [anon_sym_negl] = ACTIONS(81),
    [anon_sym_negq] = ACTIONS(81),
    [anon_sym_fmulp] = ACTIONS(81),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(81),
    [anon_sym_pclmullqlqdq] = ACTIONS(81),
    [anon_sym_pclmullqhqdq] = ACTIONS(81),
    [anon_sym_vpclmullqhqdq] = ACTIONS(81),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(81),
    [anon_sym_pclmulhqhqdq] = ACTIONS(81),
    [anon_sym_vpclmullqlqdq] = ACTIONS(81),
    [anon_sym_bsf] = ACTIONS(84),
    [anon_sym_bsr] = ACTIONS(84),
    [anon_sym_bts] = ACTIONS(84),
    [anon_sym_bt] = ACTIONS(84),
    [anon_sym_btr] = ACTIONS(84),
    [anon_sym_btl] = ACTIONS(84),
    [anon_sym_setne] = ACTIONS(84),
    [anon_sym_setb] = ACTIONS(84),
    [anon_sym_sete] = ACTIONS(84),
    [anon_sym_setbe] = ACTIONS(84),
    [anon_sym_seta] = ACTIONS(84),
    [anon_sym_setge] = ACTIONS(84),
    [anon_sym_setae] = ACTIONS(84),
    [anon_sym_setl] = ACTIONS(84),
    [anon_sym_setle] = ACTIONS(84),
    [anon_sym_setg] = ACTIONS(84),
    [anon_sym_seto] = ACTIONS(84),
    [anon_sym_setnp] = ACTIONS(84),
    [anon_sym_setp] = ACTIONS(84),
    [anon_sym_setns] = ACTIONS(84),
    [anon_sym_test] = ACTIONS(84),
    [anon_sym_testb] = ACTIONS(84),
    [anon_sym_testl] = ACTIONS(84),
    [anon_sym_knotw] = ACTIONS(84),
    [anon_sym_vpcmpltud] = ACTIONS(87),
    [anon_sym_gs] = ACTIONS(87),
    [anon_sym_re] = ACTIONS(87),
    [anon_sym_ss] = ACTIONS(87),
    [anon_sym_leaveq] = ACTIONS(87),
    [anon_sym_retq] = ACTIONS(87),
    [anon_sym_bswap] = ACTIONS(90),
    [anon_sym_cbtw] = ACTIONS(90),
    [anon_sym_cltd] = ACTIONS(90),
    [anon_sym_cltq] = ACTIONS(90),
    [anon_sym_cmovbe] = ACTIONS(90),
    [anon_sym_cmovl] = ACTIONS(90),
    [anon_sym_cmovae] = ACTIONS(90),
    [anon_sym_cmovo] = ACTIONS(90),
    [anon_sym_cmovne] = ACTIONS(90),
    [anon_sym_cmovns] = ACTIONS(90),
    [anon_sym_cmovg] = ACTIONS(90),
    [anon_sym_cmovp] = ACTIONS(90),
    [anon_sym_cmove] = ACTIONS(90),
    [anon_sym_cmovge] = ACTIONS(90),
    [anon_sym_cmovb] = ACTIONS(90),
    [anon_sym_cmova] = ACTIONS(90),
    [anon_sym_cmovle] = ACTIONS(90),
    [anon_sym_cmovs] = ACTIONS(90),
    [anon_sym_cwtl] = ACTIONS(90),
    [anon_sym_cwtd] = ACTIONS(90),
    [anon_sym_cqto] = ACTIONS(90),
    [anon_sym_cvttsd2si] = ACTIONS(90),
    [anon_sym_cvtss2sd] = ACTIONS(90),
    [anon_sym_cvttss2si] = ACTIONS(90),
    [anon_sym_cvtsi2sd] = ACTIONS(90),
    [anon_sym_cvtsi2ss] = ACTIONS(90),
    [anon_sym_cvtsi2sdq] = ACTIONS(90),
    [anon_sym_cvtsi2sdl] = ACTIONS(90),
    [anon_sym_cvtsd2ss] = ACTIONS(90),
    [anon_sym_cvtsi2ssl] = ACTIONS(90),
    [anon_sym_mov] = ACTIONS(90),
    [anon_sym_movw] = ACTIONS(90),
    [anon_sym_movl] = ACTIONS(90),
    [anon_sym_movq] = ACTIONS(90),
    [anon_sym_movb] = ACTIONS(90),
    [anon_sym_movabs] = ACTIONS(90),
    [anon_sym_movsbw] = ACTIONS(90),
    [anon_sym_movsbq] = ACTIONS(90),
    [anon_sym_movsbl] = ACTIONS(90),
    [anon_sym_movswl] = ACTIONS(90),
    [anon_sym_movswq] = ACTIONS(90),
    [anon_sym_movzbw] = ACTIONS(90),
    [anon_sym_movzbq] = ACTIONS(90),
    [anon_sym_movzbl] = ACTIONS(90),
    [anon_sym_movzwl] = ACTIONS(90),
    [anon_sym_movaps] = ACTIONS(90),
    [anon_sym_movhlps] = ACTIONS(90),
    [anon_sym_movss] = ACTIONS(90),
    [anon_sym_movups] = ACTIONS(90),
    [anon_sym_movsd] = ACTIONS(90),
    [anon_sym_movd] = ACTIONS(90),
    [anon_sym_movhps] = ACTIONS(90),
    [anon_sym_movdqa] = ACTIONS(90),
    [anon_sym_movbe] = ACTIONS(90),
    [anon_sym_movapd] = ACTIONS(90),
    [anon_sym_movdqu] = ACTIONS(90),
    [anon_sym_xchg] = ACTIONS(90),
    [anon_sym_fildl] = ACTIONS(90),
    [anon_sym_fldt] = ACTIONS(90),
    [anon_sym_fstpl] = ACTIONS(90),
    [anon_sym_insb] = ACTIONS(93),
    [anon_sym_insl] = ACTIONS(93),
    [anon_sym_outsb] = ACTIONS(93),
    [anon_sym_outsl] = ACTIONS(93),
    [anon_sym_or] = ACTIONS(96),
    [anon_sym_orq] = ACTIONS(96),
    [anon_sym_orl] = ACTIONS(96),
    [anon_sym_orb] = ACTIONS(96),
    [anon_sym_orw] = ACTIONS(96),
    [anon_sym_xor] = ACTIONS(96),
    [anon_sym_xorl] = ACTIONS(96),
    [anon_sym_xorw] = ACTIONS(96),
    [anon_sym_xorps] = ACTIONS(96),
    [anon_sym_xorpd] = ACTIONS(96),
    [anon_sym_vxorps] = ACTIONS(96),
    [anon_sym_vpxord] = ACTIONS(96),
    [anon_sym_vpxor] = ACTIONS(96),
    [anon_sym_and] = ACTIONS(96),
    [anon_sym_andq] = ACTIONS(96),
    [anon_sym_andl] = ACTIONS(96),
    [anon_sym_andw] = ACTIONS(96),
    [anon_sym_andb] = ACTIONS(96),
    [anon_sym_andn] = ACTIONS(96),
    [anon_sym_andpd] = ACTIONS(96),
    [anon_sym_pand] = ACTIONS(96),
    [anon_sym_pandn] = ACTIONS(96),
    [anon_sym_andps] = ACTIONS(96),
    [anon_sym_vpand] = ACTIONS(96),
    [anon_sym_not] = ACTIONS(96),
    [anon_sym_notl] = ACTIONS(96),
    [anon_sym_notw] = ACTIONS(96),
    [anon_sym_cpuid] = ACTIONS(99),
    [anon_sym_lea] = ACTIONS(99),
    [anon_sym_popcnt] = ACTIONS(99),
    [anon_sym_nop] = ACTIONS(99),
    [anon_sym_nopl] = ACTIONS(99),
    [anon_sym_nopw] = ACTIONS(99),
    [anon_sym_ud2] = ACTIONS(99),
    [anon_sym_data16] = ACTIONS(99),
    [anon_sym_sha1rnds4] = ACTIONS(99),
    [anon_sym_addr32] = ACTIONS(99),
    [anon_sym_sha1msg1] = ACTIONS(99),
    [anon_sym_sha1msg2] = ACTIONS(99),
    [anon_sym_sha1nexte] = ACTIONS(99),
    [anon_sym_endbr64] = ACTIONS(99),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(102),
    [anon_sym_packuswb] = ACTIONS(105),
    [anon_sym_punpckhbw] = ACTIONS(105),
    [anon_sym_punpckhdq] = ACTIONS(105),
    [anon_sym_punpckhwd] = ACTIONS(105),
    [anon_sym_punpcklbw] = ACTIONS(105),
    [anon_sym_punpckldq] = ACTIONS(105),
    [anon_sym_punpcklwd] = ACTIONS(105),
    [anon_sym_vpunpcklwd] = ACTIONS(105),
    [anon_sym_vpunpckldq] = ACTIONS(105),
    [anon_sym_punpcklqdq] = ACTIONS(105),
    [anon_sym_punpckhqdq] = ACTIONS(105),
    [anon_sym_vpunpckhqdq] = ACTIONS(105),
    [anon_sym_vpunpckhdq] = ACTIONS(105),
    [anon_sym_vpunpcklqdq] = ACTIONS(105),
    [anon_sym_vpunpckhwd] = ACTIONS(105),
    [anon_sym_rol] = ACTIONS(108),
    [anon_sym_ror] = ACTIONS(108),
    [anon_sym_sar] = ACTIONS(108),
    [anon_sym_sarl] = ACTIONS(108),
    [anon_sym_sarx] = ACTIONS(108),
    [anon_sym_shl] = ACTIONS(108),
    [anon_sym_shll] = ACTIONS(108),
    [anon_sym_shld] = ACTIONS(108),
    [anon_sym_shlx] = ACTIONS(108),
    [anon_sym_shlq] = ACTIONS(108),
    [anon_sym_shr] = ACTIONS(108),
    [anon_sym_shrq] = ACTIONS(108),
    [anon_sym_shrd] = ACTIONS(108),
    [anon_sym_shrl] = ACTIONS(108),
    [anon_sym_shrx] = ACTIONS(108),
    [anon_sym_vprord] = ACTIONS(108),
    [anon_sym_vprorq] = ACTIONS(108),
    [anon_sym_rorl] = ACTIONS(108),
    [anon_sym_roll] = ACTIONS(108),
    [anon_sym_push] = ACTIONS(111),
    [anon_sym_pushq] = ACTIONS(111),
    [anon_sym_pop] = ACTIONS(111),
    [anon_sym_movslq] = ACTIONS(114),
    [anon_sym_movsb] = ACTIONS(114),
    [anon_sym_rep] = ACTIONS(114),
    [anon_sym_repz] = ACTIONS(114),
    [anon_sym_repnz] = ACTIONS(114),
    [anon_sym_rex] = ACTIONS(117),
    [anon_sym_rex_DOTWB] = ACTIONS(117),
    [anon_sym_rex_DOTWRB] = ACTIONS(117),
    [anon_sym_rex_DOTRXB] = ACTIONS(117),
    [anon_sym_rex_DOTB] = ACTIONS(117),
    [anon_sym_rex_DOTWRXB] = ACTIONS(117),
    [anon_sym_rex_DOTXB] = ACTIONS(117),
    [anon_sym_rex_DOTW] = ACTIONS(117),
    [anon_sym_rex_DOTRB] = ACTIONS(117),
    [anon_sym_xgetbv] = ACTIONS(117),
    [anon_sym_fs] = ACTIONS(117),
    [anon_sym_kmovw] = ACTIONS(117),
    [anon_sym_adcx] = ACTIONS(120),
    [anon_sym_adox] = ACTIONS(120),
    [anon_sym_aesdec] = ACTIONS(120),
    [anon_sym_aesdeclast] = ACTIONS(120),
    [anon_sym_aesenc] = ACTIONS(120),
    [anon_sym_aesenclast] = ACTIONS(120),
    [anon_sym_vaesenc] = ACTIONS(120),
    [anon_sym_vaesenclast] = ACTIONS(120),
    [anon_sym_aeskeygenassist] = ACTIONS(120),
    [anon_sym_vblendps] = ACTIONS(120),
    [anon_sym_vblendvps] = ACTIONS(120),
    [anon_sym_vcvtusi2sd] = ACTIONS(120),
    [anon_sym_vdivsd] = ACTIONS(120),
    [anon_sym_vmovaps] = ACTIONS(120),
    [anon_sym_vmovapd] = ACTIONS(120),
    [anon_sym_vmovss] = ACTIONS(120),
    [anon_sym_vmovdqu] = ACTIONS(120),
    [anon_sym_vmovdqu64] = ACTIONS(120),
    [anon_sym_vmovdqu32] = ACTIONS(120),
    [anon_sym_vmovdqa] = ACTIONS(120),
    [anon_sym_vmovdqa32] = ACTIONS(120),
    [anon_sym_vmovdqa64] = ACTIONS(120),
    [anon_sym_vmovq] = ACTIONS(120),
    [anon_sym_vmovups] = ACTIONS(120),
    [anon_sym_vmovd] = ACTIONS(120),
    [anon_sym_vmovsd] = ACTIONS(120),
    [anon_sym_vmulsd] = ACTIONS(120),
    [anon_sym_vpackusdw] = ACTIONS(120),
    [anon_sym_vpaddd] = ACTIONS(120),
    [anon_sym_vpaddb] = ACTIONS(120),
    [anon_sym_vpaddq] = ACTIONS(120),
    [anon_sym_vpaddw] = ACTIONS(120),
    [anon_sym_vpalignr] = ACTIONS(120),
    [anon_sym_vpcmpgtd] = ACTIONS(120),
    [anon_sym_vpextrw] = ACTIONS(120),
    [anon_sym_vpinsrw] = ACTIONS(120),
    [anon_sym_vpinsrd] = ACTIONS(120),
    [anon_sym_vpinsrq] = ACTIONS(120),
    [anon_sym_vpinsrb] = ACTIONS(120),
    [anon_sym_vpmaddubsw] = ACTIONS(120),
    [anon_sym_vpmaddwd] = ACTIONS(120),
    [anon_sym_vpmullw] = ACTIONS(120),
    [anon_sym_vpmuludq] = ACTIONS(120),
    [anon_sym_vpor] = ACTIONS(120),
    [anon_sym_vpshufb] = ACTIONS(120),
    [anon_sym_vpshufd] = ACTIONS(120),
    [anon_sym_vpslldq] = ACTIONS(120),
    [anon_sym_vpslld] = ACTIONS(120),
    [anon_sym_vpsllq] = ACTIONS(120),
    [anon_sym_vpsllw] = ACTIONS(120),
    [anon_sym_vpsrldq] = ACTIONS(120),
    [anon_sym_vpsrld] = ACTIONS(120),
    [anon_sym_vpsrlq] = ACTIONS(120),
    [anon_sym_vpsrlw] = ACTIONS(120),
    [anon_sym_vpsubusw] = ACTIONS(120),
    [anon_sym_vpsubq] = ACTIONS(120),
    [anon_sym_vpsubd] = ACTIONS(120),
    [anon_sym_vpsubw] = ACTIONS(120),
    [anon_sym_vshufps] = ACTIONS(120),
    [anon_sym_vsubsd] = ACTIONS(120),
    [anon_sym_vucomisd] = ACTIONS(120),
    [anon_sym_vucomiss] = ACTIONS(120),
    [anon_sym_vunpckhpd] = ACTIONS(120),
    [anon_sym_vunpckhps] = ACTIONS(120),
    [anon_sym_vunpcklpd] = ACTIONS(120),
    [anon_sym_vunpcklps] = ACTIONS(120),
    [anon_sym_vbroadcastss] = ACTIONS(120),
    [anon_sym_vinsertf128] = ACTIONS(120),
    [anon_sym_vperm2f128] = ACTIONS(120),
    [anon_sym_vzeroall] = ACTIONS(120),
    [anon_sym_vzeroupper] = ACTIONS(120),
    [anon_sym_vshufi32x4] = ACTIONS(120),
    [anon_sym_vshufi64x2] = ACTIONS(120),
    [anon_sym_vpblendmd] = ACTIONS(120),
    [anon_sym_vextracti128] = ACTIONS(120),
    [anon_sym_vextracti32x4] = ACTIONS(120),
    [anon_sym_vinserti128] = ACTIONS(120),
    [anon_sym_vinserti32x4] = ACTIONS(120),
    [anon_sym_vinserti64x4] = ACTIONS(120),
    [anon_sym_vpblendd] = ACTIONS(120),
    [anon_sym_vpbroadcastq] = ACTIONS(120),
    [anon_sym_vpbroadcastd] = ACTIONS(120),
    [anon_sym_vbroadcasti128] = ACTIONS(120),
    [anon_sym_vbroadcasti32x4] = ACTIONS(120),
    [anon_sym_vperm2i128] = ACTIONS(120),
    [anon_sym_vpermd] = ACTIONS(120),
    [anon_sym_vpermq] = ACTIONS(120),
    [anon_sym_vpermt2d] = ACTIONS(120),
    [anon_sym_vpermi2d] = ACTIONS(120),
    [anon_sym_tzcnt] = ACTIONS(120),
    [anon_sym_rorx] = ACTIONS(120),
    [anon_sym_psubd] = ACTIONS(120),
    [anon_sym_pmaddwd] = ACTIONS(120),
    [anon_sym_pxor] = ACTIONS(120),
    [anon_sym_psrad] = ACTIONS(120),
    [anon_sym_pslld] = ACTIONS(120),
    [anon_sym_pcmpgtd] = ACTIONS(120),
    [anon_sym_pcmpeqd] = ACTIONS(120),
    [anon_sym_por] = ACTIONS(120),
    [anon_sym_paddw] = ACTIONS(120),
    [anon_sym_psubusw] = ACTIONS(120),
    [anon_sym_pcmpeqb] = ACTIONS(120),
    [anon_sym_psubusb] = ACTIONS(120),
    [anon_sym_psrld] = ACTIONS(120),
    [anon_sym_psrlw] = ACTIONS(120),
    [anon_sym_psllq] = ACTIONS(120),
    [anon_sym_paddd] = ACTIONS(120),
    [anon_sym_psrlq] = ACTIONS(120),
    [anon_sym_psubb] = ACTIONS(120),
    [anon_sym_maxss] = ACTIONS(120),
    [anon_sym_pmovmskb] = ACTIONS(120),
    [anon_sym_pinsrw] = ACTIONS(120),
    [anon_sym_minss] = ACTIONS(120),
    [anon_sym_prefetcht1] = ACTIONS(120),
    [anon_sym_prefetcht0] = ACTIONS(120),
    [anon_sym_pextrw] = ACTIONS(120),
    [anon_sym_ucomiss] = ACTIONS(120),
    [anon_sym_shufps] = ACTIONS(120),
    [anon_sym_addsd] = ACTIONS(120),
    [anon_sym_paddq] = ACTIONS(120),
    [anon_sym_psubq] = ACTIONS(120),
    [anon_sym_pshuflw] = ACTIONS(120),
    [anon_sym_pmuludq] = ACTIONS(120),
    [anon_sym_pshufd] = ACTIONS(120),
    [anon_sym_minsd] = ACTIONS(120),
    [anon_sym_pshufhw] = ACTIONS(120),
    [anon_sym_mfence] = ACTIONS(120),
    [anon_sym_maxsd] = ACTIONS(120),
    [anon_sym_ucomisd] = ACTIONS(120),
    [anon_sym_shufpd] = ACTIONS(120),
    [anon_sym_pslldq] = ACTIONS(120),
    [anon_sym_unpckhpd] = ACTIONS(120),
    [anon_sym_psrldq] = ACTIONS(120),
    [anon_sym_palignr] = ACTIONS(120),
    [anon_sym_pshufb] = ACTIONS(120),
    [anon_sym_pmaddubsw] = ACTIONS(120),
    [anon_sym_pinsrb] = ACTIONS(120),
    [anon_sym_pblendw] = ACTIONS(120),
    [anon_sym_pextrq] = ACTIONS(120),
    [anon_sym_blendvps] = ACTIONS(120),
    [anon_sym_pextrb] = ACTIONS(120),
    [anon_sym_pinsrd] = ACTIONS(120),
    [anon_sym_femms] = ACTIONS(120),
    [anon_sym_f] = ACTIONS(123),
    [aux_sym_operand_token1] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_DOLLAR] = ACTIONS(132),
    [anon_sym_PERCENTss] = ACTIONS(135),
    [anon_sym_PERCENTcs] = ACTIONS(135),
    [anon_sym_PERCENTds] = ACTIONS(135),
    [anon_sym_PERCENTes] = ACTIONS(135),
    [anon_sym_PERCENTfs] = ACTIONS(135),
    [anon_sym_PERCENTgs] = ACTIONS(135),
    [anon_sym_PERCENTrax] = ACTIONS(138),
    [anon_sym_PERCENTrbx] = ACTIONS(138),
    [anon_sym_PERCENTrcx] = ACTIONS(138),
    [anon_sym_PERCENTrdx] = ACTIONS(138),
    [anon_sym_PERCENTrsi] = ACTIONS(138),
    [anon_sym_PERCENTrdi] = ACTIONS(138),
    [anon_sym_PERCENTrbp] = ACTIONS(138),
    [anon_sym_PERCENTrsp] = ACTIONS(138),
    [anon_sym_PERCENTr8] = ACTIONS(138),
    [anon_sym_PERCENTr9] = ACTIONS(138),
    [anon_sym_PERCENTr10] = ACTIONS(138),
    [anon_sym_PERCENTr11] = ACTIONS(138),
    [anon_sym_PERCENTr12] = ACTIONS(138),
    [anon_sym_PERCENTr13] = ACTIONS(138),
    [anon_sym_PERCENTr14] = ACTIONS(138),
    [anon_sym_PERCENTr15] = ACTIONS(138),
    [anon_sym_PERCENTeax] = ACTIONS(141),
    [anon_sym_PERCENTecx] = ACTIONS(141),
    [anon_sym_PERCENTedx] = ACTIONS(141),
    [anon_sym_PERCENTebx] = ACTIONS(141),
    [anon_sym_PERCENTesi] = ACTIONS(141),
    [anon_sym_PERCENTedi] = ACTIONS(141),
    [anon_sym_PERCENTebp] = ACTIONS(141),
    [anon_sym_PERCENTesp] = ACTIONS(141),
    [anon_sym_PERCENTr8d] = ACTIONS(141),
    [anon_sym_PERCENTr9d] = ACTIONS(141),
    [anon_sym_PERCENTr10d] = ACTIONS(141),
    [anon_sym_PERCENTr11d] = ACTIONS(141),
    [anon_sym_PERCENTr12d] = ACTIONS(141),
    [anon_sym_PERCENTr13d] = ACTIONS(141),
    [anon_sym_PERCENTr14d] = ACTIONS(141),
    [anon_sym_PERCENTr15d] = ACTIONS(141),
    [anon_sym_PERCENTax] = ACTIONS(144),
    [anon_sym_PERCENTcx] = ACTIONS(144),
    [anon_sym_PERCENTdx] = ACTIONS(144),
    [anon_sym_PERCENTbx] = ACTIONS(144),
    [anon_sym_PERCENTsi] = ACTIONS(144),
    [anon_sym_PERCENTdi] = ACTIONS(144),
    [anon_sym_PERCENTsp] = ACTIONS(144),
    [anon_sym_PERCENTbp] = ACTIONS(144),
    [anon_sym_PERCENTr8w] = ACTIONS(144),
    [anon_sym_PERCENTr9w] = ACTIONS(144),
    [anon_sym_PERCENTr10w] = ACTIONS(144),
    [anon_sym_PERCENTr11w] = ACTIONS(144),
    [anon_sym_PERCENTr12w] = ACTIONS(144),
    [anon_sym_PERCENTr13w] = ACTIONS(144),
    [anon_sym_PERCENTr14w] = ACTIONS(144),
    [anon_sym_PERCENTr15w] = ACTIONS(144),
    [anon_sym_PERCENTal] = ACTIONS(147),
    [anon_sym_PERCENTcl] = ACTIONS(147),
    [anon_sym_PERCENTdl] = ACTIONS(147),
    [anon_sym_PERCENTbl] = ACTIONS(147),
    [anon_sym_PERCENTsil] = ACTIONS(147),
    [anon_sym_PERCENTdil] = ACTIONS(147),
    [anon_sym_PERCENTspl] = ACTIONS(147),
    [anon_sym_PERCENTbpl] = ACTIONS(147),
    [anon_sym_PERCENTr8b] = ACTIONS(147),
    [anon_sym_PERCENTr9b] = ACTIONS(147),
    [anon_sym_PERCENTr10b] = ACTIONS(147),
    [anon_sym_PERCENTr11b] = ACTIONS(147),
    [anon_sym_PERCENTr12b] = ACTIONS(147),
    [anon_sym_PERCENTr13b] = ACTIONS(147),
    [anon_sym_PERCENTr14b] = ACTIONS(147),
    [anon_sym_PERCENTr15b] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_movsq] = ACTIONS(156),
    [anon_sym_cmpsb] = ACTIONS(156),
    [anon_sym_cmpxchg] = ACTIONS(156),
    [anon_sym_movsl] = ACTIONS(156),
    [anon_sym_callq] = ACTIONS(159),
    [anon_sym_ja] = ACTIONS(159),
    [anon_sym_jae] = ACTIONS(159),
    [anon_sym_jb] = ACTIONS(159),
    [anon_sym_jbe] = ACTIONS(159),
    [anon_sym_je] = ACTIONS(159),
    [anon_sym_jg] = ACTIONS(159),
    [anon_sym_jge] = ACTIONS(159),
    [anon_sym_jl] = ACTIONS(159),
    [anon_sym_jle] = ACTIONS(159),
    [anon_sym_jmp] = ACTIONS(159),
    [anon_sym_jmpq] = ACTIONS(159),
    [anon_sym_jne] = ACTIONS(159),
    [anon_sym_jno] = ACTIONS(159),
    [anon_sym_jns] = ACTIONS(159),
    [anon_sym_jo] = ACTIONS(159),
    [anon_sym_jp] = ACTIONS(159),
    [anon_sym_jrcxz] = ACTIONS(159),
    [anon_sym_js] = ACTIONS(159),
    [anon_sym_notrack] = ACTIONS(159),
    [anon_sym_PERCENTcr0] = ACTIONS(162),
    [anon_sym_PERCENTcr2] = ACTIONS(162),
    [anon_sym_PERCENTcr3] = ACTIONS(162),
    [anon_sym_PERCENTcr4] = ACTIONS(162),
    [anon_sym_PERCENTrip] = ACTIONS(165),
    [anon_sym_PERCENTeip] = ACTIONS(165),
    [anon_sym_PERCENTip] = ACTIONS(165),
    [anon_sym_PERCENTst] = ACTIONS(168),
    [anon_sym_PERCENT] = ACTIONS(171),
  },
  [5] = {
    [aux_sym_comment_token1] = ACTIONS(174),
    [aux_sym_comment_token2] = ACTIONS(174),
    [sym__line_break] = ACTIONS(176),
    [anon_sym_adc] = ACTIONS(174),
    [anon_sym_add] = ACTIONS(174),
    [anon_sym_addq] = ACTIONS(174),
    [anon_sym_addl] = ACTIONS(174),
    [anon_sym_addss] = ACTIONS(174),
    [anon_sym_addw] = ACTIONS(174),
    [anon_sym_addb] = ACTIONS(174),
    [anon_sym_cmp] = ACTIONS(174),
    [anon_sym_cmpb] = ACTIONS(174),
    [anon_sym_cmpw] = ACTIONS(174),
    [anon_sym_cmpl] = ACTIONS(174),
    [anon_sym_cmpq] = ACTIONS(174),
    [anon_sym_comiss] = ACTIONS(174),
    [anon_sym_comisd] = ACTIONS(174),
    [anon_sym_inc] = ACTIONS(174),
    [anon_sym_incl] = ACTIONS(174),
    [anon_sym_dec] = ACTIONS(174),
    [anon_sym_div] = ACTIONS(174),
    [anon_sym_divq] = ACTIONS(174),
    [anon_sym_divl] = ACTIONS(174),
    [anon_sym_divss] = ACTIONS(174),
    [anon_sym_divsd] = ACTIONS(174),
    [anon_sym_idiv] = ACTIONS(174),
    [anon_sym_idivl] = ACTIONS(174),
    [anon_sym_sub] = ACTIONS(174),
    [anon_sym_subq] = ACTIONS(174),
    [anon_sym_subl] = ACTIONS(174),
    [anon_sym_subss] = ACTIONS(174),
    [anon_sym_subw] = ACTIONS(174),
    [anon_sym_subb] = ACTIONS(174),
    [anon_sym_subsd] = ACTIONS(174),
    [anon_sym_subpd] = ACTIONS(174),
    [anon_sym_sbb] = ACTIONS(174),
    [anon_sym_mul] = ACTIONS(174),
    [anon_sym_mulq] = ACTIONS(174),
    [anon_sym_mull] = ACTIONS(174),
    [anon_sym_mulss] = ACTIONS(174),
    [anon_sym_mulw] = ACTIONS(174),
    [anon_sym_mulb] = ACTIONS(174),
    [anon_sym_mulsd] = ACTIONS(174),
    [anon_sym_mulx] = ACTIONS(174),
    [anon_sym_imul] = ACTIONS(174),
    [anon_sym_neg] = ACTIONS(174),
    [anon_sym_negl] = ACTIONS(174),
    [anon_sym_negq] = ACTIONS(174),
    [anon_sym_fmulp] = ACTIONS(174),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(174),
    [anon_sym_pclmullqlqdq] = ACTIONS(174),
    [anon_sym_pclmullqhqdq] = ACTIONS(174),
    [anon_sym_vpclmullqhqdq] = ACTIONS(174),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(174),
    [anon_sym_pclmulhqhqdq] = ACTIONS(174),
    [anon_sym_vpclmullqlqdq] = ACTIONS(174),
    [anon_sym_bsf] = ACTIONS(174),
    [anon_sym_bsr] = ACTIONS(174),
    [anon_sym_bts] = ACTIONS(174),
    [anon_sym_bt] = ACTIONS(174),
    [anon_sym_btr] = ACTIONS(174),
    [anon_sym_btl] = ACTIONS(174),
    [anon_sym_setne] = ACTIONS(174),
    [anon_sym_setb] = ACTIONS(174),
    [anon_sym_sete] = ACTIONS(174),
    [anon_sym_setbe] = ACTIONS(174),
    [anon_sym_seta] = ACTIONS(174),
    [anon_sym_setge] = ACTIONS(174),
    [anon_sym_setae] = ACTIONS(174),
    [anon_sym_setl] = ACTIONS(174),
    [anon_sym_setle] = ACTIONS(174),
    [anon_sym_setg] = ACTIONS(174),
    [anon_sym_seto] = ACTIONS(174),
    [anon_sym_setnp] = ACTIONS(174),
    [anon_sym_setp] = ACTIONS(174),
    [anon_sym_setns] = ACTIONS(174),
    [anon_sym_test] = ACTIONS(174),
    [anon_sym_testb] = ACTIONS(174),
    [anon_sym_testl] = ACTIONS(174),
    [anon_sym_knotw] = ACTIONS(174),
    [anon_sym_vpcmpltud] = ACTIONS(174),
    [anon_sym_gs] = ACTIONS(174),
    [anon_sym_re] = ACTIONS(174),
    [anon_sym_ss] = ACTIONS(174),
    [anon_sym_leaveq] = ACTIONS(174),
    [anon_sym_retq] = ACTIONS(174),
    [anon_sym_bswap] = ACTIONS(174),
    [anon_sym_cbtw] = ACTIONS(174),
    [anon_sym_cltd] = ACTIONS(174),
    [anon_sym_cltq] = ACTIONS(174),
    [anon_sym_cmovbe] = ACTIONS(174),
    [anon_sym_cmovl] = ACTIONS(174),
    [anon_sym_cmovae] = ACTIONS(174),
    [anon_sym_cmovo] = ACTIONS(174),
    [anon_sym_cmovne] = ACTIONS(174),
    [anon_sym_cmovns] = ACTIONS(174),
    [anon_sym_cmovg] = ACTIONS(174),
    [anon_sym_cmovp] = ACTIONS(174),
    [anon_sym_cmove] = ACTIONS(174),
    [anon_sym_cmovge] = ACTIONS(174),
    [anon_sym_cmovb] = ACTIONS(174),
    [anon_sym_cmova] = ACTIONS(174),
    [anon_sym_cmovle] = ACTIONS(174),
    [anon_sym_cmovs] = ACTIONS(174),
    [anon_sym_cwtl] = ACTIONS(174),
    [anon_sym_cwtd] = ACTIONS(174),
    [anon_sym_cqto] = ACTIONS(174),
    [anon_sym_cvttsd2si] = ACTIONS(174),
    [anon_sym_cvtss2sd] = ACTIONS(174),
    [anon_sym_cvttss2si] = ACTIONS(174),
    [anon_sym_cvtsi2sd] = ACTIONS(174),
    [anon_sym_cvtsi2ss] = ACTIONS(174),
    [anon_sym_cvtsi2sdq] = ACTIONS(174),
    [anon_sym_cvtsi2sdl] = ACTIONS(174),
    [anon_sym_cvtsd2ss] = ACTIONS(174),
    [anon_sym_cvtsi2ssl] = ACTIONS(174),
    [anon_sym_mov] = ACTIONS(174),
    [anon_sym_movw] = ACTIONS(174),
    [anon_sym_movl] = ACTIONS(174),
    [anon_sym_movq] = ACTIONS(174),
    [anon_sym_movb] = ACTIONS(174),
    [anon_sym_movabs] = ACTIONS(174),
    [anon_sym_movsbw] = ACTIONS(174),
    [anon_sym_movsbq] = ACTIONS(174),
    [anon_sym_movsbl] = ACTIONS(174),
    [anon_sym_movswl] = ACTIONS(174),
    [anon_sym_movswq] = ACTIONS(174),
    [anon_sym_movzbw] = ACTIONS(174),
    [anon_sym_movzbq] = ACTIONS(174),
    [anon_sym_movzbl] = ACTIONS(174),
    [anon_sym_movzwl] = ACTIONS(174),
    [anon_sym_movaps] = ACTIONS(174),
    [anon_sym_movhlps] = ACTIONS(174),
    [anon_sym_movss] = ACTIONS(174),
    [anon_sym_movups] = ACTIONS(174),
    [anon_sym_movsd] = ACTIONS(174),
    [anon_sym_movd] = ACTIONS(174),
    [anon_sym_movhps] = ACTIONS(174),
    [anon_sym_movdqa] = ACTIONS(174),
    [anon_sym_movbe] = ACTIONS(174),
    [anon_sym_movapd] = ACTIONS(174),
    [anon_sym_movdqu] = ACTIONS(174),
    [anon_sym_xchg] = ACTIONS(174),
    [anon_sym_fildl] = ACTIONS(174),
    [anon_sym_fldt] = ACTIONS(174),
    [anon_sym_fstpl] = ACTIONS(174),
    [anon_sym_insb] = ACTIONS(174),
    [anon_sym_insl] = ACTIONS(174),
    [anon_sym_outsb] = ACTIONS(174),
    [anon_sym_outsl] = ACTIONS(174),
    [anon_sym_or] = ACTIONS(174),
    [anon_sym_orq] = ACTIONS(174),
    [anon_sym_orl] = ACTIONS(174),
    [anon_sym_orb] = ACTIONS(174),
    [anon_sym_orw] = ACTIONS(174),
    [anon_sym_xor] = ACTIONS(174),
    [anon_sym_xorl] = ACTIONS(174),
    [anon_sym_xorw] = ACTIONS(174),
    [anon_sym_xorps] = ACTIONS(174),
    [anon_sym_xorpd] = ACTIONS(174),
    [anon_sym_vxorps] = ACTIONS(174),
    [anon_sym_vpxord] = ACTIONS(174),
    [anon_sym_vpxor] = ACTIONS(174),
    [anon_sym_and] = ACTIONS(174),
    [anon_sym_andq] = ACTIONS(174),
    [anon_sym_andl] = ACTIONS(174),
    [anon_sym_andw] = ACTIONS(174),
    [anon_sym_andb] = ACTIONS(174),
    [anon_sym_andn] = ACTIONS(174),
    [anon_sym_andpd] = ACTIONS(174),
    [anon_sym_pand] = ACTIONS(174),
    [anon_sym_pandn] = ACTIONS(174),
    [anon_sym_andps] = ACTIONS(174),
    [anon_sym_vpand] = ACTIONS(174),
    [anon_sym_not] = ACTIONS(174),
    [anon_sym_notl] = ACTIONS(174),
    [anon_sym_notw] = ACTIONS(174),
    [anon_sym_cpuid] = ACTIONS(174),
    [anon_sym_lea] = ACTIONS(174),
    [anon_sym_popcnt] = ACTIONS(174),
    [anon_sym_nop] = ACTIONS(174),
    [anon_sym_nopl] = ACTIONS(174),
    [anon_sym_nopw] = ACTIONS(174),
    [anon_sym_ud2] = ACTIONS(174),
    [anon_sym_data16] = ACTIONS(174),
    [anon_sym_sha1rnds4] = ACTIONS(174),
    [anon_sym_addr32] = ACTIONS(174),
    [anon_sym_sha1msg1] = ACTIONS(174),
    [anon_sym_sha1msg2] = ACTIONS(174),
    [anon_sym_sha1nexte] = ACTIONS(174),
    [anon_sym_endbr64] = ACTIONS(174),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(174),
    [anon_sym_packuswb] = ACTIONS(174),
    [anon_sym_punpckhbw] = ACTIONS(174),
    [anon_sym_punpckhdq] = ACTIONS(174),
    [anon_sym_punpckhwd] = ACTIONS(174),
    [anon_sym_punpcklbw] = ACTIONS(174),
    [anon_sym_punpckldq] = ACTIONS(174),
    [anon_sym_punpcklwd] = ACTIONS(174),
    [anon_sym_vpunpcklwd] = ACTIONS(174),
    [anon_sym_vpunpckldq] = ACTIONS(174),
    [anon_sym_punpcklqdq] = ACTIONS(174),
    [anon_sym_punpckhqdq] = ACTIONS(174),
    [anon_sym_vpunpckhqdq] = ACTIONS(174),
    [anon_sym_vpunpckhdq] = ACTIONS(174),
    [anon_sym_vpunpcklqdq] = ACTIONS(174),
    [anon_sym_vpunpckhwd] = ACTIONS(174),
    [anon_sym_rol] = ACTIONS(174),
    [anon_sym_ror] = ACTIONS(174),
    [anon_sym_sar] = ACTIONS(174),
    [anon_sym_sarl] = ACTIONS(174),
    [anon_sym_sarx] = ACTIONS(174),
    [anon_sym_shl] = ACTIONS(174),
    [anon_sym_shll] = ACTIONS(174),
    [anon_sym_shld] = ACTIONS(174),
    [anon_sym_shlx] = ACTIONS(174),
    [anon_sym_shlq] = ACTIONS(174),
    [anon_sym_shr] = ACTIONS(174),
    [anon_sym_shrq] = ACTIONS(174),
    [anon_sym_shrd] = ACTIONS(174),
    [anon_sym_shrl] = ACTIONS(174),
    [anon_sym_shrx] = ACTIONS(174),
    [anon_sym_vprord] = ACTIONS(174),
    [anon_sym_vprorq] = ACTIONS(174),
    [anon_sym_rorl] = ACTIONS(174),
    [anon_sym_roll] = ACTIONS(174),
    [anon_sym_push] = ACTIONS(174),
    [anon_sym_pushq] = ACTIONS(174),
    [anon_sym_pop] = ACTIONS(174),
    [anon_sym_movslq] = ACTIONS(174),
    [anon_sym_movsb] = ACTIONS(174),
    [anon_sym_rep] = ACTIONS(174),
    [anon_sym_repz] = ACTIONS(174),
    [anon_sym_repnz] = ACTIONS(174),
    [anon_sym_rex] = ACTIONS(174),
    [anon_sym_rex_DOTWB] = ACTIONS(174),
    [anon_sym_rex_DOTWRB] = ACTIONS(174),
    [anon_sym_rex_DOTRXB] = ACTIONS(174),
    [anon_sym_rex_DOTB] = ACTIONS(174),
    [anon_sym_rex_DOTWRXB] = ACTIONS(174),
    [anon_sym_rex_DOTXB] = ACTIONS(174),
    [anon_sym_rex_DOTW] = ACTIONS(174),
    [anon_sym_rex_DOTRB] = ACTIONS(174),
    [anon_sym_xgetbv] = ACTIONS(174),
    [anon_sym_fs] = ACTIONS(174),
    [anon_sym_kmovw] = ACTIONS(174),
    [anon_sym_adcx] = ACTIONS(174),
    [anon_sym_adox] = ACTIONS(174),
    [anon_sym_aesdec] = ACTIONS(174),
    [anon_sym_aesdeclast] = ACTIONS(174),
    [anon_sym_aesenc] = ACTIONS(174),
    [anon_sym_aesenclast] = ACTIONS(174),
    [anon_sym_vaesenc] = ACTIONS(174),
    [anon_sym_vaesenclast] = ACTIONS(174),
    [anon_sym_aeskeygenassist] = ACTIONS(174),
    [anon_sym_vblendps] = ACTIONS(174),
    [anon_sym_vblendvps] = ACTIONS(174),
    [anon_sym_vcvtusi2sd] = ACTIONS(174),
    [anon_sym_vdivsd] = ACTIONS(174),
    [anon_sym_vmovaps] = ACTIONS(174),
    [anon_sym_vmovapd] = ACTIONS(174),
    [anon_sym_vmovss] = ACTIONS(174),
    [anon_sym_vmovdqu] = ACTIONS(174),
    [anon_sym_vmovdqu64] = ACTIONS(174),
    [anon_sym_vmovdqu32] = ACTIONS(174),
    [anon_sym_vmovdqa] = ACTIONS(174),
    [anon_sym_vmovdqa32] = ACTIONS(174),
    [anon_sym_vmovdqa64] = ACTIONS(174),
    [anon_sym_vmovq] = ACTIONS(174),
    [anon_sym_vmovups] = ACTIONS(174),
    [anon_sym_vmovd] = ACTIONS(174),
    [anon_sym_vmovsd] = ACTIONS(174),
    [anon_sym_vmulsd] = ACTIONS(174),
    [anon_sym_vpackusdw] = ACTIONS(174),
    [anon_sym_vpaddd] = ACTIONS(174),
    [anon_sym_vpaddb] = ACTIONS(174),
    [anon_sym_vpaddq] = ACTIONS(174),
    [anon_sym_vpaddw] = ACTIONS(174),
    [anon_sym_vpalignr] = ACTIONS(174),
    [anon_sym_vpcmpgtd] = ACTIONS(174),
    [anon_sym_vpextrw] = ACTIONS(174),
    [anon_sym_vpinsrw] = ACTIONS(174),
    [anon_sym_vpinsrd] = ACTIONS(174),
    [anon_sym_vpinsrq] = ACTIONS(174),
    [anon_sym_vpinsrb] = ACTIONS(174),
    [anon_sym_vpmaddubsw] = ACTIONS(174),
    [anon_sym_vpmaddwd] = ACTIONS(174),
    [anon_sym_vpmullw] = ACTIONS(174),
    [anon_sym_vpmuludq] = ACTIONS(174),
    [anon_sym_vpor] = ACTIONS(174),
    [anon_sym_vpshufb] = ACTIONS(174),
    [anon_sym_vpshufd] = ACTIONS(174),
    [anon_sym_vpslldq] = ACTIONS(174),
    [anon_sym_vpslld] = ACTIONS(174),
    [anon_sym_vpsllq] = ACTIONS(174),
    [anon_sym_vpsllw] = ACTIONS(174),
    [anon_sym_vpsrldq] = ACTIONS(174),
    [anon_sym_vpsrld] = ACTIONS(174),
    [anon_sym_vpsrlq] = ACTIONS(174),
    [anon_sym_vpsrlw] = ACTIONS(174),
    [anon_sym_vpsubusw] = ACTIONS(174),
    [anon_sym_vpsubq] = ACTIONS(174),
    [anon_sym_vpsubd] = ACTIONS(174),
    [anon_sym_vpsubw] = ACTIONS(174),
    [anon_sym_vshufps] = ACTIONS(174),
    [anon_sym_vsubsd] = ACTIONS(174),
    [anon_sym_vucomisd] = ACTIONS(174),
    [anon_sym_vucomiss] = ACTIONS(174),
    [anon_sym_vunpckhpd] = ACTIONS(174),
    [anon_sym_vunpckhps] = ACTIONS(174),
    [anon_sym_vunpcklpd] = ACTIONS(174),
    [anon_sym_vunpcklps] = ACTIONS(174),
    [anon_sym_vbroadcastss] = ACTIONS(174),
    [anon_sym_vinsertf128] = ACTIONS(174),
    [anon_sym_vperm2f128] = ACTIONS(174),
    [anon_sym_vzeroall] = ACTIONS(174),
    [anon_sym_vzeroupper] = ACTIONS(174),
    [anon_sym_vshufi32x4] = ACTIONS(174),
    [anon_sym_vshufi64x2] = ACTIONS(174),
    [anon_sym_vpblendmd] = ACTIONS(174),
    [anon_sym_vextracti128] = ACTIONS(174),
    [anon_sym_vextracti32x4] = ACTIONS(174),
    [anon_sym_vinserti128] = ACTIONS(174),
    [anon_sym_vinserti32x4] = ACTIONS(174),
    [anon_sym_vinserti64x4] = ACTIONS(174),
    [anon_sym_vpblendd] = ACTIONS(174),
    [anon_sym_vpbroadcastq] = ACTIONS(174),
    [anon_sym_vpbroadcastd] = ACTIONS(174),
    [anon_sym_vbroadcasti128] = ACTIONS(174),
    [anon_sym_vbroadcasti32x4] = ACTIONS(174),
    [anon_sym_vperm2i128] = ACTIONS(174),
    [anon_sym_vpermd] = ACTIONS(174),
    [anon_sym_vpermq] = ACTIONS(174),
    [anon_sym_vpermt2d] = ACTIONS(174),
    [anon_sym_vpermi2d] = ACTIONS(174),
    [anon_sym_tzcnt] = ACTIONS(174),
    [anon_sym_rorx] = ACTIONS(174),
    [anon_sym_psubd] = ACTIONS(174),
    [anon_sym_pmaddwd] = ACTIONS(174),
    [anon_sym_pxor] = ACTIONS(174),
    [anon_sym_psrad] = ACTIONS(174),
    [anon_sym_pslld] = ACTIONS(174),
    [anon_sym_pcmpgtd] = ACTIONS(174),
    [anon_sym_pcmpeqd] = ACTIONS(174),
    [anon_sym_por] = ACTIONS(174),
    [anon_sym_paddw] = ACTIONS(174),
    [anon_sym_psubusw] = ACTIONS(174),
    [anon_sym_pcmpeqb] = ACTIONS(174),
    [anon_sym_psubusb] = ACTIONS(174),
    [anon_sym_psrld] = ACTIONS(174),
    [anon_sym_psrlw] = ACTIONS(174),
    [anon_sym_psllq] = ACTIONS(174),
    [anon_sym_paddd] = ACTIONS(174),
    [anon_sym_psrlq] = ACTIONS(174),
    [anon_sym_psubb] = ACTIONS(174),
    [anon_sym_maxss] = ACTIONS(174),
    [anon_sym_pmovmskb] = ACTIONS(174),
    [anon_sym_pinsrw] = ACTIONS(174),
    [anon_sym_minss] = ACTIONS(174),
    [anon_sym_prefetcht1] = ACTIONS(174),
    [anon_sym_prefetcht0] = ACTIONS(174),
    [anon_sym_pextrw] = ACTIONS(174),
    [anon_sym_ucomiss] = ACTIONS(174),
    [anon_sym_shufps] = ACTIONS(174),
    [anon_sym_addsd] = ACTIONS(174),
    [anon_sym_paddq] = ACTIONS(174),
    [anon_sym_psubq] = ACTIONS(174),
    [anon_sym_pshuflw] = ACTIONS(174),
    [anon_sym_pmuludq] = ACTIONS(174),
    [anon_sym_pshufd] = ACTIONS(174),
    [anon_sym_minsd] = ACTIONS(174),
    [anon_sym_pshufhw] = ACTIONS(174),
    [anon_sym_mfence] = ACTIONS(174),
    [anon_sym_maxsd] = ACTIONS(174),
    [anon_sym_ucomisd] = ACTIONS(174),
    [anon_sym_shufpd] = ACTIONS(174),
    [anon_sym_pslldq] = ACTIONS(174),
    [anon_sym_unpckhpd] = ACTIONS(174),
    [anon_sym_psrldq] = ACTIONS(174),
    [anon_sym_palignr] = ACTIONS(174),
    [anon_sym_pshufb] = ACTIONS(174),
    [anon_sym_pmaddubsw] = ACTIONS(174),
    [anon_sym_pinsrb] = ACTIONS(174),
    [anon_sym_pblendw] = ACTIONS(174),
    [anon_sym_pextrq] = ACTIONS(174),
    [anon_sym_blendvps] = ACTIONS(174),
    [anon_sym_pextrb] = ACTIONS(174),
    [anon_sym_pinsrd] = ACTIONS(174),
    [anon_sym_femms] = ACTIONS(174),
    [anon_sym_f] = ACTIONS(174),
    [aux_sym_operand_token1] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [anon_sym_PERCENTss] = ACTIONS(174),
    [anon_sym_PERCENTcs] = ACTIONS(174),
    [anon_sym_PERCENTds] = ACTIONS(174),
    [anon_sym_PERCENTes] = ACTIONS(174),
    [anon_sym_PERCENTfs] = ACTIONS(174),
    [anon_sym_PERCENTgs] = ACTIONS(174),
    [anon_sym_PERCENTrax] = ACTIONS(174),
    [anon_sym_PERCENTrbx] = ACTIONS(174),
    [anon_sym_PERCENTrcx] = ACTIONS(174),
    [anon_sym_PERCENTrdx] = ACTIONS(174),
    [anon_sym_PERCENTrsi] = ACTIONS(174),
    [anon_sym_PERCENTrdi] = ACTIONS(174),
    [anon_sym_PERCENTrbp] = ACTIONS(174),
    [anon_sym_PERCENTrsp] = ACTIONS(174),
    [anon_sym_PERCENTr8] = ACTIONS(174),
    [anon_sym_PERCENTr9] = ACTIONS(174),
    [anon_sym_PERCENTr10] = ACTIONS(174),
    [anon_sym_PERCENTr11] = ACTIONS(174),
    [anon_sym_PERCENTr12] = ACTIONS(174),
    [anon_sym_PERCENTr13] = ACTIONS(174),
    [anon_sym_PERCENTr14] = ACTIONS(174),
    [anon_sym_PERCENTr15] = ACTIONS(174),
    [anon_sym_PERCENTeax] = ACTIONS(174),
    [anon_sym_PERCENTecx] = ACTIONS(174),
    [anon_sym_PERCENTedx] = ACTIONS(174),
    [anon_sym_PERCENTebx] = ACTIONS(174),
    [anon_sym_PERCENTesi] = ACTIONS(174),
    [anon_sym_PERCENTedi] = ACTIONS(174),
    [anon_sym_PERCENTebp] = ACTIONS(174),
    [anon_sym_PERCENTesp] = ACTIONS(174),
    [anon_sym_PERCENTr8d] = ACTIONS(174),
    [anon_sym_PERCENTr9d] = ACTIONS(174),
    [anon_sym_PERCENTr10d] = ACTIONS(174),
    [anon_sym_PERCENTr11d] = ACTIONS(174),
    [anon_sym_PERCENTr12d] = ACTIONS(174),
    [anon_sym_PERCENTr13d] = ACTIONS(174),
    [anon_sym_PERCENTr14d] = ACTIONS(174),
    [anon_sym_PERCENTr15d] = ACTIONS(174),
    [anon_sym_PERCENTax] = ACTIONS(174),
    [anon_sym_PERCENTcx] = ACTIONS(174),
    [anon_sym_PERCENTdx] = ACTIONS(174),
    [anon_sym_PERCENTbx] = ACTIONS(174),
    [anon_sym_PERCENTsi] = ACTIONS(174),
    [anon_sym_PERCENTdi] = ACTIONS(174),
    [anon_sym_PERCENTsp] = ACTIONS(174),
    [anon_sym_PERCENTbp] = ACTIONS(174),
    [anon_sym_PERCENTr8w] = ACTIONS(174),
    [anon_sym_PERCENTr9w] = ACTIONS(174),
    [anon_sym_PERCENTr10w] = ACTIONS(174),
    [anon_sym_PERCENTr11w] = ACTIONS(174),
    [anon_sym_PERCENTr12w] = ACTIONS(174),
    [anon_sym_PERCENTr13w] = ACTIONS(174),
    [anon_sym_PERCENTr14w] = ACTIONS(174),
    [anon_sym_PERCENTr15w] = ACTIONS(174),
    [anon_sym_PERCENTal] = ACTIONS(174),
    [anon_sym_PERCENTcl] = ACTIONS(174),
    [anon_sym_PERCENTdl] = ACTIONS(174),
    [anon_sym_PERCENTbl] = ACTIONS(174),
    [anon_sym_PERCENTsil] = ACTIONS(174),
    [anon_sym_PERCENTdil] = ACTIONS(174),
    [anon_sym_PERCENTspl] = ACTIONS(174),
    [anon_sym_PERCENTbpl] = ACTIONS(174),
    [anon_sym_PERCENTr8b] = ACTIONS(174),
    [anon_sym_PERCENTr9b] = ACTIONS(174),
    [anon_sym_PERCENTr10b] = ACTIONS(174),
    [anon_sym_PERCENTr11b] = ACTIONS(174),
    [anon_sym_PERCENTr12b] = ACTIONS(174),
    [anon_sym_PERCENTr13b] = ACTIONS(174),
    [anon_sym_PERCENTr14b] = ACTIONS(174),
    [anon_sym_PERCENTr15b] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_movsq] = ACTIONS(174),
    [anon_sym_cmpsb] = ACTIONS(174),
    [anon_sym_cmpxchg] = ACTIONS(174),
    [anon_sym_movsl] = ACTIONS(174),
    [anon_sym_callq] = ACTIONS(174),
    [anon_sym_ja] = ACTIONS(174),
    [anon_sym_jae] = ACTIONS(174),
    [anon_sym_jb] = ACTIONS(174),
    [anon_sym_jbe] = ACTIONS(174),
    [anon_sym_je] = ACTIONS(174),
    [anon_sym_jg] = ACTIONS(174),
    [anon_sym_jge] = ACTIONS(174),
    [anon_sym_jl] = ACTIONS(174),
    [anon_sym_jle] = ACTIONS(174),
    [anon_sym_jmp] = ACTIONS(174),
    [anon_sym_jmpq] = ACTIONS(174),
    [anon_sym_jne] = ACTIONS(174),
    [anon_sym_jno] = ACTIONS(174),
    [anon_sym_jns] = ACTIONS(174),
    [anon_sym_jo] = ACTIONS(174),
    [anon_sym_jp] = ACTIONS(174),
    [anon_sym_jrcxz] = ACTIONS(174),
    [anon_sym_js] = ACTIONS(174),
    [anon_sym_notrack] = ACTIONS(174),
    [anon_sym_PERCENTcr0] = ACTIONS(174),
    [anon_sym_PERCENTcr2] = ACTIONS(174),
    [anon_sym_PERCENTcr3] = ACTIONS(174),
    [anon_sym_PERCENTcr4] = ACTIONS(174),
    [anon_sym_PERCENTrip] = ACTIONS(174),
    [anon_sym_PERCENTeip] = ACTIONS(174),
    [anon_sym_PERCENTip] = ACTIONS(174),
    [anon_sym_PERCENTst] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
  },
  [6] = {
    [aux_sym_comment_token1] = ACTIONS(178),
    [aux_sym_comment_token2] = ACTIONS(178),
    [sym__line_break] = ACTIONS(180),
    [anon_sym_adc] = ACTIONS(178),
    [anon_sym_add] = ACTIONS(178),
    [anon_sym_addq] = ACTIONS(178),
    [anon_sym_addl] = ACTIONS(178),
    [anon_sym_addss] = ACTIONS(178),
    [anon_sym_addw] = ACTIONS(178),
    [anon_sym_addb] = ACTIONS(178),
    [anon_sym_cmp] = ACTIONS(178),
    [anon_sym_cmpb] = ACTIONS(178),
    [anon_sym_cmpw] = ACTIONS(178),
    [anon_sym_cmpl] = ACTIONS(178),
    [anon_sym_cmpq] = ACTIONS(178),
    [anon_sym_comiss] = ACTIONS(178),
    [anon_sym_comisd] = ACTIONS(178),
    [anon_sym_inc] = ACTIONS(178),
    [anon_sym_incl] = ACTIONS(178),
    [anon_sym_dec] = ACTIONS(178),
    [anon_sym_div] = ACTIONS(178),
    [anon_sym_divq] = ACTIONS(178),
    [anon_sym_divl] = ACTIONS(178),
    [anon_sym_divss] = ACTIONS(178),
    [anon_sym_divsd] = ACTIONS(178),
    [anon_sym_idiv] = ACTIONS(178),
    [anon_sym_idivl] = ACTIONS(178),
    [anon_sym_sub] = ACTIONS(178),
    [anon_sym_subq] = ACTIONS(178),
    [anon_sym_subl] = ACTIONS(178),
    [anon_sym_subss] = ACTIONS(178),
    [anon_sym_subw] = ACTIONS(178),
    [anon_sym_subb] = ACTIONS(178),
    [anon_sym_subsd] = ACTIONS(178),
    [anon_sym_subpd] = ACTIONS(178),
    [anon_sym_sbb] = ACTIONS(178),
    [anon_sym_mul] = ACTIONS(178),
    [anon_sym_mulq] = ACTIONS(178),
    [anon_sym_mull] = ACTIONS(178),
    [anon_sym_mulss] = ACTIONS(178),
    [anon_sym_mulw] = ACTIONS(178),
    [anon_sym_mulb] = ACTIONS(178),
    [anon_sym_mulsd] = ACTIONS(178),
    [anon_sym_mulx] = ACTIONS(178),
    [anon_sym_imul] = ACTIONS(178),
    [anon_sym_neg] = ACTIONS(178),
    [anon_sym_negl] = ACTIONS(178),
    [anon_sym_negq] = ACTIONS(178),
    [anon_sym_fmulp] = ACTIONS(178),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(178),
    [anon_sym_pclmullqlqdq] = ACTIONS(178),
    [anon_sym_pclmullqhqdq] = ACTIONS(178),
    [anon_sym_vpclmullqhqdq] = ACTIONS(178),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(178),
    [anon_sym_pclmulhqhqdq] = ACTIONS(178),
    [anon_sym_vpclmullqlqdq] = ACTIONS(178),
    [anon_sym_bsf] = ACTIONS(178),
    [anon_sym_bsr] = ACTIONS(178),
    [anon_sym_bts] = ACTIONS(178),
    [anon_sym_bt] = ACTIONS(178),
    [anon_sym_btr] = ACTIONS(178),
    [anon_sym_btl] = ACTIONS(178),
    [anon_sym_setne] = ACTIONS(178),
    [anon_sym_setb] = ACTIONS(178),
    [anon_sym_sete] = ACTIONS(178),
    [anon_sym_setbe] = ACTIONS(178),
    [anon_sym_seta] = ACTIONS(178),
    [anon_sym_setge] = ACTIONS(178),
    [anon_sym_setae] = ACTIONS(178),
    [anon_sym_setl] = ACTIONS(178),
    [anon_sym_setle] = ACTIONS(178),
    [anon_sym_setg] = ACTIONS(178),
    [anon_sym_seto] = ACTIONS(178),
    [anon_sym_setnp] = ACTIONS(178),
    [anon_sym_setp] = ACTIONS(178),
    [anon_sym_setns] = ACTIONS(178),
    [anon_sym_test] = ACTIONS(178),
    [anon_sym_testb] = ACTIONS(178),
    [anon_sym_testl] = ACTIONS(178),
    [anon_sym_knotw] = ACTIONS(178),
    [anon_sym_vpcmpltud] = ACTIONS(178),
    [anon_sym_gs] = ACTIONS(178),
    [anon_sym_re] = ACTIONS(178),
    [anon_sym_ss] = ACTIONS(178),
    [anon_sym_leaveq] = ACTIONS(178),
    [anon_sym_retq] = ACTIONS(178),
    [anon_sym_bswap] = ACTIONS(178),
    [anon_sym_cbtw] = ACTIONS(178),
    [anon_sym_cltd] = ACTIONS(178),
    [anon_sym_cltq] = ACTIONS(178),
    [anon_sym_cmovbe] = ACTIONS(178),
    [anon_sym_cmovl] = ACTIONS(178),
    [anon_sym_cmovae] = ACTIONS(178),
    [anon_sym_cmovo] = ACTIONS(178),
    [anon_sym_cmovne] = ACTIONS(178),
    [anon_sym_cmovns] = ACTIONS(178),
    [anon_sym_cmovg] = ACTIONS(178),
    [anon_sym_cmovp] = ACTIONS(178),
    [anon_sym_cmove] = ACTIONS(178),
    [anon_sym_cmovge] = ACTIONS(178),
    [anon_sym_cmovb] = ACTIONS(178),
    [anon_sym_cmova] = ACTIONS(178),
    [anon_sym_cmovle] = ACTIONS(178),
    [anon_sym_cmovs] = ACTIONS(178),
    [anon_sym_cwtl] = ACTIONS(178),
    [anon_sym_cwtd] = ACTIONS(178),
    [anon_sym_cqto] = ACTIONS(178),
    [anon_sym_cvttsd2si] = ACTIONS(178),
    [anon_sym_cvtss2sd] = ACTIONS(178),
    [anon_sym_cvttss2si] = ACTIONS(178),
    [anon_sym_cvtsi2sd] = ACTIONS(178),
    [anon_sym_cvtsi2ss] = ACTIONS(178),
    [anon_sym_cvtsi2sdq] = ACTIONS(178),
    [anon_sym_cvtsi2sdl] = ACTIONS(178),
    [anon_sym_cvtsd2ss] = ACTIONS(178),
    [anon_sym_cvtsi2ssl] = ACTIONS(178),
    [anon_sym_mov] = ACTIONS(178),
    [anon_sym_movw] = ACTIONS(178),
    [anon_sym_movl] = ACTIONS(178),
    [anon_sym_movq] = ACTIONS(178),
    [anon_sym_movb] = ACTIONS(178),
    [anon_sym_movabs] = ACTIONS(178),
    [anon_sym_movsbw] = ACTIONS(178),
    [anon_sym_movsbq] = ACTIONS(178),
    [anon_sym_movsbl] = ACTIONS(178),
    [anon_sym_movswl] = ACTIONS(178),
    [anon_sym_movswq] = ACTIONS(178),
    [anon_sym_movzbw] = ACTIONS(178),
    [anon_sym_movzbq] = ACTIONS(178),
    [anon_sym_movzbl] = ACTIONS(178),
    [anon_sym_movzwl] = ACTIONS(178),
    [anon_sym_movaps] = ACTIONS(178),
    [anon_sym_movhlps] = ACTIONS(178),
    [anon_sym_movss] = ACTIONS(178),
    [anon_sym_movups] = ACTIONS(178),
    [anon_sym_movsd] = ACTIONS(178),
    [anon_sym_movd] = ACTIONS(178),
    [anon_sym_movhps] = ACTIONS(178),
    [anon_sym_movdqa] = ACTIONS(178),
    [anon_sym_movbe] = ACTIONS(178),
    [anon_sym_movapd] = ACTIONS(178),
    [anon_sym_movdqu] = ACTIONS(178),
    [anon_sym_xchg] = ACTIONS(178),
    [anon_sym_fildl] = ACTIONS(178),
    [anon_sym_fldt] = ACTIONS(178),
    [anon_sym_fstpl] = ACTIONS(178),
    [anon_sym_insb] = ACTIONS(178),
    [anon_sym_insl] = ACTIONS(178),
    [anon_sym_outsb] = ACTIONS(178),
    [anon_sym_outsl] = ACTIONS(178),
    [anon_sym_or] = ACTIONS(178),
    [anon_sym_orq] = ACTIONS(178),
    [anon_sym_orl] = ACTIONS(178),
    [anon_sym_orb] = ACTIONS(178),
    [anon_sym_orw] = ACTIONS(178),
    [anon_sym_xor] = ACTIONS(178),
    [anon_sym_xorl] = ACTIONS(178),
    [anon_sym_xorw] = ACTIONS(178),
    [anon_sym_xorps] = ACTIONS(178),
    [anon_sym_xorpd] = ACTIONS(178),
    [anon_sym_vxorps] = ACTIONS(178),
    [anon_sym_vpxord] = ACTIONS(178),
    [anon_sym_vpxor] = ACTIONS(178),
    [anon_sym_and] = ACTIONS(178),
    [anon_sym_andq] = ACTIONS(178),
    [anon_sym_andl] = ACTIONS(178),
    [anon_sym_andw] = ACTIONS(178),
    [anon_sym_andb] = ACTIONS(178),
    [anon_sym_andn] = ACTIONS(178),
    [anon_sym_andpd] = ACTIONS(178),
    [anon_sym_pand] = ACTIONS(178),
    [anon_sym_pandn] = ACTIONS(178),
    [anon_sym_andps] = ACTIONS(178),
    [anon_sym_vpand] = ACTIONS(178),
    [anon_sym_not] = ACTIONS(178),
    [anon_sym_notl] = ACTIONS(178),
    [anon_sym_notw] = ACTIONS(178),
    [anon_sym_cpuid] = ACTIONS(178),
    [anon_sym_lea] = ACTIONS(178),
    [anon_sym_popcnt] = ACTIONS(178),
    [anon_sym_nop] = ACTIONS(178),
    [anon_sym_nopl] = ACTIONS(178),
    [anon_sym_nopw] = ACTIONS(178),
    [anon_sym_ud2] = ACTIONS(178),
    [anon_sym_data16] = ACTIONS(178),
    [anon_sym_sha1rnds4] = ACTIONS(178),
    [anon_sym_addr32] = ACTIONS(178),
    [anon_sym_sha1msg1] = ACTIONS(178),
    [anon_sym_sha1msg2] = ACTIONS(178),
    [anon_sym_sha1nexte] = ACTIONS(178),
    [anon_sym_endbr64] = ACTIONS(178),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(178),
    [anon_sym_packuswb] = ACTIONS(178),
    [anon_sym_punpckhbw] = ACTIONS(178),
    [anon_sym_punpckhdq] = ACTIONS(178),
    [anon_sym_punpckhwd] = ACTIONS(178),
    [anon_sym_punpcklbw] = ACTIONS(178),
    [anon_sym_punpckldq] = ACTIONS(178),
    [anon_sym_punpcklwd] = ACTIONS(178),
    [anon_sym_vpunpcklwd] = ACTIONS(178),
    [anon_sym_vpunpckldq] = ACTIONS(178),
    [anon_sym_punpcklqdq] = ACTIONS(178),
    [anon_sym_punpckhqdq] = ACTIONS(178),
    [anon_sym_vpunpckhqdq] = ACTIONS(178),
    [anon_sym_vpunpckhdq] = ACTIONS(178),
    [anon_sym_vpunpcklqdq] = ACTIONS(178),
    [anon_sym_vpunpckhwd] = ACTIONS(178),
    [anon_sym_rol] = ACTIONS(178),
    [anon_sym_ror] = ACTIONS(178),
    [anon_sym_sar] = ACTIONS(178),
    [anon_sym_sarl] = ACTIONS(178),
    [anon_sym_sarx] = ACTIONS(178),
    [anon_sym_shl] = ACTIONS(178),
    [anon_sym_shll] = ACTIONS(178),
    [anon_sym_shld] = ACTIONS(178),
    [anon_sym_shlx] = ACTIONS(178),
    [anon_sym_shlq] = ACTIONS(178),
    [anon_sym_shr] = ACTIONS(178),
    [anon_sym_shrq] = ACTIONS(178),
    [anon_sym_shrd] = ACTIONS(178),
    [anon_sym_shrl] = ACTIONS(178),
    [anon_sym_shrx] = ACTIONS(178),
    [anon_sym_vprord] = ACTIONS(178),
    [anon_sym_vprorq] = ACTIONS(178),
    [anon_sym_rorl] = ACTIONS(178),
    [anon_sym_roll] = ACTIONS(178),
    [anon_sym_push] = ACTIONS(178),
    [anon_sym_pushq] = ACTIONS(178),
    [anon_sym_pop] = ACTIONS(178),
    [anon_sym_movslq] = ACTIONS(178),
    [anon_sym_movsb] = ACTIONS(178),
    [anon_sym_rep] = ACTIONS(178),
    [anon_sym_repz] = ACTIONS(178),
    [anon_sym_repnz] = ACTIONS(178),
    [anon_sym_rex] = ACTIONS(178),
    [anon_sym_rex_DOTWB] = ACTIONS(178),
    [anon_sym_rex_DOTWRB] = ACTIONS(178),
    [anon_sym_rex_DOTRXB] = ACTIONS(178),
    [anon_sym_rex_DOTB] = ACTIONS(178),
    [anon_sym_rex_DOTWRXB] = ACTIONS(178),
    [anon_sym_rex_DOTXB] = ACTIONS(178),
    [anon_sym_rex_DOTW] = ACTIONS(178),
    [anon_sym_rex_DOTRB] = ACTIONS(178),
    [anon_sym_xgetbv] = ACTIONS(178),
    [anon_sym_fs] = ACTIONS(178),
    [anon_sym_kmovw] = ACTIONS(178),
    [anon_sym_adcx] = ACTIONS(178),
    [anon_sym_adox] = ACTIONS(178),
    [anon_sym_aesdec] = ACTIONS(178),
    [anon_sym_aesdeclast] = ACTIONS(178),
    [anon_sym_aesenc] = ACTIONS(178),
    [anon_sym_aesenclast] = ACTIONS(178),
    [anon_sym_vaesenc] = ACTIONS(178),
    [anon_sym_vaesenclast] = ACTIONS(178),
    [anon_sym_aeskeygenassist] = ACTIONS(178),
    [anon_sym_vblendps] = ACTIONS(178),
    [anon_sym_vblendvps] = ACTIONS(178),
    [anon_sym_vcvtusi2sd] = ACTIONS(178),
    [anon_sym_vdivsd] = ACTIONS(178),
    [anon_sym_vmovaps] = ACTIONS(178),
    [anon_sym_vmovapd] = ACTIONS(178),
    [anon_sym_vmovss] = ACTIONS(178),
    [anon_sym_vmovdqu] = ACTIONS(178),
    [anon_sym_vmovdqu64] = ACTIONS(178),
    [anon_sym_vmovdqu32] = ACTIONS(178),
    [anon_sym_vmovdqa] = ACTIONS(178),
    [anon_sym_vmovdqa32] = ACTIONS(178),
    [anon_sym_vmovdqa64] = ACTIONS(178),
    [anon_sym_vmovq] = ACTIONS(178),
    [anon_sym_vmovups] = ACTIONS(178),
    [anon_sym_vmovd] = ACTIONS(178),
    [anon_sym_vmovsd] = ACTIONS(178),
    [anon_sym_vmulsd] = ACTIONS(178),
    [anon_sym_vpackusdw] = ACTIONS(178),
    [anon_sym_vpaddd] = ACTIONS(178),
    [anon_sym_vpaddb] = ACTIONS(178),
    [anon_sym_vpaddq] = ACTIONS(178),
    [anon_sym_vpaddw] = ACTIONS(178),
    [anon_sym_vpalignr] = ACTIONS(178),
    [anon_sym_vpcmpgtd] = ACTIONS(178),
    [anon_sym_vpextrw] = ACTIONS(178),
    [anon_sym_vpinsrw] = ACTIONS(178),
    [anon_sym_vpinsrd] = ACTIONS(178),
    [anon_sym_vpinsrq] = ACTIONS(178),
    [anon_sym_vpinsrb] = ACTIONS(178),
    [anon_sym_vpmaddubsw] = ACTIONS(178),
    [anon_sym_vpmaddwd] = ACTIONS(178),
    [anon_sym_vpmullw] = ACTIONS(178),
    [anon_sym_vpmuludq] = ACTIONS(178),
    [anon_sym_vpor] = ACTIONS(178),
    [anon_sym_vpshufb] = ACTIONS(178),
    [anon_sym_vpshufd] = ACTIONS(178),
    [anon_sym_vpslldq] = ACTIONS(178),
    [anon_sym_vpslld] = ACTIONS(178),
    [anon_sym_vpsllq] = ACTIONS(178),
    [anon_sym_vpsllw] = ACTIONS(178),
    [anon_sym_vpsrldq] = ACTIONS(178),
    [anon_sym_vpsrld] = ACTIONS(178),
    [anon_sym_vpsrlq] = ACTIONS(178),
    [anon_sym_vpsrlw] = ACTIONS(178),
    [anon_sym_vpsubusw] = ACTIONS(178),
    [anon_sym_vpsubq] = ACTIONS(178),
    [anon_sym_vpsubd] = ACTIONS(178),
    [anon_sym_vpsubw] = ACTIONS(178),
    [anon_sym_vshufps] = ACTIONS(178),
    [anon_sym_vsubsd] = ACTIONS(178),
    [anon_sym_vucomisd] = ACTIONS(178),
    [anon_sym_vucomiss] = ACTIONS(178),
    [anon_sym_vunpckhpd] = ACTIONS(178),
    [anon_sym_vunpckhps] = ACTIONS(178),
    [anon_sym_vunpcklpd] = ACTIONS(178),
    [anon_sym_vunpcklps] = ACTIONS(178),
    [anon_sym_vbroadcastss] = ACTIONS(178),
    [anon_sym_vinsertf128] = ACTIONS(178),
    [anon_sym_vperm2f128] = ACTIONS(178),
    [anon_sym_vzeroall] = ACTIONS(178),
    [anon_sym_vzeroupper] = ACTIONS(178),
    [anon_sym_vshufi32x4] = ACTIONS(178),
    [anon_sym_vshufi64x2] = ACTIONS(178),
    [anon_sym_vpblendmd] = ACTIONS(178),
    [anon_sym_vextracti128] = ACTIONS(178),
    [anon_sym_vextracti32x4] = ACTIONS(178),
    [anon_sym_vinserti128] = ACTIONS(178),
    [anon_sym_vinserti32x4] = ACTIONS(178),
    [anon_sym_vinserti64x4] = ACTIONS(178),
    [anon_sym_vpblendd] = ACTIONS(178),
    [anon_sym_vpbroadcastq] = ACTIONS(178),
    [anon_sym_vpbroadcastd] = ACTIONS(178),
    [anon_sym_vbroadcasti128] = ACTIONS(178),
    [anon_sym_vbroadcasti32x4] = ACTIONS(178),
    [anon_sym_vperm2i128] = ACTIONS(178),
    [anon_sym_vpermd] = ACTIONS(178),
    [anon_sym_vpermq] = ACTIONS(178),
    [anon_sym_vpermt2d] = ACTIONS(178),
    [anon_sym_vpermi2d] = ACTIONS(178),
    [anon_sym_tzcnt] = ACTIONS(178),
    [anon_sym_rorx] = ACTIONS(178),
    [anon_sym_psubd] = ACTIONS(178),
    [anon_sym_pmaddwd] = ACTIONS(178),
    [anon_sym_pxor] = ACTIONS(178),
    [anon_sym_psrad] = ACTIONS(178),
    [anon_sym_pslld] = ACTIONS(178),
    [anon_sym_pcmpgtd] = ACTIONS(178),
    [anon_sym_pcmpeqd] = ACTIONS(178),
    [anon_sym_por] = ACTIONS(178),
    [anon_sym_paddw] = ACTIONS(178),
    [anon_sym_psubusw] = ACTIONS(178),
    [anon_sym_pcmpeqb] = ACTIONS(178),
    [anon_sym_psubusb] = ACTIONS(178),
    [anon_sym_psrld] = ACTIONS(178),
    [anon_sym_psrlw] = ACTIONS(178),
    [anon_sym_psllq] = ACTIONS(178),
    [anon_sym_paddd] = ACTIONS(178),
    [anon_sym_psrlq] = ACTIONS(178),
    [anon_sym_psubb] = ACTIONS(178),
    [anon_sym_maxss] = ACTIONS(178),
    [anon_sym_pmovmskb] = ACTIONS(178),
    [anon_sym_pinsrw] = ACTIONS(178),
    [anon_sym_minss] = ACTIONS(178),
    [anon_sym_prefetcht1] = ACTIONS(178),
    [anon_sym_prefetcht0] = ACTIONS(178),
    [anon_sym_pextrw] = ACTIONS(178),
    [anon_sym_ucomiss] = ACTIONS(178),
    [anon_sym_shufps] = ACTIONS(178),
    [anon_sym_addsd] = ACTIONS(178),
    [anon_sym_paddq] = ACTIONS(178),
    [anon_sym_psubq] = ACTIONS(178),
    [anon_sym_pshuflw] = ACTIONS(178),
    [anon_sym_pmuludq] = ACTIONS(178),
    [anon_sym_pshufd] = ACTIONS(178),
    [anon_sym_minsd] = ACTIONS(178),
    [anon_sym_pshufhw] = ACTIONS(178),
    [anon_sym_mfence] = ACTIONS(178),
    [anon_sym_maxsd] = ACTIONS(178),
    [anon_sym_ucomisd] = ACTIONS(178),
    [anon_sym_shufpd] = ACTIONS(178),
    [anon_sym_pslldq] = ACTIONS(178),
    [anon_sym_unpckhpd] = ACTIONS(178),
    [anon_sym_psrldq] = ACTIONS(178),
    [anon_sym_palignr] = ACTIONS(178),
    [anon_sym_pshufb] = ACTIONS(178),
    [anon_sym_pmaddubsw] = ACTIONS(178),
    [anon_sym_pinsrb] = ACTIONS(178),
    [anon_sym_pblendw] = ACTIONS(178),
    [anon_sym_pextrq] = ACTIONS(178),
    [anon_sym_blendvps] = ACTIONS(178),
    [anon_sym_pextrb] = ACTIONS(178),
    [anon_sym_pinsrd] = ACTIONS(178),
    [anon_sym_femms] = ACTIONS(178),
    [anon_sym_f] = ACTIONS(178),
    [aux_sym_operand_token1] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [anon_sym_PERCENTss] = ACTIONS(178),
    [anon_sym_PERCENTcs] = ACTIONS(178),
    [anon_sym_PERCENTds] = ACTIONS(178),
    [anon_sym_PERCENTes] = ACTIONS(178),
    [anon_sym_PERCENTfs] = ACTIONS(178),
    [anon_sym_PERCENTgs] = ACTIONS(178),
    [anon_sym_PERCENTrax] = ACTIONS(178),
    [anon_sym_PERCENTrbx] = ACTIONS(178),
    [anon_sym_PERCENTrcx] = ACTIONS(178),
    [anon_sym_PERCENTrdx] = ACTIONS(178),
    [anon_sym_PERCENTrsi] = ACTIONS(178),
    [anon_sym_PERCENTrdi] = ACTIONS(178),
    [anon_sym_PERCENTrbp] = ACTIONS(178),
    [anon_sym_PERCENTrsp] = ACTIONS(178),
    [anon_sym_PERCENTr8] = ACTIONS(178),
    [anon_sym_PERCENTr9] = ACTIONS(178),
    [anon_sym_PERCENTr10] = ACTIONS(178),
    [anon_sym_PERCENTr11] = ACTIONS(178),
    [anon_sym_PERCENTr12] = ACTIONS(178),
    [anon_sym_PERCENTr13] = ACTIONS(178),
    [anon_sym_PERCENTr14] = ACTIONS(178),
    [anon_sym_PERCENTr15] = ACTIONS(178),
    [anon_sym_PERCENTeax] = ACTIONS(178),
    [anon_sym_PERCENTecx] = ACTIONS(178),
    [anon_sym_PERCENTedx] = ACTIONS(178),
    [anon_sym_PERCENTebx] = ACTIONS(178),
    [anon_sym_PERCENTesi] = ACTIONS(178),
    [anon_sym_PERCENTedi] = ACTIONS(178),
    [anon_sym_PERCENTebp] = ACTIONS(178),
    [anon_sym_PERCENTesp] = ACTIONS(178),
    [anon_sym_PERCENTr8d] = ACTIONS(178),
    [anon_sym_PERCENTr9d] = ACTIONS(178),
    [anon_sym_PERCENTr10d] = ACTIONS(178),
    [anon_sym_PERCENTr11d] = ACTIONS(178),
    [anon_sym_PERCENTr12d] = ACTIONS(178),
    [anon_sym_PERCENTr13d] = ACTIONS(178),
    [anon_sym_PERCENTr14d] = ACTIONS(178),
    [anon_sym_PERCENTr15d] = ACTIONS(178),
    [anon_sym_PERCENTax] = ACTIONS(178),
    [anon_sym_PERCENTcx] = ACTIONS(178),
    [anon_sym_PERCENTdx] = ACTIONS(178),
    [anon_sym_PERCENTbx] = ACTIONS(178),
    [anon_sym_PERCENTsi] = ACTIONS(178),
    [anon_sym_PERCENTdi] = ACTIONS(178),
    [anon_sym_PERCENTsp] = ACTIONS(178),
    [anon_sym_PERCENTbp] = ACTIONS(178),
    [anon_sym_PERCENTr8w] = ACTIONS(178),
    [anon_sym_PERCENTr9w] = ACTIONS(178),
    [anon_sym_PERCENTr10w] = ACTIONS(178),
    [anon_sym_PERCENTr11w] = ACTIONS(178),
    [anon_sym_PERCENTr12w] = ACTIONS(178),
    [anon_sym_PERCENTr13w] = ACTIONS(178),
    [anon_sym_PERCENTr14w] = ACTIONS(178),
    [anon_sym_PERCENTr15w] = ACTIONS(178),
    [anon_sym_PERCENTal] = ACTIONS(178),
    [anon_sym_PERCENTcl] = ACTIONS(178),
    [anon_sym_PERCENTdl] = ACTIONS(178),
    [anon_sym_PERCENTbl] = ACTIONS(178),
    [anon_sym_PERCENTsil] = ACTIONS(178),
    [anon_sym_PERCENTdil] = ACTIONS(178),
    [anon_sym_PERCENTspl] = ACTIONS(178),
    [anon_sym_PERCENTbpl] = ACTIONS(178),
    [anon_sym_PERCENTr8b] = ACTIONS(178),
    [anon_sym_PERCENTr9b] = ACTIONS(178),
    [anon_sym_PERCENTr10b] = ACTIONS(178),
    [anon_sym_PERCENTr11b] = ACTIONS(178),
    [anon_sym_PERCENTr12b] = ACTIONS(178),
    [anon_sym_PERCENTr13b] = ACTIONS(178),
    [anon_sym_PERCENTr14b] = ACTIONS(178),
    [anon_sym_PERCENTr15b] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_movsq] = ACTIONS(178),
    [anon_sym_cmpsb] = ACTIONS(178),
    [anon_sym_cmpxchg] = ACTIONS(178),
    [anon_sym_movsl] = ACTIONS(178),
    [anon_sym_callq] = ACTIONS(178),
    [anon_sym_ja] = ACTIONS(178),
    [anon_sym_jae] = ACTIONS(178),
    [anon_sym_jb] = ACTIONS(178),
    [anon_sym_jbe] = ACTIONS(178),
    [anon_sym_je] = ACTIONS(178),
    [anon_sym_jg] = ACTIONS(178),
    [anon_sym_jge] = ACTIONS(178),
    [anon_sym_jl] = ACTIONS(178),
    [anon_sym_jle] = ACTIONS(178),
    [anon_sym_jmp] = ACTIONS(178),
    [anon_sym_jmpq] = ACTIONS(178),
    [anon_sym_jne] = ACTIONS(178),
    [anon_sym_jno] = ACTIONS(178),
    [anon_sym_jns] = ACTIONS(178),
    [anon_sym_jo] = ACTIONS(178),
    [anon_sym_jp] = ACTIONS(178),
    [anon_sym_jrcxz] = ACTIONS(178),
    [anon_sym_js] = ACTIONS(178),
    [anon_sym_notrack] = ACTIONS(178),
    [anon_sym_PERCENTcr0] = ACTIONS(178),
    [anon_sym_PERCENTcr2] = ACTIONS(178),
    [anon_sym_PERCENTcr3] = ACTIONS(178),
    [anon_sym_PERCENTcr4] = ACTIONS(178),
    [anon_sym_PERCENTrip] = ACTIONS(178),
    [anon_sym_PERCENTeip] = ACTIONS(178),
    [anon_sym_PERCENTip] = ACTIONS(178),
    [anon_sym_PERCENTst] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
  },
  [7] = {
    [aux_sym_comment_token1] = ACTIONS(182),
    [aux_sym_comment_token2] = ACTIONS(182),
    [sym__line_break] = ACTIONS(184),
    [anon_sym_adc] = ACTIONS(182),
    [anon_sym_add] = ACTIONS(182),
    [anon_sym_addq] = ACTIONS(182),
    [anon_sym_addl] = ACTIONS(182),
    [anon_sym_addss] = ACTIONS(182),
    [anon_sym_addw] = ACTIONS(182),
    [anon_sym_addb] = ACTIONS(182),
    [anon_sym_cmp] = ACTIONS(182),
    [anon_sym_cmpb] = ACTIONS(182),
    [anon_sym_cmpw] = ACTIONS(182),
    [anon_sym_cmpl] = ACTIONS(182),
    [anon_sym_cmpq] = ACTIONS(182),
    [anon_sym_comiss] = ACTIONS(182),
    [anon_sym_comisd] = ACTIONS(182),
    [anon_sym_inc] = ACTIONS(182),
    [anon_sym_incl] = ACTIONS(182),
    [anon_sym_dec] = ACTIONS(182),
    [anon_sym_div] = ACTIONS(182),
    [anon_sym_divq] = ACTIONS(182),
    [anon_sym_divl] = ACTIONS(182),
    [anon_sym_divss] = ACTIONS(182),
    [anon_sym_divsd] = ACTIONS(182),
    [anon_sym_idiv] = ACTIONS(182),
    [anon_sym_idivl] = ACTIONS(182),
    [anon_sym_sub] = ACTIONS(182),
    [anon_sym_subq] = ACTIONS(182),
    [anon_sym_subl] = ACTIONS(182),
    [anon_sym_subss] = ACTIONS(182),
    [anon_sym_subw] = ACTIONS(182),
    [anon_sym_subb] = ACTIONS(182),
    [anon_sym_subsd] = ACTIONS(182),
    [anon_sym_subpd] = ACTIONS(182),
    [anon_sym_sbb] = ACTIONS(182),
    [anon_sym_mul] = ACTIONS(182),
    [anon_sym_mulq] = ACTIONS(182),
    [anon_sym_mull] = ACTIONS(182),
    [anon_sym_mulss] = ACTIONS(182),
    [anon_sym_mulw] = ACTIONS(182),
    [anon_sym_mulb] = ACTIONS(182),
    [anon_sym_mulsd] = ACTIONS(182),
    [anon_sym_mulx] = ACTIONS(182),
    [anon_sym_imul] = ACTIONS(182),
    [anon_sym_neg] = ACTIONS(182),
    [anon_sym_negl] = ACTIONS(182),
    [anon_sym_negq] = ACTIONS(182),
    [anon_sym_fmulp] = ACTIONS(182),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(182),
    [anon_sym_pclmullqlqdq] = ACTIONS(182),
    [anon_sym_pclmullqhqdq] = ACTIONS(182),
    [anon_sym_vpclmullqhqdq] = ACTIONS(182),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(182),
    [anon_sym_pclmulhqhqdq] = ACTIONS(182),
    [anon_sym_vpclmullqlqdq] = ACTIONS(182),
    [anon_sym_bsf] = ACTIONS(182),
    [anon_sym_bsr] = ACTIONS(182),
    [anon_sym_bts] = ACTIONS(182),
    [anon_sym_bt] = ACTIONS(182),
    [anon_sym_btr] = ACTIONS(182),
    [anon_sym_btl] = ACTIONS(182),
    [anon_sym_setne] = ACTIONS(182),
    [anon_sym_setb] = ACTIONS(182),
    [anon_sym_sete] = ACTIONS(182),
    [anon_sym_setbe] = ACTIONS(182),
    [anon_sym_seta] = ACTIONS(182),
    [anon_sym_setge] = ACTIONS(182),
    [anon_sym_setae] = ACTIONS(182),
    [anon_sym_setl] = ACTIONS(182),
    [anon_sym_setle] = ACTIONS(182),
    [anon_sym_setg] = ACTIONS(182),
    [anon_sym_seto] = ACTIONS(182),
    [anon_sym_setnp] = ACTIONS(182),
    [anon_sym_setp] = ACTIONS(182),
    [anon_sym_setns] = ACTIONS(182),
    [anon_sym_test] = ACTIONS(182),
    [anon_sym_testb] = ACTIONS(182),
    [anon_sym_testl] = ACTIONS(182),
    [anon_sym_knotw] = ACTIONS(182),
    [anon_sym_vpcmpltud] = ACTIONS(182),
    [anon_sym_gs] = ACTIONS(182),
    [anon_sym_re] = ACTIONS(182),
    [anon_sym_ss] = ACTIONS(182),
    [anon_sym_leaveq] = ACTIONS(182),
    [anon_sym_retq] = ACTIONS(182),
    [anon_sym_bswap] = ACTIONS(182),
    [anon_sym_cbtw] = ACTIONS(182),
    [anon_sym_cltd] = ACTIONS(182),
    [anon_sym_cltq] = ACTIONS(182),
    [anon_sym_cmovbe] = ACTIONS(182),
    [anon_sym_cmovl] = ACTIONS(182),
    [anon_sym_cmovae] = ACTIONS(182),
    [anon_sym_cmovo] = ACTIONS(182),
    [anon_sym_cmovne] = ACTIONS(182),
    [anon_sym_cmovns] = ACTIONS(182),
    [anon_sym_cmovg] = ACTIONS(182),
    [anon_sym_cmovp] = ACTIONS(182),
    [anon_sym_cmove] = ACTIONS(182),
    [anon_sym_cmovge] = ACTIONS(182),
    [anon_sym_cmovb] = ACTIONS(182),
    [anon_sym_cmova] = ACTIONS(182),
    [anon_sym_cmovle] = ACTIONS(182),
    [anon_sym_cmovs] = ACTIONS(182),
    [anon_sym_cwtl] = ACTIONS(182),
    [anon_sym_cwtd] = ACTIONS(182),
    [anon_sym_cqto] = ACTIONS(182),
    [anon_sym_cvttsd2si] = ACTIONS(182),
    [anon_sym_cvtss2sd] = ACTIONS(182),
    [anon_sym_cvttss2si] = ACTIONS(182),
    [anon_sym_cvtsi2sd] = ACTIONS(182),
    [anon_sym_cvtsi2ss] = ACTIONS(182),
    [anon_sym_cvtsi2sdq] = ACTIONS(182),
    [anon_sym_cvtsi2sdl] = ACTIONS(182),
    [anon_sym_cvtsd2ss] = ACTIONS(182),
    [anon_sym_cvtsi2ssl] = ACTIONS(182),
    [anon_sym_mov] = ACTIONS(182),
    [anon_sym_movw] = ACTIONS(182),
    [anon_sym_movl] = ACTIONS(182),
    [anon_sym_movq] = ACTIONS(182),
    [anon_sym_movb] = ACTIONS(182),
    [anon_sym_movabs] = ACTIONS(182),
    [anon_sym_movsbw] = ACTIONS(182),
    [anon_sym_movsbq] = ACTIONS(182),
    [anon_sym_movsbl] = ACTIONS(182),
    [anon_sym_movswl] = ACTIONS(182),
    [anon_sym_movswq] = ACTIONS(182),
    [anon_sym_movzbw] = ACTIONS(182),
    [anon_sym_movzbq] = ACTIONS(182),
    [anon_sym_movzbl] = ACTIONS(182),
    [anon_sym_movzwl] = ACTIONS(182),
    [anon_sym_movaps] = ACTIONS(182),
    [anon_sym_movhlps] = ACTIONS(182),
    [anon_sym_movss] = ACTIONS(182),
    [anon_sym_movups] = ACTIONS(182),
    [anon_sym_movsd] = ACTIONS(182),
    [anon_sym_movd] = ACTIONS(182),
    [anon_sym_movhps] = ACTIONS(182),
    [anon_sym_movdqa] = ACTIONS(182),
    [anon_sym_movbe] = ACTIONS(182),
    [anon_sym_movapd] = ACTIONS(182),
    [anon_sym_movdqu] = ACTIONS(182),
    [anon_sym_xchg] = ACTIONS(182),
    [anon_sym_fildl] = ACTIONS(182),
    [anon_sym_fldt] = ACTIONS(182),
    [anon_sym_fstpl] = ACTIONS(182),
    [anon_sym_insb] = ACTIONS(182),
    [anon_sym_insl] = ACTIONS(182),
    [anon_sym_outsb] = ACTIONS(182),
    [anon_sym_outsl] = ACTIONS(182),
    [anon_sym_or] = ACTIONS(182),
    [anon_sym_orq] = ACTIONS(182),
    [anon_sym_orl] = ACTIONS(182),
    [anon_sym_orb] = ACTIONS(182),
    [anon_sym_orw] = ACTIONS(182),
    [anon_sym_xor] = ACTIONS(182),
    [anon_sym_xorl] = ACTIONS(182),
    [anon_sym_xorw] = ACTIONS(182),
    [anon_sym_xorps] = ACTIONS(182),
    [anon_sym_xorpd] = ACTIONS(182),
    [anon_sym_vxorps] = ACTIONS(182),
    [anon_sym_vpxord] = ACTIONS(182),
    [anon_sym_vpxor] = ACTIONS(182),
    [anon_sym_and] = ACTIONS(182),
    [anon_sym_andq] = ACTIONS(182),
    [anon_sym_andl] = ACTIONS(182),
    [anon_sym_andw] = ACTIONS(182),
    [anon_sym_andb] = ACTIONS(182),
    [anon_sym_andn] = ACTIONS(182),
    [anon_sym_andpd] = ACTIONS(182),
    [anon_sym_pand] = ACTIONS(182),
    [anon_sym_pandn] = ACTIONS(182),
    [anon_sym_andps] = ACTIONS(182),
    [anon_sym_vpand] = ACTIONS(182),
    [anon_sym_not] = ACTIONS(182),
    [anon_sym_notl] = ACTIONS(182),
    [anon_sym_notw] = ACTIONS(182),
    [anon_sym_cpuid] = ACTIONS(182),
    [anon_sym_lea] = ACTIONS(182),
    [anon_sym_popcnt] = ACTIONS(182),
    [anon_sym_nop] = ACTIONS(182),
    [anon_sym_nopl] = ACTIONS(182),
    [anon_sym_nopw] = ACTIONS(182),
    [anon_sym_ud2] = ACTIONS(182),
    [anon_sym_data16] = ACTIONS(182),
    [anon_sym_sha1rnds4] = ACTIONS(182),
    [anon_sym_addr32] = ACTIONS(182),
    [anon_sym_sha1msg1] = ACTIONS(182),
    [anon_sym_sha1msg2] = ACTIONS(182),
    [anon_sym_sha1nexte] = ACTIONS(182),
    [anon_sym_endbr64] = ACTIONS(182),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(182),
    [anon_sym_packuswb] = ACTIONS(182),
    [anon_sym_punpckhbw] = ACTIONS(182),
    [anon_sym_punpckhdq] = ACTIONS(182),
    [anon_sym_punpckhwd] = ACTIONS(182),
    [anon_sym_punpcklbw] = ACTIONS(182),
    [anon_sym_punpckldq] = ACTIONS(182),
    [anon_sym_punpcklwd] = ACTIONS(182),
    [anon_sym_vpunpcklwd] = ACTIONS(182),
    [anon_sym_vpunpckldq] = ACTIONS(182),
    [anon_sym_punpcklqdq] = ACTIONS(182),
    [anon_sym_punpckhqdq] = ACTIONS(182),
    [anon_sym_vpunpckhqdq] = ACTIONS(182),
    [anon_sym_vpunpckhdq] = ACTIONS(182),
    [anon_sym_vpunpcklqdq] = ACTIONS(182),
    [anon_sym_vpunpckhwd] = ACTIONS(182),
    [anon_sym_rol] = ACTIONS(182),
    [anon_sym_ror] = ACTIONS(182),
    [anon_sym_sar] = ACTIONS(182),
    [anon_sym_sarl] = ACTIONS(182),
    [anon_sym_sarx] = ACTIONS(182),
    [anon_sym_shl] = ACTIONS(182),
    [anon_sym_shll] = ACTIONS(182),
    [anon_sym_shld] = ACTIONS(182),
    [anon_sym_shlx] = ACTIONS(182),
    [anon_sym_shlq] = ACTIONS(182),
    [anon_sym_shr] = ACTIONS(182),
    [anon_sym_shrq] = ACTIONS(182),
    [anon_sym_shrd] = ACTIONS(182),
    [anon_sym_shrl] = ACTIONS(182),
    [anon_sym_shrx] = ACTIONS(182),
    [anon_sym_vprord] = ACTIONS(182),
    [anon_sym_vprorq] = ACTIONS(182),
    [anon_sym_rorl] = ACTIONS(182),
    [anon_sym_roll] = ACTIONS(182),
    [anon_sym_push] = ACTIONS(182),
    [anon_sym_pushq] = ACTIONS(182),
    [anon_sym_pop] = ACTIONS(182),
    [anon_sym_movslq] = ACTIONS(182),
    [anon_sym_movsb] = ACTIONS(182),
    [anon_sym_rep] = ACTIONS(182),
    [anon_sym_repz] = ACTIONS(182),
    [anon_sym_repnz] = ACTIONS(182),
    [anon_sym_rex] = ACTIONS(182),
    [anon_sym_rex_DOTWB] = ACTIONS(182),
    [anon_sym_rex_DOTWRB] = ACTIONS(182),
    [anon_sym_rex_DOTRXB] = ACTIONS(182),
    [anon_sym_rex_DOTB] = ACTIONS(182),
    [anon_sym_rex_DOTWRXB] = ACTIONS(182),
    [anon_sym_rex_DOTXB] = ACTIONS(182),
    [anon_sym_rex_DOTW] = ACTIONS(182),
    [anon_sym_rex_DOTRB] = ACTIONS(182),
    [anon_sym_xgetbv] = ACTIONS(182),
    [anon_sym_fs] = ACTIONS(182),
    [anon_sym_kmovw] = ACTIONS(182),
    [anon_sym_adcx] = ACTIONS(182),
    [anon_sym_adox] = ACTIONS(182),
    [anon_sym_aesdec] = ACTIONS(182),
    [anon_sym_aesdeclast] = ACTIONS(182),
    [anon_sym_aesenc] = ACTIONS(182),
    [anon_sym_aesenclast] = ACTIONS(182),
    [anon_sym_vaesenc] = ACTIONS(182),
    [anon_sym_vaesenclast] = ACTIONS(182),
    [anon_sym_aeskeygenassist] = ACTIONS(182),
    [anon_sym_vblendps] = ACTIONS(182),
    [anon_sym_vblendvps] = ACTIONS(182),
    [anon_sym_vcvtusi2sd] = ACTIONS(182),
    [anon_sym_vdivsd] = ACTIONS(182),
    [anon_sym_vmovaps] = ACTIONS(182),
    [anon_sym_vmovapd] = ACTIONS(182),
    [anon_sym_vmovss] = ACTIONS(182),
    [anon_sym_vmovdqu] = ACTIONS(182),
    [anon_sym_vmovdqu64] = ACTIONS(182),
    [anon_sym_vmovdqu32] = ACTIONS(182),
    [anon_sym_vmovdqa] = ACTIONS(182),
    [anon_sym_vmovdqa32] = ACTIONS(182),
    [anon_sym_vmovdqa64] = ACTIONS(182),
    [anon_sym_vmovq] = ACTIONS(182),
    [anon_sym_vmovups] = ACTIONS(182),
    [anon_sym_vmovd] = ACTIONS(182),
    [anon_sym_vmovsd] = ACTIONS(182),
    [anon_sym_vmulsd] = ACTIONS(182),
    [anon_sym_vpackusdw] = ACTIONS(182),
    [anon_sym_vpaddd] = ACTIONS(182),
    [anon_sym_vpaddb] = ACTIONS(182),
    [anon_sym_vpaddq] = ACTIONS(182),
    [anon_sym_vpaddw] = ACTIONS(182),
    [anon_sym_vpalignr] = ACTIONS(182),
    [anon_sym_vpcmpgtd] = ACTIONS(182),
    [anon_sym_vpextrw] = ACTIONS(182),
    [anon_sym_vpinsrw] = ACTIONS(182),
    [anon_sym_vpinsrd] = ACTIONS(182),
    [anon_sym_vpinsrq] = ACTIONS(182),
    [anon_sym_vpinsrb] = ACTIONS(182),
    [anon_sym_vpmaddubsw] = ACTIONS(182),
    [anon_sym_vpmaddwd] = ACTIONS(182),
    [anon_sym_vpmullw] = ACTIONS(182),
    [anon_sym_vpmuludq] = ACTIONS(182),
    [anon_sym_vpor] = ACTIONS(182),
    [anon_sym_vpshufb] = ACTIONS(182),
    [anon_sym_vpshufd] = ACTIONS(182),
    [anon_sym_vpslldq] = ACTIONS(182),
    [anon_sym_vpslld] = ACTIONS(182),
    [anon_sym_vpsllq] = ACTIONS(182),
    [anon_sym_vpsllw] = ACTIONS(182),
    [anon_sym_vpsrldq] = ACTIONS(182),
    [anon_sym_vpsrld] = ACTIONS(182),
    [anon_sym_vpsrlq] = ACTIONS(182),
    [anon_sym_vpsrlw] = ACTIONS(182),
    [anon_sym_vpsubusw] = ACTIONS(182),
    [anon_sym_vpsubq] = ACTIONS(182),
    [anon_sym_vpsubd] = ACTIONS(182),
    [anon_sym_vpsubw] = ACTIONS(182),
    [anon_sym_vshufps] = ACTIONS(182),
    [anon_sym_vsubsd] = ACTIONS(182),
    [anon_sym_vucomisd] = ACTIONS(182),
    [anon_sym_vucomiss] = ACTIONS(182),
    [anon_sym_vunpckhpd] = ACTIONS(182),
    [anon_sym_vunpckhps] = ACTIONS(182),
    [anon_sym_vunpcklpd] = ACTIONS(182),
    [anon_sym_vunpcklps] = ACTIONS(182),
    [anon_sym_vbroadcastss] = ACTIONS(182),
    [anon_sym_vinsertf128] = ACTIONS(182),
    [anon_sym_vperm2f128] = ACTIONS(182),
    [anon_sym_vzeroall] = ACTIONS(182),
    [anon_sym_vzeroupper] = ACTIONS(182),
    [anon_sym_vshufi32x4] = ACTIONS(182),
    [anon_sym_vshufi64x2] = ACTIONS(182),
    [anon_sym_vpblendmd] = ACTIONS(182),
    [anon_sym_vextracti128] = ACTIONS(182),
    [anon_sym_vextracti32x4] = ACTIONS(182),
    [anon_sym_vinserti128] = ACTIONS(182),
    [anon_sym_vinserti32x4] = ACTIONS(182),
    [anon_sym_vinserti64x4] = ACTIONS(182),
    [anon_sym_vpblendd] = ACTIONS(182),
    [anon_sym_vpbroadcastq] = ACTIONS(182),
    [anon_sym_vpbroadcastd] = ACTIONS(182),
    [anon_sym_vbroadcasti128] = ACTIONS(182),
    [anon_sym_vbroadcasti32x4] = ACTIONS(182),
    [anon_sym_vperm2i128] = ACTIONS(182),
    [anon_sym_vpermd] = ACTIONS(182),
    [anon_sym_vpermq] = ACTIONS(182),
    [anon_sym_vpermt2d] = ACTIONS(182),
    [anon_sym_vpermi2d] = ACTIONS(182),
    [anon_sym_tzcnt] = ACTIONS(182),
    [anon_sym_rorx] = ACTIONS(182),
    [anon_sym_psubd] = ACTIONS(182),
    [anon_sym_pmaddwd] = ACTIONS(182),
    [anon_sym_pxor] = ACTIONS(182),
    [anon_sym_psrad] = ACTIONS(182),
    [anon_sym_pslld] = ACTIONS(182),
    [anon_sym_pcmpgtd] = ACTIONS(182),
    [anon_sym_pcmpeqd] = ACTIONS(182),
    [anon_sym_por] = ACTIONS(182),
    [anon_sym_paddw] = ACTIONS(182),
    [anon_sym_psubusw] = ACTIONS(182),
    [anon_sym_pcmpeqb] = ACTIONS(182),
    [anon_sym_psubusb] = ACTIONS(182),
    [anon_sym_psrld] = ACTIONS(182),
    [anon_sym_psrlw] = ACTIONS(182),
    [anon_sym_psllq] = ACTIONS(182),
    [anon_sym_paddd] = ACTIONS(182),
    [anon_sym_psrlq] = ACTIONS(182),
    [anon_sym_psubb] = ACTIONS(182),
    [anon_sym_maxss] = ACTIONS(182),
    [anon_sym_pmovmskb] = ACTIONS(182),
    [anon_sym_pinsrw] = ACTIONS(182),
    [anon_sym_minss] = ACTIONS(182),
    [anon_sym_prefetcht1] = ACTIONS(182),
    [anon_sym_prefetcht0] = ACTIONS(182),
    [anon_sym_pextrw] = ACTIONS(182),
    [anon_sym_ucomiss] = ACTIONS(182),
    [anon_sym_shufps] = ACTIONS(182),
    [anon_sym_addsd] = ACTIONS(182),
    [anon_sym_paddq] = ACTIONS(182),
    [anon_sym_psubq] = ACTIONS(182),
    [anon_sym_pshuflw] = ACTIONS(182),
    [anon_sym_pmuludq] = ACTIONS(182),
    [anon_sym_pshufd] = ACTIONS(182),
    [anon_sym_minsd] = ACTIONS(182),
    [anon_sym_pshufhw] = ACTIONS(182),
    [anon_sym_mfence] = ACTIONS(182),
    [anon_sym_maxsd] = ACTIONS(182),
    [anon_sym_ucomisd] = ACTIONS(182),
    [anon_sym_shufpd] = ACTIONS(182),
    [anon_sym_pslldq] = ACTIONS(182),
    [anon_sym_unpckhpd] = ACTIONS(182),
    [anon_sym_psrldq] = ACTIONS(182),
    [anon_sym_palignr] = ACTIONS(182),
    [anon_sym_pshufb] = ACTIONS(182),
    [anon_sym_pmaddubsw] = ACTIONS(182),
    [anon_sym_pinsrb] = ACTIONS(182),
    [anon_sym_pblendw] = ACTIONS(182),
    [anon_sym_pextrq] = ACTIONS(182),
    [anon_sym_blendvps] = ACTIONS(182),
    [anon_sym_pextrb] = ACTIONS(182),
    [anon_sym_pinsrd] = ACTIONS(182),
    [anon_sym_femms] = ACTIONS(182),
    [anon_sym_f] = ACTIONS(182),
    [aux_sym_operand_token1] = ACTIONS(182),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(182),
    [anon_sym_PERCENTss] = ACTIONS(182),
    [anon_sym_PERCENTcs] = ACTIONS(182),
    [anon_sym_PERCENTds] = ACTIONS(182),
    [anon_sym_PERCENTes] = ACTIONS(182),
    [anon_sym_PERCENTfs] = ACTIONS(182),
    [anon_sym_PERCENTgs] = ACTIONS(182),
    [anon_sym_PERCENTrax] = ACTIONS(182),
    [anon_sym_PERCENTrbx] = ACTIONS(182),
    [anon_sym_PERCENTrcx] = ACTIONS(182),
    [anon_sym_PERCENTrdx] = ACTIONS(182),
    [anon_sym_PERCENTrsi] = ACTIONS(182),
    [anon_sym_PERCENTrdi] = ACTIONS(182),
    [anon_sym_PERCENTrbp] = ACTIONS(182),
    [anon_sym_PERCENTrsp] = ACTIONS(182),
    [anon_sym_PERCENTr8] = ACTIONS(182),
    [anon_sym_PERCENTr9] = ACTIONS(182),
    [anon_sym_PERCENTr10] = ACTIONS(182),
    [anon_sym_PERCENTr11] = ACTIONS(182),
    [anon_sym_PERCENTr12] = ACTIONS(182),
    [anon_sym_PERCENTr13] = ACTIONS(182),
    [anon_sym_PERCENTr14] = ACTIONS(182),
    [anon_sym_PERCENTr15] = ACTIONS(182),
    [anon_sym_PERCENTeax] = ACTIONS(182),
    [anon_sym_PERCENTecx] = ACTIONS(182),
    [anon_sym_PERCENTedx] = ACTIONS(182),
    [anon_sym_PERCENTebx] = ACTIONS(182),
    [anon_sym_PERCENTesi] = ACTIONS(182),
    [anon_sym_PERCENTedi] = ACTIONS(182),
    [anon_sym_PERCENTebp] = ACTIONS(182),
    [anon_sym_PERCENTesp] = ACTIONS(182),
    [anon_sym_PERCENTr8d] = ACTIONS(182),
    [anon_sym_PERCENTr9d] = ACTIONS(182),
    [anon_sym_PERCENTr10d] = ACTIONS(182),
    [anon_sym_PERCENTr11d] = ACTIONS(182),
    [anon_sym_PERCENTr12d] = ACTIONS(182),
    [anon_sym_PERCENTr13d] = ACTIONS(182),
    [anon_sym_PERCENTr14d] = ACTIONS(182),
    [anon_sym_PERCENTr15d] = ACTIONS(182),
    [anon_sym_PERCENTax] = ACTIONS(182),
    [anon_sym_PERCENTcx] = ACTIONS(182),
    [anon_sym_PERCENTdx] = ACTIONS(182),
    [anon_sym_PERCENTbx] = ACTIONS(182),
    [anon_sym_PERCENTsi] = ACTIONS(182),
    [anon_sym_PERCENTdi] = ACTIONS(182),
    [anon_sym_PERCENTsp] = ACTIONS(182),
    [anon_sym_PERCENTbp] = ACTIONS(182),
    [anon_sym_PERCENTr8w] = ACTIONS(182),
    [anon_sym_PERCENTr9w] = ACTIONS(182),
    [anon_sym_PERCENTr10w] = ACTIONS(182),
    [anon_sym_PERCENTr11w] = ACTIONS(182),
    [anon_sym_PERCENTr12w] = ACTIONS(182),
    [anon_sym_PERCENTr13w] = ACTIONS(182),
    [anon_sym_PERCENTr14w] = ACTIONS(182),
    [anon_sym_PERCENTr15w] = ACTIONS(182),
    [anon_sym_PERCENTal] = ACTIONS(182),
    [anon_sym_PERCENTcl] = ACTIONS(182),
    [anon_sym_PERCENTdl] = ACTIONS(182),
    [anon_sym_PERCENTbl] = ACTIONS(182),
    [anon_sym_PERCENTsil] = ACTIONS(182),
    [anon_sym_PERCENTdil] = ACTIONS(182),
    [anon_sym_PERCENTspl] = ACTIONS(182),
    [anon_sym_PERCENTbpl] = ACTIONS(182),
    [anon_sym_PERCENTr8b] = ACTIONS(182),
    [anon_sym_PERCENTr9b] = ACTIONS(182),
    [anon_sym_PERCENTr10b] = ACTIONS(182),
    [anon_sym_PERCENTr11b] = ACTIONS(182),
    [anon_sym_PERCENTr12b] = ACTIONS(182),
    [anon_sym_PERCENTr13b] = ACTIONS(182),
    [anon_sym_PERCENTr14b] = ACTIONS(182),
    [anon_sym_PERCENTr15b] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_movsq] = ACTIONS(182),
    [anon_sym_cmpsb] = ACTIONS(182),
    [anon_sym_cmpxchg] = ACTIONS(182),
    [anon_sym_movsl] = ACTIONS(182),
    [anon_sym_callq] = ACTIONS(182),
    [anon_sym_ja] = ACTIONS(182),
    [anon_sym_jae] = ACTIONS(182),
    [anon_sym_jb] = ACTIONS(182),
    [anon_sym_jbe] = ACTIONS(182),
    [anon_sym_je] = ACTIONS(182),
    [anon_sym_jg] = ACTIONS(182),
    [anon_sym_jge] = ACTIONS(182),
    [anon_sym_jl] = ACTIONS(182),
    [anon_sym_jle] = ACTIONS(182),
    [anon_sym_jmp] = ACTIONS(182),
    [anon_sym_jmpq] = ACTIONS(182),
    [anon_sym_jne] = ACTIONS(182),
    [anon_sym_jno] = ACTIONS(182),
    [anon_sym_jns] = ACTIONS(182),
    [anon_sym_jo] = ACTIONS(182),
    [anon_sym_jp] = ACTIONS(182),
    [anon_sym_jrcxz] = ACTIONS(182),
    [anon_sym_js] = ACTIONS(182),
    [anon_sym_notrack] = ACTIONS(182),
    [anon_sym_PERCENTcr0] = ACTIONS(182),
    [anon_sym_PERCENTcr2] = ACTIONS(182),
    [anon_sym_PERCENTcr3] = ACTIONS(182),
    [anon_sym_PERCENTcr4] = ACTIONS(182),
    [anon_sym_PERCENTrip] = ACTIONS(182),
    [anon_sym_PERCENTeip] = ACTIONS(182),
    [anon_sym_PERCENTip] = ACTIONS(182),
    [anon_sym_PERCENTst] = ACTIONS(182),
    [anon_sym_PERCENT] = ACTIONS(182),
  },
  [8] = {
    [aux_sym_comment_token1] = ACTIONS(186),
    [aux_sym_comment_token2] = ACTIONS(186),
    [sym__line_break] = ACTIONS(188),
    [anon_sym_adc] = ACTIONS(186),
    [anon_sym_add] = ACTIONS(186),
    [anon_sym_addq] = ACTIONS(186),
    [anon_sym_addl] = ACTIONS(186),
    [anon_sym_addss] = ACTIONS(186),
    [anon_sym_addw] = ACTIONS(186),
    [anon_sym_addb] = ACTIONS(186),
    [anon_sym_cmp] = ACTIONS(186),
    [anon_sym_cmpb] = ACTIONS(186),
    [anon_sym_cmpw] = ACTIONS(186),
    [anon_sym_cmpl] = ACTIONS(186),
    [anon_sym_cmpq] = ACTIONS(186),
    [anon_sym_comiss] = ACTIONS(186),
    [anon_sym_comisd] = ACTIONS(186),
    [anon_sym_inc] = ACTIONS(186),
    [anon_sym_incl] = ACTIONS(186),
    [anon_sym_dec] = ACTIONS(186),
    [anon_sym_div] = ACTIONS(186),
    [anon_sym_divq] = ACTIONS(186),
    [anon_sym_divl] = ACTIONS(186),
    [anon_sym_divss] = ACTIONS(186),
    [anon_sym_divsd] = ACTIONS(186),
    [anon_sym_idiv] = ACTIONS(186),
    [anon_sym_idivl] = ACTIONS(186),
    [anon_sym_sub] = ACTIONS(186),
    [anon_sym_subq] = ACTIONS(186),
    [anon_sym_subl] = ACTIONS(186),
    [anon_sym_subss] = ACTIONS(186),
    [anon_sym_subw] = ACTIONS(186),
    [anon_sym_subb] = ACTIONS(186),
    [anon_sym_subsd] = ACTIONS(186),
    [anon_sym_subpd] = ACTIONS(186),
    [anon_sym_sbb] = ACTIONS(186),
    [anon_sym_mul] = ACTIONS(186),
    [anon_sym_mulq] = ACTIONS(186),
    [anon_sym_mull] = ACTIONS(186),
    [anon_sym_mulss] = ACTIONS(186),
    [anon_sym_mulw] = ACTIONS(186),
    [anon_sym_mulb] = ACTIONS(186),
    [anon_sym_mulsd] = ACTIONS(186),
    [anon_sym_mulx] = ACTIONS(186),
    [anon_sym_imul] = ACTIONS(186),
    [anon_sym_neg] = ACTIONS(186),
    [anon_sym_negl] = ACTIONS(186),
    [anon_sym_negq] = ACTIONS(186),
    [anon_sym_fmulp] = ACTIONS(186),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(186),
    [anon_sym_pclmullqlqdq] = ACTIONS(186),
    [anon_sym_pclmullqhqdq] = ACTIONS(186),
    [anon_sym_vpclmullqhqdq] = ACTIONS(186),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(186),
    [anon_sym_pclmulhqhqdq] = ACTIONS(186),
    [anon_sym_vpclmullqlqdq] = ACTIONS(186),
    [anon_sym_bsf] = ACTIONS(186),
    [anon_sym_bsr] = ACTIONS(186),
    [anon_sym_bts] = ACTIONS(186),
    [anon_sym_bt] = ACTIONS(186),
    [anon_sym_btr] = ACTIONS(186),
    [anon_sym_btl] = ACTIONS(186),
    [anon_sym_setne] = ACTIONS(186),
    [anon_sym_setb] = ACTIONS(186),
    [anon_sym_sete] = ACTIONS(186),
    [anon_sym_setbe] = ACTIONS(186),
    [anon_sym_seta] = ACTIONS(186),
    [anon_sym_setge] = ACTIONS(186),
    [anon_sym_setae] = ACTIONS(186),
    [anon_sym_setl] = ACTIONS(186),
    [anon_sym_setle] = ACTIONS(186),
    [anon_sym_setg] = ACTIONS(186),
    [anon_sym_seto] = ACTIONS(186),
    [anon_sym_setnp] = ACTIONS(186),
    [anon_sym_setp] = ACTIONS(186),
    [anon_sym_setns] = ACTIONS(186),
    [anon_sym_test] = ACTIONS(186),
    [anon_sym_testb] = ACTIONS(186),
    [anon_sym_testl] = ACTIONS(186),
    [anon_sym_knotw] = ACTIONS(186),
    [anon_sym_vpcmpltud] = ACTIONS(186),
    [anon_sym_gs] = ACTIONS(186),
    [anon_sym_re] = ACTIONS(186),
    [anon_sym_ss] = ACTIONS(186),
    [anon_sym_leaveq] = ACTIONS(186),
    [anon_sym_retq] = ACTIONS(186),
    [anon_sym_bswap] = ACTIONS(186),
    [anon_sym_cbtw] = ACTIONS(186),
    [anon_sym_cltd] = ACTIONS(186),
    [anon_sym_cltq] = ACTIONS(186),
    [anon_sym_cmovbe] = ACTIONS(186),
    [anon_sym_cmovl] = ACTIONS(186),
    [anon_sym_cmovae] = ACTIONS(186),
    [anon_sym_cmovo] = ACTIONS(186),
    [anon_sym_cmovne] = ACTIONS(186),
    [anon_sym_cmovns] = ACTIONS(186),
    [anon_sym_cmovg] = ACTIONS(186),
    [anon_sym_cmovp] = ACTIONS(186),
    [anon_sym_cmove] = ACTIONS(186),
    [anon_sym_cmovge] = ACTIONS(186),
    [anon_sym_cmovb] = ACTIONS(186),
    [anon_sym_cmova] = ACTIONS(186),
    [anon_sym_cmovle] = ACTIONS(186),
    [anon_sym_cmovs] = ACTIONS(186),
    [anon_sym_cwtl] = ACTIONS(186),
    [anon_sym_cwtd] = ACTIONS(186),
    [anon_sym_cqto] = ACTIONS(186),
    [anon_sym_cvttsd2si] = ACTIONS(186),
    [anon_sym_cvtss2sd] = ACTIONS(186),
    [anon_sym_cvttss2si] = ACTIONS(186),
    [anon_sym_cvtsi2sd] = ACTIONS(186),
    [anon_sym_cvtsi2ss] = ACTIONS(186),
    [anon_sym_cvtsi2sdq] = ACTIONS(186),
    [anon_sym_cvtsi2sdl] = ACTIONS(186),
    [anon_sym_cvtsd2ss] = ACTIONS(186),
    [anon_sym_cvtsi2ssl] = ACTIONS(186),
    [anon_sym_mov] = ACTIONS(186),
    [anon_sym_movw] = ACTIONS(186),
    [anon_sym_movl] = ACTIONS(186),
    [anon_sym_movq] = ACTIONS(186),
    [anon_sym_movb] = ACTIONS(186),
    [anon_sym_movabs] = ACTIONS(186),
    [anon_sym_movsbw] = ACTIONS(186),
    [anon_sym_movsbq] = ACTIONS(186),
    [anon_sym_movsbl] = ACTIONS(186),
    [anon_sym_movswl] = ACTIONS(186),
    [anon_sym_movswq] = ACTIONS(186),
    [anon_sym_movzbw] = ACTIONS(186),
    [anon_sym_movzbq] = ACTIONS(186),
    [anon_sym_movzbl] = ACTIONS(186),
    [anon_sym_movzwl] = ACTIONS(186),
    [anon_sym_movaps] = ACTIONS(186),
    [anon_sym_movhlps] = ACTIONS(186),
    [anon_sym_movss] = ACTIONS(186),
    [anon_sym_movups] = ACTIONS(186),
    [anon_sym_movsd] = ACTIONS(186),
    [anon_sym_movd] = ACTIONS(186),
    [anon_sym_movhps] = ACTIONS(186),
    [anon_sym_movdqa] = ACTIONS(186),
    [anon_sym_movbe] = ACTIONS(186),
    [anon_sym_movapd] = ACTIONS(186),
    [anon_sym_movdqu] = ACTIONS(186),
    [anon_sym_xchg] = ACTIONS(186),
    [anon_sym_fildl] = ACTIONS(186),
    [anon_sym_fldt] = ACTIONS(186),
    [anon_sym_fstpl] = ACTIONS(186),
    [anon_sym_insb] = ACTIONS(186),
    [anon_sym_insl] = ACTIONS(186),
    [anon_sym_outsb] = ACTIONS(186),
    [anon_sym_outsl] = ACTIONS(186),
    [anon_sym_or] = ACTIONS(186),
    [anon_sym_orq] = ACTIONS(186),
    [anon_sym_orl] = ACTIONS(186),
    [anon_sym_orb] = ACTIONS(186),
    [anon_sym_orw] = ACTIONS(186),
    [anon_sym_xor] = ACTIONS(186),
    [anon_sym_xorl] = ACTIONS(186),
    [anon_sym_xorw] = ACTIONS(186),
    [anon_sym_xorps] = ACTIONS(186),
    [anon_sym_xorpd] = ACTIONS(186),
    [anon_sym_vxorps] = ACTIONS(186),
    [anon_sym_vpxord] = ACTIONS(186),
    [anon_sym_vpxor] = ACTIONS(186),
    [anon_sym_and] = ACTIONS(186),
    [anon_sym_andq] = ACTIONS(186),
    [anon_sym_andl] = ACTIONS(186),
    [anon_sym_andw] = ACTIONS(186),
    [anon_sym_andb] = ACTIONS(186),
    [anon_sym_andn] = ACTIONS(186),
    [anon_sym_andpd] = ACTIONS(186),
    [anon_sym_pand] = ACTIONS(186),
    [anon_sym_pandn] = ACTIONS(186),
    [anon_sym_andps] = ACTIONS(186),
    [anon_sym_vpand] = ACTIONS(186),
    [anon_sym_not] = ACTIONS(186),
    [anon_sym_notl] = ACTIONS(186),
    [anon_sym_notw] = ACTIONS(186),
    [anon_sym_cpuid] = ACTIONS(186),
    [anon_sym_lea] = ACTIONS(186),
    [anon_sym_popcnt] = ACTIONS(186),
    [anon_sym_nop] = ACTIONS(186),
    [anon_sym_nopl] = ACTIONS(186),
    [anon_sym_nopw] = ACTIONS(186),
    [anon_sym_ud2] = ACTIONS(186),
    [anon_sym_data16] = ACTIONS(186),
    [anon_sym_sha1rnds4] = ACTIONS(186),
    [anon_sym_addr32] = ACTIONS(186),
    [anon_sym_sha1msg1] = ACTIONS(186),
    [anon_sym_sha1msg2] = ACTIONS(186),
    [anon_sym_sha1nexte] = ACTIONS(186),
    [anon_sym_endbr64] = ACTIONS(186),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(186),
    [anon_sym_packuswb] = ACTIONS(186),
    [anon_sym_punpckhbw] = ACTIONS(186),
    [anon_sym_punpckhdq] = ACTIONS(186),
    [anon_sym_punpckhwd] = ACTIONS(186),
    [anon_sym_punpcklbw] = ACTIONS(186),
    [anon_sym_punpckldq] = ACTIONS(186),
    [anon_sym_punpcklwd] = ACTIONS(186),
    [anon_sym_vpunpcklwd] = ACTIONS(186),
    [anon_sym_vpunpckldq] = ACTIONS(186),
    [anon_sym_punpcklqdq] = ACTIONS(186),
    [anon_sym_punpckhqdq] = ACTIONS(186),
    [anon_sym_vpunpckhqdq] = ACTIONS(186),
    [anon_sym_vpunpckhdq] = ACTIONS(186),
    [anon_sym_vpunpcklqdq] = ACTIONS(186),
    [anon_sym_vpunpckhwd] = ACTIONS(186),
    [anon_sym_rol] = ACTIONS(186),
    [anon_sym_ror] = ACTIONS(186),
    [anon_sym_sar] = ACTIONS(186),
    [anon_sym_sarl] = ACTIONS(186),
    [anon_sym_sarx] = ACTIONS(186),
    [anon_sym_shl] = ACTIONS(186),
    [anon_sym_shll] = ACTIONS(186),
    [anon_sym_shld] = ACTIONS(186),
    [anon_sym_shlx] = ACTIONS(186),
    [anon_sym_shlq] = ACTIONS(186),
    [anon_sym_shr] = ACTIONS(186),
    [anon_sym_shrq] = ACTIONS(186),
    [anon_sym_shrd] = ACTIONS(186),
    [anon_sym_shrl] = ACTIONS(186),
    [anon_sym_shrx] = ACTIONS(186),
    [anon_sym_vprord] = ACTIONS(186),
    [anon_sym_vprorq] = ACTIONS(186),
    [anon_sym_rorl] = ACTIONS(186),
    [anon_sym_roll] = ACTIONS(186),
    [anon_sym_push] = ACTIONS(186),
    [anon_sym_pushq] = ACTIONS(186),
    [anon_sym_pop] = ACTIONS(186),
    [anon_sym_movslq] = ACTIONS(186),
    [anon_sym_movsb] = ACTIONS(186),
    [anon_sym_rep] = ACTIONS(186),
    [anon_sym_repz] = ACTIONS(186),
    [anon_sym_repnz] = ACTIONS(186),
    [anon_sym_rex] = ACTIONS(186),
    [anon_sym_rex_DOTWB] = ACTIONS(186),
    [anon_sym_rex_DOTWRB] = ACTIONS(186),
    [anon_sym_rex_DOTRXB] = ACTIONS(186),
    [anon_sym_rex_DOTB] = ACTIONS(186),
    [anon_sym_rex_DOTWRXB] = ACTIONS(186),
    [anon_sym_rex_DOTXB] = ACTIONS(186),
    [anon_sym_rex_DOTW] = ACTIONS(186),
    [anon_sym_rex_DOTRB] = ACTIONS(186),
    [anon_sym_xgetbv] = ACTIONS(186),
    [anon_sym_fs] = ACTIONS(186),
    [anon_sym_kmovw] = ACTIONS(186),
    [anon_sym_adcx] = ACTIONS(186),
    [anon_sym_adox] = ACTIONS(186),
    [anon_sym_aesdec] = ACTIONS(186),
    [anon_sym_aesdeclast] = ACTIONS(186),
    [anon_sym_aesenc] = ACTIONS(186),
    [anon_sym_aesenclast] = ACTIONS(186),
    [anon_sym_vaesenc] = ACTIONS(186),
    [anon_sym_vaesenclast] = ACTIONS(186),
    [anon_sym_aeskeygenassist] = ACTIONS(186),
    [anon_sym_vblendps] = ACTIONS(186),
    [anon_sym_vblendvps] = ACTIONS(186),
    [anon_sym_vcvtusi2sd] = ACTIONS(186),
    [anon_sym_vdivsd] = ACTIONS(186),
    [anon_sym_vmovaps] = ACTIONS(186),
    [anon_sym_vmovapd] = ACTIONS(186),
    [anon_sym_vmovss] = ACTIONS(186),
    [anon_sym_vmovdqu] = ACTIONS(186),
    [anon_sym_vmovdqu64] = ACTIONS(186),
    [anon_sym_vmovdqu32] = ACTIONS(186),
    [anon_sym_vmovdqa] = ACTIONS(186),
    [anon_sym_vmovdqa32] = ACTIONS(186),
    [anon_sym_vmovdqa64] = ACTIONS(186),
    [anon_sym_vmovq] = ACTIONS(186),
    [anon_sym_vmovups] = ACTIONS(186),
    [anon_sym_vmovd] = ACTIONS(186),
    [anon_sym_vmovsd] = ACTIONS(186),
    [anon_sym_vmulsd] = ACTIONS(186),
    [anon_sym_vpackusdw] = ACTIONS(186),
    [anon_sym_vpaddd] = ACTIONS(186),
    [anon_sym_vpaddb] = ACTIONS(186),
    [anon_sym_vpaddq] = ACTIONS(186),
    [anon_sym_vpaddw] = ACTIONS(186),
    [anon_sym_vpalignr] = ACTIONS(186),
    [anon_sym_vpcmpgtd] = ACTIONS(186),
    [anon_sym_vpextrw] = ACTIONS(186),
    [anon_sym_vpinsrw] = ACTIONS(186),
    [anon_sym_vpinsrd] = ACTIONS(186),
    [anon_sym_vpinsrq] = ACTIONS(186),
    [anon_sym_vpinsrb] = ACTIONS(186),
    [anon_sym_vpmaddubsw] = ACTIONS(186),
    [anon_sym_vpmaddwd] = ACTIONS(186),
    [anon_sym_vpmullw] = ACTIONS(186),
    [anon_sym_vpmuludq] = ACTIONS(186),
    [anon_sym_vpor] = ACTIONS(186),
    [anon_sym_vpshufb] = ACTIONS(186),
    [anon_sym_vpshufd] = ACTIONS(186),
    [anon_sym_vpslldq] = ACTIONS(186),
    [anon_sym_vpslld] = ACTIONS(186),
    [anon_sym_vpsllq] = ACTIONS(186),
    [anon_sym_vpsllw] = ACTIONS(186),
    [anon_sym_vpsrldq] = ACTIONS(186),
    [anon_sym_vpsrld] = ACTIONS(186),
    [anon_sym_vpsrlq] = ACTIONS(186),
    [anon_sym_vpsrlw] = ACTIONS(186),
    [anon_sym_vpsubusw] = ACTIONS(186),
    [anon_sym_vpsubq] = ACTIONS(186),
    [anon_sym_vpsubd] = ACTIONS(186),
    [anon_sym_vpsubw] = ACTIONS(186),
    [anon_sym_vshufps] = ACTIONS(186),
    [anon_sym_vsubsd] = ACTIONS(186),
    [anon_sym_vucomisd] = ACTIONS(186),
    [anon_sym_vucomiss] = ACTIONS(186),
    [anon_sym_vunpckhpd] = ACTIONS(186),
    [anon_sym_vunpckhps] = ACTIONS(186),
    [anon_sym_vunpcklpd] = ACTIONS(186),
    [anon_sym_vunpcklps] = ACTIONS(186),
    [anon_sym_vbroadcastss] = ACTIONS(186),
    [anon_sym_vinsertf128] = ACTIONS(186),
    [anon_sym_vperm2f128] = ACTIONS(186),
    [anon_sym_vzeroall] = ACTIONS(186),
    [anon_sym_vzeroupper] = ACTIONS(186),
    [anon_sym_vshufi32x4] = ACTIONS(186),
    [anon_sym_vshufi64x2] = ACTIONS(186),
    [anon_sym_vpblendmd] = ACTIONS(186),
    [anon_sym_vextracti128] = ACTIONS(186),
    [anon_sym_vextracti32x4] = ACTIONS(186),
    [anon_sym_vinserti128] = ACTIONS(186),
    [anon_sym_vinserti32x4] = ACTIONS(186),
    [anon_sym_vinserti64x4] = ACTIONS(186),
    [anon_sym_vpblendd] = ACTIONS(186),
    [anon_sym_vpbroadcastq] = ACTIONS(186),
    [anon_sym_vpbroadcastd] = ACTIONS(186),
    [anon_sym_vbroadcasti128] = ACTIONS(186),
    [anon_sym_vbroadcasti32x4] = ACTIONS(186),
    [anon_sym_vperm2i128] = ACTIONS(186),
    [anon_sym_vpermd] = ACTIONS(186),
    [anon_sym_vpermq] = ACTIONS(186),
    [anon_sym_vpermt2d] = ACTIONS(186),
    [anon_sym_vpermi2d] = ACTIONS(186),
    [anon_sym_tzcnt] = ACTIONS(186),
    [anon_sym_rorx] = ACTIONS(186),
    [anon_sym_psubd] = ACTIONS(186),
    [anon_sym_pmaddwd] = ACTIONS(186),
    [anon_sym_pxor] = ACTIONS(186),
    [anon_sym_psrad] = ACTIONS(186),
    [anon_sym_pslld] = ACTIONS(186),
    [anon_sym_pcmpgtd] = ACTIONS(186),
    [anon_sym_pcmpeqd] = ACTIONS(186),
    [anon_sym_por] = ACTIONS(186),
    [anon_sym_paddw] = ACTIONS(186),
    [anon_sym_psubusw] = ACTIONS(186),
    [anon_sym_pcmpeqb] = ACTIONS(186),
    [anon_sym_psubusb] = ACTIONS(186),
    [anon_sym_psrld] = ACTIONS(186),
    [anon_sym_psrlw] = ACTIONS(186),
    [anon_sym_psllq] = ACTIONS(186),
    [anon_sym_paddd] = ACTIONS(186),
    [anon_sym_psrlq] = ACTIONS(186),
    [anon_sym_psubb] = ACTIONS(186),
    [anon_sym_maxss] = ACTIONS(186),
    [anon_sym_pmovmskb] = ACTIONS(186),
    [anon_sym_pinsrw] = ACTIONS(186),
    [anon_sym_minss] = ACTIONS(186),
    [anon_sym_prefetcht1] = ACTIONS(186),
    [anon_sym_prefetcht0] = ACTIONS(186),
    [anon_sym_pextrw] = ACTIONS(186),
    [anon_sym_ucomiss] = ACTIONS(186),
    [anon_sym_shufps] = ACTIONS(186),
    [anon_sym_addsd] = ACTIONS(186),
    [anon_sym_paddq] = ACTIONS(186),
    [anon_sym_psubq] = ACTIONS(186),
    [anon_sym_pshuflw] = ACTIONS(186),
    [anon_sym_pmuludq] = ACTIONS(186),
    [anon_sym_pshufd] = ACTIONS(186),
    [anon_sym_minsd] = ACTIONS(186),
    [anon_sym_pshufhw] = ACTIONS(186),
    [anon_sym_mfence] = ACTIONS(186),
    [anon_sym_maxsd] = ACTIONS(186),
    [anon_sym_ucomisd] = ACTIONS(186),
    [anon_sym_shufpd] = ACTIONS(186),
    [anon_sym_pslldq] = ACTIONS(186),
    [anon_sym_unpckhpd] = ACTIONS(186),
    [anon_sym_psrldq] = ACTIONS(186),
    [anon_sym_palignr] = ACTIONS(186),
    [anon_sym_pshufb] = ACTIONS(186),
    [anon_sym_pmaddubsw] = ACTIONS(186),
    [anon_sym_pinsrb] = ACTIONS(186),
    [anon_sym_pblendw] = ACTIONS(186),
    [anon_sym_pextrq] = ACTIONS(186),
    [anon_sym_blendvps] = ACTIONS(186),
    [anon_sym_pextrb] = ACTIONS(186),
    [anon_sym_pinsrd] = ACTIONS(186),
    [anon_sym_femms] = ACTIONS(186),
    [anon_sym_f] = ACTIONS(186),
    [aux_sym_operand_token1] = ACTIONS(186),
    [anon_sym_LT] = ACTIONS(186),
    [anon_sym_DOLLAR] = ACTIONS(186),
    [anon_sym_PERCENTss] = ACTIONS(186),
    [anon_sym_PERCENTcs] = ACTIONS(186),
    [anon_sym_PERCENTds] = ACTIONS(186),
    [anon_sym_PERCENTes] = ACTIONS(186),
    [anon_sym_PERCENTfs] = ACTIONS(186),
    [anon_sym_PERCENTgs] = ACTIONS(186),
    [anon_sym_PERCENTrax] = ACTIONS(186),
    [anon_sym_PERCENTrbx] = ACTIONS(186),
    [anon_sym_PERCENTrcx] = ACTIONS(186),
    [anon_sym_PERCENTrdx] = ACTIONS(186),
    [anon_sym_PERCENTrsi] = ACTIONS(186),
    [anon_sym_PERCENTrdi] = ACTIONS(186),
    [anon_sym_PERCENTrbp] = ACTIONS(186),
    [anon_sym_PERCENTrsp] = ACTIONS(186),
    [anon_sym_PERCENTr8] = ACTIONS(186),
    [anon_sym_PERCENTr9] = ACTIONS(186),
    [anon_sym_PERCENTr10] = ACTIONS(186),
    [anon_sym_PERCENTr11] = ACTIONS(186),
    [anon_sym_PERCENTr12] = ACTIONS(186),
    [anon_sym_PERCENTr13] = ACTIONS(186),
    [anon_sym_PERCENTr14] = ACTIONS(186),
    [anon_sym_PERCENTr15] = ACTIONS(186),
    [anon_sym_PERCENTeax] = ACTIONS(186),
    [anon_sym_PERCENTecx] = ACTIONS(186),
    [anon_sym_PERCENTedx] = ACTIONS(186),
    [anon_sym_PERCENTebx] = ACTIONS(186),
    [anon_sym_PERCENTesi] = ACTIONS(186),
    [anon_sym_PERCENTedi] = ACTIONS(186),
    [anon_sym_PERCENTebp] = ACTIONS(186),
    [anon_sym_PERCENTesp] = ACTIONS(186),
    [anon_sym_PERCENTr8d] = ACTIONS(186),
    [anon_sym_PERCENTr9d] = ACTIONS(186),
    [anon_sym_PERCENTr10d] = ACTIONS(186),
    [anon_sym_PERCENTr11d] = ACTIONS(186),
    [anon_sym_PERCENTr12d] = ACTIONS(186),
    [anon_sym_PERCENTr13d] = ACTIONS(186),
    [anon_sym_PERCENTr14d] = ACTIONS(186),
    [anon_sym_PERCENTr15d] = ACTIONS(186),
    [anon_sym_PERCENTax] = ACTIONS(186),
    [anon_sym_PERCENTcx] = ACTIONS(186),
    [anon_sym_PERCENTdx] = ACTIONS(186),
    [anon_sym_PERCENTbx] = ACTIONS(186),
    [anon_sym_PERCENTsi] = ACTIONS(186),
    [anon_sym_PERCENTdi] = ACTIONS(186),
    [anon_sym_PERCENTsp] = ACTIONS(186),
    [anon_sym_PERCENTbp] = ACTIONS(186),
    [anon_sym_PERCENTr8w] = ACTIONS(186),
    [anon_sym_PERCENTr9w] = ACTIONS(186),
    [anon_sym_PERCENTr10w] = ACTIONS(186),
    [anon_sym_PERCENTr11w] = ACTIONS(186),
    [anon_sym_PERCENTr12w] = ACTIONS(186),
    [anon_sym_PERCENTr13w] = ACTIONS(186),
    [anon_sym_PERCENTr14w] = ACTIONS(186),
    [anon_sym_PERCENTr15w] = ACTIONS(186),
    [anon_sym_PERCENTal] = ACTIONS(186),
    [anon_sym_PERCENTcl] = ACTIONS(186),
    [anon_sym_PERCENTdl] = ACTIONS(186),
    [anon_sym_PERCENTbl] = ACTIONS(186),
    [anon_sym_PERCENTsil] = ACTIONS(186),
    [anon_sym_PERCENTdil] = ACTIONS(186),
    [anon_sym_PERCENTspl] = ACTIONS(186),
    [anon_sym_PERCENTbpl] = ACTIONS(186),
    [anon_sym_PERCENTr8b] = ACTIONS(186),
    [anon_sym_PERCENTr9b] = ACTIONS(186),
    [anon_sym_PERCENTr10b] = ACTIONS(186),
    [anon_sym_PERCENTr11b] = ACTIONS(186),
    [anon_sym_PERCENTr12b] = ACTIONS(186),
    [anon_sym_PERCENTr13b] = ACTIONS(186),
    [anon_sym_PERCENTr14b] = ACTIONS(186),
    [anon_sym_PERCENTr15b] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_movsq] = ACTIONS(186),
    [anon_sym_cmpsb] = ACTIONS(186),
    [anon_sym_cmpxchg] = ACTIONS(186),
    [anon_sym_movsl] = ACTIONS(186),
    [anon_sym_callq] = ACTIONS(186),
    [anon_sym_ja] = ACTIONS(186),
    [anon_sym_jae] = ACTIONS(186),
    [anon_sym_jb] = ACTIONS(186),
    [anon_sym_jbe] = ACTIONS(186),
    [anon_sym_je] = ACTIONS(186),
    [anon_sym_jg] = ACTIONS(186),
    [anon_sym_jge] = ACTIONS(186),
    [anon_sym_jl] = ACTIONS(186),
    [anon_sym_jle] = ACTIONS(186),
    [anon_sym_jmp] = ACTIONS(186),
    [anon_sym_jmpq] = ACTIONS(186),
    [anon_sym_jne] = ACTIONS(186),
    [anon_sym_jno] = ACTIONS(186),
    [anon_sym_jns] = ACTIONS(186),
    [anon_sym_jo] = ACTIONS(186),
    [anon_sym_jp] = ACTIONS(186),
    [anon_sym_jrcxz] = ACTIONS(186),
    [anon_sym_js] = ACTIONS(186),
    [anon_sym_notrack] = ACTIONS(186),
    [anon_sym_PERCENTcr0] = ACTIONS(186),
    [anon_sym_PERCENTcr2] = ACTIONS(186),
    [anon_sym_PERCENTcr3] = ACTIONS(186),
    [anon_sym_PERCENTcr4] = ACTIONS(186),
    [anon_sym_PERCENTrip] = ACTIONS(186),
    [anon_sym_PERCENTeip] = ACTIONS(186),
    [anon_sym_PERCENTip] = ACTIONS(186),
    [anon_sym_PERCENTst] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(186),
  },
  [9] = {
    [aux_sym_comment_token1] = ACTIONS(190),
    [aux_sym_comment_token2] = ACTIONS(190),
    [sym__line_break] = ACTIONS(192),
    [anon_sym_adc] = ACTIONS(190),
    [anon_sym_add] = ACTIONS(190),
    [anon_sym_addq] = ACTIONS(190),
    [anon_sym_addl] = ACTIONS(190),
    [anon_sym_addss] = ACTIONS(190),
    [anon_sym_addw] = ACTIONS(190),
    [anon_sym_addb] = ACTIONS(190),
    [anon_sym_cmp] = ACTIONS(190),
    [anon_sym_cmpb] = ACTIONS(190),
    [anon_sym_cmpw] = ACTIONS(190),
    [anon_sym_cmpl] = ACTIONS(190),
    [anon_sym_cmpq] = ACTIONS(190),
    [anon_sym_comiss] = ACTIONS(190),
    [anon_sym_comisd] = ACTIONS(190),
    [anon_sym_inc] = ACTIONS(190),
    [anon_sym_incl] = ACTIONS(190),
    [anon_sym_dec] = ACTIONS(190),
    [anon_sym_div] = ACTIONS(190),
    [anon_sym_divq] = ACTIONS(190),
    [anon_sym_divl] = ACTIONS(190),
    [anon_sym_divss] = ACTIONS(190),
    [anon_sym_divsd] = ACTIONS(190),
    [anon_sym_idiv] = ACTIONS(190),
    [anon_sym_idivl] = ACTIONS(190),
    [anon_sym_sub] = ACTIONS(190),
    [anon_sym_subq] = ACTIONS(190),
    [anon_sym_subl] = ACTIONS(190),
    [anon_sym_subss] = ACTIONS(190),
    [anon_sym_subw] = ACTIONS(190),
    [anon_sym_subb] = ACTIONS(190),
    [anon_sym_subsd] = ACTIONS(190),
    [anon_sym_subpd] = ACTIONS(190),
    [anon_sym_sbb] = ACTIONS(190),
    [anon_sym_mul] = ACTIONS(190),
    [anon_sym_mulq] = ACTIONS(190),
    [anon_sym_mull] = ACTIONS(190),
    [anon_sym_mulss] = ACTIONS(190),
    [anon_sym_mulw] = ACTIONS(190),
    [anon_sym_mulb] = ACTIONS(190),
    [anon_sym_mulsd] = ACTIONS(190),
    [anon_sym_mulx] = ACTIONS(190),
    [anon_sym_imul] = ACTIONS(190),
    [anon_sym_neg] = ACTIONS(190),
    [anon_sym_negl] = ACTIONS(190),
    [anon_sym_negq] = ACTIONS(190),
    [anon_sym_fmulp] = ACTIONS(190),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(190),
    [anon_sym_pclmullqlqdq] = ACTIONS(190),
    [anon_sym_pclmullqhqdq] = ACTIONS(190),
    [anon_sym_vpclmullqhqdq] = ACTIONS(190),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(190),
    [anon_sym_pclmulhqhqdq] = ACTIONS(190),
    [anon_sym_vpclmullqlqdq] = ACTIONS(190),
    [anon_sym_bsf] = ACTIONS(190),
    [anon_sym_bsr] = ACTIONS(190),
    [anon_sym_bts] = ACTIONS(190),
    [anon_sym_bt] = ACTIONS(190),
    [anon_sym_btr] = ACTIONS(190),
    [anon_sym_btl] = ACTIONS(190),
    [anon_sym_setne] = ACTIONS(190),
    [anon_sym_setb] = ACTIONS(190),
    [anon_sym_sete] = ACTIONS(190),
    [anon_sym_setbe] = ACTIONS(190),
    [anon_sym_seta] = ACTIONS(190),
    [anon_sym_setge] = ACTIONS(190),
    [anon_sym_setae] = ACTIONS(190),
    [anon_sym_setl] = ACTIONS(190),
    [anon_sym_setle] = ACTIONS(190),
    [anon_sym_setg] = ACTIONS(190),
    [anon_sym_seto] = ACTIONS(190),
    [anon_sym_setnp] = ACTIONS(190),
    [anon_sym_setp] = ACTIONS(190),
    [anon_sym_setns] = ACTIONS(190),
    [anon_sym_test] = ACTIONS(190),
    [anon_sym_testb] = ACTIONS(190),
    [anon_sym_testl] = ACTIONS(190),
    [anon_sym_knotw] = ACTIONS(190),
    [anon_sym_vpcmpltud] = ACTIONS(190),
    [anon_sym_gs] = ACTIONS(190),
    [anon_sym_re] = ACTIONS(190),
    [anon_sym_ss] = ACTIONS(190),
    [anon_sym_leaveq] = ACTIONS(190),
    [anon_sym_retq] = ACTIONS(190),
    [anon_sym_bswap] = ACTIONS(190),
    [anon_sym_cbtw] = ACTIONS(190),
    [anon_sym_cltd] = ACTIONS(190),
    [anon_sym_cltq] = ACTIONS(190),
    [anon_sym_cmovbe] = ACTIONS(190),
    [anon_sym_cmovl] = ACTIONS(190),
    [anon_sym_cmovae] = ACTIONS(190),
    [anon_sym_cmovo] = ACTIONS(190),
    [anon_sym_cmovne] = ACTIONS(190),
    [anon_sym_cmovns] = ACTIONS(190),
    [anon_sym_cmovg] = ACTIONS(190),
    [anon_sym_cmovp] = ACTIONS(190),
    [anon_sym_cmove] = ACTIONS(190),
    [anon_sym_cmovge] = ACTIONS(190),
    [anon_sym_cmovb] = ACTIONS(190),
    [anon_sym_cmova] = ACTIONS(190),
    [anon_sym_cmovle] = ACTIONS(190),
    [anon_sym_cmovs] = ACTIONS(190),
    [anon_sym_cwtl] = ACTIONS(190),
    [anon_sym_cwtd] = ACTIONS(190),
    [anon_sym_cqto] = ACTIONS(190),
    [anon_sym_cvttsd2si] = ACTIONS(190),
    [anon_sym_cvtss2sd] = ACTIONS(190),
    [anon_sym_cvttss2si] = ACTIONS(190),
    [anon_sym_cvtsi2sd] = ACTIONS(190),
    [anon_sym_cvtsi2ss] = ACTIONS(190),
    [anon_sym_cvtsi2sdq] = ACTIONS(190),
    [anon_sym_cvtsi2sdl] = ACTIONS(190),
    [anon_sym_cvtsd2ss] = ACTIONS(190),
    [anon_sym_cvtsi2ssl] = ACTIONS(190),
    [anon_sym_mov] = ACTIONS(190),
    [anon_sym_movw] = ACTIONS(190),
    [anon_sym_movl] = ACTIONS(190),
    [anon_sym_movq] = ACTIONS(190),
    [anon_sym_movb] = ACTIONS(190),
    [anon_sym_movabs] = ACTIONS(190),
    [anon_sym_movsbw] = ACTIONS(190),
    [anon_sym_movsbq] = ACTIONS(190),
    [anon_sym_movsbl] = ACTIONS(190),
    [anon_sym_movswl] = ACTIONS(190),
    [anon_sym_movswq] = ACTIONS(190),
    [anon_sym_movzbw] = ACTIONS(190),
    [anon_sym_movzbq] = ACTIONS(190),
    [anon_sym_movzbl] = ACTIONS(190),
    [anon_sym_movzwl] = ACTIONS(190),
    [anon_sym_movaps] = ACTIONS(190),
    [anon_sym_movhlps] = ACTIONS(190),
    [anon_sym_movss] = ACTIONS(190),
    [anon_sym_movups] = ACTIONS(190),
    [anon_sym_movsd] = ACTIONS(190),
    [anon_sym_movd] = ACTIONS(190),
    [anon_sym_movhps] = ACTIONS(190),
    [anon_sym_movdqa] = ACTIONS(190),
    [anon_sym_movbe] = ACTIONS(190),
    [anon_sym_movapd] = ACTIONS(190),
    [anon_sym_movdqu] = ACTIONS(190),
    [anon_sym_xchg] = ACTIONS(190),
    [anon_sym_fildl] = ACTIONS(190),
    [anon_sym_fldt] = ACTIONS(190),
    [anon_sym_fstpl] = ACTIONS(190),
    [anon_sym_insb] = ACTIONS(190),
    [anon_sym_insl] = ACTIONS(190),
    [anon_sym_outsb] = ACTIONS(190),
    [anon_sym_outsl] = ACTIONS(190),
    [anon_sym_or] = ACTIONS(190),
    [anon_sym_orq] = ACTIONS(190),
    [anon_sym_orl] = ACTIONS(190),
    [anon_sym_orb] = ACTIONS(190),
    [anon_sym_orw] = ACTIONS(190),
    [anon_sym_xor] = ACTIONS(190),
    [anon_sym_xorl] = ACTIONS(190),
    [anon_sym_xorw] = ACTIONS(190),
    [anon_sym_xorps] = ACTIONS(190),
    [anon_sym_xorpd] = ACTIONS(190),
    [anon_sym_vxorps] = ACTIONS(190),
    [anon_sym_vpxord] = ACTIONS(190),
    [anon_sym_vpxor] = ACTIONS(190),
    [anon_sym_and] = ACTIONS(190),
    [anon_sym_andq] = ACTIONS(190),
    [anon_sym_andl] = ACTIONS(190),
    [anon_sym_andw] = ACTIONS(190),
    [anon_sym_andb] = ACTIONS(190),
    [anon_sym_andn] = ACTIONS(190),
    [anon_sym_andpd] = ACTIONS(190),
    [anon_sym_pand] = ACTIONS(190),
    [anon_sym_pandn] = ACTIONS(190),
    [anon_sym_andps] = ACTIONS(190),
    [anon_sym_vpand] = ACTIONS(190),
    [anon_sym_not] = ACTIONS(190),
    [anon_sym_notl] = ACTIONS(190),
    [anon_sym_notw] = ACTIONS(190),
    [anon_sym_cpuid] = ACTIONS(190),
    [anon_sym_lea] = ACTIONS(190),
    [anon_sym_popcnt] = ACTIONS(190),
    [anon_sym_nop] = ACTIONS(190),
    [anon_sym_nopl] = ACTIONS(190),
    [anon_sym_nopw] = ACTIONS(190),
    [anon_sym_ud2] = ACTIONS(190),
    [anon_sym_data16] = ACTIONS(190),
    [anon_sym_sha1rnds4] = ACTIONS(190),
    [anon_sym_addr32] = ACTIONS(190),
    [anon_sym_sha1msg1] = ACTIONS(190),
    [anon_sym_sha1msg2] = ACTIONS(190),
    [anon_sym_sha1nexte] = ACTIONS(190),
    [anon_sym_endbr64] = ACTIONS(190),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(190),
    [anon_sym_packuswb] = ACTIONS(190),
    [anon_sym_punpckhbw] = ACTIONS(190),
    [anon_sym_punpckhdq] = ACTIONS(190),
    [anon_sym_punpckhwd] = ACTIONS(190),
    [anon_sym_punpcklbw] = ACTIONS(190),
    [anon_sym_punpckldq] = ACTIONS(190),
    [anon_sym_punpcklwd] = ACTIONS(190),
    [anon_sym_vpunpcklwd] = ACTIONS(190),
    [anon_sym_vpunpckldq] = ACTIONS(190),
    [anon_sym_punpcklqdq] = ACTIONS(190),
    [anon_sym_punpckhqdq] = ACTIONS(190),
    [anon_sym_vpunpckhqdq] = ACTIONS(190),
    [anon_sym_vpunpckhdq] = ACTIONS(190),
    [anon_sym_vpunpcklqdq] = ACTIONS(190),
    [anon_sym_vpunpckhwd] = ACTIONS(190),
    [anon_sym_rol] = ACTIONS(190),
    [anon_sym_ror] = ACTIONS(190),
    [anon_sym_sar] = ACTIONS(190),
    [anon_sym_sarl] = ACTIONS(190),
    [anon_sym_sarx] = ACTIONS(190),
    [anon_sym_shl] = ACTIONS(190),
    [anon_sym_shll] = ACTIONS(190),
    [anon_sym_shld] = ACTIONS(190),
    [anon_sym_shlx] = ACTIONS(190),
    [anon_sym_shlq] = ACTIONS(190),
    [anon_sym_shr] = ACTIONS(190),
    [anon_sym_shrq] = ACTIONS(190),
    [anon_sym_shrd] = ACTIONS(190),
    [anon_sym_shrl] = ACTIONS(190),
    [anon_sym_shrx] = ACTIONS(190),
    [anon_sym_vprord] = ACTIONS(190),
    [anon_sym_vprorq] = ACTIONS(190),
    [anon_sym_rorl] = ACTIONS(190),
    [anon_sym_roll] = ACTIONS(190),
    [anon_sym_push] = ACTIONS(190),
    [anon_sym_pushq] = ACTIONS(190),
    [anon_sym_pop] = ACTIONS(190),
    [anon_sym_movslq] = ACTIONS(190),
    [anon_sym_movsb] = ACTIONS(190),
    [anon_sym_rep] = ACTIONS(190),
    [anon_sym_repz] = ACTIONS(190),
    [anon_sym_repnz] = ACTIONS(190),
    [anon_sym_rex] = ACTIONS(190),
    [anon_sym_rex_DOTWB] = ACTIONS(190),
    [anon_sym_rex_DOTWRB] = ACTIONS(190),
    [anon_sym_rex_DOTRXB] = ACTIONS(190),
    [anon_sym_rex_DOTB] = ACTIONS(190),
    [anon_sym_rex_DOTWRXB] = ACTIONS(190),
    [anon_sym_rex_DOTXB] = ACTIONS(190),
    [anon_sym_rex_DOTW] = ACTIONS(190),
    [anon_sym_rex_DOTRB] = ACTIONS(190),
    [anon_sym_xgetbv] = ACTIONS(190),
    [anon_sym_fs] = ACTIONS(190),
    [anon_sym_kmovw] = ACTIONS(190),
    [anon_sym_adcx] = ACTIONS(190),
    [anon_sym_adox] = ACTIONS(190),
    [anon_sym_aesdec] = ACTIONS(190),
    [anon_sym_aesdeclast] = ACTIONS(190),
    [anon_sym_aesenc] = ACTIONS(190),
    [anon_sym_aesenclast] = ACTIONS(190),
    [anon_sym_vaesenc] = ACTIONS(190),
    [anon_sym_vaesenclast] = ACTIONS(190),
    [anon_sym_aeskeygenassist] = ACTIONS(190),
    [anon_sym_vblendps] = ACTIONS(190),
    [anon_sym_vblendvps] = ACTIONS(190),
    [anon_sym_vcvtusi2sd] = ACTIONS(190),
    [anon_sym_vdivsd] = ACTIONS(190),
    [anon_sym_vmovaps] = ACTIONS(190),
    [anon_sym_vmovapd] = ACTIONS(190),
    [anon_sym_vmovss] = ACTIONS(190),
    [anon_sym_vmovdqu] = ACTIONS(190),
    [anon_sym_vmovdqu64] = ACTIONS(190),
    [anon_sym_vmovdqu32] = ACTIONS(190),
    [anon_sym_vmovdqa] = ACTIONS(190),
    [anon_sym_vmovdqa32] = ACTIONS(190),
    [anon_sym_vmovdqa64] = ACTIONS(190),
    [anon_sym_vmovq] = ACTIONS(190),
    [anon_sym_vmovups] = ACTIONS(190),
    [anon_sym_vmovd] = ACTIONS(190),
    [anon_sym_vmovsd] = ACTIONS(190),
    [anon_sym_vmulsd] = ACTIONS(190),
    [anon_sym_vpackusdw] = ACTIONS(190),
    [anon_sym_vpaddd] = ACTIONS(190),
    [anon_sym_vpaddb] = ACTIONS(190),
    [anon_sym_vpaddq] = ACTIONS(190),
    [anon_sym_vpaddw] = ACTIONS(190),
    [anon_sym_vpalignr] = ACTIONS(190),
    [anon_sym_vpcmpgtd] = ACTIONS(190),
    [anon_sym_vpextrw] = ACTIONS(190),
    [anon_sym_vpinsrw] = ACTIONS(190),
    [anon_sym_vpinsrd] = ACTIONS(190),
    [anon_sym_vpinsrq] = ACTIONS(190),
    [anon_sym_vpinsrb] = ACTIONS(190),
    [anon_sym_vpmaddubsw] = ACTIONS(190),
    [anon_sym_vpmaddwd] = ACTIONS(190),
    [anon_sym_vpmullw] = ACTIONS(190),
    [anon_sym_vpmuludq] = ACTIONS(190),
    [anon_sym_vpor] = ACTIONS(190),
    [anon_sym_vpshufb] = ACTIONS(190),
    [anon_sym_vpshufd] = ACTIONS(190),
    [anon_sym_vpslldq] = ACTIONS(190),
    [anon_sym_vpslld] = ACTIONS(190),
    [anon_sym_vpsllq] = ACTIONS(190),
    [anon_sym_vpsllw] = ACTIONS(190),
    [anon_sym_vpsrldq] = ACTIONS(190),
    [anon_sym_vpsrld] = ACTIONS(190),
    [anon_sym_vpsrlq] = ACTIONS(190),
    [anon_sym_vpsrlw] = ACTIONS(190),
    [anon_sym_vpsubusw] = ACTIONS(190),
    [anon_sym_vpsubq] = ACTIONS(190),
    [anon_sym_vpsubd] = ACTIONS(190),
    [anon_sym_vpsubw] = ACTIONS(190),
    [anon_sym_vshufps] = ACTIONS(190),
    [anon_sym_vsubsd] = ACTIONS(190),
    [anon_sym_vucomisd] = ACTIONS(190),
    [anon_sym_vucomiss] = ACTIONS(190),
    [anon_sym_vunpckhpd] = ACTIONS(190),
    [anon_sym_vunpckhps] = ACTIONS(190),
    [anon_sym_vunpcklpd] = ACTIONS(190),
    [anon_sym_vunpcklps] = ACTIONS(190),
    [anon_sym_vbroadcastss] = ACTIONS(190),
    [anon_sym_vinsertf128] = ACTIONS(190),
    [anon_sym_vperm2f128] = ACTIONS(190),
    [anon_sym_vzeroall] = ACTIONS(190),
    [anon_sym_vzeroupper] = ACTIONS(190),
    [anon_sym_vshufi32x4] = ACTIONS(190),
    [anon_sym_vshufi64x2] = ACTIONS(190),
    [anon_sym_vpblendmd] = ACTIONS(190),
    [anon_sym_vextracti128] = ACTIONS(190),
    [anon_sym_vextracti32x4] = ACTIONS(190),
    [anon_sym_vinserti128] = ACTIONS(190),
    [anon_sym_vinserti32x4] = ACTIONS(190),
    [anon_sym_vinserti64x4] = ACTIONS(190),
    [anon_sym_vpblendd] = ACTIONS(190),
    [anon_sym_vpbroadcastq] = ACTIONS(190),
    [anon_sym_vpbroadcastd] = ACTIONS(190),
    [anon_sym_vbroadcasti128] = ACTIONS(190),
    [anon_sym_vbroadcasti32x4] = ACTIONS(190),
    [anon_sym_vperm2i128] = ACTIONS(190),
    [anon_sym_vpermd] = ACTIONS(190),
    [anon_sym_vpermq] = ACTIONS(190),
    [anon_sym_vpermt2d] = ACTIONS(190),
    [anon_sym_vpermi2d] = ACTIONS(190),
    [anon_sym_tzcnt] = ACTIONS(190),
    [anon_sym_rorx] = ACTIONS(190),
    [anon_sym_psubd] = ACTIONS(190),
    [anon_sym_pmaddwd] = ACTIONS(190),
    [anon_sym_pxor] = ACTIONS(190),
    [anon_sym_psrad] = ACTIONS(190),
    [anon_sym_pslld] = ACTIONS(190),
    [anon_sym_pcmpgtd] = ACTIONS(190),
    [anon_sym_pcmpeqd] = ACTIONS(190),
    [anon_sym_por] = ACTIONS(190),
    [anon_sym_paddw] = ACTIONS(190),
    [anon_sym_psubusw] = ACTIONS(190),
    [anon_sym_pcmpeqb] = ACTIONS(190),
    [anon_sym_psubusb] = ACTIONS(190),
    [anon_sym_psrld] = ACTIONS(190),
    [anon_sym_psrlw] = ACTIONS(190),
    [anon_sym_psllq] = ACTIONS(190),
    [anon_sym_paddd] = ACTIONS(190),
    [anon_sym_psrlq] = ACTIONS(190),
    [anon_sym_psubb] = ACTIONS(190),
    [anon_sym_maxss] = ACTIONS(190),
    [anon_sym_pmovmskb] = ACTIONS(190),
    [anon_sym_pinsrw] = ACTIONS(190),
    [anon_sym_minss] = ACTIONS(190),
    [anon_sym_prefetcht1] = ACTIONS(190),
    [anon_sym_prefetcht0] = ACTIONS(190),
    [anon_sym_pextrw] = ACTIONS(190),
    [anon_sym_ucomiss] = ACTIONS(190),
    [anon_sym_shufps] = ACTIONS(190),
    [anon_sym_addsd] = ACTIONS(190),
    [anon_sym_paddq] = ACTIONS(190),
    [anon_sym_psubq] = ACTIONS(190),
    [anon_sym_pshuflw] = ACTIONS(190),
    [anon_sym_pmuludq] = ACTIONS(190),
    [anon_sym_pshufd] = ACTIONS(190),
    [anon_sym_minsd] = ACTIONS(190),
    [anon_sym_pshufhw] = ACTIONS(190),
    [anon_sym_mfence] = ACTIONS(190),
    [anon_sym_maxsd] = ACTIONS(190),
    [anon_sym_ucomisd] = ACTIONS(190),
    [anon_sym_shufpd] = ACTIONS(190),
    [anon_sym_pslldq] = ACTIONS(190),
    [anon_sym_unpckhpd] = ACTIONS(190),
    [anon_sym_psrldq] = ACTIONS(190),
    [anon_sym_palignr] = ACTIONS(190),
    [anon_sym_pshufb] = ACTIONS(190),
    [anon_sym_pmaddubsw] = ACTIONS(190),
    [anon_sym_pinsrb] = ACTIONS(190),
    [anon_sym_pblendw] = ACTIONS(190),
    [anon_sym_pextrq] = ACTIONS(190),
    [anon_sym_blendvps] = ACTIONS(190),
    [anon_sym_pextrb] = ACTIONS(190),
    [anon_sym_pinsrd] = ACTIONS(190),
    [anon_sym_femms] = ACTIONS(190),
    [anon_sym_f] = ACTIONS(190),
    [aux_sym_operand_token1] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(190),
    [anon_sym_DOLLAR] = ACTIONS(190),
    [anon_sym_PERCENTss] = ACTIONS(190),
    [anon_sym_PERCENTcs] = ACTIONS(190),
    [anon_sym_PERCENTds] = ACTIONS(190),
    [anon_sym_PERCENTes] = ACTIONS(190),
    [anon_sym_PERCENTfs] = ACTIONS(190),
    [anon_sym_PERCENTgs] = ACTIONS(190),
    [anon_sym_PERCENTrax] = ACTIONS(190),
    [anon_sym_PERCENTrbx] = ACTIONS(190),
    [anon_sym_PERCENTrcx] = ACTIONS(190),
    [anon_sym_PERCENTrdx] = ACTIONS(190),
    [anon_sym_PERCENTrsi] = ACTIONS(190),
    [anon_sym_PERCENTrdi] = ACTIONS(190),
    [anon_sym_PERCENTrbp] = ACTIONS(190),
    [anon_sym_PERCENTrsp] = ACTIONS(190),
    [anon_sym_PERCENTr8] = ACTIONS(190),
    [anon_sym_PERCENTr9] = ACTIONS(190),
    [anon_sym_PERCENTr10] = ACTIONS(190),
    [anon_sym_PERCENTr11] = ACTIONS(190),
    [anon_sym_PERCENTr12] = ACTIONS(190),
    [anon_sym_PERCENTr13] = ACTIONS(190),
    [anon_sym_PERCENTr14] = ACTIONS(190),
    [anon_sym_PERCENTr15] = ACTIONS(190),
    [anon_sym_PERCENTeax] = ACTIONS(190),
    [anon_sym_PERCENTecx] = ACTIONS(190),
    [anon_sym_PERCENTedx] = ACTIONS(190),
    [anon_sym_PERCENTebx] = ACTIONS(190),
    [anon_sym_PERCENTesi] = ACTIONS(190),
    [anon_sym_PERCENTedi] = ACTIONS(190),
    [anon_sym_PERCENTebp] = ACTIONS(190),
    [anon_sym_PERCENTesp] = ACTIONS(190),
    [anon_sym_PERCENTr8d] = ACTIONS(190),
    [anon_sym_PERCENTr9d] = ACTIONS(190),
    [anon_sym_PERCENTr10d] = ACTIONS(190),
    [anon_sym_PERCENTr11d] = ACTIONS(190),
    [anon_sym_PERCENTr12d] = ACTIONS(190),
    [anon_sym_PERCENTr13d] = ACTIONS(190),
    [anon_sym_PERCENTr14d] = ACTIONS(190),
    [anon_sym_PERCENTr15d] = ACTIONS(190),
    [anon_sym_PERCENTax] = ACTIONS(190),
    [anon_sym_PERCENTcx] = ACTIONS(190),
    [anon_sym_PERCENTdx] = ACTIONS(190),
    [anon_sym_PERCENTbx] = ACTIONS(190),
    [anon_sym_PERCENTsi] = ACTIONS(190),
    [anon_sym_PERCENTdi] = ACTIONS(190),
    [anon_sym_PERCENTsp] = ACTIONS(190),
    [anon_sym_PERCENTbp] = ACTIONS(190),
    [anon_sym_PERCENTr8w] = ACTIONS(190),
    [anon_sym_PERCENTr9w] = ACTIONS(190),
    [anon_sym_PERCENTr10w] = ACTIONS(190),
    [anon_sym_PERCENTr11w] = ACTIONS(190),
    [anon_sym_PERCENTr12w] = ACTIONS(190),
    [anon_sym_PERCENTr13w] = ACTIONS(190),
    [anon_sym_PERCENTr14w] = ACTIONS(190),
    [anon_sym_PERCENTr15w] = ACTIONS(190),
    [anon_sym_PERCENTal] = ACTIONS(190),
    [anon_sym_PERCENTcl] = ACTIONS(190),
    [anon_sym_PERCENTdl] = ACTIONS(190),
    [anon_sym_PERCENTbl] = ACTIONS(190),
    [anon_sym_PERCENTsil] = ACTIONS(190),
    [anon_sym_PERCENTdil] = ACTIONS(190),
    [anon_sym_PERCENTspl] = ACTIONS(190),
    [anon_sym_PERCENTbpl] = ACTIONS(190),
    [anon_sym_PERCENTr8b] = ACTIONS(190),
    [anon_sym_PERCENTr9b] = ACTIONS(190),
    [anon_sym_PERCENTr10b] = ACTIONS(190),
    [anon_sym_PERCENTr11b] = ACTIONS(190),
    [anon_sym_PERCENTr12b] = ACTIONS(190),
    [anon_sym_PERCENTr13b] = ACTIONS(190),
    [anon_sym_PERCENTr14b] = ACTIONS(190),
    [anon_sym_PERCENTr15b] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_movsq] = ACTIONS(190),
    [anon_sym_cmpsb] = ACTIONS(190),
    [anon_sym_cmpxchg] = ACTIONS(190),
    [anon_sym_movsl] = ACTIONS(190),
    [anon_sym_callq] = ACTIONS(190),
    [anon_sym_ja] = ACTIONS(190),
    [anon_sym_jae] = ACTIONS(190),
    [anon_sym_jb] = ACTIONS(190),
    [anon_sym_jbe] = ACTIONS(190),
    [anon_sym_je] = ACTIONS(190),
    [anon_sym_jg] = ACTIONS(190),
    [anon_sym_jge] = ACTIONS(190),
    [anon_sym_jl] = ACTIONS(190),
    [anon_sym_jle] = ACTIONS(190),
    [anon_sym_jmp] = ACTIONS(190),
    [anon_sym_jmpq] = ACTIONS(190),
    [anon_sym_jne] = ACTIONS(190),
    [anon_sym_jno] = ACTIONS(190),
    [anon_sym_jns] = ACTIONS(190),
    [anon_sym_jo] = ACTIONS(190),
    [anon_sym_jp] = ACTIONS(190),
    [anon_sym_jrcxz] = ACTIONS(190),
    [anon_sym_js] = ACTIONS(190),
    [anon_sym_notrack] = ACTIONS(190),
    [anon_sym_PERCENTcr0] = ACTIONS(190),
    [anon_sym_PERCENTcr2] = ACTIONS(190),
    [anon_sym_PERCENTcr3] = ACTIONS(190),
    [anon_sym_PERCENTcr4] = ACTIONS(190),
    [anon_sym_PERCENTrip] = ACTIONS(190),
    [anon_sym_PERCENTeip] = ACTIONS(190),
    [anon_sym_PERCENTip] = ACTIONS(190),
    [anon_sym_PERCENTst] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(190),
  },
  [10] = {
    [aux_sym_comment_token1] = ACTIONS(194),
    [aux_sym_comment_token2] = ACTIONS(194),
    [sym__line_break] = ACTIONS(196),
    [anon_sym_adc] = ACTIONS(194),
    [anon_sym_add] = ACTIONS(194),
    [anon_sym_addq] = ACTIONS(194),
    [anon_sym_addl] = ACTIONS(194),
    [anon_sym_addss] = ACTIONS(194),
    [anon_sym_addw] = ACTIONS(194),
    [anon_sym_addb] = ACTIONS(194),
    [anon_sym_cmp] = ACTIONS(194),
    [anon_sym_cmpb] = ACTIONS(194),
    [anon_sym_cmpw] = ACTIONS(194),
    [anon_sym_cmpl] = ACTIONS(194),
    [anon_sym_cmpq] = ACTIONS(194),
    [anon_sym_comiss] = ACTIONS(194),
    [anon_sym_comisd] = ACTIONS(194),
    [anon_sym_inc] = ACTIONS(194),
    [anon_sym_incl] = ACTIONS(194),
    [anon_sym_dec] = ACTIONS(194),
    [anon_sym_div] = ACTIONS(194),
    [anon_sym_divq] = ACTIONS(194),
    [anon_sym_divl] = ACTIONS(194),
    [anon_sym_divss] = ACTIONS(194),
    [anon_sym_divsd] = ACTIONS(194),
    [anon_sym_idiv] = ACTIONS(194),
    [anon_sym_idivl] = ACTIONS(194),
    [anon_sym_sub] = ACTIONS(194),
    [anon_sym_subq] = ACTIONS(194),
    [anon_sym_subl] = ACTIONS(194),
    [anon_sym_subss] = ACTIONS(194),
    [anon_sym_subw] = ACTIONS(194),
    [anon_sym_subb] = ACTIONS(194),
    [anon_sym_subsd] = ACTIONS(194),
    [anon_sym_subpd] = ACTIONS(194),
    [anon_sym_sbb] = ACTIONS(194),
    [anon_sym_mul] = ACTIONS(194),
    [anon_sym_mulq] = ACTIONS(194),
    [anon_sym_mull] = ACTIONS(194),
    [anon_sym_mulss] = ACTIONS(194),
    [anon_sym_mulw] = ACTIONS(194),
    [anon_sym_mulb] = ACTIONS(194),
    [anon_sym_mulsd] = ACTIONS(194),
    [anon_sym_mulx] = ACTIONS(194),
    [anon_sym_imul] = ACTIONS(194),
    [anon_sym_neg] = ACTIONS(194),
    [anon_sym_negl] = ACTIONS(194),
    [anon_sym_negq] = ACTIONS(194),
    [anon_sym_fmulp] = ACTIONS(194),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(194),
    [anon_sym_pclmullqlqdq] = ACTIONS(194),
    [anon_sym_pclmullqhqdq] = ACTIONS(194),
    [anon_sym_vpclmullqhqdq] = ACTIONS(194),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(194),
    [anon_sym_pclmulhqhqdq] = ACTIONS(194),
    [anon_sym_vpclmullqlqdq] = ACTIONS(194),
    [anon_sym_bsf] = ACTIONS(194),
    [anon_sym_bsr] = ACTIONS(194),
    [anon_sym_bts] = ACTIONS(194),
    [anon_sym_bt] = ACTIONS(194),
    [anon_sym_btr] = ACTIONS(194),
    [anon_sym_btl] = ACTIONS(194),
    [anon_sym_setne] = ACTIONS(194),
    [anon_sym_setb] = ACTIONS(194),
    [anon_sym_sete] = ACTIONS(194),
    [anon_sym_setbe] = ACTIONS(194),
    [anon_sym_seta] = ACTIONS(194),
    [anon_sym_setge] = ACTIONS(194),
    [anon_sym_setae] = ACTIONS(194),
    [anon_sym_setl] = ACTIONS(194),
    [anon_sym_setle] = ACTIONS(194),
    [anon_sym_setg] = ACTIONS(194),
    [anon_sym_seto] = ACTIONS(194),
    [anon_sym_setnp] = ACTIONS(194),
    [anon_sym_setp] = ACTIONS(194),
    [anon_sym_setns] = ACTIONS(194),
    [anon_sym_test] = ACTIONS(194),
    [anon_sym_testb] = ACTIONS(194),
    [anon_sym_testl] = ACTIONS(194),
    [anon_sym_knotw] = ACTIONS(194),
    [anon_sym_vpcmpltud] = ACTIONS(194),
    [anon_sym_gs] = ACTIONS(194),
    [anon_sym_re] = ACTIONS(194),
    [anon_sym_ss] = ACTIONS(194),
    [anon_sym_leaveq] = ACTIONS(194),
    [anon_sym_retq] = ACTIONS(194),
    [anon_sym_bswap] = ACTIONS(194),
    [anon_sym_cbtw] = ACTIONS(194),
    [anon_sym_cltd] = ACTIONS(194),
    [anon_sym_cltq] = ACTIONS(194),
    [anon_sym_cmovbe] = ACTIONS(194),
    [anon_sym_cmovl] = ACTIONS(194),
    [anon_sym_cmovae] = ACTIONS(194),
    [anon_sym_cmovo] = ACTIONS(194),
    [anon_sym_cmovne] = ACTIONS(194),
    [anon_sym_cmovns] = ACTIONS(194),
    [anon_sym_cmovg] = ACTIONS(194),
    [anon_sym_cmovp] = ACTIONS(194),
    [anon_sym_cmove] = ACTIONS(194),
    [anon_sym_cmovge] = ACTIONS(194),
    [anon_sym_cmovb] = ACTIONS(194),
    [anon_sym_cmova] = ACTIONS(194),
    [anon_sym_cmovle] = ACTIONS(194),
    [anon_sym_cmovs] = ACTIONS(194),
    [anon_sym_cwtl] = ACTIONS(194),
    [anon_sym_cwtd] = ACTIONS(194),
    [anon_sym_cqto] = ACTIONS(194),
    [anon_sym_cvttsd2si] = ACTIONS(194),
    [anon_sym_cvtss2sd] = ACTIONS(194),
    [anon_sym_cvttss2si] = ACTIONS(194),
    [anon_sym_cvtsi2sd] = ACTIONS(194),
    [anon_sym_cvtsi2ss] = ACTIONS(194),
    [anon_sym_cvtsi2sdq] = ACTIONS(194),
    [anon_sym_cvtsi2sdl] = ACTIONS(194),
    [anon_sym_cvtsd2ss] = ACTIONS(194),
    [anon_sym_cvtsi2ssl] = ACTIONS(194),
    [anon_sym_mov] = ACTIONS(194),
    [anon_sym_movw] = ACTIONS(194),
    [anon_sym_movl] = ACTIONS(194),
    [anon_sym_movq] = ACTIONS(194),
    [anon_sym_movb] = ACTIONS(194),
    [anon_sym_movabs] = ACTIONS(194),
    [anon_sym_movsbw] = ACTIONS(194),
    [anon_sym_movsbq] = ACTIONS(194),
    [anon_sym_movsbl] = ACTIONS(194),
    [anon_sym_movswl] = ACTIONS(194),
    [anon_sym_movswq] = ACTIONS(194),
    [anon_sym_movzbw] = ACTIONS(194),
    [anon_sym_movzbq] = ACTIONS(194),
    [anon_sym_movzbl] = ACTIONS(194),
    [anon_sym_movzwl] = ACTIONS(194),
    [anon_sym_movaps] = ACTIONS(194),
    [anon_sym_movhlps] = ACTIONS(194),
    [anon_sym_movss] = ACTIONS(194),
    [anon_sym_movups] = ACTIONS(194),
    [anon_sym_movsd] = ACTIONS(194),
    [anon_sym_movd] = ACTIONS(194),
    [anon_sym_movhps] = ACTIONS(194),
    [anon_sym_movdqa] = ACTIONS(194),
    [anon_sym_movbe] = ACTIONS(194),
    [anon_sym_movapd] = ACTIONS(194),
    [anon_sym_movdqu] = ACTIONS(194),
    [anon_sym_xchg] = ACTIONS(194),
    [anon_sym_fildl] = ACTIONS(194),
    [anon_sym_fldt] = ACTIONS(194),
    [anon_sym_fstpl] = ACTIONS(194),
    [anon_sym_insb] = ACTIONS(194),
    [anon_sym_insl] = ACTIONS(194),
    [anon_sym_outsb] = ACTIONS(194),
    [anon_sym_outsl] = ACTIONS(194),
    [anon_sym_or] = ACTIONS(194),
    [anon_sym_orq] = ACTIONS(194),
    [anon_sym_orl] = ACTIONS(194),
    [anon_sym_orb] = ACTIONS(194),
    [anon_sym_orw] = ACTIONS(194),
    [anon_sym_xor] = ACTIONS(194),
    [anon_sym_xorl] = ACTIONS(194),
    [anon_sym_xorw] = ACTIONS(194),
    [anon_sym_xorps] = ACTIONS(194),
    [anon_sym_xorpd] = ACTIONS(194),
    [anon_sym_vxorps] = ACTIONS(194),
    [anon_sym_vpxord] = ACTIONS(194),
    [anon_sym_vpxor] = ACTIONS(194),
    [anon_sym_and] = ACTIONS(194),
    [anon_sym_andq] = ACTIONS(194),
    [anon_sym_andl] = ACTIONS(194),
    [anon_sym_andw] = ACTIONS(194),
    [anon_sym_andb] = ACTIONS(194),
    [anon_sym_andn] = ACTIONS(194),
    [anon_sym_andpd] = ACTIONS(194),
    [anon_sym_pand] = ACTIONS(194),
    [anon_sym_pandn] = ACTIONS(194),
    [anon_sym_andps] = ACTIONS(194),
    [anon_sym_vpand] = ACTIONS(194),
    [anon_sym_not] = ACTIONS(194),
    [anon_sym_notl] = ACTIONS(194),
    [anon_sym_notw] = ACTIONS(194),
    [anon_sym_cpuid] = ACTIONS(194),
    [anon_sym_lea] = ACTIONS(194),
    [anon_sym_popcnt] = ACTIONS(194),
    [anon_sym_nop] = ACTIONS(194),
    [anon_sym_nopl] = ACTIONS(194),
    [anon_sym_nopw] = ACTIONS(194),
    [anon_sym_ud2] = ACTIONS(194),
    [anon_sym_data16] = ACTIONS(194),
    [anon_sym_sha1rnds4] = ACTIONS(194),
    [anon_sym_addr32] = ACTIONS(194),
    [anon_sym_sha1msg1] = ACTIONS(194),
    [anon_sym_sha1msg2] = ACTIONS(194),
    [anon_sym_sha1nexte] = ACTIONS(194),
    [anon_sym_endbr64] = ACTIONS(194),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(194),
    [anon_sym_packuswb] = ACTIONS(194),
    [anon_sym_punpckhbw] = ACTIONS(194),
    [anon_sym_punpckhdq] = ACTIONS(194),
    [anon_sym_punpckhwd] = ACTIONS(194),
    [anon_sym_punpcklbw] = ACTIONS(194),
    [anon_sym_punpckldq] = ACTIONS(194),
    [anon_sym_punpcklwd] = ACTIONS(194),
    [anon_sym_vpunpcklwd] = ACTIONS(194),
    [anon_sym_vpunpckldq] = ACTIONS(194),
    [anon_sym_punpcklqdq] = ACTIONS(194),
    [anon_sym_punpckhqdq] = ACTIONS(194),
    [anon_sym_vpunpckhqdq] = ACTIONS(194),
    [anon_sym_vpunpckhdq] = ACTIONS(194),
    [anon_sym_vpunpcklqdq] = ACTIONS(194),
    [anon_sym_vpunpckhwd] = ACTIONS(194),
    [anon_sym_rol] = ACTIONS(194),
    [anon_sym_ror] = ACTIONS(194),
    [anon_sym_sar] = ACTIONS(194),
    [anon_sym_sarl] = ACTIONS(194),
    [anon_sym_sarx] = ACTIONS(194),
    [anon_sym_shl] = ACTIONS(194),
    [anon_sym_shll] = ACTIONS(194),
    [anon_sym_shld] = ACTIONS(194),
    [anon_sym_shlx] = ACTIONS(194),
    [anon_sym_shlq] = ACTIONS(194),
    [anon_sym_shr] = ACTIONS(194),
    [anon_sym_shrq] = ACTIONS(194),
    [anon_sym_shrd] = ACTIONS(194),
    [anon_sym_shrl] = ACTIONS(194),
    [anon_sym_shrx] = ACTIONS(194),
    [anon_sym_vprord] = ACTIONS(194),
    [anon_sym_vprorq] = ACTIONS(194),
    [anon_sym_rorl] = ACTIONS(194),
    [anon_sym_roll] = ACTIONS(194),
    [anon_sym_push] = ACTIONS(194),
    [anon_sym_pushq] = ACTIONS(194),
    [anon_sym_pop] = ACTIONS(194),
    [anon_sym_movslq] = ACTIONS(194),
    [anon_sym_movsb] = ACTIONS(194),
    [anon_sym_rep] = ACTIONS(194),
    [anon_sym_repz] = ACTIONS(194),
    [anon_sym_repnz] = ACTIONS(194),
    [anon_sym_rex] = ACTIONS(194),
    [anon_sym_rex_DOTWB] = ACTIONS(194),
    [anon_sym_rex_DOTWRB] = ACTIONS(194),
    [anon_sym_rex_DOTRXB] = ACTIONS(194),
    [anon_sym_rex_DOTB] = ACTIONS(194),
    [anon_sym_rex_DOTWRXB] = ACTIONS(194),
    [anon_sym_rex_DOTXB] = ACTIONS(194),
    [anon_sym_rex_DOTW] = ACTIONS(194),
    [anon_sym_rex_DOTRB] = ACTIONS(194),
    [anon_sym_xgetbv] = ACTIONS(194),
    [anon_sym_fs] = ACTIONS(194),
    [anon_sym_kmovw] = ACTIONS(194),
    [anon_sym_adcx] = ACTIONS(194),
    [anon_sym_adox] = ACTIONS(194),
    [anon_sym_aesdec] = ACTIONS(194),
    [anon_sym_aesdeclast] = ACTIONS(194),
    [anon_sym_aesenc] = ACTIONS(194),
    [anon_sym_aesenclast] = ACTIONS(194),
    [anon_sym_vaesenc] = ACTIONS(194),
    [anon_sym_vaesenclast] = ACTIONS(194),
    [anon_sym_aeskeygenassist] = ACTIONS(194),
    [anon_sym_vblendps] = ACTIONS(194),
    [anon_sym_vblendvps] = ACTIONS(194),
    [anon_sym_vcvtusi2sd] = ACTIONS(194),
    [anon_sym_vdivsd] = ACTIONS(194),
    [anon_sym_vmovaps] = ACTIONS(194),
    [anon_sym_vmovapd] = ACTIONS(194),
    [anon_sym_vmovss] = ACTIONS(194),
    [anon_sym_vmovdqu] = ACTIONS(194),
    [anon_sym_vmovdqu64] = ACTIONS(194),
    [anon_sym_vmovdqu32] = ACTIONS(194),
    [anon_sym_vmovdqa] = ACTIONS(194),
    [anon_sym_vmovdqa32] = ACTIONS(194),
    [anon_sym_vmovdqa64] = ACTIONS(194),
    [anon_sym_vmovq] = ACTIONS(194),
    [anon_sym_vmovups] = ACTIONS(194),
    [anon_sym_vmovd] = ACTIONS(194),
    [anon_sym_vmovsd] = ACTIONS(194),
    [anon_sym_vmulsd] = ACTIONS(194),
    [anon_sym_vpackusdw] = ACTIONS(194),
    [anon_sym_vpaddd] = ACTIONS(194),
    [anon_sym_vpaddb] = ACTIONS(194),
    [anon_sym_vpaddq] = ACTIONS(194),
    [anon_sym_vpaddw] = ACTIONS(194),
    [anon_sym_vpalignr] = ACTIONS(194),
    [anon_sym_vpcmpgtd] = ACTIONS(194),
    [anon_sym_vpextrw] = ACTIONS(194),
    [anon_sym_vpinsrw] = ACTIONS(194),
    [anon_sym_vpinsrd] = ACTIONS(194),
    [anon_sym_vpinsrq] = ACTIONS(194),
    [anon_sym_vpinsrb] = ACTIONS(194),
    [anon_sym_vpmaddubsw] = ACTIONS(194),
    [anon_sym_vpmaddwd] = ACTIONS(194),
    [anon_sym_vpmullw] = ACTIONS(194),
    [anon_sym_vpmuludq] = ACTIONS(194),
    [anon_sym_vpor] = ACTIONS(194),
    [anon_sym_vpshufb] = ACTIONS(194),
    [anon_sym_vpshufd] = ACTIONS(194),
    [anon_sym_vpslldq] = ACTIONS(194),
    [anon_sym_vpslld] = ACTIONS(194),
    [anon_sym_vpsllq] = ACTIONS(194),
    [anon_sym_vpsllw] = ACTIONS(194),
    [anon_sym_vpsrldq] = ACTIONS(194),
    [anon_sym_vpsrld] = ACTIONS(194),
    [anon_sym_vpsrlq] = ACTIONS(194),
    [anon_sym_vpsrlw] = ACTIONS(194),
    [anon_sym_vpsubusw] = ACTIONS(194),
    [anon_sym_vpsubq] = ACTIONS(194),
    [anon_sym_vpsubd] = ACTIONS(194),
    [anon_sym_vpsubw] = ACTIONS(194),
    [anon_sym_vshufps] = ACTIONS(194),
    [anon_sym_vsubsd] = ACTIONS(194),
    [anon_sym_vucomisd] = ACTIONS(194),
    [anon_sym_vucomiss] = ACTIONS(194),
    [anon_sym_vunpckhpd] = ACTIONS(194),
    [anon_sym_vunpckhps] = ACTIONS(194),
    [anon_sym_vunpcklpd] = ACTIONS(194),
    [anon_sym_vunpcklps] = ACTIONS(194),
    [anon_sym_vbroadcastss] = ACTIONS(194),
    [anon_sym_vinsertf128] = ACTIONS(194),
    [anon_sym_vperm2f128] = ACTIONS(194),
    [anon_sym_vzeroall] = ACTIONS(194),
    [anon_sym_vzeroupper] = ACTIONS(194),
    [anon_sym_vshufi32x4] = ACTIONS(194),
    [anon_sym_vshufi64x2] = ACTIONS(194),
    [anon_sym_vpblendmd] = ACTIONS(194),
    [anon_sym_vextracti128] = ACTIONS(194),
    [anon_sym_vextracti32x4] = ACTIONS(194),
    [anon_sym_vinserti128] = ACTIONS(194),
    [anon_sym_vinserti32x4] = ACTIONS(194),
    [anon_sym_vinserti64x4] = ACTIONS(194),
    [anon_sym_vpblendd] = ACTIONS(194),
    [anon_sym_vpbroadcastq] = ACTIONS(194),
    [anon_sym_vpbroadcastd] = ACTIONS(194),
    [anon_sym_vbroadcasti128] = ACTIONS(194),
    [anon_sym_vbroadcasti32x4] = ACTIONS(194),
    [anon_sym_vperm2i128] = ACTIONS(194),
    [anon_sym_vpermd] = ACTIONS(194),
    [anon_sym_vpermq] = ACTIONS(194),
    [anon_sym_vpermt2d] = ACTIONS(194),
    [anon_sym_vpermi2d] = ACTIONS(194),
    [anon_sym_tzcnt] = ACTIONS(194),
    [anon_sym_rorx] = ACTIONS(194),
    [anon_sym_psubd] = ACTIONS(194),
    [anon_sym_pmaddwd] = ACTIONS(194),
    [anon_sym_pxor] = ACTIONS(194),
    [anon_sym_psrad] = ACTIONS(194),
    [anon_sym_pslld] = ACTIONS(194),
    [anon_sym_pcmpgtd] = ACTIONS(194),
    [anon_sym_pcmpeqd] = ACTIONS(194),
    [anon_sym_por] = ACTIONS(194),
    [anon_sym_paddw] = ACTIONS(194),
    [anon_sym_psubusw] = ACTIONS(194),
    [anon_sym_pcmpeqb] = ACTIONS(194),
    [anon_sym_psubusb] = ACTIONS(194),
    [anon_sym_psrld] = ACTIONS(194),
    [anon_sym_psrlw] = ACTIONS(194),
    [anon_sym_psllq] = ACTIONS(194),
    [anon_sym_paddd] = ACTIONS(194),
    [anon_sym_psrlq] = ACTIONS(194),
    [anon_sym_psubb] = ACTIONS(194),
    [anon_sym_maxss] = ACTIONS(194),
    [anon_sym_pmovmskb] = ACTIONS(194),
    [anon_sym_pinsrw] = ACTIONS(194),
    [anon_sym_minss] = ACTIONS(194),
    [anon_sym_prefetcht1] = ACTIONS(194),
    [anon_sym_prefetcht0] = ACTIONS(194),
    [anon_sym_pextrw] = ACTIONS(194),
    [anon_sym_ucomiss] = ACTIONS(194),
    [anon_sym_shufps] = ACTIONS(194),
    [anon_sym_addsd] = ACTIONS(194),
    [anon_sym_paddq] = ACTIONS(194),
    [anon_sym_psubq] = ACTIONS(194),
    [anon_sym_pshuflw] = ACTIONS(194),
    [anon_sym_pmuludq] = ACTIONS(194),
    [anon_sym_pshufd] = ACTIONS(194),
    [anon_sym_minsd] = ACTIONS(194),
    [anon_sym_pshufhw] = ACTIONS(194),
    [anon_sym_mfence] = ACTIONS(194),
    [anon_sym_maxsd] = ACTIONS(194),
    [anon_sym_ucomisd] = ACTIONS(194),
    [anon_sym_shufpd] = ACTIONS(194),
    [anon_sym_pslldq] = ACTIONS(194),
    [anon_sym_unpckhpd] = ACTIONS(194),
    [anon_sym_psrldq] = ACTIONS(194),
    [anon_sym_palignr] = ACTIONS(194),
    [anon_sym_pshufb] = ACTIONS(194),
    [anon_sym_pmaddubsw] = ACTIONS(194),
    [anon_sym_pinsrb] = ACTIONS(194),
    [anon_sym_pblendw] = ACTIONS(194),
    [anon_sym_pextrq] = ACTIONS(194),
    [anon_sym_blendvps] = ACTIONS(194),
    [anon_sym_pextrb] = ACTIONS(194),
    [anon_sym_pinsrd] = ACTIONS(194),
    [anon_sym_femms] = ACTIONS(194),
    [anon_sym_f] = ACTIONS(194),
    [aux_sym_operand_token1] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_PERCENTss] = ACTIONS(194),
    [anon_sym_PERCENTcs] = ACTIONS(194),
    [anon_sym_PERCENTds] = ACTIONS(194),
    [anon_sym_PERCENTes] = ACTIONS(194),
    [anon_sym_PERCENTfs] = ACTIONS(194),
    [anon_sym_PERCENTgs] = ACTIONS(194),
    [anon_sym_PERCENTrax] = ACTIONS(194),
    [anon_sym_PERCENTrbx] = ACTIONS(194),
    [anon_sym_PERCENTrcx] = ACTIONS(194),
    [anon_sym_PERCENTrdx] = ACTIONS(194),
    [anon_sym_PERCENTrsi] = ACTIONS(194),
    [anon_sym_PERCENTrdi] = ACTIONS(194),
    [anon_sym_PERCENTrbp] = ACTIONS(194),
    [anon_sym_PERCENTrsp] = ACTIONS(194),
    [anon_sym_PERCENTr8] = ACTIONS(194),
    [anon_sym_PERCENTr9] = ACTIONS(194),
    [anon_sym_PERCENTr10] = ACTIONS(194),
    [anon_sym_PERCENTr11] = ACTIONS(194),
    [anon_sym_PERCENTr12] = ACTIONS(194),
    [anon_sym_PERCENTr13] = ACTIONS(194),
    [anon_sym_PERCENTr14] = ACTIONS(194),
    [anon_sym_PERCENTr15] = ACTIONS(194),
    [anon_sym_PERCENTeax] = ACTIONS(194),
    [anon_sym_PERCENTecx] = ACTIONS(194),
    [anon_sym_PERCENTedx] = ACTIONS(194),
    [anon_sym_PERCENTebx] = ACTIONS(194),
    [anon_sym_PERCENTesi] = ACTIONS(194),
    [anon_sym_PERCENTedi] = ACTIONS(194),
    [anon_sym_PERCENTebp] = ACTIONS(194),
    [anon_sym_PERCENTesp] = ACTIONS(194),
    [anon_sym_PERCENTr8d] = ACTIONS(194),
    [anon_sym_PERCENTr9d] = ACTIONS(194),
    [anon_sym_PERCENTr10d] = ACTIONS(194),
    [anon_sym_PERCENTr11d] = ACTIONS(194),
    [anon_sym_PERCENTr12d] = ACTIONS(194),
    [anon_sym_PERCENTr13d] = ACTIONS(194),
    [anon_sym_PERCENTr14d] = ACTIONS(194),
    [anon_sym_PERCENTr15d] = ACTIONS(194),
    [anon_sym_PERCENTax] = ACTIONS(194),
    [anon_sym_PERCENTcx] = ACTIONS(194),
    [anon_sym_PERCENTdx] = ACTIONS(194),
    [anon_sym_PERCENTbx] = ACTIONS(194),
    [anon_sym_PERCENTsi] = ACTIONS(194),
    [anon_sym_PERCENTdi] = ACTIONS(194),
    [anon_sym_PERCENTsp] = ACTIONS(194),
    [anon_sym_PERCENTbp] = ACTIONS(194),
    [anon_sym_PERCENTr8w] = ACTIONS(194),
    [anon_sym_PERCENTr9w] = ACTIONS(194),
    [anon_sym_PERCENTr10w] = ACTIONS(194),
    [anon_sym_PERCENTr11w] = ACTIONS(194),
    [anon_sym_PERCENTr12w] = ACTIONS(194),
    [anon_sym_PERCENTr13w] = ACTIONS(194),
    [anon_sym_PERCENTr14w] = ACTIONS(194),
    [anon_sym_PERCENTr15w] = ACTIONS(194),
    [anon_sym_PERCENTal] = ACTIONS(194),
    [anon_sym_PERCENTcl] = ACTIONS(194),
    [anon_sym_PERCENTdl] = ACTIONS(194),
    [anon_sym_PERCENTbl] = ACTIONS(194),
    [anon_sym_PERCENTsil] = ACTIONS(194),
    [anon_sym_PERCENTdil] = ACTIONS(194),
    [anon_sym_PERCENTspl] = ACTIONS(194),
    [anon_sym_PERCENTbpl] = ACTIONS(194),
    [anon_sym_PERCENTr8b] = ACTIONS(194),
    [anon_sym_PERCENTr9b] = ACTIONS(194),
    [anon_sym_PERCENTr10b] = ACTIONS(194),
    [anon_sym_PERCENTr11b] = ACTIONS(194),
    [anon_sym_PERCENTr12b] = ACTIONS(194),
    [anon_sym_PERCENTr13b] = ACTIONS(194),
    [anon_sym_PERCENTr14b] = ACTIONS(194),
    [anon_sym_PERCENTr15b] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_movsq] = ACTIONS(194),
    [anon_sym_cmpsb] = ACTIONS(194),
    [anon_sym_cmpxchg] = ACTIONS(194),
    [anon_sym_movsl] = ACTIONS(194),
    [anon_sym_callq] = ACTIONS(194),
    [anon_sym_ja] = ACTIONS(194),
    [anon_sym_jae] = ACTIONS(194),
    [anon_sym_jb] = ACTIONS(194),
    [anon_sym_jbe] = ACTIONS(194),
    [anon_sym_je] = ACTIONS(194),
    [anon_sym_jg] = ACTIONS(194),
    [anon_sym_jge] = ACTIONS(194),
    [anon_sym_jl] = ACTIONS(194),
    [anon_sym_jle] = ACTIONS(194),
    [anon_sym_jmp] = ACTIONS(194),
    [anon_sym_jmpq] = ACTIONS(194),
    [anon_sym_jne] = ACTIONS(194),
    [anon_sym_jno] = ACTIONS(194),
    [anon_sym_jns] = ACTIONS(194),
    [anon_sym_jo] = ACTIONS(194),
    [anon_sym_jp] = ACTIONS(194),
    [anon_sym_jrcxz] = ACTIONS(194),
    [anon_sym_js] = ACTIONS(194),
    [anon_sym_notrack] = ACTIONS(194),
    [anon_sym_PERCENTcr0] = ACTIONS(194),
    [anon_sym_PERCENTcr2] = ACTIONS(194),
    [anon_sym_PERCENTcr3] = ACTIONS(194),
    [anon_sym_PERCENTcr4] = ACTIONS(194),
    [anon_sym_PERCENTrip] = ACTIONS(194),
    [anon_sym_PERCENTeip] = ACTIONS(194),
    [anon_sym_PERCENTip] = ACTIONS(194),
    [anon_sym_PERCENTst] = ACTIONS(194),
    [anon_sym_PERCENT] = ACTIONS(194),
  },
  [11] = {
    [aux_sym_comment_token1] = ACTIONS(198),
    [aux_sym_comment_token2] = ACTIONS(198),
    [sym__line_break] = ACTIONS(200),
    [anon_sym_adc] = ACTIONS(198),
    [anon_sym_add] = ACTIONS(198),
    [anon_sym_addq] = ACTIONS(198),
    [anon_sym_addl] = ACTIONS(198),
    [anon_sym_addss] = ACTIONS(198),
    [anon_sym_addw] = ACTIONS(198),
    [anon_sym_addb] = ACTIONS(198),
    [anon_sym_cmp] = ACTIONS(198),
    [anon_sym_cmpb] = ACTIONS(198),
    [anon_sym_cmpw] = ACTIONS(198),
    [anon_sym_cmpl] = ACTIONS(198),
    [anon_sym_cmpq] = ACTIONS(198),
    [anon_sym_comiss] = ACTIONS(198),
    [anon_sym_comisd] = ACTIONS(198),
    [anon_sym_inc] = ACTIONS(198),
    [anon_sym_incl] = ACTIONS(198),
    [anon_sym_dec] = ACTIONS(198),
    [anon_sym_div] = ACTIONS(198),
    [anon_sym_divq] = ACTIONS(198),
    [anon_sym_divl] = ACTIONS(198),
    [anon_sym_divss] = ACTIONS(198),
    [anon_sym_divsd] = ACTIONS(198),
    [anon_sym_idiv] = ACTIONS(198),
    [anon_sym_idivl] = ACTIONS(198),
    [anon_sym_sub] = ACTIONS(198),
    [anon_sym_subq] = ACTIONS(198),
    [anon_sym_subl] = ACTIONS(198),
    [anon_sym_subss] = ACTIONS(198),
    [anon_sym_subw] = ACTIONS(198),
    [anon_sym_subb] = ACTIONS(198),
    [anon_sym_subsd] = ACTIONS(198),
    [anon_sym_subpd] = ACTIONS(198),
    [anon_sym_sbb] = ACTIONS(198),
    [anon_sym_mul] = ACTIONS(198),
    [anon_sym_mulq] = ACTIONS(198),
    [anon_sym_mull] = ACTIONS(198),
    [anon_sym_mulss] = ACTIONS(198),
    [anon_sym_mulw] = ACTIONS(198),
    [anon_sym_mulb] = ACTIONS(198),
    [anon_sym_mulsd] = ACTIONS(198),
    [anon_sym_mulx] = ACTIONS(198),
    [anon_sym_imul] = ACTIONS(198),
    [anon_sym_neg] = ACTIONS(198),
    [anon_sym_negl] = ACTIONS(198),
    [anon_sym_negq] = ACTIONS(198),
    [anon_sym_fmulp] = ACTIONS(198),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(198),
    [anon_sym_pclmullqlqdq] = ACTIONS(198),
    [anon_sym_pclmullqhqdq] = ACTIONS(198),
    [anon_sym_vpclmullqhqdq] = ACTIONS(198),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(198),
    [anon_sym_pclmulhqhqdq] = ACTIONS(198),
    [anon_sym_vpclmullqlqdq] = ACTIONS(198),
    [anon_sym_bsf] = ACTIONS(198),
    [anon_sym_bsr] = ACTIONS(198),
    [anon_sym_bts] = ACTIONS(198),
    [anon_sym_bt] = ACTIONS(198),
    [anon_sym_btr] = ACTIONS(198),
    [anon_sym_btl] = ACTIONS(198),
    [anon_sym_setne] = ACTIONS(198),
    [anon_sym_setb] = ACTIONS(198),
    [anon_sym_sete] = ACTIONS(198),
    [anon_sym_setbe] = ACTIONS(198),
    [anon_sym_seta] = ACTIONS(198),
    [anon_sym_setge] = ACTIONS(198),
    [anon_sym_setae] = ACTIONS(198),
    [anon_sym_setl] = ACTIONS(198),
    [anon_sym_setle] = ACTIONS(198),
    [anon_sym_setg] = ACTIONS(198),
    [anon_sym_seto] = ACTIONS(198),
    [anon_sym_setnp] = ACTIONS(198),
    [anon_sym_setp] = ACTIONS(198),
    [anon_sym_setns] = ACTIONS(198),
    [anon_sym_test] = ACTIONS(198),
    [anon_sym_testb] = ACTIONS(198),
    [anon_sym_testl] = ACTIONS(198),
    [anon_sym_knotw] = ACTIONS(198),
    [anon_sym_vpcmpltud] = ACTIONS(198),
    [anon_sym_gs] = ACTIONS(198),
    [anon_sym_re] = ACTIONS(198),
    [anon_sym_ss] = ACTIONS(198),
    [anon_sym_leaveq] = ACTIONS(198),
    [anon_sym_retq] = ACTIONS(198),
    [anon_sym_bswap] = ACTIONS(198),
    [anon_sym_cbtw] = ACTIONS(198),
    [anon_sym_cltd] = ACTIONS(198),
    [anon_sym_cltq] = ACTIONS(198),
    [anon_sym_cmovbe] = ACTIONS(198),
    [anon_sym_cmovl] = ACTIONS(198),
    [anon_sym_cmovae] = ACTIONS(198),
    [anon_sym_cmovo] = ACTIONS(198),
    [anon_sym_cmovne] = ACTIONS(198),
    [anon_sym_cmovns] = ACTIONS(198),
    [anon_sym_cmovg] = ACTIONS(198),
    [anon_sym_cmovp] = ACTIONS(198),
    [anon_sym_cmove] = ACTIONS(198),
    [anon_sym_cmovge] = ACTIONS(198),
    [anon_sym_cmovb] = ACTIONS(198),
    [anon_sym_cmova] = ACTIONS(198),
    [anon_sym_cmovle] = ACTIONS(198),
    [anon_sym_cmovs] = ACTIONS(198),
    [anon_sym_cwtl] = ACTIONS(198),
    [anon_sym_cwtd] = ACTIONS(198),
    [anon_sym_cqto] = ACTIONS(198),
    [anon_sym_cvttsd2si] = ACTIONS(198),
    [anon_sym_cvtss2sd] = ACTIONS(198),
    [anon_sym_cvttss2si] = ACTIONS(198),
    [anon_sym_cvtsi2sd] = ACTIONS(198),
    [anon_sym_cvtsi2ss] = ACTIONS(198),
    [anon_sym_cvtsi2sdq] = ACTIONS(198),
    [anon_sym_cvtsi2sdl] = ACTIONS(198),
    [anon_sym_cvtsd2ss] = ACTIONS(198),
    [anon_sym_cvtsi2ssl] = ACTIONS(198),
    [anon_sym_mov] = ACTIONS(198),
    [anon_sym_movw] = ACTIONS(198),
    [anon_sym_movl] = ACTIONS(198),
    [anon_sym_movq] = ACTIONS(198),
    [anon_sym_movb] = ACTIONS(198),
    [anon_sym_movabs] = ACTIONS(198),
    [anon_sym_movsbw] = ACTIONS(198),
    [anon_sym_movsbq] = ACTIONS(198),
    [anon_sym_movsbl] = ACTIONS(198),
    [anon_sym_movswl] = ACTIONS(198),
    [anon_sym_movswq] = ACTIONS(198),
    [anon_sym_movzbw] = ACTIONS(198),
    [anon_sym_movzbq] = ACTIONS(198),
    [anon_sym_movzbl] = ACTIONS(198),
    [anon_sym_movzwl] = ACTIONS(198),
    [anon_sym_movaps] = ACTIONS(198),
    [anon_sym_movhlps] = ACTIONS(198),
    [anon_sym_movss] = ACTIONS(198),
    [anon_sym_movups] = ACTIONS(198),
    [anon_sym_movsd] = ACTIONS(198),
    [anon_sym_movd] = ACTIONS(198),
    [anon_sym_movhps] = ACTIONS(198),
    [anon_sym_movdqa] = ACTIONS(198),
    [anon_sym_movbe] = ACTIONS(198),
    [anon_sym_movapd] = ACTIONS(198),
    [anon_sym_movdqu] = ACTIONS(198),
    [anon_sym_xchg] = ACTIONS(198),
    [anon_sym_fildl] = ACTIONS(198),
    [anon_sym_fldt] = ACTIONS(198),
    [anon_sym_fstpl] = ACTIONS(198),
    [anon_sym_insb] = ACTIONS(198),
    [anon_sym_insl] = ACTIONS(198),
    [anon_sym_outsb] = ACTIONS(198),
    [anon_sym_outsl] = ACTIONS(198),
    [anon_sym_or] = ACTIONS(198),
    [anon_sym_orq] = ACTIONS(198),
    [anon_sym_orl] = ACTIONS(198),
    [anon_sym_orb] = ACTIONS(198),
    [anon_sym_orw] = ACTIONS(198),
    [anon_sym_xor] = ACTIONS(198),
    [anon_sym_xorl] = ACTIONS(198),
    [anon_sym_xorw] = ACTIONS(198),
    [anon_sym_xorps] = ACTIONS(198),
    [anon_sym_xorpd] = ACTIONS(198),
    [anon_sym_vxorps] = ACTIONS(198),
    [anon_sym_vpxord] = ACTIONS(198),
    [anon_sym_vpxor] = ACTIONS(198),
    [anon_sym_and] = ACTIONS(198),
    [anon_sym_andq] = ACTIONS(198),
    [anon_sym_andl] = ACTIONS(198),
    [anon_sym_andw] = ACTIONS(198),
    [anon_sym_andb] = ACTIONS(198),
    [anon_sym_andn] = ACTIONS(198),
    [anon_sym_andpd] = ACTIONS(198),
    [anon_sym_pand] = ACTIONS(198),
    [anon_sym_pandn] = ACTIONS(198),
    [anon_sym_andps] = ACTIONS(198),
    [anon_sym_vpand] = ACTIONS(198),
    [anon_sym_not] = ACTIONS(198),
    [anon_sym_notl] = ACTIONS(198),
    [anon_sym_notw] = ACTIONS(198),
    [anon_sym_cpuid] = ACTIONS(198),
    [anon_sym_lea] = ACTIONS(198),
    [anon_sym_popcnt] = ACTIONS(198),
    [anon_sym_nop] = ACTIONS(198),
    [anon_sym_nopl] = ACTIONS(198),
    [anon_sym_nopw] = ACTIONS(198),
    [anon_sym_ud2] = ACTIONS(198),
    [anon_sym_data16] = ACTIONS(198),
    [anon_sym_sha1rnds4] = ACTIONS(198),
    [anon_sym_addr32] = ACTIONS(198),
    [anon_sym_sha1msg1] = ACTIONS(198),
    [anon_sym_sha1msg2] = ACTIONS(198),
    [anon_sym_sha1nexte] = ACTIONS(198),
    [anon_sym_endbr64] = ACTIONS(198),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(198),
    [anon_sym_packuswb] = ACTIONS(198),
    [anon_sym_punpckhbw] = ACTIONS(198),
    [anon_sym_punpckhdq] = ACTIONS(198),
    [anon_sym_punpckhwd] = ACTIONS(198),
    [anon_sym_punpcklbw] = ACTIONS(198),
    [anon_sym_punpckldq] = ACTIONS(198),
    [anon_sym_punpcklwd] = ACTIONS(198),
    [anon_sym_vpunpcklwd] = ACTIONS(198),
    [anon_sym_vpunpckldq] = ACTIONS(198),
    [anon_sym_punpcklqdq] = ACTIONS(198),
    [anon_sym_punpckhqdq] = ACTIONS(198),
    [anon_sym_vpunpckhqdq] = ACTIONS(198),
    [anon_sym_vpunpckhdq] = ACTIONS(198),
    [anon_sym_vpunpcklqdq] = ACTIONS(198),
    [anon_sym_vpunpckhwd] = ACTIONS(198),
    [anon_sym_rol] = ACTIONS(198),
    [anon_sym_ror] = ACTIONS(198),
    [anon_sym_sar] = ACTIONS(198),
    [anon_sym_sarl] = ACTIONS(198),
    [anon_sym_sarx] = ACTIONS(198),
    [anon_sym_shl] = ACTIONS(198),
    [anon_sym_shll] = ACTIONS(198),
    [anon_sym_shld] = ACTIONS(198),
    [anon_sym_shlx] = ACTIONS(198),
    [anon_sym_shlq] = ACTIONS(198),
    [anon_sym_shr] = ACTIONS(198),
    [anon_sym_shrq] = ACTIONS(198),
    [anon_sym_shrd] = ACTIONS(198),
    [anon_sym_shrl] = ACTIONS(198),
    [anon_sym_shrx] = ACTIONS(198),
    [anon_sym_vprord] = ACTIONS(198),
    [anon_sym_vprorq] = ACTIONS(198),
    [anon_sym_rorl] = ACTIONS(198),
    [anon_sym_roll] = ACTIONS(198),
    [anon_sym_push] = ACTIONS(198),
    [anon_sym_pushq] = ACTIONS(198),
    [anon_sym_pop] = ACTIONS(198),
    [anon_sym_movslq] = ACTIONS(198),
    [anon_sym_movsb] = ACTIONS(198),
    [anon_sym_rep] = ACTIONS(198),
    [anon_sym_repz] = ACTIONS(198),
    [anon_sym_repnz] = ACTIONS(198),
    [anon_sym_rex] = ACTIONS(198),
    [anon_sym_rex_DOTWB] = ACTIONS(198),
    [anon_sym_rex_DOTWRB] = ACTIONS(198),
    [anon_sym_rex_DOTRXB] = ACTIONS(198),
    [anon_sym_rex_DOTB] = ACTIONS(198),
    [anon_sym_rex_DOTWRXB] = ACTIONS(198),
    [anon_sym_rex_DOTXB] = ACTIONS(198),
    [anon_sym_rex_DOTW] = ACTIONS(198),
    [anon_sym_rex_DOTRB] = ACTIONS(198),
    [anon_sym_xgetbv] = ACTIONS(198),
    [anon_sym_fs] = ACTIONS(198),
    [anon_sym_kmovw] = ACTIONS(198),
    [anon_sym_adcx] = ACTIONS(198),
    [anon_sym_adox] = ACTIONS(198),
    [anon_sym_aesdec] = ACTIONS(198),
    [anon_sym_aesdeclast] = ACTIONS(198),
    [anon_sym_aesenc] = ACTIONS(198),
    [anon_sym_aesenclast] = ACTIONS(198),
    [anon_sym_vaesenc] = ACTIONS(198),
    [anon_sym_vaesenclast] = ACTIONS(198),
    [anon_sym_aeskeygenassist] = ACTIONS(198),
    [anon_sym_vblendps] = ACTIONS(198),
    [anon_sym_vblendvps] = ACTIONS(198),
    [anon_sym_vcvtusi2sd] = ACTIONS(198),
    [anon_sym_vdivsd] = ACTIONS(198),
    [anon_sym_vmovaps] = ACTIONS(198),
    [anon_sym_vmovapd] = ACTIONS(198),
    [anon_sym_vmovss] = ACTIONS(198),
    [anon_sym_vmovdqu] = ACTIONS(198),
    [anon_sym_vmovdqu64] = ACTIONS(198),
    [anon_sym_vmovdqu32] = ACTIONS(198),
    [anon_sym_vmovdqa] = ACTIONS(198),
    [anon_sym_vmovdqa32] = ACTIONS(198),
    [anon_sym_vmovdqa64] = ACTIONS(198),
    [anon_sym_vmovq] = ACTIONS(198),
    [anon_sym_vmovups] = ACTIONS(198),
    [anon_sym_vmovd] = ACTIONS(198),
    [anon_sym_vmovsd] = ACTIONS(198),
    [anon_sym_vmulsd] = ACTIONS(198),
    [anon_sym_vpackusdw] = ACTIONS(198),
    [anon_sym_vpaddd] = ACTIONS(198),
    [anon_sym_vpaddb] = ACTIONS(198),
    [anon_sym_vpaddq] = ACTIONS(198),
    [anon_sym_vpaddw] = ACTIONS(198),
    [anon_sym_vpalignr] = ACTIONS(198),
    [anon_sym_vpcmpgtd] = ACTIONS(198),
    [anon_sym_vpextrw] = ACTIONS(198),
    [anon_sym_vpinsrw] = ACTIONS(198),
    [anon_sym_vpinsrd] = ACTIONS(198),
    [anon_sym_vpinsrq] = ACTIONS(198),
    [anon_sym_vpinsrb] = ACTIONS(198),
    [anon_sym_vpmaddubsw] = ACTIONS(198),
    [anon_sym_vpmaddwd] = ACTIONS(198),
    [anon_sym_vpmullw] = ACTIONS(198),
    [anon_sym_vpmuludq] = ACTIONS(198),
    [anon_sym_vpor] = ACTIONS(198),
    [anon_sym_vpshufb] = ACTIONS(198),
    [anon_sym_vpshufd] = ACTIONS(198),
    [anon_sym_vpslldq] = ACTIONS(198),
    [anon_sym_vpslld] = ACTIONS(198),
    [anon_sym_vpsllq] = ACTIONS(198),
    [anon_sym_vpsllw] = ACTIONS(198),
    [anon_sym_vpsrldq] = ACTIONS(198),
    [anon_sym_vpsrld] = ACTIONS(198),
    [anon_sym_vpsrlq] = ACTIONS(198),
    [anon_sym_vpsrlw] = ACTIONS(198),
    [anon_sym_vpsubusw] = ACTIONS(198),
    [anon_sym_vpsubq] = ACTIONS(198),
    [anon_sym_vpsubd] = ACTIONS(198),
    [anon_sym_vpsubw] = ACTIONS(198),
    [anon_sym_vshufps] = ACTIONS(198),
    [anon_sym_vsubsd] = ACTIONS(198),
    [anon_sym_vucomisd] = ACTIONS(198),
    [anon_sym_vucomiss] = ACTIONS(198),
    [anon_sym_vunpckhpd] = ACTIONS(198),
    [anon_sym_vunpckhps] = ACTIONS(198),
    [anon_sym_vunpcklpd] = ACTIONS(198),
    [anon_sym_vunpcklps] = ACTIONS(198),
    [anon_sym_vbroadcastss] = ACTIONS(198),
    [anon_sym_vinsertf128] = ACTIONS(198),
    [anon_sym_vperm2f128] = ACTIONS(198),
    [anon_sym_vzeroall] = ACTIONS(198),
    [anon_sym_vzeroupper] = ACTIONS(198),
    [anon_sym_vshufi32x4] = ACTIONS(198),
    [anon_sym_vshufi64x2] = ACTIONS(198),
    [anon_sym_vpblendmd] = ACTIONS(198),
    [anon_sym_vextracti128] = ACTIONS(198),
    [anon_sym_vextracti32x4] = ACTIONS(198),
    [anon_sym_vinserti128] = ACTIONS(198),
    [anon_sym_vinserti32x4] = ACTIONS(198),
    [anon_sym_vinserti64x4] = ACTIONS(198),
    [anon_sym_vpblendd] = ACTIONS(198),
    [anon_sym_vpbroadcastq] = ACTIONS(198),
    [anon_sym_vpbroadcastd] = ACTIONS(198),
    [anon_sym_vbroadcasti128] = ACTIONS(198),
    [anon_sym_vbroadcasti32x4] = ACTIONS(198),
    [anon_sym_vperm2i128] = ACTIONS(198),
    [anon_sym_vpermd] = ACTIONS(198),
    [anon_sym_vpermq] = ACTIONS(198),
    [anon_sym_vpermt2d] = ACTIONS(198),
    [anon_sym_vpermi2d] = ACTIONS(198),
    [anon_sym_tzcnt] = ACTIONS(198),
    [anon_sym_rorx] = ACTIONS(198),
    [anon_sym_psubd] = ACTIONS(198),
    [anon_sym_pmaddwd] = ACTIONS(198),
    [anon_sym_pxor] = ACTIONS(198),
    [anon_sym_psrad] = ACTIONS(198),
    [anon_sym_pslld] = ACTIONS(198),
    [anon_sym_pcmpgtd] = ACTIONS(198),
    [anon_sym_pcmpeqd] = ACTIONS(198),
    [anon_sym_por] = ACTIONS(198),
    [anon_sym_paddw] = ACTIONS(198),
    [anon_sym_psubusw] = ACTIONS(198),
    [anon_sym_pcmpeqb] = ACTIONS(198),
    [anon_sym_psubusb] = ACTIONS(198),
    [anon_sym_psrld] = ACTIONS(198),
    [anon_sym_psrlw] = ACTIONS(198),
    [anon_sym_psllq] = ACTIONS(198),
    [anon_sym_paddd] = ACTIONS(198),
    [anon_sym_psrlq] = ACTIONS(198),
    [anon_sym_psubb] = ACTIONS(198),
    [anon_sym_maxss] = ACTIONS(198),
    [anon_sym_pmovmskb] = ACTIONS(198),
    [anon_sym_pinsrw] = ACTIONS(198),
    [anon_sym_minss] = ACTIONS(198),
    [anon_sym_prefetcht1] = ACTIONS(198),
    [anon_sym_prefetcht0] = ACTIONS(198),
    [anon_sym_pextrw] = ACTIONS(198),
    [anon_sym_ucomiss] = ACTIONS(198),
    [anon_sym_shufps] = ACTIONS(198),
    [anon_sym_addsd] = ACTIONS(198),
    [anon_sym_paddq] = ACTIONS(198),
    [anon_sym_psubq] = ACTIONS(198),
    [anon_sym_pshuflw] = ACTIONS(198),
    [anon_sym_pmuludq] = ACTIONS(198),
    [anon_sym_pshufd] = ACTIONS(198),
    [anon_sym_minsd] = ACTIONS(198),
    [anon_sym_pshufhw] = ACTIONS(198),
    [anon_sym_mfence] = ACTIONS(198),
    [anon_sym_maxsd] = ACTIONS(198),
    [anon_sym_ucomisd] = ACTIONS(198),
    [anon_sym_shufpd] = ACTIONS(198),
    [anon_sym_pslldq] = ACTIONS(198),
    [anon_sym_unpckhpd] = ACTIONS(198),
    [anon_sym_psrldq] = ACTIONS(198),
    [anon_sym_palignr] = ACTIONS(198),
    [anon_sym_pshufb] = ACTIONS(198),
    [anon_sym_pmaddubsw] = ACTIONS(198),
    [anon_sym_pinsrb] = ACTIONS(198),
    [anon_sym_pblendw] = ACTIONS(198),
    [anon_sym_pextrq] = ACTIONS(198),
    [anon_sym_blendvps] = ACTIONS(198),
    [anon_sym_pextrb] = ACTIONS(198),
    [anon_sym_pinsrd] = ACTIONS(198),
    [anon_sym_femms] = ACTIONS(198),
    [anon_sym_f] = ACTIONS(198),
    [aux_sym_operand_token1] = ACTIONS(198),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [anon_sym_PERCENTss] = ACTIONS(198),
    [anon_sym_PERCENTcs] = ACTIONS(198),
    [anon_sym_PERCENTds] = ACTIONS(198),
    [anon_sym_PERCENTes] = ACTIONS(198),
    [anon_sym_PERCENTfs] = ACTIONS(198),
    [anon_sym_PERCENTgs] = ACTIONS(198),
    [anon_sym_PERCENTrax] = ACTIONS(198),
    [anon_sym_PERCENTrbx] = ACTIONS(198),
    [anon_sym_PERCENTrcx] = ACTIONS(198),
    [anon_sym_PERCENTrdx] = ACTIONS(198),
    [anon_sym_PERCENTrsi] = ACTIONS(198),
    [anon_sym_PERCENTrdi] = ACTIONS(198),
    [anon_sym_PERCENTrbp] = ACTIONS(198),
    [anon_sym_PERCENTrsp] = ACTIONS(198),
    [anon_sym_PERCENTr8] = ACTIONS(198),
    [anon_sym_PERCENTr9] = ACTIONS(198),
    [anon_sym_PERCENTr10] = ACTIONS(198),
    [anon_sym_PERCENTr11] = ACTIONS(198),
    [anon_sym_PERCENTr12] = ACTIONS(198),
    [anon_sym_PERCENTr13] = ACTIONS(198),
    [anon_sym_PERCENTr14] = ACTIONS(198),
    [anon_sym_PERCENTr15] = ACTIONS(198),
    [anon_sym_PERCENTeax] = ACTIONS(198),
    [anon_sym_PERCENTecx] = ACTIONS(198),
    [anon_sym_PERCENTedx] = ACTIONS(198),
    [anon_sym_PERCENTebx] = ACTIONS(198),
    [anon_sym_PERCENTesi] = ACTIONS(198),
    [anon_sym_PERCENTedi] = ACTIONS(198),
    [anon_sym_PERCENTebp] = ACTIONS(198),
    [anon_sym_PERCENTesp] = ACTIONS(198),
    [anon_sym_PERCENTr8d] = ACTIONS(198),
    [anon_sym_PERCENTr9d] = ACTIONS(198),
    [anon_sym_PERCENTr10d] = ACTIONS(198),
    [anon_sym_PERCENTr11d] = ACTIONS(198),
    [anon_sym_PERCENTr12d] = ACTIONS(198),
    [anon_sym_PERCENTr13d] = ACTIONS(198),
    [anon_sym_PERCENTr14d] = ACTIONS(198),
    [anon_sym_PERCENTr15d] = ACTIONS(198),
    [anon_sym_PERCENTax] = ACTIONS(198),
    [anon_sym_PERCENTcx] = ACTIONS(198),
    [anon_sym_PERCENTdx] = ACTIONS(198),
    [anon_sym_PERCENTbx] = ACTIONS(198),
    [anon_sym_PERCENTsi] = ACTIONS(198),
    [anon_sym_PERCENTdi] = ACTIONS(198),
    [anon_sym_PERCENTsp] = ACTIONS(198),
    [anon_sym_PERCENTbp] = ACTIONS(198),
    [anon_sym_PERCENTr8w] = ACTIONS(198),
    [anon_sym_PERCENTr9w] = ACTIONS(198),
    [anon_sym_PERCENTr10w] = ACTIONS(198),
    [anon_sym_PERCENTr11w] = ACTIONS(198),
    [anon_sym_PERCENTr12w] = ACTIONS(198),
    [anon_sym_PERCENTr13w] = ACTIONS(198),
    [anon_sym_PERCENTr14w] = ACTIONS(198),
    [anon_sym_PERCENTr15w] = ACTIONS(198),
    [anon_sym_PERCENTal] = ACTIONS(198),
    [anon_sym_PERCENTcl] = ACTIONS(198),
    [anon_sym_PERCENTdl] = ACTIONS(198),
    [anon_sym_PERCENTbl] = ACTIONS(198),
    [anon_sym_PERCENTsil] = ACTIONS(198),
    [anon_sym_PERCENTdil] = ACTIONS(198),
    [anon_sym_PERCENTspl] = ACTIONS(198),
    [anon_sym_PERCENTbpl] = ACTIONS(198),
    [anon_sym_PERCENTr8b] = ACTIONS(198),
    [anon_sym_PERCENTr9b] = ACTIONS(198),
    [anon_sym_PERCENTr10b] = ACTIONS(198),
    [anon_sym_PERCENTr11b] = ACTIONS(198),
    [anon_sym_PERCENTr12b] = ACTIONS(198),
    [anon_sym_PERCENTr13b] = ACTIONS(198),
    [anon_sym_PERCENTr14b] = ACTIONS(198),
    [anon_sym_PERCENTr15b] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_movsq] = ACTIONS(198),
    [anon_sym_cmpsb] = ACTIONS(198),
    [anon_sym_cmpxchg] = ACTIONS(198),
    [anon_sym_movsl] = ACTIONS(198),
    [anon_sym_callq] = ACTIONS(198),
    [anon_sym_ja] = ACTIONS(198),
    [anon_sym_jae] = ACTIONS(198),
    [anon_sym_jb] = ACTIONS(198),
    [anon_sym_jbe] = ACTIONS(198),
    [anon_sym_je] = ACTIONS(198),
    [anon_sym_jg] = ACTIONS(198),
    [anon_sym_jge] = ACTIONS(198),
    [anon_sym_jl] = ACTIONS(198),
    [anon_sym_jle] = ACTIONS(198),
    [anon_sym_jmp] = ACTIONS(198),
    [anon_sym_jmpq] = ACTIONS(198),
    [anon_sym_jne] = ACTIONS(198),
    [anon_sym_jno] = ACTIONS(198),
    [anon_sym_jns] = ACTIONS(198),
    [anon_sym_jo] = ACTIONS(198),
    [anon_sym_jp] = ACTIONS(198),
    [anon_sym_jrcxz] = ACTIONS(198),
    [anon_sym_js] = ACTIONS(198),
    [anon_sym_notrack] = ACTIONS(198),
    [anon_sym_PERCENTcr0] = ACTIONS(198),
    [anon_sym_PERCENTcr2] = ACTIONS(198),
    [anon_sym_PERCENTcr3] = ACTIONS(198),
    [anon_sym_PERCENTcr4] = ACTIONS(198),
    [anon_sym_PERCENTrip] = ACTIONS(198),
    [anon_sym_PERCENTeip] = ACTIONS(198),
    [anon_sym_PERCENTip] = ACTIONS(198),
    [anon_sym_PERCENTst] = ACTIONS(198),
    [anon_sym_PERCENT] = ACTIONS(198),
  },
  [12] = {
    [aux_sym_comment_token1] = ACTIONS(202),
    [aux_sym_comment_token2] = ACTIONS(202),
    [sym__line_break] = ACTIONS(204),
    [anon_sym_adc] = ACTIONS(202),
    [anon_sym_add] = ACTIONS(202),
    [anon_sym_addq] = ACTIONS(202),
    [anon_sym_addl] = ACTIONS(202),
    [anon_sym_addss] = ACTIONS(202),
    [anon_sym_addw] = ACTIONS(202),
    [anon_sym_addb] = ACTIONS(202),
    [anon_sym_cmp] = ACTIONS(202),
    [anon_sym_cmpb] = ACTIONS(202),
    [anon_sym_cmpw] = ACTIONS(202),
    [anon_sym_cmpl] = ACTIONS(202),
    [anon_sym_cmpq] = ACTIONS(202),
    [anon_sym_comiss] = ACTIONS(202),
    [anon_sym_comisd] = ACTIONS(202),
    [anon_sym_inc] = ACTIONS(202),
    [anon_sym_incl] = ACTIONS(202),
    [anon_sym_dec] = ACTIONS(202),
    [anon_sym_div] = ACTIONS(202),
    [anon_sym_divq] = ACTIONS(202),
    [anon_sym_divl] = ACTIONS(202),
    [anon_sym_divss] = ACTIONS(202),
    [anon_sym_divsd] = ACTIONS(202),
    [anon_sym_idiv] = ACTIONS(202),
    [anon_sym_idivl] = ACTIONS(202),
    [anon_sym_sub] = ACTIONS(202),
    [anon_sym_subq] = ACTIONS(202),
    [anon_sym_subl] = ACTIONS(202),
    [anon_sym_subss] = ACTIONS(202),
    [anon_sym_subw] = ACTIONS(202),
    [anon_sym_subb] = ACTIONS(202),
    [anon_sym_subsd] = ACTIONS(202),
    [anon_sym_subpd] = ACTIONS(202),
    [anon_sym_sbb] = ACTIONS(202),
    [anon_sym_mul] = ACTIONS(202),
    [anon_sym_mulq] = ACTIONS(202),
    [anon_sym_mull] = ACTIONS(202),
    [anon_sym_mulss] = ACTIONS(202),
    [anon_sym_mulw] = ACTIONS(202),
    [anon_sym_mulb] = ACTIONS(202),
    [anon_sym_mulsd] = ACTIONS(202),
    [anon_sym_mulx] = ACTIONS(202),
    [anon_sym_imul] = ACTIONS(202),
    [anon_sym_neg] = ACTIONS(202),
    [anon_sym_negl] = ACTIONS(202),
    [anon_sym_negq] = ACTIONS(202),
    [anon_sym_fmulp] = ACTIONS(202),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(202),
    [anon_sym_pclmullqlqdq] = ACTIONS(202),
    [anon_sym_pclmullqhqdq] = ACTIONS(202),
    [anon_sym_vpclmullqhqdq] = ACTIONS(202),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(202),
    [anon_sym_pclmulhqhqdq] = ACTIONS(202),
    [anon_sym_vpclmullqlqdq] = ACTIONS(202),
    [anon_sym_bsf] = ACTIONS(202),
    [anon_sym_bsr] = ACTIONS(202),
    [anon_sym_bts] = ACTIONS(202),
    [anon_sym_bt] = ACTIONS(202),
    [anon_sym_btr] = ACTIONS(202),
    [anon_sym_btl] = ACTIONS(202),
    [anon_sym_setne] = ACTIONS(202),
    [anon_sym_setb] = ACTIONS(202),
    [anon_sym_sete] = ACTIONS(202),
    [anon_sym_setbe] = ACTIONS(202),
    [anon_sym_seta] = ACTIONS(202),
    [anon_sym_setge] = ACTIONS(202),
    [anon_sym_setae] = ACTIONS(202),
    [anon_sym_setl] = ACTIONS(202),
    [anon_sym_setle] = ACTIONS(202),
    [anon_sym_setg] = ACTIONS(202),
    [anon_sym_seto] = ACTIONS(202),
    [anon_sym_setnp] = ACTIONS(202),
    [anon_sym_setp] = ACTIONS(202),
    [anon_sym_setns] = ACTIONS(202),
    [anon_sym_test] = ACTIONS(202),
    [anon_sym_testb] = ACTIONS(202),
    [anon_sym_testl] = ACTIONS(202),
    [anon_sym_knotw] = ACTIONS(202),
    [anon_sym_vpcmpltud] = ACTIONS(202),
    [anon_sym_gs] = ACTIONS(202),
    [anon_sym_re] = ACTIONS(202),
    [anon_sym_ss] = ACTIONS(202),
    [anon_sym_leaveq] = ACTIONS(202),
    [anon_sym_retq] = ACTIONS(202),
    [anon_sym_bswap] = ACTIONS(202),
    [anon_sym_cbtw] = ACTIONS(202),
    [anon_sym_cltd] = ACTIONS(202),
    [anon_sym_cltq] = ACTIONS(202),
    [anon_sym_cmovbe] = ACTIONS(202),
    [anon_sym_cmovl] = ACTIONS(202),
    [anon_sym_cmovae] = ACTIONS(202),
    [anon_sym_cmovo] = ACTIONS(202),
    [anon_sym_cmovne] = ACTIONS(202),
    [anon_sym_cmovns] = ACTIONS(202),
    [anon_sym_cmovg] = ACTIONS(202),
    [anon_sym_cmovp] = ACTIONS(202),
    [anon_sym_cmove] = ACTIONS(202),
    [anon_sym_cmovge] = ACTIONS(202),
    [anon_sym_cmovb] = ACTIONS(202),
    [anon_sym_cmova] = ACTIONS(202),
    [anon_sym_cmovle] = ACTIONS(202),
    [anon_sym_cmovs] = ACTIONS(202),
    [anon_sym_cwtl] = ACTIONS(202),
    [anon_sym_cwtd] = ACTIONS(202),
    [anon_sym_cqto] = ACTIONS(202),
    [anon_sym_cvttsd2si] = ACTIONS(202),
    [anon_sym_cvtss2sd] = ACTIONS(202),
    [anon_sym_cvttss2si] = ACTIONS(202),
    [anon_sym_cvtsi2sd] = ACTIONS(202),
    [anon_sym_cvtsi2ss] = ACTIONS(202),
    [anon_sym_cvtsi2sdq] = ACTIONS(202),
    [anon_sym_cvtsi2sdl] = ACTIONS(202),
    [anon_sym_cvtsd2ss] = ACTIONS(202),
    [anon_sym_cvtsi2ssl] = ACTIONS(202),
    [anon_sym_mov] = ACTIONS(202),
    [anon_sym_movw] = ACTIONS(202),
    [anon_sym_movl] = ACTIONS(202),
    [anon_sym_movq] = ACTIONS(202),
    [anon_sym_movb] = ACTIONS(202),
    [anon_sym_movabs] = ACTIONS(202),
    [anon_sym_movsbw] = ACTIONS(202),
    [anon_sym_movsbq] = ACTIONS(202),
    [anon_sym_movsbl] = ACTIONS(202),
    [anon_sym_movswl] = ACTIONS(202),
    [anon_sym_movswq] = ACTIONS(202),
    [anon_sym_movzbw] = ACTIONS(202),
    [anon_sym_movzbq] = ACTIONS(202),
    [anon_sym_movzbl] = ACTIONS(202),
    [anon_sym_movzwl] = ACTIONS(202),
    [anon_sym_movaps] = ACTIONS(202),
    [anon_sym_movhlps] = ACTIONS(202),
    [anon_sym_movss] = ACTIONS(202),
    [anon_sym_movups] = ACTIONS(202),
    [anon_sym_movsd] = ACTIONS(202),
    [anon_sym_movd] = ACTIONS(202),
    [anon_sym_movhps] = ACTIONS(202),
    [anon_sym_movdqa] = ACTIONS(202),
    [anon_sym_movbe] = ACTIONS(202),
    [anon_sym_movapd] = ACTIONS(202),
    [anon_sym_movdqu] = ACTIONS(202),
    [anon_sym_xchg] = ACTIONS(202),
    [anon_sym_fildl] = ACTIONS(202),
    [anon_sym_fldt] = ACTIONS(202),
    [anon_sym_fstpl] = ACTIONS(202),
    [anon_sym_insb] = ACTIONS(202),
    [anon_sym_insl] = ACTIONS(202),
    [anon_sym_outsb] = ACTIONS(202),
    [anon_sym_outsl] = ACTIONS(202),
    [anon_sym_or] = ACTIONS(202),
    [anon_sym_orq] = ACTIONS(202),
    [anon_sym_orl] = ACTIONS(202),
    [anon_sym_orb] = ACTIONS(202),
    [anon_sym_orw] = ACTIONS(202),
    [anon_sym_xor] = ACTIONS(202),
    [anon_sym_xorl] = ACTIONS(202),
    [anon_sym_xorw] = ACTIONS(202),
    [anon_sym_xorps] = ACTIONS(202),
    [anon_sym_xorpd] = ACTIONS(202),
    [anon_sym_vxorps] = ACTIONS(202),
    [anon_sym_vpxord] = ACTIONS(202),
    [anon_sym_vpxor] = ACTIONS(202),
    [anon_sym_and] = ACTIONS(202),
    [anon_sym_andq] = ACTIONS(202),
    [anon_sym_andl] = ACTIONS(202),
    [anon_sym_andw] = ACTIONS(202),
    [anon_sym_andb] = ACTIONS(202),
    [anon_sym_andn] = ACTIONS(202),
    [anon_sym_andpd] = ACTIONS(202),
    [anon_sym_pand] = ACTIONS(202),
    [anon_sym_pandn] = ACTIONS(202),
    [anon_sym_andps] = ACTIONS(202),
    [anon_sym_vpand] = ACTIONS(202),
    [anon_sym_not] = ACTIONS(202),
    [anon_sym_notl] = ACTIONS(202),
    [anon_sym_notw] = ACTIONS(202),
    [anon_sym_cpuid] = ACTIONS(202),
    [anon_sym_lea] = ACTIONS(202),
    [anon_sym_popcnt] = ACTIONS(202),
    [anon_sym_nop] = ACTIONS(202),
    [anon_sym_nopl] = ACTIONS(202),
    [anon_sym_nopw] = ACTIONS(202),
    [anon_sym_ud2] = ACTIONS(202),
    [anon_sym_data16] = ACTIONS(202),
    [anon_sym_sha1rnds4] = ACTIONS(202),
    [anon_sym_addr32] = ACTIONS(202),
    [anon_sym_sha1msg1] = ACTIONS(202),
    [anon_sym_sha1msg2] = ACTIONS(202),
    [anon_sym_sha1nexte] = ACTIONS(202),
    [anon_sym_endbr64] = ACTIONS(202),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(202),
    [anon_sym_packuswb] = ACTIONS(202),
    [anon_sym_punpckhbw] = ACTIONS(202),
    [anon_sym_punpckhdq] = ACTIONS(202),
    [anon_sym_punpckhwd] = ACTIONS(202),
    [anon_sym_punpcklbw] = ACTIONS(202),
    [anon_sym_punpckldq] = ACTIONS(202),
    [anon_sym_punpcklwd] = ACTIONS(202),
    [anon_sym_vpunpcklwd] = ACTIONS(202),
    [anon_sym_vpunpckldq] = ACTIONS(202),
    [anon_sym_punpcklqdq] = ACTIONS(202),
    [anon_sym_punpckhqdq] = ACTIONS(202),
    [anon_sym_vpunpckhqdq] = ACTIONS(202),
    [anon_sym_vpunpckhdq] = ACTIONS(202),
    [anon_sym_vpunpcklqdq] = ACTIONS(202),
    [anon_sym_vpunpckhwd] = ACTIONS(202),
    [anon_sym_rol] = ACTIONS(202),
    [anon_sym_ror] = ACTIONS(202),
    [anon_sym_sar] = ACTIONS(202),
    [anon_sym_sarl] = ACTIONS(202),
    [anon_sym_sarx] = ACTIONS(202),
    [anon_sym_shl] = ACTIONS(202),
    [anon_sym_shll] = ACTIONS(202),
    [anon_sym_shld] = ACTIONS(202),
    [anon_sym_shlx] = ACTIONS(202),
    [anon_sym_shlq] = ACTIONS(202),
    [anon_sym_shr] = ACTIONS(202),
    [anon_sym_shrq] = ACTIONS(202),
    [anon_sym_shrd] = ACTIONS(202),
    [anon_sym_shrl] = ACTIONS(202),
    [anon_sym_shrx] = ACTIONS(202),
    [anon_sym_vprord] = ACTIONS(202),
    [anon_sym_vprorq] = ACTIONS(202),
    [anon_sym_rorl] = ACTIONS(202),
    [anon_sym_roll] = ACTIONS(202),
    [anon_sym_push] = ACTIONS(202),
    [anon_sym_pushq] = ACTIONS(202),
    [anon_sym_pop] = ACTIONS(202),
    [anon_sym_movslq] = ACTIONS(202),
    [anon_sym_movsb] = ACTIONS(202),
    [anon_sym_rep] = ACTIONS(202),
    [anon_sym_repz] = ACTIONS(202),
    [anon_sym_repnz] = ACTIONS(202),
    [anon_sym_rex] = ACTIONS(202),
    [anon_sym_rex_DOTWB] = ACTIONS(202),
    [anon_sym_rex_DOTWRB] = ACTIONS(202),
    [anon_sym_rex_DOTRXB] = ACTIONS(202),
    [anon_sym_rex_DOTB] = ACTIONS(202),
    [anon_sym_rex_DOTWRXB] = ACTIONS(202),
    [anon_sym_rex_DOTXB] = ACTIONS(202),
    [anon_sym_rex_DOTW] = ACTIONS(202),
    [anon_sym_rex_DOTRB] = ACTIONS(202),
    [anon_sym_xgetbv] = ACTIONS(202),
    [anon_sym_fs] = ACTIONS(202),
    [anon_sym_kmovw] = ACTIONS(202),
    [anon_sym_adcx] = ACTIONS(202),
    [anon_sym_adox] = ACTIONS(202),
    [anon_sym_aesdec] = ACTIONS(202),
    [anon_sym_aesdeclast] = ACTIONS(202),
    [anon_sym_aesenc] = ACTIONS(202),
    [anon_sym_aesenclast] = ACTIONS(202),
    [anon_sym_vaesenc] = ACTIONS(202),
    [anon_sym_vaesenclast] = ACTIONS(202),
    [anon_sym_aeskeygenassist] = ACTIONS(202),
    [anon_sym_vblendps] = ACTIONS(202),
    [anon_sym_vblendvps] = ACTIONS(202),
    [anon_sym_vcvtusi2sd] = ACTIONS(202),
    [anon_sym_vdivsd] = ACTIONS(202),
    [anon_sym_vmovaps] = ACTIONS(202),
    [anon_sym_vmovapd] = ACTIONS(202),
    [anon_sym_vmovss] = ACTIONS(202),
    [anon_sym_vmovdqu] = ACTIONS(202),
    [anon_sym_vmovdqu64] = ACTIONS(202),
    [anon_sym_vmovdqu32] = ACTIONS(202),
    [anon_sym_vmovdqa] = ACTIONS(202),
    [anon_sym_vmovdqa32] = ACTIONS(202),
    [anon_sym_vmovdqa64] = ACTIONS(202),
    [anon_sym_vmovq] = ACTIONS(202),
    [anon_sym_vmovups] = ACTIONS(202),
    [anon_sym_vmovd] = ACTIONS(202),
    [anon_sym_vmovsd] = ACTIONS(202),
    [anon_sym_vmulsd] = ACTIONS(202),
    [anon_sym_vpackusdw] = ACTIONS(202),
    [anon_sym_vpaddd] = ACTIONS(202),
    [anon_sym_vpaddb] = ACTIONS(202),
    [anon_sym_vpaddq] = ACTIONS(202),
    [anon_sym_vpaddw] = ACTIONS(202),
    [anon_sym_vpalignr] = ACTIONS(202),
    [anon_sym_vpcmpgtd] = ACTIONS(202),
    [anon_sym_vpextrw] = ACTIONS(202),
    [anon_sym_vpinsrw] = ACTIONS(202),
    [anon_sym_vpinsrd] = ACTIONS(202),
    [anon_sym_vpinsrq] = ACTIONS(202),
    [anon_sym_vpinsrb] = ACTIONS(202),
    [anon_sym_vpmaddubsw] = ACTIONS(202),
    [anon_sym_vpmaddwd] = ACTIONS(202),
    [anon_sym_vpmullw] = ACTIONS(202),
    [anon_sym_vpmuludq] = ACTIONS(202),
    [anon_sym_vpor] = ACTIONS(202),
    [anon_sym_vpshufb] = ACTIONS(202),
    [anon_sym_vpshufd] = ACTIONS(202),
    [anon_sym_vpslldq] = ACTIONS(202),
    [anon_sym_vpslld] = ACTIONS(202),
    [anon_sym_vpsllq] = ACTIONS(202),
    [anon_sym_vpsllw] = ACTIONS(202),
    [anon_sym_vpsrldq] = ACTIONS(202),
    [anon_sym_vpsrld] = ACTIONS(202),
    [anon_sym_vpsrlq] = ACTIONS(202),
    [anon_sym_vpsrlw] = ACTIONS(202),
    [anon_sym_vpsubusw] = ACTIONS(202),
    [anon_sym_vpsubq] = ACTIONS(202),
    [anon_sym_vpsubd] = ACTIONS(202),
    [anon_sym_vpsubw] = ACTIONS(202),
    [anon_sym_vshufps] = ACTIONS(202),
    [anon_sym_vsubsd] = ACTIONS(202),
    [anon_sym_vucomisd] = ACTIONS(202),
    [anon_sym_vucomiss] = ACTIONS(202),
    [anon_sym_vunpckhpd] = ACTIONS(202),
    [anon_sym_vunpckhps] = ACTIONS(202),
    [anon_sym_vunpcklpd] = ACTIONS(202),
    [anon_sym_vunpcklps] = ACTIONS(202),
    [anon_sym_vbroadcastss] = ACTIONS(202),
    [anon_sym_vinsertf128] = ACTIONS(202),
    [anon_sym_vperm2f128] = ACTIONS(202),
    [anon_sym_vzeroall] = ACTIONS(202),
    [anon_sym_vzeroupper] = ACTIONS(202),
    [anon_sym_vshufi32x4] = ACTIONS(202),
    [anon_sym_vshufi64x2] = ACTIONS(202),
    [anon_sym_vpblendmd] = ACTIONS(202),
    [anon_sym_vextracti128] = ACTIONS(202),
    [anon_sym_vextracti32x4] = ACTIONS(202),
    [anon_sym_vinserti128] = ACTIONS(202),
    [anon_sym_vinserti32x4] = ACTIONS(202),
    [anon_sym_vinserti64x4] = ACTIONS(202),
    [anon_sym_vpblendd] = ACTIONS(202),
    [anon_sym_vpbroadcastq] = ACTIONS(202),
    [anon_sym_vpbroadcastd] = ACTIONS(202),
    [anon_sym_vbroadcasti128] = ACTIONS(202),
    [anon_sym_vbroadcasti32x4] = ACTIONS(202),
    [anon_sym_vperm2i128] = ACTIONS(202),
    [anon_sym_vpermd] = ACTIONS(202),
    [anon_sym_vpermq] = ACTIONS(202),
    [anon_sym_vpermt2d] = ACTIONS(202),
    [anon_sym_vpermi2d] = ACTIONS(202),
    [anon_sym_tzcnt] = ACTIONS(202),
    [anon_sym_rorx] = ACTIONS(202),
    [anon_sym_psubd] = ACTIONS(202),
    [anon_sym_pmaddwd] = ACTIONS(202),
    [anon_sym_pxor] = ACTIONS(202),
    [anon_sym_psrad] = ACTIONS(202),
    [anon_sym_pslld] = ACTIONS(202),
    [anon_sym_pcmpgtd] = ACTIONS(202),
    [anon_sym_pcmpeqd] = ACTIONS(202),
    [anon_sym_por] = ACTIONS(202),
    [anon_sym_paddw] = ACTIONS(202),
    [anon_sym_psubusw] = ACTIONS(202),
    [anon_sym_pcmpeqb] = ACTIONS(202),
    [anon_sym_psubusb] = ACTIONS(202),
    [anon_sym_psrld] = ACTIONS(202),
    [anon_sym_psrlw] = ACTIONS(202),
    [anon_sym_psllq] = ACTIONS(202),
    [anon_sym_paddd] = ACTIONS(202),
    [anon_sym_psrlq] = ACTIONS(202),
    [anon_sym_psubb] = ACTIONS(202),
    [anon_sym_maxss] = ACTIONS(202),
    [anon_sym_pmovmskb] = ACTIONS(202),
    [anon_sym_pinsrw] = ACTIONS(202),
    [anon_sym_minss] = ACTIONS(202),
    [anon_sym_prefetcht1] = ACTIONS(202),
    [anon_sym_prefetcht0] = ACTIONS(202),
    [anon_sym_pextrw] = ACTIONS(202),
    [anon_sym_ucomiss] = ACTIONS(202),
    [anon_sym_shufps] = ACTIONS(202),
    [anon_sym_addsd] = ACTIONS(202),
    [anon_sym_paddq] = ACTIONS(202),
    [anon_sym_psubq] = ACTIONS(202),
    [anon_sym_pshuflw] = ACTIONS(202),
    [anon_sym_pmuludq] = ACTIONS(202),
    [anon_sym_pshufd] = ACTIONS(202),
    [anon_sym_minsd] = ACTIONS(202),
    [anon_sym_pshufhw] = ACTIONS(202),
    [anon_sym_mfence] = ACTIONS(202),
    [anon_sym_maxsd] = ACTIONS(202),
    [anon_sym_ucomisd] = ACTIONS(202),
    [anon_sym_shufpd] = ACTIONS(202),
    [anon_sym_pslldq] = ACTIONS(202),
    [anon_sym_unpckhpd] = ACTIONS(202),
    [anon_sym_psrldq] = ACTIONS(202),
    [anon_sym_palignr] = ACTIONS(202),
    [anon_sym_pshufb] = ACTIONS(202),
    [anon_sym_pmaddubsw] = ACTIONS(202),
    [anon_sym_pinsrb] = ACTIONS(202),
    [anon_sym_pblendw] = ACTIONS(202),
    [anon_sym_pextrq] = ACTIONS(202),
    [anon_sym_blendvps] = ACTIONS(202),
    [anon_sym_pextrb] = ACTIONS(202),
    [anon_sym_pinsrd] = ACTIONS(202),
    [anon_sym_femms] = ACTIONS(202),
    [anon_sym_f] = ACTIONS(202),
    [aux_sym_operand_token1] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [anon_sym_PERCENTss] = ACTIONS(202),
    [anon_sym_PERCENTcs] = ACTIONS(202),
    [anon_sym_PERCENTds] = ACTIONS(202),
    [anon_sym_PERCENTes] = ACTIONS(202),
    [anon_sym_PERCENTfs] = ACTIONS(202),
    [anon_sym_PERCENTgs] = ACTIONS(202),
    [anon_sym_PERCENTrax] = ACTIONS(202),
    [anon_sym_PERCENTrbx] = ACTIONS(202),
    [anon_sym_PERCENTrcx] = ACTIONS(202),
    [anon_sym_PERCENTrdx] = ACTIONS(202),
    [anon_sym_PERCENTrsi] = ACTIONS(202),
    [anon_sym_PERCENTrdi] = ACTIONS(202),
    [anon_sym_PERCENTrbp] = ACTIONS(202),
    [anon_sym_PERCENTrsp] = ACTIONS(202),
    [anon_sym_PERCENTr8] = ACTIONS(202),
    [anon_sym_PERCENTr9] = ACTIONS(202),
    [anon_sym_PERCENTr10] = ACTIONS(202),
    [anon_sym_PERCENTr11] = ACTIONS(202),
    [anon_sym_PERCENTr12] = ACTIONS(202),
    [anon_sym_PERCENTr13] = ACTIONS(202),
    [anon_sym_PERCENTr14] = ACTIONS(202),
    [anon_sym_PERCENTr15] = ACTIONS(202),
    [anon_sym_PERCENTeax] = ACTIONS(202),
    [anon_sym_PERCENTecx] = ACTIONS(202),
    [anon_sym_PERCENTedx] = ACTIONS(202),
    [anon_sym_PERCENTebx] = ACTIONS(202),
    [anon_sym_PERCENTesi] = ACTIONS(202),
    [anon_sym_PERCENTedi] = ACTIONS(202),
    [anon_sym_PERCENTebp] = ACTIONS(202),
    [anon_sym_PERCENTesp] = ACTIONS(202),
    [anon_sym_PERCENTr8d] = ACTIONS(202),
    [anon_sym_PERCENTr9d] = ACTIONS(202),
    [anon_sym_PERCENTr10d] = ACTIONS(202),
    [anon_sym_PERCENTr11d] = ACTIONS(202),
    [anon_sym_PERCENTr12d] = ACTIONS(202),
    [anon_sym_PERCENTr13d] = ACTIONS(202),
    [anon_sym_PERCENTr14d] = ACTIONS(202),
    [anon_sym_PERCENTr15d] = ACTIONS(202),
    [anon_sym_PERCENTax] = ACTIONS(202),
    [anon_sym_PERCENTcx] = ACTIONS(202),
    [anon_sym_PERCENTdx] = ACTIONS(202),
    [anon_sym_PERCENTbx] = ACTIONS(202),
    [anon_sym_PERCENTsi] = ACTIONS(202),
    [anon_sym_PERCENTdi] = ACTIONS(202),
    [anon_sym_PERCENTsp] = ACTIONS(202),
    [anon_sym_PERCENTbp] = ACTIONS(202),
    [anon_sym_PERCENTr8w] = ACTIONS(202),
    [anon_sym_PERCENTr9w] = ACTIONS(202),
    [anon_sym_PERCENTr10w] = ACTIONS(202),
    [anon_sym_PERCENTr11w] = ACTIONS(202),
    [anon_sym_PERCENTr12w] = ACTIONS(202),
    [anon_sym_PERCENTr13w] = ACTIONS(202),
    [anon_sym_PERCENTr14w] = ACTIONS(202),
    [anon_sym_PERCENTr15w] = ACTIONS(202),
    [anon_sym_PERCENTal] = ACTIONS(202),
    [anon_sym_PERCENTcl] = ACTIONS(202),
    [anon_sym_PERCENTdl] = ACTIONS(202),
    [anon_sym_PERCENTbl] = ACTIONS(202),
    [anon_sym_PERCENTsil] = ACTIONS(202),
    [anon_sym_PERCENTdil] = ACTIONS(202),
    [anon_sym_PERCENTspl] = ACTIONS(202),
    [anon_sym_PERCENTbpl] = ACTIONS(202),
    [anon_sym_PERCENTr8b] = ACTIONS(202),
    [anon_sym_PERCENTr9b] = ACTIONS(202),
    [anon_sym_PERCENTr10b] = ACTIONS(202),
    [anon_sym_PERCENTr11b] = ACTIONS(202),
    [anon_sym_PERCENTr12b] = ACTIONS(202),
    [anon_sym_PERCENTr13b] = ACTIONS(202),
    [anon_sym_PERCENTr14b] = ACTIONS(202),
    [anon_sym_PERCENTr15b] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_movsq] = ACTIONS(202),
    [anon_sym_cmpsb] = ACTIONS(202),
    [anon_sym_cmpxchg] = ACTIONS(202),
    [anon_sym_movsl] = ACTIONS(202),
    [anon_sym_callq] = ACTIONS(202),
    [anon_sym_ja] = ACTIONS(202),
    [anon_sym_jae] = ACTIONS(202),
    [anon_sym_jb] = ACTIONS(202),
    [anon_sym_jbe] = ACTIONS(202),
    [anon_sym_je] = ACTIONS(202),
    [anon_sym_jg] = ACTIONS(202),
    [anon_sym_jge] = ACTIONS(202),
    [anon_sym_jl] = ACTIONS(202),
    [anon_sym_jle] = ACTIONS(202),
    [anon_sym_jmp] = ACTIONS(202),
    [anon_sym_jmpq] = ACTIONS(202),
    [anon_sym_jne] = ACTIONS(202),
    [anon_sym_jno] = ACTIONS(202),
    [anon_sym_jns] = ACTIONS(202),
    [anon_sym_jo] = ACTIONS(202),
    [anon_sym_jp] = ACTIONS(202),
    [anon_sym_jrcxz] = ACTIONS(202),
    [anon_sym_js] = ACTIONS(202),
    [anon_sym_notrack] = ACTIONS(202),
    [anon_sym_PERCENTcr0] = ACTIONS(202),
    [anon_sym_PERCENTcr2] = ACTIONS(202),
    [anon_sym_PERCENTcr3] = ACTIONS(202),
    [anon_sym_PERCENTcr4] = ACTIONS(202),
    [anon_sym_PERCENTrip] = ACTIONS(202),
    [anon_sym_PERCENTeip] = ACTIONS(202),
    [anon_sym_PERCENTip] = ACTIONS(202),
    [anon_sym_PERCENTst] = ACTIONS(202),
    [anon_sym_PERCENT] = ACTIONS(202),
  },
  [13] = {
    [aux_sym_comment_token1] = ACTIONS(206),
    [aux_sym_comment_token2] = ACTIONS(206),
    [sym__line_break] = ACTIONS(208),
    [anon_sym_adc] = ACTIONS(206),
    [anon_sym_add] = ACTIONS(206),
    [anon_sym_addq] = ACTIONS(206),
    [anon_sym_addl] = ACTIONS(206),
    [anon_sym_addss] = ACTIONS(206),
    [anon_sym_addw] = ACTIONS(206),
    [anon_sym_addb] = ACTIONS(206),
    [anon_sym_cmp] = ACTIONS(206),
    [anon_sym_cmpb] = ACTIONS(206),
    [anon_sym_cmpw] = ACTIONS(206),
    [anon_sym_cmpl] = ACTIONS(206),
    [anon_sym_cmpq] = ACTIONS(206),
    [anon_sym_comiss] = ACTIONS(206),
    [anon_sym_comisd] = ACTIONS(206),
    [anon_sym_inc] = ACTIONS(206),
    [anon_sym_incl] = ACTIONS(206),
    [anon_sym_dec] = ACTIONS(206),
    [anon_sym_div] = ACTIONS(206),
    [anon_sym_divq] = ACTIONS(206),
    [anon_sym_divl] = ACTIONS(206),
    [anon_sym_divss] = ACTIONS(206),
    [anon_sym_divsd] = ACTIONS(206),
    [anon_sym_idiv] = ACTIONS(206),
    [anon_sym_idivl] = ACTIONS(206),
    [anon_sym_sub] = ACTIONS(206),
    [anon_sym_subq] = ACTIONS(206),
    [anon_sym_subl] = ACTIONS(206),
    [anon_sym_subss] = ACTIONS(206),
    [anon_sym_subw] = ACTIONS(206),
    [anon_sym_subb] = ACTIONS(206),
    [anon_sym_subsd] = ACTIONS(206),
    [anon_sym_subpd] = ACTIONS(206),
    [anon_sym_sbb] = ACTIONS(206),
    [anon_sym_mul] = ACTIONS(206),
    [anon_sym_mulq] = ACTIONS(206),
    [anon_sym_mull] = ACTIONS(206),
    [anon_sym_mulss] = ACTIONS(206),
    [anon_sym_mulw] = ACTIONS(206),
    [anon_sym_mulb] = ACTIONS(206),
    [anon_sym_mulsd] = ACTIONS(206),
    [anon_sym_mulx] = ACTIONS(206),
    [anon_sym_imul] = ACTIONS(206),
    [anon_sym_neg] = ACTIONS(206),
    [anon_sym_negl] = ACTIONS(206),
    [anon_sym_negq] = ACTIONS(206),
    [anon_sym_fmulp] = ACTIONS(206),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(206),
    [anon_sym_pclmullqlqdq] = ACTIONS(206),
    [anon_sym_pclmullqhqdq] = ACTIONS(206),
    [anon_sym_vpclmullqhqdq] = ACTIONS(206),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(206),
    [anon_sym_pclmulhqhqdq] = ACTIONS(206),
    [anon_sym_vpclmullqlqdq] = ACTIONS(206),
    [anon_sym_bsf] = ACTIONS(206),
    [anon_sym_bsr] = ACTIONS(206),
    [anon_sym_bts] = ACTIONS(206),
    [anon_sym_bt] = ACTIONS(206),
    [anon_sym_btr] = ACTIONS(206),
    [anon_sym_btl] = ACTIONS(206),
    [anon_sym_setne] = ACTIONS(206),
    [anon_sym_setb] = ACTIONS(206),
    [anon_sym_sete] = ACTIONS(206),
    [anon_sym_setbe] = ACTIONS(206),
    [anon_sym_seta] = ACTIONS(206),
    [anon_sym_setge] = ACTIONS(206),
    [anon_sym_setae] = ACTIONS(206),
    [anon_sym_setl] = ACTIONS(206),
    [anon_sym_setle] = ACTIONS(206),
    [anon_sym_setg] = ACTIONS(206),
    [anon_sym_seto] = ACTIONS(206),
    [anon_sym_setnp] = ACTIONS(206),
    [anon_sym_setp] = ACTIONS(206),
    [anon_sym_setns] = ACTIONS(206),
    [anon_sym_test] = ACTIONS(206),
    [anon_sym_testb] = ACTIONS(206),
    [anon_sym_testl] = ACTIONS(206),
    [anon_sym_knotw] = ACTIONS(206),
    [anon_sym_vpcmpltud] = ACTIONS(206),
    [anon_sym_gs] = ACTIONS(206),
    [anon_sym_re] = ACTIONS(206),
    [anon_sym_ss] = ACTIONS(206),
    [anon_sym_leaveq] = ACTIONS(206),
    [anon_sym_retq] = ACTIONS(206),
    [anon_sym_bswap] = ACTIONS(206),
    [anon_sym_cbtw] = ACTIONS(206),
    [anon_sym_cltd] = ACTIONS(206),
    [anon_sym_cltq] = ACTIONS(206),
    [anon_sym_cmovbe] = ACTIONS(206),
    [anon_sym_cmovl] = ACTIONS(206),
    [anon_sym_cmovae] = ACTIONS(206),
    [anon_sym_cmovo] = ACTIONS(206),
    [anon_sym_cmovne] = ACTIONS(206),
    [anon_sym_cmovns] = ACTIONS(206),
    [anon_sym_cmovg] = ACTIONS(206),
    [anon_sym_cmovp] = ACTIONS(206),
    [anon_sym_cmove] = ACTIONS(206),
    [anon_sym_cmovge] = ACTIONS(206),
    [anon_sym_cmovb] = ACTIONS(206),
    [anon_sym_cmova] = ACTIONS(206),
    [anon_sym_cmovle] = ACTIONS(206),
    [anon_sym_cmovs] = ACTIONS(206),
    [anon_sym_cwtl] = ACTIONS(206),
    [anon_sym_cwtd] = ACTIONS(206),
    [anon_sym_cqto] = ACTIONS(206),
    [anon_sym_cvttsd2si] = ACTIONS(206),
    [anon_sym_cvtss2sd] = ACTIONS(206),
    [anon_sym_cvttss2si] = ACTIONS(206),
    [anon_sym_cvtsi2sd] = ACTIONS(206),
    [anon_sym_cvtsi2ss] = ACTIONS(206),
    [anon_sym_cvtsi2sdq] = ACTIONS(206),
    [anon_sym_cvtsi2sdl] = ACTIONS(206),
    [anon_sym_cvtsd2ss] = ACTIONS(206),
    [anon_sym_cvtsi2ssl] = ACTIONS(206),
    [anon_sym_mov] = ACTIONS(206),
    [anon_sym_movw] = ACTIONS(206),
    [anon_sym_movl] = ACTIONS(206),
    [anon_sym_movq] = ACTIONS(206),
    [anon_sym_movb] = ACTIONS(206),
    [anon_sym_movabs] = ACTIONS(206),
    [anon_sym_movsbw] = ACTIONS(206),
    [anon_sym_movsbq] = ACTIONS(206),
    [anon_sym_movsbl] = ACTIONS(206),
    [anon_sym_movswl] = ACTIONS(206),
    [anon_sym_movswq] = ACTIONS(206),
    [anon_sym_movzbw] = ACTIONS(206),
    [anon_sym_movzbq] = ACTIONS(206),
    [anon_sym_movzbl] = ACTIONS(206),
    [anon_sym_movzwl] = ACTIONS(206),
    [anon_sym_movaps] = ACTIONS(206),
    [anon_sym_movhlps] = ACTIONS(206),
    [anon_sym_movss] = ACTIONS(206),
    [anon_sym_movups] = ACTIONS(206),
    [anon_sym_movsd] = ACTIONS(206),
    [anon_sym_movd] = ACTIONS(206),
    [anon_sym_movhps] = ACTIONS(206),
    [anon_sym_movdqa] = ACTIONS(206),
    [anon_sym_movbe] = ACTIONS(206),
    [anon_sym_movapd] = ACTIONS(206),
    [anon_sym_movdqu] = ACTIONS(206),
    [anon_sym_xchg] = ACTIONS(206),
    [anon_sym_fildl] = ACTIONS(206),
    [anon_sym_fldt] = ACTIONS(206),
    [anon_sym_fstpl] = ACTIONS(206),
    [anon_sym_insb] = ACTIONS(206),
    [anon_sym_insl] = ACTIONS(206),
    [anon_sym_outsb] = ACTIONS(206),
    [anon_sym_outsl] = ACTIONS(206),
    [anon_sym_or] = ACTIONS(206),
    [anon_sym_orq] = ACTIONS(206),
    [anon_sym_orl] = ACTIONS(206),
    [anon_sym_orb] = ACTIONS(206),
    [anon_sym_orw] = ACTIONS(206),
    [anon_sym_xor] = ACTIONS(206),
    [anon_sym_xorl] = ACTIONS(206),
    [anon_sym_xorw] = ACTIONS(206),
    [anon_sym_xorps] = ACTIONS(206),
    [anon_sym_xorpd] = ACTIONS(206),
    [anon_sym_vxorps] = ACTIONS(206),
    [anon_sym_vpxord] = ACTIONS(206),
    [anon_sym_vpxor] = ACTIONS(206),
    [anon_sym_and] = ACTIONS(206),
    [anon_sym_andq] = ACTIONS(206),
    [anon_sym_andl] = ACTIONS(206),
    [anon_sym_andw] = ACTIONS(206),
    [anon_sym_andb] = ACTIONS(206),
    [anon_sym_andn] = ACTIONS(206),
    [anon_sym_andpd] = ACTIONS(206),
    [anon_sym_pand] = ACTIONS(206),
    [anon_sym_pandn] = ACTIONS(206),
    [anon_sym_andps] = ACTIONS(206),
    [anon_sym_vpand] = ACTIONS(206),
    [anon_sym_not] = ACTIONS(206),
    [anon_sym_notl] = ACTIONS(206),
    [anon_sym_notw] = ACTIONS(206),
    [anon_sym_cpuid] = ACTIONS(206),
    [anon_sym_lea] = ACTIONS(206),
    [anon_sym_popcnt] = ACTIONS(206),
    [anon_sym_nop] = ACTIONS(206),
    [anon_sym_nopl] = ACTIONS(206),
    [anon_sym_nopw] = ACTIONS(206),
    [anon_sym_ud2] = ACTIONS(206),
    [anon_sym_data16] = ACTIONS(206),
    [anon_sym_sha1rnds4] = ACTIONS(206),
    [anon_sym_addr32] = ACTIONS(206),
    [anon_sym_sha1msg1] = ACTIONS(206),
    [anon_sym_sha1msg2] = ACTIONS(206),
    [anon_sym_sha1nexte] = ACTIONS(206),
    [anon_sym_endbr64] = ACTIONS(206),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(206),
    [anon_sym_packuswb] = ACTIONS(206),
    [anon_sym_punpckhbw] = ACTIONS(206),
    [anon_sym_punpckhdq] = ACTIONS(206),
    [anon_sym_punpckhwd] = ACTIONS(206),
    [anon_sym_punpcklbw] = ACTIONS(206),
    [anon_sym_punpckldq] = ACTIONS(206),
    [anon_sym_punpcklwd] = ACTIONS(206),
    [anon_sym_vpunpcklwd] = ACTIONS(206),
    [anon_sym_vpunpckldq] = ACTIONS(206),
    [anon_sym_punpcklqdq] = ACTIONS(206),
    [anon_sym_punpckhqdq] = ACTIONS(206),
    [anon_sym_vpunpckhqdq] = ACTIONS(206),
    [anon_sym_vpunpckhdq] = ACTIONS(206),
    [anon_sym_vpunpcklqdq] = ACTIONS(206),
    [anon_sym_vpunpckhwd] = ACTIONS(206),
    [anon_sym_rol] = ACTIONS(206),
    [anon_sym_ror] = ACTIONS(206),
    [anon_sym_sar] = ACTIONS(206),
    [anon_sym_sarl] = ACTIONS(206),
    [anon_sym_sarx] = ACTIONS(206),
    [anon_sym_shl] = ACTIONS(206),
    [anon_sym_shll] = ACTIONS(206),
    [anon_sym_shld] = ACTIONS(206),
    [anon_sym_shlx] = ACTIONS(206),
    [anon_sym_shlq] = ACTIONS(206),
    [anon_sym_shr] = ACTIONS(206),
    [anon_sym_shrq] = ACTIONS(206),
    [anon_sym_shrd] = ACTIONS(206),
    [anon_sym_shrl] = ACTIONS(206),
    [anon_sym_shrx] = ACTIONS(206),
    [anon_sym_vprord] = ACTIONS(206),
    [anon_sym_vprorq] = ACTIONS(206),
    [anon_sym_rorl] = ACTIONS(206),
    [anon_sym_roll] = ACTIONS(206),
    [anon_sym_push] = ACTIONS(206),
    [anon_sym_pushq] = ACTIONS(206),
    [anon_sym_pop] = ACTIONS(206),
    [anon_sym_movslq] = ACTIONS(206),
    [anon_sym_movsb] = ACTIONS(206),
    [anon_sym_rep] = ACTIONS(206),
    [anon_sym_repz] = ACTIONS(206),
    [anon_sym_repnz] = ACTIONS(206),
    [anon_sym_rex] = ACTIONS(206),
    [anon_sym_rex_DOTWB] = ACTIONS(206),
    [anon_sym_rex_DOTWRB] = ACTIONS(206),
    [anon_sym_rex_DOTRXB] = ACTIONS(206),
    [anon_sym_rex_DOTB] = ACTIONS(206),
    [anon_sym_rex_DOTWRXB] = ACTIONS(206),
    [anon_sym_rex_DOTXB] = ACTIONS(206),
    [anon_sym_rex_DOTW] = ACTIONS(206),
    [anon_sym_rex_DOTRB] = ACTIONS(206),
    [anon_sym_xgetbv] = ACTIONS(206),
    [anon_sym_fs] = ACTIONS(206),
    [anon_sym_kmovw] = ACTIONS(206),
    [anon_sym_adcx] = ACTIONS(206),
    [anon_sym_adox] = ACTIONS(206),
    [anon_sym_aesdec] = ACTIONS(206),
    [anon_sym_aesdeclast] = ACTIONS(206),
    [anon_sym_aesenc] = ACTIONS(206),
    [anon_sym_aesenclast] = ACTIONS(206),
    [anon_sym_vaesenc] = ACTIONS(206),
    [anon_sym_vaesenclast] = ACTIONS(206),
    [anon_sym_aeskeygenassist] = ACTIONS(206),
    [anon_sym_vblendps] = ACTIONS(206),
    [anon_sym_vblendvps] = ACTIONS(206),
    [anon_sym_vcvtusi2sd] = ACTIONS(206),
    [anon_sym_vdivsd] = ACTIONS(206),
    [anon_sym_vmovaps] = ACTIONS(206),
    [anon_sym_vmovapd] = ACTIONS(206),
    [anon_sym_vmovss] = ACTIONS(206),
    [anon_sym_vmovdqu] = ACTIONS(206),
    [anon_sym_vmovdqu64] = ACTIONS(206),
    [anon_sym_vmovdqu32] = ACTIONS(206),
    [anon_sym_vmovdqa] = ACTIONS(206),
    [anon_sym_vmovdqa32] = ACTIONS(206),
    [anon_sym_vmovdqa64] = ACTIONS(206),
    [anon_sym_vmovq] = ACTIONS(206),
    [anon_sym_vmovups] = ACTIONS(206),
    [anon_sym_vmovd] = ACTIONS(206),
    [anon_sym_vmovsd] = ACTIONS(206),
    [anon_sym_vmulsd] = ACTIONS(206),
    [anon_sym_vpackusdw] = ACTIONS(206),
    [anon_sym_vpaddd] = ACTIONS(206),
    [anon_sym_vpaddb] = ACTIONS(206),
    [anon_sym_vpaddq] = ACTIONS(206),
    [anon_sym_vpaddw] = ACTIONS(206),
    [anon_sym_vpalignr] = ACTIONS(206),
    [anon_sym_vpcmpgtd] = ACTIONS(206),
    [anon_sym_vpextrw] = ACTIONS(206),
    [anon_sym_vpinsrw] = ACTIONS(206),
    [anon_sym_vpinsrd] = ACTIONS(206),
    [anon_sym_vpinsrq] = ACTIONS(206),
    [anon_sym_vpinsrb] = ACTIONS(206),
    [anon_sym_vpmaddubsw] = ACTIONS(206),
    [anon_sym_vpmaddwd] = ACTIONS(206),
    [anon_sym_vpmullw] = ACTIONS(206),
    [anon_sym_vpmuludq] = ACTIONS(206),
    [anon_sym_vpor] = ACTIONS(206),
    [anon_sym_vpshufb] = ACTIONS(206),
    [anon_sym_vpshufd] = ACTIONS(206),
    [anon_sym_vpslldq] = ACTIONS(206),
    [anon_sym_vpslld] = ACTIONS(206),
    [anon_sym_vpsllq] = ACTIONS(206),
    [anon_sym_vpsllw] = ACTIONS(206),
    [anon_sym_vpsrldq] = ACTIONS(206),
    [anon_sym_vpsrld] = ACTIONS(206),
    [anon_sym_vpsrlq] = ACTIONS(206),
    [anon_sym_vpsrlw] = ACTIONS(206),
    [anon_sym_vpsubusw] = ACTIONS(206),
    [anon_sym_vpsubq] = ACTIONS(206),
    [anon_sym_vpsubd] = ACTIONS(206),
    [anon_sym_vpsubw] = ACTIONS(206),
    [anon_sym_vshufps] = ACTIONS(206),
    [anon_sym_vsubsd] = ACTIONS(206),
    [anon_sym_vucomisd] = ACTIONS(206),
    [anon_sym_vucomiss] = ACTIONS(206),
    [anon_sym_vunpckhpd] = ACTIONS(206),
    [anon_sym_vunpckhps] = ACTIONS(206),
    [anon_sym_vunpcklpd] = ACTIONS(206),
    [anon_sym_vunpcklps] = ACTIONS(206),
    [anon_sym_vbroadcastss] = ACTIONS(206),
    [anon_sym_vinsertf128] = ACTIONS(206),
    [anon_sym_vperm2f128] = ACTIONS(206),
    [anon_sym_vzeroall] = ACTIONS(206),
    [anon_sym_vzeroupper] = ACTIONS(206),
    [anon_sym_vshufi32x4] = ACTIONS(206),
    [anon_sym_vshufi64x2] = ACTIONS(206),
    [anon_sym_vpblendmd] = ACTIONS(206),
    [anon_sym_vextracti128] = ACTIONS(206),
    [anon_sym_vextracti32x4] = ACTIONS(206),
    [anon_sym_vinserti128] = ACTIONS(206),
    [anon_sym_vinserti32x4] = ACTIONS(206),
    [anon_sym_vinserti64x4] = ACTIONS(206),
    [anon_sym_vpblendd] = ACTIONS(206),
    [anon_sym_vpbroadcastq] = ACTIONS(206),
    [anon_sym_vpbroadcastd] = ACTIONS(206),
    [anon_sym_vbroadcasti128] = ACTIONS(206),
    [anon_sym_vbroadcasti32x4] = ACTIONS(206),
    [anon_sym_vperm2i128] = ACTIONS(206),
    [anon_sym_vpermd] = ACTIONS(206),
    [anon_sym_vpermq] = ACTIONS(206),
    [anon_sym_vpermt2d] = ACTIONS(206),
    [anon_sym_vpermi2d] = ACTIONS(206),
    [anon_sym_tzcnt] = ACTIONS(206),
    [anon_sym_rorx] = ACTIONS(206),
    [anon_sym_psubd] = ACTIONS(206),
    [anon_sym_pmaddwd] = ACTIONS(206),
    [anon_sym_pxor] = ACTIONS(206),
    [anon_sym_psrad] = ACTIONS(206),
    [anon_sym_pslld] = ACTIONS(206),
    [anon_sym_pcmpgtd] = ACTIONS(206),
    [anon_sym_pcmpeqd] = ACTIONS(206),
    [anon_sym_por] = ACTIONS(206),
    [anon_sym_paddw] = ACTIONS(206),
    [anon_sym_psubusw] = ACTIONS(206),
    [anon_sym_pcmpeqb] = ACTIONS(206),
    [anon_sym_psubusb] = ACTIONS(206),
    [anon_sym_psrld] = ACTIONS(206),
    [anon_sym_psrlw] = ACTIONS(206),
    [anon_sym_psllq] = ACTIONS(206),
    [anon_sym_paddd] = ACTIONS(206),
    [anon_sym_psrlq] = ACTIONS(206),
    [anon_sym_psubb] = ACTIONS(206),
    [anon_sym_maxss] = ACTIONS(206),
    [anon_sym_pmovmskb] = ACTIONS(206),
    [anon_sym_pinsrw] = ACTIONS(206),
    [anon_sym_minss] = ACTIONS(206),
    [anon_sym_prefetcht1] = ACTIONS(206),
    [anon_sym_prefetcht0] = ACTIONS(206),
    [anon_sym_pextrw] = ACTIONS(206),
    [anon_sym_ucomiss] = ACTIONS(206),
    [anon_sym_shufps] = ACTIONS(206),
    [anon_sym_addsd] = ACTIONS(206),
    [anon_sym_paddq] = ACTIONS(206),
    [anon_sym_psubq] = ACTIONS(206),
    [anon_sym_pshuflw] = ACTIONS(206),
    [anon_sym_pmuludq] = ACTIONS(206),
    [anon_sym_pshufd] = ACTIONS(206),
    [anon_sym_minsd] = ACTIONS(206),
    [anon_sym_pshufhw] = ACTIONS(206),
    [anon_sym_mfence] = ACTIONS(206),
    [anon_sym_maxsd] = ACTIONS(206),
    [anon_sym_ucomisd] = ACTIONS(206),
    [anon_sym_shufpd] = ACTIONS(206),
    [anon_sym_pslldq] = ACTIONS(206),
    [anon_sym_unpckhpd] = ACTIONS(206),
    [anon_sym_psrldq] = ACTIONS(206),
    [anon_sym_palignr] = ACTIONS(206),
    [anon_sym_pshufb] = ACTIONS(206),
    [anon_sym_pmaddubsw] = ACTIONS(206),
    [anon_sym_pinsrb] = ACTIONS(206),
    [anon_sym_pblendw] = ACTIONS(206),
    [anon_sym_pextrq] = ACTIONS(206),
    [anon_sym_blendvps] = ACTIONS(206),
    [anon_sym_pextrb] = ACTIONS(206),
    [anon_sym_pinsrd] = ACTIONS(206),
    [anon_sym_femms] = ACTIONS(206),
    [anon_sym_f] = ACTIONS(206),
    [aux_sym_operand_token1] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_PERCENTss] = ACTIONS(206),
    [anon_sym_PERCENTcs] = ACTIONS(206),
    [anon_sym_PERCENTds] = ACTIONS(206),
    [anon_sym_PERCENTes] = ACTIONS(206),
    [anon_sym_PERCENTfs] = ACTIONS(206),
    [anon_sym_PERCENTgs] = ACTIONS(206),
    [anon_sym_PERCENTrax] = ACTIONS(206),
    [anon_sym_PERCENTrbx] = ACTIONS(206),
    [anon_sym_PERCENTrcx] = ACTIONS(206),
    [anon_sym_PERCENTrdx] = ACTIONS(206),
    [anon_sym_PERCENTrsi] = ACTIONS(206),
    [anon_sym_PERCENTrdi] = ACTIONS(206),
    [anon_sym_PERCENTrbp] = ACTIONS(206),
    [anon_sym_PERCENTrsp] = ACTIONS(206),
    [anon_sym_PERCENTr8] = ACTIONS(206),
    [anon_sym_PERCENTr9] = ACTIONS(206),
    [anon_sym_PERCENTr10] = ACTIONS(206),
    [anon_sym_PERCENTr11] = ACTIONS(206),
    [anon_sym_PERCENTr12] = ACTIONS(206),
    [anon_sym_PERCENTr13] = ACTIONS(206),
    [anon_sym_PERCENTr14] = ACTIONS(206),
    [anon_sym_PERCENTr15] = ACTIONS(206),
    [anon_sym_PERCENTeax] = ACTIONS(206),
    [anon_sym_PERCENTecx] = ACTIONS(206),
    [anon_sym_PERCENTedx] = ACTIONS(206),
    [anon_sym_PERCENTebx] = ACTIONS(206),
    [anon_sym_PERCENTesi] = ACTIONS(206),
    [anon_sym_PERCENTedi] = ACTIONS(206),
    [anon_sym_PERCENTebp] = ACTIONS(206),
    [anon_sym_PERCENTesp] = ACTIONS(206),
    [anon_sym_PERCENTr8d] = ACTIONS(206),
    [anon_sym_PERCENTr9d] = ACTIONS(206),
    [anon_sym_PERCENTr10d] = ACTIONS(206),
    [anon_sym_PERCENTr11d] = ACTIONS(206),
    [anon_sym_PERCENTr12d] = ACTIONS(206),
    [anon_sym_PERCENTr13d] = ACTIONS(206),
    [anon_sym_PERCENTr14d] = ACTIONS(206),
    [anon_sym_PERCENTr15d] = ACTIONS(206),
    [anon_sym_PERCENTax] = ACTIONS(206),
    [anon_sym_PERCENTcx] = ACTIONS(206),
    [anon_sym_PERCENTdx] = ACTIONS(206),
    [anon_sym_PERCENTbx] = ACTIONS(206),
    [anon_sym_PERCENTsi] = ACTIONS(206),
    [anon_sym_PERCENTdi] = ACTIONS(206),
    [anon_sym_PERCENTsp] = ACTIONS(206),
    [anon_sym_PERCENTbp] = ACTIONS(206),
    [anon_sym_PERCENTr8w] = ACTIONS(206),
    [anon_sym_PERCENTr9w] = ACTIONS(206),
    [anon_sym_PERCENTr10w] = ACTIONS(206),
    [anon_sym_PERCENTr11w] = ACTIONS(206),
    [anon_sym_PERCENTr12w] = ACTIONS(206),
    [anon_sym_PERCENTr13w] = ACTIONS(206),
    [anon_sym_PERCENTr14w] = ACTIONS(206),
    [anon_sym_PERCENTr15w] = ACTIONS(206),
    [anon_sym_PERCENTal] = ACTIONS(206),
    [anon_sym_PERCENTcl] = ACTIONS(206),
    [anon_sym_PERCENTdl] = ACTIONS(206),
    [anon_sym_PERCENTbl] = ACTIONS(206),
    [anon_sym_PERCENTsil] = ACTIONS(206),
    [anon_sym_PERCENTdil] = ACTIONS(206),
    [anon_sym_PERCENTspl] = ACTIONS(206),
    [anon_sym_PERCENTbpl] = ACTIONS(206),
    [anon_sym_PERCENTr8b] = ACTIONS(206),
    [anon_sym_PERCENTr9b] = ACTIONS(206),
    [anon_sym_PERCENTr10b] = ACTIONS(206),
    [anon_sym_PERCENTr11b] = ACTIONS(206),
    [anon_sym_PERCENTr12b] = ACTIONS(206),
    [anon_sym_PERCENTr13b] = ACTIONS(206),
    [anon_sym_PERCENTr14b] = ACTIONS(206),
    [anon_sym_PERCENTr15b] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_movsq] = ACTIONS(206),
    [anon_sym_cmpsb] = ACTIONS(206),
    [anon_sym_cmpxchg] = ACTIONS(206),
    [anon_sym_movsl] = ACTIONS(206),
    [anon_sym_callq] = ACTIONS(206),
    [anon_sym_ja] = ACTIONS(206),
    [anon_sym_jae] = ACTIONS(206),
    [anon_sym_jb] = ACTIONS(206),
    [anon_sym_jbe] = ACTIONS(206),
    [anon_sym_je] = ACTIONS(206),
    [anon_sym_jg] = ACTIONS(206),
    [anon_sym_jge] = ACTIONS(206),
    [anon_sym_jl] = ACTIONS(206),
    [anon_sym_jle] = ACTIONS(206),
    [anon_sym_jmp] = ACTIONS(206),
    [anon_sym_jmpq] = ACTIONS(206),
    [anon_sym_jne] = ACTIONS(206),
    [anon_sym_jno] = ACTIONS(206),
    [anon_sym_jns] = ACTIONS(206),
    [anon_sym_jo] = ACTIONS(206),
    [anon_sym_jp] = ACTIONS(206),
    [anon_sym_jrcxz] = ACTIONS(206),
    [anon_sym_js] = ACTIONS(206),
    [anon_sym_notrack] = ACTIONS(206),
    [anon_sym_PERCENTcr0] = ACTIONS(206),
    [anon_sym_PERCENTcr2] = ACTIONS(206),
    [anon_sym_PERCENTcr3] = ACTIONS(206),
    [anon_sym_PERCENTcr4] = ACTIONS(206),
    [anon_sym_PERCENTrip] = ACTIONS(206),
    [anon_sym_PERCENTeip] = ACTIONS(206),
    [anon_sym_PERCENTip] = ACTIONS(206),
    [anon_sym_PERCENTst] = ACTIONS(206),
    [anon_sym_PERCENT] = ACTIONS(206),
  },
  [14] = {
    [aux_sym_comment_token1] = ACTIONS(210),
    [aux_sym_comment_token2] = ACTIONS(210),
    [sym__line_break] = ACTIONS(212),
    [anon_sym_adc] = ACTIONS(210),
    [anon_sym_add] = ACTIONS(210),
    [anon_sym_addq] = ACTIONS(210),
    [anon_sym_addl] = ACTIONS(210),
    [anon_sym_addss] = ACTIONS(210),
    [anon_sym_addw] = ACTIONS(210),
    [anon_sym_addb] = ACTIONS(210),
    [anon_sym_cmp] = ACTIONS(210),
    [anon_sym_cmpb] = ACTIONS(210),
    [anon_sym_cmpw] = ACTIONS(210),
    [anon_sym_cmpl] = ACTIONS(210),
    [anon_sym_cmpq] = ACTIONS(210),
    [anon_sym_comiss] = ACTIONS(210),
    [anon_sym_comisd] = ACTIONS(210),
    [anon_sym_inc] = ACTIONS(210),
    [anon_sym_incl] = ACTIONS(210),
    [anon_sym_dec] = ACTIONS(210),
    [anon_sym_div] = ACTIONS(210),
    [anon_sym_divq] = ACTIONS(210),
    [anon_sym_divl] = ACTIONS(210),
    [anon_sym_divss] = ACTIONS(210),
    [anon_sym_divsd] = ACTIONS(210),
    [anon_sym_idiv] = ACTIONS(210),
    [anon_sym_idivl] = ACTIONS(210),
    [anon_sym_sub] = ACTIONS(210),
    [anon_sym_subq] = ACTIONS(210),
    [anon_sym_subl] = ACTIONS(210),
    [anon_sym_subss] = ACTIONS(210),
    [anon_sym_subw] = ACTIONS(210),
    [anon_sym_subb] = ACTIONS(210),
    [anon_sym_subsd] = ACTIONS(210),
    [anon_sym_subpd] = ACTIONS(210),
    [anon_sym_sbb] = ACTIONS(210),
    [anon_sym_mul] = ACTIONS(210),
    [anon_sym_mulq] = ACTIONS(210),
    [anon_sym_mull] = ACTIONS(210),
    [anon_sym_mulss] = ACTIONS(210),
    [anon_sym_mulw] = ACTIONS(210),
    [anon_sym_mulb] = ACTIONS(210),
    [anon_sym_mulsd] = ACTIONS(210),
    [anon_sym_mulx] = ACTIONS(210),
    [anon_sym_imul] = ACTIONS(210),
    [anon_sym_neg] = ACTIONS(210),
    [anon_sym_negl] = ACTIONS(210),
    [anon_sym_negq] = ACTIONS(210),
    [anon_sym_fmulp] = ACTIONS(210),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(210),
    [anon_sym_pclmullqlqdq] = ACTIONS(210),
    [anon_sym_pclmullqhqdq] = ACTIONS(210),
    [anon_sym_vpclmullqhqdq] = ACTIONS(210),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(210),
    [anon_sym_pclmulhqhqdq] = ACTIONS(210),
    [anon_sym_vpclmullqlqdq] = ACTIONS(210),
    [anon_sym_bsf] = ACTIONS(210),
    [anon_sym_bsr] = ACTIONS(210),
    [anon_sym_bts] = ACTIONS(210),
    [anon_sym_bt] = ACTIONS(210),
    [anon_sym_btr] = ACTIONS(210),
    [anon_sym_btl] = ACTIONS(210),
    [anon_sym_setne] = ACTIONS(210),
    [anon_sym_setb] = ACTIONS(210),
    [anon_sym_sete] = ACTIONS(210),
    [anon_sym_setbe] = ACTIONS(210),
    [anon_sym_seta] = ACTIONS(210),
    [anon_sym_setge] = ACTIONS(210),
    [anon_sym_setae] = ACTIONS(210),
    [anon_sym_setl] = ACTIONS(210),
    [anon_sym_setle] = ACTIONS(210),
    [anon_sym_setg] = ACTIONS(210),
    [anon_sym_seto] = ACTIONS(210),
    [anon_sym_setnp] = ACTIONS(210),
    [anon_sym_setp] = ACTIONS(210),
    [anon_sym_setns] = ACTIONS(210),
    [anon_sym_test] = ACTIONS(210),
    [anon_sym_testb] = ACTIONS(210),
    [anon_sym_testl] = ACTIONS(210),
    [anon_sym_knotw] = ACTIONS(210),
    [anon_sym_vpcmpltud] = ACTIONS(210),
    [anon_sym_gs] = ACTIONS(210),
    [anon_sym_re] = ACTIONS(210),
    [anon_sym_ss] = ACTIONS(210),
    [anon_sym_leaveq] = ACTIONS(210),
    [anon_sym_retq] = ACTIONS(210),
    [anon_sym_bswap] = ACTIONS(210),
    [anon_sym_cbtw] = ACTIONS(210),
    [anon_sym_cltd] = ACTIONS(210),
    [anon_sym_cltq] = ACTIONS(210),
    [anon_sym_cmovbe] = ACTIONS(210),
    [anon_sym_cmovl] = ACTIONS(210),
    [anon_sym_cmovae] = ACTIONS(210),
    [anon_sym_cmovo] = ACTIONS(210),
    [anon_sym_cmovne] = ACTIONS(210),
    [anon_sym_cmovns] = ACTIONS(210),
    [anon_sym_cmovg] = ACTIONS(210),
    [anon_sym_cmovp] = ACTIONS(210),
    [anon_sym_cmove] = ACTIONS(210),
    [anon_sym_cmovge] = ACTIONS(210),
    [anon_sym_cmovb] = ACTIONS(210),
    [anon_sym_cmova] = ACTIONS(210),
    [anon_sym_cmovle] = ACTIONS(210),
    [anon_sym_cmovs] = ACTIONS(210),
    [anon_sym_cwtl] = ACTIONS(210),
    [anon_sym_cwtd] = ACTIONS(210),
    [anon_sym_cqto] = ACTIONS(210),
    [anon_sym_cvttsd2si] = ACTIONS(210),
    [anon_sym_cvtss2sd] = ACTIONS(210),
    [anon_sym_cvttss2si] = ACTIONS(210),
    [anon_sym_cvtsi2sd] = ACTIONS(210),
    [anon_sym_cvtsi2ss] = ACTIONS(210),
    [anon_sym_cvtsi2sdq] = ACTIONS(210),
    [anon_sym_cvtsi2sdl] = ACTIONS(210),
    [anon_sym_cvtsd2ss] = ACTIONS(210),
    [anon_sym_cvtsi2ssl] = ACTIONS(210),
    [anon_sym_mov] = ACTIONS(210),
    [anon_sym_movw] = ACTIONS(210),
    [anon_sym_movl] = ACTIONS(210),
    [anon_sym_movq] = ACTIONS(210),
    [anon_sym_movb] = ACTIONS(210),
    [anon_sym_movabs] = ACTIONS(210),
    [anon_sym_movsbw] = ACTIONS(210),
    [anon_sym_movsbq] = ACTIONS(210),
    [anon_sym_movsbl] = ACTIONS(210),
    [anon_sym_movswl] = ACTIONS(210),
    [anon_sym_movswq] = ACTIONS(210),
    [anon_sym_movzbw] = ACTIONS(210),
    [anon_sym_movzbq] = ACTIONS(210),
    [anon_sym_movzbl] = ACTIONS(210),
    [anon_sym_movzwl] = ACTIONS(210),
    [anon_sym_movaps] = ACTIONS(210),
    [anon_sym_movhlps] = ACTIONS(210),
    [anon_sym_movss] = ACTIONS(210),
    [anon_sym_movups] = ACTIONS(210),
    [anon_sym_movsd] = ACTIONS(210),
    [anon_sym_movd] = ACTIONS(210),
    [anon_sym_movhps] = ACTIONS(210),
    [anon_sym_movdqa] = ACTIONS(210),
    [anon_sym_movbe] = ACTIONS(210),
    [anon_sym_movapd] = ACTIONS(210),
    [anon_sym_movdqu] = ACTIONS(210),
    [anon_sym_xchg] = ACTIONS(210),
    [anon_sym_fildl] = ACTIONS(210),
    [anon_sym_fldt] = ACTIONS(210),
    [anon_sym_fstpl] = ACTIONS(210),
    [anon_sym_insb] = ACTIONS(210),
    [anon_sym_insl] = ACTIONS(210),
    [anon_sym_outsb] = ACTIONS(210),
    [anon_sym_outsl] = ACTIONS(210),
    [anon_sym_or] = ACTIONS(210),
    [anon_sym_orq] = ACTIONS(210),
    [anon_sym_orl] = ACTIONS(210),
    [anon_sym_orb] = ACTIONS(210),
    [anon_sym_orw] = ACTIONS(210),
    [anon_sym_xor] = ACTIONS(210),
    [anon_sym_xorl] = ACTIONS(210),
    [anon_sym_xorw] = ACTIONS(210),
    [anon_sym_xorps] = ACTIONS(210),
    [anon_sym_xorpd] = ACTIONS(210),
    [anon_sym_vxorps] = ACTIONS(210),
    [anon_sym_vpxord] = ACTIONS(210),
    [anon_sym_vpxor] = ACTIONS(210),
    [anon_sym_and] = ACTIONS(210),
    [anon_sym_andq] = ACTIONS(210),
    [anon_sym_andl] = ACTIONS(210),
    [anon_sym_andw] = ACTIONS(210),
    [anon_sym_andb] = ACTIONS(210),
    [anon_sym_andn] = ACTIONS(210),
    [anon_sym_andpd] = ACTIONS(210),
    [anon_sym_pand] = ACTIONS(210),
    [anon_sym_pandn] = ACTIONS(210),
    [anon_sym_andps] = ACTIONS(210),
    [anon_sym_vpand] = ACTIONS(210),
    [anon_sym_not] = ACTIONS(210),
    [anon_sym_notl] = ACTIONS(210),
    [anon_sym_notw] = ACTIONS(210),
    [anon_sym_cpuid] = ACTIONS(210),
    [anon_sym_lea] = ACTIONS(210),
    [anon_sym_popcnt] = ACTIONS(210),
    [anon_sym_nop] = ACTIONS(210),
    [anon_sym_nopl] = ACTIONS(210),
    [anon_sym_nopw] = ACTIONS(210),
    [anon_sym_ud2] = ACTIONS(210),
    [anon_sym_data16] = ACTIONS(210),
    [anon_sym_sha1rnds4] = ACTIONS(210),
    [anon_sym_addr32] = ACTIONS(210),
    [anon_sym_sha1msg1] = ACTIONS(210),
    [anon_sym_sha1msg2] = ACTIONS(210),
    [anon_sym_sha1nexte] = ACTIONS(210),
    [anon_sym_endbr64] = ACTIONS(210),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(210),
    [anon_sym_packuswb] = ACTIONS(210),
    [anon_sym_punpckhbw] = ACTIONS(210),
    [anon_sym_punpckhdq] = ACTIONS(210),
    [anon_sym_punpckhwd] = ACTIONS(210),
    [anon_sym_punpcklbw] = ACTIONS(210),
    [anon_sym_punpckldq] = ACTIONS(210),
    [anon_sym_punpcklwd] = ACTIONS(210),
    [anon_sym_vpunpcklwd] = ACTIONS(210),
    [anon_sym_vpunpckldq] = ACTIONS(210),
    [anon_sym_punpcklqdq] = ACTIONS(210),
    [anon_sym_punpckhqdq] = ACTIONS(210),
    [anon_sym_vpunpckhqdq] = ACTIONS(210),
    [anon_sym_vpunpckhdq] = ACTIONS(210),
    [anon_sym_vpunpcklqdq] = ACTIONS(210),
    [anon_sym_vpunpckhwd] = ACTIONS(210),
    [anon_sym_rol] = ACTIONS(210),
    [anon_sym_ror] = ACTIONS(210),
    [anon_sym_sar] = ACTIONS(210),
    [anon_sym_sarl] = ACTIONS(210),
    [anon_sym_sarx] = ACTIONS(210),
    [anon_sym_shl] = ACTIONS(210),
    [anon_sym_shll] = ACTIONS(210),
    [anon_sym_shld] = ACTIONS(210),
    [anon_sym_shlx] = ACTIONS(210),
    [anon_sym_shlq] = ACTIONS(210),
    [anon_sym_shr] = ACTIONS(210),
    [anon_sym_shrq] = ACTIONS(210),
    [anon_sym_shrd] = ACTIONS(210),
    [anon_sym_shrl] = ACTIONS(210),
    [anon_sym_shrx] = ACTIONS(210),
    [anon_sym_vprord] = ACTIONS(210),
    [anon_sym_vprorq] = ACTIONS(210),
    [anon_sym_rorl] = ACTIONS(210),
    [anon_sym_roll] = ACTIONS(210),
    [anon_sym_push] = ACTIONS(210),
    [anon_sym_pushq] = ACTIONS(210),
    [anon_sym_pop] = ACTIONS(210),
    [anon_sym_movslq] = ACTIONS(210),
    [anon_sym_movsb] = ACTIONS(210),
    [anon_sym_rep] = ACTIONS(210),
    [anon_sym_repz] = ACTIONS(210),
    [anon_sym_repnz] = ACTIONS(210),
    [anon_sym_rex] = ACTIONS(210),
    [anon_sym_rex_DOTWB] = ACTIONS(210),
    [anon_sym_rex_DOTWRB] = ACTIONS(210),
    [anon_sym_rex_DOTRXB] = ACTIONS(210),
    [anon_sym_rex_DOTB] = ACTIONS(210),
    [anon_sym_rex_DOTWRXB] = ACTIONS(210),
    [anon_sym_rex_DOTXB] = ACTIONS(210),
    [anon_sym_rex_DOTW] = ACTIONS(210),
    [anon_sym_rex_DOTRB] = ACTIONS(210),
    [anon_sym_xgetbv] = ACTIONS(210),
    [anon_sym_fs] = ACTIONS(210),
    [anon_sym_kmovw] = ACTIONS(210),
    [anon_sym_adcx] = ACTIONS(210),
    [anon_sym_adox] = ACTIONS(210),
    [anon_sym_aesdec] = ACTIONS(210),
    [anon_sym_aesdeclast] = ACTIONS(210),
    [anon_sym_aesenc] = ACTIONS(210),
    [anon_sym_aesenclast] = ACTIONS(210),
    [anon_sym_vaesenc] = ACTIONS(210),
    [anon_sym_vaesenclast] = ACTIONS(210),
    [anon_sym_aeskeygenassist] = ACTIONS(210),
    [anon_sym_vblendps] = ACTIONS(210),
    [anon_sym_vblendvps] = ACTIONS(210),
    [anon_sym_vcvtusi2sd] = ACTIONS(210),
    [anon_sym_vdivsd] = ACTIONS(210),
    [anon_sym_vmovaps] = ACTIONS(210),
    [anon_sym_vmovapd] = ACTIONS(210),
    [anon_sym_vmovss] = ACTIONS(210),
    [anon_sym_vmovdqu] = ACTIONS(210),
    [anon_sym_vmovdqu64] = ACTIONS(210),
    [anon_sym_vmovdqu32] = ACTIONS(210),
    [anon_sym_vmovdqa] = ACTIONS(210),
    [anon_sym_vmovdqa32] = ACTIONS(210),
    [anon_sym_vmovdqa64] = ACTIONS(210),
    [anon_sym_vmovq] = ACTIONS(210),
    [anon_sym_vmovups] = ACTIONS(210),
    [anon_sym_vmovd] = ACTIONS(210),
    [anon_sym_vmovsd] = ACTIONS(210),
    [anon_sym_vmulsd] = ACTIONS(210),
    [anon_sym_vpackusdw] = ACTIONS(210),
    [anon_sym_vpaddd] = ACTIONS(210),
    [anon_sym_vpaddb] = ACTIONS(210),
    [anon_sym_vpaddq] = ACTIONS(210),
    [anon_sym_vpaddw] = ACTIONS(210),
    [anon_sym_vpalignr] = ACTIONS(210),
    [anon_sym_vpcmpgtd] = ACTIONS(210),
    [anon_sym_vpextrw] = ACTIONS(210),
    [anon_sym_vpinsrw] = ACTIONS(210),
    [anon_sym_vpinsrd] = ACTIONS(210),
    [anon_sym_vpinsrq] = ACTIONS(210),
    [anon_sym_vpinsrb] = ACTIONS(210),
    [anon_sym_vpmaddubsw] = ACTIONS(210),
    [anon_sym_vpmaddwd] = ACTIONS(210),
    [anon_sym_vpmullw] = ACTIONS(210),
    [anon_sym_vpmuludq] = ACTIONS(210),
    [anon_sym_vpor] = ACTIONS(210),
    [anon_sym_vpshufb] = ACTIONS(210),
    [anon_sym_vpshufd] = ACTIONS(210),
    [anon_sym_vpslldq] = ACTIONS(210),
    [anon_sym_vpslld] = ACTIONS(210),
    [anon_sym_vpsllq] = ACTIONS(210),
    [anon_sym_vpsllw] = ACTIONS(210),
    [anon_sym_vpsrldq] = ACTIONS(210),
    [anon_sym_vpsrld] = ACTIONS(210),
    [anon_sym_vpsrlq] = ACTIONS(210),
    [anon_sym_vpsrlw] = ACTIONS(210),
    [anon_sym_vpsubusw] = ACTIONS(210),
    [anon_sym_vpsubq] = ACTIONS(210),
    [anon_sym_vpsubd] = ACTIONS(210),
    [anon_sym_vpsubw] = ACTIONS(210),
    [anon_sym_vshufps] = ACTIONS(210),
    [anon_sym_vsubsd] = ACTIONS(210),
    [anon_sym_vucomisd] = ACTIONS(210),
    [anon_sym_vucomiss] = ACTIONS(210),
    [anon_sym_vunpckhpd] = ACTIONS(210),
    [anon_sym_vunpckhps] = ACTIONS(210),
    [anon_sym_vunpcklpd] = ACTIONS(210),
    [anon_sym_vunpcklps] = ACTIONS(210),
    [anon_sym_vbroadcastss] = ACTIONS(210),
    [anon_sym_vinsertf128] = ACTIONS(210),
    [anon_sym_vperm2f128] = ACTIONS(210),
    [anon_sym_vzeroall] = ACTIONS(210),
    [anon_sym_vzeroupper] = ACTIONS(210),
    [anon_sym_vshufi32x4] = ACTIONS(210),
    [anon_sym_vshufi64x2] = ACTIONS(210),
    [anon_sym_vpblendmd] = ACTIONS(210),
    [anon_sym_vextracti128] = ACTIONS(210),
    [anon_sym_vextracti32x4] = ACTIONS(210),
    [anon_sym_vinserti128] = ACTIONS(210),
    [anon_sym_vinserti32x4] = ACTIONS(210),
    [anon_sym_vinserti64x4] = ACTIONS(210),
    [anon_sym_vpblendd] = ACTIONS(210),
    [anon_sym_vpbroadcastq] = ACTIONS(210),
    [anon_sym_vpbroadcastd] = ACTIONS(210),
    [anon_sym_vbroadcasti128] = ACTIONS(210),
    [anon_sym_vbroadcasti32x4] = ACTIONS(210),
    [anon_sym_vperm2i128] = ACTIONS(210),
    [anon_sym_vpermd] = ACTIONS(210),
    [anon_sym_vpermq] = ACTIONS(210),
    [anon_sym_vpermt2d] = ACTIONS(210),
    [anon_sym_vpermi2d] = ACTIONS(210),
    [anon_sym_tzcnt] = ACTIONS(210),
    [anon_sym_rorx] = ACTIONS(210),
    [anon_sym_psubd] = ACTIONS(210),
    [anon_sym_pmaddwd] = ACTIONS(210),
    [anon_sym_pxor] = ACTIONS(210),
    [anon_sym_psrad] = ACTIONS(210),
    [anon_sym_pslld] = ACTIONS(210),
    [anon_sym_pcmpgtd] = ACTIONS(210),
    [anon_sym_pcmpeqd] = ACTIONS(210),
    [anon_sym_por] = ACTIONS(210),
    [anon_sym_paddw] = ACTIONS(210),
    [anon_sym_psubusw] = ACTIONS(210),
    [anon_sym_pcmpeqb] = ACTIONS(210),
    [anon_sym_psubusb] = ACTIONS(210),
    [anon_sym_psrld] = ACTIONS(210),
    [anon_sym_psrlw] = ACTIONS(210),
    [anon_sym_psllq] = ACTIONS(210),
    [anon_sym_paddd] = ACTIONS(210),
    [anon_sym_psrlq] = ACTIONS(210),
    [anon_sym_psubb] = ACTIONS(210),
    [anon_sym_maxss] = ACTIONS(210),
    [anon_sym_pmovmskb] = ACTIONS(210),
    [anon_sym_pinsrw] = ACTIONS(210),
    [anon_sym_minss] = ACTIONS(210),
    [anon_sym_prefetcht1] = ACTIONS(210),
    [anon_sym_prefetcht0] = ACTIONS(210),
    [anon_sym_pextrw] = ACTIONS(210),
    [anon_sym_ucomiss] = ACTIONS(210),
    [anon_sym_shufps] = ACTIONS(210),
    [anon_sym_addsd] = ACTIONS(210),
    [anon_sym_paddq] = ACTIONS(210),
    [anon_sym_psubq] = ACTIONS(210),
    [anon_sym_pshuflw] = ACTIONS(210),
    [anon_sym_pmuludq] = ACTIONS(210),
    [anon_sym_pshufd] = ACTIONS(210),
    [anon_sym_minsd] = ACTIONS(210),
    [anon_sym_pshufhw] = ACTIONS(210),
    [anon_sym_mfence] = ACTIONS(210),
    [anon_sym_maxsd] = ACTIONS(210),
    [anon_sym_ucomisd] = ACTIONS(210),
    [anon_sym_shufpd] = ACTIONS(210),
    [anon_sym_pslldq] = ACTIONS(210),
    [anon_sym_unpckhpd] = ACTIONS(210),
    [anon_sym_psrldq] = ACTIONS(210),
    [anon_sym_palignr] = ACTIONS(210),
    [anon_sym_pshufb] = ACTIONS(210),
    [anon_sym_pmaddubsw] = ACTIONS(210),
    [anon_sym_pinsrb] = ACTIONS(210),
    [anon_sym_pblendw] = ACTIONS(210),
    [anon_sym_pextrq] = ACTIONS(210),
    [anon_sym_blendvps] = ACTIONS(210),
    [anon_sym_pextrb] = ACTIONS(210),
    [anon_sym_pinsrd] = ACTIONS(210),
    [anon_sym_femms] = ACTIONS(210),
    [anon_sym_f] = ACTIONS(210),
    [aux_sym_operand_token1] = ACTIONS(210),
    [anon_sym_LT] = ACTIONS(210),
    [anon_sym_DOLLAR] = ACTIONS(210),
    [anon_sym_PERCENTss] = ACTIONS(210),
    [anon_sym_PERCENTcs] = ACTIONS(210),
    [anon_sym_PERCENTds] = ACTIONS(210),
    [anon_sym_PERCENTes] = ACTIONS(210),
    [anon_sym_PERCENTfs] = ACTIONS(210),
    [anon_sym_PERCENTgs] = ACTIONS(210),
    [anon_sym_PERCENTrax] = ACTIONS(210),
    [anon_sym_PERCENTrbx] = ACTIONS(210),
    [anon_sym_PERCENTrcx] = ACTIONS(210),
    [anon_sym_PERCENTrdx] = ACTIONS(210),
    [anon_sym_PERCENTrsi] = ACTIONS(210),
    [anon_sym_PERCENTrdi] = ACTIONS(210),
    [anon_sym_PERCENTrbp] = ACTIONS(210),
    [anon_sym_PERCENTrsp] = ACTIONS(210),
    [anon_sym_PERCENTr8] = ACTIONS(210),
    [anon_sym_PERCENTr9] = ACTIONS(210),
    [anon_sym_PERCENTr10] = ACTIONS(210),
    [anon_sym_PERCENTr11] = ACTIONS(210),
    [anon_sym_PERCENTr12] = ACTIONS(210),
    [anon_sym_PERCENTr13] = ACTIONS(210),
    [anon_sym_PERCENTr14] = ACTIONS(210),
    [anon_sym_PERCENTr15] = ACTIONS(210),
    [anon_sym_PERCENTeax] = ACTIONS(210),
    [anon_sym_PERCENTecx] = ACTIONS(210),
    [anon_sym_PERCENTedx] = ACTIONS(210),
    [anon_sym_PERCENTebx] = ACTIONS(210),
    [anon_sym_PERCENTesi] = ACTIONS(210),
    [anon_sym_PERCENTedi] = ACTIONS(210),
    [anon_sym_PERCENTebp] = ACTIONS(210),
    [anon_sym_PERCENTesp] = ACTIONS(210),
    [anon_sym_PERCENTr8d] = ACTIONS(210),
    [anon_sym_PERCENTr9d] = ACTIONS(210),
    [anon_sym_PERCENTr10d] = ACTIONS(210),
    [anon_sym_PERCENTr11d] = ACTIONS(210),
    [anon_sym_PERCENTr12d] = ACTIONS(210),
    [anon_sym_PERCENTr13d] = ACTIONS(210),
    [anon_sym_PERCENTr14d] = ACTIONS(210),
    [anon_sym_PERCENTr15d] = ACTIONS(210),
    [anon_sym_PERCENTax] = ACTIONS(210),
    [anon_sym_PERCENTcx] = ACTIONS(210),
    [anon_sym_PERCENTdx] = ACTIONS(210),
    [anon_sym_PERCENTbx] = ACTIONS(210),
    [anon_sym_PERCENTsi] = ACTIONS(210),
    [anon_sym_PERCENTdi] = ACTIONS(210),
    [anon_sym_PERCENTsp] = ACTIONS(210),
    [anon_sym_PERCENTbp] = ACTIONS(210),
    [anon_sym_PERCENTr8w] = ACTIONS(210),
    [anon_sym_PERCENTr9w] = ACTIONS(210),
    [anon_sym_PERCENTr10w] = ACTIONS(210),
    [anon_sym_PERCENTr11w] = ACTIONS(210),
    [anon_sym_PERCENTr12w] = ACTIONS(210),
    [anon_sym_PERCENTr13w] = ACTIONS(210),
    [anon_sym_PERCENTr14w] = ACTIONS(210),
    [anon_sym_PERCENTr15w] = ACTIONS(210),
    [anon_sym_PERCENTal] = ACTIONS(210),
    [anon_sym_PERCENTcl] = ACTIONS(210),
    [anon_sym_PERCENTdl] = ACTIONS(210),
    [anon_sym_PERCENTbl] = ACTIONS(210),
    [anon_sym_PERCENTsil] = ACTIONS(210),
    [anon_sym_PERCENTdil] = ACTIONS(210),
    [anon_sym_PERCENTspl] = ACTIONS(210),
    [anon_sym_PERCENTbpl] = ACTIONS(210),
    [anon_sym_PERCENTr8b] = ACTIONS(210),
    [anon_sym_PERCENTr9b] = ACTIONS(210),
    [anon_sym_PERCENTr10b] = ACTIONS(210),
    [anon_sym_PERCENTr11b] = ACTIONS(210),
    [anon_sym_PERCENTr12b] = ACTIONS(210),
    [anon_sym_PERCENTr13b] = ACTIONS(210),
    [anon_sym_PERCENTr14b] = ACTIONS(210),
    [anon_sym_PERCENTr15b] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_movsq] = ACTIONS(210),
    [anon_sym_cmpsb] = ACTIONS(210),
    [anon_sym_cmpxchg] = ACTIONS(210),
    [anon_sym_movsl] = ACTIONS(210),
    [anon_sym_callq] = ACTIONS(210),
    [anon_sym_ja] = ACTIONS(210),
    [anon_sym_jae] = ACTIONS(210),
    [anon_sym_jb] = ACTIONS(210),
    [anon_sym_jbe] = ACTIONS(210),
    [anon_sym_je] = ACTIONS(210),
    [anon_sym_jg] = ACTIONS(210),
    [anon_sym_jge] = ACTIONS(210),
    [anon_sym_jl] = ACTIONS(210),
    [anon_sym_jle] = ACTIONS(210),
    [anon_sym_jmp] = ACTIONS(210),
    [anon_sym_jmpq] = ACTIONS(210),
    [anon_sym_jne] = ACTIONS(210),
    [anon_sym_jno] = ACTIONS(210),
    [anon_sym_jns] = ACTIONS(210),
    [anon_sym_jo] = ACTIONS(210),
    [anon_sym_jp] = ACTIONS(210),
    [anon_sym_jrcxz] = ACTIONS(210),
    [anon_sym_js] = ACTIONS(210),
    [anon_sym_notrack] = ACTIONS(210),
    [anon_sym_PERCENTcr0] = ACTIONS(210),
    [anon_sym_PERCENTcr2] = ACTIONS(210),
    [anon_sym_PERCENTcr3] = ACTIONS(210),
    [anon_sym_PERCENTcr4] = ACTIONS(210),
    [anon_sym_PERCENTrip] = ACTIONS(210),
    [anon_sym_PERCENTeip] = ACTIONS(210),
    [anon_sym_PERCENTip] = ACTIONS(210),
    [anon_sym_PERCENTst] = ACTIONS(210),
    [anon_sym_PERCENT] = ACTIONS(210),
  },
  [15] = {
    [aux_sym_comment_token1] = ACTIONS(214),
    [aux_sym_comment_token2] = ACTIONS(214),
    [sym__line_break] = ACTIONS(216),
    [anon_sym_adc] = ACTIONS(214),
    [anon_sym_add] = ACTIONS(214),
    [anon_sym_addq] = ACTIONS(214),
    [anon_sym_addl] = ACTIONS(214),
    [anon_sym_addss] = ACTIONS(214),
    [anon_sym_addw] = ACTIONS(214),
    [anon_sym_addb] = ACTIONS(214),
    [anon_sym_cmp] = ACTIONS(214),
    [anon_sym_cmpb] = ACTIONS(214),
    [anon_sym_cmpw] = ACTIONS(214),
    [anon_sym_cmpl] = ACTIONS(214),
    [anon_sym_cmpq] = ACTIONS(214),
    [anon_sym_comiss] = ACTIONS(214),
    [anon_sym_comisd] = ACTIONS(214),
    [anon_sym_inc] = ACTIONS(214),
    [anon_sym_incl] = ACTIONS(214),
    [anon_sym_dec] = ACTIONS(214),
    [anon_sym_div] = ACTIONS(214),
    [anon_sym_divq] = ACTIONS(214),
    [anon_sym_divl] = ACTIONS(214),
    [anon_sym_divss] = ACTIONS(214),
    [anon_sym_divsd] = ACTIONS(214),
    [anon_sym_idiv] = ACTIONS(214),
    [anon_sym_idivl] = ACTIONS(214),
    [anon_sym_sub] = ACTIONS(214),
    [anon_sym_subq] = ACTIONS(214),
    [anon_sym_subl] = ACTIONS(214),
    [anon_sym_subss] = ACTIONS(214),
    [anon_sym_subw] = ACTIONS(214),
    [anon_sym_subb] = ACTIONS(214),
    [anon_sym_subsd] = ACTIONS(214),
    [anon_sym_subpd] = ACTIONS(214),
    [anon_sym_sbb] = ACTIONS(214),
    [anon_sym_mul] = ACTIONS(214),
    [anon_sym_mulq] = ACTIONS(214),
    [anon_sym_mull] = ACTIONS(214),
    [anon_sym_mulss] = ACTIONS(214),
    [anon_sym_mulw] = ACTIONS(214),
    [anon_sym_mulb] = ACTIONS(214),
    [anon_sym_mulsd] = ACTIONS(214),
    [anon_sym_mulx] = ACTIONS(214),
    [anon_sym_imul] = ACTIONS(214),
    [anon_sym_neg] = ACTIONS(214),
    [anon_sym_negl] = ACTIONS(214),
    [anon_sym_negq] = ACTIONS(214),
    [anon_sym_fmulp] = ACTIONS(214),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(214),
    [anon_sym_pclmullqlqdq] = ACTIONS(214),
    [anon_sym_pclmullqhqdq] = ACTIONS(214),
    [anon_sym_vpclmullqhqdq] = ACTIONS(214),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(214),
    [anon_sym_pclmulhqhqdq] = ACTIONS(214),
    [anon_sym_vpclmullqlqdq] = ACTIONS(214),
    [anon_sym_bsf] = ACTIONS(214),
    [anon_sym_bsr] = ACTIONS(214),
    [anon_sym_bts] = ACTIONS(214),
    [anon_sym_bt] = ACTIONS(214),
    [anon_sym_btr] = ACTIONS(214),
    [anon_sym_btl] = ACTIONS(214),
    [anon_sym_setne] = ACTIONS(214),
    [anon_sym_setb] = ACTIONS(214),
    [anon_sym_sete] = ACTIONS(214),
    [anon_sym_setbe] = ACTIONS(214),
    [anon_sym_seta] = ACTIONS(214),
    [anon_sym_setge] = ACTIONS(214),
    [anon_sym_setae] = ACTIONS(214),
    [anon_sym_setl] = ACTIONS(214),
    [anon_sym_setle] = ACTIONS(214),
    [anon_sym_setg] = ACTIONS(214),
    [anon_sym_seto] = ACTIONS(214),
    [anon_sym_setnp] = ACTIONS(214),
    [anon_sym_setp] = ACTIONS(214),
    [anon_sym_setns] = ACTIONS(214),
    [anon_sym_test] = ACTIONS(214),
    [anon_sym_testb] = ACTIONS(214),
    [anon_sym_testl] = ACTIONS(214),
    [anon_sym_knotw] = ACTIONS(214),
    [anon_sym_vpcmpltud] = ACTIONS(214),
    [anon_sym_gs] = ACTIONS(214),
    [anon_sym_re] = ACTIONS(214),
    [anon_sym_ss] = ACTIONS(214),
    [anon_sym_leaveq] = ACTIONS(214),
    [anon_sym_retq] = ACTIONS(214),
    [anon_sym_bswap] = ACTIONS(214),
    [anon_sym_cbtw] = ACTIONS(214),
    [anon_sym_cltd] = ACTIONS(214),
    [anon_sym_cltq] = ACTIONS(214),
    [anon_sym_cmovbe] = ACTIONS(214),
    [anon_sym_cmovl] = ACTIONS(214),
    [anon_sym_cmovae] = ACTIONS(214),
    [anon_sym_cmovo] = ACTIONS(214),
    [anon_sym_cmovne] = ACTIONS(214),
    [anon_sym_cmovns] = ACTIONS(214),
    [anon_sym_cmovg] = ACTIONS(214),
    [anon_sym_cmovp] = ACTIONS(214),
    [anon_sym_cmove] = ACTIONS(214),
    [anon_sym_cmovge] = ACTIONS(214),
    [anon_sym_cmovb] = ACTIONS(214),
    [anon_sym_cmova] = ACTIONS(214),
    [anon_sym_cmovle] = ACTIONS(214),
    [anon_sym_cmovs] = ACTIONS(214),
    [anon_sym_cwtl] = ACTIONS(214),
    [anon_sym_cwtd] = ACTIONS(214),
    [anon_sym_cqto] = ACTIONS(214),
    [anon_sym_cvttsd2si] = ACTIONS(214),
    [anon_sym_cvtss2sd] = ACTIONS(214),
    [anon_sym_cvttss2si] = ACTIONS(214),
    [anon_sym_cvtsi2sd] = ACTIONS(214),
    [anon_sym_cvtsi2ss] = ACTIONS(214),
    [anon_sym_cvtsi2sdq] = ACTIONS(214),
    [anon_sym_cvtsi2sdl] = ACTIONS(214),
    [anon_sym_cvtsd2ss] = ACTIONS(214),
    [anon_sym_cvtsi2ssl] = ACTIONS(214),
    [anon_sym_mov] = ACTIONS(214),
    [anon_sym_movw] = ACTIONS(214),
    [anon_sym_movl] = ACTIONS(214),
    [anon_sym_movq] = ACTIONS(214),
    [anon_sym_movb] = ACTIONS(214),
    [anon_sym_movabs] = ACTIONS(214),
    [anon_sym_movsbw] = ACTIONS(214),
    [anon_sym_movsbq] = ACTIONS(214),
    [anon_sym_movsbl] = ACTIONS(214),
    [anon_sym_movswl] = ACTIONS(214),
    [anon_sym_movswq] = ACTIONS(214),
    [anon_sym_movzbw] = ACTIONS(214),
    [anon_sym_movzbq] = ACTIONS(214),
    [anon_sym_movzbl] = ACTIONS(214),
    [anon_sym_movzwl] = ACTIONS(214),
    [anon_sym_movaps] = ACTIONS(214),
    [anon_sym_movhlps] = ACTIONS(214),
    [anon_sym_movss] = ACTIONS(214),
    [anon_sym_movups] = ACTIONS(214),
    [anon_sym_movsd] = ACTIONS(214),
    [anon_sym_movd] = ACTIONS(214),
    [anon_sym_movhps] = ACTIONS(214),
    [anon_sym_movdqa] = ACTIONS(214),
    [anon_sym_movbe] = ACTIONS(214),
    [anon_sym_movapd] = ACTIONS(214),
    [anon_sym_movdqu] = ACTIONS(214),
    [anon_sym_xchg] = ACTIONS(214),
    [anon_sym_fildl] = ACTIONS(214),
    [anon_sym_fldt] = ACTIONS(214),
    [anon_sym_fstpl] = ACTIONS(214),
    [anon_sym_insb] = ACTIONS(214),
    [anon_sym_insl] = ACTIONS(214),
    [anon_sym_outsb] = ACTIONS(214),
    [anon_sym_outsl] = ACTIONS(214),
    [anon_sym_or] = ACTIONS(214),
    [anon_sym_orq] = ACTIONS(214),
    [anon_sym_orl] = ACTIONS(214),
    [anon_sym_orb] = ACTIONS(214),
    [anon_sym_orw] = ACTIONS(214),
    [anon_sym_xor] = ACTIONS(214),
    [anon_sym_xorl] = ACTIONS(214),
    [anon_sym_xorw] = ACTIONS(214),
    [anon_sym_xorps] = ACTIONS(214),
    [anon_sym_xorpd] = ACTIONS(214),
    [anon_sym_vxorps] = ACTIONS(214),
    [anon_sym_vpxord] = ACTIONS(214),
    [anon_sym_vpxor] = ACTIONS(214),
    [anon_sym_and] = ACTIONS(214),
    [anon_sym_andq] = ACTIONS(214),
    [anon_sym_andl] = ACTIONS(214),
    [anon_sym_andw] = ACTIONS(214),
    [anon_sym_andb] = ACTIONS(214),
    [anon_sym_andn] = ACTIONS(214),
    [anon_sym_andpd] = ACTIONS(214),
    [anon_sym_pand] = ACTIONS(214),
    [anon_sym_pandn] = ACTIONS(214),
    [anon_sym_andps] = ACTIONS(214),
    [anon_sym_vpand] = ACTIONS(214),
    [anon_sym_not] = ACTIONS(214),
    [anon_sym_notl] = ACTIONS(214),
    [anon_sym_notw] = ACTIONS(214),
    [anon_sym_cpuid] = ACTIONS(214),
    [anon_sym_lea] = ACTIONS(214),
    [anon_sym_popcnt] = ACTIONS(214),
    [anon_sym_nop] = ACTIONS(214),
    [anon_sym_nopl] = ACTIONS(214),
    [anon_sym_nopw] = ACTIONS(214),
    [anon_sym_ud2] = ACTIONS(214),
    [anon_sym_data16] = ACTIONS(214),
    [anon_sym_sha1rnds4] = ACTIONS(214),
    [anon_sym_addr32] = ACTIONS(214),
    [anon_sym_sha1msg1] = ACTIONS(214),
    [anon_sym_sha1msg2] = ACTIONS(214),
    [anon_sym_sha1nexte] = ACTIONS(214),
    [anon_sym_endbr64] = ACTIONS(214),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(214),
    [anon_sym_packuswb] = ACTIONS(214),
    [anon_sym_punpckhbw] = ACTIONS(214),
    [anon_sym_punpckhdq] = ACTIONS(214),
    [anon_sym_punpckhwd] = ACTIONS(214),
    [anon_sym_punpcklbw] = ACTIONS(214),
    [anon_sym_punpckldq] = ACTIONS(214),
    [anon_sym_punpcklwd] = ACTIONS(214),
    [anon_sym_vpunpcklwd] = ACTIONS(214),
    [anon_sym_vpunpckldq] = ACTIONS(214),
    [anon_sym_punpcklqdq] = ACTIONS(214),
    [anon_sym_punpckhqdq] = ACTIONS(214),
    [anon_sym_vpunpckhqdq] = ACTIONS(214),
    [anon_sym_vpunpckhdq] = ACTIONS(214),
    [anon_sym_vpunpcklqdq] = ACTIONS(214),
    [anon_sym_vpunpckhwd] = ACTIONS(214),
    [anon_sym_rol] = ACTIONS(214),
    [anon_sym_ror] = ACTIONS(214),
    [anon_sym_sar] = ACTIONS(214),
    [anon_sym_sarl] = ACTIONS(214),
    [anon_sym_sarx] = ACTIONS(214),
    [anon_sym_shl] = ACTIONS(214),
    [anon_sym_shll] = ACTIONS(214),
    [anon_sym_shld] = ACTIONS(214),
    [anon_sym_shlx] = ACTIONS(214),
    [anon_sym_shlq] = ACTIONS(214),
    [anon_sym_shr] = ACTIONS(214),
    [anon_sym_shrq] = ACTIONS(214),
    [anon_sym_shrd] = ACTIONS(214),
    [anon_sym_shrl] = ACTIONS(214),
    [anon_sym_shrx] = ACTIONS(214),
    [anon_sym_vprord] = ACTIONS(214),
    [anon_sym_vprorq] = ACTIONS(214),
    [anon_sym_rorl] = ACTIONS(214),
    [anon_sym_roll] = ACTIONS(214),
    [anon_sym_push] = ACTIONS(214),
    [anon_sym_pushq] = ACTIONS(214),
    [anon_sym_pop] = ACTIONS(214),
    [anon_sym_movslq] = ACTIONS(214),
    [anon_sym_movsb] = ACTIONS(214),
    [anon_sym_rep] = ACTIONS(214),
    [anon_sym_repz] = ACTIONS(214),
    [anon_sym_repnz] = ACTIONS(214),
    [anon_sym_rex] = ACTIONS(214),
    [anon_sym_rex_DOTWB] = ACTIONS(214),
    [anon_sym_rex_DOTWRB] = ACTIONS(214),
    [anon_sym_rex_DOTRXB] = ACTIONS(214),
    [anon_sym_rex_DOTB] = ACTIONS(214),
    [anon_sym_rex_DOTWRXB] = ACTIONS(214),
    [anon_sym_rex_DOTXB] = ACTIONS(214),
    [anon_sym_rex_DOTW] = ACTIONS(214),
    [anon_sym_rex_DOTRB] = ACTIONS(214),
    [anon_sym_xgetbv] = ACTIONS(214),
    [anon_sym_fs] = ACTIONS(214),
    [anon_sym_kmovw] = ACTIONS(214),
    [anon_sym_adcx] = ACTIONS(214),
    [anon_sym_adox] = ACTIONS(214),
    [anon_sym_aesdec] = ACTIONS(214),
    [anon_sym_aesdeclast] = ACTIONS(214),
    [anon_sym_aesenc] = ACTIONS(214),
    [anon_sym_aesenclast] = ACTIONS(214),
    [anon_sym_vaesenc] = ACTIONS(214),
    [anon_sym_vaesenclast] = ACTIONS(214),
    [anon_sym_aeskeygenassist] = ACTIONS(214),
    [anon_sym_vblendps] = ACTIONS(214),
    [anon_sym_vblendvps] = ACTIONS(214),
    [anon_sym_vcvtusi2sd] = ACTIONS(214),
    [anon_sym_vdivsd] = ACTIONS(214),
    [anon_sym_vmovaps] = ACTIONS(214),
    [anon_sym_vmovapd] = ACTIONS(214),
    [anon_sym_vmovss] = ACTIONS(214),
    [anon_sym_vmovdqu] = ACTIONS(214),
    [anon_sym_vmovdqu64] = ACTIONS(214),
    [anon_sym_vmovdqu32] = ACTIONS(214),
    [anon_sym_vmovdqa] = ACTIONS(214),
    [anon_sym_vmovdqa32] = ACTIONS(214),
    [anon_sym_vmovdqa64] = ACTIONS(214),
    [anon_sym_vmovq] = ACTIONS(214),
    [anon_sym_vmovups] = ACTIONS(214),
    [anon_sym_vmovd] = ACTIONS(214),
    [anon_sym_vmovsd] = ACTIONS(214),
    [anon_sym_vmulsd] = ACTIONS(214),
    [anon_sym_vpackusdw] = ACTIONS(214),
    [anon_sym_vpaddd] = ACTIONS(214),
    [anon_sym_vpaddb] = ACTIONS(214),
    [anon_sym_vpaddq] = ACTIONS(214),
    [anon_sym_vpaddw] = ACTIONS(214),
    [anon_sym_vpalignr] = ACTIONS(214),
    [anon_sym_vpcmpgtd] = ACTIONS(214),
    [anon_sym_vpextrw] = ACTIONS(214),
    [anon_sym_vpinsrw] = ACTIONS(214),
    [anon_sym_vpinsrd] = ACTIONS(214),
    [anon_sym_vpinsrq] = ACTIONS(214),
    [anon_sym_vpinsrb] = ACTIONS(214),
    [anon_sym_vpmaddubsw] = ACTIONS(214),
    [anon_sym_vpmaddwd] = ACTIONS(214),
    [anon_sym_vpmullw] = ACTIONS(214),
    [anon_sym_vpmuludq] = ACTIONS(214),
    [anon_sym_vpor] = ACTIONS(214),
    [anon_sym_vpshufb] = ACTIONS(214),
    [anon_sym_vpshufd] = ACTIONS(214),
    [anon_sym_vpslldq] = ACTIONS(214),
    [anon_sym_vpslld] = ACTIONS(214),
    [anon_sym_vpsllq] = ACTIONS(214),
    [anon_sym_vpsllw] = ACTIONS(214),
    [anon_sym_vpsrldq] = ACTIONS(214),
    [anon_sym_vpsrld] = ACTIONS(214),
    [anon_sym_vpsrlq] = ACTIONS(214),
    [anon_sym_vpsrlw] = ACTIONS(214),
    [anon_sym_vpsubusw] = ACTIONS(214),
    [anon_sym_vpsubq] = ACTIONS(214),
    [anon_sym_vpsubd] = ACTIONS(214),
    [anon_sym_vpsubw] = ACTIONS(214),
    [anon_sym_vshufps] = ACTIONS(214),
    [anon_sym_vsubsd] = ACTIONS(214),
    [anon_sym_vucomisd] = ACTIONS(214),
    [anon_sym_vucomiss] = ACTIONS(214),
    [anon_sym_vunpckhpd] = ACTIONS(214),
    [anon_sym_vunpckhps] = ACTIONS(214),
    [anon_sym_vunpcklpd] = ACTIONS(214),
    [anon_sym_vunpcklps] = ACTIONS(214),
    [anon_sym_vbroadcastss] = ACTIONS(214),
    [anon_sym_vinsertf128] = ACTIONS(214),
    [anon_sym_vperm2f128] = ACTIONS(214),
    [anon_sym_vzeroall] = ACTIONS(214),
    [anon_sym_vzeroupper] = ACTIONS(214),
    [anon_sym_vshufi32x4] = ACTIONS(214),
    [anon_sym_vshufi64x2] = ACTIONS(214),
    [anon_sym_vpblendmd] = ACTIONS(214),
    [anon_sym_vextracti128] = ACTIONS(214),
    [anon_sym_vextracti32x4] = ACTIONS(214),
    [anon_sym_vinserti128] = ACTIONS(214),
    [anon_sym_vinserti32x4] = ACTIONS(214),
    [anon_sym_vinserti64x4] = ACTIONS(214),
    [anon_sym_vpblendd] = ACTIONS(214),
    [anon_sym_vpbroadcastq] = ACTIONS(214),
    [anon_sym_vpbroadcastd] = ACTIONS(214),
    [anon_sym_vbroadcasti128] = ACTIONS(214),
    [anon_sym_vbroadcasti32x4] = ACTIONS(214),
    [anon_sym_vperm2i128] = ACTIONS(214),
    [anon_sym_vpermd] = ACTIONS(214),
    [anon_sym_vpermq] = ACTIONS(214),
    [anon_sym_vpermt2d] = ACTIONS(214),
    [anon_sym_vpermi2d] = ACTIONS(214),
    [anon_sym_tzcnt] = ACTIONS(214),
    [anon_sym_rorx] = ACTIONS(214),
    [anon_sym_psubd] = ACTIONS(214),
    [anon_sym_pmaddwd] = ACTIONS(214),
    [anon_sym_pxor] = ACTIONS(214),
    [anon_sym_psrad] = ACTIONS(214),
    [anon_sym_pslld] = ACTIONS(214),
    [anon_sym_pcmpgtd] = ACTIONS(214),
    [anon_sym_pcmpeqd] = ACTIONS(214),
    [anon_sym_por] = ACTIONS(214),
    [anon_sym_paddw] = ACTIONS(214),
    [anon_sym_psubusw] = ACTIONS(214),
    [anon_sym_pcmpeqb] = ACTIONS(214),
    [anon_sym_psubusb] = ACTIONS(214),
    [anon_sym_psrld] = ACTIONS(214),
    [anon_sym_psrlw] = ACTIONS(214),
    [anon_sym_psllq] = ACTIONS(214),
    [anon_sym_paddd] = ACTIONS(214),
    [anon_sym_psrlq] = ACTIONS(214),
    [anon_sym_psubb] = ACTIONS(214),
    [anon_sym_maxss] = ACTIONS(214),
    [anon_sym_pmovmskb] = ACTIONS(214),
    [anon_sym_pinsrw] = ACTIONS(214),
    [anon_sym_minss] = ACTIONS(214),
    [anon_sym_prefetcht1] = ACTIONS(214),
    [anon_sym_prefetcht0] = ACTIONS(214),
    [anon_sym_pextrw] = ACTIONS(214),
    [anon_sym_ucomiss] = ACTIONS(214),
    [anon_sym_shufps] = ACTIONS(214),
    [anon_sym_addsd] = ACTIONS(214),
    [anon_sym_paddq] = ACTIONS(214),
    [anon_sym_psubq] = ACTIONS(214),
    [anon_sym_pshuflw] = ACTIONS(214),
    [anon_sym_pmuludq] = ACTIONS(214),
    [anon_sym_pshufd] = ACTIONS(214),
    [anon_sym_minsd] = ACTIONS(214),
    [anon_sym_pshufhw] = ACTIONS(214),
    [anon_sym_mfence] = ACTIONS(214),
    [anon_sym_maxsd] = ACTIONS(214),
    [anon_sym_ucomisd] = ACTIONS(214),
    [anon_sym_shufpd] = ACTIONS(214),
    [anon_sym_pslldq] = ACTIONS(214),
    [anon_sym_unpckhpd] = ACTIONS(214),
    [anon_sym_psrldq] = ACTIONS(214),
    [anon_sym_palignr] = ACTIONS(214),
    [anon_sym_pshufb] = ACTIONS(214),
    [anon_sym_pmaddubsw] = ACTIONS(214),
    [anon_sym_pinsrb] = ACTIONS(214),
    [anon_sym_pblendw] = ACTIONS(214),
    [anon_sym_pextrq] = ACTIONS(214),
    [anon_sym_blendvps] = ACTIONS(214),
    [anon_sym_pextrb] = ACTIONS(214),
    [anon_sym_pinsrd] = ACTIONS(214),
    [anon_sym_femms] = ACTIONS(214),
    [anon_sym_f] = ACTIONS(214),
    [aux_sym_operand_token1] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(214),
    [anon_sym_DOLLAR] = ACTIONS(214),
    [anon_sym_PERCENTss] = ACTIONS(214),
    [anon_sym_PERCENTcs] = ACTIONS(214),
    [anon_sym_PERCENTds] = ACTIONS(214),
    [anon_sym_PERCENTes] = ACTIONS(214),
    [anon_sym_PERCENTfs] = ACTIONS(214),
    [anon_sym_PERCENTgs] = ACTIONS(214),
    [anon_sym_PERCENTrax] = ACTIONS(214),
    [anon_sym_PERCENTrbx] = ACTIONS(214),
    [anon_sym_PERCENTrcx] = ACTIONS(214),
    [anon_sym_PERCENTrdx] = ACTIONS(214),
    [anon_sym_PERCENTrsi] = ACTIONS(214),
    [anon_sym_PERCENTrdi] = ACTIONS(214),
    [anon_sym_PERCENTrbp] = ACTIONS(214),
    [anon_sym_PERCENTrsp] = ACTIONS(214),
    [anon_sym_PERCENTr8] = ACTIONS(214),
    [anon_sym_PERCENTr9] = ACTIONS(214),
    [anon_sym_PERCENTr10] = ACTIONS(214),
    [anon_sym_PERCENTr11] = ACTIONS(214),
    [anon_sym_PERCENTr12] = ACTIONS(214),
    [anon_sym_PERCENTr13] = ACTIONS(214),
    [anon_sym_PERCENTr14] = ACTIONS(214),
    [anon_sym_PERCENTr15] = ACTIONS(214),
    [anon_sym_PERCENTeax] = ACTIONS(214),
    [anon_sym_PERCENTecx] = ACTIONS(214),
    [anon_sym_PERCENTedx] = ACTIONS(214),
    [anon_sym_PERCENTebx] = ACTIONS(214),
    [anon_sym_PERCENTesi] = ACTIONS(214),
    [anon_sym_PERCENTedi] = ACTIONS(214),
    [anon_sym_PERCENTebp] = ACTIONS(214),
    [anon_sym_PERCENTesp] = ACTIONS(214),
    [anon_sym_PERCENTr8d] = ACTIONS(214),
    [anon_sym_PERCENTr9d] = ACTIONS(214),
    [anon_sym_PERCENTr10d] = ACTIONS(214),
    [anon_sym_PERCENTr11d] = ACTIONS(214),
    [anon_sym_PERCENTr12d] = ACTIONS(214),
    [anon_sym_PERCENTr13d] = ACTIONS(214),
    [anon_sym_PERCENTr14d] = ACTIONS(214),
    [anon_sym_PERCENTr15d] = ACTIONS(214),
    [anon_sym_PERCENTax] = ACTIONS(214),
    [anon_sym_PERCENTcx] = ACTIONS(214),
    [anon_sym_PERCENTdx] = ACTIONS(214),
    [anon_sym_PERCENTbx] = ACTIONS(214),
    [anon_sym_PERCENTsi] = ACTIONS(214),
    [anon_sym_PERCENTdi] = ACTIONS(214),
    [anon_sym_PERCENTsp] = ACTIONS(214),
    [anon_sym_PERCENTbp] = ACTIONS(214),
    [anon_sym_PERCENTr8w] = ACTIONS(214),
    [anon_sym_PERCENTr9w] = ACTIONS(214),
    [anon_sym_PERCENTr10w] = ACTIONS(214),
    [anon_sym_PERCENTr11w] = ACTIONS(214),
    [anon_sym_PERCENTr12w] = ACTIONS(214),
    [anon_sym_PERCENTr13w] = ACTIONS(214),
    [anon_sym_PERCENTr14w] = ACTIONS(214),
    [anon_sym_PERCENTr15w] = ACTIONS(214),
    [anon_sym_PERCENTal] = ACTIONS(214),
    [anon_sym_PERCENTcl] = ACTIONS(214),
    [anon_sym_PERCENTdl] = ACTIONS(214),
    [anon_sym_PERCENTbl] = ACTIONS(214),
    [anon_sym_PERCENTsil] = ACTIONS(214),
    [anon_sym_PERCENTdil] = ACTIONS(214),
    [anon_sym_PERCENTspl] = ACTIONS(214),
    [anon_sym_PERCENTbpl] = ACTIONS(214),
    [anon_sym_PERCENTr8b] = ACTIONS(214),
    [anon_sym_PERCENTr9b] = ACTIONS(214),
    [anon_sym_PERCENTr10b] = ACTIONS(214),
    [anon_sym_PERCENTr11b] = ACTIONS(214),
    [anon_sym_PERCENTr12b] = ACTIONS(214),
    [anon_sym_PERCENTr13b] = ACTIONS(214),
    [anon_sym_PERCENTr14b] = ACTIONS(214),
    [anon_sym_PERCENTr15b] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_movsq] = ACTIONS(214),
    [anon_sym_cmpsb] = ACTIONS(214),
    [anon_sym_cmpxchg] = ACTIONS(214),
    [anon_sym_movsl] = ACTIONS(214),
    [anon_sym_callq] = ACTIONS(214),
    [anon_sym_ja] = ACTIONS(214),
    [anon_sym_jae] = ACTIONS(214),
    [anon_sym_jb] = ACTIONS(214),
    [anon_sym_jbe] = ACTIONS(214),
    [anon_sym_je] = ACTIONS(214),
    [anon_sym_jg] = ACTIONS(214),
    [anon_sym_jge] = ACTIONS(214),
    [anon_sym_jl] = ACTIONS(214),
    [anon_sym_jle] = ACTIONS(214),
    [anon_sym_jmp] = ACTIONS(214),
    [anon_sym_jmpq] = ACTIONS(214),
    [anon_sym_jne] = ACTIONS(214),
    [anon_sym_jno] = ACTIONS(214),
    [anon_sym_jns] = ACTIONS(214),
    [anon_sym_jo] = ACTIONS(214),
    [anon_sym_jp] = ACTIONS(214),
    [anon_sym_jrcxz] = ACTIONS(214),
    [anon_sym_js] = ACTIONS(214),
    [anon_sym_notrack] = ACTIONS(214),
    [anon_sym_PERCENTcr0] = ACTIONS(214),
    [anon_sym_PERCENTcr2] = ACTIONS(214),
    [anon_sym_PERCENTcr3] = ACTIONS(214),
    [anon_sym_PERCENTcr4] = ACTIONS(214),
    [anon_sym_PERCENTrip] = ACTIONS(214),
    [anon_sym_PERCENTeip] = ACTIONS(214),
    [anon_sym_PERCENTip] = ACTIONS(214),
    [anon_sym_PERCENTst] = ACTIONS(214),
    [anon_sym_PERCENT] = ACTIONS(214),
  },
  [16] = {
    [aux_sym_comment_token1] = ACTIONS(77),
    [aux_sym_comment_token2] = ACTIONS(77),
    [sym__line_break] = ACTIONS(79),
    [anon_sym_adc] = ACTIONS(77),
    [anon_sym_add] = ACTIONS(77),
    [anon_sym_addq] = ACTIONS(77),
    [anon_sym_addl] = ACTIONS(77),
    [anon_sym_addss] = ACTIONS(77),
    [anon_sym_addw] = ACTIONS(77),
    [anon_sym_addb] = ACTIONS(77),
    [anon_sym_cmp] = ACTIONS(77),
    [anon_sym_cmpb] = ACTIONS(77),
    [anon_sym_cmpw] = ACTIONS(77),
    [anon_sym_cmpl] = ACTIONS(77),
    [anon_sym_cmpq] = ACTIONS(77),
    [anon_sym_comiss] = ACTIONS(77),
    [anon_sym_comisd] = ACTIONS(77),
    [anon_sym_inc] = ACTIONS(77),
    [anon_sym_incl] = ACTIONS(77),
    [anon_sym_dec] = ACTIONS(77),
    [anon_sym_div] = ACTIONS(77),
    [anon_sym_divq] = ACTIONS(77),
    [anon_sym_divl] = ACTIONS(77),
    [anon_sym_divss] = ACTIONS(77),
    [anon_sym_divsd] = ACTIONS(77),
    [anon_sym_idiv] = ACTIONS(77),
    [anon_sym_idivl] = ACTIONS(77),
    [anon_sym_sub] = ACTIONS(77),
    [anon_sym_subq] = ACTIONS(77),
    [anon_sym_subl] = ACTIONS(77),
    [anon_sym_subss] = ACTIONS(77),
    [anon_sym_subw] = ACTIONS(77),
    [anon_sym_subb] = ACTIONS(77),
    [anon_sym_subsd] = ACTIONS(77),
    [anon_sym_subpd] = ACTIONS(77),
    [anon_sym_sbb] = ACTIONS(77),
    [anon_sym_mul] = ACTIONS(77),
    [anon_sym_mulq] = ACTIONS(77),
    [anon_sym_mull] = ACTIONS(77),
    [anon_sym_mulss] = ACTIONS(77),
    [anon_sym_mulw] = ACTIONS(77),
    [anon_sym_mulb] = ACTIONS(77),
    [anon_sym_mulsd] = ACTIONS(77),
    [anon_sym_mulx] = ACTIONS(77),
    [anon_sym_imul] = ACTIONS(77),
    [anon_sym_neg] = ACTIONS(77),
    [anon_sym_negl] = ACTIONS(77),
    [anon_sym_negq] = ACTIONS(77),
    [anon_sym_fmulp] = ACTIONS(77),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(77),
    [anon_sym_pclmullqlqdq] = ACTIONS(77),
    [anon_sym_pclmullqhqdq] = ACTIONS(77),
    [anon_sym_vpclmullqhqdq] = ACTIONS(77),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(77),
    [anon_sym_pclmulhqhqdq] = ACTIONS(77),
    [anon_sym_vpclmullqlqdq] = ACTIONS(77),
    [anon_sym_bsf] = ACTIONS(77),
    [anon_sym_bsr] = ACTIONS(77),
    [anon_sym_bts] = ACTIONS(77),
    [anon_sym_bt] = ACTIONS(77),
    [anon_sym_btr] = ACTIONS(77),
    [anon_sym_btl] = ACTIONS(77),
    [anon_sym_setne] = ACTIONS(77),
    [anon_sym_setb] = ACTIONS(77),
    [anon_sym_sete] = ACTIONS(77),
    [anon_sym_setbe] = ACTIONS(77),
    [anon_sym_seta] = ACTIONS(77),
    [anon_sym_setge] = ACTIONS(77),
    [anon_sym_setae] = ACTIONS(77),
    [anon_sym_setl] = ACTIONS(77),
    [anon_sym_setle] = ACTIONS(77),
    [anon_sym_setg] = ACTIONS(77),
    [anon_sym_seto] = ACTIONS(77),
    [anon_sym_setnp] = ACTIONS(77),
    [anon_sym_setp] = ACTIONS(77),
    [anon_sym_setns] = ACTIONS(77),
    [anon_sym_test] = ACTIONS(77),
    [anon_sym_testb] = ACTIONS(77),
    [anon_sym_testl] = ACTIONS(77),
    [anon_sym_knotw] = ACTIONS(77),
    [anon_sym_vpcmpltud] = ACTIONS(77),
    [anon_sym_gs] = ACTIONS(77),
    [anon_sym_re] = ACTIONS(77),
    [anon_sym_ss] = ACTIONS(77),
    [anon_sym_leaveq] = ACTIONS(77),
    [anon_sym_retq] = ACTIONS(77),
    [anon_sym_bswap] = ACTIONS(77),
    [anon_sym_cbtw] = ACTIONS(77),
    [anon_sym_cltd] = ACTIONS(77),
    [anon_sym_cltq] = ACTIONS(77),
    [anon_sym_cmovbe] = ACTIONS(77),
    [anon_sym_cmovl] = ACTIONS(77),
    [anon_sym_cmovae] = ACTIONS(77),
    [anon_sym_cmovo] = ACTIONS(77),
    [anon_sym_cmovne] = ACTIONS(77),
    [anon_sym_cmovns] = ACTIONS(77),
    [anon_sym_cmovg] = ACTIONS(77),
    [anon_sym_cmovp] = ACTIONS(77),
    [anon_sym_cmove] = ACTIONS(77),
    [anon_sym_cmovge] = ACTIONS(77),
    [anon_sym_cmovb] = ACTIONS(77),
    [anon_sym_cmova] = ACTIONS(77),
    [anon_sym_cmovle] = ACTIONS(77),
    [anon_sym_cmovs] = ACTIONS(77),
    [anon_sym_cwtl] = ACTIONS(77),
    [anon_sym_cwtd] = ACTIONS(77),
    [anon_sym_cqto] = ACTIONS(77),
    [anon_sym_cvttsd2si] = ACTIONS(77),
    [anon_sym_cvtss2sd] = ACTIONS(77),
    [anon_sym_cvttss2si] = ACTIONS(77),
    [anon_sym_cvtsi2sd] = ACTIONS(77),
    [anon_sym_cvtsi2ss] = ACTIONS(77),
    [anon_sym_cvtsi2sdq] = ACTIONS(77),
    [anon_sym_cvtsi2sdl] = ACTIONS(77),
    [anon_sym_cvtsd2ss] = ACTIONS(77),
    [anon_sym_cvtsi2ssl] = ACTIONS(77),
    [anon_sym_mov] = ACTIONS(77),
    [anon_sym_movw] = ACTIONS(77),
    [anon_sym_movl] = ACTIONS(77),
    [anon_sym_movq] = ACTIONS(77),
    [anon_sym_movb] = ACTIONS(77),
    [anon_sym_movabs] = ACTIONS(77),
    [anon_sym_movsbw] = ACTIONS(77),
    [anon_sym_movsbq] = ACTIONS(77),
    [anon_sym_movsbl] = ACTIONS(77),
    [anon_sym_movswl] = ACTIONS(77),
    [anon_sym_movswq] = ACTIONS(77),
    [anon_sym_movzbw] = ACTIONS(77),
    [anon_sym_movzbq] = ACTIONS(77),
    [anon_sym_movzbl] = ACTIONS(77),
    [anon_sym_movzwl] = ACTIONS(77),
    [anon_sym_movaps] = ACTIONS(77),
    [anon_sym_movhlps] = ACTIONS(77),
    [anon_sym_movss] = ACTIONS(77),
    [anon_sym_movups] = ACTIONS(77),
    [anon_sym_movsd] = ACTIONS(77),
    [anon_sym_movd] = ACTIONS(77),
    [anon_sym_movhps] = ACTIONS(77),
    [anon_sym_movdqa] = ACTIONS(77),
    [anon_sym_movbe] = ACTIONS(77),
    [anon_sym_movapd] = ACTIONS(77),
    [anon_sym_movdqu] = ACTIONS(77),
    [anon_sym_xchg] = ACTIONS(77),
    [anon_sym_fildl] = ACTIONS(77),
    [anon_sym_fldt] = ACTIONS(77),
    [anon_sym_fstpl] = ACTIONS(77),
    [anon_sym_insb] = ACTIONS(77),
    [anon_sym_insl] = ACTIONS(77),
    [anon_sym_outsb] = ACTIONS(77),
    [anon_sym_outsl] = ACTIONS(77),
    [anon_sym_or] = ACTIONS(77),
    [anon_sym_orq] = ACTIONS(77),
    [anon_sym_orl] = ACTIONS(77),
    [anon_sym_orb] = ACTIONS(77),
    [anon_sym_orw] = ACTIONS(77),
    [anon_sym_xor] = ACTIONS(77),
    [anon_sym_xorl] = ACTIONS(77),
    [anon_sym_xorw] = ACTIONS(77),
    [anon_sym_xorps] = ACTIONS(77),
    [anon_sym_xorpd] = ACTIONS(77),
    [anon_sym_vxorps] = ACTIONS(77),
    [anon_sym_vpxord] = ACTIONS(77),
    [anon_sym_vpxor] = ACTIONS(77),
    [anon_sym_and] = ACTIONS(77),
    [anon_sym_andq] = ACTIONS(77),
    [anon_sym_andl] = ACTIONS(77),
    [anon_sym_andw] = ACTIONS(77),
    [anon_sym_andb] = ACTIONS(77),
    [anon_sym_andn] = ACTIONS(77),
    [anon_sym_andpd] = ACTIONS(77),
    [anon_sym_pand] = ACTIONS(77),
    [anon_sym_pandn] = ACTIONS(77),
    [anon_sym_andps] = ACTIONS(77),
    [anon_sym_vpand] = ACTIONS(77),
    [anon_sym_not] = ACTIONS(77),
    [anon_sym_notl] = ACTIONS(77),
    [anon_sym_notw] = ACTIONS(77),
    [anon_sym_cpuid] = ACTIONS(77),
    [anon_sym_lea] = ACTIONS(77),
    [anon_sym_popcnt] = ACTIONS(77),
    [anon_sym_nop] = ACTIONS(77),
    [anon_sym_nopl] = ACTIONS(77),
    [anon_sym_nopw] = ACTIONS(77),
    [anon_sym_ud2] = ACTIONS(77),
    [anon_sym_data16] = ACTIONS(77),
    [anon_sym_sha1rnds4] = ACTIONS(77),
    [anon_sym_addr32] = ACTIONS(77),
    [anon_sym_sha1msg1] = ACTIONS(77),
    [anon_sym_sha1msg2] = ACTIONS(77),
    [anon_sym_sha1nexte] = ACTIONS(77),
    [anon_sym_endbr64] = ACTIONS(77),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(77),
    [anon_sym_packuswb] = ACTIONS(77),
    [anon_sym_punpckhbw] = ACTIONS(77),
    [anon_sym_punpckhdq] = ACTIONS(77),
    [anon_sym_punpckhwd] = ACTIONS(77),
    [anon_sym_punpcklbw] = ACTIONS(77),
    [anon_sym_punpckldq] = ACTIONS(77),
    [anon_sym_punpcklwd] = ACTIONS(77),
    [anon_sym_vpunpcklwd] = ACTIONS(77),
    [anon_sym_vpunpckldq] = ACTIONS(77),
    [anon_sym_punpcklqdq] = ACTIONS(77),
    [anon_sym_punpckhqdq] = ACTIONS(77),
    [anon_sym_vpunpckhqdq] = ACTIONS(77),
    [anon_sym_vpunpckhdq] = ACTIONS(77),
    [anon_sym_vpunpcklqdq] = ACTIONS(77),
    [anon_sym_vpunpckhwd] = ACTIONS(77),
    [anon_sym_rol] = ACTIONS(77),
    [anon_sym_ror] = ACTIONS(77),
    [anon_sym_sar] = ACTIONS(77),
    [anon_sym_sarl] = ACTIONS(77),
    [anon_sym_sarx] = ACTIONS(77),
    [anon_sym_shl] = ACTIONS(77),
    [anon_sym_shll] = ACTIONS(77),
    [anon_sym_shld] = ACTIONS(77),
    [anon_sym_shlx] = ACTIONS(77),
    [anon_sym_shlq] = ACTIONS(77),
    [anon_sym_shr] = ACTIONS(77),
    [anon_sym_shrq] = ACTIONS(77),
    [anon_sym_shrd] = ACTIONS(77),
    [anon_sym_shrl] = ACTIONS(77),
    [anon_sym_shrx] = ACTIONS(77),
    [anon_sym_vprord] = ACTIONS(77),
    [anon_sym_vprorq] = ACTIONS(77),
    [anon_sym_rorl] = ACTIONS(77),
    [anon_sym_roll] = ACTIONS(77),
    [anon_sym_push] = ACTIONS(77),
    [anon_sym_pushq] = ACTIONS(77),
    [anon_sym_pop] = ACTIONS(77),
    [anon_sym_movslq] = ACTIONS(77),
    [anon_sym_movsb] = ACTIONS(77),
    [anon_sym_rep] = ACTIONS(77),
    [anon_sym_repz] = ACTIONS(77),
    [anon_sym_repnz] = ACTIONS(77),
    [anon_sym_rex] = ACTIONS(77),
    [anon_sym_rex_DOTWB] = ACTIONS(77),
    [anon_sym_rex_DOTWRB] = ACTIONS(77),
    [anon_sym_rex_DOTRXB] = ACTIONS(77),
    [anon_sym_rex_DOTB] = ACTIONS(77),
    [anon_sym_rex_DOTWRXB] = ACTIONS(77),
    [anon_sym_rex_DOTXB] = ACTIONS(77),
    [anon_sym_rex_DOTW] = ACTIONS(77),
    [anon_sym_rex_DOTRB] = ACTIONS(77),
    [anon_sym_xgetbv] = ACTIONS(77),
    [anon_sym_fs] = ACTIONS(77),
    [anon_sym_kmovw] = ACTIONS(77),
    [anon_sym_adcx] = ACTIONS(77),
    [anon_sym_adox] = ACTIONS(77),
    [anon_sym_aesdec] = ACTIONS(77),
    [anon_sym_aesdeclast] = ACTIONS(77),
    [anon_sym_aesenc] = ACTIONS(77),
    [anon_sym_aesenclast] = ACTIONS(77),
    [anon_sym_vaesenc] = ACTIONS(77),
    [anon_sym_vaesenclast] = ACTIONS(77),
    [anon_sym_aeskeygenassist] = ACTIONS(77),
    [anon_sym_vblendps] = ACTIONS(77),
    [anon_sym_vblendvps] = ACTIONS(77),
    [anon_sym_vcvtusi2sd] = ACTIONS(77),
    [anon_sym_vdivsd] = ACTIONS(77),
    [anon_sym_vmovaps] = ACTIONS(77),
    [anon_sym_vmovapd] = ACTIONS(77),
    [anon_sym_vmovss] = ACTIONS(77),
    [anon_sym_vmovdqu] = ACTIONS(77),
    [anon_sym_vmovdqu64] = ACTIONS(77),
    [anon_sym_vmovdqu32] = ACTIONS(77),
    [anon_sym_vmovdqa] = ACTIONS(77),
    [anon_sym_vmovdqa32] = ACTIONS(77),
    [anon_sym_vmovdqa64] = ACTIONS(77),
    [anon_sym_vmovq] = ACTIONS(77),
    [anon_sym_vmovups] = ACTIONS(77),
    [anon_sym_vmovd] = ACTIONS(77),
    [anon_sym_vmovsd] = ACTIONS(77),
    [anon_sym_vmulsd] = ACTIONS(77),
    [anon_sym_vpackusdw] = ACTIONS(77),
    [anon_sym_vpaddd] = ACTIONS(77),
    [anon_sym_vpaddb] = ACTIONS(77),
    [anon_sym_vpaddq] = ACTIONS(77),
    [anon_sym_vpaddw] = ACTIONS(77),
    [anon_sym_vpalignr] = ACTIONS(77),
    [anon_sym_vpcmpgtd] = ACTIONS(77),
    [anon_sym_vpextrw] = ACTIONS(77),
    [anon_sym_vpinsrw] = ACTIONS(77),
    [anon_sym_vpinsrd] = ACTIONS(77),
    [anon_sym_vpinsrq] = ACTIONS(77),
    [anon_sym_vpinsrb] = ACTIONS(77),
    [anon_sym_vpmaddubsw] = ACTIONS(77),
    [anon_sym_vpmaddwd] = ACTIONS(77),
    [anon_sym_vpmullw] = ACTIONS(77),
    [anon_sym_vpmuludq] = ACTIONS(77),
    [anon_sym_vpor] = ACTIONS(77),
    [anon_sym_vpshufb] = ACTIONS(77),
    [anon_sym_vpshufd] = ACTIONS(77),
    [anon_sym_vpslldq] = ACTIONS(77),
    [anon_sym_vpslld] = ACTIONS(77),
    [anon_sym_vpsllq] = ACTIONS(77),
    [anon_sym_vpsllw] = ACTIONS(77),
    [anon_sym_vpsrldq] = ACTIONS(77),
    [anon_sym_vpsrld] = ACTIONS(77),
    [anon_sym_vpsrlq] = ACTIONS(77),
    [anon_sym_vpsrlw] = ACTIONS(77),
    [anon_sym_vpsubusw] = ACTIONS(77),
    [anon_sym_vpsubq] = ACTIONS(77),
    [anon_sym_vpsubd] = ACTIONS(77),
    [anon_sym_vpsubw] = ACTIONS(77),
    [anon_sym_vshufps] = ACTIONS(77),
    [anon_sym_vsubsd] = ACTIONS(77),
    [anon_sym_vucomisd] = ACTIONS(77),
    [anon_sym_vucomiss] = ACTIONS(77),
    [anon_sym_vunpckhpd] = ACTIONS(77),
    [anon_sym_vunpckhps] = ACTIONS(77),
    [anon_sym_vunpcklpd] = ACTIONS(77),
    [anon_sym_vunpcklps] = ACTIONS(77),
    [anon_sym_vbroadcastss] = ACTIONS(77),
    [anon_sym_vinsertf128] = ACTIONS(77),
    [anon_sym_vperm2f128] = ACTIONS(77),
    [anon_sym_vzeroall] = ACTIONS(77),
    [anon_sym_vzeroupper] = ACTIONS(77),
    [anon_sym_vshufi32x4] = ACTIONS(77),
    [anon_sym_vshufi64x2] = ACTIONS(77),
    [anon_sym_vpblendmd] = ACTIONS(77),
    [anon_sym_vextracti128] = ACTIONS(77),
    [anon_sym_vextracti32x4] = ACTIONS(77),
    [anon_sym_vinserti128] = ACTIONS(77),
    [anon_sym_vinserti32x4] = ACTIONS(77),
    [anon_sym_vinserti64x4] = ACTIONS(77),
    [anon_sym_vpblendd] = ACTIONS(77),
    [anon_sym_vpbroadcastq] = ACTIONS(77),
    [anon_sym_vpbroadcastd] = ACTIONS(77),
    [anon_sym_vbroadcasti128] = ACTIONS(77),
    [anon_sym_vbroadcasti32x4] = ACTIONS(77),
    [anon_sym_vperm2i128] = ACTIONS(77),
    [anon_sym_vpermd] = ACTIONS(77),
    [anon_sym_vpermq] = ACTIONS(77),
    [anon_sym_vpermt2d] = ACTIONS(77),
    [anon_sym_vpermi2d] = ACTIONS(77),
    [anon_sym_tzcnt] = ACTIONS(77),
    [anon_sym_rorx] = ACTIONS(77),
    [anon_sym_psubd] = ACTIONS(77),
    [anon_sym_pmaddwd] = ACTIONS(77),
    [anon_sym_pxor] = ACTIONS(77),
    [anon_sym_psrad] = ACTIONS(77),
    [anon_sym_pslld] = ACTIONS(77),
    [anon_sym_pcmpgtd] = ACTIONS(77),
    [anon_sym_pcmpeqd] = ACTIONS(77),
    [anon_sym_por] = ACTIONS(77),
    [anon_sym_paddw] = ACTIONS(77),
    [anon_sym_psubusw] = ACTIONS(77),
    [anon_sym_pcmpeqb] = ACTIONS(77),
    [anon_sym_psubusb] = ACTIONS(77),
    [anon_sym_psrld] = ACTIONS(77),
    [anon_sym_psrlw] = ACTIONS(77),
    [anon_sym_psllq] = ACTIONS(77),
    [anon_sym_paddd] = ACTIONS(77),
    [anon_sym_psrlq] = ACTIONS(77),
    [anon_sym_psubb] = ACTIONS(77),
    [anon_sym_maxss] = ACTIONS(77),
    [anon_sym_pmovmskb] = ACTIONS(77),
    [anon_sym_pinsrw] = ACTIONS(77),
    [anon_sym_minss] = ACTIONS(77),
    [anon_sym_prefetcht1] = ACTIONS(77),
    [anon_sym_prefetcht0] = ACTIONS(77),
    [anon_sym_pextrw] = ACTIONS(77),
    [anon_sym_ucomiss] = ACTIONS(77),
    [anon_sym_shufps] = ACTIONS(77),
    [anon_sym_addsd] = ACTIONS(77),
    [anon_sym_paddq] = ACTIONS(77),
    [anon_sym_psubq] = ACTIONS(77),
    [anon_sym_pshuflw] = ACTIONS(77),
    [anon_sym_pmuludq] = ACTIONS(77),
    [anon_sym_pshufd] = ACTIONS(77),
    [anon_sym_minsd] = ACTIONS(77),
    [anon_sym_pshufhw] = ACTIONS(77),
    [anon_sym_mfence] = ACTIONS(77),
    [anon_sym_maxsd] = ACTIONS(77),
    [anon_sym_ucomisd] = ACTIONS(77),
    [anon_sym_shufpd] = ACTIONS(77),
    [anon_sym_pslldq] = ACTIONS(77),
    [anon_sym_unpckhpd] = ACTIONS(77),
    [anon_sym_psrldq] = ACTIONS(77),
    [anon_sym_palignr] = ACTIONS(77),
    [anon_sym_pshufb] = ACTIONS(77),
    [anon_sym_pmaddubsw] = ACTIONS(77),
    [anon_sym_pinsrb] = ACTIONS(77),
    [anon_sym_pblendw] = ACTIONS(77),
    [anon_sym_pextrq] = ACTIONS(77),
    [anon_sym_blendvps] = ACTIONS(77),
    [anon_sym_pextrb] = ACTIONS(77),
    [anon_sym_pinsrd] = ACTIONS(77),
    [anon_sym_femms] = ACTIONS(77),
    [anon_sym_f] = ACTIONS(77),
    [aux_sym_operand_token1] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_DOLLAR] = ACTIONS(77),
    [anon_sym_PERCENTss] = ACTIONS(77),
    [anon_sym_PERCENTcs] = ACTIONS(77),
    [anon_sym_PERCENTds] = ACTIONS(77),
    [anon_sym_PERCENTes] = ACTIONS(77),
    [anon_sym_PERCENTfs] = ACTIONS(77),
    [anon_sym_PERCENTgs] = ACTIONS(77),
    [anon_sym_PERCENTrax] = ACTIONS(77),
    [anon_sym_PERCENTrbx] = ACTIONS(77),
    [anon_sym_PERCENTrcx] = ACTIONS(77),
    [anon_sym_PERCENTrdx] = ACTIONS(77),
    [anon_sym_PERCENTrsi] = ACTIONS(77),
    [anon_sym_PERCENTrdi] = ACTIONS(77),
    [anon_sym_PERCENTrbp] = ACTIONS(77),
    [anon_sym_PERCENTrsp] = ACTIONS(77),
    [anon_sym_PERCENTr8] = ACTIONS(77),
    [anon_sym_PERCENTr9] = ACTIONS(77),
    [anon_sym_PERCENTr10] = ACTIONS(77),
    [anon_sym_PERCENTr11] = ACTIONS(77),
    [anon_sym_PERCENTr12] = ACTIONS(77),
    [anon_sym_PERCENTr13] = ACTIONS(77),
    [anon_sym_PERCENTr14] = ACTIONS(77),
    [anon_sym_PERCENTr15] = ACTIONS(77),
    [anon_sym_PERCENTeax] = ACTIONS(77),
    [anon_sym_PERCENTecx] = ACTIONS(77),
    [anon_sym_PERCENTedx] = ACTIONS(77),
    [anon_sym_PERCENTebx] = ACTIONS(77),
    [anon_sym_PERCENTesi] = ACTIONS(77),
    [anon_sym_PERCENTedi] = ACTIONS(77),
    [anon_sym_PERCENTebp] = ACTIONS(77),
    [anon_sym_PERCENTesp] = ACTIONS(77),
    [anon_sym_PERCENTr8d] = ACTIONS(77),
    [anon_sym_PERCENTr9d] = ACTIONS(77),
    [anon_sym_PERCENTr10d] = ACTIONS(77),
    [anon_sym_PERCENTr11d] = ACTIONS(77),
    [anon_sym_PERCENTr12d] = ACTIONS(77),
    [anon_sym_PERCENTr13d] = ACTIONS(77),
    [anon_sym_PERCENTr14d] = ACTIONS(77),
    [anon_sym_PERCENTr15d] = ACTIONS(77),
    [anon_sym_PERCENTax] = ACTIONS(77),
    [anon_sym_PERCENTcx] = ACTIONS(77),
    [anon_sym_PERCENTdx] = ACTIONS(77),
    [anon_sym_PERCENTbx] = ACTIONS(77),
    [anon_sym_PERCENTsi] = ACTIONS(77),
    [anon_sym_PERCENTdi] = ACTIONS(77),
    [anon_sym_PERCENTsp] = ACTIONS(77),
    [anon_sym_PERCENTbp] = ACTIONS(77),
    [anon_sym_PERCENTr8w] = ACTIONS(77),
    [anon_sym_PERCENTr9w] = ACTIONS(77),
    [anon_sym_PERCENTr10w] = ACTIONS(77),
    [anon_sym_PERCENTr11w] = ACTIONS(77),
    [anon_sym_PERCENTr12w] = ACTIONS(77),
    [anon_sym_PERCENTr13w] = ACTIONS(77),
    [anon_sym_PERCENTr14w] = ACTIONS(77),
    [anon_sym_PERCENTr15w] = ACTIONS(77),
    [anon_sym_PERCENTal] = ACTIONS(77),
    [anon_sym_PERCENTcl] = ACTIONS(77),
    [anon_sym_PERCENTdl] = ACTIONS(77),
    [anon_sym_PERCENTbl] = ACTIONS(77),
    [anon_sym_PERCENTsil] = ACTIONS(77),
    [anon_sym_PERCENTdil] = ACTIONS(77),
    [anon_sym_PERCENTspl] = ACTIONS(77),
    [anon_sym_PERCENTbpl] = ACTIONS(77),
    [anon_sym_PERCENTr8b] = ACTIONS(77),
    [anon_sym_PERCENTr9b] = ACTIONS(77),
    [anon_sym_PERCENTr10b] = ACTIONS(77),
    [anon_sym_PERCENTr11b] = ACTIONS(77),
    [anon_sym_PERCENTr12b] = ACTIONS(77),
    [anon_sym_PERCENTr13b] = ACTIONS(77),
    [anon_sym_PERCENTr14b] = ACTIONS(77),
    [anon_sym_PERCENTr15b] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_movsq] = ACTIONS(77),
    [anon_sym_cmpsb] = ACTIONS(77),
    [anon_sym_cmpxchg] = ACTIONS(77),
    [anon_sym_movsl] = ACTIONS(77),
    [anon_sym_callq] = ACTIONS(77),
    [anon_sym_ja] = ACTIONS(77),
    [anon_sym_jae] = ACTIONS(77),
    [anon_sym_jb] = ACTIONS(77),
    [anon_sym_jbe] = ACTIONS(77),
    [anon_sym_je] = ACTIONS(77),
    [anon_sym_jg] = ACTIONS(77),
    [anon_sym_jge] = ACTIONS(77),
    [anon_sym_jl] = ACTIONS(77),
    [anon_sym_jle] = ACTIONS(77),
    [anon_sym_jmp] = ACTIONS(77),
    [anon_sym_jmpq] = ACTIONS(77),
    [anon_sym_jne] = ACTIONS(77),
    [anon_sym_jno] = ACTIONS(77),
    [anon_sym_jns] = ACTIONS(77),
    [anon_sym_jo] = ACTIONS(77),
    [anon_sym_jp] = ACTIONS(77),
    [anon_sym_jrcxz] = ACTIONS(77),
    [anon_sym_js] = ACTIONS(77),
    [anon_sym_notrack] = ACTIONS(77),
    [anon_sym_PERCENTcr0] = ACTIONS(77),
    [anon_sym_PERCENTcr2] = ACTIONS(77),
    [anon_sym_PERCENTcr3] = ACTIONS(77),
    [anon_sym_PERCENTcr4] = ACTIONS(77),
    [anon_sym_PERCENTrip] = ACTIONS(77),
    [anon_sym_PERCENTeip] = ACTIONS(77),
    [anon_sym_PERCENTip] = ACTIONS(77),
    [anon_sym_PERCENTst] = ACTIONS(77),
    [anon_sym_PERCENT] = ACTIONS(77),
  },
  [17] = {
    [aux_sym_comment_token1] = ACTIONS(218),
    [aux_sym_comment_token2] = ACTIONS(218),
    [sym__line_break] = ACTIONS(220),
    [anon_sym_adc] = ACTIONS(218),
    [anon_sym_add] = ACTIONS(218),
    [anon_sym_addq] = ACTIONS(218),
    [anon_sym_addl] = ACTIONS(218),
    [anon_sym_addss] = ACTIONS(218),
    [anon_sym_addw] = ACTIONS(218),
    [anon_sym_addb] = ACTIONS(218),
    [anon_sym_cmp] = ACTIONS(218),
    [anon_sym_cmpb] = ACTIONS(218),
    [anon_sym_cmpw] = ACTIONS(218),
    [anon_sym_cmpl] = ACTIONS(218),
    [anon_sym_cmpq] = ACTIONS(218),
    [anon_sym_comiss] = ACTIONS(218),
    [anon_sym_comisd] = ACTIONS(218),
    [anon_sym_inc] = ACTIONS(218),
    [anon_sym_incl] = ACTIONS(218),
    [anon_sym_dec] = ACTIONS(218),
    [anon_sym_div] = ACTIONS(218),
    [anon_sym_divq] = ACTIONS(218),
    [anon_sym_divl] = ACTIONS(218),
    [anon_sym_divss] = ACTIONS(218),
    [anon_sym_divsd] = ACTIONS(218),
    [anon_sym_idiv] = ACTIONS(218),
    [anon_sym_idivl] = ACTIONS(218),
    [anon_sym_sub] = ACTIONS(218),
    [anon_sym_subq] = ACTIONS(218),
    [anon_sym_subl] = ACTIONS(218),
    [anon_sym_subss] = ACTIONS(218),
    [anon_sym_subw] = ACTIONS(218),
    [anon_sym_subb] = ACTIONS(218),
    [anon_sym_subsd] = ACTIONS(218),
    [anon_sym_subpd] = ACTIONS(218),
    [anon_sym_sbb] = ACTIONS(218),
    [anon_sym_mul] = ACTIONS(218),
    [anon_sym_mulq] = ACTIONS(218),
    [anon_sym_mull] = ACTIONS(218),
    [anon_sym_mulss] = ACTIONS(218),
    [anon_sym_mulw] = ACTIONS(218),
    [anon_sym_mulb] = ACTIONS(218),
    [anon_sym_mulsd] = ACTIONS(218),
    [anon_sym_mulx] = ACTIONS(218),
    [anon_sym_imul] = ACTIONS(218),
    [anon_sym_neg] = ACTIONS(218),
    [anon_sym_negl] = ACTIONS(218),
    [anon_sym_negq] = ACTIONS(218),
    [anon_sym_fmulp] = ACTIONS(218),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(218),
    [anon_sym_pclmullqlqdq] = ACTIONS(218),
    [anon_sym_pclmullqhqdq] = ACTIONS(218),
    [anon_sym_vpclmullqhqdq] = ACTIONS(218),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(218),
    [anon_sym_pclmulhqhqdq] = ACTIONS(218),
    [anon_sym_vpclmullqlqdq] = ACTIONS(218),
    [anon_sym_bsf] = ACTIONS(218),
    [anon_sym_bsr] = ACTIONS(218),
    [anon_sym_bts] = ACTIONS(218),
    [anon_sym_bt] = ACTIONS(218),
    [anon_sym_btr] = ACTIONS(218),
    [anon_sym_btl] = ACTIONS(218),
    [anon_sym_setne] = ACTIONS(218),
    [anon_sym_setb] = ACTIONS(218),
    [anon_sym_sete] = ACTIONS(218),
    [anon_sym_setbe] = ACTIONS(218),
    [anon_sym_seta] = ACTIONS(218),
    [anon_sym_setge] = ACTIONS(218),
    [anon_sym_setae] = ACTIONS(218),
    [anon_sym_setl] = ACTIONS(218),
    [anon_sym_setle] = ACTIONS(218),
    [anon_sym_setg] = ACTIONS(218),
    [anon_sym_seto] = ACTIONS(218),
    [anon_sym_setnp] = ACTIONS(218),
    [anon_sym_setp] = ACTIONS(218),
    [anon_sym_setns] = ACTIONS(218),
    [anon_sym_test] = ACTIONS(218),
    [anon_sym_testb] = ACTIONS(218),
    [anon_sym_testl] = ACTIONS(218),
    [anon_sym_knotw] = ACTIONS(218),
    [anon_sym_vpcmpltud] = ACTIONS(218),
    [anon_sym_gs] = ACTIONS(218),
    [anon_sym_re] = ACTIONS(218),
    [anon_sym_ss] = ACTIONS(218),
    [anon_sym_leaveq] = ACTIONS(218),
    [anon_sym_retq] = ACTIONS(218),
    [anon_sym_bswap] = ACTIONS(218),
    [anon_sym_cbtw] = ACTIONS(218),
    [anon_sym_cltd] = ACTIONS(218),
    [anon_sym_cltq] = ACTIONS(218),
    [anon_sym_cmovbe] = ACTIONS(218),
    [anon_sym_cmovl] = ACTIONS(218),
    [anon_sym_cmovae] = ACTIONS(218),
    [anon_sym_cmovo] = ACTIONS(218),
    [anon_sym_cmovne] = ACTIONS(218),
    [anon_sym_cmovns] = ACTIONS(218),
    [anon_sym_cmovg] = ACTIONS(218),
    [anon_sym_cmovp] = ACTIONS(218),
    [anon_sym_cmove] = ACTIONS(218),
    [anon_sym_cmovge] = ACTIONS(218),
    [anon_sym_cmovb] = ACTIONS(218),
    [anon_sym_cmova] = ACTIONS(218),
    [anon_sym_cmovle] = ACTIONS(218),
    [anon_sym_cmovs] = ACTIONS(218),
    [anon_sym_cwtl] = ACTIONS(218),
    [anon_sym_cwtd] = ACTIONS(218),
    [anon_sym_cqto] = ACTIONS(218),
    [anon_sym_cvttsd2si] = ACTIONS(218),
    [anon_sym_cvtss2sd] = ACTIONS(218),
    [anon_sym_cvttss2si] = ACTIONS(218),
    [anon_sym_cvtsi2sd] = ACTIONS(218),
    [anon_sym_cvtsi2ss] = ACTIONS(218),
    [anon_sym_cvtsi2sdq] = ACTIONS(218),
    [anon_sym_cvtsi2sdl] = ACTIONS(218),
    [anon_sym_cvtsd2ss] = ACTIONS(218),
    [anon_sym_cvtsi2ssl] = ACTIONS(218),
    [anon_sym_mov] = ACTIONS(218),
    [anon_sym_movw] = ACTIONS(218),
    [anon_sym_movl] = ACTIONS(218),
    [anon_sym_movq] = ACTIONS(218),
    [anon_sym_movb] = ACTIONS(218),
    [anon_sym_movabs] = ACTIONS(218),
    [anon_sym_movsbw] = ACTIONS(218),
    [anon_sym_movsbq] = ACTIONS(218),
    [anon_sym_movsbl] = ACTIONS(218),
    [anon_sym_movswl] = ACTIONS(218),
    [anon_sym_movswq] = ACTIONS(218),
    [anon_sym_movzbw] = ACTIONS(218),
    [anon_sym_movzbq] = ACTIONS(218),
    [anon_sym_movzbl] = ACTIONS(218),
    [anon_sym_movzwl] = ACTIONS(218),
    [anon_sym_movaps] = ACTIONS(218),
    [anon_sym_movhlps] = ACTIONS(218),
    [anon_sym_movss] = ACTIONS(218),
    [anon_sym_movups] = ACTIONS(218),
    [anon_sym_movsd] = ACTIONS(218),
    [anon_sym_movd] = ACTIONS(218),
    [anon_sym_movhps] = ACTIONS(218),
    [anon_sym_movdqa] = ACTIONS(218),
    [anon_sym_movbe] = ACTIONS(218),
    [anon_sym_movapd] = ACTIONS(218),
    [anon_sym_movdqu] = ACTIONS(218),
    [anon_sym_xchg] = ACTIONS(218),
    [anon_sym_fildl] = ACTIONS(218),
    [anon_sym_fldt] = ACTIONS(218),
    [anon_sym_fstpl] = ACTIONS(218),
    [anon_sym_insb] = ACTIONS(218),
    [anon_sym_insl] = ACTIONS(218),
    [anon_sym_outsb] = ACTIONS(218),
    [anon_sym_outsl] = ACTIONS(218),
    [anon_sym_or] = ACTIONS(218),
    [anon_sym_orq] = ACTIONS(218),
    [anon_sym_orl] = ACTIONS(218),
    [anon_sym_orb] = ACTIONS(218),
    [anon_sym_orw] = ACTIONS(218),
    [anon_sym_xor] = ACTIONS(218),
    [anon_sym_xorl] = ACTIONS(218),
    [anon_sym_xorw] = ACTIONS(218),
    [anon_sym_xorps] = ACTIONS(218),
    [anon_sym_xorpd] = ACTIONS(218),
    [anon_sym_vxorps] = ACTIONS(218),
    [anon_sym_vpxord] = ACTIONS(218),
    [anon_sym_vpxor] = ACTIONS(218),
    [anon_sym_and] = ACTIONS(218),
    [anon_sym_andq] = ACTIONS(218),
    [anon_sym_andl] = ACTIONS(218),
    [anon_sym_andw] = ACTIONS(218),
    [anon_sym_andb] = ACTIONS(218),
    [anon_sym_andn] = ACTIONS(218),
    [anon_sym_andpd] = ACTIONS(218),
    [anon_sym_pand] = ACTIONS(218),
    [anon_sym_pandn] = ACTIONS(218),
    [anon_sym_andps] = ACTIONS(218),
    [anon_sym_vpand] = ACTIONS(218),
    [anon_sym_not] = ACTIONS(218),
    [anon_sym_notl] = ACTIONS(218),
    [anon_sym_notw] = ACTIONS(218),
    [anon_sym_cpuid] = ACTIONS(218),
    [anon_sym_lea] = ACTIONS(218),
    [anon_sym_popcnt] = ACTIONS(218),
    [anon_sym_nop] = ACTIONS(218),
    [anon_sym_nopl] = ACTIONS(218),
    [anon_sym_nopw] = ACTIONS(218),
    [anon_sym_ud2] = ACTIONS(218),
    [anon_sym_data16] = ACTIONS(218),
    [anon_sym_sha1rnds4] = ACTIONS(218),
    [anon_sym_addr32] = ACTIONS(218),
    [anon_sym_sha1msg1] = ACTIONS(218),
    [anon_sym_sha1msg2] = ACTIONS(218),
    [anon_sym_sha1nexte] = ACTIONS(218),
    [anon_sym_endbr64] = ACTIONS(218),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(218),
    [anon_sym_packuswb] = ACTIONS(218),
    [anon_sym_punpckhbw] = ACTIONS(218),
    [anon_sym_punpckhdq] = ACTIONS(218),
    [anon_sym_punpckhwd] = ACTIONS(218),
    [anon_sym_punpcklbw] = ACTIONS(218),
    [anon_sym_punpckldq] = ACTIONS(218),
    [anon_sym_punpcklwd] = ACTIONS(218),
    [anon_sym_vpunpcklwd] = ACTIONS(218),
    [anon_sym_vpunpckldq] = ACTIONS(218),
    [anon_sym_punpcklqdq] = ACTIONS(218),
    [anon_sym_punpckhqdq] = ACTIONS(218),
    [anon_sym_vpunpckhqdq] = ACTIONS(218),
    [anon_sym_vpunpckhdq] = ACTIONS(218),
    [anon_sym_vpunpcklqdq] = ACTIONS(218),
    [anon_sym_vpunpckhwd] = ACTIONS(218),
    [anon_sym_rol] = ACTIONS(218),
    [anon_sym_ror] = ACTIONS(218),
    [anon_sym_sar] = ACTIONS(218),
    [anon_sym_sarl] = ACTIONS(218),
    [anon_sym_sarx] = ACTIONS(218),
    [anon_sym_shl] = ACTIONS(218),
    [anon_sym_shll] = ACTIONS(218),
    [anon_sym_shld] = ACTIONS(218),
    [anon_sym_shlx] = ACTIONS(218),
    [anon_sym_shlq] = ACTIONS(218),
    [anon_sym_shr] = ACTIONS(218),
    [anon_sym_shrq] = ACTIONS(218),
    [anon_sym_shrd] = ACTIONS(218),
    [anon_sym_shrl] = ACTIONS(218),
    [anon_sym_shrx] = ACTIONS(218),
    [anon_sym_vprord] = ACTIONS(218),
    [anon_sym_vprorq] = ACTIONS(218),
    [anon_sym_rorl] = ACTIONS(218),
    [anon_sym_roll] = ACTIONS(218),
    [anon_sym_push] = ACTIONS(218),
    [anon_sym_pushq] = ACTIONS(218),
    [anon_sym_pop] = ACTIONS(218),
    [anon_sym_movslq] = ACTIONS(218),
    [anon_sym_movsb] = ACTIONS(218),
    [anon_sym_rep] = ACTIONS(218),
    [anon_sym_repz] = ACTIONS(218),
    [anon_sym_repnz] = ACTIONS(218),
    [anon_sym_rex] = ACTIONS(218),
    [anon_sym_rex_DOTWB] = ACTIONS(218),
    [anon_sym_rex_DOTWRB] = ACTIONS(218),
    [anon_sym_rex_DOTRXB] = ACTIONS(218),
    [anon_sym_rex_DOTB] = ACTIONS(218),
    [anon_sym_rex_DOTWRXB] = ACTIONS(218),
    [anon_sym_rex_DOTXB] = ACTIONS(218),
    [anon_sym_rex_DOTW] = ACTIONS(218),
    [anon_sym_rex_DOTRB] = ACTIONS(218),
    [anon_sym_xgetbv] = ACTIONS(218),
    [anon_sym_fs] = ACTIONS(218),
    [anon_sym_kmovw] = ACTIONS(218),
    [anon_sym_adcx] = ACTIONS(218),
    [anon_sym_adox] = ACTIONS(218),
    [anon_sym_aesdec] = ACTIONS(218),
    [anon_sym_aesdeclast] = ACTIONS(218),
    [anon_sym_aesenc] = ACTIONS(218),
    [anon_sym_aesenclast] = ACTIONS(218),
    [anon_sym_vaesenc] = ACTIONS(218),
    [anon_sym_vaesenclast] = ACTIONS(218),
    [anon_sym_aeskeygenassist] = ACTIONS(218),
    [anon_sym_vblendps] = ACTIONS(218),
    [anon_sym_vblendvps] = ACTIONS(218),
    [anon_sym_vcvtusi2sd] = ACTIONS(218),
    [anon_sym_vdivsd] = ACTIONS(218),
    [anon_sym_vmovaps] = ACTIONS(218),
    [anon_sym_vmovapd] = ACTIONS(218),
    [anon_sym_vmovss] = ACTIONS(218),
    [anon_sym_vmovdqu] = ACTIONS(218),
    [anon_sym_vmovdqu64] = ACTIONS(218),
    [anon_sym_vmovdqu32] = ACTIONS(218),
    [anon_sym_vmovdqa] = ACTIONS(218),
    [anon_sym_vmovdqa32] = ACTIONS(218),
    [anon_sym_vmovdqa64] = ACTIONS(218),
    [anon_sym_vmovq] = ACTIONS(218),
    [anon_sym_vmovups] = ACTIONS(218),
    [anon_sym_vmovd] = ACTIONS(218),
    [anon_sym_vmovsd] = ACTIONS(218),
    [anon_sym_vmulsd] = ACTIONS(218),
    [anon_sym_vpackusdw] = ACTIONS(218),
    [anon_sym_vpaddd] = ACTIONS(218),
    [anon_sym_vpaddb] = ACTIONS(218),
    [anon_sym_vpaddq] = ACTIONS(218),
    [anon_sym_vpaddw] = ACTIONS(218),
    [anon_sym_vpalignr] = ACTIONS(218),
    [anon_sym_vpcmpgtd] = ACTIONS(218),
    [anon_sym_vpextrw] = ACTIONS(218),
    [anon_sym_vpinsrw] = ACTIONS(218),
    [anon_sym_vpinsrd] = ACTIONS(218),
    [anon_sym_vpinsrq] = ACTIONS(218),
    [anon_sym_vpinsrb] = ACTIONS(218),
    [anon_sym_vpmaddubsw] = ACTIONS(218),
    [anon_sym_vpmaddwd] = ACTIONS(218),
    [anon_sym_vpmullw] = ACTIONS(218),
    [anon_sym_vpmuludq] = ACTIONS(218),
    [anon_sym_vpor] = ACTIONS(218),
    [anon_sym_vpshufb] = ACTIONS(218),
    [anon_sym_vpshufd] = ACTIONS(218),
    [anon_sym_vpslldq] = ACTIONS(218),
    [anon_sym_vpslld] = ACTIONS(218),
    [anon_sym_vpsllq] = ACTIONS(218),
    [anon_sym_vpsllw] = ACTIONS(218),
    [anon_sym_vpsrldq] = ACTIONS(218),
    [anon_sym_vpsrld] = ACTIONS(218),
    [anon_sym_vpsrlq] = ACTIONS(218),
    [anon_sym_vpsrlw] = ACTIONS(218),
    [anon_sym_vpsubusw] = ACTIONS(218),
    [anon_sym_vpsubq] = ACTIONS(218),
    [anon_sym_vpsubd] = ACTIONS(218),
    [anon_sym_vpsubw] = ACTIONS(218),
    [anon_sym_vshufps] = ACTIONS(218),
    [anon_sym_vsubsd] = ACTIONS(218),
    [anon_sym_vucomisd] = ACTIONS(218),
    [anon_sym_vucomiss] = ACTIONS(218),
    [anon_sym_vunpckhpd] = ACTIONS(218),
    [anon_sym_vunpckhps] = ACTIONS(218),
    [anon_sym_vunpcklpd] = ACTIONS(218),
    [anon_sym_vunpcklps] = ACTIONS(218),
    [anon_sym_vbroadcastss] = ACTIONS(218),
    [anon_sym_vinsertf128] = ACTIONS(218),
    [anon_sym_vperm2f128] = ACTIONS(218),
    [anon_sym_vzeroall] = ACTIONS(218),
    [anon_sym_vzeroupper] = ACTIONS(218),
    [anon_sym_vshufi32x4] = ACTIONS(218),
    [anon_sym_vshufi64x2] = ACTIONS(218),
    [anon_sym_vpblendmd] = ACTIONS(218),
    [anon_sym_vextracti128] = ACTIONS(218),
    [anon_sym_vextracti32x4] = ACTIONS(218),
    [anon_sym_vinserti128] = ACTIONS(218),
    [anon_sym_vinserti32x4] = ACTIONS(218),
    [anon_sym_vinserti64x4] = ACTIONS(218),
    [anon_sym_vpblendd] = ACTIONS(218),
    [anon_sym_vpbroadcastq] = ACTIONS(218),
    [anon_sym_vpbroadcastd] = ACTIONS(218),
    [anon_sym_vbroadcasti128] = ACTIONS(218),
    [anon_sym_vbroadcasti32x4] = ACTIONS(218),
    [anon_sym_vperm2i128] = ACTIONS(218),
    [anon_sym_vpermd] = ACTIONS(218),
    [anon_sym_vpermq] = ACTIONS(218),
    [anon_sym_vpermt2d] = ACTIONS(218),
    [anon_sym_vpermi2d] = ACTIONS(218),
    [anon_sym_tzcnt] = ACTIONS(218),
    [anon_sym_rorx] = ACTIONS(218),
    [anon_sym_psubd] = ACTIONS(218),
    [anon_sym_pmaddwd] = ACTIONS(218),
    [anon_sym_pxor] = ACTIONS(218),
    [anon_sym_psrad] = ACTIONS(218),
    [anon_sym_pslld] = ACTIONS(218),
    [anon_sym_pcmpgtd] = ACTIONS(218),
    [anon_sym_pcmpeqd] = ACTIONS(218),
    [anon_sym_por] = ACTIONS(218),
    [anon_sym_paddw] = ACTIONS(218),
    [anon_sym_psubusw] = ACTIONS(218),
    [anon_sym_pcmpeqb] = ACTIONS(218),
    [anon_sym_psubusb] = ACTIONS(218),
    [anon_sym_psrld] = ACTIONS(218),
    [anon_sym_psrlw] = ACTIONS(218),
    [anon_sym_psllq] = ACTIONS(218),
    [anon_sym_paddd] = ACTIONS(218),
    [anon_sym_psrlq] = ACTIONS(218),
    [anon_sym_psubb] = ACTIONS(218),
    [anon_sym_maxss] = ACTIONS(218),
    [anon_sym_pmovmskb] = ACTIONS(218),
    [anon_sym_pinsrw] = ACTIONS(218),
    [anon_sym_minss] = ACTIONS(218),
    [anon_sym_prefetcht1] = ACTIONS(218),
    [anon_sym_prefetcht0] = ACTIONS(218),
    [anon_sym_pextrw] = ACTIONS(218),
    [anon_sym_ucomiss] = ACTIONS(218),
    [anon_sym_shufps] = ACTIONS(218),
    [anon_sym_addsd] = ACTIONS(218),
    [anon_sym_paddq] = ACTIONS(218),
    [anon_sym_psubq] = ACTIONS(218),
    [anon_sym_pshuflw] = ACTIONS(218),
    [anon_sym_pmuludq] = ACTIONS(218),
    [anon_sym_pshufd] = ACTIONS(218),
    [anon_sym_minsd] = ACTIONS(218),
    [anon_sym_pshufhw] = ACTIONS(218),
    [anon_sym_mfence] = ACTIONS(218),
    [anon_sym_maxsd] = ACTIONS(218),
    [anon_sym_ucomisd] = ACTIONS(218),
    [anon_sym_shufpd] = ACTIONS(218),
    [anon_sym_pslldq] = ACTIONS(218),
    [anon_sym_unpckhpd] = ACTIONS(218),
    [anon_sym_psrldq] = ACTIONS(218),
    [anon_sym_palignr] = ACTIONS(218),
    [anon_sym_pshufb] = ACTIONS(218),
    [anon_sym_pmaddubsw] = ACTIONS(218),
    [anon_sym_pinsrb] = ACTIONS(218),
    [anon_sym_pblendw] = ACTIONS(218),
    [anon_sym_pextrq] = ACTIONS(218),
    [anon_sym_blendvps] = ACTIONS(218),
    [anon_sym_pextrb] = ACTIONS(218),
    [anon_sym_pinsrd] = ACTIONS(218),
    [anon_sym_femms] = ACTIONS(218),
    [anon_sym_f] = ACTIONS(218),
    [aux_sym_operand_token1] = ACTIONS(218),
    [anon_sym_LT] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(218),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(218),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(218),
    [anon_sym_PERCENTrbx] = ACTIONS(218),
    [anon_sym_PERCENTrcx] = ACTIONS(218),
    [anon_sym_PERCENTrdx] = ACTIONS(218),
    [anon_sym_PERCENTrsi] = ACTIONS(218),
    [anon_sym_PERCENTrdi] = ACTIONS(218),
    [anon_sym_PERCENTrbp] = ACTIONS(218),
    [anon_sym_PERCENTrsp] = ACTIONS(218),
    [anon_sym_PERCENTr8] = ACTIONS(218),
    [anon_sym_PERCENTr9] = ACTIONS(218),
    [anon_sym_PERCENTr10] = ACTIONS(218),
    [anon_sym_PERCENTr11] = ACTIONS(218),
    [anon_sym_PERCENTr12] = ACTIONS(218),
    [anon_sym_PERCENTr13] = ACTIONS(218),
    [anon_sym_PERCENTr14] = ACTIONS(218),
    [anon_sym_PERCENTr15] = ACTIONS(218),
    [anon_sym_PERCENTeax] = ACTIONS(218),
    [anon_sym_PERCENTecx] = ACTIONS(218),
    [anon_sym_PERCENTedx] = ACTIONS(218),
    [anon_sym_PERCENTebx] = ACTIONS(218),
    [anon_sym_PERCENTesi] = ACTIONS(218),
    [anon_sym_PERCENTedi] = ACTIONS(218),
    [anon_sym_PERCENTebp] = ACTIONS(218),
    [anon_sym_PERCENTesp] = ACTIONS(218),
    [anon_sym_PERCENTr8d] = ACTIONS(218),
    [anon_sym_PERCENTr9d] = ACTIONS(218),
    [anon_sym_PERCENTr10d] = ACTIONS(218),
    [anon_sym_PERCENTr11d] = ACTIONS(218),
    [anon_sym_PERCENTr12d] = ACTIONS(218),
    [anon_sym_PERCENTr13d] = ACTIONS(218),
    [anon_sym_PERCENTr14d] = ACTIONS(218),
    [anon_sym_PERCENTr15d] = ACTIONS(218),
    [anon_sym_PERCENTax] = ACTIONS(218),
    [anon_sym_PERCENTcx] = ACTIONS(218),
    [anon_sym_PERCENTdx] = ACTIONS(218),
    [anon_sym_PERCENTbx] = ACTIONS(218),
    [anon_sym_PERCENTsi] = ACTIONS(218),
    [anon_sym_PERCENTdi] = ACTIONS(218),
    [anon_sym_PERCENTsp] = ACTIONS(218),
    [anon_sym_PERCENTbp] = ACTIONS(218),
    [anon_sym_PERCENTr8w] = ACTIONS(218),
    [anon_sym_PERCENTr9w] = ACTIONS(218),
    [anon_sym_PERCENTr10w] = ACTIONS(218),
    [anon_sym_PERCENTr11w] = ACTIONS(218),
    [anon_sym_PERCENTr12w] = ACTIONS(218),
    [anon_sym_PERCENTr13w] = ACTIONS(218),
    [anon_sym_PERCENTr14w] = ACTIONS(218),
    [anon_sym_PERCENTr15w] = ACTIONS(218),
    [anon_sym_PERCENTal] = ACTIONS(218),
    [anon_sym_PERCENTcl] = ACTIONS(218),
    [anon_sym_PERCENTdl] = ACTIONS(218),
    [anon_sym_PERCENTbl] = ACTIONS(218),
    [anon_sym_PERCENTsil] = ACTIONS(218),
    [anon_sym_PERCENTdil] = ACTIONS(218),
    [anon_sym_PERCENTspl] = ACTIONS(218),
    [anon_sym_PERCENTbpl] = ACTIONS(218),
    [anon_sym_PERCENTr8b] = ACTIONS(218),
    [anon_sym_PERCENTr9b] = ACTIONS(218),
    [anon_sym_PERCENTr10b] = ACTIONS(218),
    [anon_sym_PERCENTr11b] = ACTIONS(218),
    [anon_sym_PERCENTr12b] = ACTIONS(218),
    [anon_sym_PERCENTr13b] = ACTIONS(218),
    [anon_sym_PERCENTr14b] = ACTIONS(218),
    [anon_sym_PERCENTr15b] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_movsq] = ACTIONS(218),
    [anon_sym_cmpsb] = ACTIONS(218),
    [anon_sym_cmpxchg] = ACTIONS(218),
    [anon_sym_movsl] = ACTIONS(218),
    [anon_sym_callq] = ACTIONS(218),
    [anon_sym_ja] = ACTIONS(218),
    [anon_sym_jae] = ACTIONS(218),
    [anon_sym_jb] = ACTIONS(218),
    [anon_sym_jbe] = ACTIONS(218),
    [anon_sym_je] = ACTIONS(218),
    [anon_sym_jg] = ACTIONS(218),
    [anon_sym_jge] = ACTIONS(218),
    [anon_sym_jl] = ACTIONS(218),
    [anon_sym_jle] = ACTIONS(218),
    [anon_sym_jmp] = ACTIONS(218),
    [anon_sym_jmpq] = ACTIONS(218),
    [anon_sym_jne] = ACTIONS(218),
    [anon_sym_jno] = ACTIONS(218),
    [anon_sym_jns] = ACTIONS(218),
    [anon_sym_jo] = ACTIONS(218),
    [anon_sym_jp] = ACTIONS(218),
    [anon_sym_jrcxz] = ACTIONS(218),
    [anon_sym_js] = ACTIONS(218),
    [anon_sym_notrack] = ACTIONS(218),
    [anon_sym_PERCENTcr0] = ACTIONS(218),
    [anon_sym_PERCENTcr2] = ACTIONS(218),
    [anon_sym_PERCENTcr3] = ACTIONS(218),
    [anon_sym_PERCENTcr4] = ACTIONS(218),
    [anon_sym_PERCENTrip] = ACTIONS(218),
    [anon_sym_PERCENTeip] = ACTIONS(218),
    [anon_sym_PERCENTip] = ACTIONS(218),
    [anon_sym_PERCENTst] = ACTIONS(218),
    [anon_sym_PERCENT] = ACTIONS(218),
  },
  [18] = {
    [aux_sym_comment_token1] = ACTIONS(222),
    [aux_sym_comment_token2] = ACTIONS(222),
    [sym__line_break] = ACTIONS(224),
    [anon_sym_adc] = ACTIONS(222),
    [anon_sym_add] = ACTIONS(222),
    [anon_sym_addq] = ACTIONS(222),
    [anon_sym_addl] = ACTIONS(222),
    [anon_sym_addss] = ACTIONS(222),
    [anon_sym_addw] = ACTIONS(222),
    [anon_sym_addb] = ACTIONS(222),
    [anon_sym_cmp] = ACTIONS(222),
    [anon_sym_cmpb] = ACTIONS(222),
    [anon_sym_cmpw] = ACTIONS(222),
    [anon_sym_cmpl] = ACTIONS(222),
    [anon_sym_cmpq] = ACTIONS(222),
    [anon_sym_comiss] = ACTIONS(222),
    [anon_sym_comisd] = ACTIONS(222),
    [anon_sym_inc] = ACTIONS(222),
    [anon_sym_incl] = ACTIONS(222),
    [anon_sym_dec] = ACTIONS(222),
    [anon_sym_div] = ACTIONS(222),
    [anon_sym_divq] = ACTIONS(222),
    [anon_sym_divl] = ACTIONS(222),
    [anon_sym_divss] = ACTIONS(222),
    [anon_sym_divsd] = ACTIONS(222),
    [anon_sym_idiv] = ACTIONS(222),
    [anon_sym_idivl] = ACTIONS(222),
    [anon_sym_sub] = ACTIONS(222),
    [anon_sym_subq] = ACTIONS(222),
    [anon_sym_subl] = ACTIONS(222),
    [anon_sym_subss] = ACTIONS(222),
    [anon_sym_subw] = ACTIONS(222),
    [anon_sym_subb] = ACTIONS(222),
    [anon_sym_subsd] = ACTIONS(222),
    [anon_sym_subpd] = ACTIONS(222),
    [anon_sym_sbb] = ACTIONS(222),
    [anon_sym_mul] = ACTIONS(222),
    [anon_sym_mulq] = ACTIONS(222),
    [anon_sym_mull] = ACTIONS(222),
    [anon_sym_mulss] = ACTIONS(222),
    [anon_sym_mulw] = ACTIONS(222),
    [anon_sym_mulb] = ACTIONS(222),
    [anon_sym_mulsd] = ACTIONS(222),
    [anon_sym_mulx] = ACTIONS(222),
    [anon_sym_imul] = ACTIONS(222),
    [anon_sym_neg] = ACTIONS(222),
    [anon_sym_negl] = ACTIONS(222),
    [anon_sym_negq] = ACTIONS(222),
    [anon_sym_fmulp] = ACTIONS(222),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(222),
    [anon_sym_pclmullqlqdq] = ACTIONS(222),
    [anon_sym_pclmullqhqdq] = ACTIONS(222),
    [anon_sym_vpclmullqhqdq] = ACTIONS(222),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(222),
    [anon_sym_pclmulhqhqdq] = ACTIONS(222),
    [anon_sym_vpclmullqlqdq] = ACTIONS(222),
    [anon_sym_bsf] = ACTIONS(222),
    [anon_sym_bsr] = ACTIONS(222),
    [anon_sym_bts] = ACTIONS(222),
    [anon_sym_bt] = ACTIONS(222),
    [anon_sym_btr] = ACTIONS(222),
    [anon_sym_btl] = ACTIONS(222),
    [anon_sym_setne] = ACTIONS(222),
    [anon_sym_setb] = ACTIONS(222),
    [anon_sym_sete] = ACTIONS(222),
    [anon_sym_setbe] = ACTIONS(222),
    [anon_sym_seta] = ACTIONS(222),
    [anon_sym_setge] = ACTIONS(222),
    [anon_sym_setae] = ACTIONS(222),
    [anon_sym_setl] = ACTIONS(222),
    [anon_sym_setle] = ACTIONS(222),
    [anon_sym_setg] = ACTIONS(222),
    [anon_sym_seto] = ACTIONS(222),
    [anon_sym_setnp] = ACTIONS(222),
    [anon_sym_setp] = ACTIONS(222),
    [anon_sym_setns] = ACTIONS(222),
    [anon_sym_test] = ACTIONS(222),
    [anon_sym_testb] = ACTIONS(222),
    [anon_sym_testl] = ACTIONS(222),
    [anon_sym_knotw] = ACTIONS(222),
    [anon_sym_vpcmpltud] = ACTIONS(222),
    [anon_sym_gs] = ACTIONS(222),
    [anon_sym_re] = ACTIONS(222),
    [anon_sym_ss] = ACTIONS(222),
    [anon_sym_leaveq] = ACTIONS(222),
    [anon_sym_retq] = ACTIONS(222),
    [anon_sym_bswap] = ACTIONS(222),
    [anon_sym_cbtw] = ACTIONS(222),
    [anon_sym_cltd] = ACTIONS(222),
    [anon_sym_cltq] = ACTIONS(222),
    [anon_sym_cmovbe] = ACTIONS(222),
    [anon_sym_cmovl] = ACTIONS(222),
    [anon_sym_cmovae] = ACTIONS(222),
    [anon_sym_cmovo] = ACTIONS(222),
    [anon_sym_cmovne] = ACTIONS(222),
    [anon_sym_cmovns] = ACTIONS(222),
    [anon_sym_cmovg] = ACTIONS(222),
    [anon_sym_cmovp] = ACTIONS(222),
    [anon_sym_cmove] = ACTIONS(222),
    [anon_sym_cmovge] = ACTIONS(222),
    [anon_sym_cmovb] = ACTIONS(222),
    [anon_sym_cmova] = ACTIONS(222),
    [anon_sym_cmovle] = ACTIONS(222),
    [anon_sym_cmovs] = ACTIONS(222),
    [anon_sym_cwtl] = ACTIONS(222),
    [anon_sym_cwtd] = ACTIONS(222),
    [anon_sym_cqto] = ACTIONS(222),
    [anon_sym_cvttsd2si] = ACTIONS(222),
    [anon_sym_cvtss2sd] = ACTIONS(222),
    [anon_sym_cvttss2si] = ACTIONS(222),
    [anon_sym_cvtsi2sd] = ACTIONS(222),
    [anon_sym_cvtsi2ss] = ACTIONS(222),
    [anon_sym_cvtsi2sdq] = ACTIONS(222),
    [anon_sym_cvtsi2sdl] = ACTIONS(222),
    [anon_sym_cvtsd2ss] = ACTIONS(222),
    [anon_sym_cvtsi2ssl] = ACTIONS(222),
    [anon_sym_mov] = ACTIONS(222),
    [anon_sym_movw] = ACTIONS(222),
    [anon_sym_movl] = ACTIONS(222),
    [anon_sym_movq] = ACTIONS(222),
    [anon_sym_movb] = ACTIONS(222),
    [anon_sym_movabs] = ACTIONS(222),
    [anon_sym_movsbw] = ACTIONS(222),
    [anon_sym_movsbq] = ACTIONS(222),
    [anon_sym_movsbl] = ACTIONS(222),
    [anon_sym_movswl] = ACTIONS(222),
    [anon_sym_movswq] = ACTIONS(222),
    [anon_sym_movzbw] = ACTIONS(222),
    [anon_sym_movzbq] = ACTIONS(222),
    [anon_sym_movzbl] = ACTIONS(222),
    [anon_sym_movzwl] = ACTIONS(222),
    [anon_sym_movaps] = ACTIONS(222),
    [anon_sym_movhlps] = ACTIONS(222),
    [anon_sym_movss] = ACTIONS(222),
    [anon_sym_movups] = ACTIONS(222),
    [anon_sym_movsd] = ACTIONS(222),
    [anon_sym_movd] = ACTIONS(222),
    [anon_sym_movhps] = ACTIONS(222),
    [anon_sym_movdqa] = ACTIONS(222),
    [anon_sym_movbe] = ACTIONS(222),
    [anon_sym_movapd] = ACTIONS(222),
    [anon_sym_movdqu] = ACTIONS(222),
    [anon_sym_xchg] = ACTIONS(222),
    [anon_sym_fildl] = ACTIONS(222),
    [anon_sym_fldt] = ACTIONS(222),
    [anon_sym_fstpl] = ACTIONS(222),
    [anon_sym_insb] = ACTIONS(222),
    [anon_sym_insl] = ACTIONS(222),
    [anon_sym_outsb] = ACTIONS(222),
    [anon_sym_outsl] = ACTIONS(222),
    [anon_sym_or] = ACTIONS(222),
    [anon_sym_orq] = ACTIONS(222),
    [anon_sym_orl] = ACTIONS(222),
    [anon_sym_orb] = ACTIONS(222),
    [anon_sym_orw] = ACTIONS(222),
    [anon_sym_xor] = ACTIONS(222),
    [anon_sym_xorl] = ACTIONS(222),
    [anon_sym_xorw] = ACTIONS(222),
    [anon_sym_xorps] = ACTIONS(222),
    [anon_sym_xorpd] = ACTIONS(222),
    [anon_sym_vxorps] = ACTIONS(222),
    [anon_sym_vpxord] = ACTIONS(222),
    [anon_sym_vpxor] = ACTIONS(222),
    [anon_sym_and] = ACTIONS(222),
    [anon_sym_andq] = ACTIONS(222),
    [anon_sym_andl] = ACTIONS(222),
    [anon_sym_andw] = ACTIONS(222),
    [anon_sym_andb] = ACTIONS(222),
    [anon_sym_andn] = ACTIONS(222),
    [anon_sym_andpd] = ACTIONS(222),
    [anon_sym_pand] = ACTIONS(222),
    [anon_sym_pandn] = ACTIONS(222),
    [anon_sym_andps] = ACTIONS(222),
    [anon_sym_vpand] = ACTIONS(222),
    [anon_sym_not] = ACTIONS(222),
    [anon_sym_notl] = ACTIONS(222),
    [anon_sym_notw] = ACTIONS(222),
    [anon_sym_cpuid] = ACTIONS(222),
    [anon_sym_lea] = ACTIONS(222),
    [anon_sym_popcnt] = ACTIONS(222),
    [anon_sym_nop] = ACTIONS(222),
    [anon_sym_nopl] = ACTIONS(222),
    [anon_sym_nopw] = ACTIONS(222),
    [anon_sym_ud2] = ACTIONS(222),
    [anon_sym_data16] = ACTIONS(222),
    [anon_sym_sha1rnds4] = ACTIONS(222),
    [anon_sym_addr32] = ACTIONS(222),
    [anon_sym_sha1msg1] = ACTIONS(222),
    [anon_sym_sha1msg2] = ACTIONS(222),
    [anon_sym_sha1nexte] = ACTIONS(222),
    [anon_sym_endbr64] = ACTIONS(222),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(222),
    [anon_sym_packuswb] = ACTIONS(222),
    [anon_sym_punpckhbw] = ACTIONS(222),
    [anon_sym_punpckhdq] = ACTIONS(222),
    [anon_sym_punpckhwd] = ACTIONS(222),
    [anon_sym_punpcklbw] = ACTIONS(222),
    [anon_sym_punpckldq] = ACTIONS(222),
    [anon_sym_punpcklwd] = ACTIONS(222),
    [anon_sym_vpunpcklwd] = ACTIONS(222),
    [anon_sym_vpunpckldq] = ACTIONS(222),
    [anon_sym_punpcklqdq] = ACTIONS(222),
    [anon_sym_punpckhqdq] = ACTIONS(222),
    [anon_sym_vpunpckhqdq] = ACTIONS(222),
    [anon_sym_vpunpckhdq] = ACTIONS(222),
    [anon_sym_vpunpcklqdq] = ACTIONS(222),
    [anon_sym_vpunpckhwd] = ACTIONS(222),
    [anon_sym_rol] = ACTIONS(222),
    [anon_sym_ror] = ACTIONS(222),
    [anon_sym_sar] = ACTIONS(222),
    [anon_sym_sarl] = ACTIONS(222),
    [anon_sym_sarx] = ACTIONS(222),
    [anon_sym_shl] = ACTIONS(222),
    [anon_sym_shll] = ACTIONS(222),
    [anon_sym_shld] = ACTIONS(222),
    [anon_sym_shlx] = ACTIONS(222),
    [anon_sym_shlq] = ACTIONS(222),
    [anon_sym_shr] = ACTIONS(222),
    [anon_sym_shrq] = ACTIONS(222),
    [anon_sym_shrd] = ACTIONS(222),
    [anon_sym_shrl] = ACTIONS(222),
    [anon_sym_shrx] = ACTIONS(222),
    [anon_sym_vprord] = ACTIONS(222),
    [anon_sym_vprorq] = ACTIONS(222),
    [anon_sym_rorl] = ACTIONS(222),
    [anon_sym_roll] = ACTIONS(222),
    [anon_sym_push] = ACTIONS(222),
    [anon_sym_pushq] = ACTIONS(222),
    [anon_sym_pop] = ACTIONS(222),
    [anon_sym_movslq] = ACTIONS(222),
    [anon_sym_movsb] = ACTIONS(222),
    [anon_sym_rep] = ACTIONS(222),
    [anon_sym_repz] = ACTIONS(222),
    [anon_sym_repnz] = ACTIONS(222),
    [anon_sym_rex] = ACTIONS(222),
    [anon_sym_rex_DOTWB] = ACTIONS(222),
    [anon_sym_rex_DOTWRB] = ACTIONS(222),
    [anon_sym_rex_DOTRXB] = ACTIONS(222),
    [anon_sym_rex_DOTB] = ACTIONS(222),
    [anon_sym_rex_DOTWRXB] = ACTIONS(222),
    [anon_sym_rex_DOTXB] = ACTIONS(222),
    [anon_sym_rex_DOTW] = ACTIONS(222),
    [anon_sym_rex_DOTRB] = ACTIONS(222),
    [anon_sym_xgetbv] = ACTIONS(222),
    [anon_sym_fs] = ACTIONS(222),
    [anon_sym_kmovw] = ACTIONS(222),
    [anon_sym_adcx] = ACTIONS(222),
    [anon_sym_adox] = ACTIONS(222),
    [anon_sym_aesdec] = ACTIONS(222),
    [anon_sym_aesdeclast] = ACTIONS(222),
    [anon_sym_aesenc] = ACTIONS(222),
    [anon_sym_aesenclast] = ACTIONS(222),
    [anon_sym_vaesenc] = ACTIONS(222),
    [anon_sym_vaesenclast] = ACTIONS(222),
    [anon_sym_aeskeygenassist] = ACTIONS(222),
    [anon_sym_vblendps] = ACTIONS(222),
    [anon_sym_vblendvps] = ACTIONS(222),
    [anon_sym_vcvtusi2sd] = ACTIONS(222),
    [anon_sym_vdivsd] = ACTIONS(222),
    [anon_sym_vmovaps] = ACTIONS(222),
    [anon_sym_vmovapd] = ACTIONS(222),
    [anon_sym_vmovss] = ACTIONS(222),
    [anon_sym_vmovdqu] = ACTIONS(222),
    [anon_sym_vmovdqu64] = ACTIONS(222),
    [anon_sym_vmovdqu32] = ACTIONS(222),
    [anon_sym_vmovdqa] = ACTIONS(222),
    [anon_sym_vmovdqa32] = ACTIONS(222),
    [anon_sym_vmovdqa64] = ACTIONS(222),
    [anon_sym_vmovq] = ACTIONS(222),
    [anon_sym_vmovups] = ACTIONS(222),
    [anon_sym_vmovd] = ACTIONS(222),
    [anon_sym_vmovsd] = ACTIONS(222),
    [anon_sym_vmulsd] = ACTIONS(222),
    [anon_sym_vpackusdw] = ACTIONS(222),
    [anon_sym_vpaddd] = ACTIONS(222),
    [anon_sym_vpaddb] = ACTIONS(222),
    [anon_sym_vpaddq] = ACTIONS(222),
    [anon_sym_vpaddw] = ACTIONS(222),
    [anon_sym_vpalignr] = ACTIONS(222),
    [anon_sym_vpcmpgtd] = ACTIONS(222),
    [anon_sym_vpextrw] = ACTIONS(222),
    [anon_sym_vpinsrw] = ACTIONS(222),
    [anon_sym_vpinsrd] = ACTIONS(222),
    [anon_sym_vpinsrq] = ACTIONS(222),
    [anon_sym_vpinsrb] = ACTIONS(222),
    [anon_sym_vpmaddubsw] = ACTIONS(222),
    [anon_sym_vpmaddwd] = ACTIONS(222),
    [anon_sym_vpmullw] = ACTIONS(222),
    [anon_sym_vpmuludq] = ACTIONS(222),
    [anon_sym_vpor] = ACTIONS(222),
    [anon_sym_vpshufb] = ACTIONS(222),
    [anon_sym_vpshufd] = ACTIONS(222),
    [anon_sym_vpslldq] = ACTIONS(222),
    [anon_sym_vpslld] = ACTIONS(222),
    [anon_sym_vpsllq] = ACTIONS(222),
    [anon_sym_vpsllw] = ACTIONS(222),
    [anon_sym_vpsrldq] = ACTIONS(222),
    [anon_sym_vpsrld] = ACTIONS(222),
    [anon_sym_vpsrlq] = ACTIONS(222),
    [anon_sym_vpsrlw] = ACTIONS(222),
    [anon_sym_vpsubusw] = ACTIONS(222),
    [anon_sym_vpsubq] = ACTIONS(222),
    [anon_sym_vpsubd] = ACTIONS(222),
    [anon_sym_vpsubw] = ACTIONS(222),
    [anon_sym_vshufps] = ACTIONS(222),
    [anon_sym_vsubsd] = ACTIONS(222),
    [anon_sym_vucomisd] = ACTIONS(222),
    [anon_sym_vucomiss] = ACTIONS(222),
    [anon_sym_vunpckhpd] = ACTIONS(222),
    [anon_sym_vunpckhps] = ACTIONS(222),
    [anon_sym_vunpcklpd] = ACTIONS(222),
    [anon_sym_vunpcklps] = ACTIONS(222),
    [anon_sym_vbroadcastss] = ACTIONS(222),
    [anon_sym_vinsertf128] = ACTIONS(222),
    [anon_sym_vperm2f128] = ACTIONS(222),
    [anon_sym_vzeroall] = ACTIONS(222),
    [anon_sym_vzeroupper] = ACTIONS(222),
    [anon_sym_vshufi32x4] = ACTIONS(222),
    [anon_sym_vshufi64x2] = ACTIONS(222),
    [anon_sym_vpblendmd] = ACTIONS(222),
    [anon_sym_vextracti128] = ACTIONS(222),
    [anon_sym_vextracti32x4] = ACTIONS(222),
    [anon_sym_vinserti128] = ACTIONS(222),
    [anon_sym_vinserti32x4] = ACTIONS(222),
    [anon_sym_vinserti64x4] = ACTIONS(222),
    [anon_sym_vpblendd] = ACTIONS(222),
    [anon_sym_vpbroadcastq] = ACTIONS(222),
    [anon_sym_vpbroadcastd] = ACTIONS(222),
    [anon_sym_vbroadcasti128] = ACTIONS(222),
    [anon_sym_vbroadcasti32x4] = ACTIONS(222),
    [anon_sym_vperm2i128] = ACTIONS(222),
    [anon_sym_vpermd] = ACTIONS(222),
    [anon_sym_vpermq] = ACTIONS(222),
    [anon_sym_vpermt2d] = ACTIONS(222),
    [anon_sym_vpermi2d] = ACTIONS(222),
    [anon_sym_tzcnt] = ACTIONS(222),
    [anon_sym_rorx] = ACTIONS(222),
    [anon_sym_psubd] = ACTIONS(222),
    [anon_sym_pmaddwd] = ACTIONS(222),
    [anon_sym_pxor] = ACTIONS(222),
    [anon_sym_psrad] = ACTIONS(222),
    [anon_sym_pslld] = ACTIONS(222),
    [anon_sym_pcmpgtd] = ACTIONS(222),
    [anon_sym_pcmpeqd] = ACTIONS(222),
    [anon_sym_por] = ACTIONS(222),
    [anon_sym_paddw] = ACTIONS(222),
    [anon_sym_psubusw] = ACTIONS(222),
    [anon_sym_pcmpeqb] = ACTIONS(222),
    [anon_sym_psubusb] = ACTIONS(222),
    [anon_sym_psrld] = ACTIONS(222),
    [anon_sym_psrlw] = ACTIONS(222),
    [anon_sym_psllq] = ACTIONS(222),
    [anon_sym_paddd] = ACTIONS(222),
    [anon_sym_psrlq] = ACTIONS(222),
    [anon_sym_psubb] = ACTIONS(222),
    [anon_sym_maxss] = ACTIONS(222),
    [anon_sym_pmovmskb] = ACTIONS(222),
    [anon_sym_pinsrw] = ACTIONS(222),
    [anon_sym_minss] = ACTIONS(222),
    [anon_sym_prefetcht1] = ACTIONS(222),
    [anon_sym_prefetcht0] = ACTIONS(222),
    [anon_sym_pextrw] = ACTIONS(222),
    [anon_sym_ucomiss] = ACTIONS(222),
    [anon_sym_shufps] = ACTIONS(222),
    [anon_sym_addsd] = ACTIONS(222),
    [anon_sym_paddq] = ACTIONS(222),
    [anon_sym_psubq] = ACTIONS(222),
    [anon_sym_pshuflw] = ACTIONS(222),
    [anon_sym_pmuludq] = ACTIONS(222),
    [anon_sym_pshufd] = ACTIONS(222),
    [anon_sym_minsd] = ACTIONS(222),
    [anon_sym_pshufhw] = ACTIONS(222),
    [anon_sym_mfence] = ACTIONS(222),
    [anon_sym_maxsd] = ACTIONS(222),
    [anon_sym_ucomisd] = ACTIONS(222),
    [anon_sym_shufpd] = ACTIONS(222),
    [anon_sym_pslldq] = ACTIONS(222),
    [anon_sym_unpckhpd] = ACTIONS(222),
    [anon_sym_psrldq] = ACTIONS(222),
    [anon_sym_palignr] = ACTIONS(222),
    [anon_sym_pshufb] = ACTIONS(222),
    [anon_sym_pmaddubsw] = ACTIONS(222),
    [anon_sym_pinsrb] = ACTIONS(222),
    [anon_sym_pblendw] = ACTIONS(222),
    [anon_sym_pextrq] = ACTIONS(222),
    [anon_sym_blendvps] = ACTIONS(222),
    [anon_sym_pextrb] = ACTIONS(222),
    [anon_sym_pinsrd] = ACTIONS(222),
    [anon_sym_femms] = ACTIONS(222),
    [anon_sym_f] = ACTIONS(222),
    [aux_sym_operand_token1] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [anon_sym_PERCENTss] = ACTIONS(222),
    [anon_sym_PERCENTcs] = ACTIONS(222),
    [anon_sym_PERCENTds] = ACTIONS(222),
    [anon_sym_PERCENTes] = ACTIONS(222),
    [anon_sym_PERCENTfs] = ACTIONS(222),
    [anon_sym_PERCENTgs] = ACTIONS(222),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(222),
    [anon_sym_PERCENTr9] = ACTIONS(222),
    [anon_sym_PERCENTr10] = ACTIONS(222),
    [anon_sym_PERCENTr11] = ACTIONS(222),
    [anon_sym_PERCENTr12] = ACTIONS(222),
    [anon_sym_PERCENTr13] = ACTIONS(222),
    [anon_sym_PERCENTr14] = ACTIONS(222),
    [anon_sym_PERCENTr15] = ACTIONS(222),
    [anon_sym_PERCENTeax] = ACTIONS(222),
    [anon_sym_PERCENTecx] = ACTIONS(222),
    [anon_sym_PERCENTedx] = ACTIONS(222),
    [anon_sym_PERCENTebx] = ACTIONS(222),
    [anon_sym_PERCENTesi] = ACTIONS(222),
    [anon_sym_PERCENTedi] = ACTIONS(222),
    [anon_sym_PERCENTebp] = ACTIONS(222),
    [anon_sym_PERCENTesp] = ACTIONS(222),
    [anon_sym_PERCENTr8d] = ACTIONS(222),
    [anon_sym_PERCENTr9d] = ACTIONS(222),
    [anon_sym_PERCENTr10d] = ACTIONS(222),
    [anon_sym_PERCENTr11d] = ACTIONS(222),
    [anon_sym_PERCENTr12d] = ACTIONS(222),
    [anon_sym_PERCENTr13d] = ACTIONS(222),
    [anon_sym_PERCENTr14d] = ACTIONS(222),
    [anon_sym_PERCENTr15d] = ACTIONS(222),
    [anon_sym_PERCENTax] = ACTIONS(222),
    [anon_sym_PERCENTcx] = ACTIONS(222),
    [anon_sym_PERCENTdx] = ACTIONS(222),
    [anon_sym_PERCENTbx] = ACTIONS(222),
    [anon_sym_PERCENTsi] = ACTIONS(222),
    [anon_sym_PERCENTdi] = ACTIONS(222),
    [anon_sym_PERCENTsp] = ACTIONS(222),
    [anon_sym_PERCENTbp] = ACTIONS(222),
    [anon_sym_PERCENTr8w] = ACTIONS(222),
    [anon_sym_PERCENTr9w] = ACTIONS(222),
    [anon_sym_PERCENTr10w] = ACTIONS(222),
    [anon_sym_PERCENTr11w] = ACTIONS(222),
    [anon_sym_PERCENTr12w] = ACTIONS(222),
    [anon_sym_PERCENTr13w] = ACTIONS(222),
    [anon_sym_PERCENTr14w] = ACTIONS(222),
    [anon_sym_PERCENTr15w] = ACTIONS(222),
    [anon_sym_PERCENTal] = ACTIONS(222),
    [anon_sym_PERCENTcl] = ACTIONS(222),
    [anon_sym_PERCENTdl] = ACTIONS(222),
    [anon_sym_PERCENTbl] = ACTIONS(222),
    [anon_sym_PERCENTsil] = ACTIONS(222),
    [anon_sym_PERCENTdil] = ACTIONS(222),
    [anon_sym_PERCENTspl] = ACTIONS(222),
    [anon_sym_PERCENTbpl] = ACTIONS(222),
    [anon_sym_PERCENTr8b] = ACTIONS(222),
    [anon_sym_PERCENTr9b] = ACTIONS(222),
    [anon_sym_PERCENTr10b] = ACTIONS(222),
    [anon_sym_PERCENTr11b] = ACTIONS(222),
    [anon_sym_PERCENTr12b] = ACTIONS(222),
    [anon_sym_PERCENTr13b] = ACTIONS(222),
    [anon_sym_PERCENTr14b] = ACTIONS(222),
    [anon_sym_PERCENTr15b] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_movsq] = ACTIONS(222),
    [anon_sym_cmpsb] = ACTIONS(222),
    [anon_sym_cmpxchg] = ACTIONS(222),
    [anon_sym_movsl] = ACTIONS(222),
    [anon_sym_callq] = ACTIONS(222),
    [anon_sym_ja] = ACTIONS(222),
    [anon_sym_jae] = ACTIONS(222),
    [anon_sym_jb] = ACTIONS(222),
    [anon_sym_jbe] = ACTIONS(222),
    [anon_sym_je] = ACTIONS(222),
    [anon_sym_jg] = ACTIONS(222),
    [anon_sym_jge] = ACTIONS(222),
    [anon_sym_jl] = ACTIONS(222),
    [anon_sym_jle] = ACTIONS(222),
    [anon_sym_jmp] = ACTIONS(222),
    [anon_sym_jmpq] = ACTIONS(222),
    [anon_sym_jne] = ACTIONS(222),
    [anon_sym_jno] = ACTIONS(222),
    [anon_sym_jns] = ACTIONS(222),
    [anon_sym_jo] = ACTIONS(222),
    [anon_sym_jp] = ACTIONS(222),
    [anon_sym_jrcxz] = ACTIONS(222),
    [anon_sym_js] = ACTIONS(222),
    [anon_sym_notrack] = ACTIONS(222),
    [anon_sym_PERCENTcr0] = ACTIONS(222),
    [anon_sym_PERCENTcr2] = ACTIONS(222),
    [anon_sym_PERCENTcr3] = ACTIONS(222),
    [anon_sym_PERCENTcr4] = ACTIONS(222),
    [anon_sym_PERCENTrip] = ACTIONS(222),
    [anon_sym_PERCENTeip] = ACTIONS(222),
    [anon_sym_PERCENTip] = ACTIONS(222),
    [anon_sym_PERCENTst] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(222),
  },
  [19] = {
    [aux_sym_comment_token1] = ACTIONS(226),
    [aux_sym_comment_token2] = ACTIONS(226),
    [sym__line_break] = ACTIONS(228),
    [anon_sym_adc] = ACTIONS(226),
    [anon_sym_add] = ACTIONS(226),
    [anon_sym_addq] = ACTIONS(226),
    [anon_sym_addl] = ACTIONS(226),
    [anon_sym_addss] = ACTIONS(226),
    [anon_sym_addw] = ACTIONS(226),
    [anon_sym_addb] = ACTIONS(226),
    [anon_sym_cmp] = ACTIONS(226),
    [anon_sym_cmpb] = ACTIONS(226),
    [anon_sym_cmpw] = ACTIONS(226),
    [anon_sym_cmpl] = ACTIONS(226),
    [anon_sym_cmpq] = ACTIONS(226),
    [anon_sym_comiss] = ACTIONS(226),
    [anon_sym_comisd] = ACTIONS(226),
    [anon_sym_inc] = ACTIONS(226),
    [anon_sym_incl] = ACTIONS(226),
    [anon_sym_dec] = ACTIONS(226),
    [anon_sym_div] = ACTIONS(226),
    [anon_sym_divq] = ACTIONS(226),
    [anon_sym_divl] = ACTIONS(226),
    [anon_sym_divss] = ACTIONS(226),
    [anon_sym_divsd] = ACTIONS(226),
    [anon_sym_idiv] = ACTIONS(226),
    [anon_sym_idivl] = ACTIONS(226),
    [anon_sym_sub] = ACTIONS(226),
    [anon_sym_subq] = ACTIONS(226),
    [anon_sym_subl] = ACTIONS(226),
    [anon_sym_subss] = ACTIONS(226),
    [anon_sym_subw] = ACTIONS(226),
    [anon_sym_subb] = ACTIONS(226),
    [anon_sym_subsd] = ACTIONS(226),
    [anon_sym_subpd] = ACTIONS(226),
    [anon_sym_sbb] = ACTIONS(226),
    [anon_sym_mul] = ACTIONS(226),
    [anon_sym_mulq] = ACTIONS(226),
    [anon_sym_mull] = ACTIONS(226),
    [anon_sym_mulss] = ACTIONS(226),
    [anon_sym_mulw] = ACTIONS(226),
    [anon_sym_mulb] = ACTIONS(226),
    [anon_sym_mulsd] = ACTIONS(226),
    [anon_sym_mulx] = ACTIONS(226),
    [anon_sym_imul] = ACTIONS(226),
    [anon_sym_neg] = ACTIONS(226),
    [anon_sym_negl] = ACTIONS(226),
    [anon_sym_negq] = ACTIONS(226),
    [anon_sym_fmulp] = ACTIONS(226),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(226),
    [anon_sym_pclmullqlqdq] = ACTIONS(226),
    [anon_sym_pclmullqhqdq] = ACTIONS(226),
    [anon_sym_vpclmullqhqdq] = ACTIONS(226),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(226),
    [anon_sym_pclmulhqhqdq] = ACTIONS(226),
    [anon_sym_vpclmullqlqdq] = ACTIONS(226),
    [anon_sym_bsf] = ACTIONS(226),
    [anon_sym_bsr] = ACTIONS(226),
    [anon_sym_bts] = ACTIONS(226),
    [anon_sym_bt] = ACTIONS(226),
    [anon_sym_btr] = ACTIONS(226),
    [anon_sym_btl] = ACTIONS(226),
    [anon_sym_setne] = ACTIONS(226),
    [anon_sym_setb] = ACTIONS(226),
    [anon_sym_sete] = ACTIONS(226),
    [anon_sym_setbe] = ACTIONS(226),
    [anon_sym_seta] = ACTIONS(226),
    [anon_sym_setge] = ACTIONS(226),
    [anon_sym_setae] = ACTIONS(226),
    [anon_sym_setl] = ACTIONS(226),
    [anon_sym_setle] = ACTIONS(226),
    [anon_sym_setg] = ACTIONS(226),
    [anon_sym_seto] = ACTIONS(226),
    [anon_sym_setnp] = ACTIONS(226),
    [anon_sym_setp] = ACTIONS(226),
    [anon_sym_setns] = ACTIONS(226),
    [anon_sym_test] = ACTIONS(226),
    [anon_sym_testb] = ACTIONS(226),
    [anon_sym_testl] = ACTIONS(226),
    [anon_sym_knotw] = ACTIONS(226),
    [anon_sym_vpcmpltud] = ACTIONS(226),
    [anon_sym_gs] = ACTIONS(226),
    [anon_sym_re] = ACTIONS(226),
    [anon_sym_ss] = ACTIONS(226),
    [anon_sym_leaveq] = ACTIONS(226),
    [anon_sym_retq] = ACTIONS(226),
    [anon_sym_bswap] = ACTIONS(226),
    [anon_sym_cbtw] = ACTIONS(226),
    [anon_sym_cltd] = ACTIONS(226),
    [anon_sym_cltq] = ACTIONS(226),
    [anon_sym_cmovbe] = ACTIONS(226),
    [anon_sym_cmovl] = ACTIONS(226),
    [anon_sym_cmovae] = ACTIONS(226),
    [anon_sym_cmovo] = ACTIONS(226),
    [anon_sym_cmovne] = ACTIONS(226),
    [anon_sym_cmovns] = ACTIONS(226),
    [anon_sym_cmovg] = ACTIONS(226),
    [anon_sym_cmovp] = ACTIONS(226),
    [anon_sym_cmove] = ACTIONS(226),
    [anon_sym_cmovge] = ACTIONS(226),
    [anon_sym_cmovb] = ACTIONS(226),
    [anon_sym_cmova] = ACTIONS(226),
    [anon_sym_cmovle] = ACTIONS(226),
    [anon_sym_cmovs] = ACTIONS(226),
    [anon_sym_cwtl] = ACTIONS(226),
    [anon_sym_cwtd] = ACTIONS(226),
    [anon_sym_cqto] = ACTIONS(226),
    [anon_sym_cvttsd2si] = ACTIONS(226),
    [anon_sym_cvtss2sd] = ACTIONS(226),
    [anon_sym_cvttss2si] = ACTIONS(226),
    [anon_sym_cvtsi2sd] = ACTIONS(226),
    [anon_sym_cvtsi2ss] = ACTIONS(226),
    [anon_sym_cvtsi2sdq] = ACTIONS(226),
    [anon_sym_cvtsi2sdl] = ACTIONS(226),
    [anon_sym_cvtsd2ss] = ACTIONS(226),
    [anon_sym_cvtsi2ssl] = ACTIONS(226),
    [anon_sym_mov] = ACTIONS(226),
    [anon_sym_movw] = ACTIONS(226),
    [anon_sym_movl] = ACTIONS(226),
    [anon_sym_movq] = ACTIONS(226),
    [anon_sym_movb] = ACTIONS(226),
    [anon_sym_movabs] = ACTIONS(226),
    [anon_sym_movsbw] = ACTIONS(226),
    [anon_sym_movsbq] = ACTIONS(226),
    [anon_sym_movsbl] = ACTIONS(226),
    [anon_sym_movswl] = ACTIONS(226),
    [anon_sym_movswq] = ACTIONS(226),
    [anon_sym_movzbw] = ACTIONS(226),
    [anon_sym_movzbq] = ACTIONS(226),
    [anon_sym_movzbl] = ACTIONS(226),
    [anon_sym_movzwl] = ACTIONS(226),
    [anon_sym_movaps] = ACTIONS(226),
    [anon_sym_movhlps] = ACTIONS(226),
    [anon_sym_movss] = ACTIONS(226),
    [anon_sym_movups] = ACTIONS(226),
    [anon_sym_movsd] = ACTIONS(226),
    [anon_sym_movd] = ACTIONS(226),
    [anon_sym_movhps] = ACTIONS(226),
    [anon_sym_movdqa] = ACTIONS(226),
    [anon_sym_movbe] = ACTIONS(226),
    [anon_sym_movapd] = ACTIONS(226),
    [anon_sym_movdqu] = ACTIONS(226),
    [anon_sym_xchg] = ACTIONS(226),
    [anon_sym_fildl] = ACTIONS(226),
    [anon_sym_fldt] = ACTIONS(226),
    [anon_sym_fstpl] = ACTIONS(226),
    [anon_sym_insb] = ACTIONS(226),
    [anon_sym_insl] = ACTIONS(226),
    [anon_sym_outsb] = ACTIONS(226),
    [anon_sym_outsl] = ACTIONS(226),
    [anon_sym_or] = ACTIONS(226),
    [anon_sym_orq] = ACTIONS(226),
    [anon_sym_orl] = ACTIONS(226),
    [anon_sym_orb] = ACTIONS(226),
    [anon_sym_orw] = ACTIONS(226),
    [anon_sym_xor] = ACTIONS(226),
    [anon_sym_xorl] = ACTIONS(226),
    [anon_sym_xorw] = ACTIONS(226),
    [anon_sym_xorps] = ACTIONS(226),
    [anon_sym_xorpd] = ACTIONS(226),
    [anon_sym_vxorps] = ACTIONS(226),
    [anon_sym_vpxord] = ACTIONS(226),
    [anon_sym_vpxor] = ACTIONS(226),
    [anon_sym_and] = ACTIONS(226),
    [anon_sym_andq] = ACTIONS(226),
    [anon_sym_andl] = ACTIONS(226),
    [anon_sym_andw] = ACTIONS(226),
    [anon_sym_andb] = ACTIONS(226),
    [anon_sym_andn] = ACTIONS(226),
    [anon_sym_andpd] = ACTIONS(226),
    [anon_sym_pand] = ACTIONS(226),
    [anon_sym_pandn] = ACTIONS(226),
    [anon_sym_andps] = ACTIONS(226),
    [anon_sym_vpand] = ACTIONS(226),
    [anon_sym_not] = ACTIONS(226),
    [anon_sym_notl] = ACTIONS(226),
    [anon_sym_notw] = ACTIONS(226),
    [anon_sym_cpuid] = ACTIONS(226),
    [anon_sym_lea] = ACTIONS(226),
    [anon_sym_popcnt] = ACTIONS(226),
    [anon_sym_nop] = ACTIONS(226),
    [anon_sym_nopl] = ACTIONS(226),
    [anon_sym_nopw] = ACTIONS(226),
    [anon_sym_ud2] = ACTIONS(226),
    [anon_sym_data16] = ACTIONS(226),
    [anon_sym_sha1rnds4] = ACTIONS(226),
    [anon_sym_addr32] = ACTIONS(226),
    [anon_sym_sha1msg1] = ACTIONS(226),
    [anon_sym_sha1msg2] = ACTIONS(226),
    [anon_sym_sha1nexte] = ACTIONS(226),
    [anon_sym_endbr64] = ACTIONS(226),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(226),
    [anon_sym_packuswb] = ACTIONS(226),
    [anon_sym_punpckhbw] = ACTIONS(226),
    [anon_sym_punpckhdq] = ACTIONS(226),
    [anon_sym_punpckhwd] = ACTIONS(226),
    [anon_sym_punpcklbw] = ACTIONS(226),
    [anon_sym_punpckldq] = ACTIONS(226),
    [anon_sym_punpcklwd] = ACTIONS(226),
    [anon_sym_vpunpcklwd] = ACTIONS(226),
    [anon_sym_vpunpckldq] = ACTIONS(226),
    [anon_sym_punpcklqdq] = ACTIONS(226),
    [anon_sym_punpckhqdq] = ACTIONS(226),
    [anon_sym_vpunpckhqdq] = ACTIONS(226),
    [anon_sym_vpunpckhdq] = ACTIONS(226),
    [anon_sym_vpunpcklqdq] = ACTIONS(226),
    [anon_sym_vpunpckhwd] = ACTIONS(226),
    [anon_sym_rol] = ACTIONS(226),
    [anon_sym_ror] = ACTIONS(226),
    [anon_sym_sar] = ACTIONS(226),
    [anon_sym_sarl] = ACTIONS(226),
    [anon_sym_sarx] = ACTIONS(226),
    [anon_sym_shl] = ACTIONS(226),
    [anon_sym_shll] = ACTIONS(226),
    [anon_sym_shld] = ACTIONS(226),
    [anon_sym_shlx] = ACTIONS(226),
    [anon_sym_shlq] = ACTIONS(226),
    [anon_sym_shr] = ACTIONS(226),
    [anon_sym_shrq] = ACTIONS(226),
    [anon_sym_shrd] = ACTIONS(226),
    [anon_sym_shrl] = ACTIONS(226),
    [anon_sym_shrx] = ACTIONS(226),
    [anon_sym_vprord] = ACTIONS(226),
    [anon_sym_vprorq] = ACTIONS(226),
    [anon_sym_rorl] = ACTIONS(226),
    [anon_sym_roll] = ACTIONS(226),
    [anon_sym_push] = ACTIONS(226),
    [anon_sym_pushq] = ACTIONS(226),
    [anon_sym_pop] = ACTIONS(226),
    [anon_sym_movslq] = ACTIONS(226),
    [anon_sym_movsb] = ACTIONS(226),
    [anon_sym_rep] = ACTIONS(226),
    [anon_sym_repz] = ACTIONS(226),
    [anon_sym_repnz] = ACTIONS(226),
    [anon_sym_rex] = ACTIONS(226),
    [anon_sym_rex_DOTWB] = ACTIONS(226),
    [anon_sym_rex_DOTWRB] = ACTIONS(226),
    [anon_sym_rex_DOTRXB] = ACTIONS(226),
    [anon_sym_rex_DOTB] = ACTIONS(226),
    [anon_sym_rex_DOTWRXB] = ACTIONS(226),
    [anon_sym_rex_DOTXB] = ACTIONS(226),
    [anon_sym_rex_DOTW] = ACTIONS(226),
    [anon_sym_rex_DOTRB] = ACTIONS(226),
    [anon_sym_xgetbv] = ACTIONS(226),
    [anon_sym_fs] = ACTIONS(226),
    [anon_sym_kmovw] = ACTIONS(226),
    [anon_sym_adcx] = ACTIONS(226),
    [anon_sym_adox] = ACTIONS(226),
    [anon_sym_aesdec] = ACTIONS(226),
    [anon_sym_aesdeclast] = ACTIONS(226),
    [anon_sym_aesenc] = ACTIONS(226),
    [anon_sym_aesenclast] = ACTIONS(226),
    [anon_sym_vaesenc] = ACTIONS(226),
    [anon_sym_vaesenclast] = ACTIONS(226),
    [anon_sym_aeskeygenassist] = ACTIONS(226),
    [anon_sym_vblendps] = ACTIONS(226),
    [anon_sym_vblendvps] = ACTIONS(226),
    [anon_sym_vcvtusi2sd] = ACTIONS(226),
    [anon_sym_vdivsd] = ACTIONS(226),
    [anon_sym_vmovaps] = ACTIONS(226),
    [anon_sym_vmovapd] = ACTIONS(226),
    [anon_sym_vmovss] = ACTIONS(226),
    [anon_sym_vmovdqu] = ACTIONS(226),
    [anon_sym_vmovdqu64] = ACTIONS(226),
    [anon_sym_vmovdqu32] = ACTIONS(226),
    [anon_sym_vmovdqa] = ACTIONS(226),
    [anon_sym_vmovdqa32] = ACTIONS(226),
    [anon_sym_vmovdqa64] = ACTIONS(226),
    [anon_sym_vmovq] = ACTIONS(226),
    [anon_sym_vmovups] = ACTIONS(226),
    [anon_sym_vmovd] = ACTIONS(226),
    [anon_sym_vmovsd] = ACTIONS(226),
    [anon_sym_vmulsd] = ACTIONS(226),
    [anon_sym_vpackusdw] = ACTIONS(226),
    [anon_sym_vpaddd] = ACTIONS(226),
    [anon_sym_vpaddb] = ACTIONS(226),
    [anon_sym_vpaddq] = ACTIONS(226),
    [anon_sym_vpaddw] = ACTIONS(226),
    [anon_sym_vpalignr] = ACTIONS(226),
    [anon_sym_vpcmpgtd] = ACTIONS(226),
    [anon_sym_vpextrw] = ACTIONS(226),
    [anon_sym_vpinsrw] = ACTIONS(226),
    [anon_sym_vpinsrd] = ACTIONS(226),
    [anon_sym_vpinsrq] = ACTIONS(226),
    [anon_sym_vpinsrb] = ACTIONS(226),
    [anon_sym_vpmaddubsw] = ACTIONS(226),
    [anon_sym_vpmaddwd] = ACTIONS(226),
    [anon_sym_vpmullw] = ACTIONS(226),
    [anon_sym_vpmuludq] = ACTIONS(226),
    [anon_sym_vpor] = ACTIONS(226),
    [anon_sym_vpshufb] = ACTIONS(226),
    [anon_sym_vpshufd] = ACTIONS(226),
    [anon_sym_vpslldq] = ACTIONS(226),
    [anon_sym_vpslld] = ACTIONS(226),
    [anon_sym_vpsllq] = ACTIONS(226),
    [anon_sym_vpsllw] = ACTIONS(226),
    [anon_sym_vpsrldq] = ACTIONS(226),
    [anon_sym_vpsrld] = ACTIONS(226),
    [anon_sym_vpsrlq] = ACTIONS(226),
    [anon_sym_vpsrlw] = ACTIONS(226),
    [anon_sym_vpsubusw] = ACTIONS(226),
    [anon_sym_vpsubq] = ACTIONS(226),
    [anon_sym_vpsubd] = ACTIONS(226),
    [anon_sym_vpsubw] = ACTIONS(226),
    [anon_sym_vshufps] = ACTIONS(226),
    [anon_sym_vsubsd] = ACTIONS(226),
    [anon_sym_vucomisd] = ACTIONS(226),
    [anon_sym_vucomiss] = ACTIONS(226),
    [anon_sym_vunpckhpd] = ACTIONS(226),
    [anon_sym_vunpckhps] = ACTIONS(226),
    [anon_sym_vunpcklpd] = ACTIONS(226),
    [anon_sym_vunpcklps] = ACTIONS(226),
    [anon_sym_vbroadcastss] = ACTIONS(226),
    [anon_sym_vinsertf128] = ACTIONS(226),
    [anon_sym_vperm2f128] = ACTIONS(226),
    [anon_sym_vzeroall] = ACTIONS(226),
    [anon_sym_vzeroupper] = ACTIONS(226),
    [anon_sym_vshufi32x4] = ACTIONS(226),
    [anon_sym_vshufi64x2] = ACTIONS(226),
    [anon_sym_vpblendmd] = ACTIONS(226),
    [anon_sym_vextracti128] = ACTIONS(226),
    [anon_sym_vextracti32x4] = ACTIONS(226),
    [anon_sym_vinserti128] = ACTIONS(226),
    [anon_sym_vinserti32x4] = ACTIONS(226),
    [anon_sym_vinserti64x4] = ACTIONS(226),
    [anon_sym_vpblendd] = ACTIONS(226),
    [anon_sym_vpbroadcastq] = ACTIONS(226),
    [anon_sym_vpbroadcastd] = ACTIONS(226),
    [anon_sym_vbroadcasti128] = ACTIONS(226),
    [anon_sym_vbroadcasti32x4] = ACTIONS(226),
    [anon_sym_vperm2i128] = ACTIONS(226),
    [anon_sym_vpermd] = ACTIONS(226),
    [anon_sym_vpermq] = ACTIONS(226),
    [anon_sym_vpermt2d] = ACTIONS(226),
    [anon_sym_vpermi2d] = ACTIONS(226),
    [anon_sym_tzcnt] = ACTIONS(226),
    [anon_sym_rorx] = ACTIONS(226),
    [anon_sym_psubd] = ACTIONS(226),
    [anon_sym_pmaddwd] = ACTIONS(226),
    [anon_sym_pxor] = ACTIONS(226),
    [anon_sym_psrad] = ACTIONS(226),
    [anon_sym_pslld] = ACTIONS(226),
    [anon_sym_pcmpgtd] = ACTIONS(226),
    [anon_sym_pcmpeqd] = ACTIONS(226),
    [anon_sym_por] = ACTIONS(226),
    [anon_sym_paddw] = ACTIONS(226),
    [anon_sym_psubusw] = ACTIONS(226),
    [anon_sym_pcmpeqb] = ACTIONS(226),
    [anon_sym_psubusb] = ACTIONS(226),
    [anon_sym_psrld] = ACTIONS(226),
    [anon_sym_psrlw] = ACTIONS(226),
    [anon_sym_psllq] = ACTIONS(226),
    [anon_sym_paddd] = ACTIONS(226),
    [anon_sym_psrlq] = ACTIONS(226),
    [anon_sym_psubb] = ACTIONS(226),
    [anon_sym_maxss] = ACTIONS(226),
    [anon_sym_pmovmskb] = ACTIONS(226),
    [anon_sym_pinsrw] = ACTIONS(226),
    [anon_sym_minss] = ACTIONS(226),
    [anon_sym_prefetcht1] = ACTIONS(226),
    [anon_sym_prefetcht0] = ACTIONS(226),
    [anon_sym_pextrw] = ACTIONS(226),
    [anon_sym_ucomiss] = ACTIONS(226),
    [anon_sym_shufps] = ACTIONS(226),
    [anon_sym_addsd] = ACTIONS(226),
    [anon_sym_paddq] = ACTIONS(226),
    [anon_sym_psubq] = ACTIONS(226),
    [anon_sym_pshuflw] = ACTIONS(226),
    [anon_sym_pmuludq] = ACTIONS(226),
    [anon_sym_pshufd] = ACTIONS(226),
    [anon_sym_minsd] = ACTIONS(226),
    [anon_sym_pshufhw] = ACTIONS(226),
    [anon_sym_mfence] = ACTIONS(226),
    [anon_sym_maxsd] = ACTIONS(226),
    [anon_sym_ucomisd] = ACTIONS(226),
    [anon_sym_shufpd] = ACTIONS(226),
    [anon_sym_pslldq] = ACTIONS(226),
    [anon_sym_unpckhpd] = ACTIONS(226),
    [anon_sym_psrldq] = ACTIONS(226),
    [anon_sym_palignr] = ACTIONS(226),
    [anon_sym_pshufb] = ACTIONS(226),
    [anon_sym_pmaddubsw] = ACTIONS(226),
    [anon_sym_pinsrb] = ACTIONS(226),
    [anon_sym_pblendw] = ACTIONS(226),
    [anon_sym_pextrq] = ACTIONS(226),
    [anon_sym_blendvps] = ACTIONS(226),
    [anon_sym_pextrb] = ACTIONS(226),
    [anon_sym_pinsrd] = ACTIONS(226),
    [anon_sym_femms] = ACTIONS(226),
    [anon_sym_f] = ACTIONS(226),
    [aux_sym_operand_token1] = ACTIONS(226),
    [anon_sym_LT] = ACTIONS(226),
    [anon_sym_DOLLAR] = ACTIONS(226),
    [anon_sym_PERCENTss] = ACTIONS(226),
    [anon_sym_PERCENTcs] = ACTIONS(226),
    [anon_sym_PERCENTds] = ACTIONS(226),
    [anon_sym_PERCENTes] = ACTIONS(226),
    [anon_sym_PERCENTfs] = ACTIONS(226),
    [anon_sym_PERCENTgs] = ACTIONS(226),
    [anon_sym_PERCENTrax] = ACTIONS(226),
    [anon_sym_PERCENTrbx] = ACTIONS(226),
    [anon_sym_PERCENTrcx] = ACTIONS(226),
    [anon_sym_PERCENTrdx] = ACTIONS(226),
    [anon_sym_PERCENTrsi] = ACTIONS(226),
    [anon_sym_PERCENTrdi] = ACTIONS(226),
    [anon_sym_PERCENTrbp] = ACTIONS(226),
    [anon_sym_PERCENTrsp] = ACTIONS(226),
    [anon_sym_PERCENTr8] = ACTIONS(226),
    [anon_sym_PERCENTr9] = ACTIONS(226),
    [anon_sym_PERCENTr10] = ACTIONS(226),
    [anon_sym_PERCENTr11] = ACTIONS(226),
    [anon_sym_PERCENTr12] = ACTIONS(226),
    [anon_sym_PERCENTr13] = ACTIONS(226),
    [anon_sym_PERCENTr14] = ACTIONS(226),
    [anon_sym_PERCENTr15] = ACTIONS(226),
    [anon_sym_PERCENTeax] = ACTIONS(226),
    [anon_sym_PERCENTecx] = ACTIONS(226),
    [anon_sym_PERCENTedx] = ACTIONS(226),
    [anon_sym_PERCENTebx] = ACTIONS(226),
    [anon_sym_PERCENTesi] = ACTIONS(226),
    [anon_sym_PERCENTedi] = ACTIONS(226),
    [anon_sym_PERCENTebp] = ACTIONS(226),
    [anon_sym_PERCENTesp] = ACTIONS(226),
    [anon_sym_PERCENTr8d] = ACTIONS(226),
    [anon_sym_PERCENTr9d] = ACTIONS(226),
    [anon_sym_PERCENTr10d] = ACTIONS(226),
    [anon_sym_PERCENTr11d] = ACTIONS(226),
    [anon_sym_PERCENTr12d] = ACTIONS(226),
    [anon_sym_PERCENTr13d] = ACTIONS(226),
    [anon_sym_PERCENTr14d] = ACTIONS(226),
    [anon_sym_PERCENTr15d] = ACTIONS(226),
    [anon_sym_PERCENTax] = ACTIONS(226),
    [anon_sym_PERCENTcx] = ACTIONS(226),
    [anon_sym_PERCENTdx] = ACTIONS(226),
    [anon_sym_PERCENTbx] = ACTIONS(226),
    [anon_sym_PERCENTsi] = ACTIONS(226),
    [anon_sym_PERCENTdi] = ACTIONS(226),
    [anon_sym_PERCENTsp] = ACTIONS(226),
    [anon_sym_PERCENTbp] = ACTIONS(226),
    [anon_sym_PERCENTr8w] = ACTIONS(226),
    [anon_sym_PERCENTr9w] = ACTIONS(226),
    [anon_sym_PERCENTr10w] = ACTIONS(226),
    [anon_sym_PERCENTr11w] = ACTIONS(226),
    [anon_sym_PERCENTr12w] = ACTIONS(226),
    [anon_sym_PERCENTr13w] = ACTIONS(226),
    [anon_sym_PERCENTr14w] = ACTIONS(226),
    [anon_sym_PERCENTr15w] = ACTIONS(226),
    [anon_sym_PERCENTal] = ACTIONS(226),
    [anon_sym_PERCENTcl] = ACTIONS(226),
    [anon_sym_PERCENTdl] = ACTIONS(226),
    [anon_sym_PERCENTbl] = ACTIONS(226),
    [anon_sym_PERCENTsil] = ACTIONS(226),
    [anon_sym_PERCENTdil] = ACTIONS(226),
    [anon_sym_PERCENTspl] = ACTIONS(226),
    [anon_sym_PERCENTbpl] = ACTIONS(226),
    [anon_sym_PERCENTr8b] = ACTIONS(226),
    [anon_sym_PERCENTr9b] = ACTIONS(226),
    [anon_sym_PERCENTr10b] = ACTIONS(226),
    [anon_sym_PERCENTr11b] = ACTIONS(226),
    [anon_sym_PERCENTr12b] = ACTIONS(226),
    [anon_sym_PERCENTr13b] = ACTIONS(226),
    [anon_sym_PERCENTr14b] = ACTIONS(226),
    [anon_sym_PERCENTr15b] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_movsq] = ACTIONS(226),
    [anon_sym_cmpsb] = ACTIONS(226),
    [anon_sym_cmpxchg] = ACTIONS(226),
    [anon_sym_movsl] = ACTIONS(226),
    [anon_sym_callq] = ACTIONS(226),
    [anon_sym_ja] = ACTIONS(226),
    [anon_sym_jae] = ACTIONS(226),
    [anon_sym_jb] = ACTIONS(226),
    [anon_sym_jbe] = ACTIONS(226),
    [anon_sym_je] = ACTIONS(226),
    [anon_sym_jg] = ACTIONS(226),
    [anon_sym_jge] = ACTIONS(226),
    [anon_sym_jl] = ACTIONS(226),
    [anon_sym_jle] = ACTIONS(226),
    [anon_sym_jmp] = ACTIONS(226),
    [anon_sym_jmpq] = ACTIONS(226),
    [anon_sym_jne] = ACTIONS(226),
    [anon_sym_jno] = ACTIONS(226),
    [anon_sym_jns] = ACTIONS(226),
    [anon_sym_jo] = ACTIONS(226),
    [anon_sym_jp] = ACTIONS(226),
    [anon_sym_jrcxz] = ACTIONS(226),
    [anon_sym_js] = ACTIONS(226),
    [anon_sym_notrack] = ACTIONS(226),
    [anon_sym_PERCENTcr0] = ACTIONS(226),
    [anon_sym_PERCENTcr2] = ACTIONS(226),
    [anon_sym_PERCENTcr3] = ACTIONS(226),
    [anon_sym_PERCENTcr4] = ACTIONS(226),
    [anon_sym_PERCENTrip] = ACTIONS(226),
    [anon_sym_PERCENTeip] = ACTIONS(226),
    [anon_sym_PERCENTip] = ACTIONS(226),
    [anon_sym_PERCENTst] = ACTIONS(226),
    [anon_sym_PERCENT] = ACTIONS(226),
  },
  [20] = {
    [sym_comment] = STATE(297),
    [sym_instruction] = STATE(158),
    [sym_opcode] = STATE(3),
    [sym_BinaryArithmeticOpcode] = STATE(5),
    [sym_BitAndByteOpcode] = STATE(5),
    [sym_CuriousOpcode] = STATE(5),
    [sym_DataTransferOpcode] = STATE(5),
    [sym_IOOpcode] = STATE(5),
    [sym_LogicalOpcode] = STATE(5),
    [sym_MiscellaneousOpcode] = STATE(5),
    [sym_PackUnpackOpcode] = STATE(5),
    [sym_ShiftAndRotateOpcode] = STATE(5),
    [sym_StackOpcode] = STATE(5),
    [sym_StringOpcode] = STATE(5),
    [sym_AccessRegisterOpcode] = STATE(5),
    [sym_ToBeClassifiedOpcode] = STATE(5),
    [sym_callq] = STATE(158),
    [sym_callqOpcode] = STATE(56),
    [aux_sym__line_repeat1] = STATE(22),
    [sym_two_bytes] = ACTIONS(230),
    [aux_sym_comment_token1] = ACTIONS(232),
    [aux_sym_comment_token2] = ACTIONS(232),
    [sym__line_break] = ACTIONS(234),
    [anon_sym_adc] = ACTIONS(236),
    [anon_sym_add] = ACTIONS(236),
    [anon_sym_addq] = ACTIONS(236),
    [anon_sym_addl] = ACTIONS(236),
    [anon_sym_addss] = ACTIONS(236),
    [anon_sym_addw] = ACTIONS(236),
    [anon_sym_addb] = ACTIONS(236),
    [anon_sym_cmp] = ACTIONS(236),
    [anon_sym_cmpb] = ACTIONS(236),
    [anon_sym_cmpw] = ACTIONS(236),
    [anon_sym_cmpl] = ACTIONS(236),
    [anon_sym_cmpq] = ACTIONS(236),
    [anon_sym_comiss] = ACTIONS(236),
    [anon_sym_comisd] = ACTIONS(236),
    [anon_sym_inc] = ACTIONS(236),
    [anon_sym_incl] = ACTIONS(236),
    [anon_sym_dec] = ACTIONS(236),
    [anon_sym_div] = ACTIONS(236),
    [anon_sym_divq] = ACTIONS(236),
    [anon_sym_divl] = ACTIONS(236),
    [anon_sym_divss] = ACTIONS(236),
    [anon_sym_divsd] = ACTIONS(236),
    [anon_sym_idiv] = ACTIONS(236),
    [anon_sym_idivl] = ACTIONS(236),
    [anon_sym_sub] = ACTIONS(236),
    [anon_sym_subq] = ACTIONS(236),
    [anon_sym_subl] = ACTIONS(236),
    [anon_sym_subss] = ACTIONS(236),
    [anon_sym_subw] = ACTIONS(236),
    [anon_sym_subb] = ACTIONS(236),
    [anon_sym_subsd] = ACTIONS(236),
    [anon_sym_subpd] = ACTIONS(236),
    [anon_sym_sbb] = ACTIONS(236),
    [anon_sym_mul] = ACTIONS(236),
    [anon_sym_mulq] = ACTIONS(236),
    [anon_sym_mull] = ACTIONS(236),
    [anon_sym_mulss] = ACTIONS(236),
    [anon_sym_mulw] = ACTIONS(236),
    [anon_sym_mulb] = ACTIONS(236),
    [anon_sym_mulsd] = ACTIONS(236),
    [anon_sym_mulx] = ACTIONS(236),
    [anon_sym_imul] = ACTIONS(236),
    [anon_sym_neg] = ACTIONS(236),
    [anon_sym_negl] = ACTIONS(236),
    [anon_sym_negq] = ACTIONS(236),
    [anon_sym_fmulp] = ACTIONS(236),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(236),
    [anon_sym_pclmullqlqdq] = ACTIONS(236),
    [anon_sym_pclmullqhqdq] = ACTIONS(236),
    [anon_sym_vpclmullqhqdq] = ACTIONS(236),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(236),
    [anon_sym_pclmulhqhqdq] = ACTIONS(236),
    [anon_sym_vpclmullqlqdq] = ACTIONS(236),
    [anon_sym_bsf] = ACTIONS(238),
    [anon_sym_bsr] = ACTIONS(238),
    [anon_sym_bts] = ACTIONS(238),
    [anon_sym_bt] = ACTIONS(238),
    [anon_sym_btr] = ACTIONS(238),
    [anon_sym_btl] = ACTIONS(238),
    [anon_sym_setne] = ACTIONS(238),
    [anon_sym_setb] = ACTIONS(238),
    [anon_sym_sete] = ACTIONS(238),
    [anon_sym_setbe] = ACTIONS(238),
    [anon_sym_seta] = ACTIONS(238),
    [anon_sym_setge] = ACTIONS(238),
    [anon_sym_setae] = ACTIONS(238),
    [anon_sym_setl] = ACTIONS(238),
    [anon_sym_setle] = ACTIONS(238),
    [anon_sym_setg] = ACTIONS(238),
    [anon_sym_seto] = ACTIONS(238),
    [anon_sym_setnp] = ACTIONS(238),
    [anon_sym_setp] = ACTIONS(238),
    [anon_sym_setns] = ACTIONS(238),
    [anon_sym_test] = ACTIONS(238),
    [anon_sym_testb] = ACTIONS(238),
    [anon_sym_testl] = ACTIONS(238),
    [anon_sym_knotw] = ACTIONS(238),
    [anon_sym_vpcmpltud] = ACTIONS(240),
    [anon_sym_gs] = ACTIONS(240),
    [anon_sym_re] = ACTIONS(240),
    [anon_sym_ss] = ACTIONS(240),
    [anon_sym_leaveq] = ACTIONS(240),
    [anon_sym_retq] = ACTIONS(240),
    [anon_sym_bswap] = ACTIONS(242),
    [anon_sym_cbtw] = ACTIONS(242),
    [anon_sym_cltd] = ACTIONS(242),
    [anon_sym_cltq] = ACTIONS(242),
    [anon_sym_cmovbe] = ACTIONS(242),
    [anon_sym_cmovl] = ACTIONS(242),
    [anon_sym_cmovae] = ACTIONS(242),
    [anon_sym_cmovo] = ACTIONS(242),
    [anon_sym_cmovne] = ACTIONS(242),
    [anon_sym_cmovns] = ACTIONS(242),
    [anon_sym_cmovg] = ACTIONS(242),
    [anon_sym_cmovp] = ACTIONS(242),
    [anon_sym_cmove] = ACTIONS(242),
    [anon_sym_cmovge] = ACTIONS(242),
    [anon_sym_cmovb] = ACTIONS(242),
    [anon_sym_cmova] = ACTIONS(242),
    [anon_sym_cmovle] = ACTIONS(242),
    [anon_sym_cmovs] = ACTIONS(242),
    [anon_sym_cwtl] = ACTIONS(242),
    [anon_sym_cwtd] = ACTIONS(242),
    [anon_sym_cqto] = ACTIONS(242),
    [anon_sym_cvttsd2si] = ACTIONS(242),
    [anon_sym_cvtss2sd] = ACTIONS(242),
    [anon_sym_cvttss2si] = ACTIONS(242),
    [anon_sym_cvtsi2sd] = ACTIONS(242),
    [anon_sym_cvtsi2ss] = ACTIONS(242),
    [anon_sym_cvtsi2sdq] = ACTIONS(242),
    [anon_sym_cvtsi2sdl] = ACTIONS(242),
    [anon_sym_cvtsd2ss] = ACTIONS(242),
    [anon_sym_cvtsi2ssl] = ACTIONS(242),
    [anon_sym_mov] = ACTIONS(242),
    [anon_sym_movw] = ACTIONS(242),
    [anon_sym_movl] = ACTIONS(242),
    [anon_sym_movq] = ACTIONS(242),
    [anon_sym_movb] = ACTIONS(242),
    [anon_sym_movabs] = ACTIONS(242),
    [anon_sym_movsbw] = ACTIONS(242),
    [anon_sym_movsbq] = ACTIONS(242),
    [anon_sym_movsbl] = ACTIONS(242),
    [anon_sym_movswl] = ACTIONS(242),
    [anon_sym_movswq] = ACTIONS(242),
    [anon_sym_movzbw] = ACTIONS(242),
    [anon_sym_movzbq] = ACTIONS(242),
    [anon_sym_movzbl] = ACTIONS(242),
    [anon_sym_movzwl] = ACTIONS(242),
    [anon_sym_movaps] = ACTIONS(242),
    [anon_sym_movhlps] = ACTIONS(242),
    [anon_sym_movss] = ACTIONS(242),
    [anon_sym_movups] = ACTIONS(242),
    [anon_sym_movsd] = ACTIONS(242),
    [anon_sym_movd] = ACTIONS(242),
    [anon_sym_movhps] = ACTIONS(242),
    [anon_sym_movdqa] = ACTIONS(242),
    [anon_sym_movbe] = ACTIONS(242),
    [anon_sym_movapd] = ACTIONS(242),
    [anon_sym_movdqu] = ACTIONS(242),
    [anon_sym_xchg] = ACTIONS(242),
    [anon_sym_fildl] = ACTIONS(242),
    [anon_sym_fldt] = ACTIONS(242),
    [anon_sym_fstpl] = ACTIONS(242),
    [anon_sym_insb] = ACTIONS(244),
    [anon_sym_insl] = ACTIONS(244),
    [anon_sym_outsb] = ACTIONS(244),
    [anon_sym_outsl] = ACTIONS(244),
    [anon_sym_or] = ACTIONS(246),
    [anon_sym_orq] = ACTIONS(246),
    [anon_sym_orl] = ACTIONS(246),
    [anon_sym_orb] = ACTIONS(246),
    [anon_sym_orw] = ACTIONS(246),
    [anon_sym_xor] = ACTIONS(246),
    [anon_sym_xorl] = ACTIONS(246),
    [anon_sym_xorw] = ACTIONS(246),
    [anon_sym_xorps] = ACTIONS(246),
    [anon_sym_xorpd] = ACTIONS(246),
    [anon_sym_vxorps] = ACTIONS(246),
    [anon_sym_vpxord] = ACTIONS(246),
    [anon_sym_vpxor] = ACTIONS(246),
    [anon_sym_and] = ACTIONS(246),
    [anon_sym_andq] = ACTIONS(246),
    [anon_sym_andl] = ACTIONS(246),
    [anon_sym_andw] = ACTIONS(246),
    [anon_sym_andb] = ACTIONS(246),
    [anon_sym_andn] = ACTIONS(246),
    [anon_sym_andpd] = ACTIONS(246),
    [anon_sym_pand] = ACTIONS(246),
    [anon_sym_pandn] = ACTIONS(246),
    [anon_sym_andps] = ACTIONS(246),
    [anon_sym_vpand] = ACTIONS(246),
    [anon_sym_not] = ACTIONS(246),
    [anon_sym_notl] = ACTIONS(246),
    [anon_sym_notw] = ACTIONS(246),
    [anon_sym_cpuid] = ACTIONS(248),
    [anon_sym_lea] = ACTIONS(248),
    [anon_sym_popcnt] = ACTIONS(248),
    [anon_sym_nop] = ACTIONS(248),
    [anon_sym_nopl] = ACTIONS(248),
    [anon_sym_nopw] = ACTIONS(248),
    [anon_sym_ud2] = ACTIONS(248),
    [anon_sym_data16] = ACTIONS(248),
    [anon_sym_sha1rnds4] = ACTIONS(248),
    [anon_sym_addr32] = ACTIONS(248),
    [anon_sym_sha1msg1] = ACTIONS(248),
    [anon_sym_sha1msg2] = ACTIONS(248),
    [anon_sym_sha1nexte] = ACTIONS(248),
    [anon_sym_endbr64] = ACTIONS(248),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(250),
    [anon_sym_packuswb] = ACTIONS(252),
    [anon_sym_punpckhbw] = ACTIONS(252),
    [anon_sym_punpckhdq] = ACTIONS(252),
    [anon_sym_punpckhwd] = ACTIONS(252),
    [anon_sym_punpcklbw] = ACTIONS(252),
    [anon_sym_punpckldq] = ACTIONS(252),
    [anon_sym_punpcklwd] = ACTIONS(252),
    [anon_sym_vpunpcklwd] = ACTIONS(252),
    [anon_sym_vpunpckldq] = ACTIONS(252),
    [anon_sym_punpcklqdq] = ACTIONS(252),
    [anon_sym_punpckhqdq] = ACTIONS(252),
    [anon_sym_vpunpckhqdq] = ACTIONS(252),
    [anon_sym_vpunpckhdq] = ACTIONS(252),
    [anon_sym_vpunpcklqdq] = ACTIONS(252),
    [anon_sym_vpunpckhwd] = ACTIONS(252),
    [anon_sym_rol] = ACTIONS(254),
    [anon_sym_ror] = ACTIONS(254),
    [anon_sym_sar] = ACTIONS(254),
    [anon_sym_sarl] = ACTIONS(254),
    [anon_sym_sarx] = ACTIONS(254),
    [anon_sym_shl] = ACTIONS(254),
    [anon_sym_shll] = ACTIONS(254),
    [anon_sym_shld] = ACTIONS(254),
    [anon_sym_shlx] = ACTIONS(254),
    [anon_sym_shlq] = ACTIONS(254),
    [anon_sym_shr] = ACTIONS(254),
    [anon_sym_shrq] = ACTIONS(254),
    [anon_sym_shrd] = ACTIONS(254),
    [anon_sym_shrl] = ACTIONS(254),
    [anon_sym_shrx] = ACTIONS(254),
    [anon_sym_vprord] = ACTIONS(254),
    [anon_sym_vprorq] = ACTIONS(254),
    [anon_sym_rorl] = ACTIONS(254),
    [anon_sym_roll] = ACTIONS(254),
    [anon_sym_push] = ACTIONS(256),
    [anon_sym_pushq] = ACTIONS(256),
    [anon_sym_pop] = ACTIONS(256),
    [anon_sym_movslq] = ACTIONS(258),
    [anon_sym_movsb] = ACTIONS(258),
    [anon_sym_rep] = ACTIONS(258),
    [anon_sym_repz] = ACTIONS(258),
    [anon_sym_repnz] = ACTIONS(258),
    [anon_sym_rex] = ACTIONS(260),
    [anon_sym_rex_DOTWB] = ACTIONS(260),
    [anon_sym_rex_DOTWRB] = ACTIONS(260),
    [anon_sym_rex_DOTRXB] = ACTIONS(260),
    [anon_sym_rex_DOTB] = ACTIONS(260),
    [anon_sym_rex_DOTWRXB] = ACTIONS(260),
    [anon_sym_rex_DOTXB] = ACTIONS(260),
    [anon_sym_rex_DOTW] = ACTIONS(260),
    [anon_sym_rex_DOTRB] = ACTIONS(260),
    [anon_sym_xgetbv] = ACTIONS(260),
    [anon_sym_fs] = ACTIONS(260),
    [anon_sym_kmovw] = ACTIONS(260),
    [anon_sym_adcx] = ACTIONS(262),
    [anon_sym_adox] = ACTIONS(262),
    [anon_sym_aesdec] = ACTIONS(262),
    [anon_sym_aesdeclast] = ACTIONS(262),
    [anon_sym_aesenc] = ACTIONS(262),
    [anon_sym_aesenclast] = ACTIONS(262),
    [anon_sym_vaesenc] = ACTIONS(262),
    [anon_sym_vaesenclast] = ACTIONS(262),
    [anon_sym_aeskeygenassist] = ACTIONS(262),
    [anon_sym_vblendps] = ACTIONS(262),
    [anon_sym_vblendvps] = ACTIONS(262),
    [anon_sym_vcvtusi2sd] = ACTIONS(262),
    [anon_sym_vdivsd] = ACTIONS(262),
    [anon_sym_vmovaps] = ACTIONS(262),
    [anon_sym_vmovapd] = ACTIONS(262),
    [anon_sym_vmovss] = ACTIONS(262),
    [anon_sym_vmovdqu] = ACTIONS(262),
    [anon_sym_vmovdqu64] = ACTIONS(262),
    [anon_sym_vmovdqu32] = ACTIONS(262),
    [anon_sym_vmovdqa] = ACTIONS(262),
    [anon_sym_vmovdqa32] = ACTIONS(262),
    [anon_sym_vmovdqa64] = ACTIONS(262),
    [anon_sym_vmovq] = ACTIONS(262),
    [anon_sym_vmovups] = ACTIONS(262),
    [anon_sym_vmovd] = ACTIONS(262),
    [anon_sym_vmovsd] = ACTIONS(262),
    [anon_sym_vmulsd] = ACTIONS(262),
    [anon_sym_vpackusdw] = ACTIONS(262),
    [anon_sym_vpaddd] = ACTIONS(262),
    [anon_sym_vpaddb] = ACTIONS(262),
    [anon_sym_vpaddq] = ACTIONS(262),
    [anon_sym_vpaddw] = ACTIONS(262),
    [anon_sym_vpalignr] = ACTIONS(262),
    [anon_sym_vpcmpgtd] = ACTIONS(262),
    [anon_sym_vpextrw] = ACTIONS(262),
    [anon_sym_vpinsrw] = ACTIONS(262),
    [anon_sym_vpinsrd] = ACTIONS(262),
    [anon_sym_vpinsrq] = ACTIONS(262),
    [anon_sym_vpinsrb] = ACTIONS(262),
    [anon_sym_vpmaddubsw] = ACTIONS(262),
    [anon_sym_vpmaddwd] = ACTIONS(262),
    [anon_sym_vpmullw] = ACTIONS(262),
    [anon_sym_vpmuludq] = ACTIONS(262),
    [anon_sym_vpor] = ACTIONS(262),
    [anon_sym_vpshufb] = ACTIONS(262),
    [anon_sym_vpshufd] = ACTIONS(262),
    [anon_sym_vpslldq] = ACTIONS(262),
    [anon_sym_vpslld] = ACTIONS(262),
    [anon_sym_vpsllq] = ACTIONS(262),
    [anon_sym_vpsllw] = ACTIONS(262),
    [anon_sym_vpsrldq] = ACTIONS(262),
    [anon_sym_vpsrld] = ACTIONS(262),
    [anon_sym_vpsrlq] = ACTIONS(262),
    [anon_sym_vpsrlw] = ACTIONS(262),
    [anon_sym_vpsubusw] = ACTIONS(262),
    [anon_sym_vpsubq] = ACTIONS(262),
    [anon_sym_vpsubd] = ACTIONS(262),
    [anon_sym_vpsubw] = ACTIONS(262),
    [anon_sym_vshufps] = ACTIONS(262),
    [anon_sym_vsubsd] = ACTIONS(262),
    [anon_sym_vucomisd] = ACTIONS(262),
    [anon_sym_vucomiss] = ACTIONS(262),
    [anon_sym_vunpckhpd] = ACTIONS(262),
    [anon_sym_vunpckhps] = ACTIONS(262),
    [anon_sym_vunpcklpd] = ACTIONS(262),
    [anon_sym_vunpcklps] = ACTIONS(262),
    [anon_sym_vbroadcastss] = ACTIONS(262),
    [anon_sym_vinsertf128] = ACTIONS(262),
    [anon_sym_vperm2f128] = ACTIONS(262),
    [anon_sym_vzeroall] = ACTIONS(262),
    [anon_sym_vzeroupper] = ACTIONS(262),
    [anon_sym_vshufi32x4] = ACTIONS(262),
    [anon_sym_vshufi64x2] = ACTIONS(262),
    [anon_sym_vpblendmd] = ACTIONS(262),
    [anon_sym_vextracti128] = ACTIONS(262),
    [anon_sym_vextracti32x4] = ACTIONS(262),
    [anon_sym_vinserti128] = ACTIONS(262),
    [anon_sym_vinserti32x4] = ACTIONS(262),
    [anon_sym_vinserti64x4] = ACTIONS(262),
    [anon_sym_vpblendd] = ACTIONS(262),
    [anon_sym_vpbroadcastq] = ACTIONS(262),
    [anon_sym_vpbroadcastd] = ACTIONS(262),
    [anon_sym_vbroadcasti128] = ACTIONS(262),
    [anon_sym_vbroadcasti32x4] = ACTIONS(262),
    [anon_sym_vperm2i128] = ACTIONS(262),
    [anon_sym_vpermd] = ACTIONS(262),
    [anon_sym_vpermq] = ACTIONS(262),
    [anon_sym_vpermt2d] = ACTIONS(262),
    [anon_sym_vpermi2d] = ACTIONS(262),
    [anon_sym_tzcnt] = ACTIONS(262),
    [anon_sym_rorx] = ACTIONS(262),
    [anon_sym_psubd] = ACTIONS(262),
    [anon_sym_pmaddwd] = ACTIONS(262),
    [anon_sym_pxor] = ACTIONS(262),
    [anon_sym_psrad] = ACTIONS(262),
    [anon_sym_pslld] = ACTIONS(262),
    [anon_sym_pcmpgtd] = ACTIONS(262),
    [anon_sym_pcmpeqd] = ACTIONS(262),
    [anon_sym_por] = ACTIONS(262),
    [anon_sym_paddw] = ACTIONS(262),
    [anon_sym_psubusw] = ACTIONS(262),
    [anon_sym_pcmpeqb] = ACTIONS(262),
    [anon_sym_psubusb] = ACTIONS(262),
    [anon_sym_psrld] = ACTIONS(262),
    [anon_sym_psrlw] = ACTIONS(262),
    [anon_sym_psllq] = ACTIONS(262),
    [anon_sym_paddd] = ACTIONS(262),
    [anon_sym_psrlq] = ACTIONS(262),
    [anon_sym_psubb] = ACTIONS(262),
    [anon_sym_maxss] = ACTIONS(262),
    [anon_sym_pmovmskb] = ACTIONS(262),
    [anon_sym_pinsrw] = ACTIONS(262),
    [anon_sym_minss] = ACTIONS(262),
    [anon_sym_prefetcht1] = ACTIONS(262),
    [anon_sym_prefetcht0] = ACTIONS(262),
    [anon_sym_pextrw] = ACTIONS(262),
    [anon_sym_ucomiss] = ACTIONS(262),
    [anon_sym_shufps] = ACTIONS(262),
    [anon_sym_addsd] = ACTIONS(262),
    [anon_sym_paddq] = ACTIONS(262),
    [anon_sym_psubq] = ACTIONS(262),
    [anon_sym_pshuflw] = ACTIONS(262),
    [anon_sym_pmuludq] = ACTIONS(262),
    [anon_sym_pshufd] = ACTIONS(262),
    [anon_sym_minsd] = ACTIONS(262),
    [anon_sym_pshufhw] = ACTIONS(262),
    [anon_sym_mfence] = ACTIONS(262),
    [anon_sym_maxsd] = ACTIONS(262),
    [anon_sym_ucomisd] = ACTIONS(262),
    [anon_sym_shufpd] = ACTIONS(262),
    [anon_sym_pslldq] = ACTIONS(262),
    [anon_sym_unpckhpd] = ACTIONS(262),
    [anon_sym_psrldq] = ACTIONS(262),
    [anon_sym_palignr] = ACTIONS(262),
    [anon_sym_pshufb] = ACTIONS(262),
    [anon_sym_pmaddubsw] = ACTIONS(262),
    [anon_sym_pinsrb] = ACTIONS(262),
    [anon_sym_pblendw] = ACTIONS(262),
    [anon_sym_pextrq] = ACTIONS(262),
    [anon_sym_blendvps] = ACTIONS(262),
    [anon_sym_pextrb] = ACTIONS(262),
    [anon_sym_pinsrd] = ACTIONS(262),
    [anon_sym_femms] = ACTIONS(262),
    [anon_sym_callq] = ACTIONS(264),
    [anon_sym_ja] = ACTIONS(264),
    [anon_sym_jae] = ACTIONS(264),
    [anon_sym_jb] = ACTIONS(264),
    [anon_sym_jbe] = ACTIONS(264),
    [anon_sym_je] = ACTIONS(264),
    [anon_sym_jg] = ACTIONS(264),
    [anon_sym_jge] = ACTIONS(264),
    [anon_sym_jl] = ACTIONS(264),
    [anon_sym_jle] = ACTIONS(264),
    [anon_sym_jmp] = ACTIONS(264),
    [anon_sym_jmpq] = ACTIONS(264),
    [anon_sym_jne] = ACTIONS(264),
    [anon_sym_jno] = ACTIONS(264),
    [anon_sym_jns] = ACTIONS(264),
    [anon_sym_jo] = ACTIONS(264),
    [anon_sym_jp] = ACTIONS(264),
    [anon_sym_jrcxz] = ACTIONS(264),
    [anon_sym_js] = ACTIONS(264),
    [anon_sym_notrack] = ACTIONS(264),
  },
  [21] = {
    [sym_comment] = STATE(323),
    [sym_instruction] = STATE(157),
    [sym_opcode] = STATE(3),
    [sym_BinaryArithmeticOpcode] = STATE(5),
    [sym_BitAndByteOpcode] = STATE(5),
    [sym_CuriousOpcode] = STATE(5),
    [sym_DataTransferOpcode] = STATE(5),
    [sym_IOOpcode] = STATE(5),
    [sym_LogicalOpcode] = STATE(5),
    [sym_MiscellaneousOpcode] = STATE(5),
    [sym_PackUnpackOpcode] = STATE(5),
    [sym_ShiftAndRotateOpcode] = STATE(5),
    [sym_StackOpcode] = STATE(5),
    [sym_StringOpcode] = STATE(5),
    [sym_AccessRegisterOpcode] = STATE(5),
    [sym_ToBeClassifiedOpcode] = STATE(5),
    [sym_callq] = STATE(157),
    [sym_callqOpcode] = STATE(56),
    [aux_sym__line_repeat1] = STATE(20),
    [sym_two_bytes] = ACTIONS(266),
    [aux_sym_comment_token1] = ACTIONS(232),
    [aux_sym_comment_token2] = ACTIONS(232),
    [sym__line_break] = ACTIONS(268),
    [anon_sym_adc] = ACTIONS(236),
    [anon_sym_add] = ACTIONS(236),
    [anon_sym_addq] = ACTIONS(236),
    [anon_sym_addl] = ACTIONS(236),
    [anon_sym_addss] = ACTIONS(236),
    [anon_sym_addw] = ACTIONS(236),
    [anon_sym_addb] = ACTIONS(236),
    [anon_sym_cmp] = ACTIONS(236),
    [anon_sym_cmpb] = ACTIONS(236),
    [anon_sym_cmpw] = ACTIONS(236),
    [anon_sym_cmpl] = ACTIONS(236),
    [anon_sym_cmpq] = ACTIONS(236),
    [anon_sym_comiss] = ACTIONS(236),
    [anon_sym_comisd] = ACTIONS(236),
    [anon_sym_inc] = ACTIONS(236),
    [anon_sym_incl] = ACTIONS(236),
    [anon_sym_dec] = ACTIONS(236),
    [anon_sym_div] = ACTIONS(236),
    [anon_sym_divq] = ACTIONS(236),
    [anon_sym_divl] = ACTIONS(236),
    [anon_sym_divss] = ACTIONS(236),
    [anon_sym_divsd] = ACTIONS(236),
    [anon_sym_idiv] = ACTIONS(236),
    [anon_sym_idivl] = ACTIONS(236),
    [anon_sym_sub] = ACTIONS(236),
    [anon_sym_subq] = ACTIONS(236),
    [anon_sym_subl] = ACTIONS(236),
    [anon_sym_subss] = ACTIONS(236),
    [anon_sym_subw] = ACTIONS(236),
    [anon_sym_subb] = ACTIONS(236),
    [anon_sym_subsd] = ACTIONS(236),
    [anon_sym_subpd] = ACTIONS(236),
    [anon_sym_sbb] = ACTIONS(236),
    [anon_sym_mul] = ACTIONS(236),
    [anon_sym_mulq] = ACTIONS(236),
    [anon_sym_mull] = ACTIONS(236),
    [anon_sym_mulss] = ACTIONS(236),
    [anon_sym_mulw] = ACTIONS(236),
    [anon_sym_mulb] = ACTIONS(236),
    [anon_sym_mulsd] = ACTIONS(236),
    [anon_sym_mulx] = ACTIONS(236),
    [anon_sym_imul] = ACTIONS(236),
    [anon_sym_neg] = ACTIONS(236),
    [anon_sym_negl] = ACTIONS(236),
    [anon_sym_negq] = ACTIONS(236),
    [anon_sym_fmulp] = ACTIONS(236),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(236),
    [anon_sym_pclmullqlqdq] = ACTIONS(236),
    [anon_sym_pclmullqhqdq] = ACTIONS(236),
    [anon_sym_vpclmullqhqdq] = ACTIONS(236),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(236),
    [anon_sym_pclmulhqhqdq] = ACTIONS(236),
    [anon_sym_vpclmullqlqdq] = ACTIONS(236),
    [anon_sym_bsf] = ACTIONS(238),
    [anon_sym_bsr] = ACTIONS(238),
    [anon_sym_bts] = ACTIONS(238),
    [anon_sym_bt] = ACTIONS(238),
    [anon_sym_btr] = ACTIONS(238),
    [anon_sym_btl] = ACTIONS(238),
    [anon_sym_setne] = ACTIONS(238),
    [anon_sym_setb] = ACTIONS(238),
    [anon_sym_sete] = ACTIONS(238),
    [anon_sym_setbe] = ACTIONS(238),
    [anon_sym_seta] = ACTIONS(238),
    [anon_sym_setge] = ACTIONS(238),
    [anon_sym_setae] = ACTIONS(238),
    [anon_sym_setl] = ACTIONS(238),
    [anon_sym_setle] = ACTIONS(238),
    [anon_sym_setg] = ACTIONS(238),
    [anon_sym_seto] = ACTIONS(238),
    [anon_sym_setnp] = ACTIONS(238),
    [anon_sym_setp] = ACTIONS(238),
    [anon_sym_setns] = ACTIONS(238),
    [anon_sym_test] = ACTIONS(238),
    [anon_sym_testb] = ACTIONS(238),
    [anon_sym_testl] = ACTIONS(238),
    [anon_sym_knotw] = ACTIONS(238),
    [anon_sym_vpcmpltud] = ACTIONS(240),
    [anon_sym_gs] = ACTIONS(240),
    [anon_sym_re] = ACTIONS(240),
    [anon_sym_ss] = ACTIONS(240),
    [anon_sym_leaveq] = ACTIONS(240),
    [anon_sym_retq] = ACTIONS(240),
    [anon_sym_bswap] = ACTIONS(242),
    [anon_sym_cbtw] = ACTIONS(242),
    [anon_sym_cltd] = ACTIONS(242),
    [anon_sym_cltq] = ACTIONS(242),
    [anon_sym_cmovbe] = ACTIONS(242),
    [anon_sym_cmovl] = ACTIONS(242),
    [anon_sym_cmovae] = ACTIONS(242),
    [anon_sym_cmovo] = ACTIONS(242),
    [anon_sym_cmovne] = ACTIONS(242),
    [anon_sym_cmovns] = ACTIONS(242),
    [anon_sym_cmovg] = ACTIONS(242),
    [anon_sym_cmovp] = ACTIONS(242),
    [anon_sym_cmove] = ACTIONS(242),
    [anon_sym_cmovge] = ACTIONS(242),
    [anon_sym_cmovb] = ACTIONS(242),
    [anon_sym_cmova] = ACTIONS(242),
    [anon_sym_cmovle] = ACTIONS(242),
    [anon_sym_cmovs] = ACTIONS(242),
    [anon_sym_cwtl] = ACTIONS(242),
    [anon_sym_cwtd] = ACTIONS(242),
    [anon_sym_cqto] = ACTIONS(242),
    [anon_sym_cvttsd2si] = ACTIONS(242),
    [anon_sym_cvtss2sd] = ACTIONS(242),
    [anon_sym_cvttss2si] = ACTIONS(242),
    [anon_sym_cvtsi2sd] = ACTIONS(242),
    [anon_sym_cvtsi2ss] = ACTIONS(242),
    [anon_sym_cvtsi2sdq] = ACTIONS(242),
    [anon_sym_cvtsi2sdl] = ACTIONS(242),
    [anon_sym_cvtsd2ss] = ACTIONS(242),
    [anon_sym_cvtsi2ssl] = ACTIONS(242),
    [anon_sym_mov] = ACTIONS(242),
    [anon_sym_movw] = ACTIONS(242),
    [anon_sym_movl] = ACTIONS(242),
    [anon_sym_movq] = ACTIONS(242),
    [anon_sym_movb] = ACTIONS(242),
    [anon_sym_movabs] = ACTIONS(242),
    [anon_sym_movsbw] = ACTIONS(242),
    [anon_sym_movsbq] = ACTIONS(242),
    [anon_sym_movsbl] = ACTIONS(242),
    [anon_sym_movswl] = ACTIONS(242),
    [anon_sym_movswq] = ACTIONS(242),
    [anon_sym_movzbw] = ACTIONS(242),
    [anon_sym_movzbq] = ACTIONS(242),
    [anon_sym_movzbl] = ACTIONS(242),
    [anon_sym_movzwl] = ACTIONS(242),
    [anon_sym_movaps] = ACTIONS(242),
    [anon_sym_movhlps] = ACTIONS(242),
    [anon_sym_movss] = ACTIONS(242),
    [anon_sym_movups] = ACTIONS(242),
    [anon_sym_movsd] = ACTIONS(242),
    [anon_sym_movd] = ACTIONS(242),
    [anon_sym_movhps] = ACTIONS(242),
    [anon_sym_movdqa] = ACTIONS(242),
    [anon_sym_movbe] = ACTIONS(242),
    [anon_sym_movapd] = ACTIONS(242),
    [anon_sym_movdqu] = ACTIONS(242),
    [anon_sym_xchg] = ACTIONS(242),
    [anon_sym_fildl] = ACTIONS(242),
    [anon_sym_fldt] = ACTIONS(242),
    [anon_sym_fstpl] = ACTIONS(242),
    [anon_sym_insb] = ACTIONS(244),
    [anon_sym_insl] = ACTIONS(244),
    [anon_sym_outsb] = ACTIONS(244),
    [anon_sym_outsl] = ACTIONS(244),
    [anon_sym_or] = ACTIONS(246),
    [anon_sym_orq] = ACTIONS(246),
    [anon_sym_orl] = ACTIONS(246),
    [anon_sym_orb] = ACTIONS(246),
    [anon_sym_orw] = ACTIONS(246),
    [anon_sym_xor] = ACTIONS(246),
    [anon_sym_xorl] = ACTIONS(246),
    [anon_sym_xorw] = ACTIONS(246),
    [anon_sym_xorps] = ACTIONS(246),
    [anon_sym_xorpd] = ACTIONS(246),
    [anon_sym_vxorps] = ACTIONS(246),
    [anon_sym_vpxord] = ACTIONS(246),
    [anon_sym_vpxor] = ACTIONS(246),
    [anon_sym_and] = ACTIONS(246),
    [anon_sym_andq] = ACTIONS(246),
    [anon_sym_andl] = ACTIONS(246),
    [anon_sym_andw] = ACTIONS(246),
    [anon_sym_andb] = ACTIONS(246),
    [anon_sym_andn] = ACTIONS(246),
    [anon_sym_andpd] = ACTIONS(246),
    [anon_sym_pand] = ACTIONS(246),
    [anon_sym_pandn] = ACTIONS(246),
    [anon_sym_andps] = ACTIONS(246),
    [anon_sym_vpand] = ACTIONS(246),
    [anon_sym_not] = ACTIONS(246),
    [anon_sym_notl] = ACTIONS(246),
    [anon_sym_notw] = ACTIONS(246),
    [anon_sym_cpuid] = ACTIONS(248),
    [anon_sym_lea] = ACTIONS(248),
    [anon_sym_popcnt] = ACTIONS(248),
    [anon_sym_nop] = ACTIONS(248),
    [anon_sym_nopl] = ACTIONS(248),
    [anon_sym_nopw] = ACTIONS(248),
    [anon_sym_ud2] = ACTIONS(248),
    [anon_sym_data16] = ACTIONS(248),
    [anon_sym_sha1rnds4] = ACTIONS(248),
    [anon_sym_addr32] = ACTIONS(248),
    [anon_sym_sha1msg1] = ACTIONS(248),
    [anon_sym_sha1msg2] = ACTIONS(248),
    [anon_sym_sha1nexte] = ACTIONS(248),
    [anon_sym_endbr64] = ACTIONS(248),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(250),
    [anon_sym_packuswb] = ACTIONS(252),
    [anon_sym_punpckhbw] = ACTIONS(252),
    [anon_sym_punpckhdq] = ACTIONS(252),
    [anon_sym_punpckhwd] = ACTIONS(252),
    [anon_sym_punpcklbw] = ACTIONS(252),
    [anon_sym_punpckldq] = ACTIONS(252),
    [anon_sym_punpcklwd] = ACTIONS(252),
    [anon_sym_vpunpcklwd] = ACTIONS(252),
    [anon_sym_vpunpckldq] = ACTIONS(252),
    [anon_sym_punpcklqdq] = ACTIONS(252),
    [anon_sym_punpckhqdq] = ACTIONS(252),
    [anon_sym_vpunpckhqdq] = ACTIONS(252),
    [anon_sym_vpunpckhdq] = ACTIONS(252),
    [anon_sym_vpunpcklqdq] = ACTIONS(252),
    [anon_sym_vpunpckhwd] = ACTIONS(252),
    [anon_sym_rol] = ACTIONS(254),
    [anon_sym_ror] = ACTIONS(254),
    [anon_sym_sar] = ACTIONS(254),
    [anon_sym_sarl] = ACTIONS(254),
    [anon_sym_sarx] = ACTIONS(254),
    [anon_sym_shl] = ACTIONS(254),
    [anon_sym_shll] = ACTIONS(254),
    [anon_sym_shld] = ACTIONS(254),
    [anon_sym_shlx] = ACTIONS(254),
    [anon_sym_shlq] = ACTIONS(254),
    [anon_sym_shr] = ACTIONS(254),
    [anon_sym_shrq] = ACTIONS(254),
    [anon_sym_shrd] = ACTIONS(254),
    [anon_sym_shrl] = ACTIONS(254),
    [anon_sym_shrx] = ACTIONS(254),
    [anon_sym_vprord] = ACTIONS(254),
    [anon_sym_vprorq] = ACTIONS(254),
    [anon_sym_rorl] = ACTIONS(254),
    [anon_sym_roll] = ACTIONS(254),
    [anon_sym_push] = ACTIONS(256),
    [anon_sym_pushq] = ACTIONS(256),
    [anon_sym_pop] = ACTIONS(256),
    [anon_sym_movslq] = ACTIONS(258),
    [anon_sym_movsb] = ACTIONS(258),
    [anon_sym_rep] = ACTIONS(258),
    [anon_sym_repz] = ACTIONS(258),
    [anon_sym_repnz] = ACTIONS(258),
    [anon_sym_rex] = ACTIONS(260),
    [anon_sym_rex_DOTWB] = ACTIONS(260),
    [anon_sym_rex_DOTWRB] = ACTIONS(260),
    [anon_sym_rex_DOTRXB] = ACTIONS(260),
    [anon_sym_rex_DOTB] = ACTIONS(260),
    [anon_sym_rex_DOTWRXB] = ACTIONS(260),
    [anon_sym_rex_DOTXB] = ACTIONS(260),
    [anon_sym_rex_DOTW] = ACTIONS(260),
    [anon_sym_rex_DOTRB] = ACTIONS(260),
    [anon_sym_xgetbv] = ACTIONS(260),
    [anon_sym_fs] = ACTIONS(260),
    [anon_sym_kmovw] = ACTIONS(260),
    [anon_sym_adcx] = ACTIONS(262),
    [anon_sym_adox] = ACTIONS(262),
    [anon_sym_aesdec] = ACTIONS(262),
    [anon_sym_aesdeclast] = ACTIONS(262),
    [anon_sym_aesenc] = ACTIONS(262),
    [anon_sym_aesenclast] = ACTIONS(262),
    [anon_sym_vaesenc] = ACTIONS(262),
    [anon_sym_vaesenclast] = ACTIONS(262),
    [anon_sym_aeskeygenassist] = ACTIONS(262),
    [anon_sym_vblendps] = ACTIONS(262),
    [anon_sym_vblendvps] = ACTIONS(262),
    [anon_sym_vcvtusi2sd] = ACTIONS(262),
    [anon_sym_vdivsd] = ACTIONS(262),
    [anon_sym_vmovaps] = ACTIONS(262),
    [anon_sym_vmovapd] = ACTIONS(262),
    [anon_sym_vmovss] = ACTIONS(262),
    [anon_sym_vmovdqu] = ACTIONS(262),
    [anon_sym_vmovdqu64] = ACTIONS(262),
    [anon_sym_vmovdqu32] = ACTIONS(262),
    [anon_sym_vmovdqa] = ACTIONS(262),
    [anon_sym_vmovdqa32] = ACTIONS(262),
    [anon_sym_vmovdqa64] = ACTIONS(262),
    [anon_sym_vmovq] = ACTIONS(262),
    [anon_sym_vmovups] = ACTIONS(262),
    [anon_sym_vmovd] = ACTIONS(262),
    [anon_sym_vmovsd] = ACTIONS(262),
    [anon_sym_vmulsd] = ACTIONS(262),
    [anon_sym_vpackusdw] = ACTIONS(262),
    [anon_sym_vpaddd] = ACTIONS(262),
    [anon_sym_vpaddb] = ACTIONS(262),
    [anon_sym_vpaddq] = ACTIONS(262),
    [anon_sym_vpaddw] = ACTIONS(262),
    [anon_sym_vpalignr] = ACTIONS(262),
    [anon_sym_vpcmpgtd] = ACTIONS(262),
    [anon_sym_vpextrw] = ACTIONS(262),
    [anon_sym_vpinsrw] = ACTIONS(262),
    [anon_sym_vpinsrd] = ACTIONS(262),
    [anon_sym_vpinsrq] = ACTIONS(262),
    [anon_sym_vpinsrb] = ACTIONS(262),
    [anon_sym_vpmaddubsw] = ACTIONS(262),
    [anon_sym_vpmaddwd] = ACTIONS(262),
    [anon_sym_vpmullw] = ACTIONS(262),
    [anon_sym_vpmuludq] = ACTIONS(262),
    [anon_sym_vpor] = ACTIONS(262),
    [anon_sym_vpshufb] = ACTIONS(262),
    [anon_sym_vpshufd] = ACTIONS(262),
    [anon_sym_vpslldq] = ACTIONS(262),
    [anon_sym_vpslld] = ACTIONS(262),
    [anon_sym_vpsllq] = ACTIONS(262),
    [anon_sym_vpsllw] = ACTIONS(262),
    [anon_sym_vpsrldq] = ACTIONS(262),
    [anon_sym_vpsrld] = ACTIONS(262),
    [anon_sym_vpsrlq] = ACTIONS(262),
    [anon_sym_vpsrlw] = ACTIONS(262),
    [anon_sym_vpsubusw] = ACTIONS(262),
    [anon_sym_vpsubq] = ACTIONS(262),
    [anon_sym_vpsubd] = ACTIONS(262),
    [anon_sym_vpsubw] = ACTIONS(262),
    [anon_sym_vshufps] = ACTIONS(262),
    [anon_sym_vsubsd] = ACTIONS(262),
    [anon_sym_vucomisd] = ACTIONS(262),
    [anon_sym_vucomiss] = ACTIONS(262),
    [anon_sym_vunpckhpd] = ACTIONS(262),
    [anon_sym_vunpckhps] = ACTIONS(262),
    [anon_sym_vunpcklpd] = ACTIONS(262),
    [anon_sym_vunpcklps] = ACTIONS(262),
    [anon_sym_vbroadcastss] = ACTIONS(262),
    [anon_sym_vinsertf128] = ACTIONS(262),
    [anon_sym_vperm2f128] = ACTIONS(262),
    [anon_sym_vzeroall] = ACTIONS(262),
    [anon_sym_vzeroupper] = ACTIONS(262),
    [anon_sym_vshufi32x4] = ACTIONS(262),
    [anon_sym_vshufi64x2] = ACTIONS(262),
    [anon_sym_vpblendmd] = ACTIONS(262),
    [anon_sym_vextracti128] = ACTIONS(262),
    [anon_sym_vextracti32x4] = ACTIONS(262),
    [anon_sym_vinserti128] = ACTIONS(262),
    [anon_sym_vinserti32x4] = ACTIONS(262),
    [anon_sym_vinserti64x4] = ACTIONS(262),
    [anon_sym_vpblendd] = ACTIONS(262),
    [anon_sym_vpbroadcastq] = ACTIONS(262),
    [anon_sym_vpbroadcastd] = ACTIONS(262),
    [anon_sym_vbroadcasti128] = ACTIONS(262),
    [anon_sym_vbroadcasti32x4] = ACTIONS(262),
    [anon_sym_vperm2i128] = ACTIONS(262),
    [anon_sym_vpermd] = ACTIONS(262),
    [anon_sym_vpermq] = ACTIONS(262),
    [anon_sym_vpermt2d] = ACTIONS(262),
    [anon_sym_vpermi2d] = ACTIONS(262),
    [anon_sym_tzcnt] = ACTIONS(262),
    [anon_sym_rorx] = ACTIONS(262),
    [anon_sym_psubd] = ACTIONS(262),
    [anon_sym_pmaddwd] = ACTIONS(262),
    [anon_sym_pxor] = ACTIONS(262),
    [anon_sym_psrad] = ACTIONS(262),
    [anon_sym_pslld] = ACTIONS(262),
    [anon_sym_pcmpgtd] = ACTIONS(262),
    [anon_sym_pcmpeqd] = ACTIONS(262),
    [anon_sym_por] = ACTIONS(262),
    [anon_sym_paddw] = ACTIONS(262),
    [anon_sym_psubusw] = ACTIONS(262),
    [anon_sym_pcmpeqb] = ACTIONS(262),
    [anon_sym_psubusb] = ACTIONS(262),
    [anon_sym_psrld] = ACTIONS(262),
    [anon_sym_psrlw] = ACTIONS(262),
    [anon_sym_psllq] = ACTIONS(262),
    [anon_sym_paddd] = ACTIONS(262),
    [anon_sym_psrlq] = ACTIONS(262),
    [anon_sym_psubb] = ACTIONS(262),
    [anon_sym_maxss] = ACTIONS(262),
    [anon_sym_pmovmskb] = ACTIONS(262),
    [anon_sym_pinsrw] = ACTIONS(262),
    [anon_sym_minss] = ACTIONS(262),
    [anon_sym_prefetcht1] = ACTIONS(262),
    [anon_sym_prefetcht0] = ACTIONS(262),
    [anon_sym_pextrw] = ACTIONS(262),
    [anon_sym_ucomiss] = ACTIONS(262),
    [anon_sym_shufps] = ACTIONS(262),
    [anon_sym_addsd] = ACTIONS(262),
    [anon_sym_paddq] = ACTIONS(262),
    [anon_sym_psubq] = ACTIONS(262),
    [anon_sym_pshuflw] = ACTIONS(262),
    [anon_sym_pmuludq] = ACTIONS(262),
    [anon_sym_pshufd] = ACTIONS(262),
    [anon_sym_minsd] = ACTIONS(262),
    [anon_sym_pshufhw] = ACTIONS(262),
    [anon_sym_mfence] = ACTIONS(262),
    [anon_sym_maxsd] = ACTIONS(262),
    [anon_sym_ucomisd] = ACTIONS(262),
    [anon_sym_shufpd] = ACTIONS(262),
    [anon_sym_pslldq] = ACTIONS(262),
    [anon_sym_unpckhpd] = ACTIONS(262),
    [anon_sym_psrldq] = ACTIONS(262),
    [anon_sym_palignr] = ACTIONS(262),
    [anon_sym_pshufb] = ACTIONS(262),
    [anon_sym_pmaddubsw] = ACTIONS(262),
    [anon_sym_pinsrb] = ACTIONS(262),
    [anon_sym_pblendw] = ACTIONS(262),
    [anon_sym_pextrq] = ACTIONS(262),
    [anon_sym_blendvps] = ACTIONS(262),
    [anon_sym_pextrb] = ACTIONS(262),
    [anon_sym_pinsrd] = ACTIONS(262),
    [anon_sym_femms] = ACTIONS(262),
    [anon_sym_callq] = ACTIONS(264),
    [anon_sym_ja] = ACTIONS(264),
    [anon_sym_jae] = ACTIONS(264),
    [anon_sym_jb] = ACTIONS(264),
    [anon_sym_jbe] = ACTIONS(264),
    [anon_sym_je] = ACTIONS(264),
    [anon_sym_jg] = ACTIONS(264),
    [anon_sym_jge] = ACTIONS(264),
    [anon_sym_jl] = ACTIONS(264),
    [anon_sym_jle] = ACTIONS(264),
    [anon_sym_jmp] = ACTIONS(264),
    [anon_sym_jmpq] = ACTIONS(264),
    [anon_sym_jne] = ACTIONS(264),
    [anon_sym_jno] = ACTIONS(264),
    [anon_sym_jns] = ACTIONS(264),
    [anon_sym_jo] = ACTIONS(264),
    [anon_sym_jp] = ACTIONS(264),
    [anon_sym_jrcxz] = ACTIONS(264),
    [anon_sym_js] = ACTIONS(264),
    [anon_sym_notrack] = ACTIONS(264),
  },
  [22] = {
    [aux_sym__line_repeat1] = STATE(22),
    [sym_two_bytes] = ACTIONS(270),
    [aux_sym_comment_token1] = ACTIONS(273),
    [aux_sym_comment_token2] = ACTIONS(273),
    [sym__line_break] = ACTIONS(275),
    [anon_sym_adc] = ACTIONS(273),
    [anon_sym_add] = ACTIONS(273),
    [anon_sym_addq] = ACTIONS(273),
    [anon_sym_addl] = ACTIONS(273),
    [anon_sym_addss] = ACTIONS(273),
    [anon_sym_addw] = ACTIONS(273),
    [anon_sym_addb] = ACTIONS(273),
    [anon_sym_cmp] = ACTIONS(273),
    [anon_sym_cmpb] = ACTIONS(273),
    [anon_sym_cmpw] = ACTIONS(273),
    [anon_sym_cmpl] = ACTIONS(273),
    [anon_sym_cmpq] = ACTIONS(273),
    [anon_sym_comiss] = ACTIONS(273),
    [anon_sym_comisd] = ACTIONS(273),
    [anon_sym_inc] = ACTIONS(273),
    [anon_sym_incl] = ACTIONS(273),
    [anon_sym_dec] = ACTIONS(273),
    [anon_sym_div] = ACTIONS(273),
    [anon_sym_divq] = ACTIONS(273),
    [anon_sym_divl] = ACTIONS(273),
    [anon_sym_divss] = ACTIONS(273),
    [anon_sym_divsd] = ACTIONS(273),
    [anon_sym_idiv] = ACTIONS(273),
    [anon_sym_idivl] = ACTIONS(273),
    [anon_sym_sub] = ACTIONS(273),
    [anon_sym_subq] = ACTIONS(273),
    [anon_sym_subl] = ACTIONS(273),
    [anon_sym_subss] = ACTIONS(273),
    [anon_sym_subw] = ACTIONS(273),
    [anon_sym_subb] = ACTIONS(273),
    [anon_sym_subsd] = ACTIONS(273),
    [anon_sym_subpd] = ACTIONS(273),
    [anon_sym_sbb] = ACTIONS(273),
    [anon_sym_mul] = ACTIONS(273),
    [anon_sym_mulq] = ACTIONS(273),
    [anon_sym_mull] = ACTIONS(273),
    [anon_sym_mulss] = ACTIONS(273),
    [anon_sym_mulw] = ACTIONS(273),
    [anon_sym_mulb] = ACTIONS(273),
    [anon_sym_mulsd] = ACTIONS(273),
    [anon_sym_mulx] = ACTIONS(273),
    [anon_sym_imul] = ACTIONS(273),
    [anon_sym_neg] = ACTIONS(273),
    [anon_sym_negl] = ACTIONS(273),
    [anon_sym_negq] = ACTIONS(273),
    [anon_sym_fmulp] = ACTIONS(273),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(273),
    [anon_sym_pclmullqlqdq] = ACTIONS(273),
    [anon_sym_pclmullqhqdq] = ACTIONS(273),
    [anon_sym_vpclmullqhqdq] = ACTIONS(273),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(273),
    [anon_sym_pclmulhqhqdq] = ACTIONS(273),
    [anon_sym_vpclmullqlqdq] = ACTIONS(273),
    [anon_sym_bsf] = ACTIONS(273),
    [anon_sym_bsr] = ACTIONS(273),
    [anon_sym_bts] = ACTIONS(273),
    [anon_sym_bt] = ACTIONS(273),
    [anon_sym_btr] = ACTIONS(273),
    [anon_sym_btl] = ACTIONS(273),
    [anon_sym_setne] = ACTIONS(273),
    [anon_sym_setb] = ACTIONS(273),
    [anon_sym_sete] = ACTIONS(273),
    [anon_sym_setbe] = ACTIONS(273),
    [anon_sym_seta] = ACTIONS(273),
    [anon_sym_setge] = ACTIONS(273),
    [anon_sym_setae] = ACTIONS(273),
    [anon_sym_setl] = ACTIONS(273),
    [anon_sym_setle] = ACTIONS(273),
    [anon_sym_setg] = ACTIONS(273),
    [anon_sym_seto] = ACTIONS(273),
    [anon_sym_setnp] = ACTIONS(273),
    [anon_sym_setp] = ACTIONS(273),
    [anon_sym_setns] = ACTIONS(273),
    [anon_sym_test] = ACTIONS(273),
    [anon_sym_testb] = ACTIONS(273),
    [anon_sym_testl] = ACTIONS(273),
    [anon_sym_knotw] = ACTIONS(273),
    [anon_sym_vpcmpltud] = ACTIONS(273),
    [anon_sym_gs] = ACTIONS(273),
    [anon_sym_re] = ACTIONS(273),
    [anon_sym_ss] = ACTIONS(273),
    [anon_sym_leaveq] = ACTIONS(273),
    [anon_sym_retq] = ACTIONS(273),
    [anon_sym_bswap] = ACTIONS(273),
    [anon_sym_cbtw] = ACTIONS(273),
    [anon_sym_cltd] = ACTIONS(273),
    [anon_sym_cltq] = ACTIONS(273),
    [anon_sym_cmovbe] = ACTIONS(273),
    [anon_sym_cmovl] = ACTIONS(273),
    [anon_sym_cmovae] = ACTIONS(273),
    [anon_sym_cmovo] = ACTIONS(273),
    [anon_sym_cmovne] = ACTIONS(273),
    [anon_sym_cmovns] = ACTIONS(273),
    [anon_sym_cmovg] = ACTIONS(273),
    [anon_sym_cmovp] = ACTIONS(273),
    [anon_sym_cmove] = ACTIONS(273),
    [anon_sym_cmovge] = ACTIONS(273),
    [anon_sym_cmovb] = ACTIONS(273),
    [anon_sym_cmova] = ACTIONS(273),
    [anon_sym_cmovle] = ACTIONS(273),
    [anon_sym_cmovs] = ACTIONS(273),
    [anon_sym_cwtl] = ACTIONS(273),
    [anon_sym_cwtd] = ACTIONS(273),
    [anon_sym_cqto] = ACTIONS(273),
    [anon_sym_cvttsd2si] = ACTIONS(273),
    [anon_sym_cvtss2sd] = ACTIONS(273),
    [anon_sym_cvttss2si] = ACTIONS(273),
    [anon_sym_cvtsi2sd] = ACTIONS(273),
    [anon_sym_cvtsi2ss] = ACTIONS(273),
    [anon_sym_cvtsi2sdq] = ACTIONS(273),
    [anon_sym_cvtsi2sdl] = ACTIONS(273),
    [anon_sym_cvtsd2ss] = ACTIONS(273),
    [anon_sym_cvtsi2ssl] = ACTIONS(273),
    [anon_sym_mov] = ACTIONS(273),
    [anon_sym_movw] = ACTIONS(273),
    [anon_sym_movl] = ACTIONS(273),
    [anon_sym_movq] = ACTIONS(273),
    [anon_sym_movb] = ACTIONS(273),
    [anon_sym_movabs] = ACTIONS(273),
    [anon_sym_movsbw] = ACTIONS(273),
    [anon_sym_movsbq] = ACTIONS(273),
    [anon_sym_movsbl] = ACTIONS(273),
    [anon_sym_movswl] = ACTIONS(273),
    [anon_sym_movswq] = ACTIONS(273),
    [anon_sym_movzbw] = ACTIONS(273),
    [anon_sym_movzbq] = ACTIONS(273),
    [anon_sym_movzbl] = ACTIONS(273),
    [anon_sym_movzwl] = ACTIONS(273),
    [anon_sym_movaps] = ACTIONS(273),
    [anon_sym_movhlps] = ACTIONS(273),
    [anon_sym_movss] = ACTIONS(273),
    [anon_sym_movups] = ACTIONS(273),
    [anon_sym_movsd] = ACTIONS(273),
    [anon_sym_movd] = ACTIONS(273),
    [anon_sym_movhps] = ACTIONS(273),
    [anon_sym_movdqa] = ACTIONS(273),
    [anon_sym_movbe] = ACTIONS(273),
    [anon_sym_movapd] = ACTIONS(273),
    [anon_sym_movdqu] = ACTIONS(273),
    [anon_sym_xchg] = ACTIONS(273),
    [anon_sym_fildl] = ACTIONS(273),
    [anon_sym_fldt] = ACTIONS(273),
    [anon_sym_fstpl] = ACTIONS(273),
    [anon_sym_insb] = ACTIONS(273),
    [anon_sym_insl] = ACTIONS(273),
    [anon_sym_outsb] = ACTIONS(273),
    [anon_sym_outsl] = ACTIONS(273),
    [anon_sym_or] = ACTIONS(273),
    [anon_sym_orq] = ACTIONS(273),
    [anon_sym_orl] = ACTIONS(273),
    [anon_sym_orb] = ACTIONS(273),
    [anon_sym_orw] = ACTIONS(273),
    [anon_sym_xor] = ACTIONS(273),
    [anon_sym_xorl] = ACTIONS(273),
    [anon_sym_xorw] = ACTIONS(273),
    [anon_sym_xorps] = ACTIONS(273),
    [anon_sym_xorpd] = ACTIONS(273),
    [anon_sym_vxorps] = ACTIONS(273),
    [anon_sym_vpxord] = ACTIONS(273),
    [anon_sym_vpxor] = ACTIONS(273),
    [anon_sym_and] = ACTIONS(273),
    [anon_sym_andq] = ACTIONS(273),
    [anon_sym_andl] = ACTIONS(273),
    [anon_sym_andw] = ACTIONS(273),
    [anon_sym_andb] = ACTIONS(273),
    [anon_sym_andn] = ACTIONS(273),
    [anon_sym_andpd] = ACTIONS(273),
    [anon_sym_pand] = ACTIONS(273),
    [anon_sym_pandn] = ACTIONS(273),
    [anon_sym_andps] = ACTIONS(273),
    [anon_sym_vpand] = ACTIONS(273),
    [anon_sym_not] = ACTIONS(273),
    [anon_sym_notl] = ACTIONS(273),
    [anon_sym_notw] = ACTIONS(273),
    [anon_sym_cpuid] = ACTIONS(273),
    [anon_sym_lea] = ACTIONS(273),
    [anon_sym_popcnt] = ACTIONS(273),
    [anon_sym_nop] = ACTIONS(273),
    [anon_sym_nopl] = ACTIONS(273),
    [anon_sym_nopw] = ACTIONS(273),
    [anon_sym_ud2] = ACTIONS(273),
    [anon_sym_data16] = ACTIONS(273),
    [anon_sym_sha1rnds4] = ACTIONS(273),
    [anon_sym_addr32] = ACTIONS(273),
    [anon_sym_sha1msg1] = ACTIONS(273),
    [anon_sym_sha1msg2] = ACTIONS(273),
    [anon_sym_sha1nexte] = ACTIONS(273),
    [anon_sym_endbr64] = ACTIONS(273),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(273),
    [anon_sym_packuswb] = ACTIONS(273),
    [anon_sym_punpckhbw] = ACTIONS(273),
    [anon_sym_punpckhdq] = ACTIONS(273),
    [anon_sym_punpckhwd] = ACTIONS(273),
    [anon_sym_punpcklbw] = ACTIONS(273),
    [anon_sym_punpckldq] = ACTIONS(273),
    [anon_sym_punpcklwd] = ACTIONS(273),
    [anon_sym_vpunpcklwd] = ACTIONS(273),
    [anon_sym_vpunpckldq] = ACTIONS(273),
    [anon_sym_punpcklqdq] = ACTIONS(273),
    [anon_sym_punpckhqdq] = ACTIONS(273),
    [anon_sym_vpunpckhqdq] = ACTIONS(273),
    [anon_sym_vpunpckhdq] = ACTIONS(273),
    [anon_sym_vpunpcklqdq] = ACTIONS(273),
    [anon_sym_vpunpckhwd] = ACTIONS(273),
    [anon_sym_rol] = ACTIONS(273),
    [anon_sym_ror] = ACTIONS(273),
    [anon_sym_sar] = ACTIONS(273),
    [anon_sym_sarl] = ACTIONS(273),
    [anon_sym_sarx] = ACTIONS(273),
    [anon_sym_shl] = ACTIONS(273),
    [anon_sym_shll] = ACTIONS(273),
    [anon_sym_shld] = ACTIONS(273),
    [anon_sym_shlx] = ACTIONS(273),
    [anon_sym_shlq] = ACTIONS(273),
    [anon_sym_shr] = ACTIONS(273),
    [anon_sym_shrq] = ACTIONS(273),
    [anon_sym_shrd] = ACTIONS(273),
    [anon_sym_shrl] = ACTIONS(273),
    [anon_sym_shrx] = ACTIONS(273),
    [anon_sym_vprord] = ACTIONS(273),
    [anon_sym_vprorq] = ACTIONS(273),
    [anon_sym_rorl] = ACTIONS(273),
    [anon_sym_roll] = ACTIONS(273),
    [anon_sym_push] = ACTIONS(273),
    [anon_sym_pushq] = ACTIONS(273),
    [anon_sym_pop] = ACTIONS(273),
    [anon_sym_movslq] = ACTIONS(273),
    [anon_sym_movsb] = ACTIONS(273),
    [anon_sym_rep] = ACTIONS(273),
    [anon_sym_repz] = ACTIONS(273),
    [anon_sym_repnz] = ACTIONS(273),
    [anon_sym_rex] = ACTIONS(273),
    [anon_sym_rex_DOTWB] = ACTIONS(273),
    [anon_sym_rex_DOTWRB] = ACTIONS(273),
    [anon_sym_rex_DOTRXB] = ACTIONS(273),
    [anon_sym_rex_DOTB] = ACTIONS(273),
    [anon_sym_rex_DOTWRXB] = ACTIONS(273),
    [anon_sym_rex_DOTXB] = ACTIONS(273),
    [anon_sym_rex_DOTW] = ACTIONS(273),
    [anon_sym_rex_DOTRB] = ACTIONS(273),
    [anon_sym_xgetbv] = ACTIONS(273),
    [anon_sym_fs] = ACTIONS(273),
    [anon_sym_kmovw] = ACTIONS(273),
    [anon_sym_adcx] = ACTIONS(273),
    [anon_sym_adox] = ACTIONS(273),
    [anon_sym_aesdec] = ACTIONS(273),
    [anon_sym_aesdeclast] = ACTIONS(273),
    [anon_sym_aesenc] = ACTIONS(273),
    [anon_sym_aesenclast] = ACTIONS(273),
    [anon_sym_vaesenc] = ACTIONS(273),
    [anon_sym_vaesenclast] = ACTIONS(273),
    [anon_sym_aeskeygenassist] = ACTIONS(273),
    [anon_sym_vblendps] = ACTIONS(273),
    [anon_sym_vblendvps] = ACTIONS(273),
    [anon_sym_vcvtusi2sd] = ACTIONS(273),
    [anon_sym_vdivsd] = ACTIONS(273),
    [anon_sym_vmovaps] = ACTIONS(273),
    [anon_sym_vmovapd] = ACTIONS(273),
    [anon_sym_vmovss] = ACTIONS(273),
    [anon_sym_vmovdqu] = ACTIONS(273),
    [anon_sym_vmovdqu64] = ACTIONS(273),
    [anon_sym_vmovdqu32] = ACTIONS(273),
    [anon_sym_vmovdqa] = ACTIONS(273),
    [anon_sym_vmovdqa32] = ACTIONS(273),
    [anon_sym_vmovdqa64] = ACTIONS(273),
    [anon_sym_vmovq] = ACTIONS(273),
    [anon_sym_vmovups] = ACTIONS(273),
    [anon_sym_vmovd] = ACTIONS(273),
    [anon_sym_vmovsd] = ACTIONS(273),
    [anon_sym_vmulsd] = ACTIONS(273),
    [anon_sym_vpackusdw] = ACTIONS(273),
    [anon_sym_vpaddd] = ACTIONS(273),
    [anon_sym_vpaddb] = ACTIONS(273),
    [anon_sym_vpaddq] = ACTIONS(273),
    [anon_sym_vpaddw] = ACTIONS(273),
    [anon_sym_vpalignr] = ACTIONS(273),
    [anon_sym_vpcmpgtd] = ACTIONS(273),
    [anon_sym_vpextrw] = ACTIONS(273),
    [anon_sym_vpinsrw] = ACTIONS(273),
    [anon_sym_vpinsrd] = ACTIONS(273),
    [anon_sym_vpinsrq] = ACTIONS(273),
    [anon_sym_vpinsrb] = ACTIONS(273),
    [anon_sym_vpmaddubsw] = ACTIONS(273),
    [anon_sym_vpmaddwd] = ACTIONS(273),
    [anon_sym_vpmullw] = ACTIONS(273),
    [anon_sym_vpmuludq] = ACTIONS(273),
    [anon_sym_vpor] = ACTIONS(273),
    [anon_sym_vpshufb] = ACTIONS(273),
    [anon_sym_vpshufd] = ACTIONS(273),
    [anon_sym_vpslldq] = ACTIONS(273),
    [anon_sym_vpslld] = ACTIONS(273),
    [anon_sym_vpsllq] = ACTIONS(273),
    [anon_sym_vpsllw] = ACTIONS(273),
    [anon_sym_vpsrldq] = ACTIONS(273),
    [anon_sym_vpsrld] = ACTIONS(273),
    [anon_sym_vpsrlq] = ACTIONS(273),
    [anon_sym_vpsrlw] = ACTIONS(273),
    [anon_sym_vpsubusw] = ACTIONS(273),
    [anon_sym_vpsubq] = ACTIONS(273),
    [anon_sym_vpsubd] = ACTIONS(273),
    [anon_sym_vpsubw] = ACTIONS(273),
    [anon_sym_vshufps] = ACTIONS(273),
    [anon_sym_vsubsd] = ACTIONS(273),
    [anon_sym_vucomisd] = ACTIONS(273),
    [anon_sym_vucomiss] = ACTIONS(273),
    [anon_sym_vunpckhpd] = ACTIONS(273),
    [anon_sym_vunpckhps] = ACTIONS(273),
    [anon_sym_vunpcklpd] = ACTIONS(273),
    [anon_sym_vunpcklps] = ACTIONS(273),
    [anon_sym_vbroadcastss] = ACTIONS(273),
    [anon_sym_vinsertf128] = ACTIONS(273),
    [anon_sym_vperm2f128] = ACTIONS(273),
    [anon_sym_vzeroall] = ACTIONS(273),
    [anon_sym_vzeroupper] = ACTIONS(273),
    [anon_sym_vshufi32x4] = ACTIONS(273),
    [anon_sym_vshufi64x2] = ACTIONS(273),
    [anon_sym_vpblendmd] = ACTIONS(273),
    [anon_sym_vextracti128] = ACTIONS(273),
    [anon_sym_vextracti32x4] = ACTIONS(273),
    [anon_sym_vinserti128] = ACTIONS(273),
    [anon_sym_vinserti32x4] = ACTIONS(273),
    [anon_sym_vinserti64x4] = ACTIONS(273),
    [anon_sym_vpblendd] = ACTIONS(273),
    [anon_sym_vpbroadcastq] = ACTIONS(273),
    [anon_sym_vpbroadcastd] = ACTIONS(273),
    [anon_sym_vbroadcasti128] = ACTIONS(273),
    [anon_sym_vbroadcasti32x4] = ACTIONS(273),
    [anon_sym_vperm2i128] = ACTIONS(273),
    [anon_sym_vpermd] = ACTIONS(273),
    [anon_sym_vpermq] = ACTIONS(273),
    [anon_sym_vpermt2d] = ACTIONS(273),
    [anon_sym_vpermi2d] = ACTIONS(273),
    [anon_sym_tzcnt] = ACTIONS(273),
    [anon_sym_rorx] = ACTIONS(273),
    [anon_sym_psubd] = ACTIONS(273),
    [anon_sym_pmaddwd] = ACTIONS(273),
    [anon_sym_pxor] = ACTIONS(273),
    [anon_sym_psrad] = ACTIONS(273),
    [anon_sym_pslld] = ACTIONS(273),
    [anon_sym_pcmpgtd] = ACTIONS(273),
    [anon_sym_pcmpeqd] = ACTIONS(273),
    [anon_sym_por] = ACTIONS(273),
    [anon_sym_paddw] = ACTIONS(273),
    [anon_sym_psubusw] = ACTIONS(273),
    [anon_sym_pcmpeqb] = ACTIONS(273),
    [anon_sym_psubusb] = ACTIONS(273),
    [anon_sym_psrld] = ACTIONS(273),
    [anon_sym_psrlw] = ACTIONS(273),
    [anon_sym_psllq] = ACTIONS(273),
    [anon_sym_paddd] = ACTIONS(273),
    [anon_sym_psrlq] = ACTIONS(273),
    [anon_sym_psubb] = ACTIONS(273),
    [anon_sym_maxss] = ACTIONS(273),
    [anon_sym_pmovmskb] = ACTIONS(273),
    [anon_sym_pinsrw] = ACTIONS(273),
    [anon_sym_minss] = ACTIONS(273),
    [anon_sym_prefetcht1] = ACTIONS(273),
    [anon_sym_prefetcht0] = ACTIONS(273),
    [anon_sym_pextrw] = ACTIONS(273),
    [anon_sym_ucomiss] = ACTIONS(273),
    [anon_sym_shufps] = ACTIONS(273),
    [anon_sym_addsd] = ACTIONS(273),
    [anon_sym_paddq] = ACTIONS(273),
    [anon_sym_psubq] = ACTIONS(273),
    [anon_sym_pshuflw] = ACTIONS(273),
    [anon_sym_pmuludq] = ACTIONS(273),
    [anon_sym_pshufd] = ACTIONS(273),
    [anon_sym_minsd] = ACTIONS(273),
    [anon_sym_pshufhw] = ACTIONS(273),
    [anon_sym_mfence] = ACTIONS(273),
    [anon_sym_maxsd] = ACTIONS(273),
    [anon_sym_ucomisd] = ACTIONS(273),
    [anon_sym_shufpd] = ACTIONS(273),
    [anon_sym_pslldq] = ACTIONS(273),
    [anon_sym_unpckhpd] = ACTIONS(273),
    [anon_sym_psrldq] = ACTIONS(273),
    [anon_sym_palignr] = ACTIONS(273),
    [anon_sym_pshufb] = ACTIONS(273),
    [anon_sym_pmaddubsw] = ACTIONS(273),
    [anon_sym_pinsrb] = ACTIONS(273),
    [anon_sym_pblendw] = ACTIONS(273),
    [anon_sym_pextrq] = ACTIONS(273),
    [anon_sym_blendvps] = ACTIONS(273),
    [anon_sym_pextrb] = ACTIONS(273),
    [anon_sym_pinsrd] = ACTIONS(273),
    [anon_sym_femms] = ACTIONS(273),
    [anon_sym_callq] = ACTIONS(273),
    [anon_sym_ja] = ACTIONS(273),
    [anon_sym_jae] = ACTIONS(273),
    [anon_sym_jb] = ACTIONS(273),
    [anon_sym_jbe] = ACTIONS(273),
    [anon_sym_je] = ACTIONS(273),
    [anon_sym_jg] = ACTIONS(273),
    [anon_sym_jge] = ACTIONS(273),
    [anon_sym_jl] = ACTIONS(273),
    [anon_sym_jle] = ACTIONS(273),
    [anon_sym_jmp] = ACTIONS(273),
    [anon_sym_jmpq] = ACTIONS(273),
    [anon_sym_jne] = ACTIONS(273),
    [anon_sym_jno] = ACTIONS(273),
    [anon_sym_jns] = ACTIONS(273),
    [anon_sym_jo] = ACTIONS(273),
    [anon_sym_jp] = ACTIONS(273),
    [anon_sym_jrcxz] = ACTIONS(273),
    [anon_sym_js] = ACTIONS(273),
    [anon_sym_notrack] = ACTIONS(273),
  },
  [23] = {
    [sym_registerOperand] = STATE(194),
    [sym_segmentRegisterOperand] = STATE(183),
    [sym_generalRegisterOperand] = STATE(183),
    [sym_generalRegister64Bits] = STATE(182),
    [sym_generalRegister32Bits] = STATE(182),
    [sym_generalRegister16Bits] = STATE(182),
    [sym_generalRegister8Bits] = STATE(182),
    [sym_controlRegisterOperand] = STATE(183),
    [sym_instructionRegisterOperand] = STATE(183),
    [sym_floatRegisterOperand] = STATE(183),
    [sym_otherRegisterOperand] = STATE(183),
    [aux_sym_operand_repeat1] = STATE(25),
    [aux_sym_operand_token1] = ACTIONS(277),
    [anon_sym_PERCENTss] = ACTIONS(279),
    [anon_sym_PERCENTcs] = ACTIONS(279),
    [anon_sym_PERCENTds] = ACTIONS(279),
    [anon_sym_PERCENTes] = ACTIONS(281),
    [anon_sym_PERCENTfs] = ACTIONS(279),
    [anon_sym_PERCENTgs] = ACTIONS(279),
    [anon_sym_PERCENTrax] = ACTIONS(283),
    [anon_sym_PERCENTrbx] = ACTIONS(283),
    [anon_sym_PERCENTrcx] = ACTIONS(283),
    [anon_sym_PERCENTrdx] = ACTIONS(283),
    [anon_sym_PERCENTrsi] = ACTIONS(283),
    [anon_sym_PERCENTrdi] = ACTIONS(283),
    [anon_sym_PERCENTrbp] = ACTIONS(283),
    [anon_sym_PERCENTrsp] = ACTIONS(283),
    [anon_sym_PERCENTr8] = ACTIONS(285),
    [anon_sym_PERCENTr9] = ACTIONS(285),
    [anon_sym_PERCENTr10] = ACTIONS(285),
    [anon_sym_PERCENTr11] = ACTIONS(285),
    [anon_sym_PERCENTr12] = ACTIONS(285),
    [anon_sym_PERCENTr13] = ACTIONS(285),
    [anon_sym_PERCENTr14] = ACTIONS(285),
    [anon_sym_PERCENTr15] = ACTIONS(285),
    [anon_sym_PERCENTeax] = ACTIONS(287),
    [anon_sym_PERCENTecx] = ACTIONS(287),
    [anon_sym_PERCENTedx] = ACTIONS(287),
    [anon_sym_PERCENTebx] = ACTIONS(287),
    [anon_sym_PERCENTesi] = ACTIONS(287),
    [anon_sym_PERCENTedi] = ACTIONS(287),
    [anon_sym_PERCENTebp] = ACTIONS(287),
    [anon_sym_PERCENTesp] = ACTIONS(287),
    [anon_sym_PERCENTr8d] = ACTIONS(287),
    [anon_sym_PERCENTr9d] = ACTIONS(287),
    [anon_sym_PERCENTr10d] = ACTIONS(287),
    [anon_sym_PERCENTr11d] = ACTIONS(287),
    [anon_sym_PERCENTr12d] = ACTIONS(287),
    [anon_sym_PERCENTr13d] = ACTIONS(287),
    [anon_sym_PERCENTr14d] = ACTIONS(287),
    [anon_sym_PERCENTr15d] = ACTIONS(287),
    [anon_sym_PERCENTax] = ACTIONS(289),
    [anon_sym_PERCENTcx] = ACTIONS(289),
    [anon_sym_PERCENTdx] = ACTIONS(289),
    [anon_sym_PERCENTbx] = ACTIONS(289),
    [anon_sym_PERCENTsi] = ACTIONS(291),
    [anon_sym_PERCENTdi] = ACTIONS(291),
    [anon_sym_PERCENTsp] = ACTIONS(291),
    [anon_sym_PERCENTbp] = ACTIONS(291),
    [anon_sym_PERCENTr8w] = ACTIONS(289),
    [anon_sym_PERCENTr9w] = ACTIONS(289),
    [anon_sym_PERCENTr10w] = ACTIONS(289),
    [anon_sym_PERCENTr11w] = ACTIONS(289),
    [anon_sym_PERCENTr12w] = ACTIONS(289),
    [anon_sym_PERCENTr13w] = ACTIONS(289),
    [anon_sym_PERCENTr14w] = ACTIONS(289),
    [anon_sym_PERCENTr15w] = ACTIONS(289),
    [anon_sym_PERCENTal] = ACTIONS(293),
    [anon_sym_PERCENTcl] = ACTIONS(293),
    [anon_sym_PERCENTdl] = ACTIONS(293),
    [anon_sym_PERCENTbl] = ACTIONS(293),
    [anon_sym_PERCENTsil] = ACTIONS(293),
    [anon_sym_PERCENTdil] = ACTIONS(293),
    [anon_sym_PERCENTspl] = ACTIONS(293),
    [anon_sym_PERCENTbpl] = ACTIONS(293),
    [anon_sym_PERCENTr8b] = ACTIONS(293),
    [anon_sym_PERCENTr9b] = ACTIONS(293),
    [anon_sym_PERCENTr10b] = ACTIONS(293),
    [anon_sym_PERCENTr11b] = ACTIONS(293),
    [anon_sym_PERCENTr12b] = ACTIONS(293),
    [anon_sym_PERCENTr13b] = ACTIONS(293),
    [anon_sym_PERCENTr14b] = ACTIONS(293),
    [anon_sym_PERCENTr15b] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_PERCENTcr0] = ACTIONS(297),
    [anon_sym_PERCENTcr2] = ACTIONS(297),
    [anon_sym_PERCENTcr3] = ACTIONS(297),
    [anon_sym_PERCENTcr4] = ACTIONS(297),
    [anon_sym_PERCENTrip] = ACTIONS(299),
    [anon_sym_PERCENTeip] = ACTIONS(299),
    [anon_sym_PERCENTip] = ACTIONS(299),
    [anon_sym_PERCENTst] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(303),
  },
  [24] = {
    [sym_registerOperand] = STATE(82),
    [sym_segmentRegisterOperand] = STATE(74),
    [sym_generalRegisterOperand] = STATE(74),
    [sym_generalRegister64Bits] = STATE(73),
    [sym_generalRegister32Bits] = STATE(73),
    [sym_generalRegister16Bits] = STATE(73),
    [sym_generalRegister8Bits] = STATE(73),
    [sym_controlRegisterOperand] = STATE(74),
    [sym_instructionRegisterOperand] = STATE(74),
    [sym_floatRegisterOperand] = STATE(74),
    [sym_otherRegisterOperand] = STATE(74),
    [aux_sym_operand_repeat1] = STATE(26),
    [aux_sym_operand_token1] = ACTIONS(305),
    [anon_sym_PERCENTss] = ACTIONS(307),
    [anon_sym_PERCENTcs] = ACTIONS(307),
    [anon_sym_PERCENTds] = ACTIONS(307),
    [anon_sym_PERCENTes] = ACTIONS(47),
    [anon_sym_PERCENTfs] = ACTIONS(307),
    [anon_sym_PERCENTgs] = ACTIONS(307),
    [anon_sym_PERCENTrax] = ACTIONS(309),
    [anon_sym_PERCENTrbx] = ACTIONS(309),
    [anon_sym_PERCENTrcx] = ACTIONS(309),
    [anon_sym_PERCENTrdx] = ACTIONS(309),
    [anon_sym_PERCENTrsi] = ACTIONS(309),
    [anon_sym_PERCENTrdi] = ACTIONS(309),
    [anon_sym_PERCENTrbp] = ACTIONS(309),
    [anon_sym_PERCENTrsp] = ACTIONS(309),
    [anon_sym_PERCENTr8] = ACTIONS(49),
    [anon_sym_PERCENTr9] = ACTIONS(49),
    [anon_sym_PERCENTr10] = ACTIONS(49),
    [anon_sym_PERCENTr11] = ACTIONS(49),
    [anon_sym_PERCENTr12] = ACTIONS(49),
    [anon_sym_PERCENTr13] = ACTIONS(49),
    [anon_sym_PERCENTr14] = ACTIONS(49),
    [anon_sym_PERCENTr15] = ACTIONS(49),
    [anon_sym_PERCENTeax] = ACTIONS(311),
    [anon_sym_PERCENTecx] = ACTIONS(311),
    [anon_sym_PERCENTedx] = ACTIONS(311),
    [anon_sym_PERCENTebx] = ACTIONS(311),
    [anon_sym_PERCENTesi] = ACTIONS(311),
    [anon_sym_PERCENTedi] = ACTIONS(311),
    [anon_sym_PERCENTebp] = ACTIONS(311),
    [anon_sym_PERCENTesp] = ACTIONS(311),
    [anon_sym_PERCENTr8d] = ACTIONS(311),
    [anon_sym_PERCENTr9d] = ACTIONS(311),
    [anon_sym_PERCENTr10d] = ACTIONS(311),
    [anon_sym_PERCENTr11d] = ACTIONS(311),
    [anon_sym_PERCENTr12d] = ACTIONS(311),
    [anon_sym_PERCENTr13d] = ACTIONS(311),
    [anon_sym_PERCENTr14d] = ACTIONS(311),
    [anon_sym_PERCENTr15d] = ACTIONS(311),
    [anon_sym_PERCENTax] = ACTIONS(313),
    [anon_sym_PERCENTcx] = ACTIONS(313),
    [anon_sym_PERCENTdx] = ACTIONS(313),
    [anon_sym_PERCENTbx] = ACTIONS(313),
    [anon_sym_PERCENTsi] = ACTIONS(53),
    [anon_sym_PERCENTdi] = ACTIONS(53),
    [anon_sym_PERCENTsp] = ACTIONS(53),
    [anon_sym_PERCENTbp] = ACTIONS(53),
    [anon_sym_PERCENTr8w] = ACTIONS(313),
    [anon_sym_PERCENTr9w] = ACTIONS(313),
    [anon_sym_PERCENTr10w] = ACTIONS(313),
    [anon_sym_PERCENTr11w] = ACTIONS(313),
    [anon_sym_PERCENTr12w] = ACTIONS(313),
    [anon_sym_PERCENTr13w] = ACTIONS(313),
    [anon_sym_PERCENTr14w] = ACTIONS(313),
    [anon_sym_PERCENTr15w] = ACTIONS(313),
    [anon_sym_PERCENTal] = ACTIONS(315),
    [anon_sym_PERCENTcl] = ACTIONS(315),
    [anon_sym_PERCENTdl] = ACTIONS(315),
    [anon_sym_PERCENTbl] = ACTIONS(315),
    [anon_sym_PERCENTsil] = ACTIONS(315),
    [anon_sym_PERCENTdil] = ACTIONS(315),
    [anon_sym_PERCENTspl] = ACTIONS(315),
    [anon_sym_PERCENTbpl] = ACTIONS(315),
    [anon_sym_PERCENTr8b] = ACTIONS(315),
    [anon_sym_PERCENTr9b] = ACTIONS(315),
    [anon_sym_PERCENTr10b] = ACTIONS(315),
    [anon_sym_PERCENTr11b] = ACTIONS(315),
    [anon_sym_PERCENTr12b] = ACTIONS(315),
    [anon_sym_PERCENTr13b] = ACTIONS(315),
    [anon_sym_PERCENTr14b] = ACTIONS(315),
    [anon_sym_PERCENTr15b] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_PERCENTcr0] = ACTIONS(319),
    [anon_sym_PERCENTcr2] = ACTIONS(319),
    [anon_sym_PERCENTcr3] = ACTIONS(319),
    [anon_sym_PERCENTcr4] = ACTIONS(319),
    [anon_sym_PERCENTrip] = ACTIONS(321),
    [anon_sym_PERCENTeip] = ACTIONS(321),
    [anon_sym_PERCENTip] = ACTIONS(321),
    [anon_sym_PERCENTst] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(71),
  },
  [25] = {
    [sym_registerOperand] = STATE(196),
    [sym_segmentRegisterOperand] = STATE(183),
    [sym_generalRegisterOperand] = STATE(183),
    [sym_generalRegister64Bits] = STATE(182),
    [sym_generalRegister32Bits] = STATE(182),
    [sym_generalRegister16Bits] = STATE(182),
    [sym_generalRegister8Bits] = STATE(182),
    [sym_controlRegisterOperand] = STATE(183),
    [sym_instructionRegisterOperand] = STATE(183),
    [sym_floatRegisterOperand] = STATE(183),
    [sym_otherRegisterOperand] = STATE(183),
    [aux_sym_operand_repeat1] = STATE(55),
    [aux_sym_operand_token1] = ACTIONS(325),
    [anon_sym_PERCENTss] = ACTIONS(279),
    [anon_sym_PERCENTcs] = ACTIONS(279),
    [anon_sym_PERCENTds] = ACTIONS(279),
    [anon_sym_PERCENTes] = ACTIONS(281),
    [anon_sym_PERCENTfs] = ACTIONS(279),
    [anon_sym_PERCENTgs] = ACTIONS(279),
    [anon_sym_PERCENTrax] = ACTIONS(283),
    [anon_sym_PERCENTrbx] = ACTIONS(283),
    [anon_sym_PERCENTrcx] = ACTIONS(283),
    [anon_sym_PERCENTrdx] = ACTIONS(283),
    [anon_sym_PERCENTrsi] = ACTIONS(283),
    [anon_sym_PERCENTrdi] = ACTIONS(283),
    [anon_sym_PERCENTrbp] = ACTIONS(283),
    [anon_sym_PERCENTrsp] = ACTIONS(283),
    [anon_sym_PERCENTr8] = ACTIONS(285),
    [anon_sym_PERCENTr9] = ACTIONS(285),
    [anon_sym_PERCENTr10] = ACTIONS(285),
    [anon_sym_PERCENTr11] = ACTIONS(285),
    [anon_sym_PERCENTr12] = ACTIONS(285),
    [anon_sym_PERCENTr13] = ACTIONS(285),
    [anon_sym_PERCENTr14] = ACTIONS(285),
    [anon_sym_PERCENTr15] = ACTIONS(285),
    [anon_sym_PERCENTeax] = ACTIONS(287),
    [anon_sym_PERCENTecx] = ACTIONS(287),
    [anon_sym_PERCENTedx] = ACTIONS(287),
    [anon_sym_PERCENTebx] = ACTIONS(287),
    [anon_sym_PERCENTesi] = ACTIONS(287),
    [anon_sym_PERCENTedi] = ACTIONS(287),
    [anon_sym_PERCENTebp] = ACTIONS(287),
    [anon_sym_PERCENTesp] = ACTIONS(287),
    [anon_sym_PERCENTr8d] = ACTIONS(287),
    [anon_sym_PERCENTr9d] = ACTIONS(287),
    [anon_sym_PERCENTr10d] = ACTIONS(287),
    [anon_sym_PERCENTr11d] = ACTIONS(287),
    [anon_sym_PERCENTr12d] = ACTIONS(287),
    [anon_sym_PERCENTr13d] = ACTIONS(287),
    [anon_sym_PERCENTr14d] = ACTIONS(287),
    [anon_sym_PERCENTr15d] = ACTIONS(287),
    [anon_sym_PERCENTax] = ACTIONS(289),
    [anon_sym_PERCENTcx] = ACTIONS(289),
    [anon_sym_PERCENTdx] = ACTIONS(289),
    [anon_sym_PERCENTbx] = ACTIONS(289),
    [anon_sym_PERCENTsi] = ACTIONS(291),
    [anon_sym_PERCENTdi] = ACTIONS(291),
    [anon_sym_PERCENTsp] = ACTIONS(291),
    [anon_sym_PERCENTbp] = ACTIONS(291),
    [anon_sym_PERCENTr8w] = ACTIONS(289),
    [anon_sym_PERCENTr9w] = ACTIONS(289),
    [anon_sym_PERCENTr10w] = ACTIONS(289),
    [anon_sym_PERCENTr11w] = ACTIONS(289),
    [anon_sym_PERCENTr12w] = ACTIONS(289),
    [anon_sym_PERCENTr13w] = ACTIONS(289),
    [anon_sym_PERCENTr14w] = ACTIONS(289),
    [anon_sym_PERCENTr15w] = ACTIONS(289),
    [anon_sym_PERCENTal] = ACTIONS(293),
    [anon_sym_PERCENTcl] = ACTIONS(293),
    [anon_sym_PERCENTdl] = ACTIONS(293),
    [anon_sym_PERCENTbl] = ACTIONS(293),
    [anon_sym_PERCENTsil] = ACTIONS(293),
    [anon_sym_PERCENTdil] = ACTIONS(293),
    [anon_sym_PERCENTspl] = ACTIONS(293),
    [anon_sym_PERCENTbpl] = ACTIONS(293),
    [anon_sym_PERCENTr8b] = ACTIONS(293),
    [anon_sym_PERCENTr9b] = ACTIONS(293),
    [anon_sym_PERCENTr10b] = ACTIONS(293),
    [anon_sym_PERCENTr11b] = ACTIONS(293),
    [anon_sym_PERCENTr12b] = ACTIONS(293),
    [anon_sym_PERCENTr13b] = ACTIONS(293),
    [anon_sym_PERCENTr14b] = ACTIONS(293),
    [anon_sym_PERCENTr15b] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_PERCENTcr0] = ACTIONS(297),
    [anon_sym_PERCENTcr2] = ACTIONS(297),
    [anon_sym_PERCENTcr3] = ACTIONS(297),
    [anon_sym_PERCENTcr4] = ACTIONS(297),
    [anon_sym_PERCENTrip] = ACTIONS(299),
    [anon_sym_PERCENTeip] = ACTIONS(299),
    [anon_sym_PERCENTip] = ACTIONS(299),
    [anon_sym_PERCENTst] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(303),
  },
  [26] = {
    [sym_registerOperand] = STATE(81),
    [sym_segmentRegisterOperand] = STATE(74),
    [sym_generalRegisterOperand] = STATE(74),
    [sym_generalRegister64Bits] = STATE(73),
    [sym_generalRegister32Bits] = STATE(73),
    [sym_generalRegister16Bits] = STATE(73),
    [sym_generalRegister8Bits] = STATE(73),
    [sym_controlRegisterOperand] = STATE(74),
    [sym_instructionRegisterOperand] = STATE(74),
    [sym_floatRegisterOperand] = STATE(74),
    [sym_otherRegisterOperand] = STATE(74),
    [aux_sym_operand_repeat1] = STATE(55),
    [aux_sym_operand_token1] = ACTIONS(325),
    [anon_sym_PERCENTss] = ACTIONS(307),
    [anon_sym_PERCENTcs] = ACTIONS(307),
    [anon_sym_PERCENTds] = ACTIONS(307),
    [anon_sym_PERCENTes] = ACTIONS(47),
    [anon_sym_PERCENTfs] = ACTIONS(307),
    [anon_sym_PERCENTgs] = ACTIONS(307),
    [anon_sym_PERCENTrax] = ACTIONS(309),
    [anon_sym_PERCENTrbx] = ACTIONS(309),
    [anon_sym_PERCENTrcx] = ACTIONS(309),
    [anon_sym_PERCENTrdx] = ACTIONS(309),
    [anon_sym_PERCENTrsi] = ACTIONS(309),
    [anon_sym_PERCENTrdi] = ACTIONS(309),
    [anon_sym_PERCENTrbp] = ACTIONS(309),
    [anon_sym_PERCENTrsp] = ACTIONS(309),
    [anon_sym_PERCENTr8] = ACTIONS(49),
    [anon_sym_PERCENTr9] = ACTIONS(49),
    [anon_sym_PERCENTr10] = ACTIONS(49),
    [anon_sym_PERCENTr11] = ACTIONS(49),
    [anon_sym_PERCENTr12] = ACTIONS(49),
    [anon_sym_PERCENTr13] = ACTIONS(49),
    [anon_sym_PERCENTr14] = ACTIONS(49),
    [anon_sym_PERCENTr15] = ACTIONS(49),
    [anon_sym_PERCENTeax] = ACTIONS(311),
    [anon_sym_PERCENTecx] = ACTIONS(311),
    [anon_sym_PERCENTedx] = ACTIONS(311),
    [anon_sym_PERCENTebx] = ACTIONS(311),
    [anon_sym_PERCENTesi] = ACTIONS(311),
    [anon_sym_PERCENTedi] = ACTIONS(311),
    [anon_sym_PERCENTebp] = ACTIONS(311),
    [anon_sym_PERCENTesp] = ACTIONS(311),
    [anon_sym_PERCENTr8d] = ACTIONS(311),
    [anon_sym_PERCENTr9d] = ACTIONS(311),
    [anon_sym_PERCENTr10d] = ACTIONS(311),
    [anon_sym_PERCENTr11d] = ACTIONS(311),
    [anon_sym_PERCENTr12d] = ACTIONS(311),
    [anon_sym_PERCENTr13d] = ACTIONS(311),
    [anon_sym_PERCENTr14d] = ACTIONS(311),
    [anon_sym_PERCENTr15d] = ACTIONS(311),
    [anon_sym_PERCENTax] = ACTIONS(313),
    [anon_sym_PERCENTcx] = ACTIONS(313),
    [anon_sym_PERCENTdx] = ACTIONS(313),
    [anon_sym_PERCENTbx] = ACTIONS(313),
    [anon_sym_PERCENTsi] = ACTIONS(53),
    [anon_sym_PERCENTdi] = ACTIONS(53),
    [anon_sym_PERCENTsp] = ACTIONS(53),
    [anon_sym_PERCENTbp] = ACTIONS(53),
    [anon_sym_PERCENTr8w] = ACTIONS(313),
    [anon_sym_PERCENTr9w] = ACTIONS(313),
    [anon_sym_PERCENTr10w] = ACTIONS(313),
    [anon_sym_PERCENTr11w] = ACTIONS(313),
    [anon_sym_PERCENTr12w] = ACTIONS(313),
    [anon_sym_PERCENTr13w] = ACTIONS(313),
    [anon_sym_PERCENTr14w] = ACTIONS(313),
    [anon_sym_PERCENTr15w] = ACTIONS(313),
    [anon_sym_PERCENTal] = ACTIONS(315),
    [anon_sym_PERCENTcl] = ACTIONS(315),
    [anon_sym_PERCENTdl] = ACTIONS(315),
    [anon_sym_PERCENTbl] = ACTIONS(315),
    [anon_sym_PERCENTsil] = ACTIONS(315),
    [anon_sym_PERCENTdil] = ACTIONS(315),
    [anon_sym_PERCENTspl] = ACTIONS(315),
    [anon_sym_PERCENTbpl] = ACTIONS(315),
    [anon_sym_PERCENTr8b] = ACTIONS(315),
    [anon_sym_PERCENTr9b] = ACTIONS(315),
    [anon_sym_PERCENTr10b] = ACTIONS(315),
    [anon_sym_PERCENTr11b] = ACTIONS(315),
    [anon_sym_PERCENTr12b] = ACTIONS(315),
    [anon_sym_PERCENTr13b] = ACTIONS(315),
    [anon_sym_PERCENTr14b] = ACTIONS(315),
    [anon_sym_PERCENTr15b] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_PERCENTcr0] = ACTIONS(319),
    [anon_sym_PERCENTcr2] = ACTIONS(319),
    [anon_sym_PERCENTcr3] = ACTIONS(319),
    [anon_sym_PERCENTcr4] = ACTIONS(319),
    [anon_sym_PERCENTrip] = ACTIONS(321),
    [anon_sym_PERCENTeip] = ACTIONS(321),
    [anon_sym_PERCENTip] = ACTIONS(321),
    [anon_sym_PERCENTst] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(71),
  },
  [27] = {
    [sym_registerOperand] = STATE(215),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(326),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [28] = {
    [sym_registerOperand] = STATE(216),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(311),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [29] = {
    [sym_registerOperand] = STATE(277),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(332),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(359),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [30] = {
    [sym_registerOperand] = STATE(268),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(299),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [31] = {
    [sym_registerOperand] = STATE(276),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(331),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(363),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [32] = {
    [sym_registerOperand] = STATE(274),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(331),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(363),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [33] = {
    [sym_registerOperand] = STATE(273),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(330),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [34] = {
    [sym_registerOperand] = STATE(272),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(329),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(367),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [35] = {
    [sym_registerOperand] = STATE(260),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(303),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [36] = {
    [sym_registerOperand] = STATE(279),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(293),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(371),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [37] = {
    [sym_registerOperand] = STATE(212),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(326),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [38] = {
    [sym_registerOperand] = STATE(278),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_base] = STATE(333),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [39] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(306),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [40] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(291),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [41] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(320),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [42] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(321),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [43] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(322),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [44] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(298),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [45] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(324),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [46] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(314),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [47] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(302),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [48] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(317),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [49] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(319),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [50] = {
    [sym_registerOperand] = STATE(301),
    [sym_segmentRegisterOperand] = STATE(208),
    [sym_generalRegisterOperand] = STATE(208),
    [sym_generalRegister64Bits] = STATE(209),
    [sym_generalRegister32Bits] = STATE(209),
    [sym_generalRegister16Bits] = STATE(209),
    [sym_generalRegister8Bits] = STATE(209),
    [sym_index] = STATE(308),
    [sym_controlRegisterOperand] = STATE(208),
    [sym_instructionRegisterOperand] = STATE(208),
    [sym_floatRegisterOperand] = STATE(208),
    [sym_otherRegisterOperand] = STATE(208),
    [anon_sym_PERCENTss] = ACTIONS(333),
    [anon_sym_PERCENTcs] = ACTIONS(333),
    [anon_sym_PERCENTds] = ACTIONS(333),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(333),
    [anon_sym_PERCENTgs] = ACTIONS(333),
    [anon_sym_PERCENTrax] = ACTIONS(337),
    [anon_sym_PERCENTrbx] = ACTIONS(337),
    [anon_sym_PERCENTrcx] = ACTIONS(337),
    [anon_sym_PERCENTrdx] = ACTIONS(337),
    [anon_sym_PERCENTrsi] = ACTIONS(337),
    [anon_sym_PERCENTrdi] = ACTIONS(337),
    [anon_sym_PERCENTrbp] = ACTIONS(337),
    [anon_sym_PERCENTrsp] = ACTIONS(337),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(341),
    [anon_sym_PERCENTecx] = ACTIONS(341),
    [anon_sym_PERCENTedx] = ACTIONS(341),
    [anon_sym_PERCENTebx] = ACTIONS(341),
    [anon_sym_PERCENTesi] = ACTIONS(341),
    [anon_sym_PERCENTedi] = ACTIONS(341),
    [anon_sym_PERCENTebp] = ACTIONS(341),
    [anon_sym_PERCENTesp] = ACTIONS(341),
    [anon_sym_PERCENTr8d] = ACTIONS(341),
    [anon_sym_PERCENTr9d] = ACTIONS(341),
    [anon_sym_PERCENTr10d] = ACTIONS(341),
    [anon_sym_PERCENTr11d] = ACTIONS(341),
    [anon_sym_PERCENTr12d] = ACTIONS(341),
    [anon_sym_PERCENTr13d] = ACTIONS(341),
    [anon_sym_PERCENTr14d] = ACTIONS(341),
    [anon_sym_PERCENTr15d] = ACTIONS(341),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(347),
    [anon_sym_PERCENTcl] = ACTIONS(347),
    [anon_sym_PERCENTdl] = ACTIONS(347),
    [anon_sym_PERCENTbl] = ACTIONS(347),
    [anon_sym_PERCENTsil] = ACTIONS(347),
    [anon_sym_PERCENTdil] = ACTIONS(347),
    [anon_sym_PERCENTspl] = ACTIONS(347),
    [anon_sym_PERCENTbpl] = ACTIONS(347),
    [anon_sym_PERCENTr8b] = ACTIONS(347),
    [anon_sym_PERCENTr9b] = ACTIONS(347),
    [anon_sym_PERCENTr10b] = ACTIONS(347),
    [anon_sym_PERCENTr11b] = ACTIONS(347),
    [anon_sym_PERCENTr12b] = ACTIONS(347),
    [anon_sym_PERCENTr13b] = ACTIONS(347),
    [anon_sym_PERCENTr14b] = ACTIONS(347),
    [anon_sym_PERCENTr15b] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(349),
    [anon_sym_PERCENTcr2] = ACTIONS(349),
    [anon_sym_PERCENTcr3] = ACTIONS(349),
    [anon_sym_PERCENTcr4] = ACTIONS(349),
    [anon_sym_PERCENTrip] = ACTIONS(351),
    [anon_sym_PERCENTeip] = ACTIONS(351),
    [anon_sym_PERCENTip] = ACTIONS(351),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
  },
  [51] = {
    [sym_registerOperand] = STATE(81),
    [sym_segmentRegisterOperand] = STATE(74),
    [sym_generalRegisterOperand] = STATE(74),
    [sym_generalRegister64Bits] = STATE(73),
    [sym_generalRegister32Bits] = STATE(73),
    [sym_generalRegister16Bits] = STATE(73),
    [sym_generalRegister8Bits] = STATE(73),
    [sym_controlRegisterOperand] = STATE(74),
    [sym_instructionRegisterOperand] = STATE(74),
    [sym_floatRegisterOperand] = STATE(74),
    [sym_otherRegisterOperand] = STATE(74),
    [anon_sym_PERCENTss] = ACTIONS(307),
    [anon_sym_PERCENTcs] = ACTIONS(307),
    [anon_sym_PERCENTds] = ACTIONS(307),
    [anon_sym_PERCENTes] = ACTIONS(47),
    [anon_sym_PERCENTfs] = ACTIONS(307),
    [anon_sym_PERCENTgs] = ACTIONS(307),
    [anon_sym_PERCENTrax] = ACTIONS(309),
    [anon_sym_PERCENTrbx] = ACTIONS(309),
    [anon_sym_PERCENTrcx] = ACTIONS(309),
    [anon_sym_PERCENTrdx] = ACTIONS(309),
    [anon_sym_PERCENTrsi] = ACTIONS(309),
    [anon_sym_PERCENTrdi] = ACTIONS(309),
    [anon_sym_PERCENTrbp] = ACTIONS(309),
    [anon_sym_PERCENTrsp] = ACTIONS(309),
    [anon_sym_PERCENTr8] = ACTIONS(49),
    [anon_sym_PERCENTr9] = ACTIONS(49),
    [anon_sym_PERCENTr10] = ACTIONS(49),
    [anon_sym_PERCENTr11] = ACTIONS(49),
    [anon_sym_PERCENTr12] = ACTIONS(49),
    [anon_sym_PERCENTr13] = ACTIONS(49),
    [anon_sym_PERCENTr14] = ACTIONS(49),
    [anon_sym_PERCENTr15] = ACTIONS(49),
    [anon_sym_PERCENTeax] = ACTIONS(311),
    [anon_sym_PERCENTecx] = ACTIONS(311),
    [anon_sym_PERCENTedx] = ACTIONS(311),
    [anon_sym_PERCENTebx] = ACTIONS(311),
    [anon_sym_PERCENTesi] = ACTIONS(311),
    [anon_sym_PERCENTedi] = ACTIONS(311),
    [anon_sym_PERCENTebp] = ACTIONS(311),
    [anon_sym_PERCENTesp] = ACTIONS(311),
    [anon_sym_PERCENTr8d] = ACTIONS(311),
    [anon_sym_PERCENTr9d] = ACTIONS(311),
    [anon_sym_PERCENTr10d] = ACTIONS(311),
    [anon_sym_PERCENTr11d] = ACTIONS(311),
    [anon_sym_PERCENTr12d] = ACTIONS(311),
    [anon_sym_PERCENTr13d] = ACTIONS(311),
    [anon_sym_PERCENTr14d] = ACTIONS(311),
    [anon_sym_PERCENTr15d] = ACTIONS(311),
    [anon_sym_PERCENTax] = ACTIONS(313),
    [anon_sym_PERCENTcx] = ACTIONS(313),
    [anon_sym_PERCENTdx] = ACTIONS(313),
    [anon_sym_PERCENTbx] = ACTIONS(313),
    [anon_sym_PERCENTsi] = ACTIONS(53),
    [anon_sym_PERCENTdi] = ACTIONS(53),
    [anon_sym_PERCENTsp] = ACTIONS(53),
    [anon_sym_PERCENTbp] = ACTIONS(53),
    [anon_sym_PERCENTr8w] = ACTIONS(313),
    [anon_sym_PERCENTr9w] = ACTIONS(313),
    [anon_sym_PERCENTr10w] = ACTIONS(313),
    [anon_sym_PERCENTr11w] = ACTIONS(313),
    [anon_sym_PERCENTr12w] = ACTIONS(313),
    [anon_sym_PERCENTr13w] = ACTIONS(313),
    [anon_sym_PERCENTr14w] = ACTIONS(313),
    [anon_sym_PERCENTr15w] = ACTIONS(313),
    [anon_sym_PERCENTal] = ACTIONS(315),
    [anon_sym_PERCENTcl] = ACTIONS(315),
    [anon_sym_PERCENTdl] = ACTIONS(315),
    [anon_sym_PERCENTbl] = ACTIONS(315),
    [anon_sym_PERCENTsil] = ACTIONS(315),
    [anon_sym_PERCENTdil] = ACTIONS(315),
    [anon_sym_PERCENTspl] = ACTIONS(315),
    [anon_sym_PERCENTbpl] = ACTIONS(315),
    [anon_sym_PERCENTr8b] = ACTIONS(315),
    [anon_sym_PERCENTr9b] = ACTIONS(315),
    [anon_sym_PERCENTr10b] = ACTIONS(315),
    [anon_sym_PERCENTr11b] = ACTIONS(315),
    [anon_sym_PERCENTr12b] = ACTIONS(315),
    [anon_sym_PERCENTr13b] = ACTIONS(315),
    [anon_sym_PERCENTr14b] = ACTIONS(315),
    [anon_sym_PERCENTr15b] = ACTIONS(315),
    [anon_sym_PERCENTcr0] = ACTIONS(319),
    [anon_sym_PERCENTcr2] = ACTIONS(319),
    [anon_sym_PERCENTcr3] = ACTIONS(319),
    [anon_sym_PERCENTcr4] = ACTIONS(319),
    [anon_sym_PERCENTrip] = ACTIONS(321),
    [anon_sym_PERCENTeip] = ACTIONS(321),
    [anon_sym_PERCENTip] = ACTIONS(321),
    [anon_sym_PERCENTst] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(71),
  },
  [52] = {
    [sym_registerOperand] = STATE(190),
    [sym_segmentRegisterOperand] = STATE(183),
    [sym_generalRegisterOperand] = STATE(183),
    [sym_generalRegister64Bits] = STATE(182),
    [sym_generalRegister32Bits] = STATE(182),
    [sym_generalRegister16Bits] = STATE(182),
    [sym_generalRegister8Bits] = STATE(182),
    [sym_controlRegisterOperand] = STATE(183),
    [sym_instructionRegisterOperand] = STATE(183),
    [sym_floatRegisterOperand] = STATE(183),
    [sym_otherRegisterOperand] = STATE(183),
    [anon_sym_PERCENTss] = ACTIONS(279),
    [anon_sym_PERCENTcs] = ACTIONS(279),
    [anon_sym_PERCENTds] = ACTIONS(279),
    [anon_sym_PERCENTes] = ACTIONS(281),
    [anon_sym_PERCENTfs] = ACTIONS(279),
    [anon_sym_PERCENTgs] = ACTIONS(279),
    [anon_sym_PERCENTrax] = ACTIONS(283),
    [anon_sym_PERCENTrbx] = ACTIONS(283),
    [anon_sym_PERCENTrcx] = ACTIONS(283),
    [anon_sym_PERCENTrdx] = ACTIONS(283),
    [anon_sym_PERCENTrsi] = ACTIONS(283),
    [anon_sym_PERCENTrdi] = ACTIONS(283),
    [anon_sym_PERCENTrbp] = ACTIONS(283),
    [anon_sym_PERCENTrsp] = ACTIONS(283),
    [anon_sym_PERCENTr8] = ACTIONS(285),
    [anon_sym_PERCENTr9] = ACTIONS(285),
    [anon_sym_PERCENTr10] = ACTIONS(285),
    [anon_sym_PERCENTr11] = ACTIONS(285),
    [anon_sym_PERCENTr12] = ACTIONS(285),
    [anon_sym_PERCENTr13] = ACTIONS(285),
    [anon_sym_PERCENTr14] = ACTIONS(285),
    [anon_sym_PERCENTr15] = ACTIONS(285),
    [anon_sym_PERCENTeax] = ACTIONS(287),
    [anon_sym_PERCENTecx] = ACTIONS(287),
    [anon_sym_PERCENTedx] = ACTIONS(287),
    [anon_sym_PERCENTebx] = ACTIONS(287),
    [anon_sym_PERCENTesi] = ACTIONS(287),
    [anon_sym_PERCENTedi] = ACTIONS(287),
    [anon_sym_PERCENTebp] = ACTIONS(287),
    [anon_sym_PERCENTesp] = ACTIONS(287),
    [anon_sym_PERCENTr8d] = ACTIONS(287),
    [anon_sym_PERCENTr9d] = ACTIONS(287),
    [anon_sym_PERCENTr10d] = ACTIONS(287),
    [anon_sym_PERCENTr11d] = ACTIONS(287),
    [anon_sym_PERCENTr12d] = ACTIONS(287),
    [anon_sym_PERCENTr13d] = ACTIONS(287),
    [anon_sym_PERCENTr14d] = ACTIONS(287),
    [anon_sym_PERCENTr15d] = ACTIONS(287),
    [anon_sym_PERCENTax] = ACTIONS(289),
    [anon_sym_PERCENTcx] = ACTIONS(289),
    [anon_sym_PERCENTdx] = ACTIONS(289),
    [anon_sym_PERCENTbx] = ACTIONS(289),
    [anon_sym_PERCENTsi] = ACTIONS(291),
    [anon_sym_PERCENTdi] = ACTIONS(291),
    [anon_sym_PERCENTsp] = ACTIONS(291),
    [anon_sym_PERCENTbp] = ACTIONS(291),
    [anon_sym_PERCENTr8w] = ACTIONS(289),
    [anon_sym_PERCENTr9w] = ACTIONS(289),
    [anon_sym_PERCENTr10w] = ACTIONS(289),
    [anon_sym_PERCENTr11w] = ACTIONS(289),
    [anon_sym_PERCENTr12w] = ACTIONS(289),
    [anon_sym_PERCENTr13w] = ACTIONS(289),
    [anon_sym_PERCENTr14w] = ACTIONS(289),
    [anon_sym_PERCENTr15w] = ACTIONS(289),
    [anon_sym_PERCENTal] = ACTIONS(293),
    [anon_sym_PERCENTcl] = ACTIONS(293),
    [anon_sym_PERCENTdl] = ACTIONS(293),
    [anon_sym_PERCENTbl] = ACTIONS(293),
    [anon_sym_PERCENTsil] = ACTIONS(293),
    [anon_sym_PERCENTdil] = ACTIONS(293),
    [anon_sym_PERCENTspl] = ACTIONS(293),
    [anon_sym_PERCENTbpl] = ACTIONS(293),
    [anon_sym_PERCENTr8b] = ACTIONS(293),
    [anon_sym_PERCENTr9b] = ACTIONS(293),
    [anon_sym_PERCENTr10b] = ACTIONS(293),
    [anon_sym_PERCENTr11b] = ACTIONS(293),
    [anon_sym_PERCENTr12b] = ACTIONS(293),
    [anon_sym_PERCENTr13b] = ACTIONS(293),
    [anon_sym_PERCENTr14b] = ACTIONS(293),
    [anon_sym_PERCENTr15b] = ACTIONS(293),
    [anon_sym_PERCENTcr0] = ACTIONS(297),
    [anon_sym_PERCENTcr2] = ACTIONS(297),
    [anon_sym_PERCENTcr3] = ACTIONS(297),
    [anon_sym_PERCENTcr4] = ACTIONS(297),
    [anon_sym_PERCENTrip] = ACTIONS(299),
    [anon_sym_PERCENTeip] = ACTIONS(299),
    [anon_sym_PERCENTip] = ACTIONS(299),
    [anon_sym_PERCENTst] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(303),
  },
  [53] = {
    [sym_registerOperand] = STATE(196),
    [sym_segmentRegisterOperand] = STATE(183),
    [sym_generalRegisterOperand] = STATE(183),
    [sym_generalRegister64Bits] = STATE(182),
    [sym_generalRegister32Bits] = STATE(182),
    [sym_generalRegister16Bits] = STATE(182),
    [sym_generalRegister8Bits] = STATE(182),
    [sym_controlRegisterOperand] = STATE(183),
    [sym_instructionRegisterOperand] = STATE(183),
    [sym_floatRegisterOperand] = STATE(183),
    [sym_otherRegisterOperand] = STATE(183),
    [anon_sym_PERCENTss] = ACTIONS(279),
    [anon_sym_PERCENTcs] = ACTIONS(279),
    [anon_sym_PERCENTds] = ACTIONS(279),
    [anon_sym_PERCENTes] = ACTIONS(281),
    [anon_sym_PERCENTfs] = ACTIONS(279),
    [anon_sym_PERCENTgs] = ACTIONS(279),
    [anon_sym_PERCENTrax] = ACTIONS(283),
    [anon_sym_PERCENTrbx] = ACTIONS(283),
    [anon_sym_PERCENTrcx] = ACTIONS(283),
    [anon_sym_PERCENTrdx] = ACTIONS(283),
    [anon_sym_PERCENTrsi] = ACTIONS(283),
    [anon_sym_PERCENTrdi] = ACTIONS(283),
    [anon_sym_PERCENTrbp] = ACTIONS(283),
    [anon_sym_PERCENTrsp] = ACTIONS(283),
    [anon_sym_PERCENTr8] = ACTIONS(285),
    [anon_sym_PERCENTr9] = ACTIONS(285),
    [anon_sym_PERCENTr10] = ACTIONS(285),
    [anon_sym_PERCENTr11] = ACTIONS(285),
    [anon_sym_PERCENTr12] = ACTIONS(285),
    [anon_sym_PERCENTr13] = ACTIONS(285),
    [anon_sym_PERCENTr14] = ACTIONS(285),
    [anon_sym_PERCENTr15] = ACTIONS(285),
    [anon_sym_PERCENTeax] = ACTIONS(287),
    [anon_sym_PERCENTecx] = ACTIONS(287),
    [anon_sym_PERCENTedx] = ACTIONS(287),
    [anon_sym_PERCENTebx] = ACTIONS(287),
    [anon_sym_PERCENTesi] = ACTIONS(287),
    [anon_sym_PERCENTedi] = ACTIONS(287),
    [anon_sym_PERCENTebp] = ACTIONS(287),
    [anon_sym_PERCENTesp] = ACTIONS(287),
    [anon_sym_PERCENTr8d] = ACTIONS(287),
    [anon_sym_PERCENTr9d] = ACTIONS(287),
    [anon_sym_PERCENTr10d] = ACTIONS(287),
    [anon_sym_PERCENTr11d] = ACTIONS(287),
    [anon_sym_PERCENTr12d] = ACTIONS(287),
    [anon_sym_PERCENTr13d] = ACTIONS(287),
    [anon_sym_PERCENTr14d] = ACTIONS(287),
    [anon_sym_PERCENTr15d] = ACTIONS(287),
    [anon_sym_PERCENTax] = ACTIONS(289),
    [anon_sym_PERCENTcx] = ACTIONS(289),
    [anon_sym_PERCENTdx] = ACTIONS(289),
    [anon_sym_PERCENTbx] = ACTIONS(289),
    [anon_sym_PERCENTsi] = ACTIONS(291),
    [anon_sym_PERCENTdi] = ACTIONS(291),
    [anon_sym_PERCENTsp] = ACTIONS(291),
    [anon_sym_PERCENTbp] = ACTIONS(291),
    [anon_sym_PERCENTr8w] = ACTIONS(289),
    [anon_sym_PERCENTr9w] = ACTIONS(289),
    [anon_sym_PERCENTr10w] = ACTIONS(289),
    [anon_sym_PERCENTr11w] = ACTIONS(289),
    [anon_sym_PERCENTr12w] = ACTIONS(289),
    [anon_sym_PERCENTr13w] = ACTIONS(289),
    [anon_sym_PERCENTr14w] = ACTIONS(289),
    [anon_sym_PERCENTr15w] = ACTIONS(289),
    [anon_sym_PERCENTal] = ACTIONS(293),
    [anon_sym_PERCENTcl] = ACTIONS(293),
    [anon_sym_PERCENTdl] = ACTIONS(293),
    [anon_sym_PERCENTbl] = ACTIONS(293),
    [anon_sym_PERCENTsil] = ACTIONS(293),
    [anon_sym_PERCENTdil] = ACTIONS(293),
    [anon_sym_PERCENTspl] = ACTIONS(293),
    [anon_sym_PERCENTbpl] = ACTIONS(293),
    [anon_sym_PERCENTr8b] = ACTIONS(293),
    [anon_sym_PERCENTr9b] = ACTIONS(293),
    [anon_sym_PERCENTr10b] = ACTIONS(293),
    [anon_sym_PERCENTr11b] = ACTIONS(293),
    [anon_sym_PERCENTr12b] = ACTIONS(293),
    [anon_sym_PERCENTr13b] = ACTIONS(293),
    [anon_sym_PERCENTr14b] = ACTIONS(293),
    [anon_sym_PERCENTr15b] = ACTIONS(293),
    [anon_sym_PERCENTcr0] = ACTIONS(297),
    [anon_sym_PERCENTcr2] = ACTIONS(297),
    [anon_sym_PERCENTcr3] = ACTIONS(297),
    [anon_sym_PERCENTcr4] = ACTIONS(297),
    [anon_sym_PERCENTrip] = ACTIONS(299),
    [anon_sym_PERCENTeip] = ACTIONS(299),
    [anon_sym_PERCENTip] = ACTIONS(299),
    [anon_sym_PERCENTst] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(303),
  },
  [54] = {
    [sym_registerOperand] = STATE(76),
    [sym_segmentRegisterOperand] = STATE(74),
    [sym_generalRegisterOperand] = STATE(74),
    [sym_generalRegister64Bits] = STATE(73),
    [sym_generalRegister32Bits] = STATE(73),
    [sym_generalRegister16Bits] = STATE(73),
    [sym_generalRegister8Bits] = STATE(73),
    [sym_controlRegisterOperand] = STATE(74),
    [sym_instructionRegisterOperand] = STATE(74),
    [sym_floatRegisterOperand] = STATE(74),
    [sym_otherRegisterOperand] = STATE(74),
    [anon_sym_PERCENTss] = ACTIONS(307),
    [anon_sym_PERCENTcs] = ACTIONS(307),
    [anon_sym_PERCENTds] = ACTIONS(307),
    [anon_sym_PERCENTes] = ACTIONS(47),
    [anon_sym_PERCENTfs] = ACTIONS(307),
    [anon_sym_PERCENTgs] = ACTIONS(307),
    [anon_sym_PERCENTrax] = ACTIONS(309),
    [anon_sym_PERCENTrbx] = ACTIONS(309),
    [anon_sym_PERCENTrcx] = ACTIONS(309),
    [anon_sym_PERCENTrdx] = ACTIONS(309),
    [anon_sym_PERCENTrsi] = ACTIONS(309),
    [anon_sym_PERCENTrdi] = ACTIONS(309),
    [anon_sym_PERCENTrbp] = ACTIONS(309),
    [anon_sym_PERCENTrsp] = ACTIONS(309),
    [anon_sym_PERCENTr8] = ACTIONS(49),
    [anon_sym_PERCENTr9] = ACTIONS(49),
    [anon_sym_PERCENTr10] = ACTIONS(49),
    [anon_sym_PERCENTr11] = ACTIONS(49),
    [anon_sym_PERCENTr12] = ACTIONS(49),
    [anon_sym_PERCENTr13] = ACTIONS(49),
    [anon_sym_PERCENTr14] = ACTIONS(49),
    [anon_sym_PERCENTr15] = ACTIONS(49),
    [anon_sym_PERCENTeax] = ACTIONS(311),
    [anon_sym_PERCENTecx] = ACTIONS(311),
    [anon_sym_PERCENTedx] = ACTIONS(311),
    [anon_sym_PERCENTebx] = ACTIONS(311),
    [anon_sym_PERCENTesi] = ACTIONS(311),
    [anon_sym_PERCENTedi] = ACTIONS(311),
    [anon_sym_PERCENTebp] = ACTIONS(311),
    [anon_sym_PERCENTesp] = ACTIONS(311),
    [anon_sym_PERCENTr8d] = ACTIONS(311),
    [anon_sym_PERCENTr9d] = ACTIONS(311),
    [anon_sym_PERCENTr10d] = ACTIONS(311),
    [anon_sym_PERCENTr11d] = ACTIONS(311),
    [anon_sym_PERCENTr12d] = ACTIONS(311),
    [anon_sym_PERCENTr13d] = ACTIONS(311),
    [anon_sym_PERCENTr14d] = ACTIONS(311),
    [anon_sym_PERCENTr15d] = ACTIONS(311),
    [anon_sym_PERCENTax] = ACTIONS(313),
    [anon_sym_PERCENTcx] = ACTIONS(313),
    [anon_sym_PERCENTdx] = ACTIONS(313),
    [anon_sym_PERCENTbx] = ACTIONS(313),
    [anon_sym_PERCENTsi] = ACTIONS(53),
    [anon_sym_PERCENTdi] = ACTIONS(53),
    [anon_sym_PERCENTsp] = ACTIONS(53),
    [anon_sym_PERCENTbp] = ACTIONS(53),
    [anon_sym_PERCENTr8w] = ACTIONS(313),
    [anon_sym_PERCENTr9w] = ACTIONS(313),
    [anon_sym_PERCENTr10w] = ACTIONS(313),
    [anon_sym_PERCENTr11w] = ACTIONS(313),
    [anon_sym_PERCENTr12w] = ACTIONS(313),
    [anon_sym_PERCENTr13w] = ACTIONS(313),
    [anon_sym_PERCENTr14w] = ACTIONS(313),
    [anon_sym_PERCENTr15w] = ACTIONS(313),
    [anon_sym_PERCENTal] = ACTIONS(315),
    [anon_sym_PERCENTcl] = ACTIONS(315),
    [anon_sym_PERCENTdl] = ACTIONS(315),
    [anon_sym_PERCENTbl] = ACTIONS(315),
    [anon_sym_PERCENTsil] = ACTIONS(315),
    [anon_sym_PERCENTdil] = ACTIONS(315),
    [anon_sym_PERCENTspl] = ACTIONS(315),
    [anon_sym_PERCENTbpl] = ACTIONS(315),
    [anon_sym_PERCENTr8b] = ACTIONS(315),
    [anon_sym_PERCENTr9b] = ACTIONS(315),
    [anon_sym_PERCENTr10b] = ACTIONS(315),
    [anon_sym_PERCENTr11b] = ACTIONS(315),
    [anon_sym_PERCENTr12b] = ACTIONS(315),
    [anon_sym_PERCENTr13b] = ACTIONS(315),
    [anon_sym_PERCENTr14b] = ACTIONS(315),
    [anon_sym_PERCENTr15b] = ACTIONS(315),
    [anon_sym_PERCENTcr0] = ACTIONS(319),
    [anon_sym_PERCENTcr2] = ACTIONS(319),
    [anon_sym_PERCENTcr3] = ACTIONS(319),
    [anon_sym_PERCENTcr4] = ACTIONS(319),
    [anon_sym_PERCENTrip] = ACTIONS(321),
    [anon_sym_PERCENTeip] = ACTIONS(321),
    [anon_sym_PERCENTip] = ACTIONS(321),
    [anon_sym_PERCENTst] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(71),
  },
  [55] = {
    [aux_sym_operand_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(375),
    [aux_sym_operand_token1] = ACTIONS(377),
    [anon_sym_PERCENTss] = ACTIONS(375),
    [anon_sym_PERCENTcs] = ACTIONS(375),
    [anon_sym_PERCENTds] = ACTIONS(375),
    [anon_sym_PERCENTes] = ACTIONS(380),
    [anon_sym_PERCENTfs] = ACTIONS(375),
    [anon_sym_PERCENTgs] = ACTIONS(375),
    [anon_sym_PERCENTrax] = ACTIONS(375),
    [anon_sym_PERCENTrbx] = ACTIONS(375),
    [anon_sym_PERCENTrcx] = ACTIONS(375),
    [anon_sym_PERCENTrdx] = ACTIONS(375),
    [anon_sym_PERCENTrsi] = ACTIONS(375),
    [anon_sym_PERCENTrdi] = ACTIONS(375),
    [anon_sym_PERCENTrbp] = ACTIONS(375),
    [anon_sym_PERCENTrsp] = ACTIONS(375),
    [anon_sym_PERCENTr8] = ACTIONS(380),
    [anon_sym_PERCENTr9] = ACTIONS(380),
    [anon_sym_PERCENTr10] = ACTIONS(380),
    [anon_sym_PERCENTr11] = ACTIONS(380),
    [anon_sym_PERCENTr12] = ACTIONS(380),
    [anon_sym_PERCENTr13] = ACTIONS(380),
    [anon_sym_PERCENTr14] = ACTIONS(380),
    [anon_sym_PERCENTr15] = ACTIONS(380),
    [anon_sym_PERCENTeax] = ACTIONS(375),
    [anon_sym_PERCENTecx] = ACTIONS(375),
    [anon_sym_PERCENTedx] = ACTIONS(375),
    [anon_sym_PERCENTebx] = ACTIONS(375),
    [anon_sym_PERCENTesi] = ACTIONS(375),
    [anon_sym_PERCENTedi] = ACTIONS(375),
    [anon_sym_PERCENTebp] = ACTIONS(375),
    [anon_sym_PERCENTesp] = ACTIONS(375),
    [anon_sym_PERCENTr8d] = ACTIONS(375),
    [anon_sym_PERCENTr9d] = ACTIONS(375),
    [anon_sym_PERCENTr10d] = ACTIONS(375),
    [anon_sym_PERCENTr11d] = ACTIONS(375),
    [anon_sym_PERCENTr12d] = ACTIONS(375),
    [anon_sym_PERCENTr13d] = ACTIONS(375),
    [anon_sym_PERCENTr14d] = ACTIONS(375),
    [anon_sym_PERCENTr15d] = ACTIONS(375),
    [anon_sym_PERCENTax] = ACTIONS(375),
    [anon_sym_PERCENTcx] = ACTIONS(375),
    [anon_sym_PERCENTdx] = ACTIONS(375),
    [anon_sym_PERCENTbx] = ACTIONS(375),
    [anon_sym_PERCENTsi] = ACTIONS(380),
    [anon_sym_PERCENTdi] = ACTIONS(380),
    [anon_sym_PERCENTsp] = ACTIONS(380),
    [anon_sym_PERCENTbp] = ACTIONS(380),
    [anon_sym_PERCENTr8w] = ACTIONS(375),
    [anon_sym_PERCENTr9w] = ACTIONS(375),
    [anon_sym_PERCENTr10w] = ACTIONS(375),
    [anon_sym_PERCENTr11w] = ACTIONS(375),
    [anon_sym_PERCENTr12w] = ACTIONS(375),
    [anon_sym_PERCENTr13w] = ACTIONS(375),
    [anon_sym_PERCENTr14w] = ACTIONS(375),
    [anon_sym_PERCENTr15w] = ACTIONS(375),
    [anon_sym_PERCENTal] = ACTIONS(375),
    [anon_sym_PERCENTcl] = ACTIONS(375),
    [anon_sym_PERCENTdl] = ACTIONS(375),
    [anon_sym_PERCENTbl] = ACTIONS(375),
    [anon_sym_PERCENTsil] = ACTIONS(375),
    [anon_sym_PERCENTdil] = ACTIONS(375),
    [anon_sym_PERCENTspl] = ACTIONS(375),
    [anon_sym_PERCENTbpl] = ACTIONS(375),
    [anon_sym_PERCENTr8b] = ACTIONS(375),
    [anon_sym_PERCENTr9b] = ACTIONS(375),
    [anon_sym_PERCENTr10b] = ACTIONS(375),
    [anon_sym_PERCENTr11b] = ACTIONS(375),
    [anon_sym_PERCENTr12b] = ACTIONS(375),
    [anon_sym_PERCENTr13b] = ACTIONS(375),
    [anon_sym_PERCENTr14b] = ACTIONS(375),
    [anon_sym_PERCENTr15b] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(375),
    [anon_sym_PERCENTcr0] = ACTIONS(375),
    [anon_sym_PERCENTcr2] = ACTIONS(375),
    [anon_sym_PERCENTcr3] = ACTIONS(375),
    [anon_sym_PERCENTcr4] = ACTIONS(375),
    [anon_sym_PERCENTrip] = ACTIONS(375),
    [anon_sym_PERCENTeip] = ACTIONS(375),
    [anon_sym_PERCENTip] = ACTIONS(375),
    [anon_sym_PERCENTst] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(380),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(384), 1,
      sym__line_break,
    ACTIONS(386), 1,
      anon_sym_jmpq,
    ACTIONS(388), 1,
      anon_sym_STAR,
    ACTIONS(390), 1,
      aux_sym_otherFnOperands_token1,
    STATE(58), 1,
      aux_sym_callq_repeat1,
    STATE(63), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(129), 1,
      sym_fnOperand,
    ACTIONS(382), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(133), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [30] = 9,
    ACTIONS(394), 1,
      sym__line_break,
    ACTIONS(396), 1,
      anon_sym_jmpq,
    ACTIONS(399), 1,
      anon_sym_STAR,
    ACTIONS(402), 1,
      aux_sym_otherFnOperands_token1,
    STATE(57), 1,
      aux_sym_callq_repeat1,
    STATE(149), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(219), 1,
      sym_fnOperand,
    ACTIONS(392), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(211), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [60] = 9,
    ACTIONS(386), 1,
      anon_sym_jmpq,
    ACTIONS(388), 1,
      anon_sym_STAR,
    ACTIONS(390), 1,
      aux_sym_otherFnOperands_token1,
    ACTIONS(407), 1,
      sym__line_break,
    STATE(57), 1,
      aux_sym_callq_repeat1,
    STATE(63), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(101), 1,
      sym_fnOperand,
    ACTIONS(405), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(133), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [90] = 3,
    ACTIONS(409), 1,
      aux_sym_operand_token1,
    STATE(59), 1,
      aux_sym_operand_repeat1,
    ACTIONS(380), 8,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [107] = 4,
    ACTIONS(414), 1,
      aux_sym_operand_token1,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      aux_sym_operand_repeat1,
    ACTIONS(412), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [125] = 4,
    ACTIONS(414), 1,
      aux_sym_operand_token1,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      aux_sym_operand_repeat1,
    ACTIONS(418), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [142] = 2,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [154] = 3,
    ACTIONS(428), 1,
      aux_sym_otherFnOperands_token1,
    STATE(69), 1,
      aux_sym_otherFnOperands_repeat1,
    ACTIONS(426), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [168] = 1,
    ACTIONS(430), 7,
      anon_sym_COLON,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [178] = 4,
    ACTIONS(375), 1,
      anon_sym_,
    ACTIONS(432), 1,
      aux_sym_operand_token1,
    STATE(65), 1,
      aux_sym_operand_repeat1,
    ACTIONS(380), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [194] = 3,
    ACTIONS(414), 1,
      aux_sym_operand_token1,
    STATE(59), 1,
      aux_sym_operand_repeat1,
    ACTIONS(435), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [208] = 3,
    ACTIONS(439), 1,
      aux_sym_immediateOperand_token1,
    STATE(67), 1,
      aux_sym_immediateOperand_repeat1,
    ACTIONS(437), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [222] = 3,
    ACTIONS(444), 1,
      aux_sym_immediateOperand_token1,
    STATE(67), 1,
      aux_sym_immediateOperand_repeat1,
    ACTIONS(442), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [236] = 3,
    ACTIONS(448), 1,
      aux_sym_otherFnOperands_token1,
    STATE(69), 1,
      aux_sym_otherFnOperands_repeat1,
    ACTIONS(446), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [250] = 6,
    ACTIONS(451), 1,
      aux_sym_operand_token1,
    ACTIONS(453), 1,
      anon_sym_DASH,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      aux_sym_operand_repeat1,
    STATE(113), 1,
      sym_memoryAbsoluteOperand,
    STATE(304), 1,
      sym_offset,
  [269] = 5,
    ACTIONS(457), 1,
      anon_sym_,
    ACTIONS(459), 1,
      aux_sym_operand_token1,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      aux_sym_operand_repeat1,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [286] = 6,
    ACTIONS(463), 1,
      aux_sym_operand_token1,
    ACTIONS(465), 1,
      anon_sym_DASH,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      aux_sym_operand_repeat1,
    STATE(220), 1,
      sym_memoryAbsoluteOperand,
    STATE(316), 1,
      sym_offset,
  [305] = 1,
    ACTIONS(469), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [314] = 1,
    ACTIONS(471), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [323] = 2,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    ACTIONS(473), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [334] = 2,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [345] = 2,
    ACTIONS(481), 1,
      anon_sym_COLON,
    ACTIONS(471), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [356] = 1,
    ACTIONS(483), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [365] = 5,
    ACTIONS(5), 1,
      aux_sym_address_token1,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    STATE(164), 1,
      aux_sym_address_repeat1,
    STATE(328), 1,
      sym_address,
    STATE(87), 2,
      sym__line,
      aux_sym_prog_repeat1,
  [382] = 1,
    ACTIONS(487), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [391] = 2,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(489), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [402] = 2,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [413] = 1,
    ACTIONS(497), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [422] = 2,
    ACTIONS(394), 1,
      sym__line_break,
    ACTIONS(392), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_jmpq,
      anon_sym_STAR,
      aux_sym_otherFnOperands_token1,
  [433] = 1,
    ACTIONS(499), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [442] = 1,
    ACTIONS(501), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [451] = 5,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(505), 1,
      aux_sym_address_token1,
    STATE(164), 1,
      aux_sym_address_repeat1,
    STATE(328), 1,
      sym_address,
    STATE(87), 2,
      sym__line,
      aux_sym_prog_repeat1,
  [468] = 1,
    ACTIONS(508), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [477] = 2,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
    ACTIONS(510), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [488] = 1,
    ACTIONS(514), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [497] = 2,
    ACTIONS(518), 1,
      sym__line_break,
    ACTIONS(516), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_jmpq,
      anon_sym_STAR,
      aux_sym_otherFnOperands_token1,
  [508] = 1,
    ACTIONS(520), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
      anon_sym_RPAREN,
  [517] = 2,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [528] = 1,
    ACTIONS(526), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [536] = 1,
    ACTIONS(174), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [544] = 1,
    ACTIONS(528), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [552] = 1,
    ACTIONS(530), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [560] = 2,
    STATE(288), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [570] = 2,
    STATE(287), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [580] = 2,
    ACTIONS(536), 2,
      anon_sym_COMMA,
      anon_sym_,
    ACTIONS(534), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [590] = 2,
    ACTIONS(540), 2,
      anon_sym_COMMA,
      anon_sym_,
    ACTIONS(538), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [600] = 2,
    STATE(286), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [610] = 1,
    ACTIONS(542), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [618] = 2,
    STATE(295), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [628] = 1,
    ACTIONS(544), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [636] = 2,
    STATE(292), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [646] = 2,
    STATE(294), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [656] = 1,
    ACTIONS(516), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [664] = 1,
    ACTIONS(546), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [672] = 2,
    STATE(305), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [682] = 1,
    ACTIONS(182), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [690] = 1,
    ACTIONS(186), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [698] = 1,
    ACTIONS(548), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [706] = 1,
    ACTIONS(550), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [714] = 1,
    ACTIONS(489), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [722] = 1,
    ACTIONS(552), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [730] = 1,
    ACTIONS(554), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [738] = 2,
    ACTIONS(536), 2,
      anon_sym_COMMA,
      anon_sym_,
    ACTIONS(7), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [748] = 1,
    ACTIONS(556), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [756] = 4,
    ACTIONS(325), 1,
      aux_sym_operand_token1,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      aux_sym_operand_repeat1,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [770] = 2,
    STATE(289), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [780] = 2,
    STATE(309), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [790] = 1,
    ACTIONS(190), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [798] = 1,
    ACTIONS(560), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [806] = 1,
    ACTIONS(194), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [814] = 1,
    ACTIONS(477), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [822] = 2,
    STATE(285), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [832] = 2,
    STATE(310), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [842] = 2,
    ACTIONS(540), 2,
      anon_sym_COMMA,
      anon_sym_,
    ACTIONS(405), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [852] = 5,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(459), 1,
      aux_sym_operand_token1,
    ACTIONS(562), 1,
      anon_sym_,
    STATE(65), 1,
      aux_sym_operand_repeat1,
  [868] = 1,
    ACTIONS(564), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [876] = 1,
    ACTIONS(198), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [884] = 1,
    ACTIONS(566), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [892] = 1,
    ACTIONS(202), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [900] = 1,
    ACTIONS(206), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [908] = 1,
    ACTIONS(210), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [916] = 1,
    ACTIONS(214), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [924] = 1,
    ACTIONS(568), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [932] = 1,
    ACTIONS(570), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [940] = 1,
    ACTIONS(178), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [948] = 1,
    ACTIONS(218), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [956] = 2,
    STATE(300), 1,
      sym_scale,
    ACTIONS(532), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [966] = 1,
    ACTIONS(222), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [974] = 1,
    ACTIONS(226), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [982] = 1,
    ACTIONS(572), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [990] = 1,
    ACTIONS(574), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [998] = 1,
    ACTIONS(576), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_,
  [1006] = 4,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      aux_sym_operand_token1,
    ACTIONS(578), 1,
      anon_sym_,
    STATE(65), 1,
      aux_sym_operand_repeat1,
  [1019] = 4,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_,
    ACTIONS(582), 1,
      aux_sym_otherFnOperands_token1,
    STATE(151), 1,
      aux_sym_otherFnOperands_repeat1,
  [1032] = 4,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_,
    ACTIONS(586), 1,
      aux_sym_immediateOperand_token1,
    STATE(152), 1,
      aux_sym_immediateOperand_repeat1,
  [1045] = 4,
    ACTIONS(446), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_,
    ACTIONS(590), 1,
      aux_sym_otherFnOperands_token1,
    STATE(151), 1,
      aux_sym_otherFnOperands_repeat1,
  [1058] = 4,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_,
    ACTIONS(595), 1,
      aux_sym_immediateOperand_token1,
    STATE(152), 1,
      aux_sym_immediateOperand_repeat1,
  [1071] = 2,
    ACTIONS(598), 1,
      anon_sym_,
    ACTIONS(430), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1080] = 4,
    ACTIONS(600), 1,
      aux_sym_operand_token1,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_operand_repeat1,
    STATE(315), 1,
      sym_offset,
  [1093] = 3,
    ACTIONS(604), 1,
      anon_sym_,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1104] = 4,
    ACTIONS(600), 1,
      aux_sym_operand_token1,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_operand_repeat1,
    STATE(284), 1,
      sym_offset,
  [1117] = 3,
    ACTIONS(234), 1,
      sym__line_break,
    STATE(297), 1,
      sym_comment,
    ACTIONS(232), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [1128] = 3,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(307), 1,
      sym_comment,
    ACTIONS(232), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [1139] = 4,
    ACTIONS(600), 1,
      aux_sym_operand_token1,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_operand_repeat1,
    STATE(313), 1,
      sym_offset,
  [1152] = 4,
    ACTIONS(600), 1,
      aux_sym_operand_token1,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_operand_repeat1,
    STATE(318), 1,
      sym_offset,
  [1165] = 3,
    ACTIONS(616), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1175] = 3,
    ACTIONS(325), 1,
      aux_sym_operand_token1,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      aux_sym_operand_repeat1,
  [1185] = 3,
    ACTIONS(616), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1195] = 3,
    ACTIONS(624), 1,
      anon_sym_COLON,
    ACTIONS(626), 1,
      aux_sym_address_token1,
    STATE(165), 1,
      aux_sym_address_repeat1,
  [1205] = 3,
    ACTIONS(628), 1,
      anon_sym_COLON,
    ACTIONS(630), 1,
      aux_sym_address_token1,
    STATE(165), 1,
      aux_sym_address_repeat1,
  [1215] = 3,
    ACTIONS(633), 1,
      aux_sym_operand_token2,
    ACTIONS(636), 1,
      anon_sym_GT,
    STATE(166), 1,
      aux_sym_operand_repeat2,
  [1225] = 3,
    ACTIONS(616), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1235] = 3,
    ACTIONS(325), 1,
      aux_sym_operand_token1,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_operand_repeat1,
  [1245] = 3,
    ACTIONS(616), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1255] = 3,
    ACTIONS(616), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1265] = 3,
    ACTIONS(646), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1275] = 3,
    ACTIONS(616), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1285] = 3,
    ACTIONS(616), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1295] = 3,
    ACTIONS(655), 1,
      aux_sym_operand_token2,
    ACTIONS(657), 1,
      anon_sym_GT,
    STATE(166), 1,
      aux_sym_operand_repeat2,
  [1305] = 3,
    ACTIONS(616), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1315] = 3,
    ACTIONS(616), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1325] = 3,
    ACTIONS(325), 1,
      aux_sym_operand_token1,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_operand_repeat1,
  [1335] = 3,
    ACTIONS(655), 1,
      aux_sym_operand_token2,
    ACTIONS(665), 1,
      anon_sym_GT,
    STATE(166), 1,
      aux_sym_operand_repeat2,
  [1345] = 2,
    ACTIONS(667), 1,
      anon_sym_,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1353] = 2,
    ACTIONS(669), 1,
      anon_sym_,
    ACTIONS(499), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1361] = 3,
    ACTIONS(325), 1,
      aux_sym_operand_token1,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_operand_repeat1,
  [1371] = 2,
    ACTIONS(673), 1,
      anon_sym_,
    ACTIONS(469), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1379] = 2,
    ACTIONS(675), 1,
      anon_sym_,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1387] = 2,
    ACTIONS(677), 1,
      anon_sym_,
    ACTIONS(483), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1395] = 2,
    ACTIONS(679), 1,
      anon_sym_,
    ACTIONS(487), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1403] = 2,
    ACTIONS(681), 1,
      anon_sym_,
    ACTIONS(497), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1411] = 2,
    ACTIONS(683), 1,
      anon_sym_,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1419] = 2,
    ACTIONS(685), 1,
      anon_sym_,
    ACTIONS(508), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1427] = 2,
    ACTIONS(687), 1,
      anon_sym_,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1435] = 3,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
  [1445] = 3,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_,
    ACTIONS(693), 1,
      anon_sym_COLON,
  [1455] = 3,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_,
    ACTIONS(697), 1,
      anon_sym_LBRACE,
  [1465] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
  [1475] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [1485] = 3,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_,
    ACTIONS(709), 1,
      anon_sym_LBRACE,
  [1495] = 3,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [1505] = 2,
    ACTIONS(715), 1,
      anon_sym_LPAREN,
    ACTIONS(604), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1513] = 2,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_,
  [1520] = 2,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_,
  [1527] = 1,
    ACTIONS(685), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1532] = 1,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1537] = 1,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1542] = 2,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_,
  [1549] = 1,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1554] = 1,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1559] = 2,
    ACTIONS(719), 1,
      aux_sym_operand_token1,
    STATE(120), 1,
      aux_sym_operand_repeat1,
  [1566] = 2,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_,
  [1573] = 1,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1578] = 1,
    ACTIONS(673), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1583] = 2,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_,
  [1590] = 2,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(725), 1,
      anon_sym_,
  [1597] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
  [1604] = 2,
    ACTIONS(731), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(176), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1611] = 1,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      aux_sym_address_token1,
  [1616] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [1623] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
  [1630] = 1,
    ACTIONS(739), 2,
      ts_builtin_sym_end,
      aux_sym_address_token1,
  [1635] = 2,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_,
  [1642] = 2,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_,
  [1649] = 2,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_,
  [1656] = 2,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_,
  [1663] = 2,
    ACTIONS(747), 1,
      aux_sym_operand_token1,
    STATE(60), 1,
      aux_sym_operand_repeat1,
  [1670] = 1,
    ACTIONS(669), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1675] = 2,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_,
  [1682] = 1,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1687] = 2,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_,
  [1694] = 2,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_,
  [1701] = 2,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_,
  [1708] = 2,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_,
  [1715] = 2,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_,
  [1722] = 2,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_,
  [1729] = 2,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_,
  [1736] = 2,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(763), 1,
      anon_sym_,
  [1743] = 2,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(765), 1,
      anon_sym_,
  [1750] = 2,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_,
  [1757] = 2,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_,
  [1764] = 2,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_,
  [1771] = 2,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(773), 1,
      anon_sym_,
  [1778] = 2,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_,
  [1785] = 2,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_,
  [1792] = 2,
    ACTIONS(775), 1,
      aux_sym_operand_token1,
    STATE(66), 1,
      aux_sym_operand_repeat1,
  [1799] = 2,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_,
  [1806] = 2,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_,
  [1813] = 2,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_,
  [1820] = 2,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_,
  [1827] = 2,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_,
  [1834] = 2,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_,
  [1841] = 2,
    ACTIONS(777), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(170), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1848] = 2,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_,
  [1855] = 2,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_,
  [1862] = 2,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_,
  [1869] = 2,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_,
  [1876] = 2,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_,
  [1883] = 2,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_,
  [1890] = 2,
    ACTIONS(781), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1897] = 1,
    ACTIONS(598), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1902] = 2,
    ACTIONS(783), 1,
      aux_sym_operand_token1,
    STATE(168), 1,
      aux_sym_operand_repeat1,
  [1909] = 2,
    ACTIONS(785), 1,
      aux_sym_operand_token1,
    STATE(181), 1,
      aux_sym_operand_repeat1,
  [1916] = 2,
    ACTIONS(787), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(169), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1923] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
  [1930] = 2,
    ACTIONS(791), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(172), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1937] = 2,
    ACTIONS(793), 1,
      aux_sym_operand_token1,
    STATE(71), 1,
      aux_sym_operand_repeat1,
  [1944] = 1,
    ACTIONS(795), 2,
      ts_builtin_sym_end,
      aux_sym_address_token1,
  [1949] = 1,
    ACTIONS(687), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1954] = 2,
    ACTIONS(797), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(163), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1961] = 2,
    ACTIONS(799), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(173), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1968] = 2,
    ACTIONS(801), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(175), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1975] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
  [1982] = 2,
    ACTIONS(805), 1,
      aux_sym_operand_token1,
    STATE(148), 1,
      aux_sym_operand_repeat1,
  [1989] = 2,
    ACTIONS(807), 1,
      aux_sym_immediateOperand_token1,
    STATE(150), 1,
      aux_sym_immediateOperand_repeat1,
  [1996] = 1,
    ACTIONS(809), 2,
      ts_builtin_sym_end,
      aux_sym_address_token1,
  [2001] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
  [2008] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
  [2015] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
  [2022] = 2,
    ACTIONS(817), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [2029] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
  [2036] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [2043] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
  [2050] = 2,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [2057] = 2,
    ACTIONS(827), 1,
      aux_sym_operand_token2,
    STATE(178), 1,
      aux_sym_operand_repeat2,
  [2064] = 2,
    ACTIONS(829), 1,
      aux_sym_immediateOperand_token1,
    STATE(68), 1,
      aux_sym_immediateOperand_repeat1,
  [2071] = 2,
    ACTIONS(831), 1,
      aux_sym_operand_token2,
    STATE(174), 1,
      aux_sym_operand_repeat2,
  [2078] = 2,
    ACTIONS(833), 1,
      aux_sym_operand_token1,
    STATE(177), 1,
      aux_sym_operand_repeat1,
  [2085] = 1,
    ACTIONS(835), 1,
      anon_sym_LPAREN,
  [2089] = 1,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
  [2093] = 1,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [2097] = 1,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [2101] = 1,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
  [2105] = 1,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
  [2109] = 1,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
  [2113] = 1,
    ACTIONS(849), 1,
      anon_sym_COMMA,
  [2117] = 1,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
  [2121] = 1,
    ACTIONS(361), 1,
      anon_sym_COMMA,
  [2125] = 1,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
  [2129] = 1,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
  [2133] = 1,
    ACTIONS(857), 1,
      ts_builtin_sym_end,
  [2137] = 1,
    ACTIONS(610), 1,
      sym__line_break,
  [2141] = 1,
    ACTIONS(859), 1,
      anon_sym_COMMA,
  [2145] = 1,
    ACTIONS(861), 1,
      anon_sym_COMMA,
  [2149] = 1,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
  [2153] = 1,
    ACTIONS(865), 1,
      anon_sym_COMMA,
  [2157] = 1,
    ACTIONS(867), 1,
      anon_sym_COMMA,
  [2161] = 1,
    ACTIONS(331), 1,
      anon_sym_COMMA,
  [2165] = 1,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
  [2169] = 1,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
  [2173] = 1,
    ACTIONS(871), 1,
      anon_sym_COMMA,
  [2177] = 1,
    ACTIONS(873), 1,
      sym__line_break,
  [2181] = 1,
    ACTIONS(875), 1,
      anon_sym_COMMA,
  [2185] = 1,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
  [2189] = 1,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
  [2193] = 1,
    ACTIONS(369), 1,
      anon_sym_COMMA,
  [2197] = 1,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
  [2201] = 1,
    ACTIONS(881), 1,
      anon_sym_LPAREN,
  [2205] = 1,
    ACTIONS(883), 1,
      anon_sym_COMMA,
  [2209] = 1,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
  [2213] = 1,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
  [2217] = 1,
    ACTIONS(887), 1,
      anon_sym_COMMA,
  [2221] = 1,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
  [2225] = 1,
    ACTIONS(891), 1,
      anon_sym_COMMA,
  [2229] = 1,
    ACTIONS(893), 1,
      anon_sym_COMMA,
  [2233] = 1,
    ACTIONS(895), 1,
      anon_sym_COMMA,
  [2237] = 1,
    ACTIONS(897), 1,
      anon_sym_COMMA,
  [2241] = 1,
    ACTIONS(234), 1,
      sym__line_break,
  [2245] = 1,
    ACTIONS(899), 1,
      anon_sym_COMMA,
  [2249] = 1,
    ACTIONS(901), 1,
      sym__line_break,
  [2253] = 1,
    ACTIONS(371), 1,
      anon_sym_COMMA,
  [2257] = 1,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
  [2261] = 1,
    ACTIONS(903), 1,
      anon_sym_COLON,
  [2265] = 1,
    ACTIONS(365), 1,
      anon_sym_COMMA,
  [2269] = 1,
    ACTIONS(363), 1,
      anon_sym_COMMA,
  [2273] = 1,
    ACTIONS(359), 1,
      anon_sym_COMMA,
  [2277] = 1,
    ACTIONS(373), 1,
      anon_sym_COMMA,
  [2281] = 1,
    ACTIONS(905), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(56)] = 0,
  [SMALL_STATE(57)] = 30,
  [SMALL_STATE(58)] = 60,
  [SMALL_STATE(59)] = 90,
  [SMALL_STATE(60)] = 107,
  [SMALL_STATE(61)] = 125,
  [SMALL_STATE(62)] = 142,
  [SMALL_STATE(63)] = 154,
  [SMALL_STATE(64)] = 168,
  [SMALL_STATE(65)] = 178,
  [SMALL_STATE(66)] = 194,
  [SMALL_STATE(67)] = 208,
  [SMALL_STATE(68)] = 222,
  [SMALL_STATE(69)] = 236,
  [SMALL_STATE(70)] = 250,
  [SMALL_STATE(71)] = 269,
  [SMALL_STATE(72)] = 286,
  [SMALL_STATE(73)] = 305,
  [SMALL_STATE(74)] = 314,
  [SMALL_STATE(75)] = 323,
  [SMALL_STATE(76)] = 334,
  [SMALL_STATE(77)] = 345,
  [SMALL_STATE(78)] = 356,
  [SMALL_STATE(79)] = 365,
  [SMALL_STATE(80)] = 382,
  [SMALL_STATE(81)] = 391,
  [SMALL_STATE(82)] = 402,
  [SMALL_STATE(83)] = 413,
  [SMALL_STATE(84)] = 422,
  [SMALL_STATE(85)] = 433,
  [SMALL_STATE(86)] = 442,
  [SMALL_STATE(87)] = 451,
  [SMALL_STATE(88)] = 468,
  [SMALL_STATE(89)] = 477,
  [SMALL_STATE(90)] = 488,
  [SMALL_STATE(91)] = 497,
  [SMALL_STATE(92)] = 508,
  [SMALL_STATE(93)] = 517,
  [SMALL_STATE(94)] = 528,
  [SMALL_STATE(95)] = 536,
  [SMALL_STATE(96)] = 544,
  [SMALL_STATE(97)] = 552,
  [SMALL_STATE(98)] = 560,
  [SMALL_STATE(99)] = 570,
  [SMALL_STATE(100)] = 580,
  [SMALL_STATE(101)] = 590,
  [SMALL_STATE(102)] = 600,
  [SMALL_STATE(103)] = 610,
  [SMALL_STATE(104)] = 618,
  [SMALL_STATE(105)] = 628,
  [SMALL_STATE(106)] = 636,
  [SMALL_STATE(107)] = 646,
  [SMALL_STATE(108)] = 656,
  [SMALL_STATE(109)] = 664,
  [SMALL_STATE(110)] = 672,
  [SMALL_STATE(111)] = 682,
  [SMALL_STATE(112)] = 690,
  [SMALL_STATE(113)] = 698,
  [SMALL_STATE(114)] = 706,
  [SMALL_STATE(115)] = 714,
  [SMALL_STATE(116)] = 722,
  [SMALL_STATE(117)] = 730,
  [SMALL_STATE(118)] = 738,
  [SMALL_STATE(119)] = 748,
  [SMALL_STATE(120)] = 756,
  [SMALL_STATE(121)] = 770,
  [SMALL_STATE(122)] = 780,
  [SMALL_STATE(123)] = 790,
  [SMALL_STATE(124)] = 798,
  [SMALL_STATE(125)] = 806,
  [SMALL_STATE(126)] = 814,
  [SMALL_STATE(127)] = 822,
  [SMALL_STATE(128)] = 832,
  [SMALL_STATE(129)] = 842,
  [SMALL_STATE(130)] = 852,
  [SMALL_STATE(131)] = 868,
  [SMALL_STATE(132)] = 876,
  [SMALL_STATE(133)] = 884,
  [SMALL_STATE(134)] = 892,
  [SMALL_STATE(135)] = 900,
  [SMALL_STATE(136)] = 908,
  [SMALL_STATE(137)] = 916,
  [SMALL_STATE(138)] = 924,
  [SMALL_STATE(139)] = 932,
  [SMALL_STATE(140)] = 940,
  [SMALL_STATE(141)] = 948,
  [SMALL_STATE(142)] = 956,
  [SMALL_STATE(143)] = 966,
  [SMALL_STATE(144)] = 974,
  [SMALL_STATE(145)] = 982,
  [SMALL_STATE(146)] = 990,
  [SMALL_STATE(147)] = 998,
  [SMALL_STATE(148)] = 1006,
  [SMALL_STATE(149)] = 1019,
  [SMALL_STATE(150)] = 1032,
  [SMALL_STATE(151)] = 1045,
  [SMALL_STATE(152)] = 1058,
  [SMALL_STATE(153)] = 1071,
  [SMALL_STATE(154)] = 1080,
  [SMALL_STATE(155)] = 1093,
  [SMALL_STATE(156)] = 1104,
  [SMALL_STATE(157)] = 1117,
  [SMALL_STATE(158)] = 1128,
  [SMALL_STATE(159)] = 1139,
  [SMALL_STATE(160)] = 1152,
  [SMALL_STATE(161)] = 1165,
  [SMALL_STATE(162)] = 1175,
  [SMALL_STATE(163)] = 1185,
  [SMALL_STATE(164)] = 1195,
  [SMALL_STATE(165)] = 1205,
  [SMALL_STATE(166)] = 1215,
  [SMALL_STATE(167)] = 1225,
  [SMALL_STATE(168)] = 1235,
  [SMALL_STATE(169)] = 1245,
  [SMALL_STATE(170)] = 1255,
  [SMALL_STATE(171)] = 1265,
  [SMALL_STATE(172)] = 1275,
  [SMALL_STATE(173)] = 1285,
  [SMALL_STATE(174)] = 1295,
  [SMALL_STATE(175)] = 1305,
  [SMALL_STATE(176)] = 1315,
  [SMALL_STATE(177)] = 1325,
  [SMALL_STATE(178)] = 1335,
  [SMALL_STATE(179)] = 1345,
  [SMALL_STATE(180)] = 1353,
  [SMALL_STATE(181)] = 1361,
  [SMALL_STATE(182)] = 1371,
  [SMALL_STATE(183)] = 1379,
  [SMALL_STATE(184)] = 1387,
  [SMALL_STATE(185)] = 1395,
  [SMALL_STATE(186)] = 1403,
  [SMALL_STATE(187)] = 1411,
  [SMALL_STATE(188)] = 1419,
  [SMALL_STATE(189)] = 1427,
  [SMALL_STATE(190)] = 1435,
  [SMALL_STATE(191)] = 1445,
  [SMALL_STATE(192)] = 1455,
  [SMALL_STATE(193)] = 1465,
  [SMALL_STATE(194)] = 1475,
  [SMALL_STATE(195)] = 1485,
  [SMALL_STATE(196)] = 1495,
  [SMALL_STATE(197)] = 1505,
  [SMALL_STATE(198)] = 1513,
  [SMALL_STATE(199)] = 1520,
  [SMALL_STATE(200)] = 1527,
  [SMALL_STATE(201)] = 1532,
  [SMALL_STATE(202)] = 1537,
  [SMALL_STATE(203)] = 1542,
  [SMALL_STATE(204)] = 1549,
  [SMALL_STATE(205)] = 1554,
  [SMALL_STATE(206)] = 1559,
  [SMALL_STATE(207)] = 1566,
  [SMALL_STATE(208)] = 1573,
  [SMALL_STATE(209)] = 1578,
  [SMALL_STATE(210)] = 1583,
  [SMALL_STATE(211)] = 1590,
  [SMALL_STATE(212)] = 1597,
  [SMALL_STATE(213)] = 1604,
  [SMALL_STATE(214)] = 1611,
  [SMALL_STATE(215)] = 1616,
  [SMALL_STATE(216)] = 1623,
  [SMALL_STATE(217)] = 1630,
  [SMALL_STATE(218)] = 1635,
  [SMALL_STATE(219)] = 1642,
  [SMALL_STATE(220)] = 1649,
  [SMALL_STATE(221)] = 1656,
  [SMALL_STATE(222)] = 1663,
  [SMALL_STATE(223)] = 1670,
  [SMALL_STATE(224)] = 1675,
  [SMALL_STATE(225)] = 1682,
  [SMALL_STATE(226)] = 1687,
  [SMALL_STATE(227)] = 1694,
  [SMALL_STATE(228)] = 1701,
  [SMALL_STATE(229)] = 1708,
  [SMALL_STATE(230)] = 1715,
  [SMALL_STATE(231)] = 1722,
  [SMALL_STATE(232)] = 1729,
  [SMALL_STATE(233)] = 1736,
  [SMALL_STATE(234)] = 1743,
  [SMALL_STATE(235)] = 1750,
  [SMALL_STATE(236)] = 1757,
  [SMALL_STATE(237)] = 1764,
  [SMALL_STATE(238)] = 1771,
  [SMALL_STATE(239)] = 1778,
  [SMALL_STATE(240)] = 1785,
  [SMALL_STATE(241)] = 1792,
  [SMALL_STATE(242)] = 1799,
  [SMALL_STATE(243)] = 1806,
  [SMALL_STATE(244)] = 1813,
  [SMALL_STATE(245)] = 1820,
  [SMALL_STATE(246)] = 1827,
  [SMALL_STATE(247)] = 1834,
  [SMALL_STATE(248)] = 1841,
  [SMALL_STATE(249)] = 1848,
  [SMALL_STATE(250)] = 1855,
  [SMALL_STATE(251)] = 1862,
  [SMALL_STATE(252)] = 1869,
  [SMALL_STATE(253)] = 1876,
  [SMALL_STATE(254)] = 1883,
  [SMALL_STATE(255)] = 1890,
  [SMALL_STATE(256)] = 1897,
  [SMALL_STATE(257)] = 1902,
  [SMALL_STATE(258)] = 1909,
  [SMALL_STATE(259)] = 1916,
  [SMALL_STATE(260)] = 1923,
  [SMALL_STATE(261)] = 1930,
  [SMALL_STATE(262)] = 1937,
  [SMALL_STATE(263)] = 1944,
  [SMALL_STATE(264)] = 1949,
  [SMALL_STATE(265)] = 1954,
  [SMALL_STATE(266)] = 1961,
  [SMALL_STATE(267)] = 1968,
  [SMALL_STATE(268)] = 1975,
  [SMALL_STATE(269)] = 1982,
  [SMALL_STATE(270)] = 1989,
  [SMALL_STATE(271)] = 1996,
  [SMALL_STATE(272)] = 2001,
  [SMALL_STATE(273)] = 2008,
  [SMALL_STATE(274)] = 2015,
  [SMALL_STATE(275)] = 2022,
  [SMALL_STATE(276)] = 2029,
  [SMALL_STATE(277)] = 2036,
  [SMALL_STATE(278)] = 2043,
  [SMALL_STATE(279)] = 2050,
  [SMALL_STATE(280)] = 2057,
  [SMALL_STATE(281)] = 2064,
  [SMALL_STATE(282)] = 2071,
  [SMALL_STATE(283)] = 2078,
  [SMALL_STATE(284)] = 2085,
  [SMALL_STATE(285)] = 2089,
  [SMALL_STATE(286)] = 2093,
  [SMALL_STATE(287)] = 2097,
  [SMALL_STATE(288)] = 2101,
  [SMALL_STATE(289)] = 2105,
  [SMALL_STATE(290)] = 2109,
  [SMALL_STATE(291)] = 2113,
  [SMALL_STATE(292)] = 2117,
  [SMALL_STATE(293)] = 2121,
  [SMALL_STATE(294)] = 2125,
  [SMALL_STATE(295)] = 2129,
  [SMALL_STATE(296)] = 2133,
  [SMALL_STATE(297)] = 2137,
  [SMALL_STATE(298)] = 2141,
  [SMALL_STATE(299)] = 2145,
  [SMALL_STATE(300)] = 2149,
  [SMALL_STATE(301)] = 2153,
  [SMALL_STATE(302)] = 2157,
  [SMALL_STATE(303)] = 2161,
  [SMALL_STATE(304)] = 2165,
  [SMALL_STATE(305)] = 2169,
  [SMALL_STATE(306)] = 2173,
  [SMALL_STATE(307)] = 2177,
  [SMALL_STATE(308)] = 2181,
  [SMALL_STATE(309)] = 2185,
  [SMALL_STATE(310)] = 2189,
  [SMALL_STATE(311)] = 2193,
  [SMALL_STATE(312)] = 2197,
  [SMALL_STATE(313)] = 2201,
  [SMALL_STATE(314)] = 2205,
  [SMALL_STATE(315)] = 2209,
  [SMALL_STATE(316)] = 2213,
  [SMALL_STATE(317)] = 2217,
  [SMALL_STATE(318)] = 2221,
  [SMALL_STATE(319)] = 2225,
  [SMALL_STATE(320)] = 2229,
  [SMALL_STATE(321)] = 2233,
  [SMALL_STATE(322)] = 2237,
  [SMALL_STATE(323)] = 2241,
  [SMALL_STATE(324)] = 2245,
  [SMALL_STATE(325)] = 2249,
  [SMALL_STATE(326)] = 2253,
  [SMALL_STATE(327)] = 2257,
  [SMALL_STATE(328)] = 2261,
  [SMALL_STATE(329)] = 2265,
  [SMALL_STATE(330)] = 2269,
  [SMALL_STATE(331)] = 2273,
  [SMALL_STATE(332)] = 2277,
  [SMALL_STATE(333)] = 2281,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(239),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(240),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(199),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(242),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(243),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(244),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(245),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(246),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(247),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(198),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(249),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(250),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(251),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(252),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(269),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(130),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(280),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(270),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(153),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(189),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(188),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(187),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(186),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(159),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(34),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(203),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(253),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(185),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(184),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(155),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(262),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LogicalOpcode, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LogicalOpcode, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ToBeClassifiedOpcode, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ToBeClassifiedOpcode, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AccessRegisterOpcode, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AccessRegisterOpcode, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StringOpcode, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringOpcode, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StackOpcode, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StackOpcode, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BinaryArithmeticOpcode, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BinaryArithmeticOpcode, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BitAndByteOpcode, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BitAndByteOpcode, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CuriousOpcode, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CuriousOpcode, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DataTransferOpcode, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DataTransferOpcode, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_IOOpcode, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IOOpcode, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MiscellaneousOpcode, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MiscellaneousOpcode, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ShiftAndRotateOpcode, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ShiftAndRotateOpcode, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PackUnpackOpcode, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PackUnpackOpcode, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2), SHIFT_REPEAT(22),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__line_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__line_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(55),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callq, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callq, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_callq_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_callq_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_callq_repeat1, 2), SHIFT_REPEAT(211),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_callq_repeat1, 2), SHIFT_REPEAT(23),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_callq_repeat1, 2), SHIFT_REPEAT(149),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callq, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callq, 2),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(59),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherRegisterOperand, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryAbsoluteOperand, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatRegisterOperand, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherFnOperands, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segmentRegisterOperand, 1),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(65),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2), SHIFT_REPEAT(67),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediateOperand, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2), SHIFT_REPEAT(69),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherRegisterOperand, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegisterOperand, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registerOperand, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 4),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instructionRegisterOperand, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_controlRegisterOperand, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister8Bits, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatRegisterOperand, 4),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister16Bits, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(164),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister32Bits, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 4),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister64Bits, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callqOpcode, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callqOpcode, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherRegisterOperand, 5),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 5),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 10),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 8),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 8),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callq, 3),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 7),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_someOpcode, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 7),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 7),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryOperand, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 9),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryAbsoluteOperand, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 11),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fnOperand, 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 5),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 5),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 6),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 6),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 6),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherFnOperands, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediateOperand, 2),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2), SHIFT_REPEAT(151),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_immediateOperand_repeat1, 2),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2), SHIFT_REPEAT(152),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segmentRegisterOperand, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatRegisterOperand, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_address_repeat1, 2),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_address_repeat1, 2), SHIFT_REPEAT(165),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operand_repeat2, 2), SHIFT_REPEAT(166),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_repeat2, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memoryIndirectOperand_repeat1, 2), SHIFT_REPEAT(171),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memoryIndirectOperand_repeat1, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherRegisterOperand, 5),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatRegisterOperand, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegisterOperand, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registerOperand, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instructionRegisterOperand, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controlRegisterOperand, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister8Bits, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister16Bits, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister32Bits, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister64Bits, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 4),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 5),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 3),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 2),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 4),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 3),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_someOpcode, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryOperand, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fnOperand, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 6),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 5),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 5),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 6),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 6),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 6),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 7),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 7),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 7),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 8),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 8),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 9),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 10),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 11),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 5),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [857] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm(void) {
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
