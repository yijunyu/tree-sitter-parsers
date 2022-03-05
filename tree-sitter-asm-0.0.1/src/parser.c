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
#define STATE_COUNT 273
#define LARGE_STATE_COUNT 53
#define SYMBOL_COUNT 551
#define ALIAS_COUNT 0
#define TOKEN_COUNT 499
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum {
  sym__line_break = 1,
  aux_sym_comment_token1 = 2,
  aux_sym_comment_token2 = 3,
  anon_sym_ = 4,
  aux_sym__address_token1 = 5,
  sym__byte = 6,
  sym__colon = 7,
  sym__comma = 8,
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
  anon_sym_COLON = 472,
  anon_sym_DASH = 473,
  anon_sym_LPAREN = 474,
  anon_sym_COMMA = 475,
  anon_sym_RPAREN = 476,
  anon_sym_LBRACE = 477,
  aux_sym_memoryIndirectOperand_token1 = 478,
  anon_sym_RBRACE = 479,
  anon_sym_1 = 480,
  anon_sym_2 = 481,
  anon_sym_4 = 482,
  anon_sym_8 = 483,
  anon_sym_movsq = 484,
  anon_sym_cmpsb = 485,
  anon_sym_cmpxchg = 486,
  anon_sym_movsl = 487,
  anon_sym_STAR = 488,
  anon_sym_PERCENTcr0 = 489,
  anon_sym_PERCENTcr2 = 490,
  anon_sym_PERCENTcr3 = 491,
  anon_sym_PERCENTcr4 = 492,
  anon_sym_PERCENTrip = 493,
  anon_sym_PERCENTeip = 494,
  anon_sym_PERCENTip = 495,
  anon_sym_PERCENTst = 496,
  anon_sym_PERCENT = 497,
  aux_sym_otherFnOperands_token1 = 498,
  sym_prog = 499,
  sym_comment = 500,
  sym__address = 501,
  sym__machine_code = 502,
  sym__line = 503,
  sym_instruction = 504,
  sym_opcode = 505,
  sym_BinaryArithmeticOpcode = 506,
  sym_BitAndByteOpcode = 507,
  sym_CuriousOpcode = 508,
  sym_DataTransferOpcode = 509,
  sym_IOOpcode = 510,
  sym_LogicalOpcode = 511,
  sym_MiscellaneousOpcode = 512,
  sym_PackUnpackOpcode = 513,
  sym_ShiftAndRotateOpcode = 514,
  sym_StackOpcode = 515,
  sym_StringOpcode = 516,
  sym_AccessRegisterOpcode = 517,
  sym_ToBeClassifiedOpcode = 518,
  sym_operand = 519,
  sym_immediateOperand = 520,
  sym_registerOperand = 521,
  sym_segmentRegisterOperand = 522,
  sym_generalRegisterOperand = 523,
  sym_generalRegister64Bits = 524,
  sym_generalRegister32Bits = 525,
  sym_generalRegister16Bits = 526,
  sym_generalRegister8Bits = 527,
  sym_memoryOperand = 528,
  sym_memoryScalaredIndexedOperand = 529,
  sym_memorySegmentBaseOperand = 530,
  sym_memoryIndirectOperand = 531,
  sym_offset = 532,
  sym_base = 533,
  sym_index = 534,
  sym_scale = 535,
  sym_memoryAbsoluteOperand = 536,
  sym_someOpcode = 537,
  sym_controlRegisterOperand = 538,
  sym_instructionRegisterOperand = 539,
  sym_floatRegisterOperand = 540,
  sym_otherRegisterOperand = 541,
  aux_sym_prog_repeat1 = 542,
  aux_sym__address_repeat1 = 543,
  aux_sym__address_repeat2 = 544,
  aux_sym__machine_code_repeat1 = 545,
  aux_sym_instruction_repeat1 = 546,
  aux_sym_operand_repeat1 = 547,
  aux_sym_operand_repeat2 = 548,
  aux_sym_immediateOperand_repeat1 = 549,
  aux_sym_memoryIndirectOperand_repeat1 = 550,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__line_break] = "_line_break",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_] = " ",
  [aux_sym__address_token1] = "_address_token1",
  [sym__byte] = "_byte",
  [sym__colon] = "_colon",
  [sym__comma] = "_comma",
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
  [anon_sym_COLON] = ":",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
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
  [sym_comment] = "comment",
  [sym__address] = "_address",
  [sym__machine_code] = "_machine_code",
  [sym__line] = "_line",
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
  [sym_controlRegisterOperand] = "controlRegisterOperand",
  [sym_instructionRegisterOperand] = "instructionRegisterOperand",
  [sym_floatRegisterOperand] = "floatRegisterOperand",
  [sym_otherRegisterOperand] = "otherRegisterOperand",
  [aux_sym_prog_repeat1] = "prog_repeat1",
  [aux_sym__address_repeat1] = "_address_repeat1",
  [aux_sym__address_repeat2] = "_address_repeat2",
  [aux_sym__machine_code_repeat1] = "_machine_code_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_operand_repeat1] = "operand_repeat1",
  [aux_sym_operand_repeat2] = "operand_repeat2",
  [aux_sym_immediateOperand_repeat1] = "immediateOperand_repeat1",
  [aux_sym_memoryIndirectOperand_repeat1] = "memoryIndirectOperand_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__line_break] = sym__line_break,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_] = anon_sym_,
  [aux_sym__address_token1] = aux_sym__address_token1,
  [sym__byte] = sym__byte,
  [sym__colon] = sym__colon,
  [sym__comma] = sym__comma,
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_comment] = sym_comment,
  [sym__address] = sym__address,
  [sym__machine_code] = sym__machine_code,
  [sym__line] = sym__line,
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
  [sym_controlRegisterOperand] = sym_controlRegisterOperand,
  [sym_instructionRegisterOperand] = sym_instructionRegisterOperand,
  [sym_floatRegisterOperand] = sym_floatRegisterOperand,
  [sym_otherRegisterOperand] = sym_otherRegisterOperand,
  [aux_sym_prog_repeat1] = aux_sym_prog_repeat1,
  [aux_sym__address_repeat1] = aux_sym__address_repeat1,
  [aux_sym__address_repeat2] = aux_sym__address_repeat2,
  [aux_sym__machine_code_repeat1] = aux_sym__machine_code_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_operand_repeat1] = aux_sym_operand_repeat1,
  [aux_sym_operand_repeat2] = aux_sym_operand_repeat2,
  [aux_sym_immediateOperand_repeat1] = aux_sym_immediateOperand_repeat1,
  [aux_sym_memoryIndirectOperand_repeat1] = aux_sym_memoryIndirectOperand_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__line_break] = {
    .visible = false,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__address_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__byte] = {
    .visible = false,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
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
  [anon_sym_COLON] = {
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
  [anon_sym_COMMA] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__address] = {
    .visible = false,
    .named = true,
  },
  [sym__machine_code] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
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
  [aux_sym_prog_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__address_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__address_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__machine_code_repeat1] = {
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(652);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(1068);
      if (lookahead == '%') ADVANCE(1165);
      if (lookahead == '(') ADVANCE(1142);
      if (lookahead == ')') ADVANCE(1144);
      if (lookahead == '*') ADVANCE(1156);
      if (lookahead == '+') ADVANCE(1066);
      if (lookahead == ',') ADVANCE(1143);
      if (lookahead == '-') ADVANCE(1141);
      if (lookahead == '.') ADVANCE(1069);
      if (lookahead == '/') ADVANCE(1069);
      if (lookahead == '1') ADVANCE(1148);
      if (lookahead == '2') ADVANCE(1149);
      if (lookahead == '4') ADVANCE(1150);
      if (lookahead == '8') ADVANCE(1151);
      if (lookahead == ':') ADVANCE(1140);
      if (lookahead == '<') ADVANCE(1065);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(1067);
      if (lookahead == 'f') ADVANCE(1061);
      if (lookahead == '{') ADVANCE(1145);
      if (lookahead == '}') ADVANCE(1147);
      if (lookahead == '&' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(1167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(659);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '(') ADVANCE(1142);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '{') ADVANCE(1145);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1069);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '$') ADVANCE(1068);
      if (lookahead == '%') ADVANCE(1166);
      if (lookahead == '(') ADVANCE(1142);
      if (lookahead == '-') ADVANCE(1141);
      if (lookahead == '<') ADVANCE(1065);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(1063);
      if (lookahead == 'f') ADVANCE(1061);
      if (lookahead == 'm') ADVANCE(1064);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'g') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'k') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'v') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(658);
      if (lookahead == '(') ADVANCE(1142);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == ':') ADVANCE(1140);
      if (lookahead == '{') ADVANCE(1145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(658);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1069);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(658);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(659);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(1166);
      if (lookahead == '(') ADVANCE(1142);
      if (lookahead == ')') ADVANCE(1144);
      if (lookahead == ',') ADVANCE(1143);
      if (lookahead == '-') ADVANCE(1141);
      if (lookahead == ':') ADVANCE(673);
      if (lookahead == '{') ADVANCE(1145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1062);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(1032);
      if (lookahead == '1') ADVANCE(1031);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(1157);
      if (lookahead == '2') ADVANCE(1158);
      if (lookahead == '3') ADVANCE(1159);
      if (lookahead == '4') ADVANCE(1160);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(1086);
      if (lookahead == '1') ADVANCE(1087);
      if (lookahead == '2') ADVANCE(1088);
      if (lookahead == '3') ADVANCE(1089);
      if (lookahead == '4') ADVANCE(1090);
      if (lookahead == '5') ADVANCE(1091);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(1148);
      if (lookahead == '2') ADVANCE(1149);
      if (lookahead == '4') ADVANCE(1150);
      if (lookahead == '8') ADVANCE(1151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(376);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(859);
      if (lookahead == '2') ADVANCE(860);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '8') ADVANCE(1084);
      if (lookahead == '9') ADVANCE(1085);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'b') ADVANCE(425);
      if (lookahead == 'c') ADVANCE(635);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(33);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '6') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(855);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(858);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(281);
      if (lookahead == 'd') ADVANCE(1003);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(1004);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(938);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(936);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(990);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(637);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(66);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(544);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(525);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(527);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(204);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(205);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(638);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(640);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(546);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(642);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(538);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(553);
      END_STATE();
    case 47:
      if (lookahead == '3') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == '6') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == '4') ADVANCE(862);
      END_STATE();
    case 50:
      if (lookahead == '4') ADVANCE(857);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(939);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(935);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(989);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(995);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(996);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(993);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(1001);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(643);
      END_STATE();
    case 59:
      if (lookahead == '4') ADVANCE(639);
      END_STATE();
    case 60:
      if (lookahead == '6') ADVANCE(856);
      END_STATE();
    case 61:
      if (lookahead == '6') ADVANCE(49);
      END_STATE();
    case 62:
      if (lookahead == '8') ADVANCE(986);
      END_STATE();
    case 63:
      if (lookahead == '8') ADVANCE(1002);
      END_STATE();
    case 64:
      if (lookahead == '8') ADVANCE(985);
      END_STATE();
    case 65:
      if (lookahead == '8') ADVANCE(994);
      END_STATE();
    case 66:
      if (lookahead == '8') ADVANCE(992);
      END_STATE();
    case 67:
      if (lookahead == '8') ADVANCE(1000);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(673);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(659);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(656);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(1067);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1066);
      END_STATE();
    case 72:
      if (lookahead == 'B') ADVANCE(910);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'W') ADVANCE(913);
      if (lookahead == 'X') ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == 'B') ADVANCE(914);
      if (lookahead == 'X') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'B') ADVANCE(912);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(909);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(908);
      if (lookahead == 'X') ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(911);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 'f') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(366);
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(295);
      if (lookahead == 'u') ADVANCE(397);
      if (lookahead == 'x') ADVANCE(402);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(82);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(850);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(889);
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(738);
      if (lookahead == 'b') ADVANCE(735);
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead == 'g') ADVANCE(743);
      if (lookahead == 'l') ADVANCE(741);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(744);
      if (lookahead == 'p') ADVANCE(746);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == 'b') ADVANCE(772);
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead == 'g') ADVANCE(768);
      if (lookahead == 'l') ADVANCE(763);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(765);
      if (lookahead == 'p') ADVANCE(769);
      if (lookahead == 's') ADVANCE(775);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(810);
      if (lookahead == 'u') ADVANCE(813);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(937);
      if (lookahead == 'u') ADVANCE(934);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == 'i') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'b') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(612);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == 'x') ADVANCE(406);
      if (lookahead == 'z') ADVANCE(264);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(632);
      if (lookahead == 'b') ADVANCE(423);
      if (lookahead == 'c') ADVANCE(633);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == 's') ADVANCE(1073);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == 'u') ADVANCE(359);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(400);
      if (lookahead == 'x') ADVANCE(410);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'd') ADVANCE(942);
      if (lookahead == 'q') ADVANCE(940);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(550);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 107:
      if (lookahead == 'b') ADVANCE(707);
      END_STATE();
    case 108:
      if (lookahead == 'b') ADVANCE(699);
      END_STATE();
    case 109:
      if (lookahead == 'b') ADVANCE(818);
      if (lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 110:
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 111:
      if (lookahead == 'b') ADVANCE(902);
      if (lookahead == 'd') ADVANCE(807);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == 's') ADVANCE(805);
      if (lookahead == 'w') ADVANCE(345);
      END_STATE();
    case 112:
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == 'w') ADVANCE(347);
      END_STATE();
    case 113:
      if (lookahead == 'b') ADVANCE(820);
      if (lookahead == 'l') ADVANCE(821);
      END_STATE();
    case 114:
      if (lookahead == 'b') ADVANCE(1026);
      if (lookahead == 'd') ADVANCE(1009);
      if (lookahead == 'q') ADVANCE(1038);
      if (lookahead == 'u') ADVANCE(517);
      END_STATE();
    case 115:
      if (lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(1058);
      if (lookahead == 'q') ADVANCE(1056);
      if (lookahead == 'w') ADVANCE(1033);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(1054);
      if (lookahead == 'd') ADVANCE(1059);
      if (lookahead == 'w') ADVANCE(1029);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(1052);
      if (lookahead == 'd') ADVANCE(1041);
      if (lookahead == 'h') ADVANCE(620);
      if (lookahead == 'l') ADVANCE(621);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(947);
      if (lookahead == 'd') ADVANCE(946);
      if (lookahead == 'q') ADVANCE(948);
      if (lookahead == 'w') ADVANCE(949);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(1019);
      if (lookahead == 'd') ADVANCE(1015);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(1020);
      if (lookahead == 'w') ADVANCE(1018);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(956);
      if (lookahead == 'd') ADVANCE(954);
      if (lookahead == 'q') ADVANCE(955);
      if (lookahead == 'w') ADVANCE(953);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(962);
      if (lookahead == 'd') ADVANCE(963);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(864);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(1028);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(671);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == 'p') ADVANCE(589);
      if (lookahead == 'q') ADVANCE(577);
      if (lookahead == 'v') ADVANCE(559);
      if (lookahead == 'w') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(1153);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(489);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(609);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead == 'q') ADVANCE(229);
      if (lookahead == 'w') ADVANCE(208);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(627);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == 'q') ADVANCE(231);
      if (lookahead == 'w') ADVANCE(209);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(534);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(537);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(542);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(294);
      if (lookahead == 'g') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(691);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(689);
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(920);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(922);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(924);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(412);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(579);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == 'm') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(835);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(760);
      if (lookahead == 'q') ADVANCE(761);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(777);
      if (lookahead == 'l') ADVANCE(776);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(842);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(1036);
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(841);
      if (lookahead == 's') ADVANCE(844);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(849);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(696);
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1027);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(1042);
      if (lookahead == 's') ADVANCE(1030);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(714);
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(1024);
      if (lookahead == 'q') ADVANCE(1037);
      if (lookahead == 'w') ADVANCE(1017);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(600);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(1013);
      if (lookahead == 'q') ADVANCE(1023);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(1012);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(1021);
      if (lookahead == 'q') ADVANCE(1025);
      if (lookahead == 'w') ADVANCE(1022);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(706);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(705);
      if (lookahead == 's') ADVANCE(702);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(845);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(831);
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(688);
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(812);
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(1047);
      if (lookahead == 's') ADVANCE(1035);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(443);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(930);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(943);
      if (lookahead == 's') ADVANCE(933);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(944);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(894);
      if (lookahead == 'q') ADVANCE(895);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(965);
      if (lookahead == 'q') ADVANCE(966);
      if (lookahead == 'w') ADVANCE(967);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(969);
      if (lookahead == 'q') ADVANCE(970);
      if (lookahead == 'w') ADVANCE(971);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(974);
      if (lookahead == 'q') ADVANCE(973);
      if (lookahead == 'u') ADVANCE(531);
      if (lookahead == 'w') ADVANCE(975);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(977);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(1014);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(1010);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(1046);
      if (lookahead == 's') ADVANCE(1034);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(932);
      if (lookahead == 's') ADVANCE(931);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead == 's') ADVANCE(783);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(780);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(1049);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(997);
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(951);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(1006);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(1005);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(958);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(978);
      if (lookahead == 's') ADVANCE(979);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(867);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(870);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(991);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(752);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(980);
      if (lookahead == 's') ADVANCE(981);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(982);
      if (lookahead == 's') ADVANCE(983);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(929);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(878);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(871);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(999);
      if (lookahead == 'q') ADVANCE(998);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(667);
      if (lookahead == 'e') ADVANCE(670);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(619);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'k') ADVANCE(253);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(451);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(562);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(615);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(456);
      if (lookahead == 'q') ADVANCE(235);
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(457);
      if (lookahead == 'q') ADVANCE(236);
      if (lookahead == 'w') ADVANCE(216);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(458);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(462);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(466);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(519);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(602);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead == 'p') ADVANCE(745);
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(766);
      if (lookahead == 's') ADVANCE(767);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1044);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(669);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(591);
      if (lookahead == 's') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'z') ADVANCE(147);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'g') ADVANCE(585);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 277:
      if (lookahead == 'f') ADVANCE(728);
      if (lookahead == 'r') ADVANCE(729);
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 278:
      if (lookahead == 'f') ADVANCE(118);
      END_STATE();
    case 279:
      if (lookahead == 'f') ADVANCE(310);
      END_STATE();
    case 280:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 281:
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 282:
      if (lookahead == 'f') ADVANCE(433);
      END_STATE();
    case 283:
      if (lookahead == 'f') ADVANCE(271);
      END_STATE();
    case 284:
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 285:
      if (lookahead == 'g') ADVANCE(717);
      END_STATE();
    case 286:
      if (lookahead == 'g') ADVANCE(814);
      END_STATE();
    case 287:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 288:
      if (lookahead == 'g') ADVANCE(1154);
      END_STATE();
    case 289:
      if (lookahead == 'g') ADVANCE(391);
      END_STATE();
    case 290:
      if (lookahead == 'g') ADVANCE(393);
      END_STATE();
    case 291:
      if (lookahead == 'g') ADVANCE(586);
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 292:
      if (lookahead == 'g') ADVANCE(266);
      END_STATE();
    case 293:
      if (lookahead == 'h') ADVANCE(898);
      END_STATE();
    case 294:
      if (lookahead == 'h') ADVANCE(286);
      END_STATE();
    case 295:
      if (lookahead == 'h') ADVANCE(590);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 296:
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 297:
      if (lookahead == 'h') ADVANCE(233);
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 298:
      if (lookahead == 'h') ADVANCE(288);
      END_STATE();
    case 299:
      if (lookahead == 'h') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 300:
      if (lookahead == 'h') ADVANCE(442);
      END_STATE();
    case 301:
      if (lookahead == 'h') ADVANCE(468);
      END_STATE();
    case 302:
      if (lookahead == 'h') ADVANCE(566);
      END_STATE();
    case 303:
      if (lookahead == 'h') ADVANCE(592);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 304:
      if (lookahead == 'h') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 305:
      if (lookahead == 'h') ADVANCE(594);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(358);
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 306:
      if (lookahead == 'h') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 307:
      if (lookahead == 'h') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 308:
      if (lookahead == 'h') ADVANCE(473);
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 309:
      if (lookahead == 'h') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(508);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(779);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(781);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(1113);
      if (lookahead == 'l') ADVANCE(1126);
      if (lookahead == 's') ADVANCE(1072);
      if (lookahead == 'x') ADVANCE(1110);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(1112);
      if (lookahead == 'p') ADVANCE(1114);
      if (lookahead == 's') ADVANCE(1070);
      if (lookahead == 't') ADVANCE(1164);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(1097);
      if (lookahead == 'x') ADVANCE(1094);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(1081);
      if (lookahead == 'x') ADVANCE(1079);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(1080);
      if (lookahead == 'p') ADVANCE(1083);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 330:
      if (lookahead == 'k') ADVANCE(863);
      END_STATE();
    case 331:
      if (lookahead == 'k') ADVANCE(296);
      END_STATE();
    case 332:
      if (lookahead == 'k') ADVANCE(300);
      END_STATE();
    case 333:
      if (lookahead == 'k') ADVANCE(306);
      END_STATE();
    case 334:
      if (lookahead == 'k') ADVANCE(595);
      END_STATE();
    case 335:
      if (lookahead == 'k') ADVANCE(297);
      END_STATE();
    case 336:
      if (lookahead == 'k') ADVANCE(125);
      END_STATE();
    case 337:
      if (lookahead == 'k') ADVANCE(603);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 't') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(716);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(815);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(817);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(797);
      if (lookahead == 'q') ADVANCE(798);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(801);
      if (lookahead == 'q') ADVANCE(800);
      if (lookahead == 'w') ADVANCE(799);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(987);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(1124);
      if (lookahead == 'x') ADVANCE(1108);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(1127);
      if (lookahead == 'p') ADVANCE(1115);
      if (lookahead == 'x') ADVANCE(1111);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead == 'x') ADVANCE(1109);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 'q') ADVANCE(1152);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 356:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 357:
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == 'm') ADVANCE(417);
      END_STATE();
    case 358:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 359:
      if (lookahead == 'l') ADVANCE(597);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 361:
      if (lookahead == 'l') ADVANCE(623);
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 362:
      if (lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 363:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 364:
      if (lookahead == 'l') ADVANCE(541);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(503);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(378);
      if (lookahead == 'm') ADVANCE(420);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 370:
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 371:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 372:
      if (lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 373:
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'm') ADVANCE(501);
      END_STATE();
    case 375:
      if (lookahead == 'm') ADVANCE(526);
      END_STATE();
    case 376:
      if (lookahead == 'm') ADVANCE(523);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 377:
      if (lookahead == 'm') ADVANCE(596);
      END_STATE();
    case 378:
      if (lookahead == 'm') ADVANCE(601);
      END_STATE();
    case 379:
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 380:
      if (lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 385:
      if (lookahead == 'n') ADVANCE(555);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 387:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 388:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 389:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 392:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 393:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 394:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 395:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(536);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead == 'p') ADVANCE(682);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 415:
      if (lookahead == 'p') ADVANCE(852);
      if (lookahead == 't') ADVANCE(846);
      END_STATE();
    case 416:
      if (lookahead == 'p') ADVANCE(900);
      if (lookahead == 'r') ADVANCE(1016);
      END_STATE();
    case 417:
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 418:
      if (lookahead == 'p') ADVANCE(758);
      END_STATE();
    case 419:
      if (lookahead == 'p') ADVANCE(720);
      END_STATE();
    case 420:
      if (lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(1163);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(530);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(1098);
      if (lookahead == 'x') ADVANCE(1095);
      END_STATE();
    case 424:
      if (lookahead == 'p') ADVANCE(1162);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(1082);
      if (lookahead == 'x') ADVANCE(1077);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(1161);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 428:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 429:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(445);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 435:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 436:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 437:
      if (lookahead == 'p') ADVANCE(505);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(506);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(507);
      END_STATE();
    case 441:
      if (lookahead == 'p') ADVANCE(509);
      END_STATE();
    case 442:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 443:
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead == 'v') ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'p') ADVANCE(512);
      END_STATE();
    case 445:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 446:
      if (lookahead == 'q') ADVANCE(757);
      END_STATE();
    case 447:
      if (lookahead == 'q') ADVANCE(756);
      END_STATE();
    case 448:
      if (lookahead == 'q') ADVANCE(901);
      END_STATE();
    case 449:
      if (lookahead == 'q') ADVANCE(120);
      END_STATE();
    case 450:
      if (lookahead == 'q') ADVANCE(1040);
      END_STATE();
    case 451:
      if (lookahead == 'q') ADVANCE(960);
      END_STATE();
    case 452:
      if (lookahead == 'q') ADVANCE(866);
      END_STATE();
    case 453:
      if (lookahead == 'q') ADVANCE(869);
      END_STATE();
    case 454:
      if (lookahead == 'q') ADVANCE(874);
      END_STATE();
    case 455:
      if (lookahead == 'q') ADVANCE(873);
      END_STATE();
    case 456:
      if (lookahead == 'q') ADVANCE(876);
      END_STATE();
    case 457:
      if (lookahead == 'q') ADVANCE(872);
      END_STATE();
    case 458:
      if (lookahead == 'q') ADVANCE(875);
      END_STATE();
    case 459:
      if (lookahead == 'q') ADVANCE(877);
      END_STATE();
    case 460:
      if (lookahead == 'q') ADVANCE(726);
      END_STATE();
    case 461:
      if (lookahead == 'q') ADVANCE(723);
      END_STATE();
    case 462:
      if (lookahead == 'q') ADVANCE(722);
      END_STATE();
    case 463:
      if (lookahead == 'q') ADVANCE(725);
      END_STATE();
    case 464:
      if (lookahead == 'q') ADVANCE(721);
      END_STATE();
    case 465:
      if (lookahead == 'q') ADVANCE(724);
      END_STATE();
    case 466:
      if (lookahead == 'q') ADVANCE(727);
      END_STATE();
    case 467:
      if (lookahead == 'q') ADVANCE(301);
      END_STATE();
    case 468:
      if (lookahead == 'q') ADVANCE(237);
      END_STATE();
    case 469:
      if (lookahead == 'q') ADVANCE(238);
      END_STATE();
    case 470:
      if (lookahead == 'q') ADVANCE(239);
      END_STATE();
    case 471:
      if (lookahead == 'q') ADVANCE(240);
      END_STATE();
    case 472:
      if (lookahead == 'q') ADVANCE(241);
      END_STATE();
    case 473:
      if (lookahead == 'q') ADVANCE(242);
      END_STATE();
    case 474:
      if (lookahead == 'q') ADVANCE(243);
      END_STATE();
    case 475:
      if (lookahead == 'q') ADVANCE(304);
      END_STATE();
    case 476:
      if (lookahead == 'q') ADVANCE(307);
      END_STATE();
    case 477:
      if (lookahead == 'q') ADVANCE(308);
      END_STATE();
    case 478:
      if (lookahead == 'r') ADVANCE(822);
      if (lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 479:
      if (lookahead == 'r') ADVANCE(881);
      END_STATE();
    case 480:
      if (lookahead == 'r') ADVANCE(827);
      END_STATE();
    case 481:
      if (lookahead == 'r') ADVANCE(1011);
      END_STATE();
    case 482:
      if (lookahead == 'r') ADVANCE(961);
      END_STATE();
    case 483:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 484:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 485:
      if (lookahead == 'r') ADVANCE(834);
      END_STATE();
    case 486:
      if (lookahead == 'r') ADVANCE(1051);
      END_STATE();
    case 487:
      if (lookahead == 'r') ADVANCE(950);
      END_STATE();
    case 488:
      if (lookahead == 'r') ADVANCE(988);
      END_STATE();
    case 489:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 490:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 491:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 492:
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead == 'x') ADVANCE(584);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(622);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(753);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(1060);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(793);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(809);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(832);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(804);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(941);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(976);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(1057);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(786);
      END_STATE();
    case 511:
      if (lookahead == 's') ADVANCE(927);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(928);
      END_STATE();
    case 513:
      if (lookahead == 's') ADVANCE(984);
      END_STATE();
    case 514:
      if (lookahead == 's') ADVANCE(1074);
      END_STATE();
    case 515:
      if (lookahead == 's') ADVANCE(1075);
      END_STATE();
    case 516:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 517:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 521:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 524:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 530:
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(563);
      END_STATE();
    case 534:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(629);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(568);
      END_STATE();
    case 546:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 547:
      if (lookahead == 's') ADVANCE(569);
      END_STATE();
    case 548:
      if (lookahead == 's') ADVANCE(570);
      END_STATE();
    case 549:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 550:
      if (lookahead == 's') ADVANCE(575);
      END_STATE();
    case 551:
      if (lookahead == 's') ADVANCE(571);
      END_STATE();
    case 552:
      if (lookahead == 's') ADVANCE(554);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(816);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(748);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(1007);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(851);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(921);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(923);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(925);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(926);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(598);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 589:
      if (lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 590:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 591:
      if (lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 592:
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 593:
      if (lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 594:
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 595:
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 596:
      if (lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 597:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 598:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 599:
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 600:
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(195);
      END_STATE();
    case 601:
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 602:
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == 'w') ADVANCE(206);
      END_STATE();
    case 603:
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 604:
      if (lookahead == 'v') ADVANCE(692);
      END_STATE();
    case 605:
      if (lookahead == 'v') ADVANCE(788);
      END_STATE();
    case 606:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 607:
      if (lookahead == 'v') ADVANCE(697);
      END_STATE();
    case 608:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 609:
      if (lookahead == 'v') ADVANCE(915);
      END_STATE();
    case 610:
      if (lookahead == 'v') ADVANCE(617);
      END_STATE();
    case 611:
      if (lookahead == 'v') ADVANCE(540);
      END_STATE();
    case 612:
      if (lookahead == 'v') ADVANCE(587);
      END_STATE();
    case 613:
      if (lookahead == 'v') ADVANCE(518);
      END_STATE();
    case 614:
      if (lookahead == 'v') ADVANCE(375);
      END_STATE();
    case 615:
      if (lookahead == 'v') ADVANCE(441);
      END_STATE();
    case 616:
      if (lookahead == 'w') ADVANCE(759);
      END_STATE();
    case 617:
      if (lookahead == 'w') ADVANCE(917);
      END_STATE();
    case 618:
      if (lookahead == 'w') ADVANCE(751);
      END_STATE();
    case 619:
      if (lookahead == 'w') ADVANCE(1055);
      END_STATE();
    case 620:
      if (lookahead == 'w') ADVANCE(1043);
      END_STATE();
    case 621:
      if (lookahead == 'w') ADVANCE(1039);
      END_STATE();
    case 622:
      if (lookahead == 'w') ADVANCE(952);
      END_STATE();
    case 623:
      if (lookahead == 'w') ADVANCE(959);
      END_STATE();
    case 624:
      if (lookahead == 'w') ADVANCE(972);
      END_STATE();
    case 625:
      if (lookahead == 'w') ADVANCE(1053);
      END_STATE();
    case 626:
      if (lookahead == 'w') ADVANCE(865);
      END_STATE();
    case 627:
      if (lookahead == 'w') ADVANCE(868);
      END_STATE();
    case 628:
      if (lookahead == 'w') ADVANCE(945);
      END_STATE();
    case 629:
      if (lookahead == 'w') ADVANCE(957);
      END_STATE();
    case 630:
      if (lookahead == 'w') ADVANCE(124);
      END_STATE();
    case 631:
      if (lookahead == 'x') ADVANCE(919);
      END_STATE();
    case 632:
      if (lookahead == 'x') ADVANCE(1092);
      END_STATE();
    case 633:
      if (lookahead == 'x') ADVANCE(1093);
      END_STATE();
    case 634:
      if (lookahead == 'x') ADVANCE(1076);
      END_STATE();
    case 635:
      if (lookahead == 'x') ADVANCE(1078);
      END_STATE();
    case 636:
      if (lookahead == 'x') ADVANCE(521);
      END_STATE();
    case 637:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 638:
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 639:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 640:
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 641:
      if (lookahead == 'x') ADVANCE(580);
      END_STATE();
    case 642:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 643:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 644:
      if (lookahead == 'x') ADVANCE(581);
      END_STATE();
    case 645:
      if (lookahead == 'x') ADVANCE(582);
      END_STATE();
    case 646:
      if (lookahead == 'y') ADVANCE(292);
      END_STATE();
    case 647:
      if (lookahead == 'z') ADVANCE(905);
      END_STATE();
    case 648:
      if (lookahead == '}') ADVANCE(1147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(648)
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1146);
      END_STATE();
    case 649:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(649)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1069);
      END_STATE();
    case 650:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      END_STATE();
    case 651:
      if (eof) ADVANCE(652);
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == ' ') ADVANCE(657);
      if (lookahead == '#') ADVANCE(655);
      if (lookahead == '(') ADVANCE(1142);
      if (lookahead == ',') ADVANCE(674);
      if (lookahead == ':') ADVANCE(1140);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(662);
      if (lookahead == 'b') ADVANCE(664);
      if (lookahead == 'c') ADVANCE(661);
      if (lookahead == 'd') ADVANCE(660);
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead == 'f') ADVANCE(663);
      if (lookahead == 'g') ADVANCE(498);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'k') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'v') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(136);
      if (lookahead == '{') ADVANCE(1145);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(651)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(659);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == ' ') ADVANCE(657);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == ' ') ADVANCE(657);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__address_token1);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__address_token1);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__address_token1);
      if (lookahead == 'b') ADVANCE(557);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == 'p') ADVANCE(589);
      if (lookahead == 'q') ADVANCE(577);
      if (lookahead == 'v') ADVANCE(559);
      if (lookahead == 'w') ADVANCE(560);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__address_token1);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__address_token1);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(591);
      if (lookahead == 's') ADVANCE(916);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__address_token1);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__address_token1);
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__byte);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'c') ADVANCE(675);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'c') ADVANCE(691);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__colon);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_adc);
      if (lookahead == 'x') ADVANCE(918);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'b') ADVANCE(681);
      if (lookahead == 'l') ADVANCE(678);
      if (lookahead == 'q') ADVANCE(677);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == 'w') ADVANCE(680);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_addq);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_addl);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_addss);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_addw);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_addb);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_cmp);
      if (lookahead == 'b') ADVANCE(683);
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == 'q') ADVANCE(686);
      if (lookahead == 'w') ADVANCE(684);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_cmpb);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_cmpw);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_cmpl);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_cmpq);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_comiss);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_comisd);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_inc);
      if (lookahead == 'l') ADVANCE(690);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_incl);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == 'l') ADVANCE(694);
      if (lookahead == 'q') ADVANCE(693);
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_divq);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_divl);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_divss);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_divsd);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_idiv);
      if (lookahead == 'l') ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_idivl);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == 'b') ADVANCE(704);
      if (lookahead == 'l') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 'q') ADVANCE(700);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == 'w') ADVANCE(703);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_subq);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_subl);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_subss);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_subw);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_subb);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_subsd);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_subpd);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_sbb);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'b') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(710);
      if (lookahead == 'q') ADVANCE(709);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == 'w') ADVANCE(712);
      if (lookahead == 'x') ADVANCE(715);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_mulq);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_mull);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_mulss);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_mulw);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_mulb);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_mulsd);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_mulx);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_imul);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_neg);
      if (lookahead == 'l') ADVANCE(718);
      if (lookahead == 'q') ADVANCE(719);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_negl);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_negq);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_fmulp);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_vpclmulhqlqdq);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_pclmullqlqdq);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_pclmullqhqdq);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_vpclmullqhqdq);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_vpclmulhqhqdq);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_pclmulhqhqdq);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_vpclmullqlqdq);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_bsf);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_bsr);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_bts);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_bt);
      if (lookahead == 'l') ADVANCE(733);
      if (lookahead == 'r') ADVANCE(732);
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_btr);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_btl);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_setne);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_setb);
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_sete);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_setbe);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_seta);
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_setge);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_setae);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_setl);
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_setle);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_setg);
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_seto);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_setnp);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_setp);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_setns);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == 'b') ADVANCE(749);
      if (lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_testb);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_testl);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_knotw);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_vpcmpltud);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_re);
      if (lookahead == 'p') ADVANCE(903);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'x') ADVANCE(906);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_leaveq);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_retq);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_bswap);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_cbtw);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_cltd);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_cltq);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_cmovbe);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_cmovl);
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_cmovae);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_cmovo);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_cmovne);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_cmovns);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_cmovg);
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_cmovp);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_cmove);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_cmovge);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_cmovb);
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_cmova);
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_cmovle);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_cmovs);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_cwtl);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_cwtd);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_cqto);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_cvttsd2si);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_cvtss2sd);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_cvttss2si);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_cvtsi2sd);
      if (lookahead == 'l') ADVANCE(785);
      if (lookahead == 'q') ADVANCE(784);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_cvtsi2ss);
      if (lookahead == 'l') ADVANCE(787);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdq);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdl);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_cvtsd2ss);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_cvtsi2ssl);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'b') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == 'q') ADVANCE(791);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(434);
      if (lookahead == 'w') ADVANCE(789);
      if (lookahead == 'z') ADVANCE(112);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_movw);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_movl);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_movq);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_movb);
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_movabs);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_movsbw);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_movsbq);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_movsbl);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_movswl);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_movswq);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_movzbw);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_movzbq);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_movzbl);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_movzwl);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_movaps);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_movhlps);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_movss);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_movups);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_movsd);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_movd);
      if (lookahead == 'q') ADVANCE(85);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_movhps);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_movdqa);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_movbe);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_movapd);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_movdqu);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_xchg);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_fildl);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_fldt);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_fstpl);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_insb);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_insl);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_outsb);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_outsl);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'b') ADVANCE(825);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'q') ADVANCE(823);
      if (lookahead == 'w') ADVANCE(826);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_orq);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_orl);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_orb);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_orw);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == 'l') ADVANCE(828);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 'w') ADVANCE(829);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_xorl);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_xorw);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_xorps);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_xorpd);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_vxorps);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_vpxord);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_vpxor);
      if (lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == 'b') ADVANCE(839);
      if (lookahead == 'l') ADVANCE(837);
      if (lookahead == 'n') ADVANCE(840);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'q') ADVANCE(836);
      if (lookahead == 'w') ADVANCE(838);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_andq);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_andl);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_andw);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_andb);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_andn);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_andpd);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_pand);
      if (lookahead == 'n') ADVANCE(843);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_pandn);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_andps);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_vpand);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'l') ADVANCE(847);
      if (lookahead == 'w') ADVANCE(848);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_notl);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_notw);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_cpuid);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_lea);
      if (lookahead == 'v') ADVANCE(260);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_popcnt);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead == 'l') ADVANCE(853);
      if (lookahead == 'w') ADVANCE(854);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_nopl);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_nopw);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_ud2);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_data16);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_sha1rnds4);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_addr32);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_sha1msg1);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_sha1msg2);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_sha1nexte);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_endbr64);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_OperatingSystemSupportOpcode);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_packuswb);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_punpckhbw);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_punpckhdq);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_punpckhwd);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_punpcklbw);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_punpckldq);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_punpcklwd);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_vpunpcklwd);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_vpunpckldq);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_punpcklqdq);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_punpckhqdq);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_vpunpckhqdq);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_vpunpckhdq);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_vpunpcklqdq);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_vpunpckhwd);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_rol);
      if (lookahead == 'l') ADVANCE(897);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_ror);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 'x') ADVANCE(1008);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_sar);
      if (lookahead == 'l') ADVANCE(882);
      if (lookahead == 'x') ADVANCE(883);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_sarl);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_sarx);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == 'd') ADVANCE(886);
      if (lookahead == 'l') ADVANCE(885);
      if (lookahead == 'q') ADVANCE(888);
      if (lookahead == 'x') ADVANCE(887);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_shll);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_shld);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_shlx);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_shlq);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_shr);
      if (lookahead == 'd') ADVANCE(891);
      if (lookahead == 'l') ADVANCE(892);
      if (lookahead == 'q') ADVANCE(890);
      if (lookahead == 'x') ADVANCE(893);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_shrq);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_shrd);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_shrl);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_shrx);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_vprord);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_vprorq);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_rorl);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_roll);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'q') ADVANCE(899);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_pushq);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_movslq);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_movsb);
      if (lookahead == 'l') ADVANCE(796);
      if (lookahead == 'q') ADVANCE(795);
      if (lookahead == 'w') ADVANCE(794);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_rep);
      if (lookahead == 'n') ADVANCE(647);
      if (lookahead == 'z') ADVANCE(904);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_repz);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_repnz);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_rex);
      if (lookahead == '.') ADVANCE(72);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_rex_DOTWB);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRB);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_rex_DOTRXB);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_rex_DOTB);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRXB);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_rex_DOTXB);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_rex_DOTW);
      if (lookahead == 'B') ADVANCE(907);
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_rex_DOTRB);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_xgetbv);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_fs);
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_kmovw);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_adcx);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_adox);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_aesdec);
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_aesdeclast);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_aesenc);
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_aesenclast);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_vaesenc);
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_vaesenclast);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_aeskeygenassist);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_vblendps);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_vblendvps);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_vcvtusi2sd);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_vdivsd);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_vmovaps);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_vmovapd);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_vmovss);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_vmovdqu);
      if (lookahead == '3') ADVANCE(27);
      if (lookahead == '6') ADVANCE(52);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_vmovdqu64);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_vmovdqu32);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_vmovdqa);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(51);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_vmovdqa32);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_vmovdqa64);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_vmovq);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_vmovups);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_vmovd);
      if (lookahead == 'q') ADVANCE(86);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_vmovsd);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_vmulsd);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_vpackusdw);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_vpaddd);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_vpaddb);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_vpaddq);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_vpaddw);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_vpalignr);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_vpcmpgtd);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_vpextrw);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_vpinsrw);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_vpinsrd);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_vpinsrq);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_vpinsrb);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_vpmaddubsw);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_vpmaddwd);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_vpmullw);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_vpmuludq);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_vpor);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_vpshufb);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_vpshufd);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_vpslldq);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_vpslld);
      if (lookahead == 'q') ADVANCE(964);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_vpsllq);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_vpsllw);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_vpsrldq);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_vpsrld);
      if (lookahead == 'q') ADVANCE(968);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_vpsrlq);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_vpsrlw);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_vpsubusw);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_vpsubq);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_vpsubd);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_vpsubw);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_vshufps);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_vsubsd);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_vucomisd);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_vucomiss);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_vunpckhpd);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_vunpckhps);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_vunpcklpd);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_vunpcklps);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_vbroadcastss);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_vinsertf128);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_vperm2f128);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_vzeroall);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_vzeroupper);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_vshufi32x4);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_vshufi64x2);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_vpblendmd);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_vextracti128);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_vextracti32x4);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_vinserti128);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_vinserti32x4);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_vinserti64x4);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_vpblendd);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_vpbroadcastq);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_vpbroadcastd);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_vbroadcasti128);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_vbroadcasti32x4);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_vperm2i128);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_vpermd);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_vpermq);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_vpermt2d);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_vpermi2d);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_tzcnt);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_rorx);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_psubd);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_pmaddwd);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_pxor);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_psrad);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_pslld);
      if (lookahead == 'q') ADVANCE(1048);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_pcmpgtd);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_pcmpeqd);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_por);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_paddw);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_psubusw);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_pcmpeqb);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_psubusb);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_psrld);
      if (lookahead == 'q') ADVANCE(1050);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_psrlw);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_psllq);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_paddd);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_psrlq);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_psubb);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_maxss);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_pmovmskb);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_pinsrw);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_minss);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_prefetcht1);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_prefetcht0);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_pextrw);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_ucomiss);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_shufps);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_addsd);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_paddq);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_psubq);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_pshuflw);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_pmuludq);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_pshufd);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_minsd);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_pshufhw);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_mfence);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_maxsd);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_ucomisd);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_shufpd);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_pslldq);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_unpckhpd);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_psrldq);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_palignr);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_pshufb);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_pmaddubsw);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_pinsrb);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_pblendw);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_pextrq);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_blendvps);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_pextrb);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_pinsrd);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_femms);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'm') ADVANCE(422);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_operand_token2);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_immediateOperand_token1);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_PERCENTss);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_PERCENTcs);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_PERCENTds);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_PERCENTes);
      if (lookahead == 'i') ADVANCE(1096);
      if (lookahead == 'p') ADVANCE(1099);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_PERCENTfs);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_PERCENTgs);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_PERCENTrax);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_PERCENTrbx);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_PERCENTrcx);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_PERCENTrdx);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_PERCENTrsi);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_PERCENTrdi);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_PERCENTrbp);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_PERCENTrsp);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_PERCENTr8);
      if (lookahead == 'b') ADVANCE(1132);
      if (lookahead == 'd') ADVANCE(1100);
      if (lookahead == 'w') ADVANCE(1116);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_PERCENTr9);
      if (lookahead == 'b') ADVANCE(1133);
      if (lookahead == 'd') ADVANCE(1101);
      if (lookahead == 'w') ADVANCE(1117);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_PERCENTr10);
      if (lookahead == 'b') ADVANCE(1134);
      if (lookahead == 'd') ADVANCE(1102);
      if (lookahead == 'w') ADVANCE(1118);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_PERCENTr11);
      if (lookahead == 'b') ADVANCE(1135);
      if (lookahead == 'd') ADVANCE(1103);
      if (lookahead == 'w') ADVANCE(1119);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_PERCENTr12);
      if (lookahead == 'b') ADVANCE(1136);
      if (lookahead == 'd') ADVANCE(1104);
      if (lookahead == 'w') ADVANCE(1120);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_PERCENTr13);
      if (lookahead == 'b') ADVANCE(1137);
      if (lookahead == 'd') ADVANCE(1105);
      if (lookahead == 'w') ADVANCE(1121);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_PERCENTr14);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'd') ADVANCE(1106);
      if (lookahead == 'w') ADVANCE(1122);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_PERCENTr15);
      if (lookahead == 'b') ADVANCE(1139);
      if (lookahead == 'd') ADVANCE(1107);
      if (lookahead == 'w') ADVANCE(1123);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_PERCENTeax);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_PERCENTecx);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_PERCENTedx);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_PERCENTebx);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_PERCENTesi);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_PERCENTedi);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_PERCENTebp);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_PERCENTesp);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_PERCENTr8d);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_PERCENTr9d);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_PERCENTr10d);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_PERCENTr11d);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_PERCENTr12d);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_PERCENTr13d);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_PERCENTr14d);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_PERCENTr15d);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_PERCENTax);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_PERCENTcx);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_PERCENTdx);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_PERCENTbx);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_PERCENTsi);
      if (lookahead == 'l') ADVANCE(1128);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_PERCENTdi);
      if (lookahead == 'l') ADVANCE(1129);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_PERCENTsp);
      if (lookahead == 'l') ADVANCE(1130);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_PERCENTbp);
      if (lookahead == 'l') ADVANCE(1131);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_PERCENTr8w);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_PERCENTr9w);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_PERCENTr10w);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_PERCENTr11w);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_PERCENTr12w);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_PERCENTr13w);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_PERCENTr14w);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_PERCENTr15w);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_PERCENTal);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_PERCENTcl);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_PERCENTdl);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_PERCENTbl);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_PERCENTsil);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_PERCENTdil);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_PERCENTspl);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_PERCENTbpl);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_PERCENTr8b);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_PERCENTr9b);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_PERCENTr10b);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_PERCENTr11b);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_PERCENTr12b);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_PERCENTr13b);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_PERCENTr14b);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_PERCENTr15b);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_memoryIndirectOperand_token1);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_movsq);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_cmpsb);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_cmpxchg);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_movsl);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_PERCENTcr0);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_PERCENTcr2);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_PERCENTcr3);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_PERCENTcr4);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_PERCENTrip);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_PERCENTeip);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_PERCENTip);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_PERCENTst);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(351);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(514);
      if (lookahead == 'g') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_otherFnOperands_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 651},
  [2] = {.lex_state = 651},
  [3] = {.lex_state = 651},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 651},
  [6] = {.lex_state = 651},
  [7] = {.lex_state = 651},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 651},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 651},
  [62] = {.lex_state = 651},
  [63] = {.lex_state = 651},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 651},
  [68] = {.lex_state = 651},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 651},
  [71] = {.lex_state = 651},
  [72] = {.lex_state = 651},
  [73] = {.lex_state = 651},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 651},
  [76] = {.lex_state = 651},
  [77] = {.lex_state = 651},
  [78] = {.lex_state = 651},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 651},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 651},
  [83] = {.lex_state = 651},
  [84] = {.lex_state = 651},
  [85] = {.lex_state = 651},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 651},
  [88] = {.lex_state = 651},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 651},
  [91] = {.lex_state = 651},
  [92] = {.lex_state = 651},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 651},
  [100] = {.lex_state = 651},
  [101] = {.lex_state = 651},
  [102] = {.lex_state = 651},
  [103] = {.lex_state = 651},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 651},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 651},
  [109] = {.lex_state = 651},
  [110] = {.lex_state = 651},
  [111] = {.lex_state = 651},
  [112] = {.lex_state = 651},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 648},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 68},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 648},
  [128] = {.lex_state = 68},
  [129] = {.lex_state = 68},
  [130] = {.lex_state = 71},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 648},
  [133] = {.lex_state = 648},
  [134] = {.lex_state = 648},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 648},
  [137] = {.lex_state = 648},
  [138] = {.lex_state = 648},
  [139] = {.lex_state = 648},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 71},
  [142] = {.lex_state = 71},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 648},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 648},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 71},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 649},
  [158] = {.lex_state = 648},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 648},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 648},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 648},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 648},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 648},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 649},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 648},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 648},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 71},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 8},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 8},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 8},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 8},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [aux_sym__address_token1] = ACTIONS(1),
    [sym__colon] = ACTIONS(1),
    [sym__comma] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [aux_sym_operand_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_operand_token2] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_immediateOperand_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_prog] = STATE(267),
    [sym_comment] = STATE(266),
    [sym__address] = STATE(224),
    [sym__machine_code] = STATE(4),
    [sym__line] = STATE(2),
    [sym_instruction] = STATE(118),
    [sym_opcode] = STATE(12),
    [sym_BinaryArithmeticOpcode] = STATE(17),
    [sym_BitAndByteOpcode] = STATE(17),
    [sym_CuriousOpcode] = STATE(17),
    [sym_DataTransferOpcode] = STATE(17),
    [sym_IOOpcode] = STATE(17),
    [sym_LogicalOpcode] = STATE(17),
    [sym_MiscellaneousOpcode] = STATE(17),
    [sym_PackUnpackOpcode] = STATE(17),
    [sym_ShiftAndRotateOpcode] = STATE(17),
    [sym_StackOpcode] = STATE(17),
    [sym_StringOpcode] = STATE(17),
    [sym_AccessRegisterOpcode] = STATE(17),
    [sym_ToBeClassifiedOpcode] = STATE(17),
    [aux_sym_prog_repeat1] = STATE(2),
    [aux_sym__address_repeat1] = STATE(122),
    [aux_sym__address_repeat2] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__line_break] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [aux_sym__address_token1] = ACTIONS(11),
    [anon_sym_adc] = ACTIONS(13),
    [anon_sym_add] = ACTIONS(13),
    [anon_sym_addq] = ACTIONS(13),
    [anon_sym_addl] = ACTIONS(13),
    [anon_sym_addss] = ACTIONS(13),
    [anon_sym_addw] = ACTIONS(13),
    [anon_sym_addb] = ACTIONS(13),
    [anon_sym_cmp] = ACTIONS(13),
    [anon_sym_cmpb] = ACTIONS(13),
    [anon_sym_cmpw] = ACTIONS(13),
    [anon_sym_cmpl] = ACTIONS(13),
    [anon_sym_cmpq] = ACTIONS(13),
    [anon_sym_comiss] = ACTIONS(13),
    [anon_sym_comisd] = ACTIONS(13),
    [anon_sym_inc] = ACTIONS(13),
    [anon_sym_incl] = ACTIONS(13),
    [anon_sym_dec] = ACTIONS(13),
    [anon_sym_div] = ACTIONS(13),
    [anon_sym_divq] = ACTIONS(13),
    [anon_sym_divl] = ACTIONS(13),
    [anon_sym_divss] = ACTIONS(13),
    [anon_sym_divsd] = ACTIONS(13),
    [anon_sym_idiv] = ACTIONS(13),
    [anon_sym_idivl] = ACTIONS(13),
    [anon_sym_sub] = ACTIONS(13),
    [anon_sym_subq] = ACTIONS(13),
    [anon_sym_subl] = ACTIONS(13),
    [anon_sym_subss] = ACTIONS(13),
    [anon_sym_subw] = ACTIONS(13),
    [anon_sym_subb] = ACTIONS(13),
    [anon_sym_subsd] = ACTIONS(13),
    [anon_sym_subpd] = ACTIONS(13),
    [anon_sym_sbb] = ACTIONS(13),
    [anon_sym_mul] = ACTIONS(13),
    [anon_sym_mulq] = ACTIONS(13),
    [anon_sym_mull] = ACTIONS(13),
    [anon_sym_mulss] = ACTIONS(13),
    [anon_sym_mulw] = ACTIONS(13),
    [anon_sym_mulb] = ACTIONS(13),
    [anon_sym_mulsd] = ACTIONS(13),
    [anon_sym_mulx] = ACTIONS(13),
    [anon_sym_imul] = ACTIONS(13),
    [anon_sym_neg] = ACTIONS(13),
    [anon_sym_negl] = ACTIONS(13),
    [anon_sym_negq] = ACTIONS(13),
    [anon_sym_fmulp] = ACTIONS(13),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(13),
    [anon_sym_pclmullqlqdq] = ACTIONS(13),
    [anon_sym_pclmullqhqdq] = ACTIONS(13),
    [anon_sym_vpclmullqhqdq] = ACTIONS(13),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(13),
    [anon_sym_pclmulhqhqdq] = ACTIONS(13),
    [anon_sym_vpclmullqlqdq] = ACTIONS(13),
    [anon_sym_bsf] = ACTIONS(15),
    [anon_sym_bsr] = ACTIONS(15),
    [anon_sym_bts] = ACTIONS(15),
    [anon_sym_bt] = ACTIONS(15),
    [anon_sym_btr] = ACTIONS(15),
    [anon_sym_btl] = ACTIONS(15),
    [anon_sym_setne] = ACTIONS(15),
    [anon_sym_setb] = ACTIONS(15),
    [anon_sym_sete] = ACTIONS(15),
    [anon_sym_setbe] = ACTIONS(15),
    [anon_sym_seta] = ACTIONS(15),
    [anon_sym_setge] = ACTIONS(15),
    [anon_sym_setae] = ACTIONS(15),
    [anon_sym_setl] = ACTIONS(15),
    [anon_sym_setle] = ACTIONS(15),
    [anon_sym_setg] = ACTIONS(15),
    [anon_sym_seto] = ACTIONS(15),
    [anon_sym_setnp] = ACTIONS(15),
    [anon_sym_setp] = ACTIONS(15),
    [anon_sym_setns] = ACTIONS(15),
    [anon_sym_test] = ACTIONS(15),
    [anon_sym_testb] = ACTIONS(15),
    [anon_sym_testl] = ACTIONS(15),
    [anon_sym_knotw] = ACTIONS(15),
    [anon_sym_vpcmpltud] = ACTIONS(17),
    [anon_sym_gs] = ACTIONS(17),
    [anon_sym_re] = ACTIONS(17),
    [anon_sym_ss] = ACTIONS(17),
    [anon_sym_leaveq] = ACTIONS(17),
    [anon_sym_retq] = ACTIONS(17),
    [anon_sym_bswap] = ACTIONS(19),
    [anon_sym_cbtw] = ACTIONS(19),
    [anon_sym_cltd] = ACTIONS(19),
    [anon_sym_cltq] = ACTIONS(19),
    [anon_sym_cmovbe] = ACTIONS(19),
    [anon_sym_cmovl] = ACTIONS(19),
    [anon_sym_cmovae] = ACTIONS(19),
    [anon_sym_cmovo] = ACTIONS(19),
    [anon_sym_cmovne] = ACTIONS(19),
    [anon_sym_cmovns] = ACTIONS(19),
    [anon_sym_cmovg] = ACTIONS(19),
    [anon_sym_cmovp] = ACTIONS(19),
    [anon_sym_cmove] = ACTIONS(19),
    [anon_sym_cmovge] = ACTIONS(19),
    [anon_sym_cmovb] = ACTIONS(19),
    [anon_sym_cmova] = ACTIONS(19),
    [anon_sym_cmovle] = ACTIONS(19),
    [anon_sym_cmovs] = ACTIONS(19),
    [anon_sym_cwtl] = ACTIONS(19),
    [anon_sym_cwtd] = ACTIONS(19),
    [anon_sym_cqto] = ACTIONS(19),
    [anon_sym_cvttsd2si] = ACTIONS(19),
    [anon_sym_cvtss2sd] = ACTIONS(19),
    [anon_sym_cvttss2si] = ACTIONS(19),
    [anon_sym_cvtsi2sd] = ACTIONS(19),
    [anon_sym_cvtsi2ss] = ACTIONS(19),
    [anon_sym_cvtsi2sdq] = ACTIONS(19),
    [anon_sym_cvtsi2sdl] = ACTIONS(19),
    [anon_sym_cvtsd2ss] = ACTIONS(19),
    [anon_sym_cvtsi2ssl] = ACTIONS(19),
    [anon_sym_mov] = ACTIONS(19),
    [anon_sym_movw] = ACTIONS(19),
    [anon_sym_movl] = ACTIONS(19),
    [anon_sym_movq] = ACTIONS(19),
    [anon_sym_movb] = ACTIONS(19),
    [anon_sym_movabs] = ACTIONS(19),
    [anon_sym_movsbw] = ACTIONS(19),
    [anon_sym_movsbq] = ACTIONS(19),
    [anon_sym_movsbl] = ACTIONS(19),
    [anon_sym_movswl] = ACTIONS(19),
    [anon_sym_movswq] = ACTIONS(19),
    [anon_sym_movzbw] = ACTIONS(19),
    [anon_sym_movzbq] = ACTIONS(19),
    [anon_sym_movzbl] = ACTIONS(19),
    [anon_sym_movzwl] = ACTIONS(19),
    [anon_sym_movaps] = ACTIONS(19),
    [anon_sym_movhlps] = ACTIONS(19),
    [anon_sym_movss] = ACTIONS(19),
    [anon_sym_movups] = ACTIONS(19),
    [anon_sym_movsd] = ACTIONS(19),
    [anon_sym_movd] = ACTIONS(19),
    [anon_sym_movhps] = ACTIONS(19),
    [anon_sym_movdqa] = ACTIONS(19),
    [anon_sym_movbe] = ACTIONS(19),
    [anon_sym_movapd] = ACTIONS(19),
    [anon_sym_movdqu] = ACTIONS(19),
    [anon_sym_xchg] = ACTIONS(19),
    [anon_sym_fildl] = ACTIONS(19),
    [anon_sym_fldt] = ACTIONS(19),
    [anon_sym_fstpl] = ACTIONS(19),
    [anon_sym_insb] = ACTIONS(21),
    [anon_sym_insl] = ACTIONS(21),
    [anon_sym_outsb] = ACTIONS(21),
    [anon_sym_outsl] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_orq] = ACTIONS(23),
    [anon_sym_orl] = ACTIONS(23),
    [anon_sym_orb] = ACTIONS(23),
    [anon_sym_orw] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_xorl] = ACTIONS(23),
    [anon_sym_xorw] = ACTIONS(23),
    [anon_sym_xorps] = ACTIONS(23),
    [anon_sym_xorpd] = ACTIONS(23),
    [anon_sym_vxorps] = ACTIONS(23),
    [anon_sym_vpxord] = ACTIONS(23),
    [anon_sym_vpxor] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_andq] = ACTIONS(23),
    [anon_sym_andl] = ACTIONS(23),
    [anon_sym_andw] = ACTIONS(23),
    [anon_sym_andb] = ACTIONS(23),
    [anon_sym_andn] = ACTIONS(23),
    [anon_sym_andpd] = ACTIONS(23),
    [anon_sym_pand] = ACTIONS(23),
    [anon_sym_pandn] = ACTIONS(23),
    [anon_sym_andps] = ACTIONS(23),
    [anon_sym_vpand] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_notl] = ACTIONS(23),
    [anon_sym_notw] = ACTIONS(23),
    [anon_sym_cpuid] = ACTIONS(25),
    [anon_sym_lea] = ACTIONS(25),
    [anon_sym_popcnt] = ACTIONS(25),
    [anon_sym_nop] = ACTIONS(25),
    [anon_sym_nopl] = ACTIONS(25),
    [anon_sym_nopw] = ACTIONS(25),
    [anon_sym_ud2] = ACTIONS(25),
    [anon_sym_data16] = ACTIONS(25),
    [anon_sym_sha1rnds4] = ACTIONS(25),
    [anon_sym_addr32] = ACTIONS(25),
    [anon_sym_sha1msg1] = ACTIONS(25),
    [anon_sym_sha1msg2] = ACTIONS(25),
    [anon_sym_sha1nexte] = ACTIONS(25),
    [anon_sym_endbr64] = ACTIONS(25),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(27),
    [anon_sym_packuswb] = ACTIONS(29),
    [anon_sym_punpckhbw] = ACTIONS(29),
    [anon_sym_punpckhdq] = ACTIONS(29),
    [anon_sym_punpckhwd] = ACTIONS(29),
    [anon_sym_punpcklbw] = ACTIONS(29),
    [anon_sym_punpckldq] = ACTIONS(29),
    [anon_sym_punpcklwd] = ACTIONS(29),
    [anon_sym_vpunpcklwd] = ACTIONS(29),
    [anon_sym_vpunpckldq] = ACTIONS(29),
    [anon_sym_punpcklqdq] = ACTIONS(29),
    [anon_sym_punpckhqdq] = ACTIONS(29),
    [anon_sym_vpunpckhqdq] = ACTIONS(29),
    [anon_sym_vpunpckhdq] = ACTIONS(29),
    [anon_sym_vpunpcklqdq] = ACTIONS(29),
    [anon_sym_vpunpckhwd] = ACTIONS(29),
    [anon_sym_rol] = ACTIONS(31),
    [anon_sym_ror] = ACTIONS(31),
    [anon_sym_sar] = ACTIONS(31),
    [anon_sym_sarl] = ACTIONS(31),
    [anon_sym_sarx] = ACTIONS(31),
    [anon_sym_shl] = ACTIONS(31),
    [anon_sym_shll] = ACTIONS(31),
    [anon_sym_shld] = ACTIONS(31),
    [anon_sym_shlx] = ACTIONS(31),
    [anon_sym_shlq] = ACTIONS(31),
    [anon_sym_shr] = ACTIONS(31),
    [anon_sym_shrq] = ACTIONS(31),
    [anon_sym_shrd] = ACTIONS(31),
    [anon_sym_shrl] = ACTIONS(31),
    [anon_sym_shrx] = ACTIONS(31),
    [anon_sym_vprord] = ACTIONS(31),
    [anon_sym_vprorq] = ACTIONS(31),
    [anon_sym_rorl] = ACTIONS(31),
    [anon_sym_roll] = ACTIONS(31),
    [anon_sym_push] = ACTIONS(33),
    [anon_sym_pushq] = ACTIONS(33),
    [anon_sym_pop] = ACTIONS(33),
    [anon_sym_movslq] = ACTIONS(35),
    [anon_sym_movsb] = ACTIONS(35),
    [anon_sym_rep] = ACTIONS(35),
    [anon_sym_repz] = ACTIONS(35),
    [anon_sym_repnz] = ACTIONS(35),
    [anon_sym_rex] = ACTIONS(37),
    [anon_sym_rex_DOTWB] = ACTIONS(37),
    [anon_sym_rex_DOTWRB] = ACTIONS(37),
    [anon_sym_rex_DOTRXB] = ACTIONS(37),
    [anon_sym_rex_DOTB] = ACTIONS(37),
    [anon_sym_rex_DOTWRXB] = ACTIONS(37),
    [anon_sym_rex_DOTXB] = ACTIONS(37),
    [anon_sym_rex_DOTW] = ACTIONS(37),
    [anon_sym_rex_DOTRB] = ACTIONS(37),
    [anon_sym_xgetbv] = ACTIONS(37),
    [anon_sym_fs] = ACTIONS(37),
    [anon_sym_kmovw] = ACTIONS(37),
    [anon_sym_adcx] = ACTIONS(39),
    [anon_sym_adox] = ACTIONS(39),
    [anon_sym_aesdec] = ACTIONS(39),
    [anon_sym_aesdeclast] = ACTIONS(39),
    [anon_sym_aesenc] = ACTIONS(39),
    [anon_sym_aesenclast] = ACTIONS(39),
    [anon_sym_vaesenc] = ACTIONS(39),
    [anon_sym_vaesenclast] = ACTIONS(39),
    [anon_sym_aeskeygenassist] = ACTIONS(39),
    [anon_sym_vblendps] = ACTIONS(39),
    [anon_sym_vblendvps] = ACTIONS(39),
    [anon_sym_vcvtusi2sd] = ACTIONS(39),
    [anon_sym_vdivsd] = ACTIONS(39),
    [anon_sym_vmovaps] = ACTIONS(39),
    [anon_sym_vmovapd] = ACTIONS(39),
    [anon_sym_vmovss] = ACTIONS(39),
    [anon_sym_vmovdqu] = ACTIONS(39),
    [anon_sym_vmovdqu64] = ACTIONS(39),
    [anon_sym_vmovdqu32] = ACTIONS(39),
    [anon_sym_vmovdqa] = ACTIONS(39),
    [anon_sym_vmovdqa32] = ACTIONS(39),
    [anon_sym_vmovdqa64] = ACTIONS(39),
    [anon_sym_vmovq] = ACTIONS(39),
    [anon_sym_vmovups] = ACTIONS(39),
    [anon_sym_vmovd] = ACTIONS(39),
    [anon_sym_vmovsd] = ACTIONS(39),
    [anon_sym_vmulsd] = ACTIONS(39),
    [anon_sym_vpackusdw] = ACTIONS(39),
    [anon_sym_vpaddd] = ACTIONS(39),
    [anon_sym_vpaddb] = ACTIONS(39),
    [anon_sym_vpaddq] = ACTIONS(39),
    [anon_sym_vpaddw] = ACTIONS(39),
    [anon_sym_vpalignr] = ACTIONS(39),
    [anon_sym_vpcmpgtd] = ACTIONS(39),
    [anon_sym_vpextrw] = ACTIONS(39),
    [anon_sym_vpinsrw] = ACTIONS(39),
    [anon_sym_vpinsrd] = ACTIONS(39),
    [anon_sym_vpinsrq] = ACTIONS(39),
    [anon_sym_vpinsrb] = ACTIONS(39),
    [anon_sym_vpmaddubsw] = ACTIONS(39),
    [anon_sym_vpmaddwd] = ACTIONS(39),
    [anon_sym_vpmullw] = ACTIONS(39),
    [anon_sym_vpmuludq] = ACTIONS(39),
    [anon_sym_vpor] = ACTIONS(39),
    [anon_sym_vpshufb] = ACTIONS(39),
    [anon_sym_vpshufd] = ACTIONS(39),
    [anon_sym_vpslldq] = ACTIONS(39),
    [anon_sym_vpslld] = ACTIONS(39),
    [anon_sym_vpsllq] = ACTIONS(39),
    [anon_sym_vpsllw] = ACTIONS(39),
    [anon_sym_vpsrldq] = ACTIONS(39),
    [anon_sym_vpsrld] = ACTIONS(39),
    [anon_sym_vpsrlq] = ACTIONS(39),
    [anon_sym_vpsrlw] = ACTIONS(39),
    [anon_sym_vpsubusw] = ACTIONS(39),
    [anon_sym_vpsubq] = ACTIONS(39),
    [anon_sym_vpsubd] = ACTIONS(39),
    [anon_sym_vpsubw] = ACTIONS(39),
    [anon_sym_vshufps] = ACTIONS(39),
    [anon_sym_vsubsd] = ACTIONS(39),
    [anon_sym_vucomisd] = ACTIONS(39),
    [anon_sym_vucomiss] = ACTIONS(39),
    [anon_sym_vunpckhpd] = ACTIONS(39),
    [anon_sym_vunpckhps] = ACTIONS(39),
    [anon_sym_vunpcklpd] = ACTIONS(39),
    [anon_sym_vunpcklps] = ACTIONS(39),
    [anon_sym_vbroadcastss] = ACTIONS(39),
    [anon_sym_vinsertf128] = ACTIONS(39),
    [anon_sym_vperm2f128] = ACTIONS(39),
    [anon_sym_vzeroall] = ACTIONS(39),
    [anon_sym_vzeroupper] = ACTIONS(39),
    [anon_sym_vshufi32x4] = ACTIONS(39),
    [anon_sym_vshufi64x2] = ACTIONS(39),
    [anon_sym_vpblendmd] = ACTIONS(39),
    [anon_sym_vextracti128] = ACTIONS(39),
    [anon_sym_vextracti32x4] = ACTIONS(39),
    [anon_sym_vinserti128] = ACTIONS(39),
    [anon_sym_vinserti32x4] = ACTIONS(39),
    [anon_sym_vinserti64x4] = ACTIONS(39),
    [anon_sym_vpblendd] = ACTIONS(39),
    [anon_sym_vpbroadcastq] = ACTIONS(39),
    [anon_sym_vpbroadcastd] = ACTIONS(39),
    [anon_sym_vbroadcasti128] = ACTIONS(39),
    [anon_sym_vbroadcasti32x4] = ACTIONS(39),
    [anon_sym_vperm2i128] = ACTIONS(39),
    [anon_sym_vpermd] = ACTIONS(39),
    [anon_sym_vpermq] = ACTIONS(39),
    [anon_sym_vpermt2d] = ACTIONS(39),
    [anon_sym_vpermi2d] = ACTIONS(39),
    [anon_sym_tzcnt] = ACTIONS(39),
    [anon_sym_rorx] = ACTIONS(39),
    [anon_sym_psubd] = ACTIONS(39),
    [anon_sym_pmaddwd] = ACTIONS(39),
    [anon_sym_pxor] = ACTIONS(39),
    [anon_sym_psrad] = ACTIONS(39),
    [anon_sym_pslld] = ACTIONS(39),
    [anon_sym_pcmpgtd] = ACTIONS(39),
    [anon_sym_pcmpeqd] = ACTIONS(39),
    [anon_sym_por] = ACTIONS(39),
    [anon_sym_paddw] = ACTIONS(39),
    [anon_sym_psubusw] = ACTIONS(39),
    [anon_sym_pcmpeqb] = ACTIONS(39),
    [anon_sym_psubusb] = ACTIONS(39),
    [anon_sym_psrld] = ACTIONS(39),
    [anon_sym_psrlw] = ACTIONS(39),
    [anon_sym_psllq] = ACTIONS(39),
    [anon_sym_paddd] = ACTIONS(39),
    [anon_sym_psrlq] = ACTIONS(39),
    [anon_sym_psubb] = ACTIONS(39),
    [anon_sym_maxss] = ACTIONS(39),
    [anon_sym_pmovmskb] = ACTIONS(39),
    [anon_sym_pinsrw] = ACTIONS(39),
    [anon_sym_minss] = ACTIONS(39),
    [anon_sym_prefetcht1] = ACTIONS(39),
    [anon_sym_prefetcht0] = ACTIONS(39),
    [anon_sym_pextrw] = ACTIONS(39),
    [anon_sym_ucomiss] = ACTIONS(39),
    [anon_sym_shufps] = ACTIONS(39),
    [anon_sym_addsd] = ACTIONS(39),
    [anon_sym_paddq] = ACTIONS(39),
    [anon_sym_psubq] = ACTIONS(39),
    [anon_sym_pshuflw] = ACTIONS(39),
    [anon_sym_pmuludq] = ACTIONS(39),
    [anon_sym_pshufd] = ACTIONS(39),
    [anon_sym_minsd] = ACTIONS(39),
    [anon_sym_pshufhw] = ACTIONS(39),
    [anon_sym_mfence] = ACTIONS(39),
    [anon_sym_maxsd] = ACTIONS(39),
    [anon_sym_ucomisd] = ACTIONS(39),
    [anon_sym_shufpd] = ACTIONS(39),
    [anon_sym_pslldq] = ACTIONS(39),
    [anon_sym_unpckhpd] = ACTIONS(39),
    [anon_sym_psrldq] = ACTIONS(39),
    [anon_sym_palignr] = ACTIONS(39),
    [anon_sym_pshufb] = ACTIONS(39),
    [anon_sym_pmaddubsw] = ACTIONS(39),
    [anon_sym_pinsrb] = ACTIONS(39),
    [anon_sym_pblendw] = ACTIONS(39),
    [anon_sym_pextrq] = ACTIONS(39),
    [anon_sym_blendvps] = ACTIONS(39),
    [anon_sym_pextrb] = ACTIONS(39),
    [anon_sym_pinsrd] = ACTIONS(39),
    [anon_sym_femms] = ACTIONS(39),
  },
  [2] = {
    [sym_comment] = STATE(266),
    [sym__address] = STATE(224),
    [sym__machine_code] = STATE(4),
    [sym__line] = STATE(3),
    [sym_instruction] = STATE(118),
    [sym_opcode] = STATE(12),
    [sym_BinaryArithmeticOpcode] = STATE(17),
    [sym_BitAndByteOpcode] = STATE(17),
    [sym_CuriousOpcode] = STATE(17),
    [sym_DataTransferOpcode] = STATE(17),
    [sym_IOOpcode] = STATE(17),
    [sym_LogicalOpcode] = STATE(17),
    [sym_MiscellaneousOpcode] = STATE(17),
    [sym_PackUnpackOpcode] = STATE(17),
    [sym_ShiftAndRotateOpcode] = STATE(17),
    [sym_StackOpcode] = STATE(17),
    [sym_StringOpcode] = STATE(17),
    [sym_AccessRegisterOpcode] = STATE(17),
    [sym_ToBeClassifiedOpcode] = STATE(17),
    [aux_sym_prog_repeat1] = STATE(3),
    [aux_sym__address_repeat1] = STATE(122),
    [aux_sym__address_repeat2] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym__line_break] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [aux_sym__address_token1] = ACTIONS(11),
    [anon_sym_adc] = ACTIONS(13),
    [anon_sym_add] = ACTIONS(13),
    [anon_sym_addq] = ACTIONS(13),
    [anon_sym_addl] = ACTIONS(13),
    [anon_sym_addss] = ACTIONS(13),
    [anon_sym_addw] = ACTIONS(13),
    [anon_sym_addb] = ACTIONS(13),
    [anon_sym_cmp] = ACTIONS(13),
    [anon_sym_cmpb] = ACTIONS(13),
    [anon_sym_cmpw] = ACTIONS(13),
    [anon_sym_cmpl] = ACTIONS(13),
    [anon_sym_cmpq] = ACTIONS(13),
    [anon_sym_comiss] = ACTIONS(13),
    [anon_sym_comisd] = ACTIONS(13),
    [anon_sym_inc] = ACTIONS(13),
    [anon_sym_incl] = ACTIONS(13),
    [anon_sym_dec] = ACTIONS(13),
    [anon_sym_div] = ACTIONS(13),
    [anon_sym_divq] = ACTIONS(13),
    [anon_sym_divl] = ACTIONS(13),
    [anon_sym_divss] = ACTIONS(13),
    [anon_sym_divsd] = ACTIONS(13),
    [anon_sym_idiv] = ACTIONS(13),
    [anon_sym_idivl] = ACTIONS(13),
    [anon_sym_sub] = ACTIONS(13),
    [anon_sym_subq] = ACTIONS(13),
    [anon_sym_subl] = ACTIONS(13),
    [anon_sym_subss] = ACTIONS(13),
    [anon_sym_subw] = ACTIONS(13),
    [anon_sym_subb] = ACTIONS(13),
    [anon_sym_subsd] = ACTIONS(13),
    [anon_sym_subpd] = ACTIONS(13),
    [anon_sym_sbb] = ACTIONS(13),
    [anon_sym_mul] = ACTIONS(13),
    [anon_sym_mulq] = ACTIONS(13),
    [anon_sym_mull] = ACTIONS(13),
    [anon_sym_mulss] = ACTIONS(13),
    [anon_sym_mulw] = ACTIONS(13),
    [anon_sym_mulb] = ACTIONS(13),
    [anon_sym_mulsd] = ACTIONS(13),
    [anon_sym_mulx] = ACTIONS(13),
    [anon_sym_imul] = ACTIONS(13),
    [anon_sym_neg] = ACTIONS(13),
    [anon_sym_negl] = ACTIONS(13),
    [anon_sym_negq] = ACTIONS(13),
    [anon_sym_fmulp] = ACTIONS(13),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(13),
    [anon_sym_pclmullqlqdq] = ACTIONS(13),
    [anon_sym_pclmullqhqdq] = ACTIONS(13),
    [anon_sym_vpclmullqhqdq] = ACTIONS(13),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(13),
    [anon_sym_pclmulhqhqdq] = ACTIONS(13),
    [anon_sym_vpclmullqlqdq] = ACTIONS(13),
    [anon_sym_bsf] = ACTIONS(15),
    [anon_sym_bsr] = ACTIONS(15),
    [anon_sym_bts] = ACTIONS(15),
    [anon_sym_bt] = ACTIONS(15),
    [anon_sym_btr] = ACTIONS(15),
    [anon_sym_btl] = ACTIONS(15),
    [anon_sym_setne] = ACTIONS(15),
    [anon_sym_setb] = ACTIONS(15),
    [anon_sym_sete] = ACTIONS(15),
    [anon_sym_setbe] = ACTIONS(15),
    [anon_sym_seta] = ACTIONS(15),
    [anon_sym_setge] = ACTIONS(15),
    [anon_sym_setae] = ACTIONS(15),
    [anon_sym_setl] = ACTIONS(15),
    [anon_sym_setle] = ACTIONS(15),
    [anon_sym_setg] = ACTIONS(15),
    [anon_sym_seto] = ACTIONS(15),
    [anon_sym_setnp] = ACTIONS(15),
    [anon_sym_setp] = ACTIONS(15),
    [anon_sym_setns] = ACTIONS(15),
    [anon_sym_test] = ACTIONS(15),
    [anon_sym_testb] = ACTIONS(15),
    [anon_sym_testl] = ACTIONS(15),
    [anon_sym_knotw] = ACTIONS(15),
    [anon_sym_vpcmpltud] = ACTIONS(17),
    [anon_sym_gs] = ACTIONS(17),
    [anon_sym_re] = ACTIONS(17),
    [anon_sym_ss] = ACTIONS(17),
    [anon_sym_leaveq] = ACTIONS(17),
    [anon_sym_retq] = ACTIONS(17),
    [anon_sym_bswap] = ACTIONS(19),
    [anon_sym_cbtw] = ACTIONS(19),
    [anon_sym_cltd] = ACTIONS(19),
    [anon_sym_cltq] = ACTIONS(19),
    [anon_sym_cmovbe] = ACTIONS(19),
    [anon_sym_cmovl] = ACTIONS(19),
    [anon_sym_cmovae] = ACTIONS(19),
    [anon_sym_cmovo] = ACTIONS(19),
    [anon_sym_cmovne] = ACTIONS(19),
    [anon_sym_cmovns] = ACTIONS(19),
    [anon_sym_cmovg] = ACTIONS(19),
    [anon_sym_cmovp] = ACTIONS(19),
    [anon_sym_cmove] = ACTIONS(19),
    [anon_sym_cmovge] = ACTIONS(19),
    [anon_sym_cmovb] = ACTIONS(19),
    [anon_sym_cmova] = ACTIONS(19),
    [anon_sym_cmovle] = ACTIONS(19),
    [anon_sym_cmovs] = ACTIONS(19),
    [anon_sym_cwtl] = ACTIONS(19),
    [anon_sym_cwtd] = ACTIONS(19),
    [anon_sym_cqto] = ACTIONS(19),
    [anon_sym_cvttsd2si] = ACTIONS(19),
    [anon_sym_cvtss2sd] = ACTIONS(19),
    [anon_sym_cvttss2si] = ACTIONS(19),
    [anon_sym_cvtsi2sd] = ACTIONS(19),
    [anon_sym_cvtsi2ss] = ACTIONS(19),
    [anon_sym_cvtsi2sdq] = ACTIONS(19),
    [anon_sym_cvtsi2sdl] = ACTIONS(19),
    [anon_sym_cvtsd2ss] = ACTIONS(19),
    [anon_sym_cvtsi2ssl] = ACTIONS(19),
    [anon_sym_mov] = ACTIONS(19),
    [anon_sym_movw] = ACTIONS(19),
    [anon_sym_movl] = ACTIONS(19),
    [anon_sym_movq] = ACTIONS(19),
    [anon_sym_movb] = ACTIONS(19),
    [anon_sym_movabs] = ACTIONS(19),
    [anon_sym_movsbw] = ACTIONS(19),
    [anon_sym_movsbq] = ACTIONS(19),
    [anon_sym_movsbl] = ACTIONS(19),
    [anon_sym_movswl] = ACTIONS(19),
    [anon_sym_movswq] = ACTIONS(19),
    [anon_sym_movzbw] = ACTIONS(19),
    [anon_sym_movzbq] = ACTIONS(19),
    [anon_sym_movzbl] = ACTIONS(19),
    [anon_sym_movzwl] = ACTIONS(19),
    [anon_sym_movaps] = ACTIONS(19),
    [anon_sym_movhlps] = ACTIONS(19),
    [anon_sym_movss] = ACTIONS(19),
    [anon_sym_movups] = ACTIONS(19),
    [anon_sym_movsd] = ACTIONS(19),
    [anon_sym_movd] = ACTIONS(19),
    [anon_sym_movhps] = ACTIONS(19),
    [anon_sym_movdqa] = ACTIONS(19),
    [anon_sym_movbe] = ACTIONS(19),
    [anon_sym_movapd] = ACTIONS(19),
    [anon_sym_movdqu] = ACTIONS(19),
    [anon_sym_xchg] = ACTIONS(19),
    [anon_sym_fildl] = ACTIONS(19),
    [anon_sym_fldt] = ACTIONS(19),
    [anon_sym_fstpl] = ACTIONS(19),
    [anon_sym_insb] = ACTIONS(21),
    [anon_sym_insl] = ACTIONS(21),
    [anon_sym_outsb] = ACTIONS(21),
    [anon_sym_outsl] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_orq] = ACTIONS(23),
    [anon_sym_orl] = ACTIONS(23),
    [anon_sym_orb] = ACTIONS(23),
    [anon_sym_orw] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_xorl] = ACTIONS(23),
    [anon_sym_xorw] = ACTIONS(23),
    [anon_sym_xorps] = ACTIONS(23),
    [anon_sym_xorpd] = ACTIONS(23),
    [anon_sym_vxorps] = ACTIONS(23),
    [anon_sym_vpxord] = ACTIONS(23),
    [anon_sym_vpxor] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_andq] = ACTIONS(23),
    [anon_sym_andl] = ACTIONS(23),
    [anon_sym_andw] = ACTIONS(23),
    [anon_sym_andb] = ACTIONS(23),
    [anon_sym_andn] = ACTIONS(23),
    [anon_sym_andpd] = ACTIONS(23),
    [anon_sym_pand] = ACTIONS(23),
    [anon_sym_pandn] = ACTIONS(23),
    [anon_sym_andps] = ACTIONS(23),
    [anon_sym_vpand] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_notl] = ACTIONS(23),
    [anon_sym_notw] = ACTIONS(23),
    [anon_sym_cpuid] = ACTIONS(25),
    [anon_sym_lea] = ACTIONS(25),
    [anon_sym_popcnt] = ACTIONS(25),
    [anon_sym_nop] = ACTIONS(25),
    [anon_sym_nopl] = ACTIONS(25),
    [anon_sym_nopw] = ACTIONS(25),
    [anon_sym_ud2] = ACTIONS(25),
    [anon_sym_data16] = ACTIONS(25),
    [anon_sym_sha1rnds4] = ACTIONS(25),
    [anon_sym_addr32] = ACTIONS(25),
    [anon_sym_sha1msg1] = ACTIONS(25),
    [anon_sym_sha1msg2] = ACTIONS(25),
    [anon_sym_sha1nexte] = ACTIONS(25),
    [anon_sym_endbr64] = ACTIONS(25),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(27),
    [anon_sym_packuswb] = ACTIONS(29),
    [anon_sym_punpckhbw] = ACTIONS(29),
    [anon_sym_punpckhdq] = ACTIONS(29),
    [anon_sym_punpckhwd] = ACTIONS(29),
    [anon_sym_punpcklbw] = ACTIONS(29),
    [anon_sym_punpckldq] = ACTIONS(29),
    [anon_sym_punpcklwd] = ACTIONS(29),
    [anon_sym_vpunpcklwd] = ACTIONS(29),
    [anon_sym_vpunpckldq] = ACTIONS(29),
    [anon_sym_punpcklqdq] = ACTIONS(29),
    [anon_sym_punpckhqdq] = ACTIONS(29),
    [anon_sym_vpunpckhqdq] = ACTIONS(29),
    [anon_sym_vpunpckhdq] = ACTIONS(29),
    [anon_sym_vpunpcklqdq] = ACTIONS(29),
    [anon_sym_vpunpckhwd] = ACTIONS(29),
    [anon_sym_rol] = ACTIONS(31),
    [anon_sym_ror] = ACTIONS(31),
    [anon_sym_sar] = ACTIONS(31),
    [anon_sym_sarl] = ACTIONS(31),
    [anon_sym_sarx] = ACTIONS(31),
    [anon_sym_shl] = ACTIONS(31),
    [anon_sym_shll] = ACTIONS(31),
    [anon_sym_shld] = ACTIONS(31),
    [anon_sym_shlx] = ACTIONS(31),
    [anon_sym_shlq] = ACTIONS(31),
    [anon_sym_shr] = ACTIONS(31),
    [anon_sym_shrq] = ACTIONS(31),
    [anon_sym_shrd] = ACTIONS(31),
    [anon_sym_shrl] = ACTIONS(31),
    [anon_sym_shrx] = ACTIONS(31),
    [anon_sym_vprord] = ACTIONS(31),
    [anon_sym_vprorq] = ACTIONS(31),
    [anon_sym_rorl] = ACTIONS(31),
    [anon_sym_roll] = ACTIONS(31),
    [anon_sym_push] = ACTIONS(33),
    [anon_sym_pushq] = ACTIONS(33),
    [anon_sym_pop] = ACTIONS(33),
    [anon_sym_movslq] = ACTIONS(35),
    [anon_sym_movsb] = ACTIONS(35),
    [anon_sym_rep] = ACTIONS(35),
    [anon_sym_repz] = ACTIONS(35),
    [anon_sym_repnz] = ACTIONS(35),
    [anon_sym_rex] = ACTIONS(37),
    [anon_sym_rex_DOTWB] = ACTIONS(37),
    [anon_sym_rex_DOTWRB] = ACTIONS(37),
    [anon_sym_rex_DOTRXB] = ACTIONS(37),
    [anon_sym_rex_DOTB] = ACTIONS(37),
    [anon_sym_rex_DOTWRXB] = ACTIONS(37),
    [anon_sym_rex_DOTXB] = ACTIONS(37),
    [anon_sym_rex_DOTW] = ACTIONS(37),
    [anon_sym_rex_DOTRB] = ACTIONS(37),
    [anon_sym_xgetbv] = ACTIONS(37),
    [anon_sym_fs] = ACTIONS(37),
    [anon_sym_kmovw] = ACTIONS(37),
    [anon_sym_adcx] = ACTIONS(39),
    [anon_sym_adox] = ACTIONS(39),
    [anon_sym_aesdec] = ACTIONS(39),
    [anon_sym_aesdeclast] = ACTIONS(39),
    [anon_sym_aesenc] = ACTIONS(39),
    [anon_sym_aesenclast] = ACTIONS(39),
    [anon_sym_vaesenc] = ACTIONS(39),
    [anon_sym_vaesenclast] = ACTIONS(39),
    [anon_sym_aeskeygenassist] = ACTIONS(39),
    [anon_sym_vblendps] = ACTIONS(39),
    [anon_sym_vblendvps] = ACTIONS(39),
    [anon_sym_vcvtusi2sd] = ACTIONS(39),
    [anon_sym_vdivsd] = ACTIONS(39),
    [anon_sym_vmovaps] = ACTIONS(39),
    [anon_sym_vmovapd] = ACTIONS(39),
    [anon_sym_vmovss] = ACTIONS(39),
    [anon_sym_vmovdqu] = ACTIONS(39),
    [anon_sym_vmovdqu64] = ACTIONS(39),
    [anon_sym_vmovdqu32] = ACTIONS(39),
    [anon_sym_vmovdqa] = ACTIONS(39),
    [anon_sym_vmovdqa32] = ACTIONS(39),
    [anon_sym_vmovdqa64] = ACTIONS(39),
    [anon_sym_vmovq] = ACTIONS(39),
    [anon_sym_vmovups] = ACTIONS(39),
    [anon_sym_vmovd] = ACTIONS(39),
    [anon_sym_vmovsd] = ACTIONS(39),
    [anon_sym_vmulsd] = ACTIONS(39),
    [anon_sym_vpackusdw] = ACTIONS(39),
    [anon_sym_vpaddd] = ACTIONS(39),
    [anon_sym_vpaddb] = ACTIONS(39),
    [anon_sym_vpaddq] = ACTIONS(39),
    [anon_sym_vpaddw] = ACTIONS(39),
    [anon_sym_vpalignr] = ACTIONS(39),
    [anon_sym_vpcmpgtd] = ACTIONS(39),
    [anon_sym_vpextrw] = ACTIONS(39),
    [anon_sym_vpinsrw] = ACTIONS(39),
    [anon_sym_vpinsrd] = ACTIONS(39),
    [anon_sym_vpinsrq] = ACTIONS(39),
    [anon_sym_vpinsrb] = ACTIONS(39),
    [anon_sym_vpmaddubsw] = ACTIONS(39),
    [anon_sym_vpmaddwd] = ACTIONS(39),
    [anon_sym_vpmullw] = ACTIONS(39),
    [anon_sym_vpmuludq] = ACTIONS(39),
    [anon_sym_vpor] = ACTIONS(39),
    [anon_sym_vpshufb] = ACTIONS(39),
    [anon_sym_vpshufd] = ACTIONS(39),
    [anon_sym_vpslldq] = ACTIONS(39),
    [anon_sym_vpslld] = ACTIONS(39),
    [anon_sym_vpsllq] = ACTIONS(39),
    [anon_sym_vpsllw] = ACTIONS(39),
    [anon_sym_vpsrldq] = ACTIONS(39),
    [anon_sym_vpsrld] = ACTIONS(39),
    [anon_sym_vpsrlq] = ACTIONS(39),
    [anon_sym_vpsrlw] = ACTIONS(39),
    [anon_sym_vpsubusw] = ACTIONS(39),
    [anon_sym_vpsubq] = ACTIONS(39),
    [anon_sym_vpsubd] = ACTIONS(39),
    [anon_sym_vpsubw] = ACTIONS(39),
    [anon_sym_vshufps] = ACTIONS(39),
    [anon_sym_vsubsd] = ACTIONS(39),
    [anon_sym_vucomisd] = ACTIONS(39),
    [anon_sym_vucomiss] = ACTIONS(39),
    [anon_sym_vunpckhpd] = ACTIONS(39),
    [anon_sym_vunpckhps] = ACTIONS(39),
    [anon_sym_vunpcklpd] = ACTIONS(39),
    [anon_sym_vunpcklps] = ACTIONS(39),
    [anon_sym_vbroadcastss] = ACTIONS(39),
    [anon_sym_vinsertf128] = ACTIONS(39),
    [anon_sym_vperm2f128] = ACTIONS(39),
    [anon_sym_vzeroall] = ACTIONS(39),
    [anon_sym_vzeroupper] = ACTIONS(39),
    [anon_sym_vshufi32x4] = ACTIONS(39),
    [anon_sym_vshufi64x2] = ACTIONS(39),
    [anon_sym_vpblendmd] = ACTIONS(39),
    [anon_sym_vextracti128] = ACTIONS(39),
    [anon_sym_vextracti32x4] = ACTIONS(39),
    [anon_sym_vinserti128] = ACTIONS(39),
    [anon_sym_vinserti32x4] = ACTIONS(39),
    [anon_sym_vinserti64x4] = ACTIONS(39),
    [anon_sym_vpblendd] = ACTIONS(39),
    [anon_sym_vpbroadcastq] = ACTIONS(39),
    [anon_sym_vpbroadcastd] = ACTIONS(39),
    [anon_sym_vbroadcasti128] = ACTIONS(39),
    [anon_sym_vbroadcasti32x4] = ACTIONS(39),
    [anon_sym_vperm2i128] = ACTIONS(39),
    [anon_sym_vpermd] = ACTIONS(39),
    [anon_sym_vpermq] = ACTIONS(39),
    [anon_sym_vpermt2d] = ACTIONS(39),
    [anon_sym_vpermi2d] = ACTIONS(39),
    [anon_sym_tzcnt] = ACTIONS(39),
    [anon_sym_rorx] = ACTIONS(39),
    [anon_sym_psubd] = ACTIONS(39),
    [anon_sym_pmaddwd] = ACTIONS(39),
    [anon_sym_pxor] = ACTIONS(39),
    [anon_sym_psrad] = ACTIONS(39),
    [anon_sym_pslld] = ACTIONS(39),
    [anon_sym_pcmpgtd] = ACTIONS(39),
    [anon_sym_pcmpeqd] = ACTIONS(39),
    [anon_sym_por] = ACTIONS(39),
    [anon_sym_paddw] = ACTIONS(39),
    [anon_sym_psubusw] = ACTIONS(39),
    [anon_sym_pcmpeqb] = ACTIONS(39),
    [anon_sym_psubusb] = ACTIONS(39),
    [anon_sym_psrld] = ACTIONS(39),
    [anon_sym_psrlw] = ACTIONS(39),
    [anon_sym_psllq] = ACTIONS(39),
    [anon_sym_paddd] = ACTIONS(39),
    [anon_sym_psrlq] = ACTIONS(39),
    [anon_sym_psubb] = ACTIONS(39),
    [anon_sym_maxss] = ACTIONS(39),
    [anon_sym_pmovmskb] = ACTIONS(39),
    [anon_sym_pinsrw] = ACTIONS(39),
    [anon_sym_minss] = ACTIONS(39),
    [anon_sym_prefetcht1] = ACTIONS(39),
    [anon_sym_prefetcht0] = ACTIONS(39),
    [anon_sym_pextrw] = ACTIONS(39),
    [anon_sym_ucomiss] = ACTIONS(39),
    [anon_sym_shufps] = ACTIONS(39),
    [anon_sym_addsd] = ACTIONS(39),
    [anon_sym_paddq] = ACTIONS(39),
    [anon_sym_psubq] = ACTIONS(39),
    [anon_sym_pshuflw] = ACTIONS(39),
    [anon_sym_pmuludq] = ACTIONS(39),
    [anon_sym_pshufd] = ACTIONS(39),
    [anon_sym_minsd] = ACTIONS(39),
    [anon_sym_pshufhw] = ACTIONS(39),
    [anon_sym_mfence] = ACTIONS(39),
    [anon_sym_maxsd] = ACTIONS(39),
    [anon_sym_ucomisd] = ACTIONS(39),
    [anon_sym_shufpd] = ACTIONS(39),
    [anon_sym_pslldq] = ACTIONS(39),
    [anon_sym_unpckhpd] = ACTIONS(39),
    [anon_sym_psrldq] = ACTIONS(39),
    [anon_sym_palignr] = ACTIONS(39),
    [anon_sym_pshufb] = ACTIONS(39),
    [anon_sym_pmaddubsw] = ACTIONS(39),
    [anon_sym_pinsrb] = ACTIONS(39),
    [anon_sym_pblendw] = ACTIONS(39),
    [anon_sym_pextrq] = ACTIONS(39),
    [anon_sym_blendvps] = ACTIONS(39),
    [anon_sym_pextrb] = ACTIONS(39),
    [anon_sym_pinsrd] = ACTIONS(39),
    [anon_sym_femms] = ACTIONS(39),
  },
  [3] = {
    [sym_comment] = STATE(266),
    [sym__address] = STATE(224),
    [sym__machine_code] = STATE(4),
    [sym__line] = STATE(3),
    [sym_instruction] = STATE(118),
    [sym_opcode] = STATE(12),
    [sym_BinaryArithmeticOpcode] = STATE(17),
    [sym_BitAndByteOpcode] = STATE(17),
    [sym_CuriousOpcode] = STATE(17),
    [sym_DataTransferOpcode] = STATE(17),
    [sym_IOOpcode] = STATE(17),
    [sym_LogicalOpcode] = STATE(17),
    [sym_MiscellaneousOpcode] = STATE(17),
    [sym_PackUnpackOpcode] = STATE(17),
    [sym_ShiftAndRotateOpcode] = STATE(17),
    [sym_StackOpcode] = STATE(17),
    [sym_StringOpcode] = STATE(17),
    [sym_AccessRegisterOpcode] = STATE(17),
    [sym_ToBeClassifiedOpcode] = STATE(17),
    [aux_sym_prog_repeat1] = STATE(3),
    [aux_sym__address_repeat1] = STATE(122),
    [aux_sym__address_repeat2] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym__line_break] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(50),
    [aux_sym_comment_token2] = ACTIONS(50),
    [anon_sym_] = ACTIONS(53),
    [aux_sym__address_token1] = ACTIONS(56),
    [anon_sym_adc] = ACTIONS(59),
    [anon_sym_add] = ACTIONS(59),
    [anon_sym_addq] = ACTIONS(59),
    [anon_sym_addl] = ACTIONS(59),
    [anon_sym_addss] = ACTIONS(59),
    [anon_sym_addw] = ACTIONS(59),
    [anon_sym_addb] = ACTIONS(59),
    [anon_sym_cmp] = ACTIONS(59),
    [anon_sym_cmpb] = ACTIONS(59),
    [anon_sym_cmpw] = ACTIONS(59),
    [anon_sym_cmpl] = ACTIONS(59),
    [anon_sym_cmpq] = ACTIONS(59),
    [anon_sym_comiss] = ACTIONS(59),
    [anon_sym_comisd] = ACTIONS(59),
    [anon_sym_inc] = ACTIONS(59),
    [anon_sym_incl] = ACTIONS(59),
    [anon_sym_dec] = ACTIONS(59),
    [anon_sym_div] = ACTIONS(59),
    [anon_sym_divq] = ACTIONS(59),
    [anon_sym_divl] = ACTIONS(59),
    [anon_sym_divss] = ACTIONS(59),
    [anon_sym_divsd] = ACTIONS(59),
    [anon_sym_idiv] = ACTIONS(59),
    [anon_sym_idivl] = ACTIONS(59),
    [anon_sym_sub] = ACTIONS(59),
    [anon_sym_subq] = ACTIONS(59),
    [anon_sym_subl] = ACTIONS(59),
    [anon_sym_subss] = ACTIONS(59),
    [anon_sym_subw] = ACTIONS(59),
    [anon_sym_subb] = ACTIONS(59),
    [anon_sym_subsd] = ACTIONS(59),
    [anon_sym_subpd] = ACTIONS(59),
    [anon_sym_sbb] = ACTIONS(59),
    [anon_sym_mul] = ACTIONS(59),
    [anon_sym_mulq] = ACTIONS(59),
    [anon_sym_mull] = ACTIONS(59),
    [anon_sym_mulss] = ACTIONS(59),
    [anon_sym_mulw] = ACTIONS(59),
    [anon_sym_mulb] = ACTIONS(59),
    [anon_sym_mulsd] = ACTIONS(59),
    [anon_sym_mulx] = ACTIONS(59),
    [anon_sym_imul] = ACTIONS(59),
    [anon_sym_neg] = ACTIONS(59),
    [anon_sym_negl] = ACTIONS(59),
    [anon_sym_negq] = ACTIONS(59),
    [anon_sym_fmulp] = ACTIONS(59),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(59),
    [anon_sym_pclmullqlqdq] = ACTIONS(59),
    [anon_sym_pclmullqhqdq] = ACTIONS(59),
    [anon_sym_vpclmullqhqdq] = ACTIONS(59),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(59),
    [anon_sym_pclmulhqhqdq] = ACTIONS(59),
    [anon_sym_vpclmullqlqdq] = ACTIONS(59),
    [anon_sym_bsf] = ACTIONS(62),
    [anon_sym_bsr] = ACTIONS(62),
    [anon_sym_bts] = ACTIONS(62),
    [anon_sym_bt] = ACTIONS(62),
    [anon_sym_btr] = ACTIONS(62),
    [anon_sym_btl] = ACTIONS(62),
    [anon_sym_setne] = ACTIONS(62),
    [anon_sym_setb] = ACTIONS(62),
    [anon_sym_sete] = ACTIONS(62),
    [anon_sym_setbe] = ACTIONS(62),
    [anon_sym_seta] = ACTIONS(62),
    [anon_sym_setge] = ACTIONS(62),
    [anon_sym_setae] = ACTIONS(62),
    [anon_sym_setl] = ACTIONS(62),
    [anon_sym_setle] = ACTIONS(62),
    [anon_sym_setg] = ACTIONS(62),
    [anon_sym_seto] = ACTIONS(62),
    [anon_sym_setnp] = ACTIONS(62),
    [anon_sym_setp] = ACTIONS(62),
    [anon_sym_setns] = ACTIONS(62),
    [anon_sym_test] = ACTIONS(62),
    [anon_sym_testb] = ACTIONS(62),
    [anon_sym_testl] = ACTIONS(62),
    [anon_sym_knotw] = ACTIONS(62),
    [anon_sym_vpcmpltud] = ACTIONS(65),
    [anon_sym_gs] = ACTIONS(65),
    [anon_sym_re] = ACTIONS(65),
    [anon_sym_ss] = ACTIONS(65),
    [anon_sym_leaveq] = ACTIONS(65),
    [anon_sym_retq] = ACTIONS(65),
    [anon_sym_bswap] = ACTIONS(68),
    [anon_sym_cbtw] = ACTIONS(68),
    [anon_sym_cltd] = ACTIONS(68),
    [anon_sym_cltq] = ACTIONS(68),
    [anon_sym_cmovbe] = ACTIONS(68),
    [anon_sym_cmovl] = ACTIONS(68),
    [anon_sym_cmovae] = ACTIONS(68),
    [anon_sym_cmovo] = ACTIONS(68),
    [anon_sym_cmovne] = ACTIONS(68),
    [anon_sym_cmovns] = ACTIONS(68),
    [anon_sym_cmovg] = ACTIONS(68),
    [anon_sym_cmovp] = ACTIONS(68),
    [anon_sym_cmove] = ACTIONS(68),
    [anon_sym_cmovge] = ACTIONS(68),
    [anon_sym_cmovb] = ACTIONS(68),
    [anon_sym_cmova] = ACTIONS(68),
    [anon_sym_cmovle] = ACTIONS(68),
    [anon_sym_cmovs] = ACTIONS(68),
    [anon_sym_cwtl] = ACTIONS(68),
    [anon_sym_cwtd] = ACTIONS(68),
    [anon_sym_cqto] = ACTIONS(68),
    [anon_sym_cvttsd2si] = ACTIONS(68),
    [anon_sym_cvtss2sd] = ACTIONS(68),
    [anon_sym_cvttss2si] = ACTIONS(68),
    [anon_sym_cvtsi2sd] = ACTIONS(68),
    [anon_sym_cvtsi2ss] = ACTIONS(68),
    [anon_sym_cvtsi2sdq] = ACTIONS(68),
    [anon_sym_cvtsi2sdl] = ACTIONS(68),
    [anon_sym_cvtsd2ss] = ACTIONS(68),
    [anon_sym_cvtsi2ssl] = ACTIONS(68),
    [anon_sym_mov] = ACTIONS(68),
    [anon_sym_movw] = ACTIONS(68),
    [anon_sym_movl] = ACTIONS(68),
    [anon_sym_movq] = ACTIONS(68),
    [anon_sym_movb] = ACTIONS(68),
    [anon_sym_movabs] = ACTIONS(68),
    [anon_sym_movsbw] = ACTIONS(68),
    [anon_sym_movsbq] = ACTIONS(68),
    [anon_sym_movsbl] = ACTIONS(68),
    [anon_sym_movswl] = ACTIONS(68),
    [anon_sym_movswq] = ACTIONS(68),
    [anon_sym_movzbw] = ACTIONS(68),
    [anon_sym_movzbq] = ACTIONS(68),
    [anon_sym_movzbl] = ACTIONS(68),
    [anon_sym_movzwl] = ACTIONS(68),
    [anon_sym_movaps] = ACTIONS(68),
    [anon_sym_movhlps] = ACTIONS(68),
    [anon_sym_movss] = ACTIONS(68),
    [anon_sym_movups] = ACTIONS(68),
    [anon_sym_movsd] = ACTIONS(68),
    [anon_sym_movd] = ACTIONS(68),
    [anon_sym_movhps] = ACTIONS(68),
    [anon_sym_movdqa] = ACTIONS(68),
    [anon_sym_movbe] = ACTIONS(68),
    [anon_sym_movapd] = ACTIONS(68),
    [anon_sym_movdqu] = ACTIONS(68),
    [anon_sym_xchg] = ACTIONS(68),
    [anon_sym_fildl] = ACTIONS(68),
    [anon_sym_fldt] = ACTIONS(68),
    [anon_sym_fstpl] = ACTIONS(68),
    [anon_sym_insb] = ACTIONS(71),
    [anon_sym_insl] = ACTIONS(71),
    [anon_sym_outsb] = ACTIONS(71),
    [anon_sym_outsl] = ACTIONS(71),
    [anon_sym_or] = ACTIONS(74),
    [anon_sym_orq] = ACTIONS(74),
    [anon_sym_orl] = ACTIONS(74),
    [anon_sym_orb] = ACTIONS(74),
    [anon_sym_orw] = ACTIONS(74),
    [anon_sym_xor] = ACTIONS(74),
    [anon_sym_xorl] = ACTIONS(74),
    [anon_sym_xorw] = ACTIONS(74),
    [anon_sym_xorps] = ACTIONS(74),
    [anon_sym_xorpd] = ACTIONS(74),
    [anon_sym_vxorps] = ACTIONS(74),
    [anon_sym_vpxord] = ACTIONS(74),
    [anon_sym_vpxor] = ACTIONS(74),
    [anon_sym_and] = ACTIONS(74),
    [anon_sym_andq] = ACTIONS(74),
    [anon_sym_andl] = ACTIONS(74),
    [anon_sym_andw] = ACTIONS(74),
    [anon_sym_andb] = ACTIONS(74),
    [anon_sym_andn] = ACTIONS(74),
    [anon_sym_andpd] = ACTIONS(74),
    [anon_sym_pand] = ACTIONS(74),
    [anon_sym_pandn] = ACTIONS(74),
    [anon_sym_andps] = ACTIONS(74),
    [anon_sym_vpand] = ACTIONS(74),
    [anon_sym_not] = ACTIONS(74),
    [anon_sym_notl] = ACTIONS(74),
    [anon_sym_notw] = ACTIONS(74),
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
    [sym_OperatingSystemSupportOpcode] = ACTIONS(80),
    [anon_sym_packuswb] = ACTIONS(83),
    [anon_sym_punpckhbw] = ACTIONS(83),
    [anon_sym_punpckhdq] = ACTIONS(83),
    [anon_sym_punpckhwd] = ACTIONS(83),
    [anon_sym_punpcklbw] = ACTIONS(83),
    [anon_sym_punpckldq] = ACTIONS(83),
    [anon_sym_punpcklwd] = ACTIONS(83),
    [anon_sym_vpunpcklwd] = ACTIONS(83),
    [anon_sym_vpunpckldq] = ACTIONS(83),
    [anon_sym_punpcklqdq] = ACTIONS(83),
    [anon_sym_punpckhqdq] = ACTIONS(83),
    [anon_sym_vpunpckhqdq] = ACTIONS(83),
    [anon_sym_vpunpckhdq] = ACTIONS(83),
    [anon_sym_vpunpcklqdq] = ACTIONS(83),
    [anon_sym_vpunpckhwd] = ACTIONS(83),
    [anon_sym_rol] = ACTIONS(86),
    [anon_sym_ror] = ACTIONS(86),
    [anon_sym_sar] = ACTIONS(86),
    [anon_sym_sarl] = ACTIONS(86),
    [anon_sym_sarx] = ACTIONS(86),
    [anon_sym_shl] = ACTIONS(86),
    [anon_sym_shll] = ACTIONS(86),
    [anon_sym_shld] = ACTIONS(86),
    [anon_sym_shlx] = ACTIONS(86),
    [anon_sym_shlq] = ACTIONS(86),
    [anon_sym_shr] = ACTIONS(86),
    [anon_sym_shrq] = ACTIONS(86),
    [anon_sym_shrd] = ACTIONS(86),
    [anon_sym_shrl] = ACTIONS(86),
    [anon_sym_shrx] = ACTIONS(86),
    [anon_sym_vprord] = ACTIONS(86),
    [anon_sym_vprorq] = ACTIONS(86),
    [anon_sym_rorl] = ACTIONS(86),
    [anon_sym_roll] = ACTIONS(86),
    [anon_sym_push] = ACTIONS(89),
    [anon_sym_pushq] = ACTIONS(89),
    [anon_sym_pop] = ACTIONS(89),
    [anon_sym_movslq] = ACTIONS(92),
    [anon_sym_movsb] = ACTIONS(92),
    [anon_sym_rep] = ACTIONS(92),
    [anon_sym_repz] = ACTIONS(92),
    [anon_sym_repnz] = ACTIONS(92),
    [anon_sym_rex] = ACTIONS(95),
    [anon_sym_rex_DOTWB] = ACTIONS(95),
    [anon_sym_rex_DOTWRB] = ACTIONS(95),
    [anon_sym_rex_DOTRXB] = ACTIONS(95),
    [anon_sym_rex_DOTB] = ACTIONS(95),
    [anon_sym_rex_DOTWRXB] = ACTIONS(95),
    [anon_sym_rex_DOTXB] = ACTIONS(95),
    [anon_sym_rex_DOTW] = ACTIONS(95),
    [anon_sym_rex_DOTRB] = ACTIONS(95),
    [anon_sym_xgetbv] = ACTIONS(95),
    [anon_sym_fs] = ACTIONS(95),
    [anon_sym_kmovw] = ACTIONS(95),
    [anon_sym_adcx] = ACTIONS(98),
    [anon_sym_adox] = ACTIONS(98),
    [anon_sym_aesdec] = ACTIONS(98),
    [anon_sym_aesdeclast] = ACTIONS(98),
    [anon_sym_aesenc] = ACTIONS(98),
    [anon_sym_aesenclast] = ACTIONS(98),
    [anon_sym_vaesenc] = ACTIONS(98),
    [anon_sym_vaesenclast] = ACTIONS(98),
    [anon_sym_aeskeygenassist] = ACTIONS(98),
    [anon_sym_vblendps] = ACTIONS(98),
    [anon_sym_vblendvps] = ACTIONS(98),
    [anon_sym_vcvtusi2sd] = ACTIONS(98),
    [anon_sym_vdivsd] = ACTIONS(98),
    [anon_sym_vmovaps] = ACTIONS(98),
    [anon_sym_vmovapd] = ACTIONS(98),
    [anon_sym_vmovss] = ACTIONS(98),
    [anon_sym_vmovdqu] = ACTIONS(98),
    [anon_sym_vmovdqu64] = ACTIONS(98),
    [anon_sym_vmovdqu32] = ACTIONS(98),
    [anon_sym_vmovdqa] = ACTIONS(98),
    [anon_sym_vmovdqa32] = ACTIONS(98),
    [anon_sym_vmovdqa64] = ACTIONS(98),
    [anon_sym_vmovq] = ACTIONS(98),
    [anon_sym_vmovups] = ACTIONS(98),
    [anon_sym_vmovd] = ACTIONS(98),
    [anon_sym_vmovsd] = ACTIONS(98),
    [anon_sym_vmulsd] = ACTIONS(98),
    [anon_sym_vpackusdw] = ACTIONS(98),
    [anon_sym_vpaddd] = ACTIONS(98),
    [anon_sym_vpaddb] = ACTIONS(98),
    [anon_sym_vpaddq] = ACTIONS(98),
    [anon_sym_vpaddw] = ACTIONS(98),
    [anon_sym_vpalignr] = ACTIONS(98),
    [anon_sym_vpcmpgtd] = ACTIONS(98),
    [anon_sym_vpextrw] = ACTIONS(98),
    [anon_sym_vpinsrw] = ACTIONS(98),
    [anon_sym_vpinsrd] = ACTIONS(98),
    [anon_sym_vpinsrq] = ACTIONS(98),
    [anon_sym_vpinsrb] = ACTIONS(98),
    [anon_sym_vpmaddubsw] = ACTIONS(98),
    [anon_sym_vpmaddwd] = ACTIONS(98),
    [anon_sym_vpmullw] = ACTIONS(98),
    [anon_sym_vpmuludq] = ACTIONS(98),
    [anon_sym_vpor] = ACTIONS(98),
    [anon_sym_vpshufb] = ACTIONS(98),
    [anon_sym_vpshufd] = ACTIONS(98),
    [anon_sym_vpslldq] = ACTIONS(98),
    [anon_sym_vpslld] = ACTIONS(98),
    [anon_sym_vpsllq] = ACTIONS(98),
    [anon_sym_vpsllw] = ACTIONS(98),
    [anon_sym_vpsrldq] = ACTIONS(98),
    [anon_sym_vpsrld] = ACTIONS(98),
    [anon_sym_vpsrlq] = ACTIONS(98),
    [anon_sym_vpsrlw] = ACTIONS(98),
    [anon_sym_vpsubusw] = ACTIONS(98),
    [anon_sym_vpsubq] = ACTIONS(98),
    [anon_sym_vpsubd] = ACTIONS(98),
    [anon_sym_vpsubw] = ACTIONS(98),
    [anon_sym_vshufps] = ACTIONS(98),
    [anon_sym_vsubsd] = ACTIONS(98),
    [anon_sym_vucomisd] = ACTIONS(98),
    [anon_sym_vucomiss] = ACTIONS(98),
    [anon_sym_vunpckhpd] = ACTIONS(98),
    [anon_sym_vunpckhps] = ACTIONS(98),
    [anon_sym_vunpcklpd] = ACTIONS(98),
    [anon_sym_vunpcklps] = ACTIONS(98),
    [anon_sym_vbroadcastss] = ACTIONS(98),
    [anon_sym_vinsertf128] = ACTIONS(98),
    [anon_sym_vperm2f128] = ACTIONS(98),
    [anon_sym_vzeroall] = ACTIONS(98),
    [anon_sym_vzeroupper] = ACTIONS(98),
    [anon_sym_vshufi32x4] = ACTIONS(98),
    [anon_sym_vshufi64x2] = ACTIONS(98),
    [anon_sym_vpblendmd] = ACTIONS(98),
    [anon_sym_vextracti128] = ACTIONS(98),
    [anon_sym_vextracti32x4] = ACTIONS(98),
    [anon_sym_vinserti128] = ACTIONS(98),
    [anon_sym_vinserti32x4] = ACTIONS(98),
    [anon_sym_vinserti64x4] = ACTIONS(98),
    [anon_sym_vpblendd] = ACTIONS(98),
    [anon_sym_vpbroadcastq] = ACTIONS(98),
    [anon_sym_vpbroadcastd] = ACTIONS(98),
    [anon_sym_vbroadcasti128] = ACTIONS(98),
    [anon_sym_vbroadcasti32x4] = ACTIONS(98),
    [anon_sym_vperm2i128] = ACTIONS(98),
    [anon_sym_vpermd] = ACTIONS(98),
    [anon_sym_vpermq] = ACTIONS(98),
    [anon_sym_vpermt2d] = ACTIONS(98),
    [anon_sym_vpermi2d] = ACTIONS(98),
    [anon_sym_tzcnt] = ACTIONS(98),
    [anon_sym_rorx] = ACTIONS(98),
    [anon_sym_psubd] = ACTIONS(98),
    [anon_sym_pmaddwd] = ACTIONS(98),
    [anon_sym_pxor] = ACTIONS(98),
    [anon_sym_psrad] = ACTIONS(98),
    [anon_sym_pslld] = ACTIONS(98),
    [anon_sym_pcmpgtd] = ACTIONS(98),
    [anon_sym_pcmpeqd] = ACTIONS(98),
    [anon_sym_por] = ACTIONS(98),
    [anon_sym_paddw] = ACTIONS(98),
    [anon_sym_psubusw] = ACTIONS(98),
    [anon_sym_pcmpeqb] = ACTIONS(98),
    [anon_sym_psubusb] = ACTIONS(98),
    [anon_sym_psrld] = ACTIONS(98),
    [anon_sym_psrlw] = ACTIONS(98),
    [anon_sym_psllq] = ACTIONS(98),
    [anon_sym_paddd] = ACTIONS(98),
    [anon_sym_psrlq] = ACTIONS(98),
    [anon_sym_psubb] = ACTIONS(98),
    [anon_sym_maxss] = ACTIONS(98),
    [anon_sym_pmovmskb] = ACTIONS(98),
    [anon_sym_pinsrw] = ACTIONS(98),
    [anon_sym_minss] = ACTIONS(98),
    [anon_sym_prefetcht1] = ACTIONS(98),
    [anon_sym_prefetcht0] = ACTIONS(98),
    [anon_sym_pextrw] = ACTIONS(98),
    [anon_sym_ucomiss] = ACTIONS(98),
    [anon_sym_shufps] = ACTIONS(98),
    [anon_sym_addsd] = ACTIONS(98),
    [anon_sym_paddq] = ACTIONS(98),
    [anon_sym_psubq] = ACTIONS(98),
    [anon_sym_pshuflw] = ACTIONS(98),
    [anon_sym_pmuludq] = ACTIONS(98),
    [anon_sym_pshufd] = ACTIONS(98),
    [anon_sym_minsd] = ACTIONS(98),
    [anon_sym_pshufhw] = ACTIONS(98),
    [anon_sym_mfence] = ACTIONS(98),
    [anon_sym_maxsd] = ACTIONS(98),
    [anon_sym_ucomisd] = ACTIONS(98),
    [anon_sym_shufpd] = ACTIONS(98),
    [anon_sym_pslldq] = ACTIONS(98),
    [anon_sym_unpckhpd] = ACTIONS(98),
    [anon_sym_psrldq] = ACTIONS(98),
    [anon_sym_palignr] = ACTIONS(98),
    [anon_sym_pshufb] = ACTIONS(98),
    [anon_sym_pmaddubsw] = ACTIONS(98),
    [anon_sym_pinsrb] = ACTIONS(98),
    [anon_sym_pblendw] = ACTIONS(98),
    [anon_sym_pextrq] = ACTIONS(98),
    [anon_sym_blendvps] = ACTIONS(98),
    [anon_sym_pextrb] = ACTIONS(98),
    [anon_sym_pinsrd] = ACTIONS(98),
    [anon_sym_femms] = ACTIONS(98),
  },
  [4] = {
    [sym_comment] = STATE(263),
    [sym_instruction] = STATE(121),
    [sym_opcode] = STATE(12),
    [sym_BinaryArithmeticOpcode] = STATE(17),
    [sym_BitAndByteOpcode] = STATE(17),
    [sym_CuriousOpcode] = STATE(17),
    [sym_DataTransferOpcode] = STATE(17),
    [sym_IOOpcode] = STATE(17),
    [sym_LogicalOpcode] = STATE(17),
    [sym_MiscellaneousOpcode] = STATE(17),
    [sym_PackUnpackOpcode] = STATE(17),
    [sym_ShiftAndRotateOpcode] = STATE(17),
    [sym_StackOpcode] = STATE(17),
    [sym_StringOpcode] = STATE(17),
    [sym_AccessRegisterOpcode] = STATE(17),
    [sym_ToBeClassifiedOpcode] = STATE(17),
    [sym__line_break] = ACTIONS(101),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_adc] = ACTIONS(13),
    [anon_sym_add] = ACTIONS(13),
    [anon_sym_addq] = ACTIONS(13),
    [anon_sym_addl] = ACTIONS(13),
    [anon_sym_addss] = ACTIONS(13),
    [anon_sym_addw] = ACTIONS(13),
    [anon_sym_addb] = ACTIONS(13),
    [anon_sym_cmp] = ACTIONS(13),
    [anon_sym_cmpb] = ACTIONS(13),
    [anon_sym_cmpw] = ACTIONS(13),
    [anon_sym_cmpl] = ACTIONS(13),
    [anon_sym_cmpq] = ACTIONS(13),
    [anon_sym_comiss] = ACTIONS(13),
    [anon_sym_comisd] = ACTIONS(13),
    [anon_sym_inc] = ACTIONS(13),
    [anon_sym_incl] = ACTIONS(13),
    [anon_sym_dec] = ACTIONS(13),
    [anon_sym_div] = ACTIONS(13),
    [anon_sym_divq] = ACTIONS(13),
    [anon_sym_divl] = ACTIONS(13),
    [anon_sym_divss] = ACTIONS(13),
    [anon_sym_divsd] = ACTIONS(13),
    [anon_sym_idiv] = ACTIONS(13),
    [anon_sym_idivl] = ACTIONS(13),
    [anon_sym_sub] = ACTIONS(13),
    [anon_sym_subq] = ACTIONS(13),
    [anon_sym_subl] = ACTIONS(13),
    [anon_sym_subss] = ACTIONS(13),
    [anon_sym_subw] = ACTIONS(13),
    [anon_sym_subb] = ACTIONS(13),
    [anon_sym_subsd] = ACTIONS(13),
    [anon_sym_subpd] = ACTIONS(13),
    [anon_sym_sbb] = ACTIONS(13),
    [anon_sym_mul] = ACTIONS(13),
    [anon_sym_mulq] = ACTIONS(13),
    [anon_sym_mull] = ACTIONS(13),
    [anon_sym_mulss] = ACTIONS(13),
    [anon_sym_mulw] = ACTIONS(13),
    [anon_sym_mulb] = ACTIONS(13),
    [anon_sym_mulsd] = ACTIONS(13),
    [anon_sym_mulx] = ACTIONS(13),
    [anon_sym_imul] = ACTIONS(13),
    [anon_sym_neg] = ACTIONS(13),
    [anon_sym_negl] = ACTIONS(13),
    [anon_sym_negq] = ACTIONS(13),
    [anon_sym_fmulp] = ACTIONS(13),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(13),
    [anon_sym_pclmullqlqdq] = ACTIONS(13),
    [anon_sym_pclmullqhqdq] = ACTIONS(13),
    [anon_sym_vpclmullqhqdq] = ACTIONS(13),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(13),
    [anon_sym_pclmulhqhqdq] = ACTIONS(13),
    [anon_sym_vpclmullqlqdq] = ACTIONS(13),
    [anon_sym_bsf] = ACTIONS(15),
    [anon_sym_bsr] = ACTIONS(15),
    [anon_sym_bts] = ACTIONS(15),
    [anon_sym_bt] = ACTIONS(15),
    [anon_sym_btr] = ACTIONS(15),
    [anon_sym_btl] = ACTIONS(15),
    [anon_sym_setne] = ACTIONS(15),
    [anon_sym_setb] = ACTIONS(15),
    [anon_sym_sete] = ACTIONS(15),
    [anon_sym_setbe] = ACTIONS(15),
    [anon_sym_seta] = ACTIONS(15),
    [anon_sym_setge] = ACTIONS(15),
    [anon_sym_setae] = ACTIONS(15),
    [anon_sym_setl] = ACTIONS(15),
    [anon_sym_setle] = ACTIONS(15),
    [anon_sym_setg] = ACTIONS(15),
    [anon_sym_seto] = ACTIONS(15),
    [anon_sym_setnp] = ACTIONS(15),
    [anon_sym_setp] = ACTIONS(15),
    [anon_sym_setns] = ACTIONS(15),
    [anon_sym_test] = ACTIONS(15),
    [anon_sym_testb] = ACTIONS(15),
    [anon_sym_testl] = ACTIONS(15),
    [anon_sym_knotw] = ACTIONS(15),
    [anon_sym_vpcmpltud] = ACTIONS(17),
    [anon_sym_gs] = ACTIONS(17),
    [anon_sym_re] = ACTIONS(17),
    [anon_sym_ss] = ACTIONS(17),
    [anon_sym_leaveq] = ACTIONS(17),
    [anon_sym_retq] = ACTIONS(17),
    [anon_sym_bswap] = ACTIONS(19),
    [anon_sym_cbtw] = ACTIONS(19),
    [anon_sym_cltd] = ACTIONS(19),
    [anon_sym_cltq] = ACTIONS(19),
    [anon_sym_cmovbe] = ACTIONS(19),
    [anon_sym_cmovl] = ACTIONS(19),
    [anon_sym_cmovae] = ACTIONS(19),
    [anon_sym_cmovo] = ACTIONS(19),
    [anon_sym_cmovne] = ACTIONS(19),
    [anon_sym_cmovns] = ACTIONS(19),
    [anon_sym_cmovg] = ACTIONS(19),
    [anon_sym_cmovp] = ACTIONS(19),
    [anon_sym_cmove] = ACTIONS(19),
    [anon_sym_cmovge] = ACTIONS(19),
    [anon_sym_cmovb] = ACTIONS(19),
    [anon_sym_cmova] = ACTIONS(19),
    [anon_sym_cmovle] = ACTIONS(19),
    [anon_sym_cmovs] = ACTIONS(19),
    [anon_sym_cwtl] = ACTIONS(19),
    [anon_sym_cwtd] = ACTIONS(19),
    [anon_sym_cqto] = ACTIONS(19),
    [anon_sym_cvttsd2si] = ACTIONS(19),
    [anon_sym_cvtss2sd] = ACTIONS(19),
    [anon_sym_cvttss2si] = ACTIONS(19),
    [anon_sym_cvtsi2sd] = ACTIONS(19),
    [anon_sym_cvtsi2ss] = ACTIONS(19),
    [anon_sym_cvtsi2sdq] = ACTIONS(19),
    [anon_sym_cvtsi2sdl] = ACTIONS(19),
    [anon_sym_cvtsd2ss] = ACTIONS(19),
    [anon_sym_cvtsi2ssl] = ACTIONS(19),
    [anon_sym_mov] = ACTIONS(19),
    [anon_sym_movw] = ACTIONS(19),
    [anon_sym_movl] = ACTIONS(19),
    [anon_sym_movq] = ACTIONS(19),
    [anon_sym_movb] = ACTIONS(19),
    [anon_sym_movabs] = ACTIONS(19),
    [anon_sym_movsbw] = ACTIONS(19),
    [anon_sym_movsbq] = ACTIONS(19),
    [anon_sym_movsbl] = ACTIONS(19),
    [anon_sym_movswl] = ACTIONS(19),
    [anon_sym_movswq] = ACTIONS(19),
    [anon_sym_movzbw] = ACTIONS(19),
    [anon_sym_movzbq] = ACTIONS(19),
    [anon_sym_movzbl] = ACTIONS(19),
    [anon_sym_movzwl] = ACTIONS(19),
    [anon_sym_movaps] = ACTIONS(19),
    [anon_sym_movhlps] = ACTIONS(19),
    [anon_sym_movss] = ACTIONS(19),
    [anon_sym_movups] = ACTIONS(19),
    [anon_sym_movsd] = ACTIONS(19),
    [anon_sym_movd] = ACTIONS(19),
    [anon_sym_movhps] = ACTIONS(19),
    [anon_sym_movdqa] = ACTIONS(19),
    [anon_sym_movbe] = ACTIONS(19),
    [anon_sym_movapd] = ACTIONS(19),
    [anon_sym_movdqu] = ACTIONS(19),
    [anon_sym_xchg] = ACTIONS(19),
    [anon_sym_fildl] = ACTIONS(19),
    [anon_sym_fldt] = ACTIONS(19),
    [anon_sym_fstpl] = ACTIONS(19),
    [anon_sym_insb] = ACTIONS(21),
    [anon_sym_insl] = ACTIONS(21),
    [anon_sym_outsb] = ACTIONS(21),
    [anon_sym_outsl] = ACTIONS(21),
    [anon_sym_or] = ACTIONS(23),
    [anon_sym_orq] = ACTIONS(23),
    [anon_sym_orl] = ACTIONS(23),
    [anon_sym_orb] = ACTIONS(23),
    [anon_sym_orw] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(23),
    [anon_sym_xorl] = ACTIONS(23),
    [anon_sym_xorw] = ACTIONS(23),
    [anon_sym_xorps] = ACTIONS(23),
    [anon_sym_xorpd] = ACTIONS(23),
    [anon_sym_vxorps] = ACTIONS(23),
    [anon_sym_vpxord] = ACTIONS(23),
    [anon_sym_vpxor] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(23),
    [anon_sym_andq] = ACTIONS(23),
    [anon_sym_andl] = ACTIONS(23),
    [anon_sym_andw] = ACTIONS(23),
    [anon_sym_andb] = ACTIONS(23),
    [anon_sym_andn] = ACTIONS(23),
    [anon_sym_andpd] = ACTIONS(23),
    [anon_sym_pand] = ACTIONS(23),
    [anon_sym_pandn] = ACTIONS(23),
    [anon_sym_andps] = ACTIONS(23),
    [anon_sym_vpand] = ACTIONS(23),
    [anon_sym_not] = ACTIONS(23),
    [anon_sym_notl] = ACTIONS(23),
    [anon_sym_notw] = ACTIONS(23),
    [anon_sym_cpuid] = ACTIONS(25),
    [anon_sym_lea] = ACTIONS(25),
    [anon_sym_popcnt] = ACTIONS(25),
    [anon_sym_nop] = ACTIONS(25),
    [anon_sym_nopl] = ACTIONS(25),
    [anon_sym_nopw] = ACTIONS(25),
    [anon_sym_ud2] = ACTIONS(25),
    [anon_sym_data16] = ACTIONS(25),
    [anon_sym_sha1rnds4] = ACTIONS(25),
    [anon_sym_addr32] = ACTIONS(25),
    [anon_sym_sha1msg1] = ACTIONS(25),
    [anon_sym_sha1msg2] = ACTIONS(25),
    [anon_sym_sha1nexte] = ACTIONS(25),
    [anon_sym_endbr64] = ACTIONS(25),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(27),
    [anon_sym_packuswb] = ACTIONS(29),
    [anon_sym_punpckhbw] = ACTIONS(29),
    [anon_sym_punpckhdq] = ACTIONS(29),
    [anon_sym_punpckhwd] = ACTIONS(29),
    [anon_sym_punpcklbw] = ACTIONS(29),
    [anon_sym_punpckldq] = ACTIONS(29),
    [anon_sym_punpcklwd] = ACTIONS(29),
    [anon_sym_vpunpcklwd] = ACTIONS(29),
    [anon_sym_vpunpckldq] = ACTIONS(29),
    [anon_sym_punpcklqdq] = ACTIONS(29),
    [anon_sym_punpckhqdq] = ACTIONS(29),
    [anon_sym_vpunpckhqdq] = ACTIONS(29),
    [anon_sym_vpunpckhdq] = ACTIONS(29),
    [anon_sym_vpunpcklqdq] = ACTIONS(29),
    [anon_sym_vpunpckhwd] = ACTIONS(29),
    [anon_sym_rol] = ACTIONS(31),
    [anon_sym_ror] = ACTIONS(31),
    [anon_sym_sar] = ACTIONS(31),
    [anon_sym_sarl] = ACTIONS(31),
    [anon_sym_sarx] = ACTIONS(31),
    [anon_sym_shl] = ACTIONS(31),
    [anon_sym_shll] = ACTIONS(31),
    [anon_sym_shld] = ACTIONS(31),
    [anon_sym_shlx] = ACTIONS(31),
    [anon_sym_shlq] = ACTIONS(31),
    [anon_sym_shr] = ACTIONS(31),
    [anon_sym_shrq] = ACTIONS(31),
    [anon_sym_shrd] = ACTIONS(31),
    [anon_sym_shrl] = ACTIONS(31),
    [anon_sym_shrx] = ACTIONS(31),
    [anon_sym_vprord] = ACTIONS(31),
    [anon_sym_vprorq] = ACTIONS(31),
    [anon_sym_rorl] = ACTIONS(31),
    [anon_sym_roll] = ACTIONS(31),
    [anon_sym_push] = ACTIONS(33),
    [anon_sym_pushq] = ACTIONS(33),
    [anon_sym_pop] = ACTIONS(33),
    [anon_sym_movslq] = ACTIONS(35),
    [anon_sym_movsb] = ACTIONS(35),
    [anon_sym_rep] = ACTIONS(35),
    [anon_sym_repz] = ACTIONS(35),
    [anon_sym_repnz] = ACTIONS(35),
    [anon_sym_rex] = ACTIONS(37),
    [anon_sym_rex_DOTWB] = ACTIONS(37),
    [anon_sym_rex_DOTWRB] = ACTIONS(37),
    [anon_sym_rex_DOTRXB] = ACTIONS(37),
    [anon_sym_rex_DOTB] = ACTIONS(37),
    [anon_sym_rex_DOTWRXB] = ACTIONS(37),
    [anon_sym_rex_DOTXB] = ACTIONS(37),
    [anon_sym_rex_DOTW] = ACTIONS(37),
    [anon_sym_rex_DOTRB] = ACTIONS(37),
    [anon_sym_xgetbv] = ACTIONS(37),
    [anon_sym_fs] = ACTIONS(37),
    [anon_sym_kmovw] = ACTIONS(37),
    [anon_sym_adcx] = ACTIONS(39),
    [anon_sym_adox] = ACTIONS(39),
    [anon_sym_aesdec] = ACTIONS(39),
    [anon_sym_aesdeclast] = ACTIONS(39),
    [anon_sym_aesenc] = ACTIONS(39),
    [anon_sym_aesenclast] = ACTIONS(39),
    [anon_sym_vaesenc] = ACTIONS(39),
    [anon_sym_vaesenclast] = ACTIONS(39),
    [anon_sym_aeskeygenassist] = ACTIONS(39),
    [anon_sym_vblendps] = ACTIONS(39),
    [anon_sym_vblendvps] = ACTIONS(39),
    [anon_sym_vcvtusi2sd] = ACTIONS(39),
    [anon_sym_vdivsd] = ACTIONS(39),
    [anon_sym_vmovaps] = ACTIONS(39),
    [anon_sym_vmovapd] = ACTIONS(39),
    [anon_sym_vmovss] = ACTIONS(39),
    [anon_sym_vmovdqu] = ACTIONS(39),
    [anon_sym_vmovdqu64] = ACTIONS(39),
    [anon_sym_vmovdqu32] = ACTIONS(39),
    [anon_sym_vmovdqa] = ACTIONS(39),
    [anon_sym_vmovdqa32] = ACTIONS(39),
    [anon_sym_vmovdqa64] = ACTIONS(39),
    [anon_sym_vmovq] = ACTIONS(39),
    [anon_sym_vmovups] = ACTIONS(39),
    [anon_sym_vmovd] = ACTIONS(39),
    [anon_sym_vmovsd] = ACTIONS(39),
    [anon_sym_vmulsd] = ACTIONS(39),
    [anon_sym_vpackusdw] = ACTIONS(39),
    [anon_sym_vpaddd] = ACTIONS(39),
    [anon_sym_vpaddb] = ACTIONS(39),
    [anon_sym_vpaddq] = ACTIONS(39),
    [anon_sym_vpaddw] = ACTIONS(39),
    [anon_sym_vpalignr] = ACTIONS(39),
    [anon_sym_vpcmpgtd] = ACTIONS(39),
    [anon_sym_vpextrw] = ACTIONS(39),
    [anon_sym_vpinsrw] = ACTIONS(39),
    [anon_sym_vpinsrd] = ACTIONS(39),
    [anon_sym_vpinsrq] = ACTIONS(39),
    [anon_sym_vpinsrb] = ACTIONS(39),
    [anon_sym_vpmaddubsw] = ACTIONS(39),
    [anon_sym_vpmaddwd] = ACTIONS(39),
    [anon_sym_vpmullw] = ACTIONS(39),
    [anon_sym_vpmuludq] = ACTIONS(39),
    [anon_sym_vpor] = ACTIONS(39),
    [anon_sym_vpshufb] = ACTIONS(39),
    [anon_sym_vpshufd] = ACTIONS(39),
    [anon_sym_vpslldq] = ACTIONS(39),
    [anon_sym_vpslld] = ACTIONS(39),
    [anon_sym_vpsllq] = ACTIONS(39),
    [anon_sym_vpsllw] = ACTIONS(39),
    [anon_sym_vpsrldq] = ACTIONS(39),
    [anon_sym_vpsrld] = ACTIONS(39),
    [anon_sym_vpsrlq] = ACTIONS(39),
    [anon_sym_vpsrlw] = ACTIONS(39),
    [anon_sym_vpsubusw] = ACTIONS(39),
    [anon_sym_vpsubq] = ACTIONS(39),
    [anon_sym_vpsubd] = ACTIONS(39),
    [anon_sym_vpsubw] = ACTIONS(39),
    [anon_sym_vshufps] = ACTIONS(39),
    [anon_sym_vsubsd] = ACTIONS(39),
    [anon_sym_vucomisd] = ACTIONS(39),
    [anon_sym_vucomiss] = ACTIONS(39),
    [anon_sym_vunpckhpd] = ACTIONS(39),
    [anon_sym_vunpckhps] = ACTIONS(39),
    [anon_sym_vunpcklpd] = ACTIONS(39),
    [anon_sym_vunpcklps] = ACTIONS(39),
    [anon_sym_vbroadcastss] = ACTIONS(39),
    [anon_sym_vinsertf128] = ACTIONS(39),
    [anon_sym_vperm2f128] = ACTIONS(39),
    [anon_sym_vzeroall] = ACTIONS(39),
    [anon_sym_vzeroupper] = ACTIONS(39),
    [anon_sym_vshufi32x4] = ACTIONS(39),
    [anon_sym_vshufi64x2] = ACTIONS(39),
    [anon_sym_vpblendmd] = ACTIONS(39),
    [anon_sym_vextracti128] = ACTIONS(39),
    [anon_sym_vextracti32x4] = ACTIONS(39),
    [anon_sym_vinserti128] = ACTIONS(39),
    [anon_sym_vinserti32x4] = ACTIONS(39),
    [anon_sym_vinserti64x4] = ACTIONS(39),
    [anon_sym_vpblendd] = ACTIONS(39),
    [anon_sym_vpbroadcastq] = ACTIONS(39),
    [anon_sym_vpbroadcastd] = ACTIONS(39),
    [anon_sym_vbroadcasti128] = ACTIONS(39),
    [anon_sym_vbroadcasti32x4] = ACTIONS(39),
    [anon_sym_vperm2i128] = ACTIONS(39),
    [anon_sym_vpermd] = ACTIONS(39),
    [anon_sym_vpermq] = ACTIONS(39),
    [anon_sym_vpermt2d] = ACTIONS(39),
    [anon_sym_vpermi2d] = ACTIONS(39),
    [anon_sym_tzcnt] = ACTIONS(39),
    [anon_sym_rorx] = ACTIONS(39),
    [anon_sym_psubd] = ACTIONS(39),
    [anon_sym_pmaddwd] = ACTIONS(39),
    [anon_sym_pxor] = ACTIONS(39),
    [anon_sym_psrad] = ACTIONS(39),
    [anon_sym_pslld] = ACTIONS(39),
    [anon_sym_pcmpgtd] = ACTIONS(39),
    [anon_sym_pcmpeqd] = ACTIONS(39),
    [anon_sym_por] = ACTIONS(39),
    [anon_sym_paddw] = ACTIONS(39),
    [anon_sym_psubusw] = ACTIONS(39),
    [anon_sym_pcmpeqb] = ACTIONS(39),
    [anon_sym_psubusb] = ACTIONS(39),
    [anon_sym_psrld] = ACTIONS(39),
    [anon_sym_psrlw] = ACTIONS(39),
    [anon_sym_psllq] = ACTIONS(39),
    [anon_sym_paddd] = ACTIONS(39),
    [anon_sym_psrlq] = ACTIONS(39),
    [anon_sym_psubb] = ACTIONS(39),
    [anon_sym_maxss] = ACTIONS(39),
    [anon_sym_pmovmskb] = ACTIONS(39),
    [anon_sym_pinsrw] = ACTIONS(39),
    [anon_sym_minss] = ACTIONS(39),
    [anon_sym_prefetcht1] = ACTIONS(39),
    [anon_sym_prefetcht0] = ACTIONS(39),
    [anon_sym_pextrw] = ACTIONS(39),
    [anon_sym_ucomiss] = ACTIONS(39),
    [anon_sym_shufps] = ACTIONS(39),
    [anon_sym_addsd] = ACTIONS(39),
    [anon_sym_paddq] = ACTIONS(39),
    [anon_sym_psubq] = ACTIONS(39),
    [anon_sym_pshuflw] = ACTIONS(39),
    [anon_sym_pmuludq] = ACTIONS(39),
    [anon_sym_pshufd] = ACTIONS(39),
    [anon_sym_minsd] = ACTIONS(39),
    [anon_sym_pshufhw] = ACTIONS(39),
    [anon_sym_mfence] = ACTIONS(39),
    [anon_sym_maxsd] = ACTIONS(39),
    [anon_sym_ucomisd] = ACTIONS(39),
    [anon_sym_shufpd] = ACTIONS(39),
    [anon_sym_pslldq] = ACTIONS(39),
    [anon_sym_unpckhpd] = ACTIONS(39),
    [anon_sym_psrldq] = ACTIONS(39),
    [anon_sym_palignr] = ACTIONS(39),
    [anon_sym_pshufb] = ACTIONS(39),
    [anon_sym_pmaddubsw] = ACTIONS(39),
    [anon_sym_pinsrb] = ACTIONS(39),
    [anon_sym_pblendw] = ACTIONS(39),
    [anon_sym_pextrq] = ACTIONS(39),
    [anon_sym_blendvps] = ACTIONS(39),
    [anon_sym_pextrb] = ACTIONS(39),
    [anon_sym_pinsrd] = ACTIONS(39),
    [anon_sym_femms] = ACTIONS(39),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym__line_break] = ACTIONS(105),
    [aux_sym_comment_token1] = ACTIONS(105),
    [aux_sym_comment_token2] = ACTIONS(105),
    [anon_sym_] = ACTIONS(105),
    [aux_sym__address_token1] = ACTIONS(105),
    [anon_sym_adc] = ACTIONS(105),
    [anon_sym_add] = ACTIONS(105),
    [anon_sym_addq] = ACTIONS(105),
    [anon_sym_addl] = ACTIONS(105),
    [anon_sym_addss] = ACTIONS(105),
    [anon_sym_addw] = ACTIONS(105),
    [anon_sym_addb] = ACTIONS(105),
    [anon_sym_cmp] = ACTIONS(105),
    [anon_sym_cmpb] = ACTIONS(105),
    [anon_sym_cmpw] = ACTIONS(105),
    [anon_sym_cmpl] = ACTIONS(105),
    [anon_sym_cmpq] = ACTIONS(105),
    [anon_sym_comiss] = ACTIONS(105),
    [anon_sym_comisd] = ACTIONS(105),
    [anon_sym_inc] = ACTIONS(105),
    [anon_sym_incl] = ACTIONS(105),
    [anon_sym_dec] = ACTIONS(105),
    [anon_sym_div] = ACTIONS(105),
    [anon_sym_divq] = ACTIONS(105),
    [anon_sym_divl] = ACTIONS(105),
    [anon_sym_divss] = ACTIONS(105),
    [anon_sym_divsd] = ACTIONS(105),
    [anon_sym_idiv] = ACTIONS(105),
    [anon_sym_idivl] = ACTIONS(105),
    [anon_sym_sub] = ACTIONS(105),
    [anon_sym_subq] = ACTIONS(105),
    [anon_sym_subl] = ACTIONS(105),
    [anon_sym_subss] = ACTIONS(105),
    [anon_sym_subw] = ACTIONS(105),
    [anon_sym_subb] = ACTIONS(105),
    [anon_sym_subsd] = ACTIONS(105),
    [anon_sym_subpd] = ACTIONS(105),
    [anon_sym_sbb] = ACTIONS(105),
    [anon_sym_mul] = ACTIONS(105),
    [anon_sym_mulq] = ACTIONS(105),
    [anon_sym_mull] = ACTIONS(105),
    [anon_sym_mulss] = ACTIONS(105),
    [anon_sym_mulw] = ACTIONS(105),
    [anon_sym_mulb] = ACTIONS(105),
    [anon_sym_mulsd] = ACTIONS(105),
    [anon_sym_mulx] = ACTIONS(105),
    [anon_sym_imul] = ACTIONS(105),
    [anon_sym_neg] = ACTIONS(105),
    [anon_sym_negl] = ACTIONS(105),
    [anon_sym_negq] = ACTIONS(105),
    [anon_sym_fmulp] = ACTIONS(105),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(105),
    [anon_sym_pclmullqlqdq] = ACTIONS(105),
    [anon_sym_pclmullqhqdq] = ACTIONS(105),
    [anon_sym_vpclmullqhqdq] = ACTIONS(105),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(105),
    [anon_sym_pclmulhqhqdq] = ACTIONS(105),
    [anon_sym_vpclmullqlqdq] = ACTIONS(105),
    [anon_sym_bsf] = ACTIONS(105),
    [anon_sym_bsr] = ACTIONS(105),
    [anon_sym_bts] = ACTIONS(105),
    [anon_sym_bt] = ACTIONS(105),
    [anon_sym_btr] = ACTIONS(105),
    [anon_sym_btl] = ACTIONS(105),
    [anon_sym_setne] = ACTIONS(105),
    [anon_sym_setb] = ACTIONS(105),
    [anon_sym_sete] = ACTIONS(105),
    [anon_sym_setbe] = ACTIONS(105),
    [anon_sym_seta] = ACTIONS(105),
    [anon_sym_setge] = ACTIONS(105),
    [anon_sym_setae] = ACTIONS(105),
    [anon_sym_setl] = ACTIONS(105),
    [anon_sym_setle] = ACTIONS(105),
    [anon_sym_setg] = ACTIONS(105),
    [anon_sym_seto] = ACTIONS(105),
    [anon_sym_setnp] = ACTIONS(105),
    [anon_sym_setp] = ACTIONS(105),
    [anon_sym_setns] = ACTIONS(105),
    [anon_sym_test] = ACTIONS(105),
    [anon_sym_testb] = ACTIONS(105),
    [anon_sym_testl] = ACTIONS(105),
    [anon_sym_knotw] = ACTIONS(105),
    [anon_sym_vpcmpltud] = ACTIONS(105),
    [anon_sym_gs] = ACTIONS(105),
    [anon_sym_re] = ACTIONS(105),
    [anon_sym_ss] = ACTIONS(105),
    [anon_sym_leaveq] = ACTIONS(105),
    [anon_sym_retq] = ACTIONS(105),
    [anon_sym_bswap] = ACTIONS(105),
    [anon_sym_cbtw] = ACTIONS(105),
    [anon_sym_cltd] = ACTIONS(105),
    [anon_sym_cltq] = ACTIONS(105),
    [anon_sym_cmovbe] = ACTIONS(105),
    [anon_sym_cmovl] = ACTIONS(105),
    [anon_sym_cmovae] = ACTIONS(105),
    [anon_sym_cmovo] = ACTIONS(105),
    [anon_sym_cmovne] = ACTIONS(105),
    [anon_sym_cmovns] = ACTIONS(105),
    [anon_sym_cmovg] = ACTIONS(105),
    [anon_sym_cmovp] = ACTIONS(105),
    [anon_sym_cmove] = ACTIONS(105),
    [anon_sym_cmovge] = ACTIONS(105),
    [anon_sym_cmovb] = ACTIONS(105),
    [anon_sym_cmova] = ACTIONS(105),
    [anon_sym_cmovle] = ACTIONS(105),
    [anon_sym_cmovs] = ACTIONS(105),
    [anon_sym_cwtl] = ACTIONS(105),
    [anon_sym_cwtd] = ACTIONS(105),
    [anon_sym_cqto] = ACTIONS(105),
    [anon_sym_cvttsd2si] = ACTIONS(105),
    [anon_sym_cvtss2sd] = ACTIONS(105),
    [anon_sym_cvttss2si] = ACTIONS(105),
    [anon_sym_cvtsi2sd] = ACTIONS(105),
    [anon_sym_cvtsi2ss] = ACTIONS(105),
    [anon_sym_cvtsi2sdq] = ACTIONS(105),
    [anon_sym_cvtsi2sdl] = ACTIONS(105),
    [anon_sym_cvtsd2ss] = ACTIONS(105),
    [anon_sym_cvtsi2ssl] = ACTIONS(105),
    [anon_sym_mov] = ACTIONS(105),
    [anon_sym_movw] = ACTIONS(105),
    [anon_sym_movl] = ACTIONS(105),
    [anon_sym_movq] = ACTIONS(105),
    [anon_sym_movb] = ACTIONS(105),
    [anon_sym_movabs] = ACTIONS(105),
    [anon_sym_movsbw] = ACTIONS(105),
    [anon_sym_movsbq] = ACTIONS(105),
    [anon_sym_movsbl] = ACTIONS(105),
    [anon_sym_movswl] = ACTIONS(105),
    [anon_sym_movswq] = ACTIONS(105),
    [anon_sym_movzbw] = ACTIONS(105),
    [anon_sym_movzbq] = ACTIONS(105),
    [anon_sym_movzbl] = ACTIONS(105),
    [anon_sym_movzwl] = ACTIONS(105),
    [anon_sym_movaps] = ACTIONS(105),
    [anon_sym_movhlps] = ACTIONS(105),
    [anon_sym_movss] = ACTIONS(105),
    [anon_sym_movups] = ACTIONS(105),
    [anon_sym_movsd] = ACTIONS(105),
    [anon_sym_movd] = ACTIONS(105),
    [anon_sym_movhps] = ACTIONS(105),
    [anon_sym_movdqa] = ACTIONS(105),
    [anon_sym_movbe] = ACTIONS(105),
    [anon_sym_movapd] = ACTIONS(105),
    [anon_sym_movdqu] = ACTIONS(105),
    [anon_sym_xchg] = ACTIONS(105),
    [anon_sym_fildl] = ACTIONS(105),
    [anon_sym_fldt] = ACTIONS(105),
    [anon_sym_fstpl] = ACTIONS(105),
    [anon_sym_insb] = ACTIONS(105),
    [anon_sym_insl] = ACTIONS(105),
    [anon_sym_outsb] = ACTIONS(105),
    [anon_sym_outsl] = ACTIONS(105),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_orq] = ACTIONS(105),
    [anon_sym_orl] = ACTIONS(105),
    [anon_sym_orb] = ACTIONS(105),
    [anon_sym_orw] = ACTIONS(105),
    [anon_sym_xor] = ACTIONS(105),
    [anon_sym_xorl] = ACTIONS(105),
    [anon_sym_xorw] = ACTIONS(105),
    [anon_sym_xorps] = ACTIONS(105),
    [anon_sym_xorpd] = ACTIONS(105),
    [anon_sym_vxorps] = ACTIONS(105),
    [anon_sym_vpxord] = ACTIONS(105),
    [anon_sym_vpxor] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(105),
    [anon_sym_andq] = ACTIONS(105),
    [anon_sym_andl] = ACTIONS(105),
    [anon_sym_andw] = ACTIONS(105),
    [anon_sym_andb] = ACTIONS(105),
    [anon_sym_andn] = ACTIONS(105),
    [anon_sym_andpd] = ACTIONS(105),
    [anon_sym_pand] = ACTIONS(105),
    [anon_sym_pandn] = ACTIONS(105),
    [anon_sym_andps] = ACTIONS(105),
    [anon_sym_vpand] = ACTIONS(105),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_notl] = ACTIONS(105),
    [anon_sym_notw] = ACTIONS(105),
    [anon_sym_cpuid] = ACTIONS(105),
    [anon_sym_lea] = ACTIONS(105),
    [anon_sym_popcnt] = ACTIONS(105),
    [anon_sym_nop] = ACTIONS(105),
    [anon_sym_nopl] = ACTIONS(105),
    [anon_sym_nopw] = ACTIONS(105),
    [anon_sym_ud2] = ACTIONS(105),
    [anon_sym_data16] = ACTIONS(105),
    [anon_sym_sha1rnds4] = ACTIONS(105),
    [anon_sym_addr32] = ACTIONS(105),
    [anon_sym_sha1msg1] = ACTIONS(105),
    [anon_sym_sha1msg2] = ACTIONS(105),
    [anon_sym_sha1nexte] = ACTIONS(105),
    [anon_sym_endbr64] = ACTIONS(105),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(105),
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
    [anon_sym_rol] = ACTIONS(105),
    [anon_sym_ror] = ACTIONS(105),
    [anon_sym_sar] = ACTIONS(105),
    [anon_sym_sarl] = ACTIONS(105),
    [anon_sym_sarx] = ACTIONS(105),
    [anon_sym_shl] = ACTIONS(105),
    [anon_sym_shll] = ACTIONS(105),
    [anon_sym_shld] = ACTIONS(105),
    [anon_sym_shlx] = ACTIONS(105),
    [anon_sym_shlq] = ACTIONS(105),
    [anon_sym_shr] = ACTIONS(105),
    [anon_sym_shrq] = ACTIONS(105),
    [anon_sym_shrd] = ACTIONS(105),
    [anon_sym_shrl] = ACTIONS(105),
    [anon_sym_shrx] = ACTIONS(105),
    [anon_sym_vprord] = ACTIONS(105),
    [anon_sym_vprorq] = ACTIONS(105),
    [anon_sym_rorl] = ACTIONS(105),
    [anon_sym_roll] = ACTIONS(105),
    [anon_sym_push] = ACTIONS(105),
    [anon_sym_pushq] = ACTIONS(105),
    [anon_sym_pop] = ACTIONS(105),
    [anon_sym_movslq] = ACTIONS(105),
    [anon_sym_movsb] = ACTIONS(105),
    [anon_sym_rep] = ACTIONS(105),
    [anon_sym_repz] = ACTIONS(105),
    [anon_sym_repnz] = ACTIONS(105),
    [anon_sym_rex] = ACTIONS(105),
    [anon_sym_rex_DOTWB] = ACTIONS(105),
    [anon_sym_rex_DOTWRB] = ACTIONS(105),
    [anon_sym_rex_DOTRXB] = ACTIONS(105),
    [anon_sym_rex_DOTB] = ACTIONS(105),
    [anon_sym_rex_DOTWRXB] = ACTIONS(105),
    [anon_sym_rex_DOTXB] = ACTIONS(105),
    [anon_sym_rex_DOTW] = ACTIONS(105),
    [anon_sym_rex_DOTRB] = ACTIONS(105),
    [anon_sym_xgetbv] = ACTIONS(105),
    [anon_sym_fs] = ACTIONS(105),
    [anon_sym_kmovw] = ACTIONS(105),
    [anon_sym_adcx] = ACTIONS(105),
    [anon_sym_adox] = ACTIONS(105),
    [anon_sym_aesdec] = ACTIONS(105),
    [anon_sym_aesdeclast] = ACTIONS(105),
    [anon_sym_aesenc] = ACTIONS(105),
    [anon_sym_aesenclast] = ACTIONS(105),
    [anon_sym_vaesenc] = ACTIONS(105),
    [anon_sym_vaesenclast] = ACTIONS(105),
    [anon_sym_aeskeygenassist] = ACTIONS(105),
    [anon_sym_vblendps] = ACTIONS(105),
    [anon_sym_vblendvps] = ACTIONS(105),
    [anon_sym_vcvtusi2sd] = ACTIONS(105),
    [anon_sym_vdivsd] = ACTIONS(105),
    [anon_sym_vmovaps] = ACTIONS(105),
    [anon_sym_vmovapd] = ACTIONS(105),
    [anon_sym_vmovss] = ACTIONS(105),
    [anon_sym_vmovdqu] = ACTIONS(105),
    [anon_sym_vmovdqu64] = ACTIONS(105),
    [anon_sym_vmovdqu32] = ACTIONS(105),
    [anon_sym_vmovdqa] = ACTIONS(105),
    [anon_sym_vmovdqa32] = ACTIONS(105),
    [anon_sym_vmovdqa64] = ACTIONS(105),
    [anon_sym_vmovq] = ACTIONS(105),
    [anon_sym_vmovups] = ACTIONS(105),
    [anon_sym_vmovd] = ACTIONS(105),
    [anon_sym_vmovsd] = ACTIONS(105),
    [anon_sym_vmulsd] = ACTIONS(105),
    [anon_sym_vpackusdw] = ACTIONS(105),
    [anon_sym_vpaddd] = ACTIONS(105),
    [anon_sym_vpaddb] = ACTIONS(105),
    [anon_sym_vpaddq] = ACTIONS(105),
    [anon_sym_vpaddw] = ACTIONS(105),
    [anon_sym_vpalignr] = ACTIONS(105),
    [anon_sym_vpcmpgtd] = ACTIONS(105),
    [anon_sym_vpextrw] = ACTIONS(105),
    [anon_sym_vpinsrw] = ACTIONS(105),
    [anon_sym_vpinsrd] = ACTIONS(105),
    [anon_sym_vpinsrq] = ACTIONS(105),
    [anon_sym_vpinsrb] = ACTIONS(105),
    [anon_sym_vpmaddubsw] = ACTIONS(105),
    [anon_sym_vpmaddwd] = ACTIONS(105),
    [anon_sym_vpmullw] = ACTIONS(105),
    [anon_sym_vpmuludq] = ACTIONS(105),
    [anon_sym_vpor] = ACTIONS(105),
    [anon_sym_vpshufb] = ACTIONS(105),
    [anon_sym_vpshufd] = ACTIONS(105),
    [anon_sym_vpslldq] = ACTIONS(105),
    [anon_sym_vpslld] = ACTIONS(105),
    [anon_sym_vpsllq] = ACTIONS(105),
    [anon_sym_vpsllw] = ACTIONS(105),
    [anon_sym_vpsrldq] = ACTIONS(105),
    [anon_sym_vpsrld] = ACTIONS(105),
    [anon_sym_vpsrlq] = ACTIONS(105),
    [anon_sym_vpsrlw] = ACTIONS(105),
    [anon_sym_vpsubusw] = ACTIONS(105),
    [anon_sym_vpsubq] = ACTIONS(105),
    [anon_sym_vpsubd] = ACTIONS(105),
    [anon_sym_vpsubw] = ACTIONS(105),
    [anon_sym_vshufps] = ACTIONS(105),
    [anon_sym_vsubsd] = ACTIONS(105),
    [anon_sym_vucomisd] = ACTIONS(105),
    [anon_sym_vucomiss] = ACTIONS(105),
    [anon_sym_vunpckhpd] = ACTIONS(105),
    [anon_sym_vunpckhps] = ACTIONS(105),
    [anon_sym_vunpcklpd] = ACTIONS(105),
    [anon_sym_vunpcklps] = ACTIONS(105),
    [anon_sym_vbroadcastss] = ACTIONS(105),
    [anon_sym_vinsertf128] = ACTIONS(105),
    [anon_sym_vperm2f128] = ACTIONS(105),
    [anon_sym_vzeroall] = ACTIONS(105),
    [anon_sym_vzeroupper] = ACTIONS(105),
    [anon_sym_vshufi32x4] = ACTIONS(105),
    [anon_sym_vshufi64x2] = ACTIONS(105),
    [anon_sym_vpblendmd] = ACTIONS(105),
    [anon_sym_vextracti128] = ACTIONS(105),
    [anon_sym_vextracti32x4] = ACTIONS(105),
    [anon_sym_vinserti128] = ACTIONS(105),
    [anon_sym_vinserti32x4] = ACTIONS(105),
    [anon_sym_vinserti64x4] = ACTIONS(105),
    [anon_sym_vpblendd] = ACTIONS(105),
    [anon_sym_vpbroadcastq] = ACTIONS(105),
    [anon_sym_vpbroadcastd] = ACTIONS(105),
    [anon_sym_vbroadcasti128] = ACTIONS(105),
    [anon_sym_vbroadcasti32x4] = ACTIONS(105),
    [anon_sym_vperm2i128] = ACTIONS(105),
    [anon_sym_vpermd] = ACTIONS(105),
    [anon_sym_vpermq] = ACTIONS(105),
    [anon_sym_vpermt2d] = ACTIONS(105),
    [anon_sym_vpermi2d] = ACTIONS(105),
    [anon_sym_tzcnt] = ACTIONS(105),
    [anon_sym_rorx] = ACTIONS(105),
    [anon_sym_psubd] = ACTIONS(105),
    [anon_sym_pmaddwd] = ACTIONS(105),
    [anon_sym_pxor] = ACTIONS(105),
    [anon_sym_psrad] = ACTIONS(105),
    [anon_sym_pslld] = ACTIONS(105),
    [anon_sym_pcmpgtd] = ACTIONS(105),
    [anon_sym_pcmpeqd] = ACTIONS(105),
    [anon_sym_por] = ACTIONS(105),
    [anon_sym_paddw] = ACTIONS(105),
    [anon_sym_psubusw] = ACTIONS(105),
    [anon_sym_pcmpeqb] = ACTIONS(105),
    [anon_sym_psubusb] = ACTIONS(105),
    [anon_sym_psrld] = ACTIONS(105),
    [anon_sym_psrlw] = ACTIONS(105),
    [anon_sym_psllq] = ACTIONS(105),
    [anon_sym_paddd] = ACTIONS(105),
    [anon_sym_psrlq] = ACTIONS(105),
    [anon_sym_psubb] = ACTIONS(105),
    [anon_sym_maxss] = ACTIONS(105),
    [anon_sym_pmovmskb] = ACTIONS(105),
    [anon_sym_pinsrw] = ACTIONS(105),
    [anon_sym_minss] = ACTIONS(105),
    [anon_sym_prefetcht1] = ACTIONS(105),
    [anon_sym_prefetcht0] = ACTIONS(105),
    [anon_sym_pextrw] = ACTIONS(105),
    [anon_sym_ucomiss] = ACTIONS(105),
    [anon_sym_shufps] = ACTIONS(105),
    [anon_sym_addsd] = ACTIONS(105),
    [anon_sym_paddq] = ACTIONS(105),
    [anon_sym_psubq] = ACTIONS(105),
    [anon_sym_pshuflw] = ACTIONS(105),
    [anon_sym_pmuludq] = ACTIONS(105),
    [anon_sym_pshufd] = ACTIONS(105),
    [anon_sym_minsd] = ACTIONS(105),
    [anon_sym_pshufhw] = ACTIONS(105),
    [anon_sym_mfence] = ACTIONS(105),
    [anon_sym_maxsd] = ACTIONS(105),
    [anon_sym_ucomisd] = ACTIONS(105),
    [anon_sym_shufpd] = ACTIONS(105),
    [anon_sym_pslldq] = ACTIONS(105),
    [anon_sym_unpckhpd] = ACTIONS(105),
    [anon_sym_psrldq] = ACTIONS(105),
    [anon_sym_palignr] = ACTIONS(105),
    [anon_sym_pshufb] = ACTIONS(105),
    [anon_sym_pmaddubsw] = ACTIONS(105),
    [anon_sym_pinsrb] = ACTIONS(105),
    [anon_sym_pblendw] = ACTIONS(105),
    [anon_sym_pextrq] = ACTIONS(105),
    [anon_sym_blendvps] = ACTIONS(105),
    [anon_sym_pextrb] = ACTIONS(105),
    [anon_sym_pinsrd] = ACTIONS(105),
    [anon_sym_femms] = ACTIONS(105),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym__line_break] = ACTIONS(109),
    [aux_sym_comment_token1] = ACTIONS(109),
    [aux_sym_comment_token2] = ACTIONS(109),
    [anon_sym_] = ACTIONS(109),
    [aux_sym__address_token1] = ACTIONS(109),
    [anon_sym_adc] = ACTIONS(109),
    [anon_sym_add] = ACTIONS(109),
    [anon_sym_addq] = ACTIONS(109),
    [anon_sym_addl] = ACTIONS(109),
    [anon_sym_addss] = ACTIONS(109),
    [anon_sym_addw] = ACTIONS(109),
    [anon_sym_addb] = ACTIONS(109),
    [anon_sym_cmp] = ACTIONS(109),
    [anon_sym_cmpb] = ACTIONS(109),
    [anon_sym_cmpw] = ACTIONS(109),
    [anon_sym_cmpl] = ACTIONS(109),
    [anon_sym_cmpq] = ACTIONS(109),
    [anon_sym_comiss] = ACTIONS(109),
    [anon_sym_comisd] = ACTIONS(109),
    [anon_sym_inc] = ACTIONS(109),
    [anon_sym_incl] = ACTIONS(109),
    [anon_sym_dec] = ACTIONS(109),
    [anon_sym_div] = ACTIONS(109),
    [anon_sym_divq] = ACTIONS(109),
    [anon_sym_divl] = ACTIONS(109),
    [anon_sym_divss] = ACTIONS(109),
    [anon_sym_divsd] = ACTIONS(109),
    [anon_sym_idiv] = ACTIONS(109),
    [anon_sym_idivl] = ACTIONS(109),
    [anon_sym_sub] = ACTIONS(109),
    [anon_sym_subq] = ACTIONS(109),
    [anon_sym_subl] = ACTIONS(109),
    [anon_sym_subss] = ACTIONS(109),
    [anon_sym_subw] = ACTIONS(109),
    [anon_sym_subb] = ACTIONS(109),
    [anon_sym_subsd] = ACTIONS(109),
    [anon_sym_subpd] = ACTIONS(109),
    [anon_sym_sbb] = ACTIONS(109),
    [anon_sym_mul] = ACTIONS(109),
    [anon_sym_mulq] = ACTIONS(109),
    [anon_sym_mull] = ACTIONS(109),
    [anon_sym_mulss] = ACTIONS(109),
    [anon_sym_mulw] = ACTIONS(109),
    [anon_sym_mulb] = ACTIONS(109),
    [anon_sym_mulsd] = ACTIONS(109),
    [anon_sym_mulx] = ACTIONS(109),
    [anon_sym_imul] = ACTIONS(109),
    [anon_sym_neg] = ACTIONS(109),
    [anon_sym_negl] = ACTIONS(109),
    [anon_sym_negq] = ACTIONS(109),
    [anon_sym_fmulp] = ACTIONS(109),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(109),
    [anon_sym_pclmullqlqdq] = ACTIONS(109),
    [anon_sym_pclmullqhqdq] = ACTIONS(109),
    [anon_sym_vpclmullqhqdq] = ACTIONS(109),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(109),
    [anon_sym_pclmulhqhqdq] = ACTIONS(109),
    [anon_sym_vpclmullqlqdq] = ACTIONS(109),
    [anon_sym_bsf] = ACTIONS(109),
    [anon_sym_bsr] = ACTIONS(109),
    [anon_sym_bts] = ACTIONS(109),
    [anon_sym_bt] = ACTIONS(109),
    [anon_sym_btr] = ACTIONS(109),
    [anon_sym_btl] = ACTIONS(109),
    [anon_sym_setne] = ACTIONS(109),
    [anon_sym_setb] = ACTIONS(109),
    [anon_sym_sete] = ACTIONS(109),
    [anon_sym_setbe] = ACTIONS(109),
    [anon_sym_seta] = ACTIONS(109),
    [anon_sym_setge] = ACTIONS(109),
    [anon_sym_setae] = ACTIONS(109),
    [anon_sym_setl] = ACTIONS(109),
    [anon_sym_setle] = ACTIONS(109),
    [anon_sym_setg] = ACTIONS(109),
    [anon_sym_seto] = ACTIONS(109),
    [anon_sym_setnp] = ACTIONS(109),
    [anon_sym_setp] = ACTIONS(109),
    [anon_sym_setns] = ACTIONS(109),
    [anon_sym_test] = ACTIONS(109),
    [anon_sym_testb] = ACTIONS(109),
    [anon_sym_testl] = ACTIONS(109),
    [anon_sym_knotw] = ACTIONS(109),
    [anon_sym_vpcmpltud] = ACTIONS(109),
    [anon_sym_gs] = ACTIONS(109),
    [anon_sym_re] = ACTIONS(109),
    [anon_sym_ss] = ACTIONS(109),
    [anon_sym_leaveq] = ACTIONS(109),
    [anon_sym_retq] = ACTIONS(109),
    [anon_sym_bswap] = ACTIONS(109),
    [anon_sym_cbtw] = ACTIONS(109),
    [anon_sym_cltd] = ACTIONS(109),
    [anon_sym_cltq] = ACTIONS(109),
    [anon_sym_cmovbe] = ACTIONS(109),
    [anon_sym_cmovl] = ACTIONS(109),
    [anon_sym_cmovae] = ACTIONS(109),
    [anon_sym_cmovo] = ACTIONS(109),
    [anon_sym_cmovne] = ACTIONS(109),
    [anon_sym_cmovns] = ACTIONS(109),
    [anon_sym_cmovg] = ACTIONS(109),
    [anon_sym_cmovp] = ACTIONS(109),
    [anon_sym_cmove] = ACTIONS(109),
    [anon_sym_cmovge] = ACTIONS(109),
    [anon_sym_cmovb] = ACTIONS(109),
    [anon_sym_cmova] = ACTIONS(109),
    [anon_sym_cmovle] = ACTIONS(109),
    [anon_sym_cmovs] = ACTIONS(109),
    [anon_sym_cwtl] = ACTIONS(109),
    [anon_sym_cwtd] = ACTIONS(109),
    [anon_sym_cqto] = ACTIONS(109),
    [anon_sym_cvttsd2si] = ACTIONS(109),
    [anon_sym_cvtss2sd] = ACTIONS(109),
    [anon_sym_cvttss2si] = ACTIONS(109),
    [anon_sym_cvtsi2sd] = ACTIONS(109),
    [anon_sym_cvtsi2ss] = ACTIONS(109),
    [anon_sym_cvtsi2sdq] = ACTIONS(109),
    [anon_sym_cvtsi2sdl] = ACTIONS(109),
    [anon_sym_cvtsd2ss] = ACTIONS(109),
    [anon_sym_cvtsi2ssl] = ACTIONS(109),
    [anon_sym_mov] = ACTIONS(109),
    [anon_sym_movw] = ACTIONS(109),
    [anon_sym_movl] = ACTIONS(109),
    [anon_sym_movq] = ACTIONS(109),
    [anon_sym_movb] = ACTIONS(109),
    [anon_sym_movabs] = ACTIONS(109),
    [anon_sym_movsbw] = ACTIONS(109),
    [anon_sym_movsbq] = ACTIONS(109),
    [anon_sym_movsbl] = ACTIONS(109),
    [anon_sym_movswl] = ACTIONS(109),
    [anon_sym_movswq] = ACTIONS(109),
    [anon_sym_movzbw] = ACTIONS(109),
    [anon_sym_movzbq] = ACTIONS(109),
    [anon_sym_movzbl] = ACTIONS(109),
    [anon_sym_movzwl] = ACTIONS(109),
    [anon_sym_movaps] = ACTIONS(109),
    [anon_sym_movhlps] = ACTIONS(109),
    [anon_sym_movss] = ACTIONS(109),
    [anon_sym_movups] = ACTIONS(109),
    [anon_sym_movsd] = ACTIONS(109),
    [anon_sym_movd] = ACTIONS(109),
    [anon_sym_movhps] = ACTIONS(109),
    [anon_sym_movdqa] = ACTIONS(109),
    [anon_sym_movbe] = ACTIONS(109),
    [anon_sym_movapd] = ACTIONS(109),
    [anon_sym_movdqu] = ACTIONS(109),
    [anon_sym_xchg] = ACTIONS(109),
    [anon_sym_fildl] = ACTIONS(109),
    [anon_sym_fldt] = ACTIONS(109),
    [anon_sym_fstpl] = ACTIONS(109),
    [anon_sym_insb] = ACTIONS(109),
    [anon_sym_insl] = ACTIONS(109),
    [anon_sym_outsb] = ACTIONS(109),
    [anon_sym_outsl] = ACTIONS(109),
    [anon_sym_or] = ACTIONS(109),
    [anon_sym_orq] = ACTIONS(109),
    [anon_sym_orl] = ACTIONS(109),
    [anon_sym_orb] = ACTIONS(109),
    [anon_sym_orw] = ACTIONS(109),
    [anon_sym_xor] = ACTIONS(109),
    [anon_sym_xorl] = ACTIONS(109),
    [anon_sym_xorw] = ACTIONS(109),
    [anon_sym_xorps] = ACTIONS(109),
    [anon_sym_xorpd] = ACTIONS(109),
    [anon_sym_vxorps] = ACTIONS(109),
    [anon_sym_vpxord] = ACTIONS(109),
    [anon_sym_vpxor] = ACTIONS(109),
    [anon_sym_and] = ACTIONS(109),
    [anon_sym_andq] = ACTIONS(109),
    [anon_sym_andl] = ACTIONS(109),
    [anon_sym_andw] = ACTIONS(109),
    [anon_sym_andb] = ACTIONS(109),
    [anon_sym_andn] = ACTIONS(109),
    [anon_sym_andpd] = ACTIONS(109),
    [anon_sym_pand] = ACTIONS(109),
    [anon_sym_pandn] = ACTIONS(109),
    [anon_sym_andps] = ACTIONS(109),
    [anon_sym_vpand] = ACTIONS(109),
    [anon_sym_not] = ACTIONS(109),
    [anon_sym_notl] = ACTIONS(109),
    [anon_sym_notw] = ACTIONS(109),
    [anon_sym_cpuid] = ACTIONS(109),
    [anon_sym_lea] = ACTIONS(109),
    [anon_sym_popcnt] = ACTIONS(109),
    [anon_sym_nop] = ACTIONS(109),
    [anon_sym_nopl] = ACTIONS(109),
    [anon_sym_nopw] = ACTIONS(109),
    [anon_sym_ud2] = ACTIONS(109),
    [anon_sym_data16] = ACTIONS(109),
    [anon_sym_sha1rnds4] = ACTIONS(109),
    [anon_sym_addr32] = ACTIONS(109),
    [anon_sym_sha1msg1] = ACTIONS(109),
    [anon_sym_sha1msg2] = ACTIONS(109),
    [anon_sym_sha1nexte] = ACTIONS(109),
    [anon_sym_endbr64] = ACTIONS(109),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(109),
    [anon_sym_packuswb] = ACTIONS(109),
    [anon_sym_punpckhbw] = ACTIONS(109),
    [anon_sym_punpckhdq] = ACTIONS(109),
    [anon_sym_punpckhwd] = ACTIONS(109),
    [anon_sym_punpcklbw] = ACTIONS(109),
    [anon_sym_punpckldq] = ACTIONS(109),
    [anon_sym_punpcklwd] = ACTIONS(109),
    [anon_sym_vpunpcklwd] = ACTIONS(109),
    [anon_sym_vpunpckldq] = ACTIONS(109),
    [anon_sym_punpcklqdq] = ACTIONS(109),
    [anon_sym_punpckhqdq] = ACTIONS(109),
    [anon_sym_vpunpckhqdq] = ACTIONS(109),
    [anon_sym_vpunpckhdq] = ACTIONS(109),
    [anon_sym_vpunpcklqdq] = ACTIONS(109),
    [anon_sym_vpunpckhwd] = ACTIONS(109),
    [anon_sym_rol] = ACTIONS(109),
    [anon_sym_ror] = ACTIONS(109),
    [anon_sym_sar] = ACTIONS(109),
    [anon_sym_sarl] = ACTIONS(109),
    [anon_sym_sarx] = ACTIONS(109),
    [anon_sym_shl] = ACTIONS(109),
    [anon_sym_shll] = ACTIONS(109),
    [anon_sym_shld] = ACTIONS(109),
    [anon_sym_shlx] = ACTIONS(109),
    [anon_sym_shlq] = ACTIONS(109),
    [anon_sym_shr] = ACTIONS(109),
    [anon_sym_shrq] = ACTIONS(109),
    [anon_sym_shrd] = ACTIONS(109),
    [anon_sym_shrl] = ACTIONS(109),
    [anon_sym_shrx] = ACTIONS(109),
    [anon_sym_vprord] = ACTIONS(109),
    [anon_sym_vprorq] = ACTIONS(109),
    [anon_sym_rorl] = ACTIONS(109),
    [anon_sym_roll] = ACTIONS(109),
    [anon_sym_push] = ACTIONS(109),
    [anon_sym_pushq] = ACTIONS(109),
    [anon_sym_pop] = ACTIONS(109),
    [anon_sym_movslq] = ACTIONS(109),
    [anon_sym_movsb] = ACTIONS(109),
    [anon_sym_rep] = ACTIONS(109),
    [anon_sym_repz] = ACTIONS(109),
    [anon_sym_repnz] = ACTIONS(109),
    [anon_sym_rex] = ACTIONS(109),
    [anon_sym_rex_DOTWB] = ACTIONS(109),
    [anon_sym_rex_DOTWRB] = ACTIONS(109),
    [anon_sym_rex_DOTRXB] = ACTIONS(109),
    [anon_sym_rex_DOTB] = ACTIONS(109),
    [anon_sym_rex_DOTWRXB] = ACTIONS(109),
    [anon_sym_rex_DOTXB] = ACTIONS(109),
    [anon_sym_rex_DOTW] = ACTIONS(109),
    [anon_sym_rex_DOTRB] = ACTIONS(109),
    [anon_sym_xgetbv] = ACTIONS(109),
    [anon_sym_fs] = ACTIONS(109),
    [anon_sym_kmovw] = ACTIONS(109),
    [anon_sym_adcx] = ACTIONS(109),
    [anon_sym_adox] = ACTIONS(109),
    [anon_sym_aesdec] = ACTIONS(109),
    [anon_sym_aesdeclast] = ACTIONS(109),
    [anon_sym_aesenc] = ACTIONS(109),
    [anon_sym_aesenclast] = ACTIONS(109),
    [anon_sym_vaesenc] = ACTIONS(109),
    [anon_sym_vaesenclast] = ACTIONS(109),
    [anon_sym_aeskeygenassist] = ACTIONS(109),
    [anon_sym_vblendps] = ACTIONS(109),
    [anon_sym_vblendvps] = ACTIONS(109),
    [anon_sym_vcvtusi2sd] = ACTIONS(109),
    [anon_sym_vdivsd] = ACTIONS(109),
    [anon_sym_vmovaps] = ACTIONS(109),
    [anon_sym_vmovapd] = ACTIONS(109),
    [anon_sym_vmovss] = ACTIONS(109),
    [anon_sym_vmovdqu] = ACTIONS(109),
    [anon_sym_vmovdqu64] = ACTIONS(109),
    [anon_sym_vmovdqu32] = ACTIONS(109),
    [anon_sym_vmovdqa] = ACTIONS(109),
    [anon_sym_vmovdqa32] = ACTIONS(109),
    [anon_sym_vmovdqa64] = ACTIONS(109),
    [anon_sym_vmovq] = ACTIONS(109),
    [anon_sym_vmovups] = ACTIONS(109),
    [anon_sym_vmovd] = ACTIONS(109),
    [anon_sym_vmovsd] = ACTIONS(109),
    [anon_sym_vmulsd] = ACTIONS(109),
    [anon_sym_vpackusdw] = ACTIONS(109),
    [anon_sym_vpaddd] = ACTIONS(109),
    [anon_sym_vpaddb] = ACTIONS(109),
    [anon_sym_vpaddq] = ACTIONS(109),
    [anon_sym_vpaddw] = ACTIONS(109),
    [anon_sym_vpalignr] = ACTIONS(109),
    [anon_sym_vpcmpgtd] = ACTIONS(109),
    [anon_sym_vpextrw] = ACTIONS(109),
    [anon_sym_vpinsrw] = ACTIONS(109),
    [anon_sym_vpinsrd] = ACTIONS(109),
    [anon_sym_vpinsrq] = ACTIONS(109),
    [anon_sym_vpinsrb] = ACTIONS(109),
    [anon_sym_vpmaddubsw] = ACTIONS(109),
    [anon_sym_vpmaddwd] = ACTIONS(109),
    [anon_sym_vpmullw] = ACTIONS(109),
    [anon_sym_vpmuludq] = ACTIONS(109),
    [anon_sym_vpor] = ACTIONS(109),
    [anon_sym_vpshufb] = ACTIONS(109),
    [anon_sym_vpshufd] = ACTIONS(109),
    [anon_sym_vpslldq] = ACTIONS(109),
    [anon_sym_vpslld] = ACTIONS(109),
    [anon_sym_vpsllq] = ACTIONS(109),
    [anon_sym_vpsllw] = ACTIONS(109),
    [anon_sym_vpsrldq] = ACTIONS(109),
    [anon_sym_vpsrld] = ACTIONS(109),
    [anon_sym_vpsrlq] = ACTIONS(109),
    [anon_sym_vpsrlw] = ACTIONS(109),
    [anon_sym_vpsubusw] = ACTIONS(109),
    [anon_sym_vpsubq] = ACTIONS(109),
    [anon_sym_vpsubd] = ACTIONS(109),
    [anon_sym_vpsubw] = ACTIONS(109),
    [anon_sym_vshufps] = ACTIONS(109),
    [anon_sym_vsubsd] = ACTIONS(109),
    [anon_sym_vucomisd] = ACTIONS(109),
    [anon_sym_vucomiss] = ACTIONS(109),
    [anon_sym_vunpckhpd] = ACTIONS(109),
    [anon_sym_vunpckhps] = ACTIONS(109),
    [anon_sym_vunpcklpd] = ACTIONS(109),
    [anon_sym_vunpcklps] = ACTIONS(109),
    [anon_sym_vbroadcastss] = ACTIONS(109),
    [anon_sym_vinsertf128] = ACTIONS(109),
    [anon_sym_vperm2f128] = ACTIONS(109),
    [anon_sym_vzeroall] = ACTIONS(109),
    [anon_sym_vzeroupper] = ACTIONS(109),
    [anon_sym_vshufi32x4] = ACTIONS(109),
    [anon_sym_vshufi64x2] = ACTIONS(109),
    [anon_sym_vpblendmd] = ACTIONS(109),
    [anon_sym_vextracti128] = ACTIONS(109),
    [anon_sym_vextracti32x4] = ACTIONS(109),
    [anon_sym_vinserti128] = ACTIONS(109),
    [anon_sym_vinserti32x4] = ACTIONS(109),
    [anon_sym_vinserti64x4] = ACTIONS(109),
    [anon_sym_vpblendd] = ACTIONS(109),
    [anon_sym_vpbroadcastq] = ACTIONS(109),
    [anon_sym_vpbroadcastd] = ACTIONS(109),
    [anon_sym_vbroadcasti128] = ACTIONS(109),
    [anon_sym_vbroadcasti32x4] = ACTIONS(109),
    [anon_sym_vperm2i128] = ACTIONS(109),
    [anon_sym_vpermd] = ACTIONS(109),
    [anon_sym_vpermq] = ACTIONS(109),
    [anon_sym_vpermt2d] = ACTIONS(109),
    [anon_sym_vpermi2d] = ACTIONS(109),
    [anon_sym_tzcnt] = ACTIONS(109),
    [anon_sym_rorx] = ACTIONS(109),
    [anon_sym_psubd] = ACTIONS(109),
    [anon_sym_pmaddwd] = ACTIONS(109),
    [anon_sym_pxor] = ACTIONS(109),
    [anon_sym_psrad] = ACTIONS(109),
    [anon_sym_pslld] = ACTIONS(109),
    [anon_sym_pcmpgtd] = ACTIONS(109),
    [anon_sym_pcmpeqd] = ACTIONS(109),
    [anon_sym_por] = ACTIONS(109),
    [anon_sym_paddw] = ACTIONS(109),
    [anon_sym_psubusw] = ACTIONS(109),
    [anon_sym_pcmpeqb] = ACTIONS(109),
    [anon_sym_psubusb] = ACTIONS(109),
    [anon_sym_psrld] = ACTIONS(109),
    [anon_sym_psrlw] = ACTIONS(109),
    [anon_sym_psllq] = ACTIONS(109),
    [anon_sym_paddd] = ACTIONS(109),
    [anon_sym_psrlq] = ACTIONS(109),
    [anon_sym_psubb] = ACTIONS(109),
    [anon_sym_maxss] = ACTIONS(109),
    [anon_sym_pmovmskb] = ACTIONS(109),
    [anon_sym_pinsrw] = ACTIONS(109),
    [anon_sym_minss] = ACTIONS(109),
    [anon_sym_prefetcht1] = ACTIONS(109),
    [anon_sym_prefetcht0] = ACTIONS(109),
    [anon_sym_pextrw] = ACTIONS(109),
    [anon_sym_ucomiss] = ACTIONS(109),
    [anon_sym_shufps] = ACTIONS(109),
    [anon_sym_addsd] = ACTIONS(109),
    [anon_sym_paddq] = ACTIONS(109),
    [anon_sym_psubq] = ACTIONS(109),
    [anon_sym_pshuflw] = ACTIONS(109),
    [anon_sym_pmuludq] = ACTIONS(109),
    [anon_sym_pshufd] = ACTIONS(109),
    [anon_sym_minsd] = ACTIONS(109),
    [anon_sym_pshufhw] = ACTIONS(109),
    [anon_sym_mfence] = ACTIONS(109),
    [anon_sym_maxsd] = ACTIONS(109),
    [anon_sym_ucomisd] = ACTIONS(109),
    [anon_sym_shufpd] = ACTIONS(109),
    [anon_sym_pslldq] = ACTIONS(109),
    [anon_sym_unpckhpd] = ACTIONS(109),
    [anon_sym_psrldq] = ACTIONS(109),
    [anon_sym_palignr] = ACTIONS(109),
    [anon_sym_pshufb] = ACTIONS(109),
    [anon_sym_pmaddubsw] = ACTIONS(109),
    [anon_sym_pinsrb] = ACTIONS(109),
    [anon_sym_pblendw] = ACTIONS(109),
    [anon_sym_pextrq] = ACTIONS(109),
    [anon_sym_blendvps] = ACTIONS(109),
    [anon_sym_pextrb] = ACTIONS(109),
    [anon_sym_pinsrd] = ACTIONS(109),
    [anon_sym_femms] = ACTIONS(109),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym__line_break] = ACTIONS(113),
    [aux_sym_comment_token1] = ACTIONS(113),
    [aux_sym_comment_token2] = ACTIONS(113),
    [anon_sym_] = ACTIONS(113),
    [aux_sym__address_token1] = ACTIONS(113),
    [anon_sym_adc] = ACTIONS(113),
    [anon_sym_add] = ACTIONS(113),
    [anon_sym_addq] = ACTIONS(113),
    [anon_sym_addl] = ACTIONS(113),
    [anon_sym_addss] = ACTIONS(113),
    [anon_sym_addw] = ACTIONS(113),
    [anon_sym_addb] = ACTIONS(113),
    [anon_sym_cmp] = ACTIONS(113),
    [anon_sym_cmpb] = ACTIONS(113),
    [anon_sym_cmpw] = ACTIONS(113),
    [anon_sym_cmpl] = ACTIONS(113),
    [anon_sym_cmpq] = ACTIONS(113),
    [anon_sym_comiss] = ACTIONS(113),
    [anon_sym_comisd] = ACTIONS(113),
    [anon_sym_inc] = ACTIONS(113),
    [anon_sym_incl] = ACTIONS(113),
    [anon_sym_dec] = ACTIONS(113),
    [anon_sym_div] = ACTIONS(113),
    [anon_sym_divq] = ACTIONS(113),
    [anon_sym_divl] = ACTIONS(113),
    [anon_sym_divss] = ACTIONS(113),
    [anon_sym_divsd] = ACTIONS(113),
    [anon_sym_idiv] = ACTIONS(113),
    [anon_sym_idivl] = ACTIONS(113),
    [anon_sym_sub] = ACTIONS(113),
    [anon_sym_subq] = ACTIONS(113),
    [anon_sym_subl] = ACTIONS(113),
    [anon_sym_subss] = ACTIONS(113),
    [anon_sym_subw] = ACTIONS(113),
    [anon_sym_subb] = ACTIONS(113),
    [anon_sym_subsd] = ACTIONS(113),
    [anon_sym_subpd] = ACTIONS(113),
    [anon_sym_sbb] = ACTIONS(113),
    [anon_sym_mul] = ACTIONS(113),
    [anon_sym_mulq] = ACTIONS(113),
    [anon_sym_mull] = ACTIONS(113),
    [anon_sym_mulss] = ACTIONS(113),
    [anon_sym_mulw] = ACTIONS(113),
    [anon_sym_mulb] = ACTIONS(113),
    [anon_sym_mulsd] = ACTIONS(113),
    [anon_sym_mulx] = ACTIONS(113),
    [anon_sym_imul] = ACTIONS(113),
    [anon_sym_neg] = ACTIONS(113),
    [anon_sym_negl] = ACTIONS(113),
    [anon_sym_negq] = ACTIONS(113),
    [anon_sym_fmulp] = ACTIONS(113),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(113),
    [anon_sym_pclmullqlqdq] = ACTIONS(113),
    [anon_sym_pclmullqhqdq] = ACTIONS(113),
    [anon_sym_vpclmullqhqdq] = ACTIONS(113),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(113),
    [anon_sym_pclmulhqhqdq] = ACTIONS(113),
    [anon_sym_vpclmullqlqdq] = ACTIONS(113),
    [anon_sym_bsf] = ACTIONS(113),
    [anon_sym_bsr] = ACTIONS(113),
    [anon_sym_bts] = ACTIONS(113),
    [anon_sym_bt] = ACTIONS(113),
    [anon_sym_btr] = ACTIONS(113),
    [anon_sym_btl] = ACTIONS(113),
    [anon_sym_setne] = ACTIONS(113),
    [anon_sym_setb] = ACTIONS(113),
    [anon_sym_sete] = ACTIONS(113),
    [anon_sym_setbe] = ACTIONS(113),
    [anon_sym_seta] = ACTIONS(113),
    [anon_sym_setge] = ACTIONS(113),
    [anon_sym_setae] = ACTIONS(113),
    [anon_sym_setl] = ACTIONS(113),
    [anon_sym_setle] = ACTIONS(113),
    [anon_sym_setg] = ACTIONS(113),
    [anon_sym_seto] = ACTIONS(113),
    [anon_sym_setnp] = ACTIONS(113),
    [anon_sym_setp] = ACTIONS(113),
    [anon_sym_setns] = ACTIONS(113),
    [anon_sym_test] = ACTIONS(113),
    [anon_sym_testb] = ACTIONS(113),
    [anon_sym_testl] = ACTIONS(113),
    [anon_sym_knotw] = ACTIONS(113),
    [anon_sym_vpcmpltud] = ACTIONS(113),
    [anon_sym_gs] = ACTIONS(113),
    [anon_sym_re] = ACTIONS(113),
    [anon_sym_ss] = ACTIONS(113),
    [anon_sym_leaveq] = ACTIONS(113),
    [anon_sym_retq] = ACTIONS(113),
    [anon_sym_bswap] = ACTIONS(113),
    [anon_sym_cbtw] = ACTIONS(113),
    [anon_sym_cltd] = ACTIONS(113),
    [anon_sym_cltq] = ACTIONS(113),
    [anon_sym_cmovbe] = ACTIONS(113),
    [anon_sym_cmovl] = ACTIONS(113),
    [anon_sym_cmovae] = ACTIONS(113),
    [anon_sym_cmovo] = ACTIONS(113),
    [anon_sym_cmovne] = ACTIONS(113),
    [anon_sym_cmovns] = ACTIONS(113),
    [anon_sym_cmovg] = ACTIONS(113),
    [anon_sym_cmovp] = ACTIONS(113),
    [anon_sym_cmove] = ACTIONS(113),
    [anon_sym_cmovge] = ACTIONS(113),
    [anon_sym_cmovb] = ACTIONS(113),
    [anon_sym_cmova] = ACTIONS(113),
    [anon_sym_cmovle] = ACTIONS(113),
    [anon_sym_cmovs] = ACTIONS(113),
    [anon_sym_cwtl] = ACTIONS(113),
    [anon_sym_cwtd] = ACTIONS(113),
    [anon_sym_cqto] = ACTIONS(113),
    [anon_sym_cvttsd2si] = ACTIONS(113),
    [anon_sym_cvtss2sd] = ACTIONS(113),
    [anon_sym_cvttss2si] = ACTIONS(113),
    [anon_sym_cvtsi2sd] = ACTIONS(113),
    [anon_sym_cvtsi2ss] = ACTIONS(113),
    [anon_sym_cvtsi2sdq] = ACTIONS(113),
    [anon_sym_cvtsi2sdl] = ACTIONS(113),
    [anon_sym_cvtsd2ss] = ACTIONS(113),
    [anon_sym_cvtsi2ssl] = ACTIONS(113),
    [anon_sym_mov] = ACTIONS(113),
    [anon_sym_movw] = ACTIONS(113),
    [anon_sym_movl] = ACTIONS(113),
    [anon_sym_movq] = ACTIONS(113),
    [anon_sym_movb] = ACTIONS(113),
    [anon_sym_movabs] = ACTIONS(113),
    [anon_sym_movsbw] = ACTIONS(113),
    [anon_sym_movsbq] = ACTIONS(113),
    [anon_sym_movsbl] = ACTIONS(113),
    [anon_sym_movswl] = ACTIONS(113),
    [anon_sym_movswq] = ACTIONS(113),
    [anon_sym_movzbw] = ACTIONS(113),
    [anon_sym_movzbq] = ACTIONS(113),
    [anon_sym_movzbl] = ACTIONS(113),
    [anon_sym_movzwl] = ACTIONS(113),
    [anon_sym_movaps] = ACTIONS(113),
    [anon_sym_movhlps] = ACTIONS(113),
    [anon_sym_movss] = ACTIONS(113),
    [anon_sym_movups] = ACTIONS(113),
    [anon_sym_movsd] = ACTIONS(113),
    [anon_sym_movd] = ACTIONS(113),
    [anon_sym_movhps] = ACTIONS(113),
    [anon_sym_movdqa] = ACTIONS(113),
    [anon_sym_movbe] = ACTIONS(113),
    [anon_sym_movapd] = ACTIONS(113),
    [anon_sym_movdqu] = ACTIONS(113),
    [anon_sym_xchg] = ACTIONS(113),
    [anon_sym_fildl] = ACTIONS(113),
    [anon_sym_fldt] = ACTIONS(113),
    [anon_sym_fstpl] = ACTIONS(113),
    [anon_sym_insb] = ACTIONS(113),
    [anon_sym_insl] = ACTIONS(113),
    [anon_sym_outsb] = ACTIONS(113),
    [anon_sym_outsl] = ACTIONS(113),
    [anon_sym_or] = ACTIONS(113),
    [anon_sym_orq] = ACTIONS(113),
    [anon_sym_orl] = ACTIONS(113),
    [anon_sym_orb] = ACTIONS(113),
    [anon_sym_orw] = ACTIONS(113),
    [anon_sym_xor] = ACTIONS(113),
    [anon_sym_xorl] = ACTIONS(113),
    [anon_sym_xorw] = ACTIONS(113),
    [anon_sym_xorps] = ACTIONS(113),
    [anon_sym_xorpd] = ACTIONS(113),
    [anon_sym_vxorps] = ACTIONS(113),
    [anon_sym_vpxord] = ACTIONS(113),
    [anon_sym_vpxor] = ACTIONS(113),
    [anon_sym_and] = ACTIONS(113),
    [anon_sym_andq] = ACTIONS(113),
    [anon_sym_andl] = ACTIONS(113),
    [anon_sym_andw] = ACTIONS(113),
    [anon_sym_andb] = ACTIONS(113),
    [anon_sym_andn] = ACTIONS(113),
    [anon_sym_andpd] = ACTIONS(113),
    [anon_sym_pand] = ACTIONS(113),
    [anon_sym_pandn] = ACTIONS(113),
    [anon_sym_andps] = ACTIONS(113),
    [anon_sym_vpand] = ACTIONS(113),
    [anon_sym_not] = ACTIONS(113),
    [anon_sym_notl] = ACTIONS(113),
    [anon_sym_notw] = ACTIONS(113),
    [anon_sym_cpuid] = ACTIONS(113),
    [anon_sym_lea] = ACTIONS(113),
    [anon_sym_popcnt] = ACTIONS(113),
    [anon_sym_nop] = ACTIONS(113),
    [anon_sym_nopl] = ACTIONS(113),
    [anon_sym_nopw] = ACTIONS(113),
    [anon_sym_ud2] = ACTIONS(113),
    [anon_sym_data16] = ACTIONS(113),
    [anon_sym_sha1rnds4] = ACTIONS(113),
    [anon_sym_addr32] = ACTIONS(113),
    [anon_sym_sha1msg1] = ACTIONS(113),
    [anon_sym_sha1msg2] = ACTIONS(113),
    [anon_sym_sha1nexte] = ACTIONS(113),
    [anon_sym_endbr64] = ACTIONS(113),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(113),
    [anon_sym_packuswb] = ACTIONS(113),
    [anon_sym_punpckhbw] = ACTIONS(113),
    [anon_sym_punpckhdq] = ACTIONS(113),
    [anon_sym_punpckhwd] = ACTIONS(113),
    [anon_sym_punpcklbw] = ACTIONS(113),
    [anon_sym_punpckldq] = ACTIONS(113),
    [anon_sym_punpcklwd] = ACTIONS(113),
    [anon_sym_vpunpcklwd] = ACTIONS(113),
    [anon_sym_vpunpckldq] = ACTIONS(113),
    [anon_sym_punpcklqdq] = ACTIONS(113),
    [anon_sym_punpckhqdq] = ACTIONS(113),
    [anon_sym_vpunpckhqdq] = ACTIONS(113),
    [anon_sym_vpunpckhdq] = ACTIONS(113),
    [anon_sym_vpunpcklqdq] = ACTIONS(113),
    [anon_sym_vpunpckhwd] = ACTIONS(113),
    [anon_sym_rol] = ACTIONS(113),
    [anon_sym_ror] = ACTIONS(113),
    [anon_sym_sar] = ACTIONS(113),
    [anon_sym_sarl] = ACTIONS(113),
    [anon_sym_sarx] = ACTIONS(113),
    [anon_sym_shl] = ACTIONS(113),
    [anon_sym_shll] = ACTIONS(113),
    [anon_sym_shld] = ACTIONS(113),
    [anon_sym_shlx] = ACTIONS(113),
    [anon_sym_shlq] = ACTIONS(113),
    [anon_sym_shr] = ACTIONS(113),
    [anon_sym_shrq] = ACTIONS(113),
    [anon_sym_shrd] = ACTIONS(113),
    [anon_sym_shrl] = ACTIONS(113),
    [anon_sym_shrx] = ACTIONS(113),
    [anon_sym_vprord] = ACTIONS(113),
    [anon_sym_vprorq] = ACTIONS(113),
    [anon_sym_rorl] = ACTIONS(113),
    [anon_sym_roll] = ACTIONS(113),
    [anon_sym_push] = ACTIONS(113),
    [anon_sym_pushq] = ACTIONS(113),
    [anon_sym_pop] = ACTIONS(113),
    [anon_sym_movslq] = ACTIONS(113),
    [anon_sym_movsb] = ACTIONS(113),
    [anon_sym_rep] = ACTIONS(113),
    [anon_sym_repz] = ACTIONS(113),
    [anon_sym_repnz] = ACTIONS(113),
    [anon_sym_rex] = ACTIONS(113),
    [anon_sym_rex_DOTWB] = ACTIONS(113),
    [anon_sym_rex_DOTWRB] = ACTIONS(113),
    [anon_sym_rex_DOTRXB] = ACTIONS(113),
    [anon_sym_rex_DOTB] = ACTIONS(113),
    [anon_sym_rex_DOTWRXB] = ACTIONS(113),
    [anon_sym_rex_DOTXB] = ACTIONS(113),
    [anon_sym_rex_DOTW] = ACTIONS(113),
    [anon_sym_rex_DOTRB] = ACTIONS(113),
    [anon_sym_xgetbv] = ACTIONS(113),
    [anon_sym_fs] = ACTIONS(113),
    [anon_sym_kmovw] = ACTIONS(113),
    [anon_sym_adcx] = ACTIONS(113),
    [anon_sym_adox] = ACTIONS(113),
    [anon_sym_aesdec] = ACTIONS(113),
    [anon_sym_aesdeclast] = ACTIONS(113),
    [anon_sym_aesenc] = ACTIONS(113),
    [anon_sym_aesenclast] = ACTIONS(113),
    [anon_sym_vaesenc] = ACTIONS(113),
    [anon_sym_vaesenclast] = ACTIONS(113),
    [anon_sym_aeskeygenassist] = ACTIONS(113),
    [anon_sym_vblendps] = ACTIONS(113),
    [anon_sym_vblendvps] = ACTIONS(113),
    [anon_sym_vcvtusi2sd] = ACTIONS(113),
    [anon_sym_vdivsd] = ACTIONS(113),
    [anon_sym_vmovaps] = ACTIONS(113),
    [anon_sym_vmovapd] = ACTIONS(113),
    [anon_sym_vmovss] = ACTIONS(113),
    [anon_sym_vmovdqu] = ACTIONS(113),
    [anon_sym_vmovdqu64] = ACTIONS(113),
    [anon_sym_vmovdqu32] = ACTIONS(113),
    [anon_sym_vmovdqa] = ACTIONS(113),
    [anon_sym_vmovdqa32] = ACTIONS(113),
    [anon_sym_vmovdqa64] = ACTIONS(113),
    [anon_sym_vmovq] = ACTIONS(113),
    [anon_sym_vmovups] = ACTIONS(113),
    [anon_sym_vmovd] = ACTIONS(113),
    [anon_sym_vmovsd] = ACTIONS(113),
    [anon_sym_vmulsd] = ACTIONS(113),
    [anon_sym_vpackusdw] = ACTIONS(113),
    [anon_sym_vpaddd] = ACTIONS(113),
    [anon_sym_vpaddb] = ACTIONS(113),
    [anon_sym_vpaddq] = ACTIONS(113),
    [anon_sym_vpaddw] = ACTIONS(113),
    [anon_sym_vpalignr] = ACTIONS(113),
    [anon_sym_vpcmpgtd] = ACTIONS(113),
    [anon_sym_vpextrw] = ACTIONS(113),
    [anon_sym_vpinsrw] = ACTIONS(113),
    [anon_sym_vpinsrd] = ACTIONS(113),
    [anon_sym_vpinsrq] = ACTIONS(113),
    [anon_sym_vpinsrb] = ACTIONS(113),
    [anon_sym_vpmaddubsw] = ACTIONS(113),
    [anon_sym_vpmaddwd] = ACTIONS(113),
    [anon_sym_vpmullw] = ACTIONS(113),
    [anon_sym_vpmuludq] = ACTIONS(113),
    [anon_sym_vpor] = ACTIONS(113),
    [anon_sym_vpshufb] = ACTIONS(113),
    [anon_sym_vpshufd] = ACTIONS(113),
    [anon_sym_vpslldq] = ACTIONS(113),
    [anon_sym_vpslld] = ACTIONS(113),
    [anon_sym_vpsllq] = ACTIONS(113),
    [anon_sym_vpsllw] = ACTIONS(113),
    [anon_sym_vpsrldq] = ACTIONS(113),
    [anon_sym_vpsrld] = ACTIONS(113),
    [anon_sym_vpsrlq] = ACTIONS(113),
    [anon_sym_vpsrlw] = ACTIONS(113),
    [anon_sym_vpsubusw] = ACTIONS(113),
    [anon_sym_vpsubq] = ACTIONS(113),
    [anon_sym_vpsubd] = ACTIONS(113),
    [anon_sym_vpsubw] = ACTIONS(113),
    [anon_sym_vshufps] = ACTIONS(113),
    [anon_sym_vsubsd] = ACTIONS(113),
    [anon_sym_vucomisd] = ACTIONS(113),
    [anon_sym_vucomiss] = ACTIONS(113),
    [anon_sym_vunpckhpd] = ACTIONS(113),
    [anon_sym_vunpckhps] = ACTIONS(113),
    [anon_sym_vunpcklpd] = ACTIONS(113),
    [anon_sym_vunpcklps] = ACTIONS(113),
    [anon_sym_vbroadcastss] = ACTIONS(113),
    [anon_sym_vinsertf128] = ACTIONS(113),
    [anon_sym_vperm2f128] = ACTIONS(113),
    [anon_sym_vzeroall] = ACTIONS(113),
    [anon_sym_vzeroupper] = ACTIONS(113),
    [anon_sym_vshufi32x4] = ACTIONS(113),
    [anon_sym_vshufi64x2] = ACTIONS(113),
    [anon_sym_vpblendmd] = ACTIONS(113),
    [anon_sym_vextracti128] = ACTIONS(113),
    [anon_sym_vextracti32x4] = ACTIONS(113),
    [anon_sym_vinserti128] = ACTIONS(113),
    [anon_sym_vinserti32x4] = ACTIONS(113),
    [anon_sym_vinserti64x4] = ACTIONS(113),
    [anon_sym_vpblendd] = ACTIONS(113),
    [anon_sym_vpbroadcastq] = ACTIONS(113),
    [anon_sym_vpbroadcastd] = ACTIONS(113),
    [anon_sym_vbroadcasti128] = ACTIONS(113),
    [anon_sym_vbroadcasti32x4] = ACTIONS(113),
    [anon_sym_vperm2i128] = ACTIONS(113),
    [anon_sym_vpermd] = ACTIONS(113),
    [anon_sym_vpermq] = ACTIONS(113),
    [anon_sym_vpermt2d] = ACTIONS(113),
    [anon_sym_vpermi2d] = ACTIONS(113),
    [anon_sym_tzcnt] = ACTIONS(113),
    [anon_sym_rorx] = ACTIONS(113),
    [anon_sym_psubd] = ACTIONS(113),
    [anon_sym_pmaddwd] = ACTIONS(113),
    [anon_sym_pxor] = ACTIONS(113),
    [anon_sym_psrad] = ACTIONS(113),
    [anon_sym_pslld] = ACTIONS(113),
    [anon_sym_pcmpgtd] = ACTIONS(113),
    [anon_sym_pcmpeqd] = ACTIONS(113),
    [anon_sym_por] = ACTIONS(113),
    [anon_sym_paddw] = ACTIONS(113),
    [anon_sym_psubusw] = ACTIONS(113),
    [anon_sym_pcmpeqb] = ACTIONS(113),
    [anon_sym_psubusb] = ACTIONS(113),
    [anon_sym_psrld] = ACTIONS(113),
    [anon_sym_psrlw] = ACTIONS(113),
    [anon_sym_psllq] = ACTIONS(113),
    [anon_sym_paddd] = ACTIONS(113),
    [anon_sym_psrlq] = ACTIONS(113),
    [anon_sym_psubb] = ACTIONS(113),
    [anon_sym_maxss] = ACTIONS(113),
    [anon_sym_pmovmskb] = ACTIONS(113),
    [anon_sym_pinsrw] = ACTIONS(113),
    [anon_sym_minss] = ACTIONS(113),
    [anon_sym_prefetcht1] = ACTIONS(113),
    [anon_sym_prefetcht0] = ACTIONS(113),
    [anon_sym_pextrw] = ACTIONS(113),
    [anon_sym_ucomiss] = ACTIONS(113),
    [anon_sym_shufps] = ACTIONS(113),
    [anon_sym_addsd] = ACTIONS(113),
    [anon_sym_paddq] = ACTIONS(113),
    [anon_sym_psubq] = ACTIONS(113),
    [anon_sym_pshuflw] = ACTIONS(113),
    [anon_sym_pmuludq] = ACTIONS(113),
    [anon_sym_pshufd] = ACTIONS(113),
    [anon_sym_minsd] = ACTIONS(113),
    [anon_sym_pshufhw] = ACTIONS(113),
    [anon_sym_mfence] = ACTIONS(113),
    [anon_sym_maxsd] = ACTIONS(113),
    [anon_sym_ucomisd] = ACTIONS(113),
    [anon_sym_shufpd] = ACTIONS(113),
    [anon_sym_pslldq] = ACTIONS(113),
    [anon_sym_unpckhpd] = ACTIONS(113),
    [anon_sym_psrldq] = ACTIONS(113),
    [anon_sym_palignr] = ACTIONS(113),
    [anon_sym_pshufb] = ACTIONS(113),
    [anon_sym_pmaddubsw] = ACTIONS(113),
    [anon_sym_pinsrb] = ACTIONS(113),
    [anon_sym_pblendw] = ACTIONS(113),
    [anon_sym_pextrq] = ACTIONS(113),
    [anon_sym_blendvps] = ACTIONS(113),
    [anon_sym_pextrb] = ACTIONS(113),
    [anon_sym_pinsrd] = ACTIONS(113),
    [anon_sym_femms] = ACTIONS(113),
  },
  [8] = {
    [aux_sym__machine_code_repeat1] = STATE(10),
    [sym__line_break] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(117),
    [aux_sym_comment_token2] = ACTIONS(117),
    [sym__byte] = ACTIONS(119),
    [anon_sym_adc] = ACTIONS(117),
    [anon_sym_add] = ACTIONS(117),
    [anon_sym_addq] = ACTIONS(117),
    [anon_sym_addl] = ACTIONS(117),
    [anon_sym_addss] = ACTIONS(117),
    [anon_sym_addw] = ACTIONS(117),
    [anon_sym_addb] = ACTIONS(117),
    [anon_sym_cmp] = ACTIONS(117),
    [anon_sym_cmpb] = ACTIONS(117),
    [anon_sym_cmpw] = ACTIONS(117),
    [anon_sym_cmpl] = ACTIONS(117),
    [anon_sym_cmpq] = ACTIONS(117),
    [anon_sym_comiss] = ACTIONS(117),
    [anon_sym_comisd] = ACTIONS(117),
    [anon_sym_inc] = ACTIONS(117),
    [anon_sym_incl] = ACTIONS(117),
    [anon_sym_dec] = ACTIONS(117),
    [anon_sym_div] = ACTIONS(117),
    [anon_sym_divq] = ACTIONS(117),
    [anon_sym_divl] = ACTIONS(117),
    [anon_sym_divss] = ACTIONS(117),
    [anon_sym_divsd] = ACTIONS(117),
    [anon_sym_idiv] = ACTIONS(117),
    [anon_sym_idivl] = ACTIONS(117),
    [anon_sym_sub] = ACTIONS(117),
    [anon_sym_subq] = ACTIONS(117),
    [anon_sym_subl] = ACTIONS(117),
    [anon_sym_subss] = ACTIONS(117),
    [anon_sym_subw] = ACTIONS(117),
    [anon_sym_subb] = ACTIONS(117),
    [anon_sym_subsd] = ACTIONS(117),
    [anon_sym_subpd] = ACTIONS(117),
    [anon_sym_sbb] = ACTIONS(117),
    [anon_sym_mul] = ACTIONS(117),
    [anon_sym_mulq] = ACTIONS(117),
    [anon_sym_mull] = ACTIONS(117),
    [anon_sym_mulss] = ACTIONS(117),
    [anon_sym_mulw] = ACTIONS(117),
    [anon_sym_mulb] = ACTIONS(117),
    [anon_sym_mulsd] = ACTIONS(117),
    [anon_sym_mulx] = ACTIONS(117),
    [anon_sym_imul] = ACTIONS(117),
    [anon_sym_neg] = ACTIONS(117),
    [anon_sym_negl] = ACTIONS(117),
    [anon_sym_negq] = ACTIONS(117),
    [anon_sym_fmulp] = ACTIONS(117),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(117),
    [anon_sym_pclmullqlqdq] = ACTIONS(117),
    [anon_sym_pclmullqhqdq] = ACTIONS(117),
    [anon_sym_vpclmullqhqdq] = ACTIONS(117),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(117),
    [anon_sym_pclmulhqhqdq] = ACTIONS(117),
    [anon_sym_vpclmullqlqdq] = ACTIONS(117),
    [anon_sym_bsf] = ACTIONS(117),
    [anon_sym_bsr] = ACTIONS(117),
    [anon_sym_bts] = ACTIONS(117),
    [anon_sym_bt] = ACTIONS(117),
    [anon_sym_btr] = ACTIONS(117),
    [anon_sym_btl] = ACTIONS(117),
    [anon_sym_setne] = ACTIONS(117),
    [anon_sym_setb] = ACTIONS(117),
    [anon_sym_sete] = ACTIONS(117),
    [anon_sym_setbe] = ACTIONS(117),
    [anon_sym_seta] = ACTIONS(117),
    [anon_sym_setge] = ACTIONS(117),
    [anon_sym_setae] = ACTIONS(117),
    [anon_sym_setl] = ACTIONS(117),
    [anon_sym_setle] = ACTIONS(117),
    [anon_sym_setg] = ACTIONS(117),
    [anon_sym_seto] = ACTIONS(117),
    [anon_sym_setnp] = ACTIONS(117),
    [anon_sym_setp] = ACTIONS(117),
    [anon_sym_setns] = ACTIONS(117),
    [anon_sym_test] = ACTIONS(117),
    [anon_sym_testb] = ACTIONS(117),
    [anon_sym_testl] = ACTIONS(117),
    [anon_sym_knotw] = ACTIONS(117),
    [anon_sym_vpcmpltud] = ACTIONS(117),
    [anon_sym_gs] = ACTIONS(117),
    [anon_sym_re] = ACTIONS(117),
    [anon_sym_ss] = ACTIONS(117),
    [anon_sym_leaveq] = ACTIONS(117),
    [anon_sym_retq] = ACTIONS(117),
    [anon_sym_bswap] = ACTIONS(117),
    [anon_sym_cbtw] = ACTIONS(117),
    [anon_sym_cltd] = ACTIONS(117),
    [anon_sym_cltq] = ACTIONS(117),
    [anon_sym_cmovbe] = ACTIONS(117),
    [anon_sym_cmovl] = ACTIONS(117),
    [anon_sym_cmovae] = ACTIONS(117),
    [anon_sym_cmovo] = ACTIONS(117),
    [anon_sym_cmovne] = ACTIONS(117),
    [anon_sym_cmovns] = ACTIONS(117),
    [anon_sym_cmovg] = ACTIONS(117),
    [anon_sym_cmovp] = ACTIONS(117),
    [anon_sym_cmove] = ACTIONS(117),
    [anon_sym_cmovge] = ACTIONS(117),
    [anon_sym_cmovb] = ACTIONS(117),
    [anon_sym_cmova] = ACTIONS(117),
    [anon_sym_cmovle] = ACTIONS(117),
    [anon_sym_cmovs] = ACTIONS(117),
    [anon_sym_cwtl] = ACTIONS(117),
    [anon_sym_cwtd] = ACTIONS(117),
    [anon_sym_cqto] = ACTIONS(117),
    [anon_sym_cvttsd2si] = ACTIONS(117),
    [anon_sym_cvtss2sd] = ACTIONS(117),
    [anon_sym_cvttss2si] = ACTIONS(117),
    [anon_sym_cvtsi2sd] = ACTIONS(117),
    [anon_sym_cvtsi2ss] = ACTIONS(117),
    [anon_sym_cvtsi2sdq] = ACTIONS(117),
    [anon_sym_cvtsi2sdl] = ACTIONS(117),
    [anon_sym_cvtsd2ss] = ACTIONS(117),
    [anon_sym_cvtsi2ssl] = ACTIONS(117),
    [anon_sym_mov] = ACTIONS(117),
    [anon_sym_movw] = ACTIONS(117),
    [anon_sym_movl] = ACTIONS(117),
    [anon_sym_movq] = ACTIONS(117),
    [anon_sym_movb] = ACTIONS(117),
    [anon_sym_movabs] = ACTIONS(117),
    [anon_sym_movsbw] = ACTIONS(117),
    [anon_sym_movsbq] = ACTIONS(117),
    [anon_sym_movsbl] = ACTIONS(117),
    [anon_sym_movswl] = ACTIONS(117),
    [anon_sym_movswq] = ACTIONS(117),
    [anon_sym_movzbw] = ACTIONS(117),
    [anon_sym_movzbq] = ACTIONS(117),
    [anon_sym_movzbl] = ACTIONS(117),
    [anon_sym_movzwl] = ACTIONS(117),
    [anon_sym_movaps] = ACTIONS(117),
    [anon_sym_movhlps] = ACTIONS(117),
    [anon_sym_movss] = ACTIONS(117),
    [anon_sym_movups] = ACTIONS(117),
    [anon_sym_movsd] = ACTIONS(117),
    [anon_sym_movd] = ACTIONS(117),
    [anon_sym_movhps] = ACTIONS(117),
    [anon_sym_movdqa] = ACTIONS(117),
    [anon_sym_movbe] = ACTIONS(117),
    [anon_sym_movapd] = ACTIONS(117),
    [anon_sym_movdqu] = ACTIONS(117),
    [anon_sym_xchg] = ACTIONS(117),
    [anon_sym_fildl] = ACTIONS(117),
    [anon_sym_fldt] = ACTIONS(117),
    [anon_sym_fstpl] = ACTIONS(117),
    [anon_sym_insb] = ACTIONS(117),
    [anon_sym_insl] = ACTIONS(117),
    [anon_sym_outsb] = ACTIONS(117),
    [anon_sym_outsl] = ACTIONS(117),
    [anon_sym_or] = ACTIONS(117),
    [anon_sym_orq] = ACTIONS(117),
    [anon_sym_orl] = ACTIONS(117),
    [anon_sym_orb] = ACTIONS(117),
    [anon_sym_orw] = ACTIONS(117),
    [anon_sym_xor] = ACTIONS(117),
    [anon_sym_xorl] = ACTIONS(117),
    [anon_sym_xorw] = ACTIONS(117),
    [anon_sym_xorps] = ACTIONS(117),
    [anon_sym_xorpd] = ACTIONS(117),
    [anon_sym_vxorps] = ACTIONS(117),
    [anon_sym_vpxord] = ACTIONS(117),
    [anon_sym_vpxor] = ACTIONS(117),
    [anon_sym_and] = ACTIONS(117),
    [anon_sym_andq] = ACTIONS(117),
    [anon_sym_andl] = ACTIONS(117),
    [anon_sym_andw] = ACTIONS(117),
    [anon_sym_andb] = ACTIONS(117),
    [anon_sym_andn] = ACTIONS(117),
    [anon_sym_andpd] = ACTIONS(117),
    [anon_sym_pand] = ACTIONS(117),
    [anon_sym_pandn] = ACTIONS(117),
    [anon_sym_andps] = ACTIONS(117),
    [anon_sym_vpand] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_notl] = ACTIONS(117),
    [anon_sym_notw] = ACTIONS(117),
    [anon_sym_cpuid] = ACTIONS(117),
    [anon_sym_lea] = ACTIONS(117),
    [anon_sym_popcnt] = ACTIONS(117),
    [anon_sym_nop] = ACTIONS(117),
    [anon_sym_nopl] = ACTIONS(117),
    [anon_sym_nopw] = ACTIONS(117),
    [anon_sym_ud2] = ACTIONS(117),
    [anon_sym_data16] = ACTIONS(117),
    [anon_sym_sha1rnds4] = ACTIONS(117),
    [anon_sym_addr32] = ACTIONS(117),
    [anon_sym_sha1msg1] = ACTIONS(117),
    [anon_sym_sha1msg2] = ACTIONS(117),
    [anon_sym_sha1nexte] = ACTIONS(117),
    [anon_sym_endbr64] = ACTIONS(117),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(117),
    [anon_sym_packuswb] = ACTIONS(117),
    [anon_sym_punpckhbw] = ACTIONS(117),
    [anon_sym_punpckhdq] = ACTIONS(117),
    [anon_sym_punpckhwd] = ACTIONS(117),
    [anon_sym_punpcklbw] = ACTIONS(117),
    [anon_sym_punpckldq] = ACTIONS(117),
    [anon_sym_punpcklwd] = ACTIONS(117),
    [anon_sym_vpunpcklwd] = ACTIONS(117),
    [anon_sym_vpunpckldq] = ACTIONS(117),
    [anon_sym_punpcklqdq] = ACTIONS(117),
    [anon_sym_punpckhqdq] = ACTIONS(117),
    [anon_sym_vpunpckhqdq] = ACTIONS(117),
    [anon_sym_vpunpckhdq] = ACTIONS(117),
    [anon_sym_vpunpcklqdq] = ACTIONS(117),
    [anon_sym_vpunpckhwd] = ACTIONS(117),
    [anon_sym_rol] = ACTIONS(117),
    [anon_sym_ror] = ACTIONS(117),
    [anon_sym_sar] = ACTIONS(117),
    [anon_sym_sarl] = ACTIONS(117),
    [anon_sym_sarx] = ACTIONS(117),
    [anon_sym_shl] = ACTIONS(117),
    [anon_sym_shll] = ACTIONS(117),
    [anon_sym_shld] = ACTIONS(117),
    [anon_sym_shlx] = ACTIONS(117),
    [anon_sym_shlq] = ACTIONS(117),
    [anon_sym_shr] = ACTIONS(117),
    [anon_sym_shrq] = ACTIONS(117),
    [anon_sym_shrd] = ACTIONS(117),
    [anon_sym_shrl] = ACTIONS(117),
    [anon_sym_shrx] = ACTIONS(117),
    [anon_sym_vprord] = ACTIONS(117),
    [anon_sym_vprorq] = ACTIONS(117),
    [anon_sym_rorl] = ACTIONS(117),
    [anon_sym_roll] = ACTIONS(117),
    [anon_sym_push] = ACTIONS(117),
    [anon_sym_pushq] = ACTIONS(117),
    [anon_sym_pop] = ACTIONS(117),
    [anon_sym_movslq] = ACTIONS(117),
    [anon_sym_movsb] = ACTIONS(117),
    [anon_sym_rep] = ACTIONS(117),
    [anon_sym_repz] = ACTIONS(117),
    [anon_sym_repnz] = ACTIONS(117),
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
    [anon_sym_adcx] = ACTIONS(117),
    [anon_sym_adox] = ACTIONS(117),
    [anon_sym_aesdec] = ACTIONS(117),
    [anon_sym_aesdeclast] = ACTIONS(117),
    [anon_sym_aesenc] = ACTIONS(117),
    [anon_sym_aesenclast] = ACTIONS(117),
    [anon_sym_vaesenc] = ACTIONS(117),
    [anon_sym_vaesenclast] = ACTIONS(117),
    [anon_sym_aeskeygenassist] = ACTIONS(117),
    [anon_sym_vblendps] = ACTIONS(117),
    [anon_sym_vblendvps] = ACTIONS(117),
    [anon_sym_vcvtusi2sd] = ACTIONS(117),
    [anon_sym_vdivsd] = ACTIONS(117),
    [anon_sym_vmovaps] = ACTIONS(117),
    [anon_sym_vmovapd] = ACTIONS(117),
    [anon_sym_vmovss] = ACTIONS(117),
    [anon_sym_vmovdqu] = ACTIONS(117),
    [anon_sym_vmovdqu64] = ACTIONS(117),
    [anon_sym_vmovdqu32] = ACTIONS(117),
    [anon_sym_vmovdqa] = ACTIONS(117),
    [anon_sym_vmovdqa32] = ACTIONS(117),
    [anon_sym_vmovdqa64] = ACTIONS(117),
    [anon_sym_vmovq] = ACTIONS(117),
    [anon_sym_vmovups] = ACTIONS(117),
    [anon_sym_vmovd] = ACTIONS(117),
    [anon_sym_vmovsd] = ACTIONS(117),
    [anon_sym_vmulsd] = ACTIONS(117),
    [anon_sym_vpackusdw] = ACTIONS(117),
    [anon_sym_vpaddd] = ACTIONS(117),
    [anon_sym_vpaddb] = ACTIONS(117),
    [anon_sym_vpaddq] = ACTIONS(117),
    [anon_sym_vpaddw] = ACTIONS(117),
    [anon_sym_vpalignr] = ACTIONS(117),
    [anon_sym_vpcmpgtd] = ACTIONS(117),
    [anon_sym_vpextrw] = ACTIONS(117),
    [anon_sym_vpinsrw] = ACTIONS(117),
    [anon_sym_vpinsrd] = ACTIONS(117),
    [anon_sym_vpinsrq] = ACTIONS(117),
    [anon_sym_vpinsrb] = ACTIONS(117),
    [anon_sym_vpmaddubsw] = ACTIONS(117),
    [anon_sym_vpmaddwd] = ACTIONS(117),
    [anon_sym_vpmullw] = ACTIONS(117),
    [anon_sym_vpmuludq] = ACTIONS(117),
    [anon_sym_vpor] = ACTIONS(117),
    [anon_sym_vpshufb] = ACTIONS(117),
    [anon_sym_vpshufd] = ACTIONS(117),
    [anon_sym_vpslldq] = ACTIONS(117),
    [anon_sym_vpslld] = ACTIONS(117),
    [anon_sym_vpsllq] = ACTIONS(117),
    [anon_sym_vpsllw] = ACTIONS(117),
    [anon_sym_vpsrldq] = ACTIONS(117),
    [anon_sym_vpsrld] = ACTIONS(117),
    [anon_sym_vpsrlq] = ACTIONS(117),
    [anon_sym_vpsrlw] = ACTIONS(117),
    [anon_sym_vpsubusw] = ACTIONS(117),
    [anon_sym_vpsubq] = ACTIONS(117),
    [anon_sym_vpsubd] = ACTIONS(117),
    [anon_sym_vpsubw] = ACTIONS(117),
    [anon_sym_vshufps] = ACTIONS(117),
    [anon_sym_vsubsd] = ACTIONS(117),
    [anon_sym_vucomisd] = ACTIONS(117),
    [anon_sym_vucomiss] = ACTIONS(117),
    [anon_sym_vunpckhpd] = ACTIONS(117),
    [anon_sym_vunpckhps] = ACTIONS(117),
    [anon_sym_vunpcklpd] = ACTIONS(117),
    [anon_sym_vunpcklps] = ACTIONS(117),
    [anon_sym_vbroadcastss] = ACTIONS(117),
    [anon_sym_vinsertf128] = ACTIONS(117),
    [anon_sym_vperm2f128] = ACTIONS(117),
    [anon_sym_vzeroall] = ACTIONS(117),
    [anon_sym_vzeroupper] = ACTIONS(117),
    [anon_sym_vshufi32x4] = ACTIONS(117),
    [anon_sym_vshufi64x2] = ACTIONS(117),
    [anon_sym_vpblendmd] = ACTIONS(117),
    [anon_sym_vextracti128] = ACTIONS(117),
    [anon_sym_vextracti32x4] = ACTIONS(117),
    [anon_sym_vinserti128] = ACTIONS(117),
    [anon_sym_vinserti32x4] = ACTIONS(117),
    [anon_sym_vinserti64x4] = ACTIONS(117),
    [anon_sym_vpblendd] = ACTIONS(117),
    [anon_sym_vpbroadcastq] = ACTIONS(117),
    [anon_sym_vpbroadcastd] = ACTIONS(117),
    [anon_sym_vbroadcasti128] = ACTIONS(117),
    [anon_sym_vbroadcasti32x4] = ACTIONS(117),
    [anon_sym_vperm2i128] = ACTIONS(117),
    [anon_sym_vpermd] = ACTIONS(117),
    [anon_sym_vpermq] = ACTIONS(117),
    [anon_sym_vpermt2d] = ACTIONS(117),
    [anon_sym_vpermi2d] = ACTIONS(117),
    [anon_sym_tzcnt] = ACTIONS(117),
    [anon_sym_rorx] = ACTIONS(117),
    [anon_sym_psubd] = ACTIONS(117),
    [anon_sym_pmaddwd] = ACTIONS(117),
    [anon_sym_pxor] = ACTIONS(117),
    [anon_sym_psrad] = ACTIONS(117),
    [anon_sym_pslld] = ACTIONS(117),
    [anon_sym_pcmpgtd] = ACTIONS(117),
    [anon_sym_pcmpeqd] = ACTIONS(117),
    [anon_sym_por] = ACTIONS(117),
    [anon_sym_paddw] = ACTIONS(117),
    [anon_sym_psubusw] = ACTIONS(117),
    [anon_sym_pcmpeqb] = ACTIONS(117),
    [anon_sym_psubusb] = ACTIONS(117),
    [anon_sym_psrld] = ACTIONS(117),
    [anon_sym_psrlw] = ACTIONS(117),
    [anon_sym_psllq] = ACTIONS(117),
    [anon_sym_paddd] = ACTIONS(117),
    [anon_sym_psrlq] = ACTIONS(117),
    [anon_sym_psubb] = ACTIONS(117),
    [anon_sym_maxss] = ACTIONS(117),
    [anon_sym_pmovmskb] = ACTIONS(117),
    [anon_sym_pinsrw] = ACTIONS(117),
    [anon_sym_minss] = ACTIONS(117),
    [anon_sym_prefetcht1] = ACTIONS(117),
    [anon_sym_prefetcht0] = ACTIONS(117),
    [anon_sym_pextrw] = ACTIONS(117),
    [anon_sym_ucomiss] = ACTIONS(117),
    [anon_sym_shufps] = ACTIONS(117),
    [anon_sym_addsd] = ACTIONS(117),
    [anon_sym_paddq] = ACTIONS(117),
    [anon_sym_psubq] = ACTIONS(117),
    [anon_sym_pshuflw] = ACTIONS(117),
    [anon_sym_pmuludq] = ACTIONS(117),
    [anon_sym_pshufd] = ACTIONS(117),
    [anon_sym_minsd] = ACTIONS(117),
    [anon_sym_pshufhw] = ACTIONS(117),
    [anon_sym_mfence] = ACTIONS(117),
    [anon_sym_maxsd] = ACTIONS(117),
    [anon_sym_ucomisd] = ACTIONS(117),
    [anon_sym_shufpd] = ACTIONS(117),
    [anon_sym_pslldq] = ACTIONS(117),
    [anon_sym_unpckhpd] = ACTIONS(117),
    [anon_sym_psrldq] = ACTIONS(117),
    [anon_sym_palignr] = ACTIONS(117),
    [anon_sym_pshufb] = ACTIONS(117),
    [anon_sym_pmaddubsw] = ACTIONS(117),
    [anon_sym_pinsrb] = ACTIONS(117),
    [anon_sym_pblendw] = ACTIONS(117),
    [anon_sym_pextrq] = ACTIONS(117),
    [anon_sym_blendvps] = ACTIONS(117),
    [anon_sym_pextrb] = ACTIONS(117),
    [anon_sym_pinsrd] = ACTIONS(117),
    [anon_sym_femms] = ACTIONS(117),
  },
  [9] = {
    [aux_sym__machine_code_repeat1] = STATE(9),
    [sym__line_break] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(123),
    [aux_sym_comment_token2] = ACTIONS(123),
    [sym__byte] = ACTIONS(125),
    [anon_sym_adc] = ACTIONS(123),
    [anon_sym_add] = ACTIONS(123),
    [anon_sym_addq] = ACTIONS(123),
    [anon_sym_addl] = ACTIONS(123),
    [anon_sym_addss] = ACTIONS(123),
    [anon_sym_addw] = ACTIONS(123),
    [anon_sym_addb] = ACTIONS(123),
    [anon_sym_cmp] = ACTIONS(123),
    [anon_sym_cmpb] = ACTIONS(123),
    [anon_sym_cmpw] = ACTIONS(123),
    [anon_sym_cmpl] = ACTIONS(123),
    [anon_sym_cmpq] = ACTIONS(123),
    [anon_sym_comiss] = ACTIONS(123),
    [anon_sym_comisd] = ACTIONS(123),
    [anon_sym_inc] = ACTIONS(123),
    [anon_sym_incl] = ACTIONS(123),
    [anon_sym_dec] = ACTIONS(123),
    [anon_sym_div] = ACTIONS(123),
    [anon_sym_divq] = ACTIONS(123),
    [anon_sym_divl] = ACTIONS(123),
    [anon_sym_divss] = ACTIONS(123),
    [anon_sym_divsd] = ACTIONS(123),
    [anon_sym_idiv] = ACTIONS(123),
    [anon_sym_idivl] = ACTIONS(123),
    [anon_sym_sub] = ACTIONS(123),
    [anon_sym_subq] = ACTIONS(123),
    [anon_sym_subl] = ACTIONS(123),
    [anon_sym_subss] = ACTIONS(123),
    [anon_sym_subw] = ACTIONS(123),
    [anon_sym_subb] = ACTIONS(123),
    [anon_sym_subsd] = ACTIONS(123),
    [anon_sym_subpd] = ACTIONS(123),
    [anon_sym_sbb] = ACTIONS(123),
    [anon_sym_mul] = ACTIONS(123),
    [anon_sym_mulq] = ACTIONS(123),
    [anon_sym_mull] = ACTIONS(123),
    [anon_sym_mulss] = ACTIONS(123),
    [anon_sym_mulw] = ACTIONS(123),
    [anon_sym_mulb] = ACTIONS(123),
    [anon_sym_mulsd] = ACTIONS(123),
    [anon_sym_mulx] = ACTIONS(123),
    [anon_sym_imul] = ACTIONS(123),
    [anon_sym_neg] = ACTIONS(123),
    [anon_sym_negl] = ACTIONS(123),
    [anon_sym_negq] = ACTIONS(123),
    [anon_sym_fmulp] = ACTIONS(123),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(123),
    [anon_sym_pclmullqlqdq] = ACTIONS(123),
    [anon_sym_pclmullqhqdq] = ACTIONS(123),
    [anon_sym_vpclmullqhqdq] = ACTIONS(123),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(123),
    [anon_sym_pclmulhqhqdq] = ACTIONS(123),
    [anon_sym_vpclmullqlqdq] = ACTIONS(123),
    [anon_sym_bsf] = ACTIONS(123),
    [anon_sym_bsr] = ACTIONS(123),
    [anon_sym_bts] = ACTIONS(123),
    [anon_sym_bt] = ACTIONS(123),
    [anon_sym_btr] = ACTIONS(123),
    [anon_sym_btl] = ACTIONS(123),
    [anon_sym_setne] = ACTIONS(123),
    [anon_sym_setb] = ACTIONS(123),
    [anon_sym_sete] = ACTIONS(123),
    [anon_sym_setbe] = ACTIONS(123),
    [anon_sym_seta] = ACTIONS(123),
    [anon_sym_setge] = ACTIONS(123),
    [anon_sym_setae] = ACTIONS(123),
    [anon_sym_setl] = ACTIONS(123),
    [anon_sym_setle] = ACTIONS(123),
    [anon_sym_setg] = ACTIONS(123),
    [anon_sym_seto] = ACTIONS(123),
    [anon_sym_setnp] = ACTIONS(123),
    [anon_sym_setp] = ACTIONS(123),
    [anon_sym_setns] = ACTIONS(123),
    [anon_sym_test] = ACTIONS(123),
    [anon_sym_testb] = ACTIONS(123),
    [anon_sym_testl] = ACTIONS(123),
    [anon_sym_knotw] = ACTIONS(123),
    [anon_sym_vpcmpltud] = ACTIONS(123),
    [anon_sym_gs] = ACTIONS(123),
    [anon_sym_re] = ACTIONS(123),
    [anon_sym_ss] = ACTIONS(123),
    [anon_sym_leaveq] = ACTIONS(123),
    [anon_sym_retq] = ACTIONS(123),
    [anon_sym_bswap] = ACTIONS(123),
    [anon_sym_cbtw] = ACTIONS(123),
    [anon_sym_cltd] = ACTIONS(123),
    [anon_sym_cltq] = ACTIONS(123),
    [anon_sym_cmovbe] = ACTIONS(123),
    [anon_sym_cmovl] = ACTIONS(123),
    [anon_sym_cmovae] = ACTIONS(123),
    [anon_sym_cmovo] = ACTIONS(123),
    [anon_sym_cmovne] = ACTIONS(123),
    [anon_sym_cmovns] = ACTIONS(123),
    [anon_sym_cmovg] = ACTIONS(123),
    [anon_sym_cmovp] = ACTIONS(123),
    [anon_sym_cmove] = ACTIONS(123),
    [anon_sym_cmovge] = ACTIONS(123),
    [anon_sym_cmovb] = ACTIONS(123),
    [anon_sym_cmova] = ACTIONS(123),
    [anon_sym_cmovle] = ACTIONS(123),
    [anon_sym_cmovs] = ACTIONS(123),
    [anon_sym_cwtl] = ACTIONS(123),
    [anon_sym_cwtd] = ACTIONS(123),
    [anon_sym_cqto] = ACTIONS(123),
    [anon_sym_cvttsd2si] = ACTIONS(123),
    [anon_sym_cvtss2sd] = ACTIONS(123),
    [anon_sym_cvttss2si] = ACTIONS(123),
    [anon_sym_cvtsi2sd] = ACTIONS(123),
    [anon_sym_cvtsi2ss] = ACTIONS(123),
    [anon_sym_cvtsi2sdq] = ACTIONS(123),
    [anon_sym_cvtsi2sdl] = ACTIONS(123),
    [anon_sym_cvtsd2ss] = ACTIONS(123),
    [anon_sym_cvtsi2ssl] = ACTIONS(123),
    [anon_sym_mov] = ACTIONS(123),
    [anon_sym_movw] = ACTIONS(123),
    [anon_sym_movl] = ACTIONS(123),
    [anon_sym_movq] = ACTIONS(123),
    [anon_sym_movb] = ACTIONS(123),
    [anon_sym_movabs] = ACTIONS(123),
    [anon_sym_movsbw] = ACTIONS(123),
    [anon_sym_movsbq] = ACTIONS(123),
    [anon_sym_movsbl] = ACTIONS(123),
    [anon_sym_movswl] = ACTIONS(123),
    [anon_sym_movswq] = ACTIONS(123),
    [anon_sym_movzbw] = ACTIONS(123),
    [anon_sym_movzbq] = ACTIONS(123),
    [anon_sym_movzbl] = ACTIONS(123),
    [anon_sym_movzwl] = ACTIONS(123),
    [anon_sym_movaps] = ACTIONS(123),
    [anon_sym_movhlps] = ACTIONS(123),
    [anon_sym_movss] = ACTIONS(123),
    [anon_sym_movups] = ACTIONS(123),
    [anon_sym_movsd] = ACTIONS(123),
    [anon_sym_movd] = ACTIONS(123),
    [anon_sym_movhps] = ACTIONS(123),
    [anon_sym_movdqa] = ACTIONS(123),
    [anon_sym_movbe] = ACTIONS(123),
    [anon_sym_movapd] = ACTIONS(123),
    [anon_sym_movdqu] = ACTIONS(123),
    [anon_sym_xchg] = ACTIONS(123),
    [anon_sym_fildl] = ACTIONS(123),
    [anon_sym_fldt] = ACTIONS(123),
    [anon_sym_fstpl] = ACTIONS(123),
    [anon_sym_insb] = ACTIONS(123),
    [anon_sym_insl] = ACTIONS(123),
    [anon_sym_outsb] = ACTIONS(123),
    [anon_sym_outsl] = ACTIONS(123),
    [anon_sym_or] = ACTIONS(123),
    [anon_sym_orq] = ACTIONS(123),
    [anon_sym_orl] = ACTIONS(123),
    [anon_sym_orb] = ACTIONS(123),
    [anon_sym_orw] = ACTIONS(123),
    [anon_sym_xor] = ACTIONS(123),
    [anon_sym_xorl] = ACTIONS(123),
    [anon_sym_xorw] = ACTIONS(123),
    [anon_sym_xorps] = ACTIONS(123),
    [anon_sym_xorpd] = ACTIONS(123),
    [anon_sym_vxorps] = ACTIONS(123),
    [anon_sym_vpxord] = ACTIONS(123),
    [anon_sym_vpxor] = ACTIONS(123),
    [anon_sym_and] = ACTIONS(123),
    [anon_sym_andq] = ACTIONS(123),
    [anon_sym_andl] = ACTIONS(123),
    [anon_sym_andw] = ACTIONS(123),
    [anon_sym_andb] = ACTIONS(123),
    [anon_sym_andn] = ACTIONS(123),
    [anon_sym_andpd] = ACTIONS(123),
    [anon_sym_pand] = ACTIONS(123),
    [anon_sym_pandn] = ACTIONS(123),
    [anon_sym_andps] = ACTIONS(123),
    [anon_sym_vpand] = ACTIONS(123),
    [anon_sym_not] = ACTIONS(123),
    [anon_sym_notl] = ACTIONS(123),
    [anon_sym_notw] = ACTIONS(123),
    [anon_sym_cpuid] = ACTIONS(123),
    [anon_sym_lea] = ACTIONS(123),
    [anon_sym_popcnt] = ACTIONS(123),
    [anon_sym_nop] = ACTIONS(123),
    [anon_sym_nopl] = ACTIONS(123),
    [anon_sym_nopw] = ACTIONS(123),
    [anon_sym_ud2] = ACTIONS(123),
    [anon_sym_data16] = ACTIONS(123),
    [anon_sym_sha1rnds4] = ACTIONS(123),
    [anon_sym_addr32] = ACTIONS(123),
    [anon_sym_sha1msg1] = ACTIONS(123),
    [anon_sym_sha1msg2] = ACTIONS(123),
    [anon_sym_sha1nexte] = ACTIONS(123),
    [anon_sym_endbr64] = ACTIONS(123),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(123),
    [anon_sym_packuswb] = ACTIONS(123),
    [anon_sym_punpckhbw] = ACTIONS(123),
    [anon_sym_punpckhdq] = ACTIONS(123),
    [anon_sym_punpckhwd] = ACTIONS(123),
    [anon_sym_punpcklbw] = ACTIONS(123),
    [anon_sym_punpckldq] = ACTIONS(123),
    [anon_sym_punpcklwd] = ACTIONS(123),
    [anon_sym_vpunpcklwd] = ACTIONS(123),
    [anon_sym_vpunpckldq] = ACTIONS(123),
    [anon_sym_punpcklqdq] = ACTIONS(123),
    [anon_sym_punpckhqdq] = ACTIONS(123),
    [anon_sym_vpunpckhqdq] = ACTIONS(123),
    [anon_sym_vpunpckhdq] = ACTIONS(123),
    [anon_sym_vpunpcklqdq] = ACTIONS(123),
    [anon_sym_vpunpckhwd] = ACTIONS(123),
    [anon_sym_rol] = ACTIONS(123),
    [anon_sym_ror] = ACTIONS(123),
    [anon_sym_sar] = ACTIONS(123),
    [anon_sym_sarl] = ACTIONS(123),
    [anon_sym_sarx] = ACTIONS(123),
    [anon_sym_shl] = ACTIONS(123),
    [anon_sym_shll] = ACTIONS(123),
    [anon_sym_shld] = ACTIONS(123),
    [anon_sym_shlx] = ACTIONS(123),
    [anon_sym_shlq] = ACTIONS(123),
    [anon_sym_shr] = ACTIONS(123),
    [anon_sym_shrq] = ACTIONS(123),
    [anon_sym_shrd] = ACTIONS(123),
    [anon_sym_shrl] = ACTIONS(123),
    [anon_sym_shrx] = ACTIONS(123),
    [anon_sym_vprord] = ACTIONS(123),
    [anon_sym_vprorq] = ACTIONS(123),
    [anon_sym_rorl] = ACTIONS(123),
    [anon_sym_roll] = ACTIONS(123),
    [anon_sym_push] = ACTIONS(123),
    [anon_sym_pushq] = ACTIONS(123),
    [anon_sym_pop] = ACTIONS(123),
    [anon_sym_movslq] = ACTIONS(123),
    [anon_sym_movsb] = ACTIONS(123),
    [anon_sym_rep] = ACTIONS(123),
    [anon_sym_repz] = ACTIONS(123),
    [anon_sym_repnz] = ACTIONS(123),
    [anon_sym_rex] = ACTIONS(123),
    [anon_sym_rex_DOTWB] = ACTIONS(123),
    [anon_sym_rex_DOTWRB] = ACTIONS(123),
    [anon_sym_rex_DOTRXB] = ACTIONS(123),
    [anon_sym_rex_DOTB] = ACTIONS(123),
    [anon_sym_rex_DOTWRXB] = ACTIONS(123),
    [anon_sym_rex_DOTXB] = ACTIONS(123),
    [anon_sym_rex_DOTW] = ACTIONS(123),
    [anon_sym_rex_DOTRB] = ACTIONS(123),
    [anon_sym_xgetbv] = ACTIONS(123),
    [anon_sym_fs] = ACTIONS(123),
    [anon_sym_kmovw] = ACTIONS(123),
    [anon_sym_adcx] = ACTIONS(123),
    [anon_sym_adox] = ACTIONS(123),
    [anon_sym_aesdec] = ACTIONS(123),
    [anon_sym_aesdeclast] = ACTIONS(123),
    [anon_sym_aesenc] = ACTIONS(123),
    [anon_sym_aesenclast] = ACTIONS(123),
    [anon_sym_vaesenc] = ACTIONS(123),
    [anon_sym_vaesenclast] = ACTIONS(123),
    [anon_sym_aeskeygenassist] = ACTIONS(123),
    [anon_sym_vblendps] = ACTIONS(123),
    [anon_sym_vblendvps] = ACTIONS(123),
    [anon_sym_vcvtusi2sd] = ACTIONS(123),
    [anon_sym_vdivsd] = ACTIONS(123),
    [anon_sym_vmovaps] = ACTIONS(123),
    [anon_sym_vmovapd] = ACTIONS(123),
    [anon_sym_vmovss] = ACTIONS(123),
    [anon_sym_vmovdqu] = ACTIONS(123),
    [anon_sym_vmovdqu64] = ACTIONS(123),
    [anon_sym_vmovdqu32] = ACTIONS(123),
    [anon_sym_vmovdqa] = ACTIONS(123),
    [anon_sym_vmovdqa32] = ACTIONS(123),
    [anon_sym_vmovdqa64] = ACTIONS(123),
    [anon_sym_vmovq] = ACTIONS(123),
    [anon_sym_vmovups] = ACTIONS(123),
    [anon_sym_vmovd] = ACTIONS(123),
    [anon_sym_vmovsd] = ACTIONS(123),
    [anon_sym_vmulsd] = ACTIONS(123),
    [anon_sym_vpackusdw] = ACTIONS(123),
    [anon_sym_vpaddd] = ACTIONS(123),
    [anon_sym_vpaddb] = ACTIONS(123),
    [anon_sym_vpaddq] = ACTIONS(123),
    [anon_sym_vpaddw] = ACTIONS(123),
    [anon_sym_vpalignr] = ACTIONS(123),
    [anon_sym_vpcmpgtd] = ACTIONS(123),
    [anon_sym_vpextrw] = ACTIONS(123),
    [anon_sym_vpinsrw] = ACTIONS(123),
    [anon_sym_vpinsrd] = ACTIONS(123),
    [anon_sym_vpinsrq] = ACTIONS(123),
    [anon_sym_vpinsrb] = ACTIONS(123),
    [anon_sym_vpmaddubsw] = ACTIONS(123),
    [anon_sym_vpmaddwd] = ACTIONS(123),
    [anon_sym_vpmullw] = ACTIONS(123),
    [anon_sym_vpmuludq] = ACTIONS(123),
    [anon_sym_vpor] = ACTIONS(123),
    [anon_sym_vpshufb] = ACTIONS(123),
    [anon_sym_vpshufd] = ACTIONS(123),
    [anon_sym_vpslldq] = ACTIONS(123),
    [anon_sym_vpslld] = ACTIONS(123),
    [anon_sym_vpsllq] = ACTIONS(123),
    [anon_sym_vpsllw] = ACTIONS(123),
    [anon_sym_vpsrldq] = ACTIONS(123),
    [anon_sym_vpsrld] = ACTIONS(123),
    [anon_sym_vpsrlq] = ACTIONS(123),
    [anon_sym_vpsrlw] = ACTIONS(123),
    [anon_sym_vpsubusw] = ACTIONS(123),
    [anon_sym_vpsubq] = ACTIONS(123),
    [anon_sym_vpsubd] = ACTIONS(123),
    [anon_sym_vpsubw] = ACTIONS(123),
    [anon_sym_vshufps] = ACTIONS(123),
    [anon_sym_vsubsd] = ACTIONS(123),
    [anon_sym_vucomisd] = ACTIONS(123),
    [anon_sym_vucomiss] = ACTIONS(123),
    [anon_sym_vunpckhpd] = ACTIONS(123),
    [anon_sym_vunpckhps] = ACTIONS(123),
    [anon_sym_vunpcklpd] = ACTIONS(123),
    [anon_sym_vunpcklps] = ACTIONS(123),
    [anon_sym_vbroadcastss] = ACTIONS(123),
    [anon_sym_vinsertf128] = ACTIONS(123),
    [anon_sym_vperm2f128] = ACTIONS(123),
    [anon_sym_vzeroall] = ACTIONS(123),
    [anon_sym_vzeroupper] = ACTIONS(123),
    [anon_sym_vshufi32x4] = ACTIONS(123),
    [anon_sym_vshufi64x2] = ACTIONS(123),
    [anon_sym_vpblendmd] = ACTIONS(123),
    [anon_sym_vextracti128] = ACTIONS(123),
    [anon_sym_vextracti32x4] = ACTIONS(123),
    [anon_sym_vinserti128] = ACTIONS(123),
    [anon_sym_vinserti32x4] = ACTIONS(123),
    [anon_sym_vinserti64x4] = ACTIONS(123),
    [anon_sym_vpblendd] = ACTIONS(123),
    [anon_sym_vpbroadcastq] = ACTIONS(123),
    [anon_sym_vpbroadcastd] = ACTIONS(123),
    [anon_sym_vbroadcasti128] = ACTIONS(123),
    [anon_sym_vbroadcasti32x4] = ACTIONS(123),
    [anon_sym_vperm2i128] = ACTIONS(123),
    [anon_sym_vpermd] = ACTIONS(123),
    [anon_sym_vpermq] = ACTIONS(123),
    [anon_sym_vpermt2d] = ACTIONS(123),
    [anon_sym_vpermi2d] = ACTIONS(123),
    [anon_sym_tzcnt] = ACTIONS(123),
    [anon_sym_rorx] = ACTIONS(123),
    [anon_sym_psubd] = ACTIONS(123),
    [anon_sym_pmaddwd] = ACTIONS(123),
    [anon_sym_pxor] = ACTIONS(123),
    [anon_sym_psrad] = ACTIONS(123),
    [anon_sym_pslld] = ACTIONS(123),
    [anon_sym_pcmpgtd] = ACTIONS(123),
    [anon_sym_pcmpeqd] = ACTIONS(123),
    [anon_sym_por] = ACTIONS(123),
    [anon_sym_paddw] = ACTIONS(123),
    [anon_sym_psubusw] = ACTIONS(123),
    [anon_sym_pcmpeqb] = ACTIONS(123),
    [anon_sym_psubusb] = ACTIONS(123),
    [anon_sym_psrld] = ACTIONS(123),
    [anon_sym_psrlw] = ACTIONS(123),
    [anon_sym_psllq] = ACTIONS(123),
    [anon_sym_paddd] = ACTIONS(123),
    [anon_sym_psrlq] = ACTIONS(123),
    [anon_sym_psubb] = ACTIONS(123),
    [anon_sym_maxss] = ACTIONS(123),
    [anon_sym_pmovmskb] = ACTIONS(123),
    [anon_sym_pinsrw] = ACTIONS(123),
    [anon_sym_minss] = ACTIONS(123),
    [anon_sym_prefetcht1] = ACTIONS(123),
    [anon_sym_prefetcht0] = ACTIONS(123),
    [anon_sym_pextrw] = ACTIONS(123),
    [anon_sym_ucomiss] = ACTIONS(123),
    [anon_sym_shufps] = ACTIONS(123),
    [anon_sym_addsd] = ACTIONS(123),
    [anon_sym_paddq] = ACTIONS(123),
    [anon_sym_psubq] = ACTIONS(123),
    [anon_sym_pshuflw] = ACTIONS(123),
    [anon_sym_pmuludq] = ACTIONS(123),
    [anon_sym_pshufd] = ACTIONS(123),
    [anon_sym_minsd] = ACTIONS(123),
    [anon_sym_pshufhw] = ACTIONS(123),
    [anon_sym_mfence] = ACTIONS(123),
    [anon_sym_maxsd] = ACTIONS(123),
    [anon_sym_ucomisd] = ACTIONS(123),
    [anon_sym_shufpd] = ACTIONS(123),
    [anon_sym_pslldq] = ACTIONS(123),
    [anon_sym_unpckhpd] = ACTIONS(123),
    [anon_sym_psrldq] = ACTIONS(123),
    [anon_sym_palignr] = ACTIONS(123),
    [anon_sym_pshufb] = ACTIONS(123),
    [anon_sym_pmaddubsw] = ACTIONS(123),
    [anon_sym_pinsrb] = ACTIONS(123),
    [anon_sym_pblendw] = ACTIONS(123),
    [anon_sym_pextrq] = ACTIONS(123),
    [anon_sym_blendvps] = ACTIONS(123),
    [anon_sym_pextrb] = ACTIONS(123),
    [anon_sym_pinsrd] = ACTIONS(123),
    [anon_sym_femms] = ACTIONS(123),
  },
  [10] = {
    [aux_sym__machine_code_repeat1] = STATE(9),
    [sym__line_break] = ACTIONS(128),
    [aux_sym_comment_token1] = ACTIONS(130),
    [aux_sym_comment_token2] = ACTIONS(130),
    [sym__byte] = ACTIONS(132),
    [anon_sym_adc] = ACTIONS(130),
    [anon_sym_add] = ACTIONS(130),
    [anon_sym_addq] = ACTIONS(130),
    [anon_sym_addl] = ACTIONS(130),
    [anon_sym_addss] = ACTIONS(130),
    [anon_sym_addw] = ACTIONS(130),
    [anon_sym_addb] = ACTIONS(130),
    [anon_sym_cmp] = ACTIONS(130),
    [anon_sym_cmpb] = ACTIONS(130),
    [anon_sym_cmpw] = ACTIONS(130),
    [anon_sym_cmpl] = ACTIONS(130),
    [anon_sym_cmpq] = ACTIONS(130),
    [anon_sym_comiss] = ACTIONS(130),
    [anon_sym_comisd] = ACTIONS(130),
    [anon_sym_inc] = ACTIONS(130),
    [anon_sym_incl] = ACTIONS(130),
    [anon_sym_dec] = ACTIONS(130),
    [anon_sym_div] = ACTIONS(130),
    [anon_sym_divq] = ACTIONS(130),
    [anon_sym_divl] = ACTIONS(130),
    [anon_sym_divss] = ACTIONS(130),
    [anon_sym_divsd] = ACTIONS(130),
    [anon_sym_idiv] = ACTIONS(130),
    [anon_sym_idivl] = ACTIONS(130),
    [anon_sym_sub] = ACTIONS(130),
    [anon_sym_subq] = ACTIONS(130),
    [anon_sym_subl] = ACTIONS(130),
    [anon_sym_subss] = ACTIONS(130),
    [anon_sym_subw] = ACTIONS(130),
    [anon_sym_subb] = ACTIONS(130),
    [anon_sym_subsd] = ACTIONS(130),
    [anon_sym_subpd] = ACTIONS(130),
    [anon_sym_sbb] = ACTIONS(130),
    [anon_sym_mul] = ACTIONS(130),
    [anon_sym_mulq] = ACTIONS(130),
    [anon_sym_mull] = ACTIONS(130),
    [anon_sym_mulss] = ACTIONS(130),
    [anon_sym_mulw] = ACTIONS(130),
    [anon_sym_mulb] = ACTIONS(130),
    [anon_sym_mulsd] = ACTIONS(130),
    [anon_sym_mulx] = ACTIONS(130),
    [anon_sym_imul] = ACTIONS(130),
    [anon_sym_neg] = ACTIONS(130),
    [anon_sym_negl] = ACTIONS(130),
    [anon_sym_negq] = ACTIONS(130),
    [anon_sym_fmulp] = ACTIONS(130),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(130),
    [anon_sym_pclmullqlqdq] = ACTIONS(130),
    [anon_sym_pclmullqhqdq] = ACTIONS(130),
    [anon_sym_vpclmullqhqdq] = ACTIONS(130),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(130),
    [anon_sym_pclmulhqhqdq] = ACTIONS(130),
    [anon_sym_vpclmullqlqdq] = ACTIONS(130),
    [anon_sym_bsf] = ACTIONS(130),
    [anon_sym_bsr] = ACTIONS(130),
    [anon_sym_bts] = ACTIONS(130),
    [anon_sym_bt] = ACTIONS(130),
    [anon_sym_btr] = ACTIONS(130),
    [anon_sym_btl] = ACTIONS(130),
    [anon_sym_setne] = ACTIONS(130),
    [anon_sym_setb] = ACTIONS(130),
    [anon_sym_sete] = ACTIONS(130),
    [anon_sym_setbe] = ACTIONS(130),
    [anon_sym_seta] = ACTIONS(130),
    [anon_sym_setge] = ACTIONS(130),
    [anon_sym_setae] = ACTIONS(130),
    [anon_sym_setl] = ACTIONS(130),
    [anon_sym_setle] = ACTIONS(130),
    [anon_sym_setg] = ACTIONS(130),
    [anon_sym_seto] = ACTIONS(130),
    [anon_sym_setnp] = ACTIONS(130),
    [anon_sym_setp] = ACTIONS(130),
    [anon_sym_setns] = ACTIONS(130),
    [anon_sym_test] = ACTIONS(130),
    [anon_sym_testb] = ACTIONS(130),
    [anon_sym_testl] = ACTIONS(130),
    [anon_sym_knotw] = ACTIONS(130),
    [anon_sym_vpcmpltud] = ACTIONS(130),
    [anon_sym_gs] = ACTIONS(130),
    [anon_sym_re] = ACTIONS(130),
    [anon_sym_ss] = ACTIONS(130),
    [anon_sym_leaveq] = ACTIONS(130),
    [anon_sym_retq] = ACTIONS(130),
    [anon_sym_bswap] = ACTIONS(130),
    [anon_sym_cbtw] = ACTIONS(130),
    [anon_sym_cltd] = ACTIONS(130),
    [anon_sym_cltq] = ACTIONS(130),
    [anon_sym_cmovbe] = ACTIONS(130),
    [anon_sym_cmovl] = ACTIONS(130),
    [anon_sym_cmovae] = ACTIONS(130),
    [anon_sym_cmovo] = ACTIONS(130),
    [anon_sym_cmovne] = ACTIONS(130),
    [anon_sym_cmovns] = ACTIONS(130),
    [anon_sym_cmovg] = ACTIONS(130),
    [anon_sym_cmovp] = ACTIONS(130),
    [anon_sym_cmove] = ACTIONS(130),
    [anon_sym_cmovge] = ACTIONS(130),
    [anon_sym_cmovb] = ACTIONS(130),
    [anon_sym_cmova] = ACTIONS(130),
    [anon_sym_cmovle] = ACTIONS(130),
    [anon_sym_cmovs] = ACTIONS(130),
    [anon_sym_cwtl] = ACTIONS(130),
    [anon_sym_cwtd] = ACTIONS(130),
    [anon_sym_cqto] = ACTIONS(130),
    [anon_sym_cvttsd2si] = ACTIONS(130),
    [anon_sym_cvtss2sd] = ACTIONS(130),
    [anon_sym_cvttss2si] = ACTIONS(130),
    [anon_sym_cvtsi2sd] = ACTIONS(130),
    [anon_sym_cvtsi2ss] = ACTIONS(130),
    [anon_sym_cvtsi2sdq] = ACTIONS(130),
    [anon_sym_cvtsi2sdl] = ACTIONS(130),
    [anon_sym_cvtsd2ss] = ACTIONS(130),
    [anon_sym_cvtsi2ssl] = ACTIONS(130),
    [anon_sym_mov] = ACTIONS(130),
    [anon_sym_movw] = ACTIONS(130),
    [anon_sym_movl] = ACTIONS(130),
    [anon_sym_movq] = ACTIONS(130),
    [anon_sym_movb] = ACTIONS(130),
    [anon_sym_movabs] = ACTIONS(130),
    [anon_sym_movsbw] = ACTIONS(130),
    [anon_sym_movsbq] = ACTIONS(130),
    [anon_sym_movsbl] = ACTIONS(130),
    [anon_sym_movswl] = ACTIONS(130),
    [anon_sym_movswq] = ACTIONS(130),
    [anon_sym_movzbw] = ACTIONS(130),
    [anon_sym_movzbq] = ACTIONS(130),
    [anon_sym_movzbl] = ACTIONS(130),
    [anon_sym_movzwl] = ACTIONS(130),
    [anon_sym_movaps] = ACTIONS(130),
    [anon_sym_movhlps] = ACTIONS(130),
    [anon_sym_movss] = ACTIONS(130),
    [anon_sym_movups] = ACTIONS(130),
    [anon_sym_movsd] = ACTIONS(130),
    [anon_sym_movd] = ACTIONS(130),
    [anon_sym_movhps] = ACTIONS(130),
    [anon_sym_movdqa] = ACTIONS(130),
    [anon_sym_movbe] = ACTIONS(130),
    [anon_sym_movapd] = ACTIONS(130),
    [anon_sym_movdqu] = ACTIONS(130),
    [anon_sym_xchg] = ACTIONS(130),
    [anon_sym_fildl] = ACTIONS(130),
    [anon_sym_fldt] = ACTIONS(130),
    [anon_sym_fstpl] = ACTIONS(130),
    [anon_sym_insb] = ACTIONS(130),
    [anon_sym_insl] = ACTIONS(130),
    [anon_sym_outsb] = ACTIONS(130),
    [anon_sym_outsl] = ACTIONS(130),
    [anon_sym_or] = ACTIONS(130),
    [anon_sym_orq] = ACTIONS(130),
    [anon_sym_orl] = ACTIONS(130),
    [anon_sym_orb] = ACTIONS(130),
    [anon_sym_orw] = ACTIONS(130),
    [anon_sym_xor] = ACTIONS(130),
    [anon_sym_xorl] = ACTIONS(130),
    [anon_sym_xorw] = ACTIONS(130),
    [anon_sym_xorps] = ACTIONS(130),
    [anon_sym_xorpd] = ACTIONS(130),
    [anon_sym_vxorps] = ACTIONS(130),
    [anon_sym_vpxord] = ACTIONS(130),
    [anon_sym_vpxor] = ACTIONS(130),
    [anon_sym_and] = ACTIONS(130),
    [anon_sym_andq] = ACTIONS(130),
    [anon_sym_andl] = ACTIONS(130),
    [anon_sym_andw] = ACTIONS(130),
    [anon_sym_andb] = ACTIONS(130),
    [anon_sym_andn] = ACTIONS(130),
    [anon_sym_andpd] = ACTIONS(130),
    [anon_sym_pand] = ACTIONS(130),
    [anon_sym_pandn] = ACTIONS(130),
    [anon_sym_andps] = ACTIONS(130),
    [anon_sym_vpand] = ACTIONS(130),
    [anon_sym_not] = ACTIONS(130),
    [anon_sym_notl] = ACTIONS(130),
    [anon_sym_notw] = ACTIONS(130),
    [anon_sym_cpuid] = ACTIONS(130),
    [anon_sym_lea] = ACTIONS(130),
    [anon_sym_popcnt] = ACTIONS(130),
    [anon_sym_nop] = ACTIONS(130),
    [anon_sym_nopl] = ACTIONS(130),
    [anon_sym_nopw] = ACTIONS(130),
    [anon_sym_ud2] = ACTIONS(130),
    [anon_sym_data16] = ACTIONS(130),
    [anon_sym_sha1rnds4] = ACTIONS(130),
    [anon_sym_addr32] = ACTIONS(130),
    [anon_sym_sha1msg1] = ACTIONS(130),
    [anon_sym_sha1msg2] = ACTIONS(130),
    [anon_sym_sha1nexte] = ACTIONS(130),
    [anon_sym_endbr64] = ACTIONS(130),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(130),
    [anon_sym_packuswb] = ACTIONS(130),
    [anon_sym_punpckhbw] = ACTIONS(130),
    [anon_sym_punpckhdq] = ACTIONS(130),
    [anon_sym_punpckhwd] = ACTIONS(130),
    [anon_sym_punpcklbw] = ACTIONS(130),
    [anon_sym_punpckldq] = ACTIONS(130),
    [anon_sym_punpcklwd] = ACTIONS(130),
    [anon_sym_vpunpcklwd] = ACTIONS(130),
    [anon_sym_vpunpckldq] = ACTIONS(130),
    [anon_sym_punpcklqdq] = ACTIONS(130),
    [anon_sym_punpckhqdq] = ACTIONS(130),
    [anon_sym_vpunpckhqdq] = ACTIONS(130),
    [anon_sym_vpunpckhdq] = ACTIONS(130),
    [anon_sym_vpunpcklqdq] = ACTIONS(130),
    [anon_sym_vpunpckhwd] = ACTIONS(130),
    [anon_sym_rol] = ACTIONS(130),
    [anon_sym_ror] = ACTIONS(130),
    [anon_sym_sar] = ACTIONS(130),
    [anon_sym_sarl] = ACTIONS(130),
    [anon_sym_sarx] = ACTIONS(130),
    [anon_sym_shl] = ACTIONS(130),
    [anon_sym_shll] = ACTIONS(130),
    [anon_sym_shld] = ACTIONS(130),
    [anon_sym_shlx] = ACTIONS(130),
    [anon_sym_shlq] = ACTIONS(130),
    [anon_sym_shr] = ACTIONS(130),
    [anon_sym_shrq] = ACTIONS(130),
    [anon_sym_shrd] = ACTIONS(130),
    [anon_sym_shrl] = ACTIONS(130),
    [anon_sym_shrx] = ACTIONS(130),
    [anon_sym_vprord] = ACTIONS(130),
    [anon_sym_vprorq] = ACTIONS(130),
    [anon_sym_rorl] = ACTIONS(130),
    [anon_sym_roll] = ACTIONS(130),
    [anon_sym_push] = ACTIONS(130),
    [anon_sym_pushq] = ACTIONS(130),
    [anon_sym_pop] = ACTIONS(130),
    [anon_sym_movslq] = ACTIONS(130),
    [anon_sym_movsb] = ACTIONS(130),
    [anon_sym_rep] = ACTIONS(130),
    [anon_sym_repz] = ACTIONS(130),
    [anon_sym_repnz] = ACTIONS(130),
    [anon_sym_rex] = ACTIONS(130),
    [anon_sym_rex_DOTWB] = ACTIONS(130),
    [anon_sym_rex_DOTWRB] = ACTIONS(130),
    [anon_sym_rex_DOTRXB] = ACTIONS(130),
    [anon_sym_rex_DOTB] = ACTIONS(130),
    [anon_sym_rex_DOTWRXB] = ACTIONS(130),
    [anon_sym_rex_DOTXB] = ACTIONS(130),
    [anon_sym_rex_DOTW] = ACTIONS(130),
    [anon_sym_rex_DOTRB] = ACTIONS(130),
    [anon_sym_xgetbv] = ACTIONS(130),
    [anon_sym_fs] = ACTIONS(130),
    [anon_sym_kmovw] = ACTIONS(130),
    [anon_sym_adcx] = ACTIONS(130),
    [anon_sym_adox] = ACTIONS(130),
    [anon_sym_aesdec] = ACTIONS(130),
    [anon_sym_aesdeclast] = ACTIONS(130),
    [anon_sym_aesenc] = ACTIONS(130),
    [anon_sym_aesenclast] = ACTIONS(130),
    [anon_sym_vaesenc] = ACTIONS(130),
    [anon_sym_vaesenclast] = ACTIONS(130),
    [anon_sym_aeskeygenassist] = ACTIONS(130),
    [anon_sym_vblendps] = ACTIONS(130),
    [anon_sym_vblendvps] = ACTIONS(130),
    [anon_sym_vcvtusi2sd] = ACTIONS(130),
    [anon_sym_vdivsd] = ACTIONS(130),
    [anon_sym_vmovaps] = ACTIONS(130),
    [anon_sym_vmovapd] = ACTIONS(130),
    [anon_sym_vmovss] = ACTIONS(130),
    [anon_sym_vmovdqu] = ACTIONS(130),
    [anon_sym_vmovdqu64] = ACTIONS(130),
    [anon_sym_vmovdqu32] = ACTIONS(130),
    [anon_sym_vmovdqa] = ACTIONS(130),
    [anon_sym_vmovdqa32] = ACTIONS(130),
    [anon_sym_vmovdqa64] = ACTIONS(130),
    [anon_sym_vmovq] = ACTIONS(130),
    [anon_sym_vmovups] = ACTIONS(130),
    [anon_sym_vmovd] = ACTIONS(130),
    [anon_sym_vmovsd] = ACTIONS(130),
    [anon_sym_vmulsd] = ACTIONS(130),
    [anon_sym_vpackusdw] = ACTIONS(130),
    [anon_sym_vpaddd] = ACTIONS(130),
    [anon_sym_vpaddb] = ACTIONS(130),
    [anon_sym_vpaddq] = ACTIONS(130),
    [anon_sym_vpaddw] = ACTIONS(130),
    [anon_sym_vpalignr] = ACTIONS(130),
    [anon_sym_vpcmpgtd] = ACTIONS(130),
    [anon_sym_vpextrw] = ACTIONS(130),
    [anon_sym_vpinsrw] = ACTIONS(130),
    [anon_sym_vpinsrd] = ACTIONS(130),
    [anon_sym_vpinsrq] = ACTIONS(130),
    [anon_sym_vpinsrb] = ACTIONS(130),
    [anon_sym_vpmaddubsw] = ACTIONS(130),
    [anon_sym_vpmaddwd] = ACTIONS(130),
    [anon_sym_vpmullw] = ACTIONS(130),
    [anon_sym_vpmuludq] = ACTIONS(130),
    [anon_sym_vpor] = ACTIONS(130),
    [anon_sym_vpshufb] = ACTIONS(130),
    [anon_sym_vpshufd] = ACTIONS(130),
    [anon_sym_vpslldq] = ACTIONS(130),
    [anon_sym_vpslld] = ACTIONS(130),
    [anon_sym_vpsllq] = ACTIONS(130),
    [anon_sym_vpsllw] = ACTIONS(130),
    [anon_sym_vpsrldq] = ACTIONS(130),
    [anon_sym_vpsrld] = ACTIONS(130),
    [anon_sym_vpsrlq] = ACTIONS(130),
    [anon_sym_vpsrlw] = ACTIONS(130),
    [anon_sym_vpsubusw] = ACTIONS(130),
    [anon_sym_vpsubq] = ACTIONS(130),
    [anon_sym_vpsubd] = ACTIONS(130),
    [anon_sym_vpsubw] = ACTIONS(130),
    [anon_sym_vshufps] = ACTIONS(130),
    [anon_sym_vsubsd] = ACTIONS(130),
    [anon_sym_vucomisd] = ACTIONS(130),
    [anon_sym_vucomiss] = ACTIONS(130),
    [anon_sym_vunpckhpd] = ACTIONS(130),
    [anon_sym_vunpckhps] = ACTIONS(130),
    [anon_sym_vunpcklpd] = ACTIONS(130),
    [anon_sym_vunpcklps] = ACTIONS(130),
    [anon_sym_vbroadcastss] = ACTIONS(130),
    [anon_sym_vinsertf128] = ACTIONS(130),
    [anon_sym_vperm2f128] = ACTIONS(130),
    [anon_sym_vzeroall] = ACTIONS(130),
    [anon_sym_vzeroupper] = ACTIONS(130),
    [anon_sym_vshufi32x4] = ACTIONS(130),
    [anon_sym_vshufi64x2] = ACTIONS(130),
    [anon_sym_vpblendmd] = ACTIONS(130),
    [anon_sym_vextracti128] = ACTIONS(130),
    [anon_sym_vextracti32x4] = ACTIONS(130),
    [anon_sym_vinserti128] = ACTIONS(130),
    [anon_sym_vinserti32x4] = ACTIONS(130),
    [anon_sym_vinserti64x4] = ACTIONS(130),
    [anon_sym_vpblendd] = ACTIONS(130),
    [anon_sym_vpbroadcastq] = ACTIONS(130),
    [anon_sym_vpbroadcastd] = ACTIONS(130),
    [anon_sym_vbroadcasti128] = ACTIONS(130),
    [anon_sym_vbroadcasti32x4] = ACTIONS(130),
    [anon_sym_vperm2i128] = ACTIONS(130),
    [anon_sym_vpermd] = ACTIONS(130),
    [anon_sym_vpermq] = ACTIONS(130),
    [anon_sym_vpermt2d] = ACTIONS(130),
    [anon_sym_vpermi2d] = ACTIONS(130),
    [anon_sym_tzcnt] = ACTIONS(130),
    [anon_sym_rorx] = ACTIONS(130),
    [anon_sym_psubd] = ACTIONS(130),
    [anon_sym_pmaddwd] = ACTIONS(130),
    [anon_sym_pxor] = ACTIONS(130),
    [anon_sym_psrad] = ACTIONS(130),
    [anon_sym_pslld] = ACTIONS(130),
    [anon_sym_pcmpgtd] = ACTIONS(130),
    [anon_sym_pcmpeqd] = ACTIONS(130),
    [anon_sym_por] = ACTIONS(130),
    [anon_sym_paddw] = ACTIONS(130),
    [anon_sym_psubusw] = ACTIONS(130),
    [anon_sym_pcmpeqb] = ACTIONS(130),
    [anon_sym_psubusb] = ACTIONS(130),
    [anon_sym_psrld] = ACTIONS(130),
    [anon_sym_psrlw] = ACTIONS(130),
    [anon_sym_psllq] = ACTIONS(130),
    [anon_sym_paddd] = ACTIONS(130),
    [anon_sym_psrlq] = ACTIONS(130),
    [anon_sym_psubb] = ACTIONS(130),
    [anon_sym_maxss] = ACTIONS(130),
    [anon_sym_pmovmskb] = ACTIONS(130),
    [anon_sym_pinsrw] = ACTIONS(130),
    [anon_sym_minss] = ACTIONS(130),
    [anon_sym_prefetcht1] = ACTIONS(130),
    [anon_sym_prefetcht0] = ACTIONS(130),
    [anon_sym_pextrw] = ACTIONS(130),
    [anon_sym_ucomiss] = ACTIONS(130),
    [anon_sym_shufps] = ACTIONS(130),
    [anon_sym_addsd] = ACTIONS(130),
    [anon_sym_paddq] = ACTIONS(130),
    [anon_sym_psubq] = ACTIONS(130),
    [anon_sym_pshuflw] = ACTIONS(130),
    [anon_sym_pmuludq] = ACTIONS(130),
    [anon_sym_pshufd] = ACTIONS(130),
    [anon_sym_minsd] = ACTIONS(130),
    [anon_sym_pshufhw] = ACTIONS(130),
    [anon_sym_mfence] = ACTIONS(130),
    [anon_sym_maxsd] = ACTIONS(130),
    [anon_sym_ucomisd] = ACTIONS(130),
    [anon_sym_shufpd] = ACTIONS(130),
    [anon_sym_pslldq] = ACTIONS(130),
    [anon_sym_unpckhpd] = ACTIONS(130),
    [anon_sym_psrldq] = ACTIONS(130),
    [anon_sym_palignr] = ACTIONS(130),
    [anon_sym_pshufb] = ACTIONS(130),
    [anon_sym_pmaddubsw] = ACTIONS(130),
    [anon_sym_pinsrb] = ACTIONS(130),
    [anon_sym_pblendw] = ACTIONS(130),
    [anon_sym_pextrq] = ACTIONS(130),
    [anon_sym_blendvps] = ACTIONS(130),
    [anon_sym_pextrb] = ACTIONS(130),
    [anon_sym_pinsrd] = ACTIONS(130),
    [anon_sym_femms] = ACTIONS(130),
  },
  [11] = {
    [sym_operand] = STATE(172),
    [sym_immediateOperand] = STATE(168),
    [sym_registerOperand] = STATE(168),
    [sym_segmentRegisterOperand] = STATE(149),
    [sym_generalRegisterOperand] = STATE(202),
    [sym_generalRegister64Bits] = STATE(203),
    [sym_generalRegister32Bits] = STATE(203),
    [sym_generalRegister16Bits] = STATE(203),
    [sym_generalRegister8Bits] = STATE(203),
    [sym_memoryOperand] = STATE(168),
    [sym_memoryScalaredIndexedOperand] = STATE(171),
    [sym_memorySegmentBaseOperand] = STATE(171),
    [sym_memoryIndirectOperand] = STATE(171),
    [sym_offset] = STATE(251),
    [sym_memoryAbsoluteOperand] = STATE(171),
    [sym_someOpcode] = STATE(168),
    [sym_controlRegisterOperand] = STATE(202),
    [sym_instructionRegisterOperand] = STATE(202),
    [sym_floatRegisterOperand] = STATE(202),
    [sym_otherRegisterOperand] = STATE(202),
    [aux_sym_instruction_repeat1] = STATE(11),
    [aux_sym_operand_repeat1] = STATE(89),
    [sym__line_break] = ACTIONS(134),
    [aux_sym_comment_token1] = ACTIONS(136),
    [aux_sym_comment_token2] = ACTIONS(136),
    [anon_sym_f] = ACTIONS(138),
    [aux_sym_operand_token1] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_DOLLAR] = ACTIONS(147),
    [anon_sym_PERCENTss] = ACTIONS(150),
    [anon_sym_PERCENTcs] = ACTIONS(150),
    [anon_sym_PERCENTds] = ACTIONS(150),
    [anon_sym_PERCENTes] = ACTIONS(150),
    [anon_sym_PERCENTfs] = ACTIONS(150),
    [anon_sym_PERCENTgs] = ACTIONS(150),
    [anon_sym_PERCENTrax] = ACTIONS(153),
    [anon_sym_PERCENTrbx] = ACTIONS(153),
    [anon_sym_PERCENTrcx] = ACTIONS(153),
    [anon_sym_PERCENTrdx] = ACTIONS(153),
    [anon_sym_PERCENTrsi] = ACTIONS(153),
    [anon_sym_PERCENTrdi] = ACTIONS(153),
    [anon_sym_PERCENTrbp] = ACTIONS(153),
    [anon_sym_PERCENTrsp] = ACTIONS(153),
    [anon_sym_PERCENTr8] = ACTIONS(153),
    [anon_sym_PERCENTr9] = ACTIONS(153),
    [anon_sym_PERCENTr10] = ACTIONS(153),
    [anon_sym_PERCENTr11] = ACTIONS(153),
    [anon_sym_PERCENTr12] = ACTIONS(153),
    [anon_sym_PERCENTr13] = ACTIONS(153),
    [anon_sym_PERCENTr14] = ACTIONS(153),
    [anon_sym_PERCENTr15] = ACTIONS(153),
    [anon_sym_PERCENTeax] = ACTIONS(156),
    [anon_sym_PERCENTecx] = ACTIONS(156),
    [anon_sym_PERCENTedx] = ACTIONS(156),
    [anon_sym_PERCENTebx] = ACTIONS(156),
    [anon_sym_PERCENTesi] = ACTIONS(156),
    [anon_sym_PERCENTedi] = ACTIONS(156),
    [anon_sym_PERCENTebp] = ACTIONS(156),
    [anon_sym_PERCENTesp] = ACTIONS(156),
    [anon_sym_PERCENTr8d] = ACTIONS(156),
    [anon_sym_PERCENTr9d] = ACTIONS(156),
    [anon_sym_PERCENTr10d] = ACTIONS(156),
    [anon_sym_PERCENTr11d] = ACTIONS(156),
    [anon_sym_PERCENTr12d] = ACTIONS(156),
    [anon_sym_PERCENTr13d] = ACTIONS(156),
    [anon_sym_PERCENTr14d] = ACTIONS(156),
    [anon_sym_PERCENTr15d] = ACTIONS(156),
    [anon_sym_PERCENTax] = ACTIONS(159),
    [anon_sym_PERCENTcx] = ACTIONS(159),
    [anon_sym_PERCENTdx] = ACTIONS(159),
    [anon_sym_PERCENTbx] = ACTIONS(159),
    [anon_sym_PERCENTsi] = ACTIONS(159),
    [anon_sym_PERCENTdi] = ACTIONS(159),
    [anon_sym_PERCENTsp] = ACTIONS(159),
    [anon_sym_PERCENTbp] = ACTIONS(159),
    [anon_sym_PERCENTr8w] = ACTIONS(159),
    [anon_sym_PERCENTr9w] = ACTIONS(159),
    [anon_sym_PERCENTr10w] = ACTIONS(159),
    [anon_sym_PERCENTr11w] = ACTIONS(159),
    [anon_sym_PERCENTr12w] = ACTIONS(159),
    [anon_sym_PERCENTr13w] = ACTIONS(159),
    [anon_sym_PERCENTr14w] = ACTIONS(159),
    [anon_sym_PERCENTr15w] = ACTIONS(159),
    [anon_sym_PERCENTal] = ACTIONS(162),
    [anon_sym_PERCENTcl] = ACTIONS(162),
    [anon_sym_PERCENTdl] = ACTIONS(162),
    [anon_sym_PERCENTbl] = ACTIONS(162),
    [anon_sym_PERCENTsil] = ACTIONS(162),
    [anon_sym_PERCENTdil] = ACTIONS(162),
    [anon_sym_PERCENTspl] = ACTIONS(162),
    [anon_sym_PERCENTbpl] = ACTIONS(162),
    [anon_sym_PERCENTr8b] = ACTIONS(162),
    [anon_sym_PERCENTr9b] = ACTIONS(162),
    [anon_sym_PERCENTr10b] = ACTIONS(162),
    [anon_sym_PERCENTr11b] = ACTIONS(162),
    [anon_sym_PERCENTr12b] = ACTIONS(162),
    [anon_sym_PERCENTr13b] = ACTIONS(162),
    [anon_sym_PERCENTr14b] = ACTIONS(162),
    [anon_sym_PERCENTr15b] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_movsq] = ACTIONS(171),
    [anon_sym_cmpsb] = ACTIONS(171),
    [anon_sym_cmpxchg] = ACTIONS(171),
    [anon_sym_movsl] = ACTIONS(171),
    [anon_sym_PERCENTcr0] = ACTIONS(174),
    [anon_sym_PERCENTcr2] = ACTIONS(174),
    [anon_sym_PERCENTcr3] = ACTIONS(174),
    [anon_sym_PERCENTcr4] = ACTIONS(174),
    [anon_sym_PERCENTrip] = ACTIONS(177),
    [anon_sym_PERCENTeip] = ACTIONS(177),
    [anon_sym_PERCENTip] = ACTIONS(177),
    [anon_sym_PERCENTst] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(183),
  },
  [12] = {
    [sym_operand] = STATE(73),
    [sym_immediateOperand] = STATE(72),
    [sym_registerOperand] = STATE(72),
    [sym_segmentRegisterOperand] = STATE(67),
    [sym_generalRegisterOperand] = STATE(71),
    [sym_generalRegister64Bits] = STATE(90),
    [sym_generalRegister32Bits] = STATE(90),
    [sym_generalRegister16Bits] = STATE(90),
    [sym_generalRegister8Bits] = STATE(90),
    [sym_memoryOperand] = STATE(72),
    [sym_memoryScalaredIndexedOperand] = STATE(88),
    [sym_memorySegmentBaseOperand] = STATE(88),
    [sym_memoryIndirectOperand] = STATE(88),
    [sym_offset] = STATE(246),
    [sym_memoryAbsoluteOperand] = STATE(88),
    [sym_someOpcode] = STATE(72),
    [sym_controlRegisterOperand] = STATE(71),
    [sym_instructionRegisterOperand] = STATE(71),
    [sym_floatRegisterOperand] = STATE(71),
    [sym_otherRegisterOperand] = STATE(71),
    [aux_sym_instruction_repeat1] = STATE(13),
    [aux_sym_operand_repeat1] = STATE(55),
    [sym__line_break] = ACTIONS(186),
    [aux_sym_comment_token1] = ACTIONS(188),
    [aux_sym_comment_token2] = ACTIONS(188),
    [anon_sym_f] = ACTIONS(190),
    [aux_sym_operand_token1] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [anon_sym_PERCENTss] = ACTIONS(198),
    [anon_sym_PERCENTcs] = ACTIONS(198),
    [anon_sym_PERCENTds] = ACTIONS(198),
    [anon_sym_PERCENTes] = ACTIONS(198),
    [anon_sym_PERCENTfs] = ACTIONS(198),
    [anon_sym_PERCENTgs] = ACTIONS(198),
    [anon_sym_PERCENTrax] = ACTIONS(200),
    [anon_sym_PERCENTrbx] = ACTIONS(200),
    [anon_sym_PERCENTrcx] = ACTIONS(200),
    [anon_sym_PERCENTrdx] = ACTIONS(200),
    [anon_sym_PERCENTrsi] = ACTIONS(200),
    [anon_sym_PERCENTrdi] = ACTIONS(200),
    [anon_sym_PERCENTrbp] = ACTIONS(200),
    [anon_sym_PERCENTrsp] = ACTIONS(200),
    [anon_sym_PERCENTr8] = ACTIONS(200),
    [anon_sym_PERCENTr9] = ACTIONS(200),
    [anon_sym_PERCENTr10] = ACTIONS(200),
    [anon_sym_PERCENTr11] = ACTIONS(200),
    [anon_sym_PERCENTr12] = ACTIONS(200),
    [anon_sym_PERCENTr13] = ACTIONS(200),
    [anon_sym_PERCENTr14] = ACTIONS(200),
    [anon_sym_PERCENTr15] = ACTIONS(200),
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
    [anon_sym_PERCENTax] = ACTIONS(204),
    [anon_sym_PERCENTcx] = ACTIONS(204),
    [anon_sym_PERCENTdx] = ACTIONS(204),
    [anon_sym_PERCENTbx] = ACTIONS(204),
    [anon_sym_PERCENTsi] = ACTIONS(204),
    [anon_sym_PERCENTdi] = ACTIONS(204),
    [anon_sym_PERCENTsp] = ACTIONS(204),
    [anon_sym_PERCENTbp] = ACTIONS(204),
    [anon_sym_PERCENTr8w] = ACTIONS(204),
    [anon_sym_PERCENTr9w] = ACTIONS(204),
    [anon_sym_PERCENTr10w] = ACTIONS(204),
    [anon_sym_PERCENTr11w] = ACTIONS(204),
    [anon_sym_PERCENTr12w] = ACTIONS(204),
    [anon_sym_PERCENTr13w] = ACTIONS(204),
    [anon_sym_PERCENTr14w] = ACTIONS(204),
    [anon_sym_PERCENTr15w] = ACTIONS(204),
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
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_movsq] = ACTIONS(212),
    [anon_sym_cmpsb] = ACTIONS(212),
    [anon_sym_cmpxchg] = ACTIONS(212),
    [anon_sym_movsl] = ACTIONS(212),
    [anon_sym_PERCENTcr0] = ACTIONS(214),
    [anon_sym_PERCENTcr2] = ACTIONS(214),
    [anon_sym_PERCENTcr3] = ACTIONS(214),
    [anon_sym_PERCENTcr4] = ACTIONS(214),
    [anon_sym_PERCENTrip] = ACTIONS(216),
    [anon_sym_PERCENTeip] = ACTIONS(216),
    [anon_sym_PERCENTip] = ACTIONS(216),
    [anon_sym_PERCENTst] = ACTIONS(218),
    [anon_sym_PERCENT] = ACTIONS(220),
  },
  [13] = {
    [sym_operand] = STATE(75),
    [sym_immediateOperand] = STATE(72),
    [sym_registerOperand] = STATE(72),
    [sym_segmentRegisterOperand] = STATE(67),
    [sym_generalRegisterOperand] = STATE(71),
    [sym_generalRegister64Bits] = STATE(90),
    [sym_generalRegister32Bits] = STATE(90),
    [sym_generalRegister16Bits] = STATE(90),
    [sym_generalRegister8Bits] = STATE(90),
    [sym_memoryOperand] = STATE(72),
    [sym_memoryScalaredIndexedOperand] = STATE(88),
    [sym_memorySegmentBaseOperand] = STATE(88),
    [sym_memoryIndirectOperand] = STATE(88),
    [sym_offset] = STATE(246),
    [sym_memoryAbsoluteOperand] = STATE(88),
    [sym_someOpcode] = STATE(72),
    [sym_controlRegisterOperand] = STATE(71),
    [sym_instructionRegisterOperand] = STATE(71),
    [sym_floatRegisterOperand] = STATE(71),
    [sym_otherRegisterOperand] = STATE(71),
    [aux_sym_instruction_repeat1] = STATE(11),
    [aux_sym_operand_repeat1] = STATE(55),
    [sym__line_break] = ACTIONS(222),
    [aux_sym_comment_token1] = ACTIONS(224),
    [aux_sym_comment_token2] = ACTIONS(224),
    [anon_sym_f] = ACTIONS(190),
    [aux_sym_operand_token1] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [anon_sym_PERCENTss] = ACTIONS(198),
    [anon_sym_PERCENTcs] = ACTIONS(198),
    [anon_sym_PERCENTds] = ACTIONS(198),
    [anon_sym_PERCENTes] = ACTIONS(198),
    [anon_sym_PERCENTfs] = ACTIONS(198),
    [anon_sym_PERCENTgs] = ACTIONS(198),
    [anon_sym_PERCENTrax] = ACTIONS(200),
    [anon_sym_PERCENTrbx] = ACTIONS(200),
    [anon_sym_PERCENTrcx] = ACTIONS(200),
    [anon_sym_PERCENTrdx] = ACTIONS(200),
    [anon_sym_PERCENTrsi] = ACTIONS(200),
    [anon_sym_PERCENTrdi] = ACTIONS(200),
    [anon_sym_PERCENTrbp] = ACTIONS(200),
    [anon_sym_PERCENTrsp] = ACTIONS(200),
    [anon_sym_PERCENTr8] = ACTIONS(200),
    [anon_sym_PERCENTr9] = ACTIONS(200),
    [anon_sym_PERCENTr10] = ACTIONS(200),
    [anon_sym_PERCENTr11] = ACTIONS(200),
    [anon_sym_PERCENTr12] = ACTIONS(200),
    [anon_sym_PERCENTr13] = ACTIONS(200),
    [anon_sym_PERCENTr14] = ACTIONS(200),
    [anon_sym_PERCENTr15] = ACTIONS(200),
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
    [anon_sym_PERCENTax] = ACTIONS(204),
    [anon_sym_PERCENTcx] = ACTIONS(204),
    [anon_sym_PERCENTdx] = ACTIONS(204),
    [anon_sym_PERCENTbx] = ACTIONS(204),
    [anon_sym_PERCENTsi] = ACTIONS(204),
    [anon_sym_PERCENTdi] = ACTIONS(204),
    [anon_sym_PERCENTsp] = ACTIONS(204),
    [anon_sym_PERCENTbp] = ACTIONS(204),
    [anon_sym_PERCENTr8w] = ACTIONS(204),
    [anon_sym_PERCENTr9w] = ACTIONS(204),
    [anon_sym_PERCENTr10w] = ACTIONS(204),
    [anon_sym_PERCENTr11w] = ACTIONS(204),
    [anon_sym_PERCENTr12w] = ACTIONS(204),
    [anon_sym_PERCENTr13w] = ACTIONS(204),
    [anon_sym_PERCENTr14w] = ACTIONS(204),
    [anon_sym_PERCENTr15w] = ACTIONS(204),
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
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_movsq] = ACTIONS(212),
    [anon_sym_cmpsb] = ACTIONS(212),
    [anon_sym_cmpxchg] = ACTIONS(212),
    [anon_sym_movsl] = ACTIONS(212),
    [anon_sym_PERCENTcr0] = ACTIONS(214),
    [anon_sym_PERCENTcr2] = ACTIONS(214),
    [anon_sym_PERCENTcr3] = ACTIONS(214),
    [anon_sym_PERCENTcr4] = ACTIONS(214),
    [anon_sym_PERCENTrip] = ACTIONS(216),
    [anon_sym_PERCENTeip] = ACTIONS(216),
    [anon_sym_PERCENTip] = ACTIONS(216),
    [anon_sym_PERCENTst] = ACTIONS(218),
    [anon_sym_PERCENT] = ACTIONS(220),
  },
  [14] = {
    [sym__line_break] = ACTIONS(226),
    [aux_sym_comment_token1] = ACTIONS(228),
    [aux_sym_comment_token2] = ACTIONS(228),
    [anon_sym_f] = ACTIONS(228),
    [aux_sym_operand_token1] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(228),
    [anon_sym_DOLLAR] = ACTIONS(228),
    [anon_sym_PERCENTss] = ACTIONS(228),
    [anon_sym_PERCENTcs] = ACTIONS(228),
    [anon_sym_PERCENTds] = ACTIONS(228),
    [anon_sym_PERCENTes] = ACTIONS(228),
    [anon_sym_PERCENTfs] = ACTIONS(228),
    [anon_sym_PERCENTgs] = ACTIONS(228),
    [anon_sym_PERCENTrax] = ACTIONS(228),
    [anon_sym_PERCENTrbx] = ACTIONS(228),
    [anon_sym_PERCENTrcx] = ACTIONS(228),
    [anon_sym_PERCENTrdx] = ACTIONS(228),
    [anon_sym_PERCENTrsi] = ACTIONS(228),
    [anon_sym_PERCENTrdi] = ACTIONS(228),
    [anon_sym_PERCENTrbp] = ACTIONS(228),
    [anon_sym_PERCENTrsp] = ACTIONS(228),
    [anon_sym_PERCENTr8] = ACTIONS(228),
    [anon_sym_PERCENTr9] = ACTIONS(228),
    [anon_sym_PERCENTr10] = ACTIONS(228),
    [anon_sym_PERCENTr11] = ACTIONS(228),
    [anon_sym_PERCENTr12] = ACTIONS(228),
    [anon_sym_PERCENTr13] = ACTIONS(228),
    [anon_sym_PERCENTr14] = ACTIONS(228),
    [anon_sym_PERCENTr15] = ACTIONS(228),
    [anon_sym_PERCENTeax] = ACTIONS(228),
    [anon_sym_PERCENTecx] = ACTIONS(228),
    [anon_sym_PERCENTedx] = ACTIONS(228),
    [anon_sym_PERCENTebx] = ACTIONS(228),
    [anon_sym_PERCENTesi] = ACTIONS(228),
    [anon_sym_PERCENTedi] = ACTIONS(228),
    [anon_sym_PERCENTebp] = ACTIONS(228),
    [anon_sym_PERCENTesp] = ACTIONS(228),
    [anon_sym_PERCENTr8d] = ACTIONS(228),
    [anon_sym_PERCENTr9d] = ACTIONS(228),
    [anon_sym_PERCENTr10d] = ACTIONS(228),
    [anon_sym_PERCENTr11d] = ACTIONS(228),
    [anon_sym_PERCENTr12d] = ACTIONS(228),
    [anon_sym_PERCENTr13d] = ACTIONS(228),
    [anon_sym_PERCENTr14d] = ACTIONS(228),
    [anon_sym_PERCENTr15d] = ACTIONS(228),
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(228),
    [anon_sym_PERCENTdi] = ACTIONS(228),
    [anon_sym_PERCENTsp] = ACTIONS(228),
    [anon_sym_PERCENTbp] = ACTIONS(228),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(228),
    [anon_sym_PERCENTcl] = ACTIONS(228),
    [anon_sym_PERCENTdl] = ACTIONS(228),
    [anon_sym_PERCENTbl] = ACTIONS(228),
    [anon_sym_PERCENTsil] = ACTIONS(228),
    [anon_sym_PERCENTdil] = ACTIONS(228),
    [anon_sym_PERCENTspl] = ACTIONS(228),
    [anon_sym_PERCENTbpl] = ACTIONS(228),
    [anon_sym_PERCENTr8b] = ACTIONS(228),
    [anon_sym_PERCENTr9b] = ACTIONS(228),
    [anon_sym_PERCENTr10b] = ACTIONS(228),
    [anon_sym_PERCENTr11b] = ACTIONS(228),
    [anon_sym_PERCENTr12b] = ACTIONS(228),
    [anon_sym_PERCENTr13b] = ACTIONS(228),
    [anon_sym_PERCENTr14b] = ACTIONS(228),
    [anon_sym_PERCENTr15b] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_movsq] = ACTIONS(228),
    [anon_sym_cmpsb] = ACTIONS(228),
    [anon_sym_cmpxchg] = ACTIONS(228),
    [anon_sym_movsl] = ACTIONS(228),
    [anon_sym_PERCENTcr0] = ACTIONS(228),
    [anon_sym_PERCENTcr2] = ACTIONS(228),
    [anon_sym_PERCENTcr3] = ACTIONS(228),
    [anon_sym_PERCENTcr4] = ACTIONS(228),
    [anon_sym_PERCENTrip] = ACTIONS(228),
    [anon_sym_PERCENTeip] = ACTIONS(228),
    [anon_sym_PERCENTip] = ACTIONS(228),
    [anon_sym_PERCENTst] = ACTIONS(228),
    [anon_sym_PERCENT] = ACTIONS(228),
  },
  [15] = {
    [sym_registerOperand] = STATE(216),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(270),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [16] = {
    [sym__line_break] = ACTIONS(256),
    [aux_sym_comment_token1] = ACTIONS(258),
    [aux_sym_comment_token2] = ACTIONS(258),
    [anon_sym_f] = ACTIONS(258),
    [aux_sym_operand_token1] = ACTIONS(258),
    [anon_sym_LT] = ACTIONS(258),
    [anon_sym_DOLLAR] = ACTIONS(258),
    [anon_sym_PERCENTss] = ACTIONS(258),
    [anon_sym_PERCENTcs] = ACTIONS(258),
    [anon_sym_PERCENTds] = ACTIONS(258),
    [anon_sym_PERCENTes] = ACTIONS(258),
    [anon_sym_PERCENTfs] = ACTIONS(258),
    [anon_sym_PERCENTgs] = ACTIONS(258),
    [anon_sym_PERCENTrax] = ACTIONS(258),
    [anon_sym_PERCENTrbx] = ACTIONS(258),
    [anon_sym_PERCENTrcx] = ACTIONS(258),
    [anon_sym_PERCENTrdx] = ACTIONS(258),
    [anon_sym_PERCENTrsi] = ACTIONS(258),
    [anon_sym_PERCENTrdi] = ACTIONS(258),
    [anon_sym_PERCENTrbp] = ACTIONS(258),
    [anon_sym_PERCENTrsp] = ACTIONS(258),
    [anon_sym_PERCENTr8] = ACTIONS(258),
    [anon_sym_PERCENTr9] = ACTIONS(258),
    [anon_sym_PERCENTr10] = ACTIONS(258),
    [anon_sym_PERCENTr11] = ACTIONS(258),
    [anon_sym_PERCENTr12] = ACTIONS(258),
    [anon_sym_PERCENTr13] = ACTIONS(258),
    [anon_sym_PERCENTr14] = ACTIONS(258),
    [anon_sym_PERCENTr15] = ACTIONS(258),
    [anon_sym_PERCENTeax] = ACTIONS(258),
    [anon_sym_PERCENTecx] = ACTIONS(258),
    [anon_sym_PERCENTedx] = ACTIONS(258),
    [anon_sym_PERCENTebx] = ACTIONS(258),
    [anon_sym_PERCENTesi] = ACTIONS(258),
    [anon_sym_PERCENTedi] = ACTIONS(258),
    [anon_sym_PERCENTebp] = ACTIONS(258),
    [anon_sym_PERCENTesp] = ACTIONS(258),
    [anon_sym_PERCENTr8d] = ACTIONS(258),
    [anon_sym_PERCENTr9d] = ACTIONS(258),
    [anon_sym_PERCENTr10d] = ACTIONS(258),
    [anon_sym_PERCENTr11d] = ACTIONS(258),
    [anon_sym_PERCENTr12d] = ACTIONS(258),
    [anon_sym_PERCENTr13d] = ACTIONS(258),
    [anon_sym_PERCENTr14d] = ACTIONS(258),
    [anon_sym_PERCENTr15d] = ACTIONS(258),
    [anon_sym_PERCENTax] = ACTIONS(258),
    [anon_sym_PERCENTcx] = ACTIONS(258),
    [anon_sym_PERCENTdx] = ACTIONS(258),
    [anon_sym_PERCENTbx] = ACTIONS(258),
    [anon_sym_PERCENTsi] = ACTIONS(258),
    [anon_sym_PERCENTdi] = ACTIONS(258),
    [anon_sym_PERCENTsp] = ACTIONS(258),
    [anon_sym_PERCENTbp] = ACTIONS(258),
    [anon_sym_PERCENTr8w] = ACTIONS(258),
    [anon_sym_PERCENTr9w] = ACTIONS(258),
    [anon_sym_PERCENTr10w] = ACTIONS(258),
    [anon_sym_PERCENTr11w] = ACTIONS(258),
    [anon_sym_PERCENTr12w] = ACTIONS(258),
    [anon_sym_PERCENTr13w] = ACTIONS(258),
    [anon_sym_PERCENTr14w] = ACTIONS(258),
    [anon_sym_PERCENTr15w] = ACTIONS(258),
    [anon_sym_PERCENTal] = ACTIONS(258),
    [anon_sym_PERCENTcl] = ACTIONS(258),
    [anon_sym_PERCENTdl] = ACTIONS(258),
    [anon_sym_PERCENTbl] = ACTIONS(258),
    [anon_sym_PERCENTsil] = ACTIONS(258),
    [anon_sym_PERCENTdil] = ACTIONS(258),
    [anon_sym_PERCENTspl] = ACTIONS(258),
    [anon_sym_PERCENTbpl] = ACTIONS(258),
    [anon_sym_PERCENTr8b] = ACTIONS(258),
    [anon_sym_PERCENTr9b] = ACTIONS(258),
    [anon_sym_PERCENTr10b] = ACTIONS(258),
    [anon_sym_PERCENTr11b] = ACTIONS(258),
    [anon_sym_PERCENTr12b] = ACTIONS(258),
    [anon_sym_PERCENTr13b] = ACTIONS(258),
    [anon_sym_PERCENTr14b] = ACTIONS(258),
    [anon_sym_PERCENTr15b] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_movsq] = ACTIONS(258),
    [anon_sym_cmpsb] = ACTIONS(258),
    [anon_sym_cmpxchg] = ACTIONS(258),
    [anon_sym_movsl] = ACTIONS(258),
    [anon_sym_PERCENTcr0] = ACTIONS(258),
    [anon_sym_PERCENTcr2] = ACTIONS(258),
    [anon_sym_PERCENTcr3] = ACTIONS(258),
    [anon_sym_PERCENTcr4] = ACTIONS(258),
    [anon_sym_PERCENTrip] = ACTIONS(258),
    [anon_sym_PERCENTeip] = ACTIONS(258),
    [anon_sym_PERCENTip] = ACTIONS(258),
    [anon_sym_PERCENTst] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(258),
  },
  [17] = {
    [sym__line_break] = ACTIONS(260),
    [aux_sym_comment_token1] = ACTIONS(262),
    [aux_sym_comment_token2] = ACTIONS(262),
    [anon_sym_f] = ACTIONS(262),
    [aux_sym_operand_token1] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(262),
    [anon_sym_DOLLAR] = ACTIONS(262),
    [anon_sym_PERCENTss] = ACTIONS(262),
    [anon_sym_PERCENTcs] = ACTIONS(262),
    [anon_sym_PERCENTds] = ACTIONS(262),
    [anon_sym_PERCENTes] = ACTIONS(262),
    [anon_sym_PERCENTfs] = ACTIONS(262),
    [anon_sym_PERCENTgs] = ACTIONS(262),
    [anon_sym_PERCENTrax] = ACTIONS(262),
    [anon_sym_PERCENTrbx] = ACTIONS(262),
    [anon_sym_PERCENTrcx] = ACTIONS(262),
    [anon_sym_PERCENTrdx] = ACTIONS(262),
    [anon_sym_PERCENTrsi] = ACTIONS(262),
    [anon_sym_PERCENTrdi] = ACTIONS(262),
    [anon_sym_PERCENTrbp] = ACTIONS(262),
    [anon_sym_PERCENTrsp] = ACTIONS(262),
    [anon_sym_PERCENTr8] = ACTIONS(262),
    [anon_sym_PERCENTr9] = ACTIONS(262),
    [anon_sym_PERCENTr10] = ACTIONS(262),
    [anon_sym_PERCENTr11] = ACTIONS(262),
    [anon_sym_PERCENTr12] = ACTIONS(262),
    [anon_sym_PERCENTr13] = ACTIONS(262),
    [anon_sym_PERCENTr14] = ACTIONS(262),
    [anon_sym_PERCENTr15] = ACTIONS(262),
    [anon_sym_PERCENTeax] = ACTIONS(262),
    [anon_sym_PERCENTecx] = ACTIONS(262),
    [anon_sym_PERCENTedx] = ACTIONS(262),
    [anon_sym_PERCENTebx] = ACTIONS(262),
    [anon_sym_PERCENTesi] = ACTIONS(262),
    [anon_sym_PERCENTedi] = ACTIONS(262),
    [anon_sym_PERCENTebp] = ACTIONS(262),
    [anon_sym_PERCENTesp] = ACTIONS(262),
    [anon_sym_PERCENTr8d] = ACTIONS(262),
    [anon_sym_PERCENTr9d] = ACTIONS(262),
    [anon_sym_PERCENTr10d] = ACTIONS(262),
    [anon_sym_PERCENTr11d] = ACTIONS(262),
    [anon_sym_PERCENTr12d] = ACTIONS(262),
    [anon_sym_PERCENTr13d] = ACTIONS(262),
    [anon_sym_PERCENTr14d] = ACTIONS(262),
    [anon_sym_PERCENTr15d] = ACTIONS(262),
    [anon_sym_PERCENTax] = ACTIONS(262),
    [anon_sym_PERCENTcx] = ACTIONS(262),
    [anon_sym_PERCENTdx] = ACTIONS(262),
    [anon_sym_PERCENTbx] = ACTIONS(262),
    [anon_sym_PERCENTsi] = ACTIONS(262),
    [anon_sym_PERCENTdi] = ACTIONS(262),
    [anon_sym_PERCENTsp] = ACTIONS(262),
    [anon_sym_PERCENTbp] = ACTIONS(262),
    [anon_sym_PERCENTr8w] = ACTIONS(262),
    [anon_sym_PERCENTr9w] = ACTIONS(262),
    [anon_sym_PERCENTr10w] = ACTIONS(262),
    [anon_sym_PERCENTr11w] = ACTIONS(262),
    [anon_sym_PERCENTr12w] = ACTIONS(262),
    [anon_sym_PERCENTr13w] = ACTIONS(262),
    [anon_sym_PERCENTr14w] = ACTIONS(262),
    [anon_sym_PERCENTr15w] = ACTIONS(262),
    [anon_sym_PERCENTal] = ACTIONS(262),
    [anon_sym_PERCENTcl] = ACTIONS(262),
    [anon_sym_PERCENTdl] = ACTIONS(262),
    [anon_sym_PERCENTbl] = ACTIONS(262),
    [anon_sym_PERCENTsil] = ACTIONS(262),
    [anon_sym_PERCENTdil] = ACTIONS(262),
    [anon_sym_PERCENTspl] = ACTIONS(262),
    [anon_sym_PERCENTbpl] = ACTIONS(262),
    [anon_sym_PERCENTr8b] = ACTIONS(262),
    [anon_sym_PERCENTr9b] = ACTIONS(262),
    [anon_sym_PERCENTr10b] = ACTIONS(262),
    [anon_sym_PERCENTr11b] = ACTIONS(262),
    [anon_sym_PERCENTr12b] = ACTIONS(262),
    [anon_sym_PERCENTr13b] = ACTIONS(262),
    [anon_sym_PERCENTr14b] = ACTIONS(262),
    [anon_sym_PERCENTr15b] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_movsq] = ACTIONS(262),
    [anon_sym_cmpsb] = ACTIONS(262),
    [anon_sym_cmpxchg] = ACTIONS(262),
    [anon_sym_movsl] = ACTIONS(262),
    [anon_sym_PERCENTcr0] = ACTIONS(262),
    [anon_sym_PERCENTcr2] = ACTIONS(262),
    [anon_sym_PERCENTcr3] = ACTIONS(262),
    [anon_sym_PERCENTcr4] = ACTIONS(262),
    [anon_sym_PERCENTrip] = ACTIONS(262),
    [anon_sym_PERCENTeip] = ACTIONS(262),
    [anon_sym_PERCENTip] = ACTIONS(262),
    [anon_sym_PERCENTst] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
  },
  [18] = {
    [sym__line_break] = ACTIONS(264),
    [aux_sym_comment_token1] = ACTIONS(266),
    [aux_sym_comment_token2] = ACTIONS(266),
    [anon_sym_f] = ACTIONS(266),
    [aux_sym_operand_token1] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(266),
    [anon_sym_DOLLAR] = ACTIONS(266),
    [anon_sym_PERCENTss] = ACTIONS(266),
    [anon_sym_PERCENTcs] = ACTIONS(266),
    [anon_sym_PERCENTds] = ACTIONS(266),
    [anon_sym_PERCENTes] = ACTIONS(266),
    [anon_sym_PERCENTfs] = ACTIONS(266),
    [anon_sym_PERCENTgs] = ACTIONS(266),
    [anon_sym_PERCENTrax] = ACTIONS(266),
    [anon_sym_PERCENTrbx] = ACTIONS(266),
    [anon_sym_PERCENTrcx] = ACTIONS(266),
    [anon_sym_PERCENTrdx] = ACTIONS(266),
    [anon_sym_PERCENTrsi] = ACTIONS(266),
    [anon_sym_PERCENTrdi] = ACTIONS(266),
    [anon_sym_PERCENTrbp] = ACTIONS(266),
    [anon_sym_PERCENTrsp] = ACTIONS(266),
    [anon_sym_PERCENTr8] = ACTIONS(266),
    [anon_sym_PERCENTr9] = ACTIONS(266),
    [anon_sym_PERCENTr10] = ACTIONS(266),
    [anon_sym_PERCENTr11] = ACTIONS(266),
    [anon_sym_PERCENTr12] = ACTIONS(266),
    [anon_sym_PERCENTr13] = ACTIONS(266),
    [anon_sym_PERCENTr14] = ACTIONS(266),
    [anon_sym_PERCENTr15] = ACTIONS(266),
    [anon_sym_PERCENTeax] = ACTIONS(266),
    [anon_sym_PERCENTecx] = ACTIONS(266),
    [anon_sym_PERCENTedx] = ACTIONS(266),
    [anon_sym_PERCENTebx] = ACTIONS(266),
    [anon_sym_PERCENTesi] = ACTIONS(266),
    [anon_sym_PERCENTedi] = ACTIONS(266),
    [anon_sym_PERCENTebp] = ACTIONS(266),
    [anon_sym_PERCENTesp] = ACTIONS(266),
    [anon_sym_PERCENTr8d] = ACTIONS(266),
    [anon_sym_PERCENTr9d] = ACTIONS(266),
    [anon_sym_PERCENTr10d] = ACTIONS(266),
    [anon_sym_PERCENTr11d] = ACTIONS(266),
    [anon_sym_PERCENTr12d] = ACTIONS(266),
    [anon_sym_PERCENTr13d] = ACTIONS(266),
    [anon_sym_PERCENTr14d] = ACTIONS(266),
    [anon_sym_PERCENTr15d] = ACTIONS(266),
    [anon_sym_PERCENTax] = ACTIONS(266),
    [anon_sym_PERCENTcx] = ACTIONS(266),
    [anon_sym_PERCENTdx] = ACTIONS(266),
    [anon_sym_PERCENTbx] = ACTIONS(266),
    [anon_sym_PERCENTsi] = ACTIONS(266),
    [anon_sym_PERCENTdi] = ACTIONS(266),
    [anon_sym_PERCENTsp] = ACTIONS(266),
    [anon_sym_PERCENTbp] = ACTIONS(266),
    [anon_sym_PERCENTr8w] = ACTIONS(266),
    [anon_sym_PERCENTr9w] = ACTIONS(266),
    [anon_sym_PERCENTr10w] = ACTIONS(266),
    [anon_sym_PERCENTr11w] = ACTIONS(266),
    [anon_sym_PERCENTr12w] = ACTIONS(266),
    [anon_sym_PERCENTr13w] = ACTIONS(266),
    [anon_sym_PERCENTr14w] = ACTIONS(266),
    [anon_sym_PERCENTr15w] = ACTIONS(266),
    [anon_sym_PERCENTal] = ACTIONS(266),
    [anon_sym_PERCENTcl] = ACTIONS(266),
    [anon_sym_PERCENTdl] = ACTIONS(266),
    [anon_sym_PERCENTbl] = ACTIONS(266),
    [anon_sym_PERCENTsil] = ACTIONS(266),
    [anon_sym_PERCENTdil] = ACTIONS(266),
    [anon_sym_PERCENTspl] = ACTIONS(266),
    [anon_sym_PERCENTbpl] = ACTIONS(266),
    [anon_sym_PERCENTr8b] = ACTIONS(266),
    [anon_sym_PERCENTr9b] = ACTIONS(266),
    [anon_sym_PERCENTr10b] = ACTIONS(266),
    [anon_sym_PERCENTr11b] = ACTIONS(266),
    [anon_sym_PERCENTr12b] = ACTIONS(266),
    [anon_sym_PERCENTr13b] = ACTIONS(266),
    [anon_sym_PERCENTr14b] = ACTIONS(266),
    [anon_sym_PERCENTr15b] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_movsq] = ACTIONS(266),
    [anon_sym_cmpsb] = ACTIONS(266),
    [anon_sym_cmpxchg] = ACTIONS(266),
    [anon_sym_movsl] = ACTIONS(266),
    [anon_sym_PERCENTcr0] = ACTIONS(266),
    [anon_sym_PERCENTcr2] = ACTIONS(266),
    [anon_sym_PERCENTcr3] = ACTIONS(266),
    [anon_sym_PERCENTcr4] = ACTIONS(266),
    [anon_sym_PERCENTrip] = ACTIONS(266),
    [anon_sym_PERCENTeip] = ACTIONS(266),
    [anon_sym_PERCENTip] = ACTIONS(266),
    [anon_sym_PERCENTst] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(266),
  },
  [19] = {
    [sym__line_break] = ACTIONS(268),
    [aux_sym_comment_token1] = ACTIONS(270),
    [aux_sym_comment_token2] = ACTIONS(270),
    [anon_sym_f] = ACTIONS(270),
    [aux_sym_operand_token1] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym_DOLLAR] = ACTIONS(270),
    [anon_sym_PERCENTss] = ACTIONS(270),
    [anon_sym_PERCENTcs] = ACTIONS(270),
    [anon_sym_PERCENTds] = ACTIONS(270),
    [anon_sym_PERCENTes] = ACTIONS(270),
    [anon_sym_PERCENTfs] = ACTIONS(270),
    [anon_sym_PERCENTgs] = ACTIONS(270),
    [anon_sym_PERCENTrax] = ACTIONS(270),
    [anon_sym_PERCENTrbx] = ACTIONS(270),
    [anon_sym_PERCENTrcx] = ACTIONS(270),
    [anon_sym_PERCENTrdx] = ACTIONS(270),
    [anon_sym_PERCENTrsi] = ACTIONS(270),
    [anon_sym_PERCENTrdi] = ACTIONS(270),
    [anon_sym_PERCENTrbp] = ACTIONS(270),
    [anon_sym_PERCENTrsp] = ACTIONS(270),
    [anon_sym_PERCENTr8] = ACTIONS(270),
    [anon_sym_PERCENTr9] = ACTIONS(270),
    [anon_sym_PERCENTr10] = ACTIONS(270),
    [anon_sym_PERCENTr11] = ACTIONS(270),
    [anon_sym_PERCENTr12] = ACTIONS(270),
    [anon_sym_PERCENTr13] = ACTIONS(270),
    [anon_sym_PERCENTr14] = ACTIONS(270),
    [anon_sym_PERCENTr15] = ACTIONS(270),
    [anon_sym_PERCENTeax] = ACTIONS(270),
    [anon_sym_PERCENTecx] = ACTIONS(270),
    [anon_sym_PERCENTedx] = ACTIONS(270),
    [anon_sym_PERCENTebx] = ACTIONS(270),
    [anon_sym_PERCENTesi] = ACTIONS(270),
    [anon_sym_PERCENTedi] = ACTIONS(270),
    [anon_sym_PERCENTebp] = ACTIONS(270),
    [anon_sym_PERCENTesp] = ACTIONS(270),
    [anon_sym_PERCENTr8d] = ACTIONS(270),
    [anon_sym_PERCENTr9d] = ACTIONS(270),
    [anon_sym_PERCENTr10d] = ACTIONS(270),
    [anon_sym_PERCENTr11d] = ACTIONS(270),
    [anon_sym_PERCENTr12d] = ACTIONS(270),
    [anon_sym_PERCENTr13d] = ACTIONS(270),
    [anon_sym_PERCENTr14d] = ACTIONS(270),
    [anon_sym_PERCENTr15d] = ACTIONS(270),
    [anon_sym_PERCENTax] = ACTIONS(270),
    [anon_sym_PERCENTcx] = ACTIONS(270),
    [anon_sym_PERCENTdx] = ACTIONS(270),
    [anon_sym_PERCENTbx] = ACTIONS(270),
    [anon_sym_PERCENTsi] = ACTIONS(270),
    [anon_sym_PERCENTdi] = ACTIONS(270),
    [anon_sym_PERCENTsp] = ACTIONS(270),
    [anon_sym_PERCENTbp] = ACTIONS(270),
    [anon_sym_PERCENTr8w] = ACTIONS(270),
    [anon_sym_PERCENTr9w] = ACTIONS(270),
    [anon_sym_PERCENTr10w] = ACTIONS(270),
    [anon_sym_PERCENTr11w] = ACTIONS(270),
    [anon_sym_PERCENTr12w] = ACTIONS(270),
    [anon_sym_PERCENTr13w] = ACTIONS(270),
    [anon_sym_PERCENTr14w] = ACTIONS(270),
    [anon_sym_PERCENTr15w] = ACTIONS(270),
    [anon_sym_PERCENTal] = ACTIONS(270),
    [anon_sym_PERCENTcl] = ACTIONS(270),
    [anon_sym_PERCENTdl] = ACTIONS(270),
    [anon_sym_PERCENTbl] = ACTIONS(270),
    [anon_sym_PERCENTsil] = ACTIONS(270),
    [anon_sym_PERCENTdil] = ACTIONS(270),
    [anon_sym_PERCENTspl] = ACTIONS(270),
    [anon_sym_PERCENTbpl] = ACTIONS(270),
    [anon_sym_PERCENTr8b] = ACTIONS(270),
    [anon_sym_PERCENTr9b] = ACTIONS(270),
    [anon_sym_PERCENTr10b] = ACTIONS(270),
    [anon_sym_PERCENTr11b] = ACTIONS(270),
    [anon_sym_PERCENTr12b] = ACTIONS(270),
    [anon_sym_PERCENTr13b] = ACTIONS(270),
    [anon_sym_PERCENTr14b] = ACTIONS(270),
    [anon_sym_PERCENTr15b] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_movsq] = ACTIONS(270),
    [anon_sym_cmpsb] = ACTIONS(270),
    [anon_sym_cmpxchg] = ACTIONS(270),
    [anon_sym_movsl] = ACTIONS(270),
    [anon_sym_PERCENTcr0] = ACTIONS(270),
    [anon_sym_PERCENTcr2] = ACTIONS(270),
    [anon_sym_PERCENTcr3] = ACTIONS(270),
    [anon_sym_PERCENTcr4] = ACTIONS(270),
    [anon_sym_PERCENTrip] = ACTIONS(270),
    [anon_sym_PERCENTeip] = ACTIONS(270),
    [anon_sym_PERCENTip] = ACTIONS(270),
    [anon_sym_PERCENTst] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(270),
  },
  [20] = {
    [sym__line_break] = ACTIONS(272),
    [aux_sym_comment_token1] = ACTIONS(274),
    [aux_sym_comment_token2] = ACTIONS(274),
    [anon_sym_f] = ACTIONS(274),
    [aux_sym_operand_token1] = ACTIONS(274),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [anon_sym_PERCENTss] = ACTIONS(274),
    [anon_sym_PERCENTcs] = ACTIONS(274),
    [anon_sym_PERCENTds] = ACTIONS(274),
    [anon_sym_PERCENTes] = ACTIONS(274),
    [anon_sym_PERCENTfs] = ACTIONS(274),
    [anon_sym_PERCENTgs] = ACTIONS(274),
    [anon_sym_PERCENTrax] = ACTIONS(274),
    [anon_sym_PERCENTrbx] = ACTIONS(274),
    [anon_sym_PERCENTrcx] = ACTIONS(274),
    [anon_sym_PERCENTrdx] = ACTIONS(274),
    [anon_sym_PERCENTrsi] = ACTIONS(274),
    [anon_sym_PERCENTrdi] = ACTIONS(274),
    [anon_sym_PERCENTrbp] = ACTIONS(274),
    [anon_sym_PERCENTrsp] = ACTIONS(274),
    [anon_sym_PERCENTr8] = ACTIONS(274),
    [anon_sym_PERCENTr9] = ACTIONS(274),
    [anon_sym_PERCENTr10] = ACTIONS(274),
    [anon_sym_PERCENTr11] = ACTIONS(274),
    [anon_sym_PERCENTr12] = ACTIONS(274),
    [anon_sym_PERCENTr13] = ACTIONS(274),
    [anon_sym_PERCENTr14] = ACTIONS(274),
    [anon_sym_PERCENTr15] = ACTIONS(274),
    [anon_sym_PERCENTeax] = ACTIONS(274),
    [anon_sym_PERCENTecx] = ACTIONS(274),
    [anon_sym_PERCENTedx] = ACTIONS(274),
    [anon_sym_PERCENTebx] = ACTIONS(274),
    [anon_sym_PERCENTesi] = ACTIONS(274),
    [anon_sym_PERCENTedi] = ACTIONS(274),
    [anon_sym_PERCENTebp] = ACTIONS(274),
    [anon_sym_PERCENTesp] = ACTIONS(274),
    [anon_sym_PERCENTr8d] = ACTIONS(274),
    [anon_sym_PERCENTr9d] = ACTIONS(274),
    [anon_sym_PERCENTr10d] = ACTIONS(274),
    [anon_sym_PERCENTr11d] = ACTIONS(274),
    [anon_sym_PERCENTr12d] = ACTIONS(274),
    [anon_sym_PERCENTr13d] = ACTIONS(274),
    [anon_sym_PERCENTr14d] = ACTIONS(274),
    [anon_sym_PERCENTr15d] = ACTIONS(274),
    [anon_sym_PERCENTax] = ACTIONS(274),
    [anon_sym_PERCENTcx] = ACTIONS(274),
    [anon_sym_PERCENTdx] = ACTIONS(274),
    [anon_sym_PERCENTbx] = ACTIONS(274),
    [anon_sym_PERCENTsi] = ACTIONS(274),
    [anon_sym_PERCENTdi] = ACTIONS(274),
    [anon_sym_PERCENTsp] = ACTIONS(274),
    [anon_sym_PERCENTbp] = ACTIONS(274),
    [anon_sym_PERCENTr8w] = ACTIONS(274),
    [anon_sym_PERCENTr9w] = ACTIONS(274),
    [anon_sym_PERCENTr10w] = ACTIONS(274),
    [anon_sym_PERCENTr11w] = ACTIONS(274),
    [anon_sym_PERCENTr12w] = ACTIONS(274),
    [anon_sym_PERCENTr13w] = ACTIONS(274),
    [anon_sym_PERCENTr14w] = ACTIONS(274),
    [anon_sym_PERCENTr15w] = ACTIONS(274),
    [anon_sym_PERCENTal] = ACTIONS(274),
    [anon_sym_PERCENTcl] = ACTIONS(274),
    [anon_sym_PERCENTdl] = ACTIONS(274),
    [anon_sym_PERCENTbl] = ACTIONS(274),
    [anon_sym_PERCENTsil] = ACTIONS(274),
    [anon_sym_PERCENTdil] = ACTIONS(274),
    [anon_sym_PERCENTspl] = ACTIONS(274),
    [anon_sym_PERCENTbpl] = ACTIONS(274),
    [anon_sym_PERCENTr8b] = ACTIONS(274),
    [anon_sym_PERCENTr9b] = ACTIONS(274),
    [anon_sym_PERCENTr10b] = ACTIONS(274),
    [anon_sym_PERCENTr11b] = ACTIONS(274),
    [anon_sym_PERCENTr12b] = ACTIONS(274),
    [anon_sym_PERCENTr13b] = ACTIONS(274),
    [anon_sym_PERCENTr14b] = ACTIONS(274),
    [anon_sym_PERCENTr15b] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_movsq] = ACTIONS(274),
    [anon_sym_cmpsb] = ACTIONS(274),
    [anon_sym_cmpxchg] = ACTIONS(274),
    [anon_sym_movsl] = ACTIONS(274),
    [anon_sym_PERCENTcr0] = ACTIONS(274),
    [anon_sym_PERCENTcr2] = ACTIONS(274),
    [anon_sym_PERCENTcr3] = ACTIONS(274),
    [anon_sym_PERCENTcr4] = ACTIONS(274),
    [anon_sym_PERCENTrip] = ACTIONS(274),
    [anon_sym_PERCENTeip] = ACTIONS(274),
    [anon_sym_PERCENTip] = ACTIONS(274),
    [anon_sym_PERCENTst] = ACTIONS(274),
    [anon_sym_PERCENT] = ACTIONS(274),
  },
  [21] = {
    [sym__line_break] = ACTIONS(276),
    [aux_sym_comment_token1] = ACTIONS(278),
    [aux_sym_comment_token2] = ACTIONS(278),
    [anon_sym_f] = ACTIONS(278),
    [aux_sym_operand_token1] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_DOLLAR] = ACTIONS(278),
    [anon_sym_PERCENTss] = ACTIONS(278),
    [anon_sym_PERCENTcs] = ACTIONS(278),
    [anon_sym_PERCENTds] = ACTIONS(278),
    [anon_sym_PERCENTes] = ACTIONS(278),
    [anon_sym_PERCENTfs] = ACTIONS(278),
    [anon_sym_PERCENTgs] = ACTIONS(278),
    [anon_sym_PERCENTrax] = ACTIONS(278),
    [anon_sym_PERCENTrbx] = ACTIONS(278),
    [anon_sym_PERCENTrcx] = ACTIONS(278),
    [anon_sym_PERCENTrdx] = ACTIONS(278),
    [anon_sym_PERCENTrsi] = ACTIONS(278),
    [anon_sym_PERCENTrdi] = ACTIONS(278),
    [anon_sym_PERCENTrbp] = ACTIONS(278),
    [anon_sym_PERCENTrsp] = ACTIONS(278),
    [anon_sym_PERCENTr8] = ACTIONS(278),
    [anon_sym_PERCENTr9] = ACTIONS(278),
    [anon_sym_PERCENTr10] = ACTIONS(278),
    [anon_sym_PERCENTr11] = ACTIONS(278),
    [anon_sym_PERCENTr12] = ACTIONS(278),
    [anon_sym_PERCENTr13] = ACTIONS(278),
    [anon_sym_PERCENTr14] = ACTIONS(278),
    [anon_sym_PERCENTr15] = ACTIONS(278),
    [anon_sym_PERCENTeax] = ACTIONS(278),
    [anon_sym_PERCENTecx] = ACTIONS(278),
    [anon_sym_PERCENTedx] = ACTIONS(278),
    [anon_sym_PERCENTebx] = ACTIONS(278),
    [anon_sym_PERCENTesi] = ACTIONS(278),
    [anon_sym_PERCENTedi] = ACTIONS(278),
    [anon_sym_PERCENTebp] = ACTIONS(278),
    [anon_sym_PERCENTesp] = ACTIONS(278),
    [anon_sym_PERCENTr8d] = ACTIONS(278),
    [anon_sym_PERCENTr9d] = ACTIONS(278),
    [anon_sym_PERCENTr10d] = ACTIONS(278),
    [anon_sym_PERCENTr11d] = ACTIONS(278),
    [anon_sym_PERCENTr12d] = ACTIONS(278),
    [anon_sym_PERCENTr13d] = ACTIONS(278),
    [anon_sym_PERCENTr14d] = ACTIONS(278),
    [anon_sym_PERCENTr15d] = ACTIONS(278),
    [anon_sym_PERCENTax] = ACTIONS(278),
    [anon_sym_PERCENTcx] = ACTIONS(278),
    [anon_sym_PERCENTdx] = ACTIONS(278),
    [anon_sym_PERCENTbx] = ACTIONS(278),
    [anon_sym_PERCENTsi] = ACTIONS(278),
    [anon_sym_PERCENTdi] = ACTIONS(278),
    [anon_sym_PERCENTsp] = ACTIONS(278),
    [anon_sym_PERCENTbp] = ACTIONS(278),
    [anon_sym_PERCENTr8w] = ACTIONS(278),
    [anon_sym_PERCENTr9w] = ACTIONS(278),
    [anon_sym_PERCENTr10w] = ACTIONS(278),
    [anon_sym_PERCENTr11w] = ACTIONS(278),
    [anon_sym_PERCENTr12w] = ACTIONS(278),
    [anon_sym_PERCENTr13w] = ACTIONS(278),
    [anon_sym_PERCENTr14w] = ACTIONS(278),
    [anon_sym_PERCENTr15w] = ACTIONS(278),
    [anon_sym_PERCENTal] = ACTIONS(278),
    [anon_sym_PERCENTcl] = ACTIONS(278),
    [anon_sym_PERCENTdl] = ACTIONS(278),
    [anon_sym_PERCENTbl] = ACTIONS(278),
    [anon_sym_PERCENTsil] = ACTIONS(278),
    [anon_sym_PERCENTdil] = ACTIONS(278),
    [anon_sym_PERCENTspl] = ACTIONS(278),
    [anon_sym_PERCENTbpl] = ACTIONS(278),
    [anon_sym_PERCENTr8b] = ACTIONS(278),
    [anon_sym_PERCENTr9b] = ACTIONS(278),
    [anon_sym_PERCENTr10b] = ACTIONS(278),
    [anon_sym_PERCENTr11b] = ACTIONS(278),
    [anon_sym_PERCENTr12b] = ACTIONS(278),
    [anon_sym_PERCENTr13b] = ACTIONS(278),
    [anon_sym_PERCENTr14b] = ACTIONS(278),
    [anon_sym_PERCENTr15b] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_movsq] = ACTIONS(278),
    [anon_sym_cmpsb] = ACTIONS(278),
    [anon_sym_cmpxchg] = ACTIONS(278),
    [anon_sym_movsl] = ACTIONS(278),
    [anon_sym_PERCENTcr0] = ACTIONS(278),
    [anon_sym_PERCENTcr2] = ACTIONS(278),
    [anon_sym_PERCENTcr3] = ACTIONS(278),
    [anon_sym_PERCENTcr4] = ACTIONS(278),
    [anon_sym_PERCENTrip] = ACTIONS(278),
    [anon_sym_PERCENTeip] = ACTIONS(278),
    [anon_sym_PERCENTip] = ACTIONS(278),
    [anon_sym_PERCENTst] = ACTIONS(278),
    [anon_sym_PERCENT] = ACTIONS(278),
  },
  [22] = {
    [sym__line_break] = ACTIONS(280),
    [aux_sym_comment_token1] = ACTIONS(282),
    [aux_sym_comment_token2] = ACTIONS(282),
    [anon_sym_f] = ACTIONS(282),
    [aux_sym_operand_token1] = ACTIONS(282),
    [anon_sym_LT] = ACTIONS(282),
    [anon_sym_DOLLAR] = ACTIONS(282),
    [anon_sym_PERCENTss] = ACTIONS(282),
    [anon_sym_PERCENTcs] = ACTIONS(282),
    [anon_sym_PERCENTds] = ACTIONS(282),
    [anon_sym_PERCENTes] = ACTIONS(282),
    [anon_sym_PERCENTfs] = ACTIONS(282),
    [anon_sym_PERCENTgs] = ACTIONS(282),
    [anon_sym_PERCENTrax] = ACTIONS(282),
    [anon_sym_PERCENTrbx] = ACTIONS(282),
    [anon_sym_PERCENTrcx] = ACTIONS(282),
    [anon_sym_PERCENTrdx] = ACTIONS(282),
    [anon_sym_PERCENTrsi] = ACTIONS(282),
    [anon_sym_PERCENTrdi] = ACTIONS(282),
    [anon_sym_PERCENTrbp] = ACTIONS(282),
    [anon_sym_PERCENTrsp] = ACTIONS(282),
    [anon_sym_PERCENTr8] = ACTIONS(282),
    [anon_sym_PERCENTr9] = ACTIONS(282),
    [anon_sym_PERCENTr10] = ACTIONS(282),
    [anon_sym_PERCENTr11] = ACTIONS(282),
    [anon_sym_PERCENTr12] = ACTIONS(282),
    [anon_sym_PERCENTr13] = ACTIONS(282),
    [anon_sym_PERCENTr14] = ACTIONS(282),
    [anon_sym_PERCENTr15] = ACTIONS(282),
    [anon_sym_PERCENTeax] = ACTIONS(282),
    [anon_sym_PERCENTecx] = ACTIONS(282),
    [anon_sym_PERCENTedx] = ACTIONS(282),
    [anon_sym_PERCENTebx] = ACTIONS(282),
    [anon_sym_PERCENTesi] = ACTIONS(282),
    [anon_sym_PERCENTedi] = ACTIONS(282),
    [anon_sym_PERCENTebp] = ACTIONS(282),
    [anon_sym_PERCENTesp] = ACTIONS(282),
    [anon_sym_PERCENTr8d] = ACTIONS(282),
    [anon_sym_PERCENTr9d] = ACTIONS(282),
    [anon_sym_PERCENTr10d] = ACTIONS(282),
    [anon_sym_PERCENTr11d] = ACTIONS(282),
    [anon_sym_PERCENTr12d] = ACTIONS(282),
    [anon_sym_PERCENTr13d] = ACTIONS(282),
    [anon_sym_PERCENTr14d] = ACTIONS(282),
    [anon_sym_PERCENTr15d] = ACTIONS(282),
    [anon_sym_PERCENTax] = ACTIONS(282),
    [anon_sym_PERCENTcx] = ACTIONS(282),
    [anon_sym_PERCENTdx] = ACTIONS(282),
    [anon_sym_PERCENTbx] = ACTIONS(282),
    [anon_sym_PERCENTsi] = ACTIONS(282),
    [anon_sym_PERCENTdi] = ACTIONS(282),
    [anon_sym_PERCENTsp] = ACTIONS(282),
    [anon_sym_PERCENTbp] = ACTIONS(282),
    [anon_sym_PERCENTr8w] = ACTIONS(282),
    [anon_sym_PERCENTr9w] = ACTIONS(282),
    [anon_sym_PERCENTr10w] = ACTIONS(282),
    [anon_sym_PERCENTr11w] = ACTIONS(282),
    [anon_sym_PERCENTr12w] = ACTIONS(282),
    [anon_sym_PERCENTr13w] = ACTIONS(282),
    [anon_sym_PERCENTr14w] = ACTIONS(282),
    [anon_sym_PERCENTr15w] = ACTIONS(282),
    [anon_sym_PERCENTal] = ACTIONS(282),
    [anon_sym_PERCENTcl] = ACTIONS(282),
    [anon_sym_PERCENTdl] = ACTIONS(282),
    [anon_sym_PERCENTbl] = ACTIONS(282),
    [anon_sym_PERCENTsil] = ACTIONS(282),
    [anon_sym_PERCENTdil] = ACTIONS(282),
    [anon_sym_PERCENTspl] = ACTIONS(282),
    [anon_sym_PERCENTbpl] = ACTIONS(282),
    [anon_sym_PERCENTr8b] = ACTIONS(282),
    [anon_sym_PERCENTr9b] = ACTIONS(282),
    [anon_sym_PERCENTr10b] = ACTIONS(282),
    [anon_sym_PERCENTr11b] = ACTIONS(282),
    [anon_sym_PERCENTr12b] = ACTIONS(282),
    [anon_sym_PERCENTr13b] = ACTIONS(282),
    [anon_sym_PERCENTr14b] = ACTIONS(282),
    [anon_sym_PERCENTr15b] = ACTIONS(282),
    [anon_sym_DASH] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(282),
    [anon_sym_movsq] = ACTIONS(282),
    [anon_sym_cmpsb] = ACTIONS(282),
    [anon_sym_cmpxchg] = ACTIONS(282),
    [anon_sym_movsl] = ACTIONS(282),
    [anon_sym_PERCENTcr0] = ACTIONS(282),
    [anon_sym_PERCENTcr2] = ACTIONS(282),
    [anon_sym_PERCENTcr3] = ACTIONS(282),
    [anon_sym_PERCENTcr4] = ACTIONS(282),
    [anon_sym_PERCENTrip] = ACTIONS(282),
    [anon_sym_PERCENTeip] = ACTIONS(282),
    [anon_sym_PERCENTip] = ACTIONS(282),
    [anon_sym_PERCENTst] = ACTIONS(282),
    [anon_sym_PERCENT] = ACTIONS(282),
  },
  [23] = {
    [sym__line_break] = ACTIONS(284),
    [aux_sym_comment_token1] = ACTIONS(286),
    [aux_sym_comment_token2] = ACTIONS(286),
    [anon_sym_f] = ACTIONS(286),
    [aux_sym_operand_token1] = ACTIONS(286),
    [anon_sym_LT] = ACTIONS(286),
    [anon_sym_DOLLAR] = ACTIONS(286),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(286),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(286),
    [anon_sym_PERCENTrbx] = ACTIONS(286),
    [anon_sym_PERCENTrcx] = ACTIONS(286),
    [anon_sym_PERCENTrdx] = ACTIONS(286),
    [anon_sym_PERCENTrsi] = ACTIONS(286),
    [anon_sym_PERCENTrdi] = ACTIONS(286),
    [anon_sym_PERCENTrbp] = ACTIONS(286),
    [anon_sym_PERCENTrsp] = ACTIONS(286),
    [anon_sym_PERCENTr8] = ACTIONS(286),
    [anon_sym_PERCENTr9] = ACTIONS(286),
    [anon_sym_PERCENTr10] = ACTIONS(286),
    [anon_sym_PERCENTr11] = ACTIONS(286),
    [anon_sym_PERCENTr12] = ACTIONS(286),
    [anon_sym_PERCENTr13] = ACTIONS(286),
    [anon_sym_PERCENTr14] = ACTIONS(286),
    [anon_sym_PERCENTr15] = ACTIONS(286),
    [anon_sym_PERCENTeax] = ACTIONS(286),
    [anon_sym_PERCENTecx] = ACTIONS(286),
    [anon_sym_PERCENTedx] = ACTIONS(286),
    [anon_sym_PERCENTebx] = ACTIONS(286),
    [anon_sym_PERCENTesi] = ACTIONS(286),
    [anon_sym_PERCENTedi] = ACTIONS(286),
    [anon_sym_PERCENTebp] = ACTIONS(286),
    [anon_sym_PERCENTesp] = ACTIONS(286),
    [anon_sym_PERCENTr8d] = ACTIONS(286),
    [anon_sym_PERCENTr9d] = ACTIONS(286),
    [anon_sym_PERCENTr10d] = ACTIONS(286),
    [anon_sym_PERCENTr11d] = ACTIONS(286),
    [anon_sym_PERCENTr12d] = ACTIONS(286),
    [anon_sym_PERCENTr13d] = ACTIONS(286),
    [anon_sym_PERCENTr14d] = ACTIONS(286),
    [anon_sym_PERCENTr15d] = ACTIONS(286),
    [anon_sym_PERCENTax] = ACTIONS(286),
    [anon_sym_PERCENTcx] = ACTIONS(286),
    [anon_sym_PERCENTdx] = ACTIONS(286),
    [anon_sym_PERCENTbx] = ACTIONS(286),
    [anon_sym_PERCENTsi] = ACTIONS(286),
    [anon_sym_PERCENTdi] = ACTIONS(286),
    [anon_sym_PERCENTsp] = ACTIONS(286),
    [anon_sym_PERCENTbp] = ACTIONS(286),
    [anon_sym_PERCENTr8w] = ACTIONS(286),
    [anon_sym_PERCENTr9w] = ACTIONS(286),
    [anon_sym_PERCENTr10w] = ACTIONS(286),
    [anon_sym_PERCENTr11w] = ACTIONS(286),
    [anon_sym_PERCENTr12w] = ACTIONS(286),
    [anon_sym_PERCENTr13w] = ACTIONS(286),
    [anon_sym_PERCENTr14w] = ACTIONS(286),
    [anon_sym_PERCENTr15w] = ACTIONS(286),
    [anon_sym_PERCENTal] = ACTIONS(286),
    [anon_sym_PERCENTcl] = ACTIONS(286),
    [anon_sym_PERCENTdl] = ACTIONS(286),
    [anon_sym_PERCENTbl] = ACTIONS(286),
    [anon_sym_PERCENTsil] = ACTIONS(286),
    [anon_sym_PERCENTdil] = ACTIONS(286),
    [anon_sym_PERCENTspl] = ACTIONS(286),
    [anon_sym_PERCENTbpl] = ACTIONS(286),
    [anon_sym_PERCENTr8b] = ACTIONS(286),
    [anon_sym_PERCENTr9b] = ACTIONS(286),
    [anon_sym_PERCENTr10b] = ACTIONS(286),
    [anon_sym_PERCENTr11b] = ACTIONS(286),
    [anon_sym_PERCENTr12b] = ACTIONS(286),
    [anon_sym_PERCENTr13b] = ACTIONS(286),
    [anon_sym_PERCENTr14b] = ACTIONS(286),
    [anon_sym_PERCENTr15b] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_movsq] = ACTIONS(286),
    [anon_sym_cmpsb] = ACTIONS(286),
    [anon_sym_cmpxchg] = ACTIONS(286),
    [anon_sym_movsl] = ACTIONS(286),
    [anon_sym_PERCENTcr0] = ACTIONS(286),
    [anon_sym_PERCENTcr2] = ACTIONS(286),
    [anon_sym_PERCENTcr3] = ACTIONS(286),
    [anon_sym_PERCENTcr4] = ACTIONS(286),
    [anon_sym_PERCENTrip] = ACTIONS(286),
    [anon_sym_PERCENTeip] = ACTIONS(286),
    [anon_sym_PERCENTip] = ACTIONS(286),
    [anon_sym_PERCENTst] = ACTIONS(286),
    [anon_sym_PERCENT] = ACTIONS(286),
  },
  [24] = {
    [sym_registerOperand] = STATE(222),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(272),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [25] = {
    [sym_registerOperand] = STATE(219),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(271),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [26] = {
    [sym_registerOperand] = STATE(204),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(244),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [27] = {
    [sym_registerOperand] = STATE(217),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(232),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [28] = {
    [sym_registerOperand] = STATE(214),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(270),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [29] = {
    [sym_registerOperand] = STATE(152),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(269),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [30] = {
    [sym_registerOperand] = STATE(211),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(268),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [31] = {
    [sym_registerOperand] = STATE(210),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(236),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [32] = {
    [sym_registerOperand] = STATE(198),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(242),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [33] = {
    [sym__line_break] = ACTIONS(134),
    [aux_sym_comment_token1] = ACTIONS(136),
    [aux_sym_comment_token2] = ACTIONS(136),
    [anon_sym_f] = ACTIONS(136),
    [aux_sym_operand_token1] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(136),
    [anon_sym_PERCENTss] = ACTIONS(136),
    [anon_sym_PERCENTcs] = ACTIONS(136),
    [anon_sym_PERCENTds] = ACTIONS(136),
    [anon_sym_PERCENTes] = ACTIONS(136),
    [anon_sym_PERCENTfs] = ACTIONS(136),
    [anon_sym_PERCENTgs] = ACTIONS(136),
    [anon_sym_PERCENTrax] = ACTIONS(136),
    [anon_sym_PERCENTrbx] = ACTIONS(136),
    [anon_sym_PERCENTrcx] = ACTIONS(136),
    [anon_sym_PERCENTrdx] = ACTIONS(136),
    [anon_sym_PERCENTrsi] = ACTIONS(136),
    [anon_sym_PERCENTrdi] = ACTIONS(136),
    [anon_sym_PERCENTrbp] = ACTIONS(136),
    [anon_sym_PERCENTrsp] = ACTIONS(136),
    [anon_sym_PERCENTr8] = ACTIONS(136),
    [anon_sym_PERCENTr9] = ACTIONS(136),
    [anon_sym_PERCENTr10] = ACTIONS(136),
    [anon_sym_PERCENTr11] = ACTIONS(136),
    [anon_sym_PERCENTr12] = ACTIONS(136),
    [anon_sym_PERCENTr13] = ACTIONS(136),
    [anon_sym_PERCENTr14] = ACTIONS(136),
    [anon_sym_PERCENTr15] = ACTIONS(136),
    [anon_sym_PERCENTeax] = ACTIONS(136),
    [anon_sym_PERCENTecx] = ACTIONS(136),
    [anon_sym_PERCENTedx] = ACTIONS(136),
    [anon_sym_PERCENTebx] = ACTIONS(136),
    [anon_sym_PERCENTesi] = ACTIONS(136),
    [anon_sym_PERCENTedi] = ACTIONS(136),
    [anon_sym_PERCENTebp] = ACTIONS(136),
    [anon_sym_PERCENTesp] = ACTIONS(136),
    [anon_sym_PERCENTr8d] = ACTIONS(136),
    [anon_sym_PERCENTr9d] = ACTIONS(136),
    [anon_sym_PERCENTr10d] = ACTIONS(136),
    [anon_sym_PERCENTr11d] = ACTIONS(136),
    [anon_sym_PERCENTr12d] = ACTIONS(136),
    [anon_sym_PERCENTr13d] = ACTIONS(136),
    [anon_sym_PERCENTr14d] = ACTIONS(136),
    [anon_sym_PERCENTr15d] = ACTIONS(136),
    [anon_sym_PERCENTax] = ACTIONS(136),
    [anon_sym_PERCENTcx] = ACTIONS(136),
    [anon_sym_PERCENTdx] = ACTIONS(136),
    [anon_sym_PERCENTbx] = ACTIONS(136),
    [anon_sym_PERCENTsi] = ACTIONS(136),
    [anon_sym_PERCENTdi] = ACTIONS(136),
    [anon_sym_PERCENTsp] = ACTIONS(136),
    [anon_sym_PERCENTbp] = ACTIONS(136),
    [anon_sym_PERCENTr8w] = ACTIONS(136),
    [anon_sym_PERCENTr9w] = ACTIONS(136),
    [anon_sym_PERCENTr10w] = ACTIONS(136),
    [anon_sym_PERCENTr11w] = ACTIONS(136),
    [anon_sym_PERCENTr12w] = ACTIONS(136),
    [anon_sym_PERCENTr13w] = ACTIONS(136),
    [anon_sym_PERCENTr14w] = ACTIONS(136),
    [anon_sym_PERCENTr15w] = ACTIONS(136),
    [anon_sym_PERCENTal] = ACTIONS(136),
    [anon_sym_PERCENTcl] = ACTIONS(136),
    [anon_sym_PERCENTdl] = ACTIONS(136),
    [anon_sym_PERCENTbl] = ACTIONS(136),
    [anon_sym_PERCENTsil] = ACTIONS(136),
    [anon_sym_PERCENTdil] = ACTIONS(136),
    [anon_sym_PERCENTspl] = ACTIONS(136),
    [anon_sym_PERCENTbpl] = ACTIONS(136),
    [anon_sym_PERCENTr8b] = ACTIONS(136),
    [anon_sym_PERCENTr9b] = ACTIONS(136),
    [anon_sym_PERCENTr10b] = ACTIONS(136),
    [anon_sym_PERCENTr11b] = ACTIONS(136),
    [anon_sym_PERCENTr12b] = ACTIONS(136),
    [anon_sym_PERCENTr13b] = ACTIONS(136),
    [anon_sym_PERCENTr14b] = ACTIONS(136),
    [anon_sym_PERCENTr15b] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_movsq] = ACTIONS(136),
    [anon_sym_cmpsb] = ACTIONS(136),
    [anon_sym_cmpxchg] = ACTIONS(136),
    [anon_sym_movsl] = ACTIONS(136),
    [anon_sym_PERCENTcr0] = ACTIONS(136),
    [anon_sym_PERCENTcr2] = ACTIONS(136),
    [anon_sym_PERCENTcr3] = ACTIONS(136),
    [anon_sym_PERCENTcr4] = ACTIONS(136),
    [anon_sym_PERCENTrip] = ACTIONS(136),
    [anon_sym_PERCENTeip] = ACTIONS(136),
    [anon_sym_PERCENTip] = ACTIONS(136),
    [anon_sym_PERCENTst] = ACTIONS(136),
    [anon_sym_PERCENT] = ACTIONS(136),
  },
  [34] = {
    [sym_registerOperand] = STATE(213),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(254),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [35] = {
    [sym__line_break] = ACTIONS(306),
    [aux_sym_comment_token1] = ACTIONS(308),
    [aux_sym_comment_token2] = ACTIONS(308),
    [anon_sym_f] = ACTIONS(308),
    [aux_sym_operand_token1] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_DOLLAR] = ACTIONS(308),
    [anon_sym_PERCENTss] = ACTIONS(308),
    [anon_sym_PERCENTcs] = ACTIONS(308),
    [anon_sym_PERCENTds] = ACTIONS(308),
    [anon_sym_PERCENTes] = ACTIONS(308),
    [anon_sym_PERCENTfs] = ACTIONS(308),
    [anon_sym_PERCENTgs] = ACTIONS(308),
    [anon_sym_PERCENTrax] = ACTIONS(308),
    [anon_sym_PERCENTrbx] = ACTIONS(308),
    [anon_sym_PERCENTrcx] = ACTIONS(308),
    [anon_sym_PERCENTrdx] = ACTIONS(308),
    [anon_sym_PERCENTrsi] = ACTIONS(308),
    [anon_sym_PERCENTrdi] = ACTIONS(308),
    [anon_sym_PERCENTrbp] = ACTIONS(308),
    [anon_sym_PERCENTrsp] = ACTIONS(308),
    [anon_sym_PERCENTr8] = ACTIONS(308),
    [anon_sym_PERCENTr9] = ACTIONS(308),
    [anon_sym_PERCENTr10] = ACTIONS(308),
    [anon_sym_PERCENTr11] = ACTIONS(308),
    [anon_sym_PERCENTr12] = ACTIONS(308),
    [anon_sym_PERCENTr13] = ACTIONS(308),
    [anon_sym_PERCENTr14] = ACTIONS(308),
    [anon_sym_PERCENTr15] = ACTIONS(308),
    [anon_sym_PERCENTeax] = ACTIONS(308),
    [anon_sym_PERCENTecx] = ACTIONS(308),
    [anon_sym_PERCENTedx] = ACTIONS(308),
    [anon_sym_PERCENTebx] = ACTIONS(308),
    [anon_sym_PERCENTesi] = ACTIONS(308),
    [anon_sym_PERCENTedi] = ACTIONS(308),
    [anon_sym_PERCENTebp] = ACTIONS(308),
    [anon_sym_PERCENTesp] = ACTIONS(308),
    [anon_sym_PERCENTr8d] = ACTIONS(308),
    [anon_sym_PERCENTr9d] = ACTIONS(308),
    [anon_sym_PERCENTr10d] = ACTIONS(308),
    [anon_sym_PERCENTr11d] = ACTIONS(308),
    [anon_sym_PERCENTr12d] = ACTIONS(308),
    [anon_sym_PERCENTr13d] = ACTIONS(308),
    [anon_sym_PERCENTr14d] = ACTIONS(308),
    [anon_sym_PERCENTr15d] = ACTIONS(308),
    [anon_sym_PERCENTax] = ACTIONS(308),
    [anon_sym_PERCENTcx] = ACTIONS(308),
    [anon_sym_PERCENTdx] = ACTIONS(308),
    [anon_sym_PERCENTbx] = ACTIONS(308),
    [anon_sym_PERCENTsi] = ACTIONS(308),
    [anon_sym_PERCENTdi] = ACTIONS(308),
    [anon_sym_PERCENTsp] = ACTIONS(308),
    [anon_sym_PERCENTbp] = ACTIONS(308),
    [anon_sym_PERCENTr8w] = ACTIONS(308),
    [anon_sym_PERCENTr9w] = ACTIONS(308),
    [anon_sym_PERCENTr10w] = ACTIONS(308),
    [anon_sym_PERCENTr11w] = ACTIONS(308),
    [anon_sym_PERCENTr12w] = ACTIONS(308),
    [anon_sym_PERCENTr13w] = ACTIONS(308),
    [anon_sym_PERCENTr14w] = ACTIONS(308),
    [anon_sym_PERCENTr15w] = ACTIONS(308),
    [anon_sym_PERCENTal] = ACTIONS(308),
    [anon_sym_PERCENTcl] = ACTIONS(308),
    [anon_sym_PERCENTdl] = ACTIONS(308),
    [anon_sym_PERCENTbl] = ACTIONS(308),
    [anon_sym_PERCENTsil] = ACTIONS(308),
    [anon_sym_PERCENTdil] = ACTIONS(308),
    [anon_sym_PERCENTspl] = ACTIONS(308),
    [anon_sym_PERCENTbpl] = ACTIONS(308),
    [anon_sym_PERCENTr8b] = ACTIONS(308),
    [anon_sym_PERCENTr9b] = ACTIONS(308),
    [anon_sym_PERCENTr10b] = ACTIONS(308),
    [anon_sym_PERCENTr11b] = ACTIONS(308),
    [anon_sym_PERCENTr12b] = ACTIONS(308),
    [anon_sym_PERCENTr13b] = ACTIONS(308),
    [anon_sym_PERCENTr14b] = ACTIONS(308),
    [anon_sym_PERCENTr15b] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_movsq] = ACTIONS(308),
    [anon_sym_cmpsb] = ACTIONS(308),
    [anon_sym_cmpxchg] = ACTIONS(308),
    [anon_sym_movsl] = ACTIONS(308),
    [anon_sym_PERCENTcr0] = ACTIONS(308),
    [anon_sym_PERCENTcr2] = ACTIONS(308),
    [anon_sym_PERCENTcr3] = ACTIONS(308),
    [anon_sym_PERCENTcr4] = ACTIONS(308),
    [anon_sym_PERCENTrip] = ACTIONS(308),
    [anon_sym_PERCENTeip] = ACTIONS(308),
    [anon_sym_PERCENTip] = ACTIONS(308),
    [anon_sym_PERCENTst] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [36] = {
    [sym_registerOperand] = STATE(156),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_base] = STATE(254),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [37] = {
    [sym__line_break] = ACTIONS(310),
    [aux_sym_comment_token1] = ACTIONS(312),
    [aux_sym_comment_token2] = ACTIONS(312),
    [anon_sym_f] = ACTIONS(312),
    [aux_sym_operand_token1] = ACTIONS(312),
    [anon_sym_LT] = ACTIONS(312),
    [anon_sym_DOLLAR] = ACTIONS(312),
    [anon_sym_PERCENTss] = ACTIONS(312),
    [anon_sym_PERCENTcs] = ACTIONS(312),
    [anon_sym_PERCENTds] = ACTIONS(312),
    [anon_sym_PERCENTes] = ACTIONS(312),
    [anon_sym_PERCENTfs] = ACTIONS(312),
    [anon_sym_PERCENTgs] = ACTIONS(312),
    [anon_sym_PERCENTrax] = ACTIONS(312),
    [anon_sym_PERCENTrbx] = ACTIONS(312),
    [anon_sym_PERCENTrcx] = ACTIONS(312),
    [anon_sym_PERCENTrdx] = ACTIONS(312),
    [anon_sym_PERCENTrsi] = ACTIONS(312),
    [anon_sym_PERCENTrdi] = ACTIONS(312),
    [anon_sym_PERCENTrbp] = ACTIONS(312),
    [anon_sym_PERCENTrsp] = ACTIONS(312),
    [anon_sym_PERCENTr8] = ACTIONS(312),
    [anon_sym_PERCENTr9] = ACTIONS(312),
    [anon_sym_PERCENTr10] = ACTIONS(312),
    [anon_sym_PERCENTr11] = ACTIONS(312),
    [anon_sym_PERCENTr12] = ACTIONS(312),
    [anon_sym_PERCENTr13] = ACTIONS(312),
    [anon_sym_PERCENTr14] = ACTIONS(312),
    [anon_sym_PERCENTr15] = ACTIONS(312),
    [anon_sym_PERCENTeax] = ACTIONS(312),
    [anon_sym_PERCENTecx] = ACTIONS(312),
    [anon_sym_PERCENTedx] = ACTIONS(312),
    [anon_sym_PERCENTebx] = ACTIONS(312),
    [anon_sym_PERCENTesi] = ACTIONS(312),
    [anon_sym_PERCENTedi] = ACTIONS(312),
    [anon_sym_PERCENTebp] = ACTIONS(312),
    [anon_sym_PERCENTesp] = ACTIONS(312),
    [anon_sym_PERCENTr8d] = ACTIONS(312),
    [anon_sym_PERCENTr9d] = ACTIONS(312),
    [anon_sym_PERCENTr10d] = ACTIONS(312),
    [anon_sym_PERCENTr11d] = ACTIONS(312),
    [anon_sym_PERCENTr12d] = ACTIONS(312),
    [anon_sym_PERCENTr13d] = ACTIONS(312),
    [anon_sym_PERCENTr14d] = ACTIONS(312),
    [anon_sym_PERCENTr15d] = ACTIONS(312),
    [anon_sym_PERCENTax] = ACTIONS(312),
    [anon_sym_PERCENTcx] = ACTIONS(312),
    [anon_sym_PERCENTdx] = ACTIONS(312),
    [anon_sym_PERCENTbx] = ACTIONS(312),
    [anon_sym_PERCENTsi] = ACTIONS(312),
    [anon_sym_PERCENTdi] = ACTIONS(312),
    [anon_sym_PERCENTsp] = ACTIONS(312),
    [anon_sym_PERCENTbp] = ACTIONS(312),
    [anon_sym_PERCENTr8w] = ACTIONS(312),
    [anon_sym_PERCENTr9w] = ACTIONS(312),
    [anon_sym_PERCENTr10w] = ACTIONS(312),
    [anon_sym_PERCENTr11w] = ACTIONS(312),
    [anon_sym_PERCENTr12w] = ACTIONS(312),
    [anon_sym_PERCENTr13w] = ACTIONS(312),
    [anon_sym_PERCENTr14w] = ACTIONS(312),
    [anon_sym_PERCENTr15w] = ACTIONS(312),
    [anon_sym_PERCENTal] = ACTIONS(312),
    [anon_sym_PERCENTcl] = ACTIONS(312),
    [anon_sym_PERCENTdl] = ACTIONS(312),
    [anon_sym_PERCENTbl] = ACTIONS(312),
    [anon_sym_PERCENTsil] = ACTIONS(312),
    [anon_sym_PERCENTdil] = ACTIONS(312),
    [anon_sym_PERCENTspl] = ACTIONS(312),
    [anon_sym_PERCENTbpl] = ACTIONS(312),
    [anon_sym_PERCENTr8b] = ACTIONS(312),
    [anon_sym_PERCENTr9b] = ACTIONS(312),
    [anon_sym_PERCENTr10b] = ACTIONS(312),
    [anon_sym_PERCENTr11b] = ACTIONS(312),
    [anon_sym_PERCENTr12b] = ACTIONS(312),
    [anon_sym_PERCENTr13b] = ACTIONS(312),
    [anon_sym_PERCENTr14b] = ACTIONS(312),
    [anon_sym_PERCENTr15b] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_movsq] = ACTIONS(312),
    [anon_sym_cmpsb] = ACTIONS(312),
    [anon_sym_cmpxchg] = ACTIONS(312),
    [anon_sym_movsl] = ACTIONS(312),
    [anon_sym_PERCENTcr0] = ACTIONS(312),
    [anon_sym_PERCENTcr2] = ACTIONS(312),
    [anon_sym_PERCENTcr3] = ACTIONS(312),
    [anon_sym_PERCENTcr4] = ACTIONS(312),
    [anon_sym_PERCENTrip] = ACTIONS(312),
    [anon_sym_PERCENTeip] = ACTIONS(312),
    [anon_sym_PERCENTip] = ACTIONS(312),
    [anon_sym_PERCENTst] = ACTIONS(312),
    [anon_sym_PERCENT] = ACTIONS(312),
  },
  [38] = {
    [sym__line_break] = ACTIONS(314),
    [aux_sym_comment_token1] = ACTIONS(316),
    [aux_sym_comment_token2] = ACTIONS(316),
    [anon_sym_f] = ACTIONS(316),
    [aux_sym_operand_token1] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(316),
    [anon_sym_DOLLAR] = ACTIONS(316),
    [anon_sym_PERCENTss] = ACTIONS(316),
    [anon_sym_PERCENTcs] = ACTIONS(316),
    [anon_sym_PERCENTds] = ACTIONS(316),
    [anon_sym_PERCENTes] = ACTIONS(316),
    [anon_sym_PERCENTfs] = ACTIONS(316),
    [anon_sym_PERCENTgs] = ACTIONS(316),
    [anon_sym_PERCENTrax] = ACTIONS(316),
    [anon_sym_PERCENTrbx] = ACTIONS(316),
    [anon_sym_PERCENTrcx] = ACTIONS(316),
    [anon_sym_PERCENTrdx] = ACTIONS(316),
    [anon_sym_PERCENTrsi] = ACTIONS(316),
    [anon_sym_PERCENTrdi] = ACTIONS(316),
    [anon_sym_PERCENTrbp] = ACTIONS(316),
    [anon_sym_PERCENTrsp] = ACTIONS(316),
    [anon_sym_PERCENTr8] = ACTIONS(316),
    [anon_sym_PERCENTr9] = ACTIONS(316),
    [anon_sym_PERCENTr10] = ACTIONS(316),
    [anon_sym_PERCENTr11] = ACTIONS(316),
    [anon_sym_PERCENTr12] = ACTIONS(316),
    [anon_sym_PERCENTr13] = ACTIONS(316),
    [anon_sym_PERCENTr14] = ACTIONS(316),
    [anon_sym_PERCENTr15] = ACTIONS(316),
    [anon_sym_PERCENTeax] = ACTIONS(316),
    [anon_sym_PERCENTecx] = ACTIONS(316),
    [anon_sym_PERCENTedx] = ACTIONS(316),
    [anon_sym_PERCENTebx] = ACTIONS(316),
    [anon_sym_PERCENTesi] = ACTIONS(316),
    [anon_sym_PERCENTedi] = ACTIONS(316),
    [anon_sym_PERCENTebp] = ACTIONS(316),
    [anon_sym_PERCENTesp] = ACTIONS(316),
    [anon_sym_PERCENTr8d] = ACTIONS(316),
    [anon_sym_PERCENTr9d] = ACTIONS(316),
    [anon_sym_PERCENTr10d] = ACTIONS(316),
    [anon_sym_PERCENTr11d] = ACTIONS(316),
    [anon_sym_PERCENTr12d] = ACTIONS(316),
    [anon_sym_PERCENTr13d] = ACTIONS(316),
    [anon_sym_PERCENTr14d] = ACTIONS(316),
    [anon_sym_PERCENTr15d] = ACTIONS(316),
    [anon_sym_PERCENTax] = ACTIONS(316),
    [anon_sym_PERCENTcx] = ACTIONS(316),
    [anon_sym_PERCENTdx] = ACTIONS(316),
    [anon_sym_PERCENTbx] = ACTIONS(316),
    [anon_sym_PERCENTsi] = ACTIONS(316),
    [anon_sym_PERCENTdi] = ACTIONS(316),
    [anon_sym_PERCENTsp] = ACTIONS(316),
    [anon_sym_PERCENTbp] = ACTIONS(316),
    [anon_sym_PERCENTr8w] = ACTIONS(316),
    [anon_sym_PERCENTr9w] = ACTIONS(316),
    [anon_sym_PERCENTr10w] = ACTIONS(316),
    [anon_sym_PERCENTr11w] = ACTIONS(316),
    [anon_sym_PERCENTr12w] = ACTIONS(316),
    [anon_sym_PERCENTr13w] = ACTIONS(316),
    [anon_sym_PERCENTr14w] = ACTIONS(316),
    [anon_sym_PERCENTr15w] = ACTIONS(316),
    [anon_sym_PERCENTal] = ACTIONS(316),
    [anon_sym_PERCENTcl] = ACTIONS(316),
    [anon_sym_PERCENTdl] = ACTIONS(316),
    [anon_sym_PERCENTbl] = ACTIONS(316),
    [anon_sym_PERCENTsil] = ACTIONS(316),
    [anon_sym_PERCENTdil] = ACTIONS(316),
    [anon_sym_PERCENTspl] = ACTIONS(316),
    [anon_sym_PERCENTbpl] = ACTIONS(316),
    [anon_sym_PERCENTr8b] = ACTIONS(316),
    [anon_sym_PERCENTr9b] = ACTIONS(316),
    [anon_sym_PERCENTr10b] = ACTIONS(316),
    [anon_sym_PERCENTr11b] = ACTIONS(316),
    [anon_sym_PERCENTr12b] = ACTIONS(316),
    [anon_sym_PERCENTr13b] = ACTIONS(316),
    [anon_sym_PERCENTr14b] = ACTIONS(316),
    [anon_sym_PERCENTr15b] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_movsq] = ACTIONS(316),
    [anon_sym_cmpsb] = ACTIONS(316),
    [anon_sym_cmpxchg] = ACTIONS(316),
    [anon_sym_movsl] = ACTIONS(316),
    [anon_sym_PERCENTcr0] = ACTIONS(316),
    [anon_sym_PERCENTcr2] = ACTIONS(316),
    [anon_sym_PERCENTcr3] = ACTIONS(316),
    [anon_sym_PERCENTcr4] = ACTIONS(316),
    [anon_sym_PERCENTrip] = ACTIONS(316),
    [anon_sym_PERCENTeip] = ACTIONS(316),
    [anon_sym_PERCENTip] = ACTIONS(316),
    [anon_sym_PERCENTst] = ACTIONS(316),
    [anon_sym_PERCENT] = ACTIONS(316),
  },
  [39] = {
    [sym__line_break] = ACTIONS(318),
    [aux_sym_comment_token1] = ACTIONS(320),
    [aux_sym_comment_token2] = ACTIONS(320),
    [anon_sym_f] = ACTIONS(320),
    [aux_sym_operand_token1] = ACTIONS(320),
    [anon_sym_LT] = ACTIONS(320),
    [anon_sym_DOLLAR] = ACTIONS(320),
    [anon_sym_PERCENTss] = ACTIONS(320),
    [anon_sym_PERCENTcs] = ACTIONS(320),
    [anon_sym_PERCENTds] = ACTIONS(320),
    [anon_sym_PERCENTes] = ACTIONS(320),
    [anon_sym_PERCENTfs] = ACTIONS(320),
    [anon_sym_PERCENTgs] = ACTIONS(320),
    [anon_sym_PERCENTrax] = ACTIONS(320),
    [anon_sym_PERCENTrbx] = ACTIONS(320),
    [anon_sym_PERCENTrcx] = ACTIONS(320),
    [anon_sym_PERCENTrdx] = ACTIONS(320),
    [anon_sym_PERCENTrsi] = ACTIONS(320),
    [anon_sym_PERCENTrdi] = ACTIONS(320),
    [anon_sym_PERCENTrbp] = ACTIONS(320),
    [anon_sym_PERCENTrsp] = ACTIONS(320),
    [anon_sym_PERCENTr8] = ACTIONS(320),
    [anon_sym_PERCENTr9] = ACTIONS(320),
    [anon_sym_PERCENTr10] = ACTIONS(320),
    [anon_sym_PERCENTr11] = ACTIONS(320),
    [anon_sym_PERCENTr12] = ACTIONS(320),
    [anon_sym_PERCENTr13] = ACTIONS(320),
    [anon_sym_PERCENTr14] = ACTIONS(320),
    [anon_sym_PERCENTr15] = ACTIONS(320),
    [anon_sym_PERCENTeax] = ACTIONS(320),
    [anon_sym_PERCENTecx] = ACTIONS(320),
    [anon_sym_PERCENTedx] = ACTIONS(320),
    [anon_sym_PERCENTebx] = ACTIONS(320),
    [anon_sym_PERCENTesi] = ACTIONS(320),
    [anon_sym_PERCENTedi] = ACTIONS(320),
    [anon_sym_PERCENTebp] = ACTIONS(320),
    [anon_sym_PERCENTesp] = ACTIONS(320),
    [anon_sym_PERCENTr8d] = ACTIONS(320),
    [anon_sym_PERCENTr9d] = ACTIONS(320),
    [anon_sym_PERCENTr10d] = ACTIONS(320),
    [anon_sym_PERCENTr11d] = ACTIONS(320),
    [anon_sym_PERCENTr12d] = ACTIONS(320),
    [anon_sym_PERCENTr13d] = ACTIONS(320),
    [anon_sym_PERCENTr14d] = ACTIONS(320),
    [anon_sym_PERCENTr15d] = ACTIONS(320),
    [anon_sym_PERCENTax] = ACTIONS(320),
    [anon_sym_PERCENTcx] = ACTIONS(320),
    [anon_sym_PERCENTdx] = ACTIONS(320),
    [anon_sym_PERCENTbx] = ACTIONS(320),
    [anon_sym_PERCENTsi] = ACTIONS(320),
    [anon_sym_PERCENTdi] = ACTIONS(320),
    [anon_sym_PERCENTsp] = ACTIONS(320),
    [anon_sym_PERCENTbp] = ACTIONS(320),
    [anon_sym_PERCENTr8w] = ACTIONS(320),
    [anon_sym_PERCENTr9w] = ACTIONS(320),
    [anon_sym_PERCENTr10w] = ACTIONS(320),
    [anon_sym_PERCENTr11w] = ACTIONS(320),
    [anon_sym_PERCENTr12w] = ACTIONS(320),
    [anon_sym_PERCENTr13w] = ACTIONS(320),
    [anon_sym_PERCENTr14w] = ACTIONS(320),
    [anon_sym_PERCENTr15w] = ACTIONS(320),
    [anon_sym_PERCENTal] = ACTIONS(320),
    [anon_sym_PERCENTcl] = ACTIONS(320),
    [anon_sym_PERCENTdl] = ACTIONS(320),
    [anon_sym_PERCENTbl] = ACTIONS(320),
    [anon_sym_PERCENTsil] = ACTIONS(320),
    [anon_sym_PERCENTdil] = ACTIONS(320),
    [anon_sym_PERCENTspl] = ACTIONS(320),
    [anon_sym_PERCENTbpl] = ACTIONS(320),
    [anon_sym_PERCENTr8b] = ACTIONS(320),
    [anon_sym_PERCENTr9b] = ACTIONS(320),
    [anon_sym_PERCENTr10b] = ACTIONS(320),
    [anon_sym_PERCENTr11b] = ACTIONS(320),
    [anon_sym_PERCENTr12b] = ACTIONS(320),
    [anon_sym_PERCENTr13b] = ACTIONS(320),
    [anon_sym_PERCENTr14b] = ACTIONS(320),
    [anon_sym_PERCENTr15b] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(320),
    [anon_sym_LPAREN] = ACTIONS(320),
    [anon_sym_movsq] = ACTIONS(320),
    [anon_sym_cmpsb] = ACTIONS(320),
    [anon_sym_cmpxchg] = ACTIONS(320),
    [anon_sym_movsl] = ACTIONS(320),
    [anon_sym_PERCENTcr0] = ACTIONS(320),
    [anon_sym_PERCENTcr2] = ACTIONS(320),
    [anon_sym_PERCENTcr3] = ACTIONS(320),
    [anon_sym_PERCENTcr4] = ACTIONS(320),
    [anon_sym_PERCENTrip] = ACTIONS(320),
    [anon_sym_PERCENTeip] = ACTIONS(320),
    [anon_sym_PERCENTip] = ACTIONS(320),
    [anon_sym_PERCENTst] = ACTIONS(320),
    [anon_sym_PERCENT] = ACTIONS(320),
  },
  [40] = {
    [sym__line_break] = ACTIONS(322),
    [aux_sym_comment_token1] = ACTIONS(324),
    [aux_sym_comment_token2] = ACTIONS(324),
    [anon_sym_f] = ACTIONS(324),
    [aux_sym_operand_token1] = ACTIONS(324),
    [anon_sym_LT] = ACTIONS(324),
    [anon_sym_DOLLAR] = ACTIONS(324),
    [anon_sym_PERCENTss] = ACTIONS(324),
    [anon_sym_PERCENTcs] = ACTIONS(324),
    [anon_sym_PERCENTds] = ACTIONS(324),
    [anon_sym_PERCENTes] = ACTIONS(324),
    [anon_sym_PERCENTfs] = ACTIONS(324),
    [anon_sym_PERCENTgs] = ACTIONS(324),
    [anon_sym_PERCENTrax] = ACTIONS(324),
    [anon_sym_PERCENTrbx] = ACTIONS(324),
    [anon_sym_PERCENTrcx] = ACTIONS(324),
    [anon_sym_PERCENTrdx] = ACTIONS(324),
    [anon_sym_PERCENTrsi] = ACTIONS(324),
    [anon_sym_PERCENTrdi] = ACTIONS(324),
    [anon_sym_PERCENTrbp] = ACTIONS(324),
    [anon_sym_PERCENTrsp] = ACTIONS(324),
    [anon_sym_PERCENTr8] = ACTIONS(324),
    [anon_sym_PERCENTr9] = ACTIONS(324),
    [anon_sym_PERCENTr10] = ACTIONS(324),
    [anon_sym_PERCENTr11] = ACTIONS(324),
    [anon_sym_PERCENTr12] = ACTIONS(324),
    [anon_sym_PERCENTr13] = ACTIONS(324),
    [anon_sym_PERCENTr14] = ACTIONS(324),
    [anon_sym_PERCENTr15] = ACTIONS(324),
    [anon_sym_PERCENTeax] = ACTIONS(324),
    [anon_sym_PERCENTecx] = ACTIONS(324),
    [anon_sym_PERCENTedx] = ACTIONS(324),
    [anon_sym_PERCENTebx] = ACTIONS(324),
    [anon_sym_PERCENTesi] = ACTIONS(324),
    [anon_sym_PERCENTedi] = ACTIONS(324),
    [anon_sym_PERCENTebp] = ACTIONS(324),
    [anon_sym_PERCENTesp] = ACTIONS(324),
    [anon_sym_PERCENTr8d] = ACTIONS(324),
    [anon_sym_PERCENTr9d] = ACTIONS(324),
    [anon_sym_PERCENTr10d] = ACTIONS(324),
    [anon_sym_PERCENTr11d] = ACTIONS(324),
    [anon_sym_PERCENTr12d] = ACTIONS(324),
    [anon_sym_PERCENTr13d] = ACTIONS(324),
    [anon_sym_PERCENTr14d] = ACTIONS(324),
    [anon_sym_PERCENTr15d] = ACTIONS(324),
    [anon_sym_PERCENTax] = ACTIONS(324),
    [anon_sym_PERCENTcx] = ACTIONS(324),
    [anon_sym_PERCENTdx] = ACTIONS(324),
    [anon_sym_PERCENTbx] = ACTIONS(324),
    [anon_sym_PERCENTsi] = ACTIONS(324),
    [anon_sym_PERCENTdi] = ACTIONS(324),
    [anon_sym_PERCENTsp] = ACTIONS(324),
    [anon_sym_PERCENTbp] = ACTIONS(324),
    [anon_sym_PERCENTr8w] = ACTIONS(324),
    [anon_sym_PERCENTr9w] = ACTIONS(324),
    [anon_sym_PERCENTr10w] = ACTIONS(324),
    [anon_sym_PERCENTr11w] = ACTIONS(324),
    [anon_sym_PERCENTr12w] = ACTIONS(324),
    [anon_sym_PERCENTr13w] = ACTIONS(324),
    [anon_sym_PERCENTr14w] = ACTIONS(324),
    [anon_sym_PERCENTr15w] = ACTIONS(324),
    [anon_sym_PERCENTal] = ACTIONS(324),
    [anon_sym_PERCENTcl] = ACTIONS(324),
    [anon_sym_PERCENTdl] = ACTIONS(324),
    [anon_sym_PERCENTbl] = ACTIONS(324),
    [anon_sym_PERCENTsil] = ACTIONS(324),
    [anon_sym_PERCENTdil] = ACTIONS(324),
    [anon_sym_PERCENTspl] = ACTIONS(324),
    [anon_sym_PERCENTbpl] = ACTIONS(324),
    [anon_sym_PERCENTr8b] = ACTIONS(324),
    [anon_sym_PERCENTr9b] = ACTIONS(324),
    [anon_sym_PERCENTr10b] = ACTIONS(324),
    [anon_sym_PERCENTr11b] = ACTIONS(324),
    [anon_sym_PERCENTr12b] = ACTIONS(324),
    [anon_sym_PERCENTr13b] = ACTIONS(324),
    [anon_sym_PERCENTr14b] = ACTIONS(324),
    [anon_sym_PERCENTr15b] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_movsq] = ACTIONS(324),
    [anon_sym_cmpsb] = ACTIONS(324),
    [anon_sym_cmpxchg] = ACTIONS(324),
    [anon_sym_movsl] = ACTIONS(324),
    [anon_sym_PERCENTcr0] = ACTIONS(324),
    [anon_sym_PERCENTcr2] = ACTIONS(324),
    [anon_sym_PERCENTcr3] = ACTIONS(324),
    [anon_sym_PERCENTcr4] = ACTIONS(324),
    [anon_sym_PERCENTrip] = ACTIONS(324),
    [anon_sym_PERCENTeip] = ACTIONS(324),
    [anon_sym_PERCENTip] = ACTIONS(324),
    [anon_sym_PERCENTst] = ACTIONS(324),
    [anon_sym_PERCENT] = ACTIONS(324),
  },
  [41] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(237),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [42] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(260),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [43] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(233),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [44] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(253),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [45] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(223),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [46] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(256),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [47] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(238),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [48] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(243),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [49] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(258),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [50] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(259),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [51] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(230),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
  [52] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(169),
    [sym_generalRegisterOperand] = STATE(169),
    [sym_generalRegister64Bits] = STATE(170),
    [sym_generalRegister32Bits] = STATE(170),
    [sym_generalRegister16Bits] = STATE(170),
    [sym_generalRegister8Bits] = STATE(170),
    [sym_index] = STATE(261),
    [sym_controlRegisterOperand] = STATE(169),
    [sym_instructionRegisterOperand] = STATE(169),
    [sym_floatRegisterOperand] = STATE(169),
    [sym_otherRegisterOperand] = STATE(169),
    [anon_sym_PERCENTss] = ACTIONS(230),
    [anon_sym_PERCENTcs] = ACTIONS(230),
    [anon_sym_PERCENTds] = ACTIONS(230),
    [anon_sym_PERCENTes] = ACTIONS(232),
    [anon_sym_PERCENTfs] = ACTIONS(230),
    [anon_sym_PERCENTgs] = ACTIONS(230),
    [anon_sym_PERCENTrax] = ACTIONS(234),
    [anon_sym_PERCENTrbx] = ACTIONS(234),
    [anon_sym_PERCENTrcx] = ACTIONS(234),
    [anon_sym_PERCENTrdx] = ACTIONS(234),
    [anon_sym_PERCENTrsi] = ACTIONS(234),
    [anon_sym_PERCENTrdi] = ACTIONS(234),
    [anon_sym_PERCENTrbp] = ACTIONS(234),
    [anon_sym_PERCENTrsp] = ACTIONS(234),
    [anon_sym_PERCENTr8] = ACTIONS(236),
    [anon_sym_PERCENTr9] = ACTIONS(236),
    [anon_sym_PERCENTr10] = ACTIONS(236),
    [anon_sym_PERCENTr11] = ACTIONS(236),
    [anon_sym_PERCENTr12] = ACTIONS(236),
    [anon_sym_PERCENTr13] = ACTIONS(236),
    [anon_sym_PERCENTr14] = ACTIONS(236),
    [anon_sym_PERCENTr15] = ACTIONS(236),
    [anon_sym_PERCENTeax] = ACTIONS(238),
    [anon_sym_PERCENTecx] = ACTIONS(238),
    [anon_sym_PERCENTedx] = ACTIONS(238),
    [anon_sym_PERCENTebx] = ACTIONS(238),
    [anon_sym_PERCENTesi] = ACTIONS(238),
    [anon_sym_PERCENTedi] = ACTIONS(238),
    [anon_sym_PERCENTebp] = ACTIONS(238),
    [anon_sym_PERCENTesp] = ACTIONS(238),
    [anon_sym_PERCENTr8d] = ACTIONS(238),
    [anon_sym_PERCENTr9d] = ACTIONS(238),
    [anon_sym_PERCENTr10d] = ACTIONS(238),
    [anon_sym_PERCENTr11d] = ACTIONS(238),
    [anon_sym_PERCENTr12d] = ACTIONS(238),
    [anon_sym_PERCENTr13d] = ACTIONS(238),
    [anon_sym_PERCENTr14d] = ACTIONS(238),
    [anon_sym_PERCENTr15d] = ACTIONS(238),
    [anon_sym_PERCENTax] = ACTIONS(240),
    [anon_sym_PERCENTcx] = ACTIONS(240),
    [anon_sym_PERCENTdx] = ACTIONS(240),
    [anon_sym_PERCENTbx] = ACTIONS(240),
    [anon_sym_PERCENTsi] = ACTIONS(242),
    [anon_sym_PERCENTdi] = ACTIONS(242),
    [anon_sym_PERCENTsp] = ACTIONS(242),
    [anon_sym_PERCENTbp] = ACTIONS(242),
    [anon_sym_PERCENTr8w] = ACTIONS(240),
    [anon_sym_PERCENTr9w] = ACTIONS(240),
    [anon_sym_PERCENTr10w] = ACTIONS(240),
    [anon_sym_PERCENTr11w] = ACTIONS(240),
    [anon_sym_PERCENTr12w] = ACTIONS(240),
    [anon_sym_PERCENTr13w] = ACTIONS(240),
    [anon_sym_PERCENTr14w] = ACTIONS(240),
    [anon_sym_PERCENTr15w] = ACTIONS(240),
    [anon_sym_PERCENTal] = ACTIONS(244),
    [anon_sym_PERCENTcl] = ACTIONS(244),
    [anon_sym_PERCENTdl] = ACTIONS(244),
    [anon_sym_PERCENTbl] = ACTIONS(244),
    [anon_sym_PERCENTsil] = ACTIONS(244),
    [anon_sym_PERCENTdil] = ACTIONS(244),
    [anon_sym_PERCENTspl] = ACTIONS(244),
    [anon_sym_PERCENTbpl] = ACTIONS(244),
    [anon_sym_PERCENTr8b] = ACTIONS(244),
    [anon_sym_PERCENTr9b] = ACTIONS(244),
    [anon_sym_PERCENTr10b] = ACTIONS(244),
    [anon_sym_PERCENTr11b] = ACTIONS(244),
    [anon_sym_PERCENTr12b] = ACTIONS(244),
    [anon_sym_PERCENTr13b] = ACTIONS(244),
    [anon_sym_PERCENTr14b] = ACTIONS(244),
    [anon_sym_PERCENTr15b] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(250),
    [anon_sym_PERCENTeip] = ACTIONS(250),
    [anon_sym_PERCENTip] = ACTIONS(250),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(254),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(328), 1,
      aux_sym_operand_token1,
    STATE(53), 1,
      aux_sym_operand_repeat1,
    ACTIONS(326), 7,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [16] = 4,
    ACTIONS(333), 1,
      aux_sym_operand_token1,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      aux_sym_operand_repeat1,
    ACTIONS(331), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [33] = 4,
    ACTIONS(333), 1,
      aux_sym_operand_token1,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      aux_sym_operand_repeat1,
    ACTIONS(337), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [50] = 3,
    ACTIONS(343), 1,
      aux_sym_immediateOperand_token1,
    STATE(56), 1,
      aux_sym_immediateOperand_repeat1,
    ACTIONS(341), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [64] = 3,
    ACTIONS(348), 1,
      aux_sym_immediateOperand_token1,
    STATE(56), 1,
      aux_sym_immediateOperand_repeat1,
    ACTIONS(346), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [78] = 3,
    ACTIONS(333), 1,
      aux_sym_operand_token1,
    STATE(53), 1,
      aux_sym_operand_repeat1,
    ACTIONS(350), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [92] = 2,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
    ACTIONS(352), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [103] = 6,
    ACTIONS(356), 1,
      aux_sym_operand_token1,
    ACTIONS(358), 1,
      anon_sym_DASH,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      aux_sym_operand_repeat1,
    STATE(70), 1,
      sym_memoryAbsoluteOperand,
    STATE(265), 1,
      sym_offset,
  [122] = 2,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [133] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    ACTIONS(366), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [144] = 1,
    ACTIONS(370), 6,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
      anon_sym_COLON,
  [153] = 6,
    ACTIONS(372), 1,
      aux_sym_operand_token1,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      aux_sym_operand_repeat1,
    STATE(179), 1,
      sym_memoryAbsoluteOperand,
    STATE(255), 1,
      sym_offset,
  [172] = 4,
    ACTIONS(378), 1,
      anon_sym_,
    ACTIONS(380), 1,
      aux_sym_operand_token1,
    STATE(65), 1,
      aux_sym_operand_repeat1,
    ACTIONS(326), 3,
      sym__comma,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [187] = 3,
    ACTIONS(383), 1,
      aux_sym_operand_token1,
    STATE(66), 1,
      aux_sym_operand_repeat1,
    ACTIONS(378), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [200] = 2,
    ACTIONS(388), 1,
      anon_sym_COLON,
    ACTIONS(386), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [211] = 2,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [222] = 4,
    ACTIONS(394), 1,
      aux_sym_operand_token1,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      aux_sym_operand_repeat1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [236] = 1,
    ACTIONS(400), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [244] = 1,
    ACTIONS(386), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [252] = 1,
    ACTIONS(402), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [260] = 2,
    ACTIONS(404), 2,
      anon_sym_,
      sym__comma,
    ACTIONS(224), 3,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [270] = 2,
    STATE(226), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [280] = 2,
    ACTIONS(404), 2,
      anon_sym_,
      sym__comma,
    ACTIONS(408), 3,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [290] = 1,
    ACTIONS(410), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [298] = 1,
    ACTIONS(412), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [306] = 1,
    ACTIONS(414), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [314] = 2,
    STATE(229), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [324] = 1,
    ACTIONS(416), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [332] = 5,
    ACTIONS(331), 1,
      sym__comma,
    ACTIONS(396), 1,
      anon_sym_,
    ACTIONS(418), 1,
      aux_sym_operand_token1,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      aux_sym_operand_repeat1,
  [348] = 1,
    ACTIONS(422), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [356] = 1,
    ACTIONS(424), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [364] = 1,
    ACTIONS(426), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [372] = 1,
    ACTIONS(428), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [380] = 2,
    STATE(225), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [390] = 1,
    ACTIONS(430), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [398] = 1,
    ACTIONS(432), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [406] = 5,
    ACTIONS(337), 1,
      sym__comma,
    ACTIONS(339), 1,
      anon_sym_LPAREN,
    ACTIONS(418), 1,
      aux_sym_operand_token1,
    ACTIONS(434), 1,
      anon_sym_,
    STATE(65), 1,
      aux_sym_operand_repeat1,
  [422] = 1,
    ACTIONS(436), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [430] = 1,
    ACTIONS(438), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [438] = 1,
    ACTIONS(440), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [446] = 2,
    STATE(231), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [456] = 2,
    STATE(247), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [466] = 2,
    STATE(250), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [476] = 2,
    STATE(227), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [486] = 2,
    STATE(228), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [496] = 2,
    STATE(262), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [506] = 1,
    ACTIONS(442), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [514] = 1,
    ACTIONS(444), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [522] = 1,
    ACTIONS(446), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [530] = 1,
    ACTIONS(448), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [538] = 1,
    ACTIONS(450), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [546] = 2,
    STATE(264), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [556] = 1,
    ACTIONS(452), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [564] = 2,
    STATE(241), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [574] = 2,
    STATE(234), 1,
      sym_scale,
    ACTIONS(406), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [584] = 1,
    ACTIONS(454), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [592] = 1,
    ACTIONS(456), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [600] = 1,
    ACTIONS(458), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [608] = 1,
    ACTIONS(460), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [616] = 1,
    ACTIONS(462), 5,
      sym__line_break,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_,
      sym__comma,
  [624] = 4,
    ACTIONS(464), 1,
      aux_sym_operand_token1,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      aux_sym_operand_repeat1,
    STATE(257), 1,
      sym_offset,
  [637] = 4,
    ACTIONS(350), 1,
      sym__comma,
    ACTIONS(418), 1,
      aux_sym_operand_token1,
    ACTIONS(468), 1,
      anon_sym_,
    STATE(65), 1,
      aux_sym_operand_repeat1,
  [650] = 4,
    ACTIONS(464), 1,
      aux_sym_operand_token1,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      aux_sym_operand_repeat1,
    STATE(239), 1,
      sym_offset,
  [663] = 4,
    ACTIONS(341), 1,
      sym__comma,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(474), 1,
      aux_sym_immediateOperand_token1,
    STATE(116), 1,
      aux_sym_immediateOperand_repeat1,
  [676] = 4,
    ACTIONS(346), 1,
      sym__comma,
    ACTIONS(477), 1,
      anon_sym_,
    ACTIONS(479), 1,
      aux_sym_immediateOperand_token1,
    STATE(116), 1,
      aux_sym_immediateOperand_repeat1,
  [689] = 3,
    ACTIONS(101), 1,
      sym__line_break,
    STATE(263), 1,
      sym_comment,
    ACTIONS(7), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [700] = 4,
    ACTIONS(464), 1,
      aux_sym_operand_token1,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      aux_sym_operand_repeat1,
    STATE(249), 1,
      sym_offset,
  [713] = 4,
    ACTIONS(464), 1,
      aux_sym_operand_token1,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      aux_sym_operand_repeat1,
    STATE(252), 1,
      sym_offset,
  [726] = 3,
    ACTIONS(485), 1,
      sym__line_break,
    STATE(240), 1,
      sym_comment,
    ACTIONS(7), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [737] = 4,
    ACTIONS(487), 1,
      anon_sym_,
    ACTIONS(489), 1,
      aux_sym__address_token1,
    STATE(126), 1,
      aux_sym__address_repeat1,
    STATE(128), 1,
      aux_sym__address_repeat2,
  [750] = 3,
    ACTIONS(491), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [760] = 3,
    ACTIONS(394), 1,
      aux_sym_operand_token1,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_operand_repeat1,
  [770] = 3,
    ACTIONS(497), 1,
      aux_sym__address_token1,
    ACTIONS(499), 1,
      sym__colon,
    STATE(129), 1,
      aux_sym__address_repeat2,
  [780] = 3,
    ACTIONS(501), 1,
      anon_sym_,
    ACTIONS(504), 1,
      aux_sym__address_token1,
    STATE(126), 1,
      aux_sym__address_repeat1,
  [790] = 3,
    ACTIONS(491), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [800] = 3,
    ACTIONS(497), 1,
      aux_sym__address_token1,
    ACTIONS(508), 1,
      sym__colon,
    STATE(129), 1,
      aux_sym__address_repeat2,
  [810] = 3,
    ACTIONS(510), 1,
      aux_sym__address_token1,
    ACTIONS(513), 1,
      sym__colon,
    STATE(129), 1,
      aux_sym__address_repeat2,
  [820] = 3,
    ACTIONS(515), 1,
      aux_sym_operand_token2,
    ACTIONS(517), 1,
      anon_sym_GT,
    STATE(142), 1,
      aux_sym_operand_repeat2,
  [830] = 3,
    ACTIONS(394), 1,
      aux_sym_operand_token1,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      aux_sym_operand_repeat1,
  [840] = 3,
    ACTIONS(491), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [850] = 3,
    ACTIONS(523), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [860] = 3,
    ACTIONS(491), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [870] = 3,
    ACTIONS(394), 1,
      aux_sym_operand_token1,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_operand_repeat1,
  [880] = 3,
    ACTIONS(491), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [890] = 3,
    ACTIONS(491), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [900] = 3,
    ACTIONS(491), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [910] = 3,
    ACTIONS(491), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [920] = 3,
    ACTIONS(394), 1,
      aux_sym_operand_token1,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_operand_repeat1,
  [930] = 3,
    ACTIONS(515), 1,
      aux_sym_operand_token2,
    ACTIONS(542), 1,
      anon_sym_GT,
    STATE(142), 1,
      aux_sym_operand_repeat2,
  [940] = 3,
    ACTIONS(544), 1,
      aux_sym_operand_token2,
    ACTIONS(547), 1,
      anon_sym_GT,
    STATE(142), 1,
      aux_sym_operand_repeat2,
  [950] = 3,
    ACTIONS(390), 1,
      sym__comma,
    ACTIONS(549), 1,
      anon_sym_,
    ACTIONS(551), 1,
      anon_sym_LPAREN,
  [960] = 3,
    ACTIONS(491), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [970] = 3,
    ACTIONS(352), 1,
      sym__comma,
    ACTIONS(555), 1,
      anon_sym_,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
  [980] = 2,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    ACTIONS(549), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [988] = 3,
    ACTIONS(362), 1,
      sym__comma,
    ACTIONS(561), 1,
      anon_sym_,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
  [998] = 3,
    ACTIONS(366), 1,
      sym__comma,
    ACTIONS(565), 1,
      anon_sym_,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
  [1008] = 3,
    ACTIONS(386), 1,
      sym__comma,
    ACTIONS(569), 1,
      anon_sym_,
    ACTIONS(571), 1,
      anon_sym_COLON,
  [1018] = 2,
    ACTIONS(573), 1,
      anon_sym_,
    ACTIONS(370), 2,
      sym__comma,
      anon_sym_COLON,
  [1026] = 2,
    ACTIONS(412), 1,
      sym__comma,
    ACTIONS(575), 1,
      anon_sym_,
  [1033] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [1040] = 2,
    ACTIONS(581), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(134), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1047] = 2,
    ACTIONS(583), 1,
      aux_sym_operand_token1,
    STATE(58), 1,
      aux_sym_operand_repeat1,
  [1054] = 2,
    ACTIONS(585), 1,
      aux_sym_operand_token2,
    STATE(130), 1,
      aux_sym_operand_repeat2,
  [1061] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [1068] = 2,
    ACTIONS(589), 1,
      aux_sym_immediateOperand_token1,
    STATE(57), 1,
      aux_sym_immediateOperand_repeat1,
  [1075] = 2,
    ACTIONS(591), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(132), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1082] = 1,
    ACTIONS(573), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1087] = 1,
    ACTIONS(593), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1092] = 1,
    ACTIONS(595), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1097] = 1,
    ACTIONS(597), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1102] = 1,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1107] = 2,
    ACTIONS(414), 1,
      sym__comma,
    ACTIONS(601), 1,
      anon_sym_,
  [1114] = 1,
    ACTIONS(575), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1119] = 1,
    ACTIONS(603), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1124] = 2,
    ACTIONS(605), 1,
      aux_sym_operand_token1,
    STATE(69), 1,
      aux_sym_operand_repeat1,
  [1131] = 2,
    ACTIONS(402), 1,
      sym__comma,
    ACTIONS(607), 1,
      anon_sym_,
  [1138] = 1,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1143] = 1,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1148] = 2,
    ACTIONS(432), 1,
      sym__comma,
    ACTIONS(611), 1,
      anon_sym_,
  [1155] = 2,
    ACTIONS(404), 1,
      sym__comma,
    ACTIONS(613), 1,
      anon_sym_,
  [1162] = 2,
    ACTIONS(615), 1,
      aux_sym_operand_token1,
    STATE(135), 1,
      aux_sym_operand_repeat1,
  [1169] = 2,
    ACTIONS(617), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(144), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1176] = 2,
    ACTIONS(619), 1,
      aux_sym_operand_token1,
    STATE(54), 1,
      aux_sym_operand_repeat1,
  [1183] = 2,
    ACTIONS(621), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(123), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1190] = 2,
    ACTIONS(416), 1,
      sym__comma,
    ACTIONS(623), 1,
      anon_sym_,
  [1197] = 2,
    ACTIONS(625), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(136), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1204] = 2,
    ACTIONS(400), 1,
      sym__comma,
    ACTIONS(627), 1,
      anon_sym_,
  [1211] = 1,
    ACTIONS(629), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1216] = 1,
    ACTIONS(631), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1221] = 2,
    ACTIONS(454), 1,
      sym__comma,
    ACTIONS(633), 1,
      anon_sym_,
  [1228] = 2,
    ACTIONS(450), 1,
      sym__comma,
    ACTIONS(635), 1,
      anon_sym_,
  [1235] = 2,
    ACTIONS(446), 1,
      sym__comma,
    ACTIONS(637), 1,
      anon_sym_,
  [1242] = 2,
    ACTIONS(456), 1,
      sym__comma,
    ACTIONS(639), 1,
      anon_sym_,
  [1249] = 2,
    ACTIONS(460), 1,
      sym__comma,
    ACTIONS(641), 1,
      anon_sym_,
  [1256] = 2,
    ACTIONS(458), 1,
      sym__comma,
    ACTIONS(643), 1,
      anon_sym_,
  [1263] = 2,
    ACTIONS(452), 1,
      sym__comma,
    ACTIONS(645), 1,
      anon_sym_,
  [1270] = 2,
    ACTIONS(448), 1,
      sym__comma,
    ACTIONS(647), 1,
      anon_sym_,
  [1277] = 2,
    ACTIONS(444), 1,
      sym__comma,
    ACTIONS(649), 1,
      anon_sym_,
  [1284] = 2,
    ACTIONS(428), 1,
      sym__comma,
    ACTIONS(651), 1,
      anon_sym_,
  [1291] = 2,
    ACTIONS(440), 1,
      sym__comma,
    ACTIONS(653), 1,
      anon_sym_,
  [1298] = 2,
    ACTIONS(438), 1,
      sym__comma,
    ACTIONS(655), 1,
      anon_sym_,
  [1305] = 2,
    ACTIONS(430), 1,
      sym__comma,
    ACTIONS(593), 1,
      anon_sym_,
  [1312] = 2,
    ACTIONS(426), 1,
      sym__comma,
    ACTIONS(595), 1,
      anon_sym_,
  [1319] = 2,
    ACTIONS(424), 1,
      sym__comma,
    ACTIONS(597), 1,
      anon_sym_,
  [1326] = 2,
    ACTIONS(422), 1,
      sym__comma,
    ACTIONS(599), 1,
      anon_sym_,
  [1333] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
  [1340] = 2,
    ACTIONS(410), 1,
      sym__comma,
    ACTIONS(603), 1,
      anon_sym_,
  [1347] = 2,
    ACTIONS(659), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(127), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1354] = 2,
    ACTIONS(661), 1,
      aux_sym_operand_token1,
    STATE(81), 1,
      aux_sym_operand_repeat1,
  [1361] = 2,
    ACTIONS(386), 1,
      sym__comma,
    ACTIONS(569), 1,
      anon_sym_,
  [1368] = 2,
    ACTIONS(436), 1,
      sym__comma,
    ACTIONS(609), 1,
      anon_sym_,
  [1375] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [1382] = 2,
    ACTIONS(665), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(137), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1389] = 2,
    ACTIONS(442), 1,
      sym__comma,
    ACTIONS(629), 1,
      anon_sym_,
  [1396] = 2,
    ACTIONS(462), 1,
      sym__comma,
    ACTIONS(631), 1,
      anon_sym_,
  [1403] = 2,
    ACTIONS(667), 1,
      aux_sym_operand_token1,
    STATE(114), 1,
      aux_sym_operand_repeat1,
  [1410] = 2,
    ACTIONS(669), 1,
      aux_sym_immediateOperand_token1,
    STATE(117), 1,
      aux_sym_immediateOperand_repeat1,
  [1417] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
  [1424] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
  [1431] = 2,
    ACTIONS(675), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(138), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1438] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
  [1445] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
  [1452] = 2,
    ACTIONS(681), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(139), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1459] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
  [1466] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [1473] = 2,
    ACTIONS(687), 1,
      aux_sym_operand_token1,
    STATE(140), 1,
      aux_sym_operand_repeat1,
  [1480] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
  [1487] = 2,
    ACTIONS(691), 1,
      aux_sym_operand_token1,
    STATE(124), 1,
      aux_sym_operand_repeat1,
  [1494] = 2,
    ACTIONS(693), 1,
      aux_sym_operand_token2,
    STATE(141), 1,
      aux_sym_operand_repeat2,
  [1501] = 2,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [1508] = 1,
    ACTIONS(697), 1,
      anon_sym_COMMA,
  [1512] = 1,
    ACTIONS(699), 1,
      sym__colon,
  [1516] = 1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
  [1520] = 1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
  [1524] = 1,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [1528] = 1,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [1532] = 1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [1536] = 1,
    ACTIONS(711), 1,
      anon_sym_COMMA,
  [1540] = 1,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [1544] = 1,
    ACTIONS(292), 1,
      anon_sym_COMMA,
  [1548] = 1,
    ACTIONS(715), 1,
      anon_sym_COMMA,
  [1552] = 1,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [1556] = 1,
    ACTIONS(719), 1,
      sym__line_break,
  [1560] = 1,
    ACTIONS(721), 1,
      anon_sym_COMMA,
  [1564] = 1,
    ACTIONS(723), 1,
      anon_sym_COMMA,
  [1568] = 1,
    ACTIONS(725), 1,
      anon_sym_COMMA,
  [1572] = 1,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
  [1576] = 1,
    ACTIONS(729), 1,
      sym__line_break,
  [1580] = 1,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
  [1584] = 1,
    ACTIONS(300), 1,
      anon_sym_COMMA,
  [1588] = 1,
    ACTIONS(733), 1,
      anon_sym_COMMA,
  [1592] = 1,
    ACTIONS(304), 1,
      anon_sym_COMMA,
  [1596] = 1,
    ACTIONS(735), 1,
      anon_sym_COMMA,
  [1600] = 1,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
  [1604] = 1,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
  [1608] = 1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
  [1612] = 1,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
  [1616] = 1,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
  [1620] = 1,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
  [1624] = 1,
    ACTIONS(745), 1,
      anon_sym_LPAREN,
  [1628] = 1,
    ACTIONS(747), 1,
      anon_sym_COMMA,
  [1632] = 1,
    ACTIONS(302), 1,
      anon_sym_COMMA,
  [1636] = 1,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
  [1640] = 1,
    ACTIONS(749), 1,
      anon_sym_COMMA,
  [1644] = 1,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
  [1648] = 1,
    ACTIONS(753), 1,
      anon_sym_COMMA,
  [1652] = 1,
    ACTIONS(755), 1,
      anon_sym_COMMA,
  [1656] = 1,
    ACTIONS(757), 1,
      anon_sym_COMMA,
  [1660] = 1,
    ACTIONS(759), 1,
      anon_sym_COMMA,
  [1664] = 1,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
  [1668] = 1,
    ACTIONS(485), 1,
      sym__line_break,
  [1672] = 1,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
  [1676] = 1,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
  [1680] = 1,
    ACTIONS(101), 1,
      sym__line_break,
  [1684] = 1,
    ACTIONS(765), 1,
      ts_builtin_sym_end,
  [1688] = 1,
    ACTIONS(296), 1,
      anon_sym_COMMA,
  [1692] = 1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
  [1696] = 1,
    ACTIONS(290), 1,
      anon_sym_COMMA,
  [1700] = 1,
    ACTIONS(288), 1,
      anon_sym_COMMA,
  [1704] = 1,
    ACTIONS(767), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(53)] = 0,
  [SMALL_STATE(54)] = 16,
  [SMALL_STATE(55)] = 33,
  [SMALL_STATE(56)] = 50,
  [SMALL_STATE(57)] = 64,
  [SMALL_STATE(58)] = 78,
  [SMALL_STATE(59)] = 92,
  [SMALL_STATE(60)] = 103,
  [SMALL_STATE(61)] = 122,
  [SMALL_STATE(62)] = 133,
  [SMALL_STATE(63)] = 144,
  [SMALL_STATE(64)] = 153,
  [SMALL_STATE(65)] = 172,
  [SMALL_STATE(66)] = 187,
  [SMALL_STATE(67)] = 200,
  [SMALL_STATE(68)] = 211,
  [SMALL_STATE(69)] = 222,
  [SMALL_STATE(70)] = 236,
  [SMALL_STATE(71)] = 244,
  [SMALL_STATE(72)] = 252,
  [SMALL_STATE(73)] = 260,
  [SMALL_STATE(74)] = 270,
  [SMALL_STATE(75)] = 280,
  [SMALL_STATE(76)] = 290,
  [SMALL_STATE(77)] = 298,
  [SMALL_STATE(78)] = 306,
  [SMALL_STATE(79)] = 314,
  [SMALL_STATE(80)] = 324,
  [SMALL_STATE(81)] = 332,
  [SMALL_STATE(82)] = 348,
  [SMALL_STATE(83)] = 356,
  [SMALL_STATE(84)] = 364,
  [SMALL_STATE(85)] = 372,
  [SMALL_STATE(86)] = 380,
  [SMALL_STATE(87)] = 390,
  [SMALL_STATE(88)] = 398,
  [SMALL_STATE(89)] = 406,
  [SMALL_STATE(90)] = 422,
  [SMALL_STATE(91)] = 430,
  [SMALL_STATE(92)] = 438,
  [SMALL_STATE(93)] = 446,
  [SMALL_STATE(94)] = 456,
  [SMALL_STATE(95)] = 466,
  [SMALL_STATE(96)] = 476,
  [SMALL_STATE(97)] = 486,
  [SMALL_STATE(98)] = 496,
  [SMALL_STATE(99)] = 506,
  [SMALL_STATE(100)] = 514,
  [SMALL_STATE(101)] = 522,
  [SMALL_STATE(102)] = 530,
  [SMALL_STATE(103)] = 538,
  [SMALL_STATE(104)] = 546,
  [SMALL_STATE(105)] = 556,
  [SMALL_STATE(106)] = 564,
  [SMALL_STATE(107)] = 574,
  [SMALL_STATE(108)] = 584,
  [SMALL_STATE(109)] = 592,
  [SMALL_STATE(110)] = 600,
  [SMALL_STATE(111)] = 608,
  [SMALL_STATE(112)] = 616,
  [SMALL_STATE(113)] = 624,
  [SMALL_STATE(114)] = 637,
  [SMALL_STATE(115)] = 650,
  [SMALL_STATE(116)] = 663,
  [SMALL_STATE(117)] = 676,
  [SMALL_STATE(118)] = 689,
  [SMALL_STATE(119)] = 700,
  [SMALL_STATE(120)] = 713,
  [SMALL_STATE(121)] = 726,
  [SMALL_STATE(122)] = 737,
  [SMALL_STATE(123)] = 750,
  [SMALL_STATE(124)] = 760,
  [SMALL_STATE(125)] = 770,
  [SMALL_STATE(126)] = 780,
  [SMALL_STATE(127)] = 790,
  [SMALL_STATE(128)] = 800,
  [SMALL_STATE(129)] = 810,
  [SMALL_STATE(130)] = 820,
  [SMALL_STATE(131)] = 830,
  [SMALL_STATE(132)] = 840,
  [SMALL_STATE(133)] = 850,
  [SMALL_STATE(134)] = 860,
  [SMALL_STATE(135)] = 870,
  [SMALL_STATE(136)] = 880,
  [SMALL_STATE(137)] = 890,
  [SMALL_STATE(138)] = 900,
  [SMALL_STATE(139)] = 910,
  [SMALL_STATE(140)] = 920,
  [SMALL_STATE(141)] = 930,
  [SMALL_STATE(142)] = 940,
  [SMALL_STATE(143)] = 950,
  [SMALL_STATE(144)] = 960,
  [SMALL_STATE(145)] = 970,
  [SMALL_STATE(146)] = 980,
  [SMALL_STATE(147)] = 988,
  [SMALL_STATE(148)] = 998,
  [SMALL_STATE(149)] = 1008,
  [SMALL_STATE(150)] = 1018,
  [SMALL_STATE(151)] = 1026,
  [SMALL_STATE(152)] = 1033,
  [SMALL_STATE(153)] = 1040,
  [SMALL_STATE(154)] = 1047,
  [SMALL_STATE(155)] = 1054,
  [SMALL_STATE(156)] = 1061,
  [SMALL_STATE(157)] = 1068,
  [SMALL_STATE(158)] = 1075,
  [SMALL_STATE(159)] = 1082,
  [SMALL_STATE(160)] = 1087,
  [SMALL_STATE(161)] = 1092,
  [SMALL_STATE(162)] = 1097,
  [SMALL_STATE(163)] = 1102,
  [SMALL_STATE(164)] = 1107,
  [SMALL_STATE(165)] = 1114,
  [SMALL_STATE(166)] = 1119,
  [SMALL_STATE(167)] = 1124,
  [SMALL_STATE(168)] = 1131,
  [SMALL_STATE(169)] = 1138,
  [SMALL_STATE(170)] = 1143,
  [SMALL_STATE(171)] = 1148,
  [SMALL_STATE(172)] = 1155,
  [SMALL_STATE(173)] = 1162,
  [SMALL_STATE(174)] = 1169,
  [SMALL_STATE(175)] = 1176,
  [SMALL_STATE(176)] = 1183,
  [SMALL_STATE(177)] = 1190,
  [SMALL_STATE(178)] = 1197,
  [SMALL_STATE(179)] = 1204,
  [SMALL_STATE(180)] = 1211,
  [SMALL_STATE(181)] = 1216,
  [SMALL_STATE(182)] = 1221,
  [SMALL_STATE(183)] = 1228,
  [SMALL_STATE(184)] = 1235,
  [SMALL_STATE(185)] = 1242,
  [SMALL_STATE(186)] = 1249,
  [SMALL_STATE(187)] = 1256,
  [SMALL_STATE(188)] = 1263,
  [SMALL_STATE(189)] = 1270,
  [SMALL_STATE(190)] = 1277,
  [SMALL_STATE(191)] = 1284,
  [SMALL_STATE(192)] = 1291,
  [SMALL_STATE(193)] = 1298,
  [SMALL_STATE(194)] = 1305,
  [SMALL_STATE(195)] = 1312,
  [SMALL_STATE(196)] = 1319,
  [SMALL_STATE(197)] = 1326,
  [SMALL_STATE(198)] = 1333,
  [SMALL_STATE(199)] = 1340,
  [SMALL_STATE(200)] = 1347,
  [SMALL_STATE(201)] = 1354,
  [SMALL_STATE(202)] = 1361,
  [SMALL_STATE(203)] = 1368,
  [SMALL_STATE(204)] = 1375,
  [SMALL_STATE(205)] = 1382,
  [SMALL_STATE(206)] = 1389,
  [SMALL_STATE(207)] = 1396,
  [SMALL_STATE(208)] = 1403,
  [SMALL_STATE(209)] = 1410,
  [SMALL_STATE(210)] = 1417,
  [SMALL_STATE(211)] = 1424,
  [SMALL_STATE(212)] = 1431,
  [SMALL_STATE(213)] = 1438,
  [SMALL_STATE(214)] = 1445,
  [SMALL_STATE(215)] = 1452,
  [SMALL_STATE(216)] = 1459,
  [SMALL_STATE(217)] = 1466,
  [SMALL_STATE(218)] = 1473,
  [SMALL_STATE(219)] = 1480,
  [SMALL_STATE(220)] = 1487,
  [SMALL_STATE(221)] = 1494,
  [SMALL_STATE(222)] = 1501,
  [SMALL_STATE(223)] = 1508,
  [SMALL_STATE(224)] = 1512,
  [SMALL_STATE(225)] = 1516,
  [SMALL_STATE(226)] = 1520,
  [SMALL_STATE(227)] = 1524,
  [SMALL_STATE(228)] = 1528,
  [SMALL_STATE(229)] = 1532,
  [SMALL_STATE(230)] = 1536,
  [SMALL_STATE(231)] = 1540,
  [SMALL_STATE(232)] = 1544,
  [SMALL_STATE(233)] = 1548,
  [SMALL_STATE(234)] = 1552,
  [SMALL_STATE(235)] = 1556,
  [SMALL_STATE(236)] = 1560,
  [SMALL_STATE(237)] = 1564,
  [SMALL_STATE(238)] = 1568,
  [SMALL_STATE(239)] = 1572,
  [SMALL_STATE(240)] = 1576,
  [SMALL_STATE(241)] = 1580,
  [SMALL_STATE(242)] = 1584,
  [SMALL_STATE(243)] = 1588,
  [SMALL_STATE(244)] = 1592,
  [SMALL_STATE(245)] = 1596,
  [SMALL_STATE(246)] = 1600,
  [SMALL_STATE(247)] = 1604,
  [SMALL_STATE(248)] = 1608,
  [SMALL_STATE(249)] = 1612,
  [SMALL_STATE(250)] = 1616,
  [SMALL_STATE(251)] = 1620,
  [SMALL_STATE(252)] = 1624,
  [SMALL_STATE(253)] = 1628,
  [SMALL_STATE(254)] = 1632,
  [SMALL_STATE(255)] = 1636,
  [SMALL_STATE(256)] = 1640,
  [SMALL_STATE(257)] = 1644,
  [SMALL_STATE(258)] = 1648,
  [SMALL_STATE(259)] = 1652,
  [SMALL_STATE(260)] = 1656,
  [SMALL_STATE(261)] = 1660,
  [SMALL_STATE(262)] = 1664,
  [SMALL_STATE(263)] = 1668,
  [SMALL_STATE(264)] = 1672,
  [SMALL_STATE(265)] = 1676,
  [SMALL_STATE(266)] = 1680,
  [SMALL_STATE(267)] = 1684,
  [SMALL_STATE(268)] = 1688,
  [SMALL_STATE(269)] = 1692,
  [SMALL_STATE(270)] = 1696,
  [SMALL_STATE(271)] = 1700,
  [SMALL_STATE(272)] = 1704,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(235),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(122),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(125),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(16),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(39),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(40),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(38),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(35),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(14),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(17),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(18),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(19),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(20),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(21),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(22),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(23),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_code, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__machine_code, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__machine_code_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__machine_code_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__machine_code_repeat1, 2), SHIFT_REPEAT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_code, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__machine_code, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(208),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(89),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(221),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(209),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(150),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(194),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(195),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(196),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(197),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(120),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(30),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(164),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(151),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(199),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(143),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(201),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MiscellaneousOpcode, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MiscellaneousOpcode, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BinaryArithmeticOpcode, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BinaryArithmeticOpcode, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PackUnpackOpcode, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PackUnpackOpcode, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ShiftAndRotateOpcode, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ShiftAndRotateOpcode, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StackOpcode, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StackOpcode, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringOpcode, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StringOpcode, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AccessRegisterOpcode, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AccessRegisterOpcode, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ToBeClassifiedOpcode, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ToBeClassifiedOpcode, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LogicalOpcode, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LogicalOpcode, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IOOpcode, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_IOOpcode, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DataTransferOpcode, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DataTransferOpcode, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BitAndByteOpcode, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BitAndByteOpcode, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CuriousOpcode, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CuriousOpcode, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(53),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherRegisterOperand, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryAbsoluteOperand, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2), SHIFT_REPEAT(56),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediateOperand, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 5),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 4),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segmentRegisterOperand, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(65),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(66),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registerOperand, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatRegisterOperand, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherRegisterOperand, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instructionRegisterOperand, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_controlRegisterOperand, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_someOpcode, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister8Bits, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister16Bits, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister32Bits, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 9),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister64Bits, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryOperand, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryAbsoluteOperand, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegisterOperand, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 11),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 10),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatRegisterOperand, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 8),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 6),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 8),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 6),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 7),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 5),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 6),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 7),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 7),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherRegisterOperand, 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_immediateOperand_repeat1, 2),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2), SHIFT_REPEAT(116),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediateOperand, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address, 1),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__address_repeat1, 2), SHIFT_REPEAT(126),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__address_repeat1, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address, 2),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__address_repeat2, 2), SHIFT_REPEAT(129),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__address_repeat2, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memoryIndirectOperand_repeat1, 2), SHIFT_REPEAT(133),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memoryIndirectOperand_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operand_repeat2, 2), SHIFT_REPEAT(142),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_repeat2, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatRegisterOperand, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 5),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 4),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registerOperand, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segmentRegisterOperand, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controlRegisterOperand, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister64Bits, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister32Bits, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister16Bits, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister8Bits, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_someOpcode, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instructionRegisterOperand, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegisterOperand, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryOperand, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatRegisterOperand, 4),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherRegisterOperand, 5),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 5),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 6),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 6),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 7),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 7),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 7),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 8),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 8),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 9),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 10),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 11),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [765] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
