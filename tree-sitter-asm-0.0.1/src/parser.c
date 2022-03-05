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
#define STATE_COUNT 305
#define LARGE_STATE_COUNT 62
#define SYMBOL_COUNT 577
#define ALIAS_COUNT 0
#define TOKEN_COUNT 517
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__address_token1 = 1,
  sym__byte = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_comment_token2 = 4,
  sym__line_break = 5,
  anon_sym_COLON = 6,
  sym__comma = 7,
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
  sym__address = 518,
  sym_comment = 519,
  sym__colon = 520,
  sym__machine_code = 521,
  sym__line = 522,
  sym_instruction = 523,
  sym_data = 524,
  sym_opcode = 525,
  sym_BinaryArithmeticOpcode = 526,
  sym_BitAndByteOpcode = 527,
  sym_CuriousOpcode = 528,
  sym_DataTransferOpcode = 529,
  sym_IOOpcode = 530,
  sym_LogicalOpcode = 531,
  sym_MiscellaneousOpcode = 532,
  sym_PackUnpackOpcode = 533,
  sym_ShiftAndRotateOpcode = 534,
  sym_StackOpcode = 535,
  sym_StringOpcode = 536,
  sym_AccessRegisterOpcode = 537,
  sym_ToBeClassifiedOpcode = 538,
  sym_operand = 539,
  sym_immediateOperand = 540,
  sym_registerOperand = 541,
  sym_segmentRegisterOperand = 542,
  sym_generalRegisterOperand = 543,
  sym_generalRegister64Bits = 544,
  sym_generalRegister32Bits = 545,
  sym_generalRegister16Bits = 546,
  sym_generalRegister8Bits = 547,
  sym_memoryOperand = 548,
  sym_memoryScalaredIndexedOperand = 549,
  sym_memorySegmentBaseOperand = 550,
  sym_memoryIndirectOperand = 551,
  sym_offset = 552,
  sym_base = 553,
  sym_index = 554,
  sym_scale = 555,
  sym_memoryAbsoluteOperand = 556,
  sym_someOpcode = 557,
  sym_control = 558,
  sym_controlOpcode = 559,
  sym_fnOperand = 560,
  sym_indirectOperands = 561,
  sym_controlRegisterOperand = 562,
  sym_instructionRegisterOperand = 563,
  sym_floatRegisterOperand = 564,
  sym_otherRegisterOperand = 565,
  sym_otherFnOperands = 566,
  aux_sym_prog_repeat1 = 567,
  aux_sym__address_repeat1 = 568,
  aux_sym__machine_code_repeat1 = 569,
  aux_sym_data_repeat1 = 570,
  aux_sym_operand_repeat1 = 571,
  aux_sym_operand_repeat2 = 572,
  aux_sym_immediateOperand_repeat1 = 573,
  aux_sym_memoryIndirectOperand_repeat1 = 574,
  aux_sym_control_repeat1 = 575,
  aux_sym_otherFnOperands_repeat1 = 576,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__address_token1] = "_address_token1",
  [sym__byte] = "_byte",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym__line_break] = "_line_break",
  [anon_sym_COLON] = ":",
  [sym__comma] = "_comma",
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
  [sym__address] = "_address",
  [sym_comment] = "comment",
  [sym__colon] = "_colon",
  [sym__machine_code] = "_machine_code",
  [sym__line] = "_line",
  [sym_instruction] = "instruction",
  [sym_data] = "data",
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
  [sym_control] = "control",
  [sym_controlOpcode] = "controlOpcode",
  [sym_fnOperand] = "fnOperand",
  [sym_indirectOperands] = "indirectOperands",
  [sym_controlRegisterOperand] = "controlRegisterOperand",
  [sym_instructionRegisterOperand] = "instructionRegisterOperand",
  [sym_floatRegisterOperand] = "floatRegisterOperand",
  [sym_otherRegisterOperand] = "otherRegisterOperand",
  [sym_otherFnOperands] = "otherFnOperands",
  [aux_sym_prog_repeat1] = "prog_repeat1",
  [aux_sym__address_repeat1] = "_address_repeat1",
  [aux_sym__machine_code_repeat1] = "_machine_code_repeat1",
  [aux_sym_data_repeat1] = "data_repeat1",
  [aux_sym_operand_repeat1] = "operand_repeat1",
  [aux_sym_operand_repeat2] = "operand_repeat2",
  [aux_sym_immediateOperand_repeat1] = "immediateOperand_repeat1",
  [aux_sym_memoryIndirectOperand_repeat1] = "memoryIndirectOperand_repeat1",
  [aux_sym_control_repeat1] = "control_repeat1",
  [aux_sym_otherFnOperands_repeat1] = "otherFnOperands_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__address_token1] = aux_sym__address_token1,
  [sym__byte] = sym__byte,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym__line_break] = sym__line_break,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__comma] = sym__comma,
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
  [sym__address] = sym__address,
  [sym_comment] = sym_comment,
  [sym__colon] = sym__colon,
  [sym__machine_code] = sym__machine_code,
  [sym__line] = sym__line,
  [sym_instruction] = sym_instruction,
  [sym_data] = sym_data,
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
  [sym_control] = sym_control,
  [sym_controlOpcode] = sym_controlOpcode,
  [sym_fnOperand] = sym_fnOperand,
  [sym_indirectOperands] = sym_indirectOperands,
  [sym_controlRegisterOperand] = sym_controlRegisterOperand,
  [sym_instructionRegisterOperand] = sym_instructionRegisterOperand,
  [sym_floatRegisterOperand] = sym_floatRegisterOperand,
  [sym_otherRegisterOperand] = sym_otherRegisterOperand,
  [sym_otherFnOperands] = sym_otherFnOperands,
  [aux_sym_prog_repeat1] = aux_sym_prog_repeat1,
  [aux_sym__address_repeat1] = aux_sym__address_repeat1,
  [aux_sym__machine_code_repeat1] = aux_sym__machine_code_repeat1,
  [aux_sym_data_repeat1] = aux_sym_data_repeat1,
  [aux_sym_operand_repeat1] = aux_sym_operand_repeat1,
  [aux_sym_operand_repeat2] = aux_sym_operand_repeat2,
  [aux_sym_immediateOperand_repeat1] = aux_sym_immediateOperand_repeat1,
  [aux_sym_memoryIndirectOperand_repeat1] = aux_sym_memoryIndirectOperand_repeat1,
  [aux_sym_control_repeat1] = aux_sym_control_repeat1,
  [aux_sym_otherFnOperands_repeat1] = aux_sym_otherFnOperands_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__address_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__byte] = {
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
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
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
  [sym__address] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__colon] = {
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
  [sym_data] = {
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
  [sym_control] = {
    .visible = true,
    .named = true,
  },
  [sym_controlOpcode] = {
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
  [aux_sym__address_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__machine_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_repeat1] = {
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
  [aux_sym_control_repeat1] = {
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
      if (eof) ADVANCE(674);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(1085);
      if (lookahead == '%') ADVANCE(1200);
      if (lookahead == '(') ADVANCE(1158);
      if (lookahead == ')') ADVANCE(1159);
      if (lookahead == '*') ADVANCE(1191);
      if (lookahead == '+') ADVANCE(1083);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '-') ADVANCE(1157);
      if (lookahead == '.') ADVANCE(1086);
      if (lookahead == '/') ADVANCE(1086);
      if (lookahead == '1') ADVANCE(1163);
      if (lookahead == '2') ADVANCE(1164);
      if (lookahead == '4') ADVANCE(1165);
      if (lookahead == '8') ADVANCE(1166);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '<') ADVANCE(1082);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(1084);
      if (lookahead == 'f') ADVANCE(1078);
      if (lookahead == '{') ADVANCE(1160);
      if (lookahead == '}') ADVANCE(1162);
      if (lookahead == '&' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(1202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(675);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1079);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(686);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '$') ADVANCE(1085);
      if (lookahead == '%') ADVANCE(1201);
      if (lookahead == '(') ADVANCE(1158);
      if (lookahead == '-') ADVANCE(1157);
      if (lookahead == '<') ADVANCE(1082);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(1080);
      if (lookahead == 'f') ADVANCE(1078);
      if (lookahead == 'm') ADVANCE(1081);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1079);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(686);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '*') ADVANCE(1191);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'j') ADVANCE(1203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (aux_sym_otherFnOperands_token1_character_set_1(lookahead)) ADVANCE(1202);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(686);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'b') ADVANCE(351);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'g') ADVANCE(518);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'j') ADVANCE(81);
      if (lookahead == 'k') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == ' ') ADVANCE(690);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '(') ADVANCE(1158);
      if (lookahead == ')') ADVANCE(1159);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '{') ADVANCE(1160);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1079);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == ' ') ADVANCE(690);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(5)
      if (aux_sym_otherFnOperands_token1_character_set_2(lookahead)) ADVANCE(1202);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == ' ') ADVANCE(690);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1086);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(691);
      if (lookahead == '(') ADVANCE(1158);
      if (lookahead == ')') ADVANCE(1159);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '{') ADVANCE(1160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1079);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(691);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1086);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(691);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (aux_sym_otherFnOperands_token1_character_set_3(lookahead)) ADVANCE(1202);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(1201);
      if (lookahead == '(') ADVANCE(1158);
      if (lookahead == ')') ADVANCE(1159);
      if (lookahead == ',') ADVANCE(689);
      if (lookahead == '-') ADVANCE(1157);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '{') ADVANCE(1160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1079);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(1049);
      if (lookahead == '1') ADVANCE(1048);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(1192);
      if (lookahead == '2') ADVANCE(1193);
      if (lookahead == '3') ADVANCE(1194);
      if (lookahead == '4') ADVANCE(1195);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(1103);
      if (lookahead == '1') ADVANCE(1104);
      if (lookahead == '2') ADVANCE(1105);
      if (lookahead == '3') ADVANCE(1106);
      if (lookahead == '4') ADVANCE(1107);
      if (lookahead == '5') ADVANCE(1108);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(1163);
      if (lookahead == '2') ADVANCE(1164);
      if (lookahead == '4') ADVANCE(1165);
      if (lookahead == '8') ADVANCE(1166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(391);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(876);
      if (lookahead == '2') ADVANCE(877);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '8') ADVANCE(1101);
      if (lookahead == '9') ADVANCE(1102);
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead == 'b') ADVANCE(442);
      if (lookahead == 'c') ADVANCE(656);
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == 's') ADVANCE(329);
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
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == '1') ADVANCE(36);
      if (lookahead == '3') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(872);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(875);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(1020);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'q') ADVANCE(1021);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(955);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(953);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(1007);
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
      if (lookahead == '2') ADVANCE(658);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(68);
      END_STATE();
    case 37:
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(564);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(545);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(546);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(213);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(214);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(659);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(661);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(566);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(663);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(558);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(573);
      END_STATE();
    case 49:
      if (lookahead == '3') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(879);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(874);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(956);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(952);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(1006);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(1012);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(1013);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(1010);
      END_STATE();
    case 59:
      if (lookahead == '4') ADVANCE(1018);
      END_STATE();
    case 60:
      if (lookahead == '4') ADVANCE(664);
      END_STATE();
    case 61:
      if (lookahead == '4') ADVANCE(660);
      END_STATE();
    case 62:
      if (lookahead == '6') ADVANCE(873);
      END_STATE();
    case 63:
      if (lookahead == '6') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == '8') ADVANCE(1003);
      END_STATE();
    case 65:
      if (lookahead == '8') ADVANCE(1019);
      END_STATE();
    case 66:
      if (lookahead == '8') ADVANCE(1002);
      END_STATE();
    case 67:
      if (lookahead == '8') ADVANCE(1011);
      END_STATE();
    case 68:
      if (lookahead == '8') ADVANCE(1009);
      END_STATE();
    case 69:
      if (lookahead == '8') ADVANCE(1017);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(675);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(685);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(1084);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1083);
      END_STATE();
    case 74:
      if (lookahead == 'B') ADVANCE(927);
      if (lookahead == 'R') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(930);
      if (lookahead == 'X') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(931);
      if (lookahead == 'X') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(929);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(926);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(925);
      if (lookahead == 'X') ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(928);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'b') ADVANCE(577);
      if (lookahead == 'l') ADVANCE(578);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead == 'q') ADVANCE(597);
      if (lookahead == 'v') ADVANCE(579);
      if (lookahead == 'w') ADVANCE(580);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(1172);
      if (lookahead == 'b') ADVANCE(1174);
      if (lookahead == 'e') ADVANCE(1176);
      if (lookahead == 'g') ADVANCE(1177);
      if (lookahead == 'l') ADVANCE(1179);
      if (lookahead == 'm') ADVANCE(431);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(1186);
      if (lookahead == 'p') ADVANCE(1187);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == 's') ADVANCE(1189);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(625);
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'b') ADVANCE(381);
      if (lookahead == 'c') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 'u') ADVANCE(413);
      if (lookahead == 'x') ADVANCE(418);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == 'h') ADVANCE(86);
      if (lookahead == 's') ADVANCE(772);
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(867);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(901);
      if (lookahead == 'r') ADVANCE(906);
      if (lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(755);
      if (lookahead == 'b') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(753);
      if (lookahead == 'g') ADVANCE(760);
      if (lookahead == 'l') ADVANCE(758);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(761);
      if (lookahead == 'p') ADVANCE(763);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(790);
      if (lookahead == 'b') ADVANCE(789);
      if (lookahead == 'e') ADVANCE(787);
      if (lookahead == 'g') ADVANCE(785);
      if (lookahead == 'l') ADVANCE(780);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead == 'p') ADVANCE(786);
      if (lookahead == 's') ADVANCE(792);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(827);
      if (lookahead == 'u') ADVANCE(830);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(954);
      if (lookahead == 'u') ADVANCE(951);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'b') ADVANCE(682);
      if (lookahead == 'l') ADVANCE(578);
      if (lookahead == 'm') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead == 'q') ADVANCE(597);
      if (lookahead == 'v') ADVANCE(579);
      if (lookahead == 'w') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead == 'i') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(632);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(424);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(422);
      if (lookahead == 'z') ADVANCE(274);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(593);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(653);
      if (lookahead == 'b') ADVANCE(440);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == 'd') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 's') ADVANCE(1090);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'u') ADVANCE(449);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'b') ADVANCE(384);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == 'r') ADVANCE(425);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead == 'x') ADVANCE(426);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead == 'd') ADVANCE(959);
      if (lookahead == 'q') ADVANCE(957);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(457);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 114:
      if (lookahead == 'b') ADVANCE(724);
      END_STATE();
    case 115:
      if (lookahead == 'b') ADVANCE(716);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(835);
      if (lookahead == 'l') ADVANCE(836);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(919);
      if (lookahead == 'd') ADVANCE(824);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead == 's') ADVANCE(822);
      if (lookahead == 'w') ADVANCE(358);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(360);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(837);
      if (lookahead == 'l') ADVANCE(838);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(1043);
      if (lookahead == 'd') ADVANCE(1026);
      if (lookahead == 'q') ADVANCE(1055);
      if (lookahead == 'u') ADVANCE(537);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(1075);
      if (lookahead == 'q') ADVANCE(1073);
      if (lookahead == 'w') ADVANCE(1050);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(1071);
      if (lookahead == 'd') ADVANCE(1076);
      if (lookahead == 'w') ADVANCE(1046);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(1069);
      if (lookahead == 'd') ADVANCE(1058);
      if (lookahead == 'h') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(641);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(964);
      if (lookahead == 'd') ADVANCE(963);
      if (lookahead == 'q') ADVANCE(965);
      if (lookahead == 'w') ADVANCE(966);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(1036);
      if (lookahead == 'd') ADVANCE(1032);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(1037);
      if (lookahead == 'w') ADVANCE(1035);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(973);
      if (lookahead == 'd') ADVANCE(971);
      if (lookahead == 'q') ADVANCE(972);
      if (lookahead == 'w') ADVANCE(970);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(979);
      if (lookahead == 'd') ADVANCE(980);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(881);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(1045);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(1168);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(509);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(522);
      if (lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(629);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(646);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'q') ADVANCE(238);
      if (lookahead == 'w') ADVANCE(217);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead == 'q') ADVANCE(240);
      if (lookahead == 'w') ADVANCE(218);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(554);
      END_STATE();
    case 140:
      if (lookahead == 'b') ADVANCE(557);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(562);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead == 'g') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(692);
      if (lookahead == 'd') ADVANCE(693);
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(708);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(706);
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(937);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(939);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(941);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(346);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(428);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(652);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(599);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(429);
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead == 'm') ADVANCE(614);
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(852);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(777);
      if (lookahead == 'q') ADVANCE(778);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(794);
      if (lookahead == 'l') ADVANCE(793);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(859);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(1053);
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(858);
      if (lookahead == 's') ADVANCE(861);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(866);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(1062);
      if (lookahead == 's') ADVANCE(1044);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(1059);
      if (lookahead == 's') ADVANCE(1047);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 's') ADVANCE(728);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(1041);
      if (lookahead == 'q') ADVANCE(1054);
      if (lookahead == 'w') ADVANCE(1034);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(1030);
      if (lookahead == 'q') ADVANCE(1040);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(1029);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(1038);
      if (lookahead == 'q') ADVANCE(1042);
      if (lookahead == 'w') ADVANCE(1039);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(723);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead == 's') ADVANCE(719);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(862);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(848);
      if (lookahead == 's') ADVANCE(847);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(705);
      if (lookahead == 's') ADVANCE(704);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(829);
      if (lookahead == 's') ADVANCE(820);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(1064);
      if (lookahead == 's') ADVANCE(1052);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(947);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(960);
      if (lookahead == 's') ADVANCE(950);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(961);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(911);
      if (lookahead == 'q') ADVANCE(912);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(982);
      if (lookahead == 'q') ADVANCE(983);
      if (lookahead == 'w') ADVANCE(984);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(986);
      if (lookahead == 'q') ADVANCE(987);
      if (lookahead == 'w') ADVANCE(988);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(991);
      if (lookahead == 'q') ADVANCE(990);
      if (lookahead == 'u') ADVANCE(551);
      if (lookahead == 'w') ADVANCE(992);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(994);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(1031);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(1027);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(1063);
      if (lookahead == 's') ADVANCE(1051);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(949);
      if (lookahead == 's') ADVANCE(948);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(799);
      if (lookahead == 's') ADVANCE(800);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(797);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1066);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1014);
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(968);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(1023);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(1022);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(975);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(995);
      if (lookahead == 's') ADVANCE(996);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(884);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(887);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(1008);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(769);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(997);
      if (lookahead == 's') ADVANCE(998);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(999);
      if (lookahead == 's') ADVANCE(1000);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(946);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(895);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(888);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(1016);
      if (lookahead == 'q') ADVANCE(1015);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(677);
      if (lookahead == 'e') ADVANCE(681);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(639);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(470);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead == 'k') ADVANCE(263);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(582);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(635);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(648);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'q') ADVANCE(244);
      if (lookahead == 'w') ADVANCE(224);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'q') ADVANCE(245);
      if (lookahead == 'w') ADVANCE(225);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(479);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(480);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(482);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(483);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(484);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(539);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(622);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(771);
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'o') ADVANCE(1184);
      if (lookahead == 's') ADVANCE(1185);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(751);
      if (lookahead == 'p') ADVANCE(762);
      if (lookahead == 's') ADVANCE(764);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(783);
      if (lookahead == 's') ADVANCE(784);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(1061);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(613);
      if (lookahead == 's') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(613);
      if (lookahead == 's') ADVANCE(933);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == 'z') ADVANCE(152);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(605);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 288:
      if (lookahead == 'f') ADVANCE(745);
      if (lookahead == 'r') ADVANCE(746);
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 289:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 290:
      if (lookahead == 'f') ADVANCE(321);
      END_STATE();
    case 291:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 292:
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 293:
      if (lookahead == 'f') ADVANCE(450);
      END_STATE();
    case 294:
      if (lookahead == 'f') ADVANCE(281);
      END_STATE();
    case 295:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 296:
      if (lookahead == 'g') ADVANCE(734);
      END_STATE();
    case 297:
      if (lookahead == 'g') ADVANCE(831);
      END_STATE();
    case 298:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 299:
      if (lookahead == 'g') ADVANCE(1169);
      END_STATE();
    case 300:
      if (lookahead == 'g') ADVANCE(407);
      END_STATE();
    case 301:
      if (lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 302:
      if (lookahead == 'g') ADVANCE(409);
      END_STATE();
    case 303:
      if (lookahead == 'g') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 304:
      if (lookahead == 'h') ADVANCE(915);
      END_STATE();
    case 305:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 306:
      if (lookahead == 'h') ADVANCE(610);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 307:
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 308:
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 309:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 310:
      if (lookahead == 'h') ADVANCE(487);
      if (lookahead == 'l') ADVANCE(495);
      END_STATE();
    case 311:
      if (lookahead == 'h') ADVANCE(460);
      END_STATE();
    case 312:
      if (lookahead == 'h') ADVANCE(488);
      END_STATE();
    case 313:
      if (lookahead == 'h') ADVANCE(586);
      END_STATE();
    case 314:
      if (lookahead == 'h') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 315:
      if (lookahead == 'h') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 316:
      if (lookahead == 'h') ADVANCE(612);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 317:
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 318:
      if (lookahead == 'h') ADVANCE(491);
      if (lookahead == 'l') ADVANCE(492);
      END_STATE();
    case 319:
      if (lookahead == 'h') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(494);
      END_STATE();
    case 320:
      if (lookahead == 'h') ADVANCE(496);
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(796);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(798);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(1130);
      if (lookahead == 'l') ADVANCE(1143);
      if (lookahead == 's') ADVANCE(1089);
      if (lookahead == 'x') ADVANCE(1127);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(1129);
      if (lookahead == 'p') ADVANCE(1131);
      if (lookahead == 's') ADVANCE(1087);
      if (lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'x') ADVANCE(1111);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(1098);
      if (lookahead == 'x') ADVANCE(1096);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(1097);
      if (lookahead == 'p') ADVANCE(1100);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 's') ADVANCE(533);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 341:
      if (lookahead == 'k') ADVANCE(880);
      END_STATE();
    case 342:
      if (lookahead == 'k') ADVANCE(1190);
      END_STATE();
    case 343:
      if (lookahead == 'k') ADVANCE(307);
      END_STATE();
    case 344:
      if (lookahead == 'k') ADVANCE(311);
      END_STATE();
    case 345:
      if (lookahead == 'k') ADVANCE(317);
      END_STATE();
    case 346:
      if (lookahead == 'k') ADVANCE(615);
      END_STATE();
    case 347:
      if (lookahead == 'k') ADVANCE(308);
      END_STATE();
    case 348:
      if (lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 349:
      if (lookahead == 'k') ADVANCE(623);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == 't') ADVANCE(748);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == 't') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(725);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 'r') ADVANCE(897);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(733);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(832);
      END_STATE();
    case 356:
      if (lookahead == 'l') ADVANCE(834);
      END_STATE();
    case 357:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 358:
      if (lookahead == 'l') ADVANCE(814);
      if (lookahead == 'q') ADVANCE(815);
      END_STATE();
    case 359:
      if (lookahead == 'l') ADVANCE(818);
      if (lookahead == 'q') ADVANCE(817);
      if (lookahead == 'w') ADVANCE(816);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(819);
      END_STATE();
    case 361:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 362:
      if (lookahead == 'l') ADVANCE(1004);
      END_STATE();
    case 363:
      if (lookahead == 'l') ADVANCE(1141);
      if (lookahead == 'x') ADVANCE(1125);
      END_STATE();
    case 364:
      if (lookahead == 'l') ADVANCE(1144);
      if (lookahead == 'p') ADVANCE(1132);
      if (lookahead == 'x') ADVANCE(1128);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(1142);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(1088);
      if (lookahead == 'x') ADVANCE(1126);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(1170);
      if (lookahead == 'q') ADVANCE(1167);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(466);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 'm') ADVANCE(434);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(616);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(643);
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'p') ADVANCE(523);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 385:
      if (lookahead == 'm') ADVANCE(423);
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 386:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 387:
      if (lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 388:
      if (lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'm') ADVANCE(521);
      END_STATE();
    case 390:
      if (lookahead == 'm') ADVANCE(547);
      END_STATE();
    case 391:
      if (lookahead == 'm') ADVANCE(543);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 392:
      if (lookahead == 'm') ADVANCE(617);
      END_STATE();
    case 393:
      if (lookahead == 'm') ADVANCE(621);
      END_STATE();
    case 394:
      if (lookahead == 'm') ADVANCE(336);
      END_STATE();
    case 395:
      if (lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(548);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(584);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 408:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 409:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 410:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 411:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 412:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 413:
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 414:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 415:
      if (lookahead == 'n') ADVANCE(556);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(795);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(626);
      if (lookahead == 'p') ADVANCE(699);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 424:
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 425:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 426:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 427:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 428:
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 429:
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 430:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(1181);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(869);
      if (lookahead == 't') ADVANCE(863);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(917);
      if (lookahead == 'r') ADVANCE(1033);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 435:
      if (lookahead == 'p') ADVANCE(775);
      END_STATE();
    case 436:
      if (lookahead == 'p') ADVANCE(737);
      END_STATE();
    case 437:
      if (lookahead == 'p') ADVANCE(303);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(1198);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(550);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(1115);
      if (lookahead == 'x') ADVANCE(1112);
      END_STATE();
    case 441:
      if (lookahead == 'p') ADVANCE(1197);
      END_STATE();
    case 442:
      if (lookahead == 'p') ADVANCE(1099);
      if (lookahead == 'x') ADVANCE(1094);
      END_STATE();
    case 443:
      if (lookahead == 'p') ADVANCE(1196);
      END_STATE();
    case 444:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 445:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 446:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 447:
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 448:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 449:
      if (lookahead == 'p') ADVANCE(463);
      END_STATE();
    case 450:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 451:
      if (lookahead == 'p') ADVANCE(524);
      END_STATE();
    case 452:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 453:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 454:
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 455:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 456:
      if (lookahead == 'p') ADVANCE(526);
      END_STATE();
    case 457:
      if (lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 458:
      if (lookahead == 'p') ADVANCE(529);
      END_STATE();
    case 459:
      if (lookahead == 'p') ADVANCE(464);
      END_STATE();
    case 460:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 461:
      if (lookahead == 'p') ADVANCE(531);
      if (lookahead == 'v') ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 'p') ADVANCE(532);
      END_STATE();
    case 463:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 464:
      if (lookahead == 'q') ADVANCE(1182);
      END_STATE();
    case 465:
      if (lookahead == 'q') ADVANCE(774);
      END_STATE();
    case 466:
      if (lookahead == 'q') ADVANCE(1171);
      END_STATE();
    case 467:
      if (lookahead == 'q') ADVANCE(773);
      END_STATE();
    case 468:
      if (lookahead == 'q') ADVANCE(918);
      END_STATE();
    case 469:
      if (lookahead == 'q') ADVANCE(127);
      END_STATE();
    case 470:
      if (lookahead == 'q') ADVANCE(1057);
      END_STATE();
    case 471:
      if (lookahead == 'q') ADVANCE(977);
      END_STATE();
    case 472:
      if (lookahead == 'q') ADVANCE(883);
      END_STATE();
    case 473:
      if (lookahead == 'q') ADVANCE(886);
      END_STATE();
    case 474:
      if (lookahead == 'q') ADVANCE(891);
      END_STATE();
    case 475:
      if (lookahead == 'q') ADVANCE(890);
      END_STATE();
    case 476:
      if (lookahead == 'q') ADVANCE(893);
      END_STATE();
    case 477:
      if (lookahead == 'q') ADVANCE(889);
      END_STATE();
    case 478:
      if (lookahead == 'q') ADVANCE(892);
      END_STATE();
    case 479:
      if (lookahead == 'q') ADVANCE(894);
      END_STATE();
    case 480:
      if (lookahead == 'q') ADVANCE(743);
      END_STATE();
    case 481:
      if (lookahead == 'q') ADVANCE(740);
      END_STATE();
    case 482:
      if (lookahead == 'q') ADVANCE(739);
      END_STATE();
    case 483:
      if (lookahead == 'q') ADVANCE(742);
      END_STATE();
    case 484:
      if (lookahead == 'q') ADVANCE(738);
      END_STATE();
    case 485:
      if (lookahead == 'q') ADVANCE(741);
      END_STATE();
    case 486:
      if (lookahead == 'q') ADVANCE(744);
      END_STATE();
    case 487:
      if (lookahead == 'q') ADVANCE(312);
      END_STATE();
    case 488:
      if (lookahead == 'q') ADVANCE(246);
      END_STATE();
    case 489:
      if (lookahead == 'q') ADVANCE(247);
      END_STATE();
    case 490:
      if (lookahead == 'q') ADVANCE(248);
      END_STATE();
    case 491:
      if (lookahead == 'q') ADVANCE(249);
      END_STATE();
    case 492:
      if (lookahead == 'q') ADVANCE(250);
      END_STATE();
    case 493:
      if (lookahead == 'q') ADVANCE(251);
      END_STATE();
    case 494:
      if (lookahead == 'q') ADVANCE(252);
      END_STATE();
    case 495:
      if (lookahead == 'q') ADVANCE(315);
      END_STATE();
    case 496:
      if (lookahead == 'q') ADVANCE(318);
      END_STATE();
    case 497:
      if (lookahead == 'q') ADVANCE(319);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(839);
      if (lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 499:
      if (lookahead == 'r') ADVANCE(898);
      END_STATE();
    case 500:
      if (lookahead == 'r') ADVANCE(844);
      END_STATE();
    case 501:
      if (lookahead == 'r') ADVANCE(1028);
      END_STATE();
    case 502:
      if (lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 503:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 504:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(851);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(1068);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(967);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(1005);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead == 'x') ADVANCE(604);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(770);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 521:
      if (lookahead == 's') ADVANCE(1077);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(810);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(826);
      END_STATE();
    case 524:
      if (lookahead == 's') ADVANCE(823);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(849);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(821);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(958);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(993);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(1074);
      END_STATE();
    case 530:
      if (lookahead == 's') ADVANCE(803);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(944);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(945);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(1001);
      END_STATE();
    case 534:
      if (lookahead == 's') ADVANCE(1091);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(1092);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 546:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 547:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 548:
      if (lookahead == 's') ADVANCE(504);
      END_STATE();
    case 549:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 550:
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 551:
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 552:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(583);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(645);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(510);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 560:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 561:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 562:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 563:
      if (lookahead == 's') ADVANCE(587);
      END_STATE();
    case 564:
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 565:
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 566:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 567:
      if (lookahead == 's') ADVANCE(589);
      END_STATE();
    case 568:
      if (lookahead == 's') ADVANCE(590);
      END_STATE();
    case 569:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 570:
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 574:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 575:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(765);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(1024);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(868);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(938);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(940);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(942);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(943);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 609:
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 610:
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 611:
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 612:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 613:
      if (lookahead == 'u') ADVANCE(375);
      END_STATE();
    case 614:
      if (lookahead == 'u') ADVANCE(354);
      END_STATE();
    case 615:
      if (lookahead == 'u') ADVANCE(540);
      END_STATE();
    case 616:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 617:
      if (lookahead == 'u') ADVANCE(361);
      END_STATE();
    case 618:
      if (lookahead == 'u') ADVANCE(542);
      END_STATE();
    case 619:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 620:
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(204);
      END_STATE();
    case 621:
      if (lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 622:
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 623:
      if (lookahead == 'u') ADVANCE(569);
      END_STATE();
    case 624:
      if (lookahead == 'v') ADVANCE(709);
      END_STATE();
    case 625:
      if (lookahead == 'v') ADVANCE(805);
      END_STATE();
    case 626:
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 627:
      if (lookahead == 'v') ADVANCE(714);
      END_STATE();
    case 628:
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 629:
      if (lookahead == 'v') ADVANCE(932);
      END_STATE();
    case 630:
      if (lookahead == 'v') ADVANCE(637);
      END_STATE();
    case 631:
      if (lookahead == 'v') ADVANCE(560);
      END_STATE();
    case 632:
      if (lookahead == 'v') ADVANCE(607);
      END_STATE();
    case 633:
      if (lookahead == 'v') ADVANCE(538);
      END_STATE();
    case 634:
      if (lookahead == 'v') ADVANCE(390);
      END_STATE();
    case 635:
      if (lookahead == 'v') ADVANCE(458);
      END_STATE();
    case 636:
      if (lookahead == 'w') ADVANCE(776);
      END_STATE();
    case 637:
      if (lookahead == 'w') ADVANCE(934);
      END_STATE();
    case 638:
      if (lookahead == 'w') ADVANCE(768);
      END_STATE();
    case 639:
      if (lookahead == 'w') ADVANCE(1072);
      END_STATE();
    case 640:
      if (lookahead == 'w') ADVANCE(1060);
      END_STATE();
    case 641:
      if (lookahead == 'w') ADVANCE(1056);
      END_STATE();
    case 642:
      if (lookahead == 'w') ADVANCE(969);
      END_STATE();
    case 643:
      if (lookahead == 'w') ADVANCE(976);
      END_STATE();
    case 644:
      if (lookahead == 'w') ADVANCE(989);
      END_STATE();
    case 645:
      if (lookahead == 'w') ADVANCE(1070);
      END_STATE();
    case 646:
      if (lookahead == 'w') ADVANCE(882);
      END_STATE();
    case 647:
      if (lookahead == 'w') ADVANCE(885);
      END_STATE();
    case 648:
      if (lookahead == 'w') ADVANCE(962);
      END_STATE();
    case 649:
      if (lookahead == 'w') ADVANCE(974);
      END_STATE();
    case 650:
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 651:
      if (lookahead == 'x') ADVANCE(936);
      END_STATE();
    case 652:
      if (lookahead == 'x') ADVANCE(668);
      END_STATE();
    case 653:
      if (lookahead == 'x') ADVANCE(1109);
      END_STATE();
    case 654:
      if (lookahead == 'x') ADVANCE(1110);
      END_STATE();
    case 655:
      if (lookahead == 'x') ADVANCE(1093);
      END_STATE();
    case 656:
      if (lookahead == 'x') ADVANCE(1095);
      END_STATE();
    case 657:
      if (lookahead == 'x') ADVANCE(541);
      END_STATE();
    case 658:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 659:
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 660:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 661:
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 662:
      if (lookahead == 'x') ADVANCE(600);
      END_STATE();
    case 663:
      if (lookahead == 'x') ADVANCE(59);
      END_STATE();
    case 664:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 665:
      if (lookahead == 'x') ADVANCE(601);
      END_STATE();
    case 666:
      if (lookahead == 'x') ADVANCE(602);
      END_STATE();
    case 667:
      if (lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 668:
      if (lookahead == 'z') ADVANCE(1188);
      END_STATE();
    case 669:
      if (lookahead == 'z') ADVANCE(922);
      END_STATE();
    case 670:
      if (lookahead == '}') ADVANCE(1162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(670)
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1161);
      END_STATE();
    case 671:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(671)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1086);
      END_STATE();
    case 672:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 673:
      if (eof) ADVANCE(674);
      if (lookahead == '\n') ADVANCE(686);
      if (lookahead == '#') ADVANCE(684);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(350);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'g') ADVANCE(518);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'j') ADVANCE(81);
      if (lookahead == 'k') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(673)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(675);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__address_token1);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__byte);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'c') ADVANCE(692);
      if (lookahead == 'd') ADVANCE(693);
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'c') ADVANCE(708);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 't') ADVANCE(636);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == ' ') ADVANCE(690);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead == ' ') ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(691);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_adc);
      if (lookahead == 'x') ADVANCE(935);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'b') ADVANCE(698);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'q') ADVANCE(694);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 'w') ADVANCE(697);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_addq);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_addl);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_addss);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_addw);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_addb);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_cmp);
      if (lookahead == 'b') ADVANCE(700);
      if (lookahead == 'l') ADVANCE(702);
      if (lookahead == 'q') ADVANCE(703);
      if (lookahead == 'w') ADVANCE(701);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_cmpb);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_cmpw);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_cmpl);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_cmpq);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_comiss);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_comisd);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_inc);
      if (lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_incl);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == 'l') ADVANCE(711);
      if (lookahead == 'q') ADVANCE(710);
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_divq);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_divl);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_divss);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_divsd);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_idiv);
      if (lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_idivl);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == 'b') ADVANCE(721);
      if (lookahead == 'l') ADVANCE(718);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == 'q') ADVANCE(717);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(720);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_subq);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_subl);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_subss);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_subw);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_subb);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_subsd);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_subpd);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_sbb);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'b') ADVANCE(730);
      if (lookahead == 'l') ADVANCE(727);
      if (lookahead == 'q') ADVANCE(726);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead == 'x') ADVANCE(732);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_mulq);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_mull);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_mulss);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_mulw);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_mulb);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_mulsd);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_mulx);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_imul);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_neg);
      if (lookahead == 'l') ADVANCE(735);
      if (lookahead == 'q') ADVANCE(736);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_negl);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_negq);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_fmulp);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_vpclmulhqlqdq);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_pclmullqlqdq);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_pclmullqhqdq);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_vpclmullqhqdq);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_vpclmulhqhqdq);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_pclmulhqhqdq);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_vpclmullqlqdq);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_bsf);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_bsr);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_bts);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_bt);
      if (lookahead == 'l') ADVANCE(750);
      if (lookahead == 'r') ADVANCE(749);
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_btr);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_btl);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_setne);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_setb);
      if (lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_sete);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_setbe);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_seta);
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_setge);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_setae);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_setl);
      if (lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_setle);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_setg);
      if (lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_seto);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_setnp);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_setp);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_setns);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == 'b') ADVANCE(766);
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_testb);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_testl);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_knotw);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_vpcmpltud);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_re);
      if (lookahead == 'p') ADVANCE(920);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == 'x') ADVANCE(923);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_leaveq);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_retq);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_bswap);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_cbtw);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_cltd);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_cltq);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_cmovbe);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_cmovl);
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_cmovae);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_cmovo);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_cmovne);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_cmovns);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_cmovg);
      if (lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_cmovp);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_cmove);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_cmovge);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_cmovb);
      if (lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_cmova);
      if (lookahead == 'e') ADVANCE(781);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_cmovle);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_cmovs);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_cwtl);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_cwtd);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_cqto);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_cvttsd2si);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_cvtss2sd);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_cvttss2si);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_cvtsi2sd);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'q') ADVANCE(801);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_cvtsi2ss);
      if (lookahead == 'l') ADVANCE(804);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdq);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdl);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_cvtsd2ss);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_cvtsi2ssl);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(809);
      if (lookahead == 'd') ADVANCE(825);
      if (lookahead == 'h') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(807);
      if (lookahead == 'q') ADVANCE(808);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == 'w') ADVANCE(806);
      if (lookahead == 'z') ADVANCE(119);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_movw);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_movl);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_movq);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_movb);
      if (lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_movabs);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_movsbw);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_movsbq);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_movsbl);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_movswl);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_movswq);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_movzbw);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_movzbq);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_movzbl);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_movzwl);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_movaps);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_movhlps);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_movss);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_movups);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_movsd);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_movd);
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_movhps);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_movdqa);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_movbe);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_movapd);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_movdqu);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_xchg);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_fildl);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_fldt);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_fstpl);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_insb);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_insl);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_outsb);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_outsl);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'b') ADVANCE(842);
      if (lookahead == 'l') ADVANCE(841);
      if (lookahead == 'q') ADVANCE(840);
      if (lookahead == 'w') ADVANCE(843);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_orq);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_orl);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_orb);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_orw);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == 'l') ADVANCE(845);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == 'w') ADVANCE(846);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_xorl);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_xorw);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_xorps);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_xorpd);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_vxorps);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_vpxord);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_vpxor);
      if (lookahead == 'd') ADVANCE(850);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == 'b') ADVANCE(856);
      if (lookahead == 'l') ADVANCE(854);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 'q') ADVANCE(853);
      if (lookahead == 'w') ADVANCE(855);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_andq);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_andl);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_andw);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_andb);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_andn);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_andpd);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_pand);
      if (lookahead == 'n') ADVANCE(860);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_pandn);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_andps);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_vpand);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'l') ADVANCE(864);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(865);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_notl);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_notw);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_cpuid);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_lea);
      if (lookahead == 'v') ADVANCE(272);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_popcnt);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead == 'l') ADVANCE(870);
      if (lookahead == 'w') ADVANCE(871);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_nopl);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_nopw);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_ud2);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_data16);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_sha1rnds4);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_addr32);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_sha1msg1);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_sha1msg2);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_sha1nexte);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_endbr64);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_OperatingSystemSupportOpcode);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_packuswb);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_punpckhbw);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_punpckhdq);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_punpckhwd);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_punpcklbw);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_punpckldq);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_punpcklwd);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_vpunpcklwd);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_vpunpckldq);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_punpcklqdq);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_punpckhqdq);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_vpunpckhqdq);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_vpunpckhdq);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_vpunpcklqdq);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_vpunpckhwd);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_rol);
      if (lookahead == 'l') ADVANCE(914);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_ror);
      if (lookahead == 'l') ADVANCE(913);
      if (lookahead == 'x') ADVANCE(1025);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_sar);
      if (lookahead == 'l') ADVANCE(899);
      if (lookahead == 'x') ADVANCE(900);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_sarl);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_sarx);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == 'd') ADVANCE(903);
      if (lookahead == 'l') ADVANCE(902);
      if (lookahead == 'q') ADVANCE(905);
      if (lookahead == 'x') ADVANCE(904);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_shll);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_shld);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_shlx);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_shlq);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_shr);
      if (lookahead == 'd') ADVANCE(908);
      if (lookahead == 'l') ADVANCE(909);
      if (lookahead == 'q') ADVANCE(907);
      if (lookahead == 'x') ADVANCE(910);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_shrq);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_shrd);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_shrl);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_shrx);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_vprord);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_vprorq);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_rorl);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_roll);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'q') ADVANCE(916);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_pushq);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_movslq);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_movsb);
      if (lookahead == 'l') ADVANCE(813);
      if (lookahead == 'q') ADVANCE(812);
      if (lookahead == 'w') ADVANCE(811);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_rep);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 'z') ADVANCE(921);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_repz);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_repnz);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_rex);
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_rex_DOTWB);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRB);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_rex_DOTRXB);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_rex_DOTB);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRXB);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_rex_DOTXB);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_rex_DOTW);
      if (lookahead == 'B') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_rex_DOTRB);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_xgetbv);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_fs);
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_kmovw);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_adcx);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_adox);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_aesdec);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_aesdeclast);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_aesenc);
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_aesenclast);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_vaesenc);
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_vaesenclast);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_aeskeygenassist);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_vblendps);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_vblendvps);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_vcvtusi2sd);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_vdivsd);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_vmovaps);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_vmovapd);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_vmovss);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_vmovdqu);
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_vmovdqu64);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_vmovdqu32);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_vmovdqa);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_vmovdqa32);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_vmovdqa64);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_vmovq);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_vmovups);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_vmovd);
      if (lookahead == 'q') ADVANCE(90);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_vmovsd);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_vmulsd);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_vpackusdw);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_vpaddd);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_vpaddb);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_vpaddq);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_vpaddw);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_vpalignr);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_vpcmpgtd);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_vpextrw);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_vpinsrw);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_vpinsrd);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_vpinsrq);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_vpinsrb);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_vpmaddubsw);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_vpmaddwd);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_vpmullw);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_vpmuludq);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_vpor);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_vpshufb);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_vpshufd);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_vpslldq);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_vpslld);
      if (lookahead == 'q') ADVANCE(981);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_vpsllq);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_vpsllw);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_vpsrldq);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_vpsrld);
      if (lookahead == 'q') ADVANCE(985);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_vpsrlq);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_vpsrlw);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_vpsubusw);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_vpsubq);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_vpsubd);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_vpsubw);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_vshufps);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_vsubsd);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_vucomisd);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_vucomiss);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_vunpckhpd);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_vunpckhps);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_vunpcklpd);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_vunpcklps);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_vbroadcastss);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_vinsertf128);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_vperm2f128);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_vzeroall);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_vzeroupper);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_vshufi32x4);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_vshufi64x2);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_vpblendmd);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_vextracti128);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_vextracti32x4);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_vinserti128);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_vinserti32x4);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_vinserti64x4);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_vpblendd);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_vpbroadcastq);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_vpbroadcastd);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_vbroadcasti128);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_vbroadcasti32x4);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_vperm2i128);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_vpermd);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_vpermq);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_vpermt2d);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_vpermi2d);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_tzcnt);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_rorx);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_psubd);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_pmaddwd);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_pxor);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_psrad);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_pslld);
      if (lookahead == 'q') ADVANCE(1065);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_pcmpgtd);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_pcmpeqd);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_por);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_paddw);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_psubusw);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_pcmpeqb);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_psubusb);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_psrld);
      if (lookahead == 'q') ADVANCE(1067);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_psrlw);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_psllq);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_paddd);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_psrlq);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_psubb);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_maxss);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_pmovmskb);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_pinsrw);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_minss);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_prefetcht1);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_prefetcht0);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_pextrw);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_ucomiss);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_shufps);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_addsd);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_paddq);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_psubq);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_pshuflw);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_pmuludq);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_pshufd);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_minsd);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_pshufhw);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_mfence);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_maxsd);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_ucomisd);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_shufpd);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_pslldq);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_unpckhpd);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_psrldq);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_palignr);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_pshufb);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_pmaddubsw);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_pinsrb);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_pblendw);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_pextrq);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_blendvps);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_pextrb);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_pinsrd);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_femms);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'm') ADVANCE(439);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_operand_token2);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_immediateOperand_token1);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_PERCENTss);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_PERCENTcs);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_PERCENTds);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_PERCENTes);
      if (lookahead == 'i') ADVANCE(1113);
      if (lookahead == 'p') ADVANCE(1116);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_PERCENTfs);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_PERCENTgs);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_PERCENTrax);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_PERCENTrbx);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_PERCENTrcx);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_PERCENTrdx);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_PERCENTrsi);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_PERCENTrdi);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_PERCENTrbp);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_PERCENTrsp);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_PERCENTr8);
      if (lookahead == 'b') ADVANCE(1149);
      if (lookahead == 'd') ADVANCE(1117);
      if (lookahead == 'w') ADVANCE(1133);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_PERCENTr9);
      if (lookahead == 'b') ADVANCE(1150);
      if (lookahead == 'd') ADVANCE(1118);
      if (lookahead == 'w') ADVANCE(1134);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_PERCENTr10);
      if (lookahead == 'b') ADVANCE(1151);
      if (lookahead == 'd') ADVANCE(1119);
      if (lookahead == 'w') ADVANCE(1135);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_PERCENTr11);
      if (lookahead == 'b') ADVANCE(1152);
      if (lookahead == 'd') ADVANCE(1120);
      if (lookahead == 'w') ADVANCE(1136);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_PERCENTr12);
      if (lookahead == 'b') ADVANCE(1153);
      if (lookahead == 'd') ADVANCE(1121);
      if (lookahead == 'w') ADVANCE(1137);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_PERCENTr13);
      if (lookahead == 'b') ADVANCE(1154);
      if (lookahead == 'd') ADVANCE(1122);
      if (lookahead == 'w') ADVANCE(1138);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_PERCENTr14);
      if (lookahead == 'b') ADVANCE(1155);
      if (lookahead == 'd') ADVANCE(1123);
      if (lookahead == 'w') ADVANCE(1139);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_PERCENTr15);
      if (lookahead == 'b') ADVANCE(1156);
      if (lookahead == 'd') ADVANCE(1124);
      if (lookahead == 'w') ADVANCE(1140);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_PERCENTeax);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_PERCENTecx);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_PERCENTedx);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_PERCENTebx);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_PERCENTesi);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_PERCENTedi);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_PERCENTebp);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_PERCENTesp);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_PERCENTr8d);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_PERCENTr9d);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_PERCENTr10d);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_PERCENTr11d);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_PERCENTr12d);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_PERCENTr13d);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_PERCENTr14d);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_PERCENTr15d);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_PERCENTax);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_PERCENTcx);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_PERCENTdx);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_PERCENTbx);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_PERCENTsi);
      if (lookahead == 'l') ADVANCE(1145);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_PERCENTdi);
      if (lookahead == 'l') ADVANCE(1146);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_PERCENTsp);
      if (lookahead == 'l') ADVANCE(1147);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_PERCENTbp);
      if (lookahead == 'l') ADVANCE(1148);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_PERCENTr8w);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_PERCENTr9w);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_PERCENTr10w);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_PERCENTr11w);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_PERCENTr12w);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_PERCENTr13w);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_PERCENTr14w);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_PERCENTr15w);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_PERCENTal);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_PERCENTcl);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_PERCENTdl);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_PERCENTbl);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_PERCENTsil);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_PERCENTdil);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_PERCENTspl);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_PERCENTbpl);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_PERCENTr8b);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_PERCENTr9b);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_PERCENTr10b);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_PERCENTr11b);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_PERCENTr12b);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_PERCENTr13b);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_PERCENTr14b);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_PERCENTr15b);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_memoryIndirectOperand_token1);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_movsq);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_cmpsb);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_cmpxchg);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_movsl);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_callq);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_ja);
      if (lookahead == 'e') ADVANCE(1173);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_jae);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_jb);
      if (lookahead == 'e') ADVANCE(1175);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_jbe);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_je);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_jg);
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_jge);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_jl);
      if (lookahead == 'e') ADVANCE(1180);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_jle);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (lookahead == 'q') ADVANCE(1182);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_jmpq);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_jne);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_jno);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_jns);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_jo);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_jp);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_jrcxz);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_notrack);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_PERCENTcr0);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_PERCENTcr2);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_PERCENTcr3);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_PERCENTcr4);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_PERCENTrip);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_PERCENTeip);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_PERCENTip);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_PERCENTst);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'a') ADVANCE(363);
      if (lookahead == 'b') ADVANCE(364);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'g') ADVANCE(535);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_otherFnOperands_token1);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_otherFnOperands_token1);
      if (lookahead == 'm') ADVANCE(459);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 673},
  [2] = {.lex_state = 673},
  [3] = {.lex_state = 673},
  [4] = {.lex_state = 673},
  [5] = {.lex_state = 673},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 673},
  [8] = {.lex_state = 673},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 673},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 673},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 670},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 670},
  [156] = {.lex_state = 670},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 670},
  [159] = {.lex_state = 70},
  [160] = {.lex_state = 670},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 670},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 670},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 670},
  [168] = {.lex_state = 73},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 670},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 670},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 73},
  [185] = {.lex_state = 70},
  [186] = {.lex_state = 73},
  [187] = {.lex_state = 673},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 670},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 670},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 670},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 670},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 670},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 670},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 670},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 671},
  [242] = {.lex_state = 73},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 671},
  [250] = {.lex_state = 670},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 73},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 670},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 673},
  [274] = {.lex_state = 673},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 10},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 10},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 10},
  [296] = {.lex_state = 10},
  [297] = {.lex_state = 673},
  [298] = {.lex_state = 673},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__address_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__comma] = ACTIONS(1),
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
    [sym_prog] = STATE(299),
    [sym__address] = STATE(196),
    [sym_comment] = STATE(297),
    [sym__machine_code] = STATE(4),
    [sym__line] = STATE(3),
    [sym_instruction] = STATE(146),
    [sym_data] = STATE(187),
    [sym_opcode] = STATE(12),
    [sym_BinaryArithmeticOpcode] = STATE(29),
    [sym_BitAndByteOpcode] = STATE(29),
    [sym_CuriousOpcode] = STATE(29),
    [sym_DataTransferOpcode] = STATE(29),
    [sym_IOOpcode] = STATE(29),
    [sym_LogicalOpcode] = STATE(29),
    [sym_MiscellaneousOpcode] = STATE(29),
    [sym_PackUnpackOpcode] = STATE(29),
    [sym_ShiftAndRotateOpcode] = STATE(29),
    [sym_StackOpcode] = STATE(29),
    [sym_StringOpcode] = STATE(29),
    [sym_AccessRegisterOpcode] = STATE(29),
    [sym_ToBeClassifiedOpcode] = STATE(29),
    [sym_control] = STATE(187),
    [sym_controlOpcode] = STATE(64),
    [aux_sym_prog_repeat1] = STATE(3),
    [aux_sym__address_repeat1] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__address_token1] = ACTIONS(5),
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
    [anon_sym_callq] = ACTIONS(39),
    [anon_sym_ja] = ACTIONS(39),
    [anon_sym_jae] = ACTIONS(39),
    [anon_sym_jb] = ACTIONS(39),
    [anon_sym_jbe] = ACTIONS(39),
    [anon_sym_je] = ACTIONS(39),
    [anon_sym_jg] = ACTIONS(39),
    [anon_sym_jge] = ACTIONS(39),
    [anon_sym_jl] = ACTIONS(39),
    [anon_sym_jle] = ACTIONS(39),
    [anon_sym_jmp] = ACTIONS(39),
    [anon_sym_jmpq] = ACTIONS(39),
    [anon_sym_jne] = ACTIONS(39),
    [anon_sym_jno] = ACTIONS(39),
    [anon_sym_jns] = ACTIONS(39),
    [anon_sym_jo] = ACTIONS(39),
    [anon_sym_jp] = ACTIONS(39),
    [anon_sym_jrcxz] = ACTIONS(39),
    [anon_sym_js] = ACTIONS(39),
    [anon_sym_notrack] = ACTIONS(39),
  },
  [2] = {
    [sym__address] = STATE(196),
    [sym_comment] = STATE(297),
    [sym__machine_code] = STATE(4),
    [sym__line] = STATE(2),
    [sym_instruction] = STATE(146),
    [sym_data] = STATE(187),
    [sym_opcode] = STATE(12),
    [sym_BinaryArithmeticOpcode] = STATE(29),
    [sym_BitAndByteOpcode] = STATE(29),
    [sym_CuriousOpcode] = STATE(29),
    [sym_DataTransferOpcode] = STATE(29),
    [sym_IOOpcode] = STATE(29),
    [sym_LogicalOpcode] = STATE(29),
    [sym_MiscellaneousOpcode] = STATE(29),
    [sym_PackUnpackOpcode] = STATE(29),
    [sym_ShiftAndRotateOpcode] = STATE(29),
    [sym_StackOpcode] = STATE(29),
    [sym_StringOpcode] = STATE(29),
    [sym_AccessRegisterOpcode] = STATE(29),
    [sym_ToBeClassifiedOpcode] = STATE(29),
    [sym_control] = STATE(187),
    [sym_controlOpcode] = STATE(64),
    [aux_sym_prog_repeat1] = STATE(2),
    [aux_sym__address_repeat1] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym__address_token1] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(46),
    [aux_sym_comment_token2] = ACTIONS(46),
    [sym__line_break] = ACTIONS(49),
    [anon_sym_adc] = ACTIONS(52),
    [anon_sym_add] = ACTIONS(52),
    [anon_sym_addq] = ACTIONS(52),
    [anon_sym_addl] = ACTIONS(52),
    [anon_sym_addss] = ACTIONS(52),
    [anon_sym_addw] = ACTIONS(52),
    [anon_sym_addb] = ACTIONS(52),
    [anon_sym_cmp] = ACTIONS(52),
    [anon_sym_cmpb] = ACTIONS(52),
    [anon_sym_cmpw] = ACTIONS(52),
    [anon_sym_cmpl] = ACTIONS(52),
    [anon_sym_cmpq] = ACTIONS(52),
    [anon_sym_comiss] = ACTIONS(52),
    [anon_sym_comisd] = ACTIONS(52),
    [anon_sym_inc] = ACTIONS(52),
    [anon_sym_incl] = ACTIONS(52),
    [anon_sym_dec] = ACTIONS(52),
    [anon_sym_div] = ACTIONS(52),
    [anon_sym_divq] = ACTIONS(52),
    [anon_sym_divl] = ACTIONS(52),
    [anon_sym_divss] = ACTIONS(52),
    [anon_sym_divsd] = ACTIONS(52),
    [anon_sym_idiv] = ACTIONS(52),
    [anon_sym_idivl] = ACTIONS(52),
    [anon_sym_sub] = ACTIONS(52),
    [anon_sym_subq] = ACTIONS(52),
    [anon_sym_subl] = ACTIONS(52),
    [anon_sym_subss] = ACTIONS(52),
    [anon_sym_subw] = ACTIONS(52),
    [anon_sym_subb] = ACTIONS(52),
    [anon_sym_subsd] = ACTIONS(52),
    [anon_sym_subpd] = ACTIONS(52),
    [anon_sym_sbb] = ACTIONS(52),
    [anon_sym_mul] = ACTIONS(52),
    [anon_sym_mulq] = ACTIONS(52),
    [anon_sym_mull] = ACTIONS(52),
    [anon_sym_mulss] = ACTIONS(52),
    [anon_sym_mulw] = ACTIONS(52),
    [anon_sym_mulb] = ACTIONS(52),
    [anon_sym_mulsd] = ACTIONS(52),
    [anon_sym_mulx] = ACTIONS(52),
    [anon_sym_imul] = ACTIONS(52),
    [anon_sym_neg] = ACTIONS(52),
    [anon_sym_negl] = ACTIONS(52),
    [anon_sym_negq] = ACTIONS(52),
    [anon_sym_fmulp] = ACTIONS(52),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(52),
    [anon_sym_pclmullqlqdq] = ACTIONS(52),
    [anon_sym_pclmullqhqdq] = ACTIONS(52),
    [anon_sym_vpclmullqhqdq] = ACTIONS(52),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(52),
    [anon_sym_pclmulhqhqdq] = ACTIONS(52),
    [anon_sym_vpclmullqlqdq] = ACTIONS(52),
    [anon_sym_bsf] = ACTIONS(55),
    [anon_sym_bsr] = ACTIONS(55),
    [anon_sym_bts] = ACTIONS(55),
    [anon_sym_bt] = ACTIONS(55),
    [anon_sym_btr] = ACTIONS(55),
    [anon_sym_btl] = ACTIONS(55),
    [anon_sym_setne] = ACTIONS(55),
    [anon_sym_setb] = ACTIONS(55),
    [anon_sym_sete] = ACTIONS(55),
    [anon_sym_setbe] = ACTIONS(55),
    [anon_sym_seta] = ACTIONS(55),
    [anon_sym_setge] = ACTIONS(55),
    [anon_sym_setae] = ACTIONS(55),
    [anon_sym_setl] = ACTIONS(55),
    [anon_sym_setle] = ACTIONS(55),
    [anon_sym_setg] = ACTIONS(55),
    [anon_sym_seto] = ACTIONS(55),
    [anon_sym_setnp] = ACTIONS(55),
    [anon_sym_setp] = ACTIONS(55),
    [anon_sym_setns] = ACTIONS(55),
    [anon_sym_test] = ACTIONS(55),
    [anon_sym_testb] = ACTIONS(55),
    [anon_sym_testl] = ACTIONS(55),
    [anon_sym_knotw] = ACTIONS(55),
    [anon_sym_vpcmpltud] = ACTIONS(58),
    [anon_sym_gs] = ACTIONS(58),
    [anon_sym_re] = ACTIONS(58),
    [anon_sym_ss] = ACTIONS(58),
    [anon_sym_leaveq] = ACTIONS(58),
    [anon_sym_retq] = ACTIONS(58),
    [anon_sym_bswap] = ACTIONS(61),
    [anon_sym_cbtw] = ACTIONS(61),
    [anon_sym_cltd] = ACTIONS(61),
    [anon_sym_cltq] = ACTIONS(61),
    [anon_sym_cmovbe] = ACTIONS(61),
    [anon_sym_cmovl] = ACTIONS(61),
    [anon_sym_cmovae] = ACTIONS(61),
    [anon_sym_cmovo] = ACTIONS(61),
    [anon_sym_cmovne] = ACTIONS(61),
    [anon_sym_cmovns] = ACTIONS(61),
    [anon_sym_cmovg] = ACTIONS(61),
    [anon_sym_cmovp] = ACTIONS(61),
    [anon_sym_cmove] = ACTIONS(61),
    [anon_sym_cmovge] = ACTIONS(61),
    [anon_sym_cmovb] = ACTIONS(61),
    [anon_sym_cmova] = ACTIONS(61),
    [anon_sym_cmovle] = ACTIONS(61),
    [anon_sym_cmovs] = ACTIONS(61),
    [anon_sym_cwtl] = ACTIONS(61),
    [anon_sym_cwtd] = ACTIONS(61),
    [anon_sym_cqto] = ACTIONS(61),
    [anon_sym_cvttsd2si] = ACTIONS(61),
    [anon_sym_cvtss2sd] = ACTIONS(61),
    [anon_sym_cvttss2si] = ACTIONS(61),
    [anon_sym_cvtsi2sd] = ACTIONS(61),
    [anon_sym_cvtsi2ss] = ACTIONS(61),
    [anon_sym_cvtsi2sdq] = ACTIONS(61),
    [anon_sym_cvtsi2sdl] = ACTIONS(61),
    [anon_sym_cvtsd2ss] = ACTIONS(61),
    [anon_sym_cvtsi2ssl] = ACTIONS(61),
    [anon_sym_mov] = ACTIONS(61),
    [anon_sym_movw] = ACTIONS(61),
    [anon_sym_movl] = ACTIONS(61),
    [anon_sym_movq] = ACTIONS(61),
    [anon_sym_movb] = ACTIONS(61),
    [anon_sym_movabs] = ACTIONS(61),
    [anon_sym_movsbw] = ACTIONS(61),
    [anon_sym_movsbq] = ACTIONS(61),
    [anon_sym_movsbl] = ACTIONS(61),
    [anon_sym_movswl] = ACTIONS(61),
    [anon_sym_movswq] = ACTIONS(61),
    [anon_sym_movzbw] = ACTIONS(61),
    [anon_sym_movzbq] = ACTIONS(61),
    [anon_sym_movzbl] = ACTIONS(61),
    [anon_sym_movzwl] = ACTIONS(61),
    [anon_sym_movaps] = ACTIONS(61),
    [anon_sym_movhlps] = ACTIONS(61),
    [anon_sym_movss] = ACTIONS(61),
    [anon_sym_movups] = ACTIONS(61),
    [anon_sym_movsd] = ACTIONS(61),
    [anon_sym_movd] = ACTIONS(61),
    [anon_sym_movhps] = ACTIONS(61),
    [anon_sym_movdqa] = ACTIONS(61),
    [anon_sym_movbe] = ACTIONS(61),
    [anon_sym_movapd] = ACTIONS(61),
    [anon_sym_movdqu] = ACTIONS(61),
    [anon_sym_xchg] = ACTIONS(61),
    [anon_sym_fildl] = ACTIONS(61),
    [anon_sym_fldt] = ACTIONS(61),
    [anon_sym_fstpl] = ACTIONS(61),
    [anon_sym_insb] = ACTIONS(64),
    [anon_sym_insl] = ACTIONS(64),
    [anon_sym_outsb] = ACTIONS(64),
    [anon_sym_outsl] = ACTIONS(64),
    [anon_sym_or] = ACTIONS(67),
    [anon_sym_orq] = ACTIONS(67),
    [anon_sym_orl] = ACTIONS(67),
    [anon_sym_orb] = ACTIONS(67),
    [anon_sym_orw] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(67),
    [anon_sym_xorl] = ACTIONS(67),
    [anon_sym_xorw] = ACTIONS(67),
    [anon_sym_xorps] = ACTIONS(67),
    [anon_sym_xorpd] = ACTIONS(67),
    [anon_sym_vxorps] = ACTIONS(67),
    [anon_sym_vpxord] = ACTIONS(67),
    [anon_sym_vpxor] = ACTIONS(67),
    [anon_sym_and] = ACTIONS(67),
    [anon_sym_andq] = ACTIONS(67),
    [anon_sym_andl] = ACTIONS(67),
    [anon_sym_andw] = ACTIONS(67),
    [anon_sym_andb] = ACTIONS(67),
    [anon_sym_andn] = ACTIONS(67),
    [anon_sym_andpd] = ACTIONS(67),
    [anon_sym_pand] = ACTIONS(67),
    [anon_sym_pandn] = ACTIONS(67),
    [anon_sym_andps] = ACTIONS(67),
    [anon_sym_vpand] = ACTIONS(67),
    [anon_sym_not] = ACTIONS(67),
    [anon_sym_notl] = ACTIONS(67),
    [anon_sym_notw] = ACTIONS(67),
    [anon_sym_cpuid] = ACTIONS(70),
    [anon_sym_lea] = ACTIONS(70),
    [anon_sym_popcnt] = ACTIONS(70),
    [anon_sym_nop] = ACTIONS(70),
    [anon_sym_nopl] = ACTIONS(70),
    [anon_sym_nopw] = ACTIONS(70),
    [anon_sym_ud2] = ACTIONS(70),
    [anon_sym_data16] = ACTIONS(70),
    [anon_sym_sha1rnds4] = ACTIONS(70),
    [anon_sym_addr32] = ACTIONS(70),
    [anon_sym_sha1msg1] = ACTIONS(70),
    [anon_sym_sha1msg2] = ACTIONS(70),
    [anon_sym_sha1nexte] = ACTIONS(70),
    [anon_sym_endbr64] = ACTIONS(70),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(73),
    [anon_sym_packuswb] = ACTIONS(76),
    [anon_sym_punpckhbw] = ACTIONS(76),
    [anon_sym_punpckhdq] = ACTIONS(76),
    [anon_sym_punpckhwd] = ACTIONS(76),
    [anon_sym_punpcklbw] = ACTIONS(76),
    [anon_sym_punpckldq] = ACTIONS(76),
    [anon_sym_punpcklwd] = ACTIONS(76),
    [anon_sym_vpunpcklwd] = ACTIONS(76),
    [anon_sym_vpunpckldq] = ACTIONS(76),
    [anon_sym_punpcklqdq] = ACTIONS(76),
    [anon_sym_punpckhqdq] = ACTIONS(76),
    [anon_sym_vpunpckhqdq] = ACTIONS(76),
    [anon_sym_vpunpckhdq] = ACTIONS(76),
    [anon_sym_vpunpcklqdq] = ACTIONS(76),
    [anon_sym_vpunpckhwd] = ACTIONS(76),
    [anon_sym_rol] = ACTIONS(79),
    [anon_sym_ror] = ACTIONS(79),
    [anon_sym_sar] = ACTIONS(79),
    [anon_sym_sarl] = ACTIONS(79),
    [anon_sym_sarx] = ACTIONS(79),
    [anon_sym_shl] = ACTIONS(79),
    [anon_sym_shll] = ACTIONS(79),
    [anon_sym_shld] = ACTIONS(79),
    [anon_sym_shlx] = ACTIONS(79),
    [anon_sym_shlq] = ACTIONS(79),
    [anon_sym_shr] = ACTIONS(79),
    [anon_sym_shrq] = ACTIONS(79),
    [anon_sym_shrd] = ACTIONS(79),
    [anon_sym_shrl] = ACTIONS(79),
    [anon_sym_shrx] = ACTIONS(79),
    [anon_sym_vprord] = ACTIONS(79),
    [anon_sym_vprorq] = ACTIONS(79),
    [anon_sym_rorl] = ACTIONS(79),
    [anon_sym_roll] = ACTIONS(79),
    [anon_sym_push] = ACTIONS(82),
    [anon_sym_pushq] = ACTIONS(82),
    [anon_sym_pop] = ACTIONS(82),
    [anon_sym_movslq] = ACTIONS(85),
    [anon_sym_movsb] = ACTIONS(85),
    [anon_sym_rep] = ACTIONS(85),
    [anon_sym_repz] = ACTIONS(85),
    [anon_sym_repnz] = ACTIONS(85),
    [anon_sym_rex] = ACTIONS(88),
    [anon_sym_rex_DOTWB] = ACTIONS(88),
    [anon_sym_rex_DOTWRB] = ACTIONS(88),
    [anon_sym_rex_DOTRXB] = ACTIONS(88),
    [anon_sym_rex_DOTB] = ACTIONS(88),
    [anon_sym_rex_DOTWRXB] = ACTIONS(88),
    [anon_sym_rex_DOTXB] = ACTIONS(88),
    [anon_sym_rex_DOTW] = ACTIONS(88),
    [anon_sym_rex_DOTRB] = ACTIONS(88),
    [anon_sym_xgetbv] = ACTIONS(88),
    [anon_sym_fs] = ACTIONS(88),
    [anon_sym_kmovw] = ACTIONS(88),
    [anon_sym_adcx] = ACTIONS(91),
    [anon_sym_adox] = ACTIONS(91),
    [anon_sym_aesdec] = ACTIONS(91),
    [anon_sym_aesdeclast] = ACTIONS(91),
    [anon_sym_aesenc] = ACTIONS(91),
    [anon_sym_aesenclast] = ACTIONS(91),
    [anon_sym_vaesenc] = ACTIONS(91),
    [anon_sym_vaesenclast] = ACTIONS(91),
    [anon_sym_aeskeygenassist] = ACTIONS(91),
    [anon_sym_vblendps] = ACTIONS(91),
    [anon_sym_vblendvps] = ACTIONS(91),
    [anon_sym_vcvtusi2sd] = ACTIONS(91),
    [anon_sym_vdivsd] = ACTIONS(91),
    [anon_sym_vmovaps] = ACTIONS(91),
    [anon_sym_vmovapd] = ACTIONS(91),
    [anon_sym_vmovss] = ACTIONS(91),
    [anon_sym_vmovdqu] = ACTIONS(91),
    [anon_sym_vmovdqu64] = ACTIONS(91),
    [anon_sym_vmovdqu32] = ACTIONS(91),
    [anon_sym_vmovdqa] = ACTIONS(91),
    [anon_sym_vmovdqa32] = ACTIONS(91),
    [anon_sym_vmovdqa64] = ACTIONS(91),
    [anon_sym_vmovq] = ACTIONS(91),
    [anon_sym_vmovups] = ACTIONS(91),
    [anon_sym_vmovd] = ACTIONS(91),
    [anon_sym_vmovsd] = ACTIONS(91),
    [anon_sym_vmulsd] = ACTIONS(91),
    [anon_sym_vpackusdw] = ACTIONS(91),
    [anon_sym_vpaddd] = ACTIONS(91),
    [anon_sym_vpaddb] = ACTIONS(91),
    [anon_sym_vpaddq] = ACTIONS(91),
    [anon_sym_vpaddw] = ACTIONS(91),
    [anon_sym_vpalignr] = ACTIONS(91),
    [anon_sym_vpcmpgtd] = ACTIONS(91),
    [anon_sym_vpextrw] = ACTIONS(91),
    [anon_sym_vpinsrw] = ACTIONS(91),
    [anon_sym_vpinsrd] = ACTIONS(91),
    [anon_sym_vpinsrq] = ACTIONS(91),
    [anon_sym_vpinsrb] = ACTIONS(91),
    [anon_sym_vpmaddubsw] = ACTIONS(91),
    [anon_sym_vpmaddwd] = ACTIONS(91),
    [anon_sym_vpmullw] = ACTIONS(91),
    [anon_sym_vpmuludq] = ACTIONS(91),
    [anon_sym_vpor] = ACTIONS(91),
    [anon_sym_vpshufb] = ACTIONS(91),
    [anon_sym_vpshufd] = ACTIONS(91),
    [anon_sym_vpslldq] = ACTIONS(91),
    [anon_sym_vpslld] = ACTIONS(91),
    [anon_sym_vpsllq] = ACTIONS(91),
    [anon_sym_vpsllw] = ACTIONS(91),
    [anon_sym_vpsrldq] = ACTIONS(91),
    [anon_sym_vpsrld] = ACTIONS(91),
    [anon_sym_vpsrlq] = ACTIONS(91),
    [anon_sym_vpsrlw] = ACTIONS(91),
    [anon_sym_vpsubusw] = ACTIONS(91),
    [anon_sym_vpsubq] = ACTIONS(91),
    [anon_sym_vpsubd] = ACTIONS(91),
    [anon_sym_vpsubw] = ACTIONS(91),
    [anon_sym_vshufps] = ACTIONS(91),
    [anon_sym_vsubsd] = ACTIONS(91),
    [anon_sym_vucomisd] = ACTIONS(91),
    [anon_sym_vucomiss] = ACTIONS(91),
    [anon_sym_vunpckhpd] = ACTIONS(91),
    [anon_sym_vunpckhps] = ACTIONS(91),
    [anon_sym_vunpcklpd] = ACTIONS(91),
    [anon_sym_vunpcklps] = ACTIONS(91),
    [anon_sym_vbroadcastss] = ACTIONS(91),
    [anon_sym_vinsertf128] = ACTIONS(91),
    [anon_sym_vperm2f128] = ACTIONS(91),
    [anon_sym_vzeroall] = ACTIONS(91),
    [anon_sym_vzeroupper] = ACTIONS(91),
    [anon_sym_vshufi32x4] = ACTIONS(91),
    [anon_sym_vshufi64x2] = ACTIONS(91),
    [anon_sym_vpblendmd] = ACTIONS(91),
    [anon_sym_vextracti128] = ACTIONS(91),
    [anon_sym_vextracti32x4] = ACTIONS(91),
    [anon_sym_vinserti128] = ACTIONS(91),
    [anon_sym_vinserti32x4] = ACTIONS(91),
    [anon_sym_vinserti64x4] = ACTIONS(91),
    [anon_sym_vpblendd] = ACTIONS(91),
    [anon_sym_vpbroadcastq] = ACTIONS(91),
    [anon_sym_vpbroadcastd] = ACTIONS(91),
    [anon_sym_vbroadcasti128] = ACTIONS(91),
    [anon_sym_vbroadcasti32x4] = ACTIONS(91),
    [anon_sym_vperm2i128] = ACTIONS(91),
    [anon_sym_vpermd] = ACTIONS(91),
    [anon_sym_vpermq] = ACTIONS(91),
    [anon_sym_vpermt2d] = ACTIONS(91),
    [anon_sym_vpermi2d] = ACTIONS(91),
    [anon_sym_tzcnt] = ACTIONS(91),
    [anon_sym_rorx] = ACTIONS(91),
    [anon_sym_psubd] = ACTIONS(91),
    [anon_sym_pmaddwd] = ACTIONS(91),
    [anon_sym_pxor] = ACTIONS(91),
    [anon_sym_psrad] = ACTIONS(91),
    [anon_sym_pslld] = ACTIONS(91),
    [anon_sym_pcmpgtd] = ACTIONS(91),
    [anon_sym_pcmpeqd] = ACTIONS(91),
    [anon_sym_por] = ACTIONS(91),
    [anon_sym_paddw] = ACTIONS(91),
    [anon_sym_psubusw] = ACTIONS(91),
    [anon_sym_pcmpeqb] = ACTIONS(91),
    [anon_sym_psubusb] = ACTIONS(91),
    [anon_sym_psrld] = ACTIONS(91),
    [anon_sym_psrlw] = ACTIONS(91),
    [anon_sym_psllq] = ACTIONS(91),
    [anon_sym_paddd] = ACTIONS(91),
    [anon_sym_psrlq] = ACTIONS(91),
    [anon_sym_psubb] = ACTIONS(91),
    [anon_sym_maxss] = ACTIONS(91),
    [anon_sym_pmovmskb] = ACTIONS(91),
    [anon_sym_pinsrw] = ACTIONS(91),
    [anon_sym_minss] = ACTIONS(91),
    [anon_sym_prefetcht1] = ACTIONS(91),
    [anon_sym_prefetcht0] = ACTIONS(91),
    [anon_sym_pextrw] = ACTIONS(91),
    [anon_sym_ucomiss] = ACTIONS(91),
    [anon_sym_shufps] = ACTIONS(91),
    [anon_sym_addsd] = ACTIONS(91),
    [anon_sym_paddq] = ACTIONS(91),
    [anon_sym_psubq] = ACTIONS(91),
    [anon_sym_pshuflw] = ACTIONS(91),
    [anon_sym_pmuludq] = ACTIONS(91),
    [anon_sym_pshufd] = ACTIONS(91),
    [anon_sym_minsd] = ACTIONS(91),
    [anon_sym_pshufhw] = ACTIONS(91),
    [anon_sym_mfence] = ACTIONS(91),
    [anon_sym_maxsd] = ACTIONS(91),
    [anon_sym_ucomisd] = ACTIONS(91),
    [anon_sym_shufpd] = ACTIONS(91),
    [anon_sym_pslldq] = ACTIONS(91),
    [anon_sym_unpckhpd] = ACTIONS(91),
    [anon_sym_psrldq] = ACTIONS(91),
    [anon_sym_palignr] = ACTIONS(91),
    [anon_sym_pshufb] = ACTIONS(91),
    [anon_sym_pmaddubsw] = ACTIONS(91),
    [anon_sym_pinsrb] = ACTIONS(91),
    [anon_sym_pblendw] = ACTIONS(91),
    [anon_sym_pextrq] = ACTIONS(91),
    [anon_sym_blendvps] = ACTIONS(91),
    [anon_sym_pextrb] = ACTIONS(91),
    [anon_sym_pinsrd] = ACTIONS(91),
    [anon_sym_femms] = ACTIONS(91),
    [anon_sym_callq] = ACTIONS(94),
    [anon_sym_ja] = ACTIONS(94),
    [anon_sym_jae] = ACTIONS(94),
    [anon_sym_jb] = ACTIONS(94),
    [anon_sym_jbe] = ACTIONS(94),
    [anon_sym_je] = ACTIONS(94),
    [anon_sym_jg] = ACTIONS(94),
    [anon_sym_jge] = ACTIONS(94),
    [anon_sym_jl] = ACTIONS(94),
    [anon_sym_jle] = ACTIONS(94),
    [anon_sym_jmp] = ACTIONS(94),
    [anon_sym_jmpq] = ACTIONS(94),
    [anon_sym_jne] = ACTIONS(94),
    [anon_sym_jno] = ACTIONS(94),
    [anon_sym_jns] = ACTIONS(94),
    [anon_sym_jo] = ACTIONS(94),
    [anon_sym_jp] = ACTIONS(94),
    [anon_sym_jrcxz] = ACTIONS(94),
    [anon_sym_js] = ACTIONS(94),
    [anon_sym_notrack] = ACTIONS(94),
  },
  [3] = {
    [sym__address] = STATE(196),
    [sym_comment] = STATE(297),
    [sym__machine_code] = STATE(4),
    [sym__line] = STATE(2),
    [sym_instruction] = STATE(146),
    [sym_data] = STATE(187),
    [sym_opcode] = STATE(12),
    [sym_BinaryArithmeticOpcode] = STATE(29),
    [sym_BitAndByteOpcode] = STATE(29),
    [sym_CuriousOpcode] = STATE(29),
    [sym_DataTransferOpcode] = STATE(29),
    [sym_IOOpcode] = STATE(29),
    [sym_LogicalOpcode] = STATE(29),
    [sym_MiscellaneousOpcode] = STATE(29),
    [sym_PackUnpackOpcode] = STATE(29),
    [sym_ShiftAndRotateOpcode] = STATE(29),
    [sym_StackOpcode] = STATE(29),
    [sym_StringOpcode] = STATE(29),
    [sym_AccessRegisterOpcode] = STATE(29),
    [sym_ToBeClassifiedOpcode] = STATE(29),
    [sym_control] = STATE(187),
    [sym_controlOpcode] = STATE(64),
    [aux_sym_prog_repeat1] = STATE(2),
    [aux_sym__address_repeat1] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(97),
    [aux_sym__address_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym__line_break] = ACTIONS(99),
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
    [anon_sym_callq] = ACTIONS(39),
    [anon_sym_ja] = ACTIONS(39),
    [anon_sym_jae] = ACTIONS(39),
    [anon_sym_jb] = ACTIONS(39),
    [anon_sym_jbe] = ACTIONS(39),
    [anon_sym_je] = ACTIONS(39),
    [anon_sym_jg] = ACTIONS(39),
    [anon_sym_jge] = ACTIONS(39),
    [anon_sym_jl] = ACTIONS(39),
    [anon_sym_jle] = ACTIONS(39),
    [anon_sym_jmp] = ACTIONS(39),
    [anon_sym_jmpq] = ACTIONS(39),
    [anon_sym_jne] = ACTIONS(39),
    [anon_sym_jno] = ACTIONS(39),
    [anon_sym_jns] = ACTIONS(39),
    [anon_sym_jo] = ACTIONS(39),
    [anon_sym_jp] = ACTIONS(39),
    [anon_sym_jrcxz] = ACTIONS(39),
    [anon_sym_js] = ACTIONS(39),
    [anon_sym_notrack] = ACTIONS(39),
  },
  [4] = {
    [sym_comment] = STATE(274),
    [sym_instruction] = STATE(148),
    [sym_data] = STATE(187),
    [sym_opcode] = STATE(12),
    [sym_BinaryArithmeticOpcode] = STATE(29),
    [sym_BitAndByteOpcode] = STATE(29),
    [sym_CuriousOpcode] = STATE(29),
    [sym_DataTransferOpcode] = STATE(29),
    [sym_IOOpcode] = STATE(29),
    [sym_LogicalOpcode] = STATE(29),
    [sym_MiscellaneousOpcode] = STATE(29),
    [sym_PackUnpackOpcode] = STATE(29),
    [sym_ShiftAndRotateOpcode] = STATE(29),
    [sym_StackOpcode] = STATE(29),
    [sym_StringOpcode] = STATE(29),
    [sym_AccessRegisterOpcode] = STATE(29),
    [sym_ToBeClassifiedOpcode] = STATE(29),
    [sym_control] = STATE(187),
    [sym_controlOpcode] = STATE(64),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym__line_break] = ACTIONS(101),
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
    [anon_sym_callq] = ACTIONS(39),
    [anon_sym_ja] = ACTIONS(39),
    [anon_sym_jae] = ACTIONS(39),
    [anon_sym_jb] = ACTIONS(39),
    [anon_sym_jbe] = ACTIONS(39),
    [anon_sym_je] = ACTIONS(39),
    [anon_sym_jg] = ACTIONS(39),
    [anon_sym_jge] = ACTIONS(39),
    [anon_sym_jl] = ACTIONS(39),
    [anon_sym_jle] = ACTIONS(39),
    [anon_sym_jmp] = ACTIONS(39),
    [anon_sym_jmpq] = ACTIONS(39),
    [anon_sym_jne] = ACTIONS(39),
    [anon_sym_jno] = ACTIONS(39),
    [anon_sym_jns] = ACTIONS(39),
    [anon_sym_jo] = ACTIONS(39),
    [anon_sym_jp] = ACTIONS(39),
    [anon_sym_jrcxz] = ACTIONS(39),
    [anon_sym_js] = ACTIONS(39),
    [anon_sym_notrack] = ACTIONS(39),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [aux_sym__address_token1] = ACTIONS(105),
    [aux_sym_comment_token1] = ACTIONS(105),
    [aux_sym_comment_token2] = ACTIONS(105),
    [sym__line_break] = ACTIONS(103),
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
    [anon_sym_callq] = ACTIONS(105),
    [anon_sym_ja] = ACTIONS(105),
    [anon_sym_jae] = ACTIONS(105),
    [anon_sym_jb] = ACTIONS(105),
    [anon_sym_jbe] = ACTIONS(105),
    [anon_sym_je] = ACTIONS(105),
    [anon_sym_jg] = ACTIONS(105),
    [anon_sym_jge] = ACTIONS(105),
    [anon_sym_jl] = ACTIONS(105),
    [anon_sym_jle] = ACTIONS(105),
    [anon_sym_jmp] = ACTIONS(105),
    [anon_sym_jmpq] = ACTIONS(105),
    [anon_sym_jne] = ACTIONS(105),
    [anon_sym_jno] = ACTIONS(105),
    [anon_sym_jns] = ACTIONS(105),
    [anon_sym_jo] = ACTIONS(105),
    [anon_sym_jp] = ACTIONS(105),
    [anon_sym_jrcxz] = ACTIONS(105),
    [anon_sym_js] = ACTIONS(105),
    [anon_sym_notrack] = ACTIONS(105),
  },
  [6] = {
    [aux_sym__machine_code_repeat1] = STATE(10),
    [sym__byte] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(109),
    [aux_sym_comment_token2] = ACTIONS(109),
    [sym__line_break] = ACTIONS(111),
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
    [anon_sym_callq] = ACTIONS(109),
    [anon_sym_ja] = ACTIONS(109),
    [anon_sym_jae] = ACTIONS(109),
    [anon_sym_jb] = ACTIONS(109),
    [anon_sym_jbe] = ACTIONS(109),
    [anon_sym_je] = ACTIONS(109),
    [anon_sym_jg] = ACTIONS(109),
    [anon_sym_jge] = ACTIONS(109),
    [anon_sym_jl] = ACTIONS(109),
    [anon_sym_jle] = ACTIONS(109),
    [anon_sym_jmp] = ACTIONS(109),
    [anon_sym_jmpq] = ACTIONS(109),
    [anon_sym_jne] = ACTIONS(109),
    [anon_sym_jno] = ACTIONS(109),
    [anon_sym_jns] = ACTIONS(109),
    [anon_sym_jo] = ACTIONS(109),
    [anon_sym_jp] = ACTIONS(109),
    [anon_sym_jrcxz] = ACTIONS(109),
    [anon_sym_js] = ACTIONS(109),
    [anon_sym_notrack] = ACTIONS(109),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [aux_sym__address_token1] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(115),
    [aux_sym_comment_token2] = ACTIONS(115),
    [sym__line_break] = ACTIONS(113),
    [anon_sym_adc] = ACTIONS(115),
    [anon_sym_add] = ACTIONS(115),
    [anon_sym_addq] = ACTIONS(115),
    [anon_sym_addl] = ACTIONS(115),
    [anon_sym_addss] = ACTIONS(115),
    [anon_sym_addw] = ACTIONS(115),
    [anon_sym_addb] = ACTIONS(115),
    [anon_sym_cmp] = ACTIONS(115),
    [anon_sym_cmpb] = ACTIONS(115),
    [anon_sym_cmpw] = ACTIONS(115),
    [anon_sym_cmpl] = ACTIONS(115),
    [anon_sym_cmpq] = ACTIONS(115),
    [anon_sym_comiss] = ACTIONS(115),
    [anon_sym_comisd] = ACTIONS(115),
    [anon_sym_inc] = ACTIONS(115),
    [anon_sym_incl] = ACTIONS(115),
    [anon_sym_dec] = ACTIONS(115),
    [anon_sym_div] = ACTIONS(115),
    [anon_sym_divq] = ACTIONS(115),
    [anon_sym_divl] = ACTIONS(115),
    [anon_sym_divss] = ACTIONS(115),
    [anon_sym_divsd] = ACTIONS(115),
    [anon_sym_idiv] = ACTIONS(115),
    [anon_sym_idivl] = ACTIONS(115),
    [anon_sym_sub] = ACTIONS(115),
    [anon_sym_subq] = ACTIONS(115),
    [anon_sym_subl] = ACTIONS(115),
    [anon_sym_subss] = ACTIONS(115),
    [anon_sym_subw] = ACTIONS(115),
    [anon_sym_subb] = ACTIONS(115),
    [anon_sym_subsd] = ACTIONS(115),
    [anon_sym_subpd] = ACTIONS(115),
    [anon_sym_sbb] = ACTIONS(115),
    [anon_sym_mul] = ACTIONS(115),
    [anon_sym_mulq] = ACTIONS(115),
    [anon_sym_mull] = ACTIONS(115),
    [anon_sym_mulss] = ACTIONS(115),
    [anon_sym_mulw] = ACTIONS(115),
    [anon_sym_mulb] = ACTIONS(115),
    [anon_sym_mulsd] = ACTIONS(115),
    [anon_sym_mulx] = ACTIONS(115),
    [anon_sym_imul] = ACTIONS(115),
    [anon_sym_neg] = ACTIONS(115),
    [anon_sym_negl] = ACTIONS(115),
    [anon_sym_negq] = ACTIONS(115),
    [anon_sym_fmulp] = ACTIONS(115),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(115),
    [anon_sym_pclmullqlqdq] = ACTIONS(115),
    [anon_sym_pclmullqhqdq] = ACTIONS(115),
    [anon_sym_vpclmullqhqdq] = ACTIONS(115),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(115),
    [anon_sym_pclmulhqhqdq] = ACTIONS(115),
    [anon_sym_vpclmullqlqdq] = ACTIONS(115),
    [anon_sym_bsf] = ACTIONS(115),
    [anon_sym_bsr] = ACTIONS(115),
    [anon_sym_bts] = ACTIONS(115),
    [anon_sym_bt] = ACTIONS(115),
    [anon_sym_btr] = ACTIONS(115),
    [anon_sym_btl] = ACTIONS(115),
    [anon_sym_setne] = ACTIONS(115),
    [anon_sym_setb] = ACTIONS(115),
    [anon_sym_sete] = ACTIONS(115),
    [anon_sym_setbe] = ACTIONS(115),
    [anon_sym_seta] = ACTIONS(115),
    [anon_sym_setge] = ACTIONS(115),
    [anon_sym_setae] = ACTIONS(115),
    [anon_sym_setl] = ACTIONS(115),
    [anon_sym_setle] = ACTIONS(115),
    [anon_sym_setg] = ACTIONS(115),
    [anon_sym_seto] = ACTIONS(115),
    [anon_sym_setnp] = ACTIONS(115),
    [anon_sym_setp] = ACTIONS(115),
    [anon_sym_setns] = ACTIONS(115),
    [anon_sym_test] = ACTIONS(115),
    [anon_sym_testb] = ACTIONS(115),
    [anon_sym_testl] = ACTIONS(115),
    [anon_sym_knotw] = ACTIONS(115),
    [anon_sym_vpcmpltud] = ACTIONS(115),
    [anon_sym_gs] = ACTIONS(115),
    [anon_sym_re] = ACTIONS(115),
    [anon_sym_ss] = ACTIONS(115),
    [anon_sym_leaveq] = ACTIONS(115),
    [anon_sym_retq] = ACTIONS(115),
    [anon_sym_bswap] = ACTIONS(115),
    [anon_sym_cbtw] = ACTIONS(115),
    [anon_sym_cltd] = ACTIONS(115),
    [anon_sym_cltq] = ACTIONS(115),
    [anon_sym_cmovbe] = ACTIONS(115),
    [anon_sym_cmovl] = ACTIONS(115),
    [anon_sym_cmovae] = ACTIONS(115),
    [anon_sym_cmovo] = ACTIONS(115),
    [anon_sym_cmovne] = ACTIONS(115),
    [anon_sym_cmovns] = ACTIONS(115),
    [anon_sym_cmovg] = ACTIONS(115),
    [anon_sym_cmovp] = ACTIONS(115),
    [anon_sym_cmove] = ACTIONS(115),
    [anon_sym_cmovge] = ACTIONS(115),
    [anon_sym_cmovb] = ACTIONS(115),
    [anon_sym_cmova] = ACTIONS(115),
    [anon_sym_cmovle] = ACTIONS(115),
    [anon_sym_cmovs] = ACTIONS(115),
    [anon_sym_cwtl] = ACTIONS(115),
    [anon_sym_cwtd] = ACTIONS(115),
    [anon_sym_cqto] = ACTIONS(115),
    [anon_sym_cvttsd2si] = ACTIONS(115),
    [anon_sym_cvtss2sd] = ACTIONS(115),
    [anon_sym_cvttss2si] = ACTIONS(115),
    [anon_sym_cvtsi2sd] = ACTIONS(115),
    [anon_sym_cvtsi2ss] = ACTIONS(115),
    [anon_sym_cvtsi2sdq] = ACTIONS(115),
    [anon_sym_cvtsi2sdl] = ACTIONS(115),
    [anon_sym_cvtsd2ss] = ACTIONS(115),
    [anon_sym_cvtsi2ssl] = ACTIONS(115),
    [anon_sym_mov] = ACTIONS(115),
    [anon_sym_movw] = ACTIONS(115),
    [anon_sym_movl] = ACTIONS(115),
    [anon_sym_movq] = ACTIONS(115),
    [anon_sym_movb] = ACTIONS(115),
    [anon_sym_movabs] = ACTIONS(115),
    [anon_sym_movsbw] = ACTIONS(115),
    [anon_sym_movsbq] = ACTIONS(115),
    [anon_sym_movsbl] = ACTIONS(115),
    [anon_sym_movswl] = ACTIONS(115),
    [anon_sym_movswq] = ACTIONS(115),
    [anon_sym_movzbw] = ACTIONS(115),
    [anon_sym_movzbq] = ACTIONS(115),
    [anon_sym_movzbl] = ACTIONS(115),
    [anon_sym_movzwl] = ACTIONS(115),
    [anon_sym_movaps] = ACTIONS(115),
    [anon_sym_movhlps] = ACTIONS(115),
    [anon_sym_movss] = ACTIONS(115),
    [anon_sym_movups] = ACTIONS(115),
    [anon_sym_movsd] = ACTIONS(115),
    [anon_sym_movd] = ACTIONS(115),
    [anon_sym_movhps] = ACTIONS(115),
    [anon_sym_movdqa] = ACTIONS(115),
    [anon_sym_movbe] = ACTIONS(115),
    [anon_sym_movapd] = ACTIONS(115),
    [anon_sym_movdqu] = ACTIONS(115),
    [anon_sym_xchg] = ACTIONS(115),
    [anon_sym_fildl] = ACTIONS(115),
    [anon_sym_fldt] = ACTIONS(115),
    [anon_sym_fstpl] = ACTIONS(115),
    [anon_sym_insb] = ACTIONS(115),
    [anon_sym_insl] = ACTIONS(115),
    [anon_sym_outsb] = ACTIONS(115),
    [anon_sym_outsl] = ACTIONS(115),
    [anon_sym_or] = ACTIONS(115),
    [anon_sym_orq] = ACTIONS(115),
    [anon_sym_orl] = ACTIONS(115),
    [anon_sym_orb] = ACTIONS(115),
    [anon_sym_orw] = ACTIONS(115),
    [anon_sym_xor] = ACTIONS(115),
    [anon_sym_xorl] = ACTIONS(115),
    [anon_sym_xorw] = ACTIONS(115),
    [anon_sym_xorps] = ACTIONS(115),
    [anon_sym_xorpd] = ACTIONS(115),
    [anon_sym_vxorps] = ACTIONS(115),
    [anon_sym_vpxord] = ACTIONS(115),
    [anon_sym_vpxor] = ACTIONS(115),
    [anon_sym_and] = ACTIONS(115),
    [anon_sym_andq] = ACTIONS(115),
    [anon_sym_andl] = ACTIONS(115),
    [anon_sym_andw] = ACTIONS(115),
    [anon_sym_andb] = ACTIONS(115),
    [anon_sym_andn] = ACTIONS(115),
    [anon_sym_andpd] = ACTIONS(115),
    [anon_sym_pand] = ACTIONS(115),
    [anon_sym_pandn] = ACTIONS(115),
    [anon_sym_andps] = ACTIONS(115),
    [anon_sym_vpand] = ACTIONS(115),
    [anon_sym_not] = ACTIONS(115),
    [anon_sym_notl] = ACTIONS(115),
    [anon_sym_notw] = ACTIONS(115),
    [anon_sym_cpuid] = ACTIONS(115),
    [anon_sym_lea] = ACTIONS(115),
    [anon_sym_popcnt] = ACTIONS(115),
    [anon_sym_nop] = ACTIONS(115),
    [anon_sym_nopl] = ACTIONS(115),
    [anon_sym_nopw] = ACTIONS(115),
    [anon_sym_ud2] = ACTIONS(115),
    [anon_sym_data16] = ACTIONS(115),
    [anon_sym_sha1rnds4] = ACTIONS(115),
    [anon_sym_addr32] = ACTIONS(115),
    [anon_sym_sha1msg1] = ACTIONS(115),
    [anon_sym_sha1msg2] = ACTIONS(115),
    [anon_sym_sha1nexte] = ACTIONS(115),
    [anon_sym_endbr64] = ACTIONS(115),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(115),
    [anon_sym_packuswb] = ACTIONS(115),
    [anon_sym_punpckhbw] = ACTIONS(115),
    [anon_sym_punpckhdq] = ACTIONS(115),
    [anon_sym_punpckhwd] = ACTIONS(115),
    [anon_sym_punpcklbw] = ACTIONS(115),
    [anon_sym_punpckldq] = ACTIONS(115),
    [anon_sym_punpcklwd] = ACTIONS(115),
    [anon_sym_vpunpcklwd] = ACTIONS(115),
    [anon_sym_vpunpckldq] = ACTIONS(115),
    [anon_sym_punpcklqdq] = ACTIONS(115),
    [anon_sym_punpckhqdq] = ACTIONS(115),
    [anon_sym_vpunpckhqdq] = ACTIONS(115),
    [anon_sym_vpunpckhdq] = ACTIONS(115),
    [anon_sym_vpunpcklqdq] = ACTIONS(115),
    [anon_sym_vpunpckhwd] = ACTIONS(115),
    [anon_sym_rol] = ACTIONS(115),
    [anon_sym_ror] = ACTIONS(115),
    [anon_sym_sar] = ACTIONS(115),
    [anon_sym_sarl] = ACTIONS(115),
    [anon_sym_sarx] = ACTIONS(115),
    [anon_sym_shl] = ACTIONS(115),
    [anon_sym_shll] = ACTIONS(115),
    [anon_sym_shld] = ACTIONS(115),
    [anon_sym_shlx] = ACTIONS(115),
    [anon_sym_shlq] = ACTIONS(115),
    [anon_sym_shr] = ACTIONS(115),
    [anon_sym_shrq] = ACTIONS(115),
    [anon_sym_shrd] = ACTIONS(115),
    [anon_sym_shrl] = ACTIONS(115),
    [anon_sym_shrx] = ACTIONS(115),
    [anon_sym_vprord] = ACTIONS(115),
    [anon_sym_vprorq] = ACTIONS(115),
    [anon_sym_rorl] = ACTIONS(115),
    [anon_sym_roll] = ACTIONS(115),
    [anon_sym_push] = ACTIONS(115),
    [anon_sym_pushq] = ACTIONS(115),
    [anon_sym_pop] = ACTIONS(115),
    [anon_sym_movslq] = ACTIONS(115),
    [anon_sym_movsb] = ACTIONS(115),
    [anon_sym_rep] = ACTIONS(115),
    [anon_sym_repz] = ACTIONS(115),
    [anon_sym_repnz] = ACTIONS(115),
    [anon_sym_rex] = ACTIONS(115),
    [anon_sym_rex_DOTWB] = ACTIONS(115),
    [anon_sym_rex_DOTWRB] = ACTIONS(115),
    [anon_sym_rex_DOTRXB] = ACTIONS(115),
    [anon_sym_rex_DOTB] = ACTIONS(115),
    [anon_sym_rex_DOTWRXB] = ACTIONS(115),
    [anon_sym_rex_DOTXB] = ACTIONS(115),
    [anon_sym_rex_DOTW] = ACTIONS(115),
    [anon_sym_rex_DOTRB] = ACTIONS(115),
    [anon_sym_xgetbv] = ACTIONS(115),
    [anon_sym_fs] = ACTIONS(115),
    [anon_sym_kmovw] = ACTIONS(115),
    [anon_sym_adcx] = ACTIONS(115),
    [anon_sym_adox] = ACTIONS(115),
    [anon_sym_aesdec] = ACTIONS(115),
    [anon_sym_aesdeclast] = ACTIONS(115),
    [anon_sym_aesenc] = ACTIONS(115),
    [anon_sym_aesenclast] = ACTIONS(115),
    [anon_sym_vaesenc] = ACTIONS(115),
    [anon_sym_vaesenclast] = ACTIONS(115),
    [anon_sym_aeskeygenassist] = ACTIONS(115),
    [anon_sym_vblendps] = ACTIONS(115),
    [anon_sym_vblendvps] = ACTIONS(115),
    [anon_sym_vcvtusi2sd] = ACTIONS(115),
    [anon_sym_vdivsd] = ACTIONS(115),
    [anon_sym_vmovaps] = ACTIONS(115),
    [anon_sym_vmovapd] = ACTIONS(115),
    [anon_sym_vmovss] = ACTIONS(115),
    [anon_sym_vmovdqu] = ACTIONS(115),
    [anon_sym_vmovdqu64] = ACTIONS(115),
    [anon_sym_vmovdqu32] = ACTIONS(115),
    [anon_sym_vmovdqa] = ACTIONS(115),
    [anon_sym_vmovdqa32] = ACTIONS(115),
    [anon_sym_vmovdqa64] = ACTIONS(115),
    [anon_sym_vmovq] = ACTIONS(115),
    [anon_sym_vmovups] = ACTIONS(115),
    [anon_sym_vmovd] = ACTIONS(115),
    [anon_sym_vmovsd] = ACTIONS(115),
    [anon_sym_vmulsd] = ACTIONS(115),
    [anon_sym_vpackusdw] = ACTIONS(115),
    [anon_sym_vpaddd] = ACTIONS(115),
    [anon_sym_vpaddb] = ACTIONS(115),
    [anon_sym_vpaddq] = ACTIONS(115),
    [anon_sym_vpaddw] = ACTIONS(115),
    [anon_sym_vpalignr] = ACTIONS(115),
    [anon_sym_vpcmpgtd] = ACTIONS(115),
    [anon_sym_vpextrw] = ACTIONS(115),
    [anon_sym_vpinsrw] = ACTIONS(115),
    [anon_sym_vpinsrd] = ACTIONS(115),
    [anon_sym_vpinsrq] = ACTIONS(115),
    [anon_sym_vpinsrb] = ACTIONS(115),
    [anon_sym_vpmaddubsw] = ACTIONS(115),
    [anon_sym_vpmaddwd] = ACTIONS(115),
    [anon_sym_vpmullw] = ACTIONS(115),
    [anon_sym_vpmuludq] = ACTIONS(115),
    [anon_sym_vpor] = ACTIONS(115),
    [anon_sym_vpshufb] = ACTIONS(115),
    [anon_sym_vpshufd] = ACTIONS(115),
    [anon_sym_vpslldq] = ACTIONS(115),
    [anon_sym_vpslld] = ACTIONS(115),
    [anon_sym_vpsllq] = ACTIONS(115),
    [anon_sym_vpsllw] = ACTIONS(115),
    [anon_sym_vpsrldq] = ACTIONS(115),
    [anon_sym_vpsrld] = ACTIONS(115),
    [anon_sym_vpsrlq] = ACTIONS(115),
    [anon_sym_vpsrlw] = ACTIONS(115),
    [anon_sym_vpsubusw] = ACTIONS(115),
    [anon_sym_vpsubq] = ACTIONS(115),
    [anon_sym_vpsubd] = ACTIONS(115),
    [anon_sym_vpsubw] = ACTIONS(115),
    [anon_sym_vshufps] = ACTIONS(115),
    [anon_sym_vsubsd] = ACTIONS(115),
    [anon_sym_vucomisd] = ACTIONS(115),
    [anon_sym_vucomiss] = ACTIONS(115),
    [anon_sym_vunpckhpd] = ACTIONS(115),
    [anon_sym_vunpckhps] = ACTIONS(115),
    [anon_sym_vunpcklpd] = ACTIONS(115),
    [anon_sym_vunpcklps] = ACTIONS(115),
    [anon_sym_vbroadcastss] = ACTIONS(115),
    [anon_sym_vinsertf128] = ACTIONS(115),
    [anon_sym_vperm2f128] = ACTIONS(115),
    [anon_sym_vzeroall] = ACTIONS(115),
    [anon_sym_vzeroupper] = ACTIONS(115),
    [anon_sym_vshufi32x4] = ACTIONS(115),
    [anon_sym_vshufi64x2] = ACTIONS(115),
    [anon_sym_vpblendmd] = ACTIONS(115),
    [anon_sym_vextracti128] = ACTIONS(115),
    [anon_sym_vextracti32x4] = ACTIONS(115),
    [anon_sym_vinserti128] = ACTIONS(115),
    [anon_sym_vinserti32x4] = ACTIONS(115),
    [anon_sym_vinserti64x4] = ACTIONS(115),
    [anon_sym_vpblendd] = ACTIONS(115),
    [anon_sym_vpbroadcastq] = ACTIONS(115),
    [anon_sym_vpbroadcastd] = ACTIONS(115),
    [anon_sym_vbroadcasti128] = ACTIONS(115),
    [anon_sym_vbroadcasti32x4] = ACTIONS(115),
    [anon_sym_vperm2i128] = ACTIONS(115),
    [anon_sym_vpermd] = ACTIONS(115),
    [anon_sym_vpermq] = ACTIONS(115),
    [anon_sym_vpermt2d] = ACTIONS(115),
    [anon_sym_vpermi2d] = ACTIONS(115),
    [anon_sym_tzcnt] = ACTIONS(115),
    [anon_sym_rorx] = ACTIONS(115),
    [anon_sym_psubd] = ACTIONS(115),
    [anon_sym_pmaddwd] = ACTIONS(115),
    [anon_sym_pxor] = ACTIONS(115),
    [anon_sym_psrad] = ACTIONS(115),
    [anon_sym_pslld] = ACTIONS(115),
    [anon_sym_pcmpgtd] = ACTIONS(115),
    [anon_sym_pcmpeqd] = ACTIONS(115),
    [anon_sym_por] = ACTIONS(115),
    [anon_sym_paddw] = ACTIONS(115),
    [anon_sym_psubusw] = ACTIONS(115),
    [anon_sym_pcmpeqb] = ACTIONS(115),
    [anon_sym_psubusb] = ACTIONS(115),
    [anon_sym_psrld] = ACTIONS(115),
    [anon_sym_psrlw] = ACTIONS(115),
    [anon_sym_psllq] = ACTIONS(115),
    [anon_sym_paddd] = ACTIONS(115),
    [anon_sym_psrlq] = ACTIONS(115),
    [anon_sym_psubb] = ACTIONS(115),
    [anon_sym_maxss] = ACTIONS(115),
    [anon_sym_pmovmskb] = ACTIONS(115),
    [anon_sym_pinsrw] = ACTIONS(115),
    [anon_sym_minss] = ACTIONS(115),
    [anon_sym_prefetcht1] = ACTIONS(115),
    [anon_sym_prefetcht0] = ACTIONS(115),
    [anon_sym_pextrw] = ACTIONS(115),
    [anon_sym_ucomiss] = ACTIONS(115),
    [anon_sym_shufps] = ACTIONS(115),
    [anon_sym_addsd] = ACTIONS(115),
    [anon_sym_paddq] = ACTIONS(115),
    [anon_sym_psubq] = ACTIONS(115),
    [anon_sym_pshuflw] = ACTIONS(115),
    [anon_sym_pmuludq] = ACTIONS(115),
    [anon_sym_pshufd] = ACTIONS(115),
    [anon_sym_minsd] = ACTIONS(115),
    [anon_sym_pshufhw] = ACTIONS(115),
    [anon_sym_mfence] = ACTIONS(115),
    [anon_sym_maxsd] = ACTIONS(115),
    [anon_sym_ucomisd] = ACTIONS(115),
    [anon_sym_shufpd] = ACTIONS(115),
    [anon_sym_pslldq] = ACTIONS(115),
    [anon_sym_unpckhpd] = ACTIONS(115),
    [anon_sym_psrldq] = ACTIONS(115),
    [anon_sym_palignr] = ACTIONS(115),
    [anon_sym_pshufb] = ACTIONS(115),
    [anon_sym_pmaddubsw] = ACTIONS(115),
    [anon_sym_pinsrb] = ACTIONS(115),
    [anon_sym_pblendw] = ACTIONS(115),
    [anon_sym_pextrq] = ACTIONS(115),
    [anon_sym_blendvps] = ACTIONS(115),
    [anon_sym_pextrb] = ACTIONS(115),
    [anon_sym_pinsrd] = ACTIONS(115),
    [anon_sym_femms] = ACTIONS(115),
    [anon_sym_callq] = ACTIONS(115),
    [anon_sym_ja] = ACTIONS(115),
    [anon_sym_jae] = ACTIONS(115),
    [anon_sym_jb] = ACTIONS(115),
    [anon_sym_jbe] = ACTIONS(115),
    [anon_sym_je] = ACTIONS(115),
    [anon_sym_jg] = ACTIONS(115),
    [anon_sym_jge] = ACTIONS(115),
    [anon_sym_jl] = ACTIONS(115),
    [anon_sym_jle] = ACTIONS(115),
    [anon_sym_jmp] = ACTIONS(115),
    [anon_sym_jmpq] = ACTIONS(115),
    [anon_sym_jne] = ACTIONS(115),
    [anon_sym_jno] = ACTIONS(115),
    [anon_sym_jns] = ACTIONS(115),
    [anon_sym_jo] = ACTIONS(115),
    [anon_sym_jp] = ACTIONS(115),
    [anon_sym_jrcxz] = ACTIONS(115),
    [anon_sym_js] = ACTIONS(115),
    [anon_sym_notrack] = ACTIONS(115),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym__address_token1] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(119),
    [aux_sym_comment_token2] = ACTIONS(119),
    [sym__line_break] = ACTIONS(117),
    [anon_sym_adc] = ACTIONS(119),
    [anon_sym_add] = ACTIONS(119),
    [anon_sym_addq] = ACTIONS(119),
    [anon_sym_addl] = ACTIONS(119),
    [anon_sym_addss] = ACTIONS(119),
    [anon_sym_addw] = ACTIONS(119),
    [anon_sym_addb] = ACTIONS(119),
    [anon_sym_cmp] = ACTIONS(119),
    [anon_sym_cmpb] = ACTIONS(119),
    [anon_sym_cmpw] = ACTIONS(119),
    [anon_sym_cmpl] = ACTIONS(119),
    [anon_sym_cmpq] = ACTIONS(119),
    [anon_sym_comiss] = ACTIONS(119),
    [anon_sym_comisd] = ACTIONS(119),
    [anon_sym_inc] = ACTIONS(119),
    [anon_sym_incl] = ACTIONS(119),
    [anon_sym_dec] = ACTIONS(119),
    [anon_sym_div] = ACTIONS(119),
    [anon_sym_divq] = ACTIONS(119),
    [anon_sym_divl] = ACTIONS(119),
    [anon_sym_divss] = ACTIONS(119),
    [anon_sym_divsd] = ACTIONS(119),
    [anon_sym_idiv] = ACTIONS(119),
    [anon_sym_idivl] = ACTIONS(119),
    [anon_sym_sub] = ACTIONS(119),
    [anon_sym_subq] = ACTIONS(119),
    [anon_sym_subl] = ACTIONS(119),
    [anon_sym_subss] = ACTIONS(119),
    [anon_sym_subw] = ACTIONS(119),
    [anon_sym_subb] = ACTIONS(119),
    [anon_sym_subsd] = ACTIONS(119),
    [anon_sym_subpd] = ACTIONS(119),
    [anon_sym_sbb] = ACTIONS(119),
    [anon_sym_mul] = ACTIONS(119),
    [anon_sym_mulq] = ACTIONS(119),
    [anon_sym_mull] = ACTIONS(119),
    [anon_sym_mulss] = ACTIONS(119),
    [anon_sym_mulw] = ACTIONS(119),
    [anon_sym_mulb] = ACTIONS(119),
    [anon_sym_mulsd] = ACTIONS(119),
    [anon_sym_mulx] = ACTIONS(119),
    [anon_sym_imul] = ACTIONS(119),
    [anon_sym_neg] = ACTIONS(119),
    [anon_sym_negl] = ACTIONS(119),
    [anon_sym_negq] = ACTIONS(119),
    [anon_sym_fmulp] = ACTIONS(119),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(119),
    [anon_sym_pclmullqlqdq] = ACTIONS(119),
    [anon_sym_pclmullqhqdq] = ACTIONS(119),
    [anon_sym_vpclmullqhqdq] = ACTIONS(119),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(119),
    [anon_sym_pclmulhqhqdq] = ACTIONS(119),
    [anon_sym_vpclmullqlqdq] = ACTIONS(119),
    [anon_sym_bsf] = ACTIONS(119),
    [anon_sym_bsr] = ACTIONS(119),
    [anon_sym_bts] = ACTIONS(119),
    [anon_sym_bt] = ACTIONS(119),
    [anon_sym_btr] = ACTIONS(119),
    [anon_sym_btl] = ACTIONS(119),
    [anon_sym_setne] = ACTIONS(119),
    [anon_sym_setb] = ACTIONS(119),
    [anon_sym_sete] = ACTIONS(119),
    [anon_sym_setbe] = ACTIONS(119),
    [anon_sym_seta] = ACTIONS(119),
    [anon_sym_setge] = ACTIONS(119),
    [anon_sym_setae] = ACTIONS(119),
    [anon_sym_setl] = ACTIONS(119),
    [anon_sym_setle] = ACTIONS(119),
    [anon_sym_setg] = ACTIONS(119),
    [anon_sym_seto] = ACTIONS(119),
    [anon_sym_setnp] = ACTIONS(119),
    [anon_sym_setp] = ACTIONS(119),
    [anon_sym_setns] = ACTIONS(119),
    [anon_sym_test] = ACTIONS(119),
    [anon_sym_testb] = ACTIONS(119),
    [anon_sym_testl] = ACTIONS(119),
    [anon_sym_knotw] = ACTIONS(119),
    [anon_sym_vpcmpltud] = ACTIONS(119),
    [anon_sym_gs] = ACTIONS(119),
    [anon_sym_re] = ACTIONS(119),
    [anon_sym_ss] = ACTIONS(119),
    [anon_sym_leaveq] = ACTIONS(119),
    [anon_sym_retq] = ACTIONS(119),
    [anon_sym_bswap] = ACTIONS(119),
    [anon_sym_cbtw] = ACTIONS(119),
    [anon_sym_cltd] = ACTIONS(119),
    [anon_sym_cltq] = ACTIONS(119),
    [anon_sym_cmovbe] = ACTIONS(119),
    [anon_sym_cmovl] = ACTIONS(119),
    [anon_sym_cmovae] = ACTIONS(119),
    [anon_sym_cmovo] = ACTIONS(119),
    [anon_sym_cmovne] = ACTIONS(119),
    [anon_sym_cmovns] = ACTIONS(119),
    [anon_sym_cmovg] = ACTIONS(119),
    [anon_sym_cmovp] = ACTIONS(119),
    [anon_sym_cmove] = ACTIONS(119),
    [anon_sym_cmovge] = ACTIONS(119),
    [anon_sym_cmovb] = ACTIONS(119),
    [anon_sym_cmova] = ACTIONS(119),
    [anon_sym_cmovle] = ACTIONS(119),
    [anon_sym_cmovs] = ACTIONS(119),
    [anon_sym_cwtl] = ACTIONS(119),
    [anon_sym_cwtd] = ACTIONS(119),
    [anon_sym_cqto] = ACTIONS(119),
    [anon_sym_cvttsd2si] = ACTIONS(119),
    [anon_sym_cvtss2sd] = ACTIONS(119),
    [anon_sym_cvttss2si] = ACTIONS(119),
    [anon_sym_cvtsi2sd] = ACTIONS(119),
    [anon_sym_cvtsi2ss] = ACTIONS(119),
    [anon_sym_cvtsi2sdq] = ACTIONS(119),
    [anon_sym_cvtsi2sdl] = ACTIONS(119),
    [anon_sym_cvtsd2ss] = ACTIONS(119),
    [anon_sym_cvtsi2ssl] = ACTIONS(119),
    [anon_sym_mov] = ACTIONS(119),
    [anon_sym_movw] = ACTIONS(119),
    [anon_sym_movl] = ACTIONS(119),
    [anon_sym_movq] = ACTIONS(119),
    [anon_sym_movb] = ACTIONS(119),
    [anon_sym_movabs] = ACTIONS(119),
    [anon_sym_movsbw] = ACTIONS(119),
    [anon_sym_movsbq] = ACTIONS(119),
    [anon_sym_movsbl] = ACTIONS(119),
    [anon_sym_movswl] = ACTIONS(119),
    [anon_sym_movswq] = ACTIONS(119),
    [anon_sym_movzbw] = ACTIONS(119),
    [anon_sym_movzbq] = ACTIONS(119),
    [anon_sym_movzbl] = ACTIONS(119),
    [anon_sym_movzwl] = ACTIONS(119),
    [anon_sym_movaps] = ACTIONS(119),
    [anon_sym_movhlps] = ACTIONS(119),
    [anon_sym_movss] = ACTIONS(119),
    [anon_sym_movups] = ACTIONS(119),
    [anon_sym_movsd] = ACTIONS(119),
    [anon_sym_movd] = ACTIONS(119),
    [anon_sym_movhps] = ACTIONS(119),
    [anon_sym_movdqa] = ACTIONS(119),
    [anon_sym_movbe] = ACTIONS(119),
    [anon_sym_movapd] = ACTIONS(119),
    [anon_sym_movdqu] = ACTIONS(119),
    [anon_sym_xchg] = ACTIONS(119),
    [anon_sym_fildl] = ACTIONS(119),
    [anon_sym_fldt] = ACTIONS(119),
    [anon_sym_fstpl] = ACTIONS(119),
    [anon_sym_insb] = ACTIONS(119),
    [anon_sym_insl] = ACTIONS(119),
    [anon_sym_outsb] = ACTIONS(119),
    [anon_sym_outsl] = ACTIONS(119),
    [anon_sym_or] = ACTIONS(119),
    [anon_sym_orq] = ACTIONS(119),
    [anon_sym_orl] = ACTIONS(119),
    [anon_sym_orb] = ACTIONS(119),
    [anon_sym_orw] = ACTIONS(119),
    [anon_sym_xor] = ACTIONS(119),
    [anon_sym_xorl] = ACTIONS(119),
    [anon_sym_xorw] = ACTIONS(119),
    [anon_sym_xorps] = ACTIONS(119),
    [anon_sym_xorpd] = ACTIONS(119),
    [anon_sym_vxorps] = ACTIONS(119),
    [anon_sym_vpxord] = ACTIONS(119),
    [anon_sym_vpxor] = ACTIONS(119),
    [anon_sym_and] = ACTIONS(119),
    [anon_sym_andq] = ACTIONS(119),
    [anon_sym_andl] = ACTIONS(119),
    [anon_sym_andw] = ACTIONS(119),
    [anon_sym_andb] = ACTIONS(119),
    [anon_sym_andn] = ACTIONS(119),
    [anon_sym_andpd] = ACTIONS(119),
    [anon_sym_pand] = ACTIONS(119),
    [anon_sym_pandn] = ACTIONS(119),
    [anon_sym_andps] = ACTIONS(119),
    [anon_sym_vpand] = ACTIONS(119),
    [anon_sym_not] = ACTIONS(119),
    [anon_sym_notl] = ACTIONS(119),
    [anon_sym_notw] = ACTIONS(119),
    [anon_sym_cpuid] = ACTIONS(119),
    [anon_sym_lea] = ACTIONS(119),
    [anon_sym_popcnt] = ACTIONS(119),
    [anon_sym_nop] = ACTIONS(119),
    [anon_sym_nopl] = ACTIONS(119),
    [anon_sym_nopw] = ACTIONS(119),
    [anon_sym_ud2] = ACTIONS(119),
    [anon_sym_data16] = ACTIONS(119),
    [anon_sym_sha1rnds4] = ACTIONS(119),
    [anon_sym_addr32] = ACTIONS(119),
    [anon_sym_sha1msg1] = ACTIONS(119),
    [anon_sym_sha1msg2] = ACTIONS(119),
    [anon_sym_sha1nexte] = ACTIONS(119),
    [anon_sym_endbr64] = ACTIONS(119),
    [sym_OperatingSystemSupportOpcode] = ACTIONS(119),
    [anon_sym_packuswb] = ACTIONS(119),
    [anon_sym_punpckhbw] = ACTIONS(119),
    [anon_sym_punpckhdq] = ACTIONS(119),
    [anon_sym_punpckhwd] = ACTIONS(119),
    [anon_sym_punpcklbw] = ACTIONS(119),
    [anon_sym_punpckldq] = ACTIONS(119),
    [anon_sym_punpcklwd] = ACTIONS(119),
    [anon_sym_vpunpcklwd] = ACTIONS(119),
    [anon_sym_vpunpckldq] = ACTIONS(119),
    [anon_sym_punpcklqdq] = ACTIONS(119),
    [anon_sym_punpckhqdq] = ACTIONS(119),
    [anon_sym_vpunpckhqdq] = ACTIONS(119),
    [anon_sym_vpunpckhdq] = ACTIONS(119),
    [anon_sym_vpunpcklqdq] = ACTIONS(119),
    [anon_sym_vpunpckhwd] = ACTIONS(119),
    [anon_sym_rol] = ACTIONS(119),
    [anon_sym_ror] = ACTIONS(119),
    [anon_sym_sar] = ACTIONS(119),
    [anon_sym_sarl] = ACTIONS(119),
    [anon_sym_sarx] = ACTIONS(119),
    [anon_sym_shl] = ACTIONS(119),
    [anon_sym_shll] = ACTIONS(119),
    [anon_sym_shld] = ACTIONS(119),
    [anon_sym_shlx] = ACTIONS(119),
    [anon_sym_shlq] = ACTIONS(119),
    [anon_sym_shr] = ACTIONS(119),
    [anon_sym_shrq] = ACTIONS(119),
    [anon_sym_shrd] = ACTIONS(119),
    [anon_sym_shrl] = ACTIONS(119),
    [anon_sym_shrx] = ACTIONS(119),
    [anon_sym_vprord] = ACTIONS(119),
    [anon_sym_vprorq] = ACTIONS(119),
    [anon_sym_rorl] = ACTIONS(119),
    [anon_sym_roll] = ACTIONS(119),
    [anon_sym_push] = ACTIONS(119),
    [anon_sym_pushq] = ACTIONS(119),
    [anon_sym_pop] = ACTIONS(119),
    [anon_sym_movslq] = ACTIONS(119),
    [anon_sym_movsb] = ACTIONS(119),
    [anon_sym_rep] = ACTIONS(119),
    [anon_sym_repz] = ACTIONS(119),
    [anon_sym_repnz] = ACTIONS(119),
    [anon_sym_rex] = ACTIONS(119),
    [anon_sym_rex_DOTWB] = ACTIONS(119),
    [anon_sym_rex_DOTWRB] = ACTIONS(119),
    [anon_sym_rex_DOTRXB] = ACTIONS(119),
    [anon_sym_rex_DOTB] = ACTIONS(119),
    [anon_sym_rex_DOTWRXB] = ACTIONS(119),
    [anon_sym_rex_DOTXB] = ACTIONS(119),
    [anon_sym_rex_DOTW] = ACTIONS(119),
    [anon_sym_rex_DOTRB] = ACTIONS(119),
    [anon_sym_xgetbv] = ACTIONS(119),
    [anon_sym_fs] = ACTIONS(119),
    [anon_sym_kmovw] = ACTIONS(119),
    [anon_sym_adcx] = ACTIONS(119),
    [anon_sym_adox] = ACTIONS(119),
    [anon_sym_aesdec] = ACTIONS(119),
    [anon_sym_aesdeclast] = ACTIONS(119),
    [anon_sym_aesenc] = ACTIONS(119),
    [anon_sym_aesenclast] = ACTIONS(119),
    [anon_sym_vaesenc] = ACTIONS(119),
    [anon_sym_vaesenclast] = ACTIONS(119),
    [anon_sym_aeskeygenassist] = ACTIONS(119),
    [anon_sym_vblendps] = ACTIONS(119),
    [anon_sym_vblendvps] = ACTIONS(119),
    [anon_sym_vcvtusi2sd] = ACTIONS(119),
    [anon_sym_vdivsd] = ACTIONS(119),
    [anon_sym_vmovaps] = ACTIONS(119),
    [anon_sym_vmovapd] = ACTIONS(119),
    [anon_sym_vmovss] = ACTIONS(119),
    [anon_sym_vmovdqu] = ACTIONS(119),
    [anon_sym_vmovdqu64] = ACTIONS(119),
    [anon_sym_vmovdqu32] = ACTIONS(119),
    [anon_sym_vmovdqa] = ACTIONS(119),
    [anon_sym_vmovdqa32] = ACTIONS(119),
    [anon_sym_vmovdqa64] = ACTIONS(119),
    [anon_sym_vmovq] = ACTIONS(119),
    [anon_sym_vmovups] = ACTIONS(119),
    [anon_sym_vmovd] = ACTIONS(119),
    [anon_sym_vmovsd] = ACTIONS(119),
    [anon_sym_vmulsd] = ACTIONS(119),
    [anon_sym_vpackusdw] = ACTIONS(119),
    [anon_sym_vpaddd] = ACTIONS(119),
    [anon_sym_vpaddb] = ACTIONS(119),
    [anon_sym_vpaddq] = ACTIONS(119),
    [anon_sym_vpaddw] = ACTIONS(119),
    [anon_sym_vpalignr] = ACTIONS(119),
    [anon_sym_vpcmpgtd] = ACTIONS(119),
    [anon_sym_vpextrw] = ACTIONS(119),
    [anon_sym_vpinsrw] = ACTIONS(119),
    [anon_sym_vpinsrd] = ACTIONS(119),
    [anon_sym_vpinsrq] = ACTIONS(119),
    [anon_sym_vpinsrb] = ACTIONS(119),
    [anon_sym_vpmaddubsw] = ACTIONS(119),
    [anon_sym_vpmaddwd] = ACTIONS(119),
    [anon_sym_vpmullw] = ACTIONS(119),
    [anon_sym_vpmuludq] = ACTIONS(119),
    [anon_sym_vpor] = ACTIONS(119),
    [anon_sym_vpshufb] = ACTIONS(119),
    [anon_sym_vpshufd] = ACTIONS(119),
    [anon_sym_vpslldq] = ACTIONS(119),
    [anon_sym_vpslld] = ACTIONS(119),
    [anon_sym_vpsllq] = ACTIONS(119),
    [anon_sym_vpsllw] = ACTIONS(119),
    [anon_sym_vpsrldq] = ACTIONS(119),
    [anon_sym_vpsrld] = ACTIONS(119),
    [anon_sym_vpsrlq] = ACTIONS(119),
    [anon_sym_vpsrlw] = ACTIONS(119),
    [anon_sym_vpsubusw] = ACTIONS(119),
    [anon_sym_vpsubq] = ACTIONS(119),
    [anon_sym_vpsubd] = ACTIONS(119),
    [anon_sym_vpsubw] = ACTIONS(119),
    [anon_sym_vshufps] = ACTIONS(119),
    [anon_sym_vsubsd] = ACTIONS(119),
    [anon_sym_vucomisd] = ACTIONS(119),
    [anon_sym_vucomiss] = ACTIONS(119),
    [anon_sym_vunpckhpd] = ACTIONS(119),
    [anon_sym_vunpckhps] = ACTIONS(119),
    [anon_sym_vunpcklpd] = ACTIONS(119),
    [anon_sym_vunpcklps] = ACTIONS(119),
    [anon_sym_vbroadcastss] = ACTIONS(119),
    [anon_sym_vinsertf128] = ACTIONS(119),
    [anon_sym_vperm2f128] = ACTIONS(119),
    [anon_sym_vzeroall] = ACTIONS(119),
    [anon_sym_vzeroupper] = ACTIONS(119),
    [anon_sym_vshufi32x4] = ACTIONS(119),
    [anon_sym_vshufi64x2] = ACTIONS(119),
    [anon_sym_vpblendmd] = ACTIONS(119),
    [anon_sym_vextracti128] = ACTIONS(119),
    [anon_sym_vextracti32x4] = ACTIONS(119),
    [anon_sym_vinserti128] = ACTIONS(119),
    [anon_sym_vinserti32x4] = ACTIONS(119),
    [anon_sym_vinserti64x4] = ACTIONS(119),
    [anon_sym_vpblendd] = ACTIONS(119),
    [anon_sym_vpbroadcastq] = ACTIONS(119),
    [anon_sym_vpbroadcastd] = ACTIONS(119),
    [anon_sym_vbroadcasti128] = ACTIONS(119),
    [anon_sym_vbroadcasti32x4] = ACTIONS(119),
    [anon_sym_vperm2i128] = ACTIONS(119),
    [anon_sym_vpermd] = ACTIONS(119),
    [anon_sym_vpermq] = ACTIONS(119),
    [anon_sym_vpermt2d] = ACTIONS(119),
    [anon_sym_vpermi2d] = ACTIONS(119),
    [anon_sym_tzcnt] = ACTIONS(119),
    [anon_sym_rorx] = ACTIONS(119),
    [anon_sym_psubd] = ACTIONS(119),
    [anon_sym_pmaddwd] = ACTIONS(119),
    [anon_sym_pxor] = ACTIONS(119),
    [anon_sym_psrad] = ACTIONS(119),
    [anon_sym_pslld] = ACTIONS(119),
    [anon_sym_pcmpgtd] = ACTIONS(119),
    [anon_sym_pcmpeqd] = ACTIONS(119),
    [anon_sym_por] = ACTIONS(119),
    [anon_sym_paddw] = ACTIONS(119),
    [anon_sym_psubusw] = ACTIONS(119),
    [anon_sym_pcmpeqb] = ACTIONS(119),
    [anon_sym_psubusb] = ACTIONS(119),
    [anon_sym_psrld] = ACTIONS(119),
    [anon_sym_psrlw] = ACTIONS(119),
    [anon_sym_psllq] = ACTIONS(119),
    [anon_sym_paddd] = ACTIONS(119),
    [anon_sym_psrlq] = ACTIONS(119),
    [anon_sym_psubb] = ACTIONS(119),
    [anon_sym_maxss] = ACTIONS(119),
    [anon_sym_pmovmskb] = ACTIONS(119),
    [anon_sym_pinsrw] = ACTIONS(119),
    [anon_sym_minss] = ACTIONS(119),
    [anon_sym_prefetcht1] = ACTIONS(119),
    [anon_sym_prefetcht0] = ACTIONS(119),
    [anon_sym_pextrw] = ACTIONS(119),
    [anon_sym_ucomiss] = ACTIONS(119),
    [anon_sym_shufps] = ACTIONS(119),
    [anon_sym_addsd] = ACTIONS(119),
    [anon_sym_paddq] = ACTIONS(119),
    [anon_sym_psubq] = ACTIONS(119),
    [anon_sym_pshuflw] = ACTIONS(119),
    [anon_sym_pmuludq] = ACTIONS(119),
    [anon_sym_pshufd] = ACTIONS(119),
    [anon_sym_minsd] = ACTIONS(119),
    [anon_sym_pshufhw] = ACTIONS(119),
    [anon_sym_mfence] = ACTIONS(119),
    [anon_sym_maxsd] = ACTIONS(119),
    [anon_sym_ucomisd] = ACTIONS(119),
    [anon_sym_shufpd] = ACTIONS(119),
    [anon_sym_pslldq] = ACTIONS(119),
    [anon_sym_unpckhpd] = ACTIONS(119),
    [anon_sym_psrldq] = ACTIONS(119),
    [anon_sym_palignr] = ACTIONS(119),
    [anon_sym_pshufb] = ACTIONS(119),
    [anon_sym_pmaddubsw] = ACTIONS(119),
    [anon_sym_pinsrb] = ACTIONS(119),
    [anon_sym_pblendw] = ACTIONS(119),
    [anon_sym_pextrq] = ACTIONS(119),
    [anon_sym_blendvps] = ACTIONS(119),
    [anon_sym_pextrb] = ACTIONS(119),
    [anon_sym_pinsrd] = ACTIONS(119),
    [anon_sym_femms] = ACTIONS(119),
    [anon_sym_callq] = ACTIONS(119),
    [anon_sym_ja] = ACTIONS(119),
    [anon_sym_jae] = ACTIONS(119),
    [anon_sym_jb] = ACTIONS(119),
    [anon_sym_jbe] = ACTIONS(119),
    [anon_sym_je] = ACTIONS(119),
    [anon_sym_jg] = ACTIONS(119),
    [anon_sym_jge] = ACTIONS(119),
    [anon_sym_jl] = ACTIONS(119),
    [anon_sym_jle] = ACTIONS(119),
    [anon_sym_jmp] = ACTIONS(119),
    [anon_sym_jmpq] = ACTIONS(119),
    [anon_sym_jne] = ACTIONS(119),
    [anon_sym_jno] = ACTIONS(119),
    [anon_sym_jns] = ACTIONS(119),
    [anon_sym_jo] = ACTIONS(119),
    [anon_sym_jp] = ACTIONS(119),
    [anon_sym_jrcxz] = ACTIONS(119),
    [anon_sym_js] = ACTIONS(119),
    [anon_sym_notrack] = ACTIONS(119),
  },
  [9] = {
    [aux_sym__machine_code_repeat1] = STATE(6),
    [sym__byte] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(123),
    [aux_sym_comment_token2] = ACTIONS(123),
    [sym__line_break] = ACTIONS(125),
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
    [anon_sym_callq] = ACTIONS(123),
    [anon_sym_ja] = ACTIONS(123),
    [anon_sym_jae] = ACTIONS(123),
    [anon_sym_jb] = ACTIONS(123),
    [anon_sym_jbe] = ACTIONS(123),
    [anon_sym_je] = ACTIONS(123),
    [anon_sym_jg] = ACTIONS(123),
    [anon_sym_jge] = ACTIONS(123),
    [anon_sym_jl] = ACTIONS(123),
    [anon_sym_jle] = ACTIONS(123),
    [anon_sym_jmp] = ACTIONS(123),
    [anon_sym_jmpq] = ACTIONS(123),
    [anon_sym_jne] = ACTIONS(123),
    [anon_sym_jno] = ACTIONS(123),
    [anon_sym_jns] = ACTIONS(123),
    [anon_sym_jo] = ACTIONS(123),
    [anon_sym_jp] = ACTIONS(123),
    [anon_sym_jrcxz] = ACTIONS(123),
    [anon_sym_js] = ACTIONS(123),
    [anon_sym_notrack] = ACTIONS(123),
  },
  [10] = {
    [aux_sym__machine_code_repeat1] = STATE(10),
    [sym__byte] = ACTIONS(127),
    [aux_sym_comment_token1] = ACTIONS(130),
    [aux_sym_comment_token2] = ACTIONS(130),
    [sym__line_break] = ACTIONS(132),
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
    [anon_sym_callq] = ACTIONS(130),
    [anon_sym_ja] = ACTIONS(130),
    [anon_sym_jae] = ACTIONS(130),
    [anon_sym_jb] = ACTIONS(130),
    [anon_sym_jbe] = ACTIONS(130),
    [anon_sym_je] = ACTIONS(130),
    [anon_sym_jg] = ACTIONS(130),
    [anon_sym_jge] = ACTIONS(130),
    [anon_sym_jl] = ACTIONS(130),
    [anon_sym_jle] = ACTIONS(130),
    [anon_sym_jmp] = ACTIONS(130),
    [anon_sym_jmpq] = ACTIONS(130),
    [anon_sym_jne] = ACTIONS(130),
    [anon_sym_jno] = ACTIONS(130),
    [anon_sym_jns] = ACTIONS(130),
    [anon_sym_jo] = ACTIONS(130),
    [anon_sym_jp] = ACTIONS(130),
    [anon_sym_jrcxz] = ACTIONS(130),
    [anon_sym_js] = ACTIONS(130),
    [anon_sym_notrack] = ACTIONS(130),
  },
  [11] = {
    [sym_operand] = STATE(102),
    [sym_immediateOperand] = STATE(105),
    [sym_registerOperand] = STATE(105),
    [sym_segmentRegisterOperand] = STATE(80),
    [sym_generalRegisterOperand] = STATE(95),
    [sym_generalRegister64Bits] = STATE(94),
    [sym_generalRegister32Bits] = STATE(94),
    [sym_generalRegister16Bits] = STATE(94),
    [sym_generalRegister8Bits] = STATE(94),
    [sym_memoryOperand] = STATE(105),
    [sym_memoryScalaredIndexedOperand] = STATE(100),
    [sym_memorySegmentBaseOperand] = STATE(100),
    [sym_memoryIndirectOperand] = STATE(100),
    [sym_offset] = STATE(296),
    [sym_memoryAbsoluteOperand] = STATE(100),
    [sym_someOpcode] = STATE(105),
    [sym_controlRegisterOperand] = STATE(95),
    [sym_instructionRegisterOperand] = STATE(95),
    [sym_floatRegisterOperand] = STATE(95),
    [sym_otherRegisterOperand] = STATE(95),
    [aux_sym_data_repeat1] = STATE(13),
    [aux_sym_operand_repeat1] = STATE(67),
    [aux_sym_comment_token1] = ACTIONS(134),
    [aux_sym_comment_token2] = ACTIONS(134),
    [sym__line_break] = ACTIONS(136),
    [anon_sym_f] = ACTIONS(138),
    [aux_sym_operand_token1] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [anon_sym_PERCENTss] = ACTIONS(146),
    [anon_sym_PERCENTcs] = ACTIONS(146),
    [anon_sym_PERCENTds] = ACTIONS(146),
    [anon_sym_PERCENTes] = ACTIONS(146),
    [anon_sym_PERCENTfs] = ACTIONS(146),
    [anon_sym_PERCENTgs] = ACTIONS(146),
    [anon_sym_PERCENTrax] = ACTIONS(148),
    [anon_sym_PERCENTrbx] = ACTIONS(148),
    [anon_sym_PERCENTrcx] = ACTIONS(148),
    [anon_sym_PERCENTrdx] = ACTIONS(148),
    [anon_sym_PERCENTrsi] = ACTIONS(148),
    [anon_sym_PERCENTrdi] = ACTIONS(148),
    [anon_sym_PERCENTrbp] = ACTIONS(148),
    [anon_sym_PERCENTrsp] = ACTIONS(148),
    [anon_sym_PERCENTr8] = ACTIONS(148),
    [anon_sym_PERCENTr9] = ACTIONS(148),
    [anon_sym_PERCENTr10] = ACTIONS(148),
    [anon_sym_PERCENTr11] = ACTIONS(148),
    [anon_sym_PERCENTr12] = ACTIONS(148),
    [anon_sym_PERCENTr13] = ACTIONS(148),
    [anon_sym_PERCENTr14] = ACTIONS(148),
    [anon_sym_PERCENTr15] = ACTIONS(148),
    [anon_sym_PERCENTeax] = ACTIONS(150),
    [anon_sym_PERCENTecx] = ACTIONS(150),
    [anon_sym_PERCENTedx] = ACTIONS(150),
    [anon_sym_PERCENTebx] = ACTIONS(150),
    [anon_sym_PERCENTesi] = ACTIONS(150),
    [anon_sym_PERCENTedi] = ACTIONS(150),
    [anon_sym_PERCENTebp] = ACTIONS(150),
    [anon_sym_PERCENTesp] = ACTIONS(150),
    [anon_sym_PERCENTr8d] = ACTIONS(150),
    [anon_sym_PERCENTr9d] = ACTIONS(150),
    [anon_sym_PERCENTr10d] = ACTIONS(150),
    [anon_sym_PERCENTr11d] = ACTIONS(150),
    [anon_sym_PERCENTr12d] = ACTIONS(150),
    [anon_sym_PERCENTr13d] = ACTIONS(150),
    [anon_sym_PERCENTr14d] = ACTIONS(150),
    [anon_sym_PERCENTr15d] = ACTIONS(150),
    [anon_sym_PERCENTax] = ACTIONS(152),
    [anon_sym_PERCENTcx] = ACTIONS(152),
    [anon_sym_PERCENTdx] = ACTIONS(152),
    [anon_sym_PERCENTbx] = ACTIONS(152),
    [anon_sym_PERCENTsi] = ACTIONS(152),
    [anon_sym_PERCENTdi] = ACTIONS(152),
    [anon_sym_PERCENTsp] = ACTIONS(152),
    [anon_sym_PERCENTbp] = ACTIONS(152),
    [anon_sym_PERCENTr8w] = ACTIONS(152),
    [anon_sym_PERCENTr9w] = ACTIONS(152),
    [anon_sym_PERCENTr10w] = ACTIONS(152),
    [anon_sym_PERCENTr11w] = ACTIONS(152),
    [anon_sym_PERCENTr12w] = ACTIONS(152),
    [anon_sym_PERCENTr13w] = ACTIONS(152),
    [anon_sym_PERCENTr14w] = ACTIONS(152),
    [anon_sym_PERCENTr15w] = ACTIONS(152),
    [anon_sym_PERCENTal] = ACTIONS(154),
    [anon_sym_PERCENTcl] = ACTIONS(154),
    [anon_sym_PERCENTdl] = ACTIONS(154),
    [anon_sym_PERCENTbl] = ACTIONS(154),
    [anon_sym_PERCENTsil] = ACTIONS(154),
    [anon_sym_PERCENTdil] = ACTIONS(154),
    [anon_sym_PERCENTspl] = ACTIONS(154),
    [anon_sym_PERCENTbpl] = ACTIONS(154),
    [anon_sym_PERCENTr8b] = ACTIONS(154),
    [anon_sym_PERCENTr9b] = ACTIONS(154),
    [anon_sym_PERCENTr10b] = ACTIONS(154),
    [anon_sym_PERCENTr11b] = ACTIONS(154),
    [anon_sym_PERCENTr12b] = ACTIONS(154),
    [anon_sym_PERCENTr13b] = ACTIONS(154),
    [anon_sym_PERCENTr14b] = ACTIONS(154),
    [anon_sym_PERCENTr15b] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_movsq] = ACTIONS(160),
    [anon_sym_cmpsb] = ACTIONS(160),
    [anon_sym_cmpxchg] = ACTIONS(160),
    [anon_sym_movsl] = ACTIONS(160),
    [anon_sym_PERCENTcr0] = ACTIONS(162),
    [anon_sym_PERCENTcr2] = ACTIONS(162),
    [anon_sym_PERCENTcr3] = ACTIONS(162),
    [anon_sym_PERCENTcr4] = ACTIONS(162),
    [anon_sym_PERCENTrip] = ACTIONS(164),
    [anon_sym_PERCENTeip] = ACTIONS(164),
    [anon_sym_PERCENTip] = ACTIONS(164),
    [anon_sym_PERCENTst] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(168),
  },
  [12] = {
    [sym_operand] = STATE(108),
    [sym_immediateOperand] = STATE(105),
    [sym_registerOperand] = STATE(105),
    [sym_segmentRegisterOperand] = STATE(80),
    [sym_generalRegisterOperand] = STATE(95),
    [sym_generalRegister64Bits] = STATE(94),
    [sym_generalRegister32Bits] = STATE(94),
    [sym_generalRegister16Bits] = STATE(94),
    [sym_generalRegister8Bits] = STATE(94),
    [sym_memoryOperand] = STATE(105),
    [sym_memoryScalaredIndexedOperand] = STATE(100),
    [sym_memorySegmentBaseOperand] = STATE(100),
    [sym_memoryIndirectOperand] = STATE(100),
    [sym_offset] = STATE(296),
    [sym_memoryAbsoluteOperand] = STATE(100),
    [sym_someOpcode] = STATE(105),
    [sym_controlRegisterOperand] = STATE(95),
    [sym_instructionRegisterOperand] = STATE(95),
    [sym_floatRegisterOperand] = STATE(95),
    [sym_otherRegisterOperand] = STATE(95),
    [aux_sym_data_repeat1] = STATE(11),
    [aux_sym_operand_repeat1] = STATE(67),
    [aux_sym_comment_token1] = ACTIONS(170),
    [aux_sym_comment_token2] = ACTIONS(170),
    [sym__line_break] = ACTIONS(172),
    [anon_sym_f] = ACTIONS(138),
    [aux_sym_operand_token1] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [anon_sym_PERCENTss] = ACTIONS(146),
    [anon_sym_PERCENTcs] = ACTIONS(146),
    [anon_sym_PERCENTds] = ACTIONS(146),
    [anon_sym_PERCENTes] = ACTIONS(146),
    [anon_sym_PERCENTfs] = ACTIONS(146),
    [anon_sym_PERCENTgs] = ACTIONS(146),
    [anon_sym_PERCENTrax] = ACTIONS(148),
    [anon_sym_PERCENTrbx] = ACTIONS(148),
    [anon_sym_PERCENTrcx] = ACTIONS(148),
    [anon_sym_PERCENTrdx] = ACTIONS(148),
    [anon_sym_PERCENTrsi] = ACTIONS(148),
    [anon_sym_PERCENTrdi] = ACTIONS(148),
    [anon_sym_PERCENTrbp] = ACTIONS(148),
    [anon_sym_PERCENTrsp] = ACTIONS(148),
    [anon_sym_PERCENTr8] = ACTIONS(148),
    [anon_sym_PERCENTr9] = ACTIONS(148),
    [anon_sym_PERCENTr10] = ACTIONS(148),
    [anon_sym_PERCENTr11] = ACTIONS(148),
    [anon_sym_PERCENTr12] = ACTIONS(148),
    [anon_sym_PERCENTr13] = ACTIONS(148),
    [anon_sym_PERCENTr14] = ACTIONS(148),
    [anon_sym_PERCENTr15] = ACTIONS(148),
    [anon_sym_PERCENTeax] = ACTIONS(150),
    [anon_sym_PERCENTecx] = ACTIONS(150),
    [anon_sym_PERCENTedx] = ACTIONS(150),
    [anon_sym_PERCENTebx] = ACTIONS(150),
    [anon_sym_PERCENTesi] = ACTIONS(150),
    [anon_sym_PERCENTedi] = ACTIONS(150),
    [anon_sym_PERCENTebp] = ACTIONS(150),
    [anon_sym_PERCENTesp] = ACTIONS(150),
    [anon_sym_PERCENTr8d] = ACTIONS(150),
    [anon_sym_PERCENTr9d] = ACTIONS(150),
    [anon_sym_PERCENTr10d] = ACTIONS(150),
    [anon_sym_PERCENTr11d] = ACTIONS(150),
    [anon_sym_PERCENTr12d] = ACTIONS(150),
    [anon_sym_PERCENTr13d] = ACTIONS(150),
    [anon_sym_PERCENTr14d] = ACTIONS(150),
    [anon_sym_PERCENTr15d] = ACTIONS(150),
    [anon_sym_PERCENTax] = ACTIONS(152),
    [anon_sym_PERCENTcx] = ACTIONS(152),
    [anon_sym_PERCENTdx] = ACTIONS(152),
    [anon_sym_PERCENTbx] = ACTIONS(152),
    [anon_sym_PERCENTsi] = ACTIONS(152),
    [anon_sym_PERCENTdi] = ACTIONS(152),
    [anon_sym_PERCENTsp] = ACTIONS(152),
    [anon_sym_PERCENTbp] = ACTIONS(152),
    [anon_sym_PERCENTr8w] = ACTIONS(152),
    [anon_sym_PERCENTr9w] = ACTIONS(152),
    [anon_sym_PERCENTr10w] = ACTIONS(152),
    [anon_sym_PERCENTr11w] = ACTIONS(152),
    [anon_sym_PERCENTr12w] = ACTIONS(152),
    [anon_sym_PERCENTr13w] = ACTIONS(152),
    [anon_sym_PERCENTr14w] = ACTIONS(152),
    [anon_sym_PERCENTr15w] = ACTIONS(152),
    [anon_sym_PERCENTal] = ACTIONS(154),
    [anon_sym_PERCENTcl] = ACTIONS(154),
    [anon_sym_PERCENTdl] = ACTIONS(154),
    [anon_sym_PERCENTbl] = ACTIONS(154),
    [anon_sym_PERCENTsil] = ACTIONS(154),
    [anon_sym_PERCENTdil] = ACTIONS(154),
    [anon_sym_PERCENTspl] = ACTIONS(154),
    [anon_sym_PERCENTbpl] = ACTIONS(154),
    [anon_sym_PERCENTr8b] = ACTIONS(154),
    [anon_sym_PERCENTr9b] = ACTIONS(154),
    [anon_sym_PERCENTr10b] = ACTIONS(154),
    [anon_sym_PERCENTr11b] = ACTIONS(154),
    [anon_sym_PERCENTr12b] = ACTIONS(154),
    [anon_sym_PERCENTr13b] = ACTIONS(154),
    [anon_sym_PERCENTr14b] = ACTIONS(154),
    [anon_sym_PERCENTr15b] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_movsq] = ACTIONS(160),
    [anon_sym_cmpsb] = ACTIONS(160),
    [anon_sym_cmpxchg] = ACTIONS(160),
    [anon_sym_movsl] = ACTIONS(160),
    [anon_sym_PERCENTcr0] = ACTIONS(162),
    [anon_sym_PERCENTcr2] = ACTIONS(162),
    [anon_sym_PERCENTcr3] = ACTIONS(162),
    [anon_sym_PERCENTcr4] = ACTIONS(162),
    [anon_sym_PERCENTrip] = ACTIONS(164),
    [anon_sym_PERCENTeip] = ACTIONS(164),
    [anon_sym_PERCENTip] = ACTIONS(164),
    [anon_sym_PERCENTst] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(168),
  },
  [13] = {
    [sym_operand] = STATE(228),
    [sym_immediateOperand] = STATE(191),
    [sym_registerOperand] = STATE(191),
    [sym_segmentRegisterOperand] = STATE(182),
    [sym_generalRegisterOperand] = STATE(177),
    [sym_generalRegister64Bits] = STATE(178),
    [sym_generalRegister32Bits] = STATE(178),
    [sym_generalRegister16Bits] = STATE(178),
    [sym_generalRegister8Bits] = STATE(178),
    [sym_memoryOperand] = STATE(191),
    [sym_memoryScalaredIndexedOperand] = STATE(194),
    [sym_memorySegmentBaseOperand] = STATE(194),
    [sym_memoryIndirectOperand] = STATE(194),
    [sym_offset] = STATE(283),
    [sym_memoryAbsoluteOperand] = STATE(194),
    [sym_someOpcode] = STATE(191),
    [sym_controlRegisterOperand] = STATE(177),
    [sym_instructionRegisterOperand] = STATE(177),
    [sym_floatRegisterOperand] = STATE(177),
    [sym_otherRegisterOperand] = STATE(177),
    [aux_sym_data_repeat1] = STATE(13),
    [aux_sym_operand_repeat1] = STATE(101),
    [aux_sym_comment_token1] = ACTIONS(174),
    [aux_sym_comment_token2] = ACTIONS(174),
    [sym__line_break] = ACTIONS(176),
    [anon_sym_f] = ACTIONS(178),
    [aux_sym_operand_token1] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(184),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_PERCENTss] = ACTIONS(190),
    [anon_sym_PERCENTcs] = ACTIONS(190),
    [anon_sym_PERCENTds] = ACTIONS(190),
    [anon_sym_PERCENTes] = ACTIONS(190),
    [anon_sym_PERCENTfs] = ACTIONS(190),
    [anon_sym_PERCENTgs] = ACTIONS(190),
    [anon_sym_PERCENTrax] = ACTIONS(193),
    [anon_sym_PERCENTrbx] = ACTIONS(193),
    [anon_sym_PERCENTrcx] = ACTIONS(193),
    [anon_sym_PERCENTrdx] = ACTIONS(193),
    [anon_sym_PERCENTrsi] = ACTIONS(193),
    [anon_sym_PERCENTrdi] = ACTIONS(193),
    [anon_sym_PERCENTrbp] = ACTIONS(193),
    [anon_sym_PERCENTrsp] = ACTIONS(193),
    [anon_sym_PERCENTr8] = ACTIONS(193),
    [anon_sym_PERCENTr9] = ACTIONS(193),
    [anon_sym_PERCENTr10] = ACTIONS(193),
    [anon_sym_PERCENTr11] = ACTIONS(193),
    [anon_sym_PERCENTr12] = ACTIONS(193),
    [anon_sym_PERCENTr13] = ACTIONS(193),
    [anon_sym_PERCENTr14] = ACTIONS(193),
    [anon_sym_PERCENTr15] = ACTIONS(193),
    [anon_sym_PERCENTeax] = ACTIONS(196),
    [anon_sym_PERCENTecx] = ACTIONS(196),
    [anon_sym_PERCENTedx] = ACTIONS(196),
    [anon_sym_PERCENTebx] = ACTIONS(196),
    [anon_sym_PERCENTesi] = ACTIONS(196),
    [anon_sym_PERCENTedi] = ACTIONS(196),
    [anon_sym_PERCENTebp] = ACTIONS(196),
    [anon_sym_PERCENTesp] = ACTIONS(196),
    [anon_sym_PERCENTr8d] = ACTIONS(196),
    [anon_sym_PERCENTr9d] = ACTIONS(196),
    [anon_sym_PERCENTr10d] = ACTIONS(196),
    [anon_sym_PERCENTr11d] = ACTIONS(196),
    [anon_sym_PERCENTr12d] = ACTIONS(196),
    [anon_sym_PERCENTr13d] = ACTIONS(196),
    [anon_sym_PERCENTr14d] = ACTIONS(196),
    [anon_sym_PERCENTr15d] = ACTIONS(196),
    [anon_sym_PERCENTax] = ACTIONS(199),
    [anon_sym_PERCENTcx] = ACTIONS(199),
    [anon_sym_PERCENTdx] = ACTIONS(199),
    [anon_sym_PERCENTbx] = ACTIONS(199),
    [anon_sym_PERCENTsi] = ACTIONS(199),
    [anon_sym_PERCENTdi] = ACTIONS(199),
    [anon_sym_PERCENTsp] = ACTIONS(199),
    [anon_sym_PERCENTbp] = ACTIONS(199),
    [anon_sym_PERCENTr8w] = ACTIONS(199),
    [anon_sym_PERCENTr9w] = ACTIONS(199),
    [anon_sym_PERCENTr10w] = ACTIONS(199),
    [anon_sym_PERCENTr11w] = ACTIONS(199),
    [anon_sym_PERCENTr12w] = ACTIONS(199),
    [anon_sym_PERCENTr13w] = ACTIONS(199),
    [anon_sym_PERCENTr14w] = ACTIONS(199),
    [anon_sym_PERCENTr15w] = ACTIONS(199),
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
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_movsq] = ACTIONS(211),
    [anon_sym_cmpsb] = ACTIONS(211),
    [anon_sym_cmpxchg] = ACTIONS(211),
    [anon_sym_movsl] = ACTIONS(211),
    [anon_sym_PERCENTcr0] = ACTIONS(214),
    [anon_sym_PERCENTcr2] = ACTIONS(214),
    [anon_sym_PERCENTcr3] = ACTIONS(214),
    [anon_sym_PERCENTcr4] = ACTIONS(214),
    [anon_sym_PERCENTrip] = ACTIONS(217),
    [anon_sym_PERCENTeip] = ACTIONS(217),
    [anon_sym_PERCENTip] = ACTIONS(217),
    [anon_sym_PERCENTst] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(223),
  },
  [14] = {
    [sym_registerOperand] = STATE(166),
    [sym_segmentRegisterOperand] = STATE(177),
    [sym_generalRegisterOperand] = STATE(177),
    [sym_generalRegister64Bits] = STATE(178),
    [sym_generalRegister32Bits] = STATE(178),
    [sym_generalRegister16Bits] = STATE(178),
    [sym_generalRegister8Bits] = STATE(178),
    [sym_controlRegisterOperand] = STATE(177),
    [sym_instructionRegisterOperand] = STATE(177),
    [sym_floatRegisterOperand] = STATE(177),
    [sym_otherRegisterOperand] = STATE(177),
    [aux_sym_operand_repeat1] = STATE(16),
    [aux_sym_operand_token1] = ACTIONS(226),
    [anon_sym_PERCENTss] = ACTIONS(228),
    [anon_sym_PERCENTcs] = ACTIONS(228),
    [anon_sym_PERCENTds] = ACTIONS(228),
    [anon_sym_PERCENTes] = ACTIONS(230),
    [anon_sym_PERCENTfs] = ACTIONS(228),
    [anon_sym_PERCENTgs] = ACTIONS(228),
    [anon_sym_PERCENTrax] = ACTIONS(232),
    [anon_sym_PERCENTrbx] = ACTIONS(232),
    [anon_sym_PERCENTrcx] = ACTIONS(232),
    [anon_sym_PERCENTrdx] = ACTIONS(232),
    [anon_sym_PERCENTrsi] = ACTIONS(232),
    [anon_sym_PERCENTrdi] = ACTIONS(232),
    [anon_sym_PERCENTrbp] = ACTIONS(232),
    [anon_sym_PERCENTrsp] = ACTIONS(232),
    [anon_sym_PERCENTr8] = ACTIONS(234),
    [anon_sym_PERCENTr9] = ACTIONS(234),
    [anon_sym_PERCENTr10] = ACTIONS(234),
    [anon_sym_PERCENTr11] = ACTIONS(234),
    [anon_sym_PERCENTr12] = ACTIONS(234),
    [anon_sym_PERCENTr13] = ACTIONS(234),
    [anon_sym_PERCENTr14] = ACTIONS(234),
    [anon_sym_PERCENTr15] = ACTIONS(234),
    [anon_sym_PERCENTeax] = ACTIONS(236),
    [anon_sym_PERCENTecx] = ACTIONS(236),
    [anon_sym_PERCENTedx] = ACTIONS(236),
    [anon_sym_PERCENTebx] = ACTIONS(236),
    [anon_sym_PERCENTesi] = ACTIONS(236),
    [anon_sym_PERCENTedi] = ACTIONS(236),
    [anon_sym_PERCENTebp] = ACTIONS(236),
    [anon_sym_PERCENTesp] = ACTIONS(236),
    [anon_sym_PERCENTr8d] = ACTIONS(236),
    [anon_sym_PERCENTr9d] = ACTIONS(236),
    [anon_sym_PERCENTr10d] = ACTIONS(236),
    [anon_sym_PERCENTr11d] = ACTIONS(236),
    [anon_sym_PERCENTr12d] = ACTIONS(236),
    [anon_sym_PERCENTr13d] = ACTIONS(236),
    [anon_sym_PERCENTr14d] = ACTIONS(236),
    [anon_sym_PERCENTr15d] = ACTIONS(236),
    [anon_sym_PERCENTax] = ACTIONS(238),
    [anon_sym_PERCENTcx] = ACTIONS(238),
    [anon_sym_PERCENTdx] = ACTIONS(238),
    [anon_sym_PERCENTbx] = ACTIONS(238),
    [anon_sym_PERCENTsi] = ACTIONS(240),
    [anon_sym_PERCENTdi] = ACTIONS(240),
    [anon_sym_PERCENTsp] = ACTIONS(240),
    [anon_sym_PERCENTbp] = ACTIONS(240),
    [anon_sym_PERCENTr8w] = ACTIONS(238),
    [anon_sym_PERCENTr9w] = ACTIONS(238),
    [anon_sym_PERCENTr10w] = ACTIONS(238),
    [anon_sym_PERCENTr11w] = ACTIONS(238),
    [anon_sym_PERCENTr12w] = ACTIONS(238),
    [anon_sym_PERCENTr13w] = ACTIONS(238),
    [anon_sym_PERCENTr14w] = ACTIONS(238),
    [anon_sym_PERCENTr15w] = ACTIONS(238),
    [anon_sym_PERCENTal] = ACTIONS(242),
    [anon_sym_PERCENTcl] = ACTIONS(242),
    [anon_sym_PERCENTdl] = ACTIONS(242),
    [anon_sym_PERCENTbl] = ACTIONS(242),
    [anon_sym_PERCENTsil] = ACTIONS(242),
    [anon_sym_PERCENTdil] = ACTIONS(242),
    [anon_sym_PERCENTspl] = ACTIONS(242),
    [anon_sym_PERCENTbpl] = ACTIONS(242),
    [anon_sym_PERCENTr8b] = ACTIONS(242),
    [anon_sym_PERCENTr9b] = ACTIONS(242),
    [anon_sym_PERCENTr10b] = ACTIONS(242),
    [anon_sym_PERCENTr11b] = ACTIONS(242),
    [anon_sym_PERCENTr12b] = ACTIONS(242),
    [anon_sym_PERCENTr13b] = ACTIONS(242),
    [anon_sym_PERCENTr14b] = ACTIONS(242),
    [anon_sym_PERCENTr15b] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(246),
    [anon_sym_PERCENTcr2] = ACTIONS(246),
    [anon_sym_PERCENTcr3] = ACTIONS(246),
    [anon_sym_PERCENTcr4] = ACTIONS(246),
    [anon_sym_PERCENTrip] = ACTIONS(248),
    [anon_sym_PERCENTeip] = ACTIONS(248),
    [anon_sym_PERCENTip] = ACTIONS(248),
    [anon_sym_PERCENTst] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(252),
  },
  [15] = {
    [sym_registerOperand] = STATE(83),
    [sym_segmentRegisterOperand] = STATE(95),
    [sym_generalRegisterOperand] = STATE(95),
    [sym_generalRegister64Bits] = STATE(94),
    [sym_generalRegister32Bits] = STATE(94),
    [sym_generalRegister16Bits] = STATE(94),
    [sym_generalRegister8Bits] = STATE(94),
    [sym_controlRegisterOperand] = STATE(95),
    [sym_instructionRegisterOperand] = STATE(95),
    [sym_floatRegisterOperand] = STATE(95),
    [sym_otherRegisterOperand] = STATE(95),
    [aux_sym_operand_repeat1] = STATE(17),
    [aux_sym_operand_token1] = ACTIONS(254),
    [anon_sym_PERCENTss] = ACTIONS(256),
    [anon_sym_PERCENTcs] = ACTIONS(256),
    [anon_sym_PERCENTds] = ACTIONS(256),
    [anon_sym_PERCENTes] = ACTIONS(146),
    [anon_sym_PERCENTfs] = ACTIONS(256),
    [anon_sym_PERCENTgs] = ACTIONS(256),
    [anon_sym_PERCENTrax] = ACTIONS(258),
    [anon_sym_PERCENTrbx] = ACTIONS(258),
    [anon_sym_PERCENTrcx] = ACTIONS(258),
    [anon_sym_PERCENTrdx] = ACTIONS(258),
    [anon_sym_PERCENTrsi] = ACTIONS(258),
    [anon_sym_PERCENTrdi] = ACTIONS(258),
    [anon_sym_PERCENTrbp] = ACTIONS(258),
    [anon_sym_PERCENTrsp] = ACTIONS(258),
    [anon_sym_PERCENTr8] = ACTIONS(148),
    [anon_sym_PERCENTr9] = ACTIONS(148),
    [anon_sym_PERCENTr10] = ACTIONS(148),
    [anon_sym_PERCENTr11] = ACTIONS(148),
    [anon_sym_PERCENTr12] = ACTIONS(148),
    [anon_sym_PERCENTr13] = ACTIONS(148),
    [anon_sym_PERCENTr14] = ACTIONS(148),
    [anon_sym_PERCENTr15] = ACTIONS(148),
    [anon_sym_PERCENTeax] = ACTIONS(260),
    [anon_sym_PERCENTecx] = ACTIONS(260),
    [anon_sym_PERCENTedx] = ACTIONS(260),
    [anon_sym_PERCENTebx] = ACTIONS(260),
    [anon_sym_PERCENTesi] = ACTIONS(260),
    [anon_sym_PERCENTedi] = ACTIONS(260),
    [anon_sym_PERCENTebp] = ACTIONS(260),
    [anon_sym_PERCENTesp] = ACTIONS(260),
    [anon_sym_PERCENTr8d] = ACTIONS(260),
    [anon_sym_PERCENTr9d] = ACTIONS(260),
    [anon_sym_PERCENTr10d] = ACTIONS(260),
    [anon_sym_PERCENTr11d] = ACTIONS(260),
    [anon_sym_PERCENTr12d] = ACTIONS(260),
    [anon_sym_PERCENTr13d] = ACTIONS(260),
    [anon_sym_PERCENTr14d] = ACTIONS(260),
    [anon_sym_PERCENTr15d] = ACTIONS(260),
    [anon_sym_PERCENTax] = ACTIONS(262),
    [anon_sym_PERCENTcx] = ACTIONS(262),
    [anon_sym_PERCENTdx] = ACTIONS(262),
    [anon_sym_PERCENTbx] = ACTIONS(262),
    [anon_sym_PERCENTsi] = ACTIONS(152),
    [anon_sym_PERCENTdi] = ACTIONS(152),
    [anon_sym_PERCENTsp] = ACTIONS(152),
    [anon_sym_PERCENTbp] = ACTIONS(152),
    [anon_sym_PERCENTr8w] = ACTIONS(262),
    [anon_sym_PERCENTr9w] = ACTIONS(262),
    [anon_sym_PERCENTr10w] = ACTIONS(262),
    [anon_sym_PERCENTr11w] = ACTIONS(262),
    [anon_sym_PERCENTr12w] = ACTIONS(262),
    [anon_sym_PERCENTr13w] = ACTIONS(262),
    [anon_sym_PERCENTr14w] = ACTIONS(262),
    [anon_sym_PERCENTr15w] = ACTIONS(262),
    [anon_sym_PERCENTal] = ACTIONS(264),
    [anon_sym_PERCENTcl] = ACTIONS(264),
    [anon_sym_PERCENTdl] = ACTIONS(264),
    [anon_sym_PERCENTbl] = ACTIONS(264),
    [anon_sym_PERCENTsil] = ACTIONS(264),
    [anon_sym_PERCENTdil] = ACTIONS(264),
    [anon_sym_PERCENTspl] = ACTIONS(264),
    [anon_sym_PERCENTbpl] = ACTIONS(264),
    [anon_sym_PERCENTr8b] = ACTIONS(264),
    [anon_sym_PERCENTr9b] = ACTIONS(264),
    [anon_sym_PERCENTr10b] = ACTIONS(264),
    [anon_sym_PERCENTr11b] = ACTIONS(264),
    [anon_sym_PERCENTr12b] = ACTIONS(264),
    [anon_sym_PERCENTr13b] = ACTIONS(264),
    [anon_sym_PERCENTr14b] = ACTIONS(264),
    [anon_sym_PERCENTr15b] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_PERCENTcr0] = ACTIONS(268),
    [anon_sym_PERCENTcr2] = ACTIONS(268),
    [anon_sym_PERCENTcr3] = ACTIONS(268),
    [anon_sym_PERCENTcr4] = ACTIONS(268),
    [anon_sym_PERCENTrip] = ACTIONS(270),
    [anon_sym_PERCENTeip] = ACTIONS(270),
    [anon_sym_PERCENTip] = ACTIONS(270),
    [anon_sym_PERCENTst] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(168),
  },
  [16] = {
    [sym_registerOperand] = STATE(174),
    [sym_segmentRegisterOperand] = STATE(177),
    [sym_generalRegisterOperand] = STATE(177),
    [sym_generalRegister64Bits] = STATE(178),
    [sym_generalRegister32Bits] = STATE(178),
    [sym_generalRegister16Bits] = STATE(178),
    [sym_generalRegister8Bits] = STATE(178),
    [sym_controlRegisterOperand] = STATE(177),
    [sym_instructionRegisterOperand] = STATE(177),
    [sym_floatRegisterOperand] = STATE(177),
    [sym_otherRegisterOperand] = STATE(177),
    [aux_sym_operand_repeat1] = STATE(61),
    [aux_sym_operand_token1] = ACTIONS(274),
    [anon_sym_PERCENTss] = ACTIONS(228),
    [anon_sym_PERCENTcs] = ACTIONS(228),
    [anon_sym_PERCENTds] = ACTIONS(228),
    [anon_sym_PERCENTes] = ACTIONS(230),
    [anon_sym_PERCENTfs] = ACTIONS(228),
    [anon_sym_PERCENTgs] = ACTIONS(228),
    [anon_sym_PERCENTrax] = ACTIONS(232),
    [anon_sym_PERCENTrbx] = ACTIONS(232),
    [anon_sym_PERCENTrcx] = ACTIONS(232),
    [anon_sym_PERCENTrdx] = ACTIONS(232),
    [anon_sym_PERCENTrsi] = ACTIONS(232),
    [anon_sym_PERCENTrdi] = ACTIONS(232),
    [anon_sym_PERCENTrbp] = ACTIONS(232),
    [anon_sym_PERCENTrsp] = ACTIONS(232),
    [anon_sym_PERCENTr8] = ACTIONS(234),
    [anon_sym_PERCENTr9] = ACTIONS(234),
    [anon_sym_PERCENTr10] = ACTIONS(234),
    [anon_sym_PERCENTr11] = ACTIONS(234),
    [anon_sym_PERCENTr12] = ACTIONS(234),
    [anon_sym_PERCENTr13] = ACTIONS(234),
    [anon_sym_PERCENTr14] = ACTIONS(234),
    [anon_sym_PERCENTr15] = ACTIONS(234),
    [anon_sym_PERCENTeax] = ACTIONS(236),
    [anon_sym_PERCENTecx] = ACTIONS(236),
    [anon_sym_PERCENTedx] = ACTIONS(236),
    [anon_sym_PERCENTebx] = ACTIONS(236),
    [anon_sym_PERCENTesi] = ACTIONS(236),
    [anon_sym_PERCENTedi] = ACTIONS(236),
    [anon_sym_PERCENTebp] = ACTIONS(236),
    [anon_sym_PERCENTesp] = ACTIONS(236),
    [anon_sym_PERCENTr8d] = ACTIONS(236),
    [anon_sym_PERCENTr9d] = ACTIONS(236),
    [anon_sym_PERCENTr10d] = ACTIONS(236),
    [anon_sym_PERCENTr11d] = ACTIONS(236),
    [anon_sym_PERCENTr12d] = ACTIONS(236),
    [anon_sym_PERCENTr13d] = ACTIONS(236),
    [anon_sym_PERCENTr14d] = ACTIONS(236),
    [anon_sym_PERCENTr15d] = ACTIONS(236),
    [anon_sym_PERCENTax] = ACTIONS(238),
    [anon_sym_PERCENTcx] = ACTIONS(238),
    [anon_sym_PERCENTdx] = ACTIONS(238),
    [anon_sym_PERCENTbx] = ACTIONS(238),
    [anon_sym_PERCENTsi] = ACTIONS(240),
    [anon_sym_PERCENTdi] = ACTIONS(240),
    [anon_sym_PERCENTsp] = ACTIONS(240),
    [anon_sym_PERCENTbp] = ACTIONS(240),
    [anon_sym_PERCENTr8w] = ACTIONS(238),
    [anon_sym_PERCENTr9w] = ACTIONS(238),
    [anon_sym_PERCENTr10w] = ACTIONS(238),
    [anon_sym_PERCENTr11w] = ACTIONS(238),
    [anon_sym_PERCENTr12w] = ACTIONS(238),
    [anon_sym_PERCENTr13w] = ACTIONS(238),
    [anon_sym_PERCENTr14w] = ACTIONS(238),
    [anon_sym_PERCENTr15w] = ACTIONS(238),
    [anon_sym_PERCENTal] = ACTIONS(242),
    [anon_sym_PERCENTcl] = ACTIONS(242),
    [anon_sym_PERCENTdl] = ACTIONS(242),
    [anon_sym_PERCENTbl] = ACTIONS(242),
    [anon_sym_PERCENTsil] = ACTIONS(242),
    [anon_sym_PERCENTdil] = ACTIONS(242),
    [anon_sym_PERCENTspl] = ACTIONS(242),
    [anon_sym_PERCENTbpl] = ACTIONS(242),
    [anon_sym_PERCENTr8b] = ACTIONS(242),
    [anon_sym_PERCENTr9b] = ACTIONS(242),
    [anon_sym_PERCENTr10b] = ACTIONS(242),
    [anon_sym_PERCENTr11b] = ACTIONS(242),
    [anon_sym_PERCENTr12b] = ACTIONS(242),
    [anon_sym_PERCENTr13b] = ACTIONS(242),
    [anon_sym_PERCENTr14b] = ACTIONS(242),
    [anon_sym_PERCENTr15b] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_PERCENTcr0] = ACTIONS(246),
    [anon_sym_PERCENTcr2] = ACTIONS(246),
    [anon_sym_PERCENTcr3] = ACTIONS(246),
    [anon_sym_PERCENTcr4] = ACTIONS(246),
    [anon_sym_PERCENTrip] = ACTIONS(248),
    [anon_sym_PERCENTeip] = ACTIONS(248),
    [anon_sym_PERCENTip] = ACTIONS(248),
    [anon_sym_PERCENTst] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(252),
  },
  [17] = {
    [sym_registerOperand] = STATE(76),
    [sym_segmentRegisterOperand] = STATE(95),
    [sym_generalRegisterOperand] = STATE(95),
    [sym_generalRegister64Bits] = STATE(94),
    [sym_generalRegister32Bits] = STATE(94),
    [sym_generalRegister16Bits] = STATE(94),
    [sym_generalRegister8Bits] = STATE(94),
    [sym_controlRegisterOperand] = STATE(95),
    [sym_instructionRegisterOperand] = STATE(95),
    [sym_floatRegisterOperand] = STATE(95),
    [sym_otherRegisterOperand] = STATE(95),
    [aux_sym_operand_repeat1] = STATE(61),
    [aux_sym_operand_token1] = ACTIONS(274),
    [anon_sym_PERCENTss] = ACTIONS(256),
    [anon_sym_PERCENTcs] = ACTIONS(256),
    [anon_sym_PERCENTds] = ACTIONS(256),
    [anon_sym_PERCENTes] = ACTIONS(146),
    [anon_sym_PERCENTfs] = ACTIONS(256),
    [anon_sym_PERCENTgs] = ACTIONS(256),
    [anon_sym_PERCENTrax] = ACTIONS(258),
    [anon_sym_PERCENTrbx] = ACTIONS(258),
    [anon_sym_PERCENTrcx] = ACTIONS(258),
    [anon_sym_PERCENTrdx] = ACTIONS(258),
    [anon_sym_PERCENTrsi] = ACTIONS(258),
    [anon_sym_PERCENTrdi] = ACTIONS(258),
    [anon_sym_PERCENTrbp] = ACTIONS(258),
    [anon_sym_PERCENTrsp] = ACTIONS(258),
    [anon_sym_PERCENTr8] = ACTIONS(148),
    [anon_sym_PERCENTr9] = ACTIONS(148),
    [anon_sym_PERCENTr10] = ACTIONS(148),
    [anon_sym_PERCENTr11] = ACTIONS(148),
    [anon_sym_PERCENTr12] = ACTIONS(148),
    [anon_sym_PERCENTr13] = ACTIONS(148),
    [anon_sym_PERCENTr14] = ACTIONS(148),
    [anon_sym_PERCENTr15] = ACTIONS(148),
    [anon_sym_PERCENTeax] = ACTIONS(260),
    [anon_sym_PERCENTecx] = ACTIONS(260),
    [anon_sym_PERCENTedx] = ACTIONS(260),
    [anon_sym_PERCENTebx] = ACTIONS(260),
    [anon_sym_PERCENTesi] = ACTIONS(260),
    [anon_sym_PERCENTedi] = ACTIONS(260),
    [anon_sym_PERCENTebp] = ACTIONS(260),
    [anon_sym_PERCENTesp] = ACTIONS(260),
    [anon_sym_PERCENTr8d] = ACTIONS(260),
    [anon_sym_PERCENTr9d] = ACTIONS(260),
    [anon_sym_PERCENTr10d] = ACTIONS(260),
    [anon_sym_PERCENTr11d] = ACTIONS(260),
    [anon_sym_PERCENTr12d] = ACTIONS(260),
    [anon_sym_PERCENTr13d] = ACTIONS(260),
    [anon_sym_PERCENTr14d] = ACTIONS(260),
    [anon_sym_PERCENTr15d] = ACTIONS(260),
    [anon_sym_PERCENTax] = ACTIONS(262),
    [anon_sym_PERCENTcx] = ACTIONS(262),
    [anon_sym_PERCENTdx] = ACTIONS(262),
    [anon_sym_PERCENTbx] = ACTIONS(262),
    [anon_sym_PERCENTsi] = ACTIONS(152),
    [anon_sym_PERCENTdi] = ACTIONS(152),
    [anon_sym_PERCENTsp] = ACTIONS(152),
    [anon_sym_PERCENTbp] = ACTIONS(152),
    [anon_sym_PERCENTr8w] = ACTIONS(262),
    [anon_sym_PERCENTr9w] = ACTIONS(262),
    [anon_sym_PERCENTr10w] = ACTIONS(262),
    [anon_sym_PERCENTr11w] = ACTIONS(262),
    [anon_sym_PERCENTr12w] = ACTIONS(262),
    [anon_sym_PERCENTr13w] = ACTIONS(262),
    [anon_sym_PERCENTr14w] = ACTIONS(262),
    [anon_sym_PERCENTr15w] = ACTIONS(262),
    [anon_sym_PERCENTal] = ACTIONS(264),
    [anon_sym_PERCENTcl] = ACTIONS(264),
    [anon_sym_PERCENTdl] = ACTIONS(264),
    [anon_sym_PERCENTbl] = ACTIONS(264),
    [anon_sym_PERCENTsil] = ACTIONS(264),
    [anon_sym_PERCENTdil] = ACTIONS(264),
    [anon_sym_PERCENTspl] = ACTIONS(264),
    [anon_sym_PERCENTbpl] = ACTIONS(264),
    [anon_sym_PERCENTr8b] = ACTIONS(264),
    [anon_sym_PERCENTr9b] = ACTIONS(264),
    [anon_sym_PERCENTr10b] = ACTIONS(264),
    [anon_sym_PERCENTr11b] = ACTIONS(264),
    [anon_sym_PERCENTr12b] = ACTIONS(264),
    [anon_sym_PERCENTr13b] = ACTIONS(264),
    [anon_sym_PERCENTr14b] = ACTIONS(264),
    [anon_sym_PERCENTr15b] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_PERCENTcr0] = ACTIONS(268),
    [anon_sym_PERCENTcr2] = ACTIONS(268),
    [anon_sym_PERCENTcr3] = ACTIONS(268),
    [anon_sym_PERCENTcr4] = ACTIONS(268),
    [anon_sym_PERCENTrip] = ACTIONS(270),
    [anon_sym_PERCENTeip] = ACTIONS(270),
    [anon_sym_PERCENTip] = ACTIONS(270),
    [anon_sym_PERCENTst] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(168),
  },
  [18] = {
    [aux_sym_comment_token1] = ACTIONS(280),
    [aux_sym_comment_token2] = ACTIONS(280),
    [sym__line_break] = ACTIONS(282),
    [anon_sym_f] = ACTIONS(280),
    [aux_sym_operand_token1] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(280),
    [anon_sym_DOLLAR] = ACTIONS(280),
    [anon_sym_PERCENTss] = ACTIONS(280),
    [anon_sym_PERCENTcs] = ACTIONS(280),
    [anon_sym_PERCENTds] = ACTIONS(280),
    [anon_sym_PERCENTes] = ACTIONS(280),
    [anon_sym_PERCENTfs] = ACTIONS(280),
    [anon_sym_PERCENTgs] = ACTIONS(280),
    [anon_sym_PERCENTrax] = ACTIONS(280),
    [anon_sym_PERCENTrbx] = ACTIONS(280),
    [anon_sym_PERCENTrcx] = ACTIONS(280),
    [anon_sym_PERCENTrdx] = ACTIONS(280),
    [anon_sym_PERCENTrsi] = ACTIONS(280),
    [anon_sym_PERCENTrdi] = ACTIONS(280),
    [anon_sym_PERCENTrbp] = ACTIONS(280),
    [anon_sym_PERCENTrsp] = ACTIONS(280),
    [anon_sym_PERCENTr8] = ACTIONS(280),
    [anon_sym_PERCENTr9] = ACTIONS(280),
    [anon_sym_PERCENTr10] = ACTIONS(280),
    [anon_sym_PERCENTr11] = ACTIONS(280),
    [anon_sym_PERCENTr12] = ACTIONS(280),
    [anon_sym_PERCENTr13] = ACTIONS(280),
    [anon_sym_PERCENTr14] = ACTIONS(280),
    [anon_sym_PERCENTr15] = ACTIONS(280),
    [anon_sym_PERCENTeax] = ACTIONS(280),
    [anon_sym_PERCENTecx] = ACTIONS(280),
    [anon_sym_PERCENTedx] = ACTIONS(280),
    [anon_sym_PERCENTebx] = ACTIONS(280),
    [anon_sym_PERCENTesi] = ACTIONS(280),
    [anon_sym_PERCENTedi] = ACTIONS(280),
    [anon_sym_PERCENTebp] = ACTIONS(280),
    [anon_sym_PERCENTesp] = ACTIONS(280),
    [anon_sym_PERCENTr8d] = ACTIONS(280),
    [anon_sym_PERCENTr9d] = ACTIONS(280),
    [anon_sym_PERCENTr10d] = ACTIONS(280),
    [anon_sym_PERCENTr11d] = ACTIONS(280),
    [anon_sym_PERCENTr12d] = ACTIONS(280),
    [anon_sym_PERCENTr13d] = ACTIONS(280),
    [anon_sym_PERCENTr14d] = ACTIONS(280),
    [anon_sym_PERCENTr15d] = ACTIONS(280),
    [anon_sym_PERCENTax] = ACTIONS(280),
    [anon_sym_PERCENTcx] = ACTIONS(280),
    [anon_sym_PERCENTdx] = ACTIONS(280),
    [anon_sym_PERCENTbx] = ACTIONS(280),
    [anon_sym_PERCENTsi] = ACTIONS(280),
    [anon_sym_PERCENTdi] = ACTIONS(280),
    [anon_sym_PERCENTsp] = ACTIONS(280),
    [anon_sym_PERCENTbp] = ACTIONS(280),
    [anon_sym_PERCENTr8w] = ACTIONS(280),
    [anon_sym_PERCENTr9w] = ACTIONS(280),
    [anon_sym_PERCENTr10w] = ACTIONS(280),
    [anon_sym_PERCENTr11w] = ACTIONS(280),
    [anon_sym_PERCENTr12w] = ACTIONS(280),
    [anon_sym_PERCENTr13w] = ACTIONS(280),
    [anon_sym_PERCENTr14w] = ACTIONS(280),
    [anon_sym_PERCENTr15w] = ACTIONS(280),
    [anon_sym_PERCENTal] = ACTIONS(280),
    [anon_sym_PERCENTcl] = ACTIONS(280),
    [anon_sym_PERCENTdl] = ACTIONS(280),
    [anon_sym_PERCENTbl] = ACTIONS(280),
    [anon_sym_PERCENTsil] = ACTIONS(280),
    [anon_sym_PERCENTdil] = ACTIONS(280),
    [anon_sym_PERCENTspl] = ACTIONS(280),
    [anon_sym_PERCENTbpl] = ACTIONS(280),
    [anon_sym_PERCENTr8b] = ACTIONS(280),
    [anon_sym_PERCENTr9b] = ACTIONS(280),
    [anon_sym_PERCENTr10b] = ACTIONS(280),
    [anon_sym_PERCENTr11b] = ACTIONS(280),
    [anon_sym_PERCENTr12b] = ACTIONS(280),
    [anon_sym_PERCENTr13b] = ACTIONS(280),
    [anon_sym_PERCENTr14b] = ACTIONS(280),
    [anon_sym_PERCENTr15b] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_movsq] = ACTIONS(280),
    [anon_sym_cmpsb] = ACTIONS(280),
    [anon_sym_cmpxchg] = ACTIONS(280),
    [anon_sym_movsl] = ACTIONS(280),
    [anon_sym_PERCENTcr0] = ACTIONS(280),
    [anon_sym_PERCENTcr2] = ACTIONS(280),
    [anon_sym_PERCENTcr3] = ACTIONS(280),
    [anon_sym_PERCENTcr4] = ACTIONS(280),
    [anon_sym_PERCENTrip] = ACTIONS(280),
    [anon_sym_PERCENTeip] = ACTIONS(280),
    [anon_sym_PERCENTip] = ACTIONS(280),
    [anon_sym_PERCENTst] = ACTIONS(280),
    [anon_sym_PERCENT] = ACTIONS(280),
  },
  [19] = {
    [sym_registerOperand] = STATE(189),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(302),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(284),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [20] = {
    [aux_sym_comment_token1] = ACTIONS(310),
    [aux_sym_comment_token2] = ACTIONS(310),
    [sym__line_break] = ACTIONS(312),
    [anon_sym_f] = ACTIONS(310),
    [aux_sym_operand_token1] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_PERCENTss] = ACTIONS(310),
    [anon_sym_PERCENTcs] = ACTIONS(310),
    [anon_sym_PERCENTds] = ACTIONS(310),
    [anon_sym_PERCENTes] = ACTIONS(310),
    [anon_sym_PERCENTfs] = ACTIONS(310),
    [anon_sym_PERCENTgs] = ACTIONS(310),
    [anon_sym_PERCENTrax] = ACTIONS(310),
    [anon_sym_PERCENTrbx] = ACTIONS(310),
    [anon_sym_PERCENTrcx] = ACTIONS(310),
    [anon_sym_PERCENTrdx] = ACTIONS(310),
    [anon_sym_PERCENTrsi] = ACTIONS(310),
    [anon_sym_PERCENTrdi] = ACTIONS(310),
    [anon_sym_PERCENTrbp] = ACTIONS(310),
    [anon_sym_PERCENTrsp] = ACTIONS(310),
    [anon_sym_PERCENTr8] = ACTIONS(310),
    [anon_sym_PERCENTr9] = ACTIONS(310),
    [anon_sym_PERCENTr10] = ACTIONS(310),
    [anon_sym_PERCENTr11] = ACTIONS(310),
    [anon_sym_PERCENTr12] = ACTIONS(310),
    [anon_sym_PERCENTr13] = ACTIONS(310),
    [anon_sym_PERCENTr14] = ACTIONS(310),
    [anon_sym_PERCENTr15] = ACTIONS(310),
    [anon_sym_PERCENTeax] = ACTIONS(310),
    [anon_sym_PERCENTecx] = ACTIONS(310),
    [anon_sym_PERCENTedx] = ACTIONS(310),
    [anon_sym_PERCENTebx] = ACTIONS(310),
    [anon_sym_PERCENTesi] = ACTIONS(310),
    [anon_sym_PERCENTedi] = ACTIONS(310),
    [anon_sym_PERCENTebp] = ACTIONS(310),
    [anon_sym_PERCENTesp] = ACTIONS(310),
    [anon_sym_PERCENTr8d] = ACTIONS(310),
    [anon_sym_PERCENTr9d] = ACTIONS(310),
    [anon_sym_PERCENTr10d] = ACTIONS(310),
    [anon_sym_PERCENTr11d] = ACTIONS(310),
    [anon_sym_PERCENTr12d] = ACTIONS(310),
    [anon_sym_PERCENTr13d] = ACTIONS(310),
    [anon_sym_PERCENTr14d] = ACTIONS(310),
    [anon_sym_PERCENTr15d] = ACTIONS(310),
    [anon_sym_PERCENTax] = ACTIONS(310),
    [anon_sym_PERCENTcx] = ACTIONS(310),
    [anon_sym_PERCENTdx] = ACTIONS(310),
    [anon_sym_PERCENTbx] = ACTIONS(310),
    [anon_sym_PERCENTsi] = ACTIONS(310),
    [anon_sym_PERCENTdi] = ACTIONS(310),
    [anon_sym_PERCENTsp] = ACTIONS(310),
    [anon_sym_PERCENTbp] = ACTIONS(310),
    [anon_sym_PERCENTr8w] = ACTIONS(310),
    [anon_sym_PERCENTr9w] = ACTIONS(310),
    [anon_sym_PERCENTr10w] = ACTIONS(310),
    [anon_sym_PERCENTr11w] = ACTIONS(310),
    [anon_sym_PERCENTr12w] = ACTIONS(310),
    [anon_sym_PERCENTr13w] = ACTIONS(310),
    [anon_sym_PERCENTr14w] = ACTIONS(310),
    [anon_sym_PERCENTr15w] = ACTIONS(310),
    [anon_sym_PERCENTal] = ACTIONS(310),
    [anon_sym_PERCENTcl] = ACTIONS(310),
    [anon_sym_PERCENTdl] = ACTIONS(310),
    [anon_sym_PERCENTbl] = ACTIONS(310),
    [anon_sym_PERCENTsil] = ACTIONS(310),
    [anon_sym_PERCENTdil] = ACTIONS(310),
    [anon_sym_PERCENTspl] = ACTIONS(310),
    [anon_sym_PERCENTbpl] = ACTIONS(310),
    [anon_sym_PERCENTr8b] = ACTIONS(310),
    [anon_sym_PERCENTr9b] = ACTIONS(310),
    [anon_sym_PERCENTr10b] = ACTIONS(310),
    [anon_sym_PERCENTr11b] = ACTIONS(310),
    [anon_sym_PERCENTr12b] = ACTIONS(310),
    [anon_sym_PERCENTr13b] = ACTIONS(310),
    [anon_sym_PERCENTr14b] = ACTIONS(310),
    [anon_sym_PERCENTr15b] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_movsq] = ACTIONS(310),
    [anon_sym_cmpsb] = ACTIONS(310),
    [anon_sym_cmpxchg] = ACTIONS(310),
    [anon_sym_movsl] = ACTIONS(310),
    [anon_sym_PERCENTcr0] = ACTIONS(310),
    [anon_sym_PERCENTcr2] = ACTIONS(310),
    [anon_sym_PERCENTcr3] = ACTIONS(310),
    [anon_sym_PERCENTcr4] = ACTIONS(310),
    [anon_sym_PERCENTrip] = ACTIONS(310),
    [anon_sym_PERCENTeip] = ACTIONS(310),
    [anon_sym_PERCENTip] = ACTIONS(310),
    [anon_sym_PERCENTst] = ACTIONS(310),
    [anon_sym_PERCENT] = ACTIONS(310),
  },
  [21] = {
    [aux_sym_comment_token1] = ACTIONS(314),
    [aux_sym_comment_token2] = ACTIONS(314),
    [sym__line_break] = ACTIONS(316),
    [anon_sym_f] = ACTIONS(314),
    [aux_sym_operand_token1] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_DOLLAR] = ACTIONS(314),
    [anon_sym_PERCENTss] = ACTIONS(314),
    [anon_sym_PERCENTcs] = ACTIONS(314),
    [anon_sym_PERCENTds] = ACTIONS(314),
    [anon_sym_PERCENTes] = ACTIONS(314),
    [anon_sym_PERCENTfs] = ACTIONS(314),
    [anon_sym_PERCENTgs] = ACTIONS(314),
    [anon_sym_PERCENTrax] = ACTIONS(314),
    [anon_sym_PERCENTrbx] = ACTIONS(314),
    [anon_sym_PERCENTrcx] = ACTIONS(314),
    [anon_sym_PERCENTrdx] = ACTIONS(314),
    [anon_sym_PERCENTrsi] = ACTIONS(314),
    [anon_sym_PERCENTrdi] = ACTIONS(314),
    [anon_sym_PERCENTrbp] = ACTIONS(314),
    [anon_sym_PERCENTrsp] = ACTIONS(314),
    [anon_sym_PERCENTr8] = ACTIONS(314),
    [anon_sym_PERCENTr9] = ACTIONS(314),
    [anon_sym_PERCENTr10] = ACTIONS(314),
    [anon_sym_PERCENTr11] = ACTIONS(314),
    [anon_sym_PERCENTr12] = ACTIONS(314),
    [anon_sym_PERCENTr13] = ACTIONS(314),
    [anon_sym_PERCENTr14] = ACTIONS(314),
    [anon_sym_PERCENTr15] = ACTIONS(314),
    [anon_sym_PERCENTeax] = ACTIONS(314),
    [anon_sym_PERCENTecx] = ACTIONS(314),
    [anon_sym_PERCENTedx] = ACTIONS(314),
    [anon_sym_PERCENTebx] = ACTIONS(314),
    [anon_sym_PERCENTesi] = ACTIONS(314),
    [anon_sym_PERCENTedi] = ACTIONS(314),
    [anon_sym_PERCENTebp] = ACTIONS(314),
    [anon_sym_PERCENTesp] = ACTIONS(314),
    [anon_sym_PERCENTr8d] = ACTIONS(314),
    [anon_sym_PERCENTr9d] = ACTIONS(314),
    [anon_sym_PERCENTr10d] = ACTIONS(314),
    [anon_sym_PERCENTr11d] = ACTIONS(314),
    [anon_sym_PERCENTr12d] = ACTIONS(314),
    [anon_sym_PERCENTr13d] = ACTIONS(314),
    [anon_sym_PERCENTr14d] = ACTIONS(314),
    [anon_sym_PERCENTr15d] = ACTIONS(314),
    [anon_sym_PERCENTax] = ACTIONS(314),
    [anon_sym_PERCENTcx] = ACTIONS(314),
    [anon_sym_PERCENTdx] = ACTIONS(314),
    [anon_sym_PERCENTbx] = ACTIONS(314),
    [anon_sym_PERCENTsi] = ACTIONS(314),
    [anon_sym_PERCENTdi] = ACTIONS(314),
    [anon_sym_PERCENTsp] = ACTIONS(314),
    [anon_sym_PERCENTbp] = ACTIONS(314),
    [anon_sym_PERCENTr8w] = ACTIONS(314),
    [anon_sym_PERCENTr9w] = ACTIONS(314),
    [anon_sym_PERCENTr10w] = ACTIONS(314),
    [anon_sym_PERCENTr11w] = ACTIONS(314),
    [anon_sym_PERCENTr12w] = ACTIONS(314),
    [anon_sym_PERCENTr13w] = ACTIONS(314),
    [anon_sym_PERCENTr14w] = ACTIONS(314),
    [anon_sym_PERCENTr15w] = ACTIONS(314),
    [anon_sym_PERCENTal] = ACTIONS(314),
    [anon_sym_PERCENTcl] = ACTIONS(314),
    [anon_sym_PERCENTdl] = ACTIONS(314),
    [anon_sym_PERCENTbl] = ACTIONS(314),
    [anon_sym_PERCENTsil] = ACTIONS(314),
    [anon_sym_PERCENTdil] = ACTIONS(314),
    [anon_sym_PERCENTspl] = ACTIONS(314),
    [anon_sym_PERCENTbpl] = ACTIONS(314),
    [anon_sym_PERCENTr8b] = ACTIONS(314),
    [anon_sym_PERCENTr9b] = ACTIONS(314),
    [anon_sym_PERCENTr10b] = ACTIONS(314),
    [anon_sym_PERCENTr11b] = ACTIONS(314),
    [anon_sym_PERCENTr12b] = ACTIONS(314),
    [anon_sym_PERCENTr13b] = ACTIONS(314),
    [anon_sym_PERCENTr14b] = ACTIONS(314),
    [anon_sym_PERCENTr15b] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_movsq] = ACTIONS(314),
    [anon_sym_cmpsb] = ACTIONS(314),
    [anon_sym_cmpxchg] = ACTIONS(314),
    [anon_sym_movsl] = ACTIONS(314),
    [anon_sym_PERCENTcr0] = ACTIONS(314),
    [anon_sym_PERCENTcr2] = ACTIONS(314),
    [anon_sym_PERCENTcr3] = ACTIONS(314),
    [anon_sym_PERCENTcr4] = ACTIONS(314),
    [anon_sym_PERCENTrip] = ACTIONS(314),
    [anon_sym_PERCENTeip] = ACTIONS(314),
    [anon_sym_PERCENTip] = ACTIONS(314),
    [anon_sym_PERCENTst] = ACTIONS(314),
    [anon_sym_PERCENT] = ACTIONS(314),
  },
  [22] = {
    [sym_registerOperand] = STATE(253),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(269),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(318),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [23] = {
    [sym_registerOperand] = STATE(245),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(266),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(320),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [24] = {
    [sym_registerOperand] = STATE(232),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(269),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(318),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [25] = {
    [aux_sym_comment_token1] = ACTIONS(174),
    [aux_sym_comment_token2] = ACTIONS(174),
    [sym__line_break] = ACTIONS(176),
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
  [26] = {
    [aux_sym_comment_token1] = ACTIONS(322),
    [aux_sym_comment_token2] = ACTIONS(322),
    [sym__line_break] = ACTIONS(324),
    [anon_sym_f] = ACTIONS(322),
    [aux_sym_operand_token1] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(322),
    [anon_sym_DOLLAR] = ACTIONS(322),
    [anon_sym_PERCENTss] = ACTIONS(322),
    [anon_sym_PERCENTcs] = ACTIONS(322),
    [anon_sym_PERCENTds] = ACTIONS(322),
    [anon_sym_PERCENTes] = ACTIONS(322),
    [anon_sym_PERCENTfs] = ACTIONS(322),
    [anon_sym_PERCENTgs] = ACTIONS(322),
    [anon_sym_PERCENTrax] = ACTIONS(322),
    [anon_sym_PERCENTrbx] = ACTIONS(322),
    [anon_sym_PERCENTrcx] = ACTIONS(322),
    [anon_sym_PERCENTrdx] = ACTIONS(322),
    [anon_sym_PERCENTrsi] = ACTIONS(322),
    [anon_sym_PERCENTrdi] = ACTIONS(322),
    [anon_sym_PERCENTrbp] = ACTIONS(322),
    [anon_sym_PERCENTrsp] = ACTIONS(322),
    [anon_sym_PERCENTr8] = ACTIONS(322),
    [anon_sym_PERCENTr9] = ACTIONS(322),
    [anon_sym_PERCENTr10] = ACTIONS(322),
    [anon_sym_PERCENTr11] = ACTIONS(322),
    [anon_sym_PERCENTr12] = ACTIONS(322),
    [anon_sym_PERCENTr13] = ACTIONS(322),
    [anon_sym_PERCENTr14] = ACTIONS(322),
    [anon_sym_PERCENTr15] = ACTIONS(322),
    [anon_sym_PERCENTeax] = ACTIONS(322),
    [anon_sym_PERCENTecx] = ACTIONS(322),
    [anon_sym_PERCENTedx] = ACTIONS(322),
    [anon_sym_PERCENTebx] = ACTIONS(322),
    [anon_sym_PERCENTesi] = ACTIONS(322),
    [anon_sym_PERCENTedi] = ACTIONS(322),
    [anon_sym_PERCENTebp] = ACTIONS(322),
    [anon_sym_PERCENTesp] = ACTIONS(322),
    [anon_sym_PERCENTr8d] = ACTIONS(322),
    [anon_sym_PERCENTr9d] = ACTIONS(322),
    [anon_sym_PERCENTr10d] = ACTIONS(322),
    [anon_sym_PERCENTr11d] = ACTIONS(322),
    [anon_sym_PERCENTr12d] = ACTIONS(322),
    [anon_sym_PERCENTr13d] = ACTIONS(322),
    [anon_sym_PERCENTr14d] = ACTIONS(322),
    [anon_sym_PERCENTr15d] = ACTIONS(322),
    [anon_sym_PERCENTax] = ACTIONS(322),
    [anon_sym_PERCENTcx] = ACTIONS(322),
    [anon_sym_PERCENTdx] = ACTIONS(322),
    [anon_sym_PERCENTbx] = ACTIONS(322),
    [anon_sym_PERCENTsi] = ACTIONS(322),
    [anon_sym_PERCENTdi] = ACTIONS(322),
    [anon_sym_PERCENTsp] = ACTIONS(322),
    [anon_sym_PERCENTbp] = ACTIONS(322),
    [anon_sym_PERCENTr8w] = ACTIONS(322),
    [anon_sym_PERCENTr9w] = ACTIONS(322),
    [anon_sym_PERCENTr10w] = ACTIONS(322),
    [anon_sym_PERCENTr11w] = ACTIONS(322),
    [anon_sym_PERCENTr12w] = ACTIONS(322),
    [anon_sym_PERCENTr13w] = ACTIONS(322),
    [anon_sym_PERCENTr14w] = ACTIONS(322),
    [anon_sym_PERCENTr15w] = ACTIONS(322),
    [anon_sym_PERCENTal] = ACTIONS(322),
    [anon_sym_PERCENTcl] = ACTIONS(322),
    [anon_sym_PERCENTdl] = ACTIONS(322),
    [anon_sym_PERCENTbl] = ACTIONS(322),
    [anon_sym_PERCENTsil] = ACTIONS(322),
    [anon_sym_PERCENTdil] = ACTIONS(322),
    [anon_sym_PERCENTspl] = ACTIONS(322),
    [anon_sym_PERCENTbpl] = ACTIONS(322),
    [anon_sym_PERCENTr8b] = ACTIONS(322),
    [anon_sym_PERCENTr9b] = ACTIONS(322),
    [anon_sym_PERCENTr10b] = ACTIONS(322),
    [anon_sym_PERCENTr11b] = ACTIONS(322),
    [anon_sym_PERCENTr12b] = ACTIONS(322),
    [anon_sym_PERCENTr13b] = ACTIONS(322),
    [anon_sym_PERCENTr14b] = ACTIONS(322),
    [anon_sym_PERCENTr15b] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_movsq] = ACTIONS(322),
    [anon_sym_cmpsb] = ACTIONS(322),
    [anon_sym_cmpxchg] = ACTIONS(322),
    [anon_sym_movsl] = ACTIONS(322),
    [anon_sym_PERCENTcr0] = ACTIONS(322),
    [anon_sym_PERCENTcr2] = ACTIONS(322),
    [anon_sym_PERCENTcr3] = ACTIONS(322),
    [anon_sym_PERCENTcr4] = ACTIONS(322),
    [anon_sym_PERCENTrip] = ACTIONS(322),
    [anon_sym_PERCENTeip] = ACTIONS(322),
    [anon_sym_PERCENTip] = ACTIONS(322),
    [anon_sym_PERCENTst] = ACTIONS(322),
    [anon_sym_PERCENT] = ACTIONS(322),
  },
  [27] = {
    [sym_registerOperand] = STATE(254),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(304),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(326),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [28] = {
    [aux_sym_comment_token1] = ACTIONS(328),
    [aux_sym_comment_token2] = ACTIONS(328),
    [sym__line_break] = ACTIONS(330),
    [anon_sym_f] = ACTIONS(328),
    [aux_sym_operand_token1] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_DOLLAR] = ACTIONS(328),
    [anon_sym_PERCENTss] = ACTIONS(328),
    [anon_sym_PERCENTcs] = ACTIONS(328),
    [anon_sym_PERCENTds] = ACTIONS(328),
    [anon_sym_PERCENTes] = ACTIONS(328),
    [anon_sym_PERCENTfs] = ACTIONS(328),
    [anon_sym_PERCENTgs] = ACTIONS(328),
    [anon_sym_PERCENTrax] = ACTIONS(328),
    [anon_sym_PERCENTrbx] = ACTIONS(328),
    [anon_sym_PERCENTrcx] = ACTIONS(328),
    [anon_sym_PERCENTrdx] = ACTIONS(328),
    [anon_sym_PERCENTrsi] = ACTIONS(328),
    [anon_sym_PERCENTrdi] = ACTIONS(328),
    [anon_sym_PERCENTrbp] = ACTIONS(328),
    [anon_sym_PERCENTrsp] = ACTIONS(328),
    [anon_sym_PERCENTr8] = ACTIONS(328),
    [anon_sym_PERCENTr9] = ACTIONS(328),
    [anon_sym_PERCENTr10] = ACTIONS(328),
    [anon_sym_PERCENTr11] = ACTIONS(328),
    [anon_sym_PERCENTr12] = ACTIONS(328),
    [anon_sym_PERCENTr13] = ACTIONS(328),
    [anon_sym_PERCENTr14] = ACTIONS(328),
    [anon_sym_PERCENTr15] = ACTIONS(328),
    [anon_sym_PERCENTeax] = ACTIONS(328),
    [anon_sym_PERCENTecx] = ACTIONS(328),
    [anon_sym_PERCENTedx] = ACTIONS(328),
    [anon_sym_PERCENTebx] = ACTIONS(328),
    [anon_sym_PERCENTesi] = ACTIONS(328),
    [anon_sym_PERCENTedi] = ACTIONS(328),
    [anon_sym_PERCENTebp] = ACTIONS(328),
    [anon_sym_PERCENTesp] = ACTIONS(328),
    [anon_sym_PERCENTr8d] = ACTIONS(328),
    [anon_sym_PERCENTr9d] = ACTIONS(328),
    [anon_sym_PERCENTr10d] = ACTIONS(328),
    [anon_sym_PERCENTr11d] = ACTIONS(328),
    [anon_sym_PERCENTr12d] = ACTIONS(328),
    [anon_sym_PERCENTr13d] = ACTIONS(328),
    [anon_sym_PERCENTr14d] = ACTIONS(328),
    [anon_sym_PERCENTr15d] = ACTIONS(328),
    [anon_sym_PERCENTax] = ACTIONS(328),
    [anon_sym_PERCENTcx] = ACTIONS(328),
    [anon_sym_PERCENTdx] = ACTIONS(328),
    [anon_sym_PERCENTbx] = ACTIONS(328),
    [anon_sym_PERCENTsi] = ACTIONS(328),
    [anon_sym_PERCENTdi] = ACTIONS(328),
    [anon_sym_PERCENTsp] = ACTIONS(328),
    [anon_sym_PERCENTbp] = ACTIONS(328),
    [anon_sym_PERCENTr8w] = ACTIONS(328),
    [anon_sym_PERCENTr9w] = ACTIONS(328),
    [anon_sym_PERCENTr10w] = ACTIONS(328),
    [anon_sym_PERCENTr11w] = ACTIONS(328),
    [anon_sym_PERCENTr12w] = ACTIONS(328),
    [anon_sym_PERCENTr13w] = ACTIONS(328),
    [anon_sym_PERCENTr14w] = ACTIONS(328),
    [anon_sym_PERCENTr15w] = ACTIONS(328),
    [anon_sym_PERCENTal] = ACTIONS(328),
    [anon_sym_PERCENTcl] = ACTIONS(328),
    [anon_sym_PERCENTdl] = ACTIONS(328),
    [anon_sym_PERCENTbl] = ACTIONS(328),
    [anon_sym_PERCENTsil] = ACTIONS(328),
    [anon_sym_PERCENTdil] = ACTIONS(328),
    [anon_sym_PERCENTspl] = ACTIONS(328),
    [anon_sym_PERCENTbpl] = ACTIONS(328),
    [anon_sym_PERCENTr8b] = ACTIONS(328),
    [anon_sym_PERCENTr9b] = ACTIONS(328),
    [anon_sym_PERCENTr10b] = ACTIONS(328),
    [anon_sym_PERCENTr11b] = ACTIONS(328),
    [anon_sym_PERCENTr12b] = ACTIONS(328),
    [anon_sym_PERCENTr13b] = ACTIONS(328),
    [anon_sym_PERCENTr14b] = ACTIONS(328),
    [anon_sym_PERCENTr15b] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_movsq] = ACTIONS(328),
    [anon_sym_cmpsb] = ACTIONS(328),
    [anon_sym_cmpxchg] = ACTIONS(328),
    [anon_sym_movsl] = ACTIONS(328),
    [anon_sym_PERCENTcr0] = ACTIONS(328),
    [anon_sym_PERCENTcr2] = ACTIONS(328),
    [anon_sym_PERCENTcr3] = ACTIONS(328),
    [anon_sym_PERCENTcr4] = ACTIONS(328),
    [anon_sym_PERCENTrip] = ACTIONS(328),
    [anon_sym_PERCENTeip] = ACTIONS(328),
    [anon_sym_PERCENTip] = ACTIONS(328),
    [anon_sym_PERCENTst] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(328),
  },
  [29] = {
    [aux_sym_comment_token1] = ACTIONS(332),
    [aux_sym_comment_token2] = ACTIONS(332),
    [sym__line_break] = ACTIONS(334),
    [anon_sym_f] = ACTIONS(332),
    [aux_sym_operand_token1] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(332),
    [anon_sym_DOLLAR] = ACTIONS(332),
    [anon_sym_PERCENTss] = ACTIONS(332),
    [anon_sym_PERCENTcs] = ACTIONS(332),
    [anon_sym_PERCENTds] = ACTIONS(332),
    [anon_sym_PERCENTes] = ACTIONS(332),
    [anon_sym_PERCENTfs] = ACTIONS(332),
    [anon_sym_PERCENTgs] = ACTIONS(332),
    [anon_sym_PERCENTrax] = ACTIONS(332),
    [anon_sym_PERCENTrbx] = ACTIONS(332),
    [anon_sym_PERCENTrcx] = ACTIONS(332),
    [anon_sym_PERCENTrdx] = ACTIONS(332),
    [anon_sym_PERCENTrsi] = ACTIONS(332),
    [anon_sym_PERCENTrdi] = ACTIONS(332),
    [anon_sym_PERCENTrbp] = ACTIONS(332),
    [anon_sym_PERCENTrsp] = ACTIONS(332),
    [anon_sym_PERCENTr8] = ACTIONS(332),
    [anon_sym_PERCENTr9] = ACTIONS(332),
    [anon_sym_PERCENTr10] = ACTIONS(332),
    [anon_sym_PERCENTr11] = ACTIONS(332),
    [anon_sym_PERCENTr12] = ACTIONS(332),
    [anon_sym_PERCENTr13] = ACTIONS(332),
    [anon_sym_PERCENTr14] = ACTIONS(332),
    [anon_sym_PERCENTr15] = ACTIONS(332),
    [anon_sym_PERCENTeax] = ACTIONS(332),
    [anon_sym_PERCENTecx] = ACTIONS(332),
    [anon_sym_PERCENTedx] = ACTIONS(332),
    [anon_sym_PERCENTebx] = ACTIONS(332),
    [anon_sym_PERCENTesi] = ACTIONS(332),
    [anon_sym_PERCENTedi] = ACTIONS(332),
    [anon_sym_PERCENTebp] = ACTIONS(332),
    [anon_sym_PERCENTesp] = ACTIONS(332),
    [anon_sym_PERCENTr8d] = ACTIONS(332),
    [anon_sym_PERCENTr9d] = ACTIONS(332),
    [anon_sym_PERCENTr10d] = ACTIONS(332),
    [anon_sym_PERCENTr11d] = ACTIONS(332),
    [anon_sym_PERCENTr12d] = ACTIONS(332),
    [anon_sym_PERCENTr13d] = ACTIONS(332),
    [anon_sym_PERCENTr14d] = ACTIONS(332),
    [anon_sym_PERCENTr15d] = ACTIONS(332),
    [anon_sym_PERCENTax] = ACTIONS(332),
    [anon_sym_PERCENTcx] = ACTIONS(332),
    [anon_sym_PERCENTdx] = ACTIONS(332),
    [anon_sym_PERCENTbx] = ACTIONS(332),
    [anon_sym_PERCENTsi] = ACTIONS(332),
    [anon_sym_PERCENTdi] = ACTIONS(332),
    [anon_sym_PERCENTsp] = ACTIONS(332),
    [anon_sym_PERCENTbp] = ACTIONS(332),
    [anon_sym_PERCENTr8w] = ACTIONS(332),
    [anon_sym_PERCENTr9w] = ACTIONS(332),
    [anon_sym_PERCENTr10w] = ACTIONS(332),
    [anon_sym_PERCENTr11w] = ACTIONS(332),
    [anon_sym_PERCENTr12w] = ACTIONS(332),
    [anon_sym_PERCENTr13w] = ACTIONS(332),
    [anon_sym_PERCENTr14w] = ACTIONS(332),
    [anon_sym_PERCENTr15w] = ACTIONS(332),
    [anon_sym_PERCENTal] = ACTIONS(332),
    [anon_sym_PERCENTcl] = ACTIONS(332),
    [anon_sym_PERCENTdl] = ACTIONS(332),
    [anon_sym_PERCENTbl] = ACTIONS(332),
    [anon_sym_PERCENTsil] = ACTIONS(332),
    [anon_sym_PERCENTdil] = ACTIONS(332),
    [anon_sym_PERCENTspl] = ACTIONS(332),
    [anon_sym_PERCENTbpl] = ACTIONS(332),
    [anon_sym_PERCENTr8b] = ACTIONS(332),
    [anon_sym_PERCENTr9b] = ACTIONS(332),
    [anon_sym_PERCENTr10b] = ACTIONS(332),
    [anon_sym_PERCENTr11b] = ACTIONS(332),
    [anon_sym_PERCENTr12b] = ACTIONS(332),
    [anon_sym_PERCENTr13b] = ACTIONS(332),
    [anon_sym_PERCENTr14b] = ACTIONS(332),
    [anon_sym_PERCENTr15b] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_movsq] = ACTIONS(332),
    [anon_sym_cmpsb] = ACTIONS(332),
    [anon_sym_cmpxchg] = ACTIONS(332),
    [anon_sym_movsl] = ACTIONS(332),
    [anon_sym_PERCENTcr0] = ACTIONS(332),
    [anon_sym_PERCENTcr2] = ACTIONS(332),
    [anon_sym_PERCENTcr3] = ACTIONS(332),
    [anon_sym_PERCENTcr4] = ACTIONS(332),
    [anon_sym_PERCENTrip] = ACTIONS(332),
    [anon_sym_PERCENTeip] = ACTIONS(332),
    [anon_sym_PERCENTip] = ACTIONS(332),
    [anon_sym_PERCENTst] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(332),
  },
  [30] = {
    [sym_registerOperand] = STATE(251),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(303),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(336),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [31] = {
    [aux_sym_comment_token1] = ACTIONS(338),
    [aux_sym_comment_token2] = ACTIONS(338),
    [sym__line_break] = ACTIONS(340),
    [anon_sym_f] = ACTIONS(338),
    [aux_sym_operand_token1] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_DOLLAR] = ACTIONS(338),
    [anon_sym_PERCENTss] = ACTIONS(338),
    [anon_sym_PERCENTcs] = ACTIONS(338),
    [anon_sym_PERCENTds] = ACTIONS(338),
    [anon_sym_PERCENTes] = ACTIONS(338),
    [anon_sym_PERCENTfs] = ACTIONS(338),
    [anon_sym_PERCENTgs] = ACTIONS(338),
    [anon_sym_PERCENTrax] = ACTIONS(338),
    [anon_sym_PERCENTrbx] = ACTIONS(338),
    [anon_sym_PERCENTrcx] = ACTIONS(338),
    [anon_sym_PERCENTrdx] = ACTIONS(338),
    [anon_sym_PERCENTrsi] = ACTIONS(338),
    [anon_sym_PERCENTrdi] = ACTIONS(338),
    [anon_sym_PERCENTrbp] = ACTIONS(338),
    [anon_sym_PERCENTrsp] = ACTIONS(338),
    [anon_sym_PERCENTr8] = ACTIONS(338),
    [anon_sym_PERCENTr9] = ACTIONS(338),
    [anon_sym_PERCENTr10] = ACTIONS(338),
    [anon_sym_PERCENTr11] = ACTIONS(338),
    [anon_sym_PERCENTr12] = ACTIONS(338),
    [anon_sym_PERCENTr13] = ACTIONS(338),
    [anon_sym_PERCENTr14] = ACTIONS(338),
    [anon_sym_PERCENTr15] = ACTIONS(338),
    [anon_sym_PERCENTeax] = ACTIONS(338),
    [anon_sym_PERCENTecx] = ACTIONS(338),
    [anon_sym_PERCENTedx] = ACTIONS(338),
    [anon_sym_PERCENTebx] = ACTIONS(338),
    [anon_sym_PERCENTesi] = ACTIONS(338),
    [anon_sym_PERCENTedi] = ACTIONS(338),
    [anon_sym_PERCENTebp] = ACTIONS(338),
    [anon_sym_PERCENTesp] = ACTIONS(338),
    [anon_sym_PERCENTr8d] = ACTIONS(338),
    [anon_sym_PERCENTr9d] = ACTIONS(338),
    [anon_sym_PERCENTr10d] = ACTIONS(338),
    [anon_sym_PERCENTr11d] = ACTIONS(338),
    [anon_sym_PERCENTr12d] = ACTIONS(338),
    [anon_sym_PERCENTr13d] = ACTIONS(338),
    [anon_sym_PERCENTr14d] = ACTIONS(338),
    [anon_sym_PERCENTr15d] = ACTIONS(338),
    [anon_sym_PERCENTax] = ACTIONS(338),
    [anon_sym_PERCENTcx] = ACTIONS(338),
    [anon_sym_PERCENTdx] = ACTIONS(338),
    [anon_sym_PERCENTbx] = ACTIONS(338),
    [anon_sym_PERCENTsi] = ACTIONS(338),
    [anon_sym_PERCENTdi] = ACTIONS(338),
    [anon_sym_PERCENTsp] = ACTIONS(338),
    [anon_sym_PERCENTbp] = ACTIONS(338),
    [anon_sym_PERCENTr8w] = ACTIONS(338),
    [anon_sym_PERCENTr9w] = ACTIONS(338),
    [anon_sym_PERCENTr10w] = ACTIONS(338),
    [anon_sym_PERCENTr11w] = ACTIONS(338),
    [anon_sym_PERCENTr12w] = ACTIONS(338),
    [anon_sym_PERCENTr13w] = ACTIONS(338),
    [anon_sym_PERCENTr14w] = ACTIONS(338),
    [anon_sym_PERCENTr15w] = ACTIONS(338),
    [anon_sym_PERCENTal] = ACTIONS(338),
    [anon_sym_PERCENTcl] = ACTIONS(338),
    [anon_sym_PERCENTdl] = ACTIONS(338),
    [anon_sym_PERCENTbl] = ACTIONS(338),
    [anon_sym_PERCENTsil] = ACTIONS(338),
    [anon_sym_PERCENTdil] = ACTIONS(338),
    [anon_sym_PERCENTspl] = ACTIONS(338),
    [anon_sym_PERCENTbpl] = ACTIONS(338),
    [anon_sym_PERCENTr8b] = ACTIONS(338),
    [anon_sym_PERCENTr9b] = ACTIONS(338),
    [anon_sym_PERCENTr10b] = ACTIONS(338),
    [anon_sym_PERCENTr11b] = ACTIONS(338),
    [anon_sym_PERCENTr12b] = ACTIONS(338),
    [anon_sym_PERCENTr13b] = ACTIONS(338),
    [anon_sym_PERCENTr14b] = ACTIONS(338),
    [anon_sym_PERCENTr15b] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_movsq] = ACTIONS(338),
    [anon_sym_cmpsb] = ACTIONS(338),
    [anon_sym_cmpxchg] = ACTIONS(338),
    [anon_sym_movsl] = ACTIONS(338),
    [anon_sym_PERCENTcr0] = ACTIONS(338),
    [anon_sym_PERCENTcr2] = ACTIONS(338),
    [anon_sym_PERCENTcr3] = ACTIONS(338),
    [anon_sym_PERCENTcr4] = ACTIONS(338),
    [anon_sym_PERCENTrip] = ACTIONS(338),
    [anon_sym_PERCENTeip] = ACTIONS(338),
    [anon_sym_PERCENTip] = ACTIONS(338),
    [anon_sym_PERCENTst] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
  },
  [32] = {
    [sym_registerOperand] = STATE(246),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(302),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(284),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [33] = {
    [sym_registerOperand] = STATE(244),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(301),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(342),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [34] = {
    [sym_registerOperand] = STATE(243),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(300),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(344),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [35] = {
    [sym_registerOperand] = STATE(198),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(294),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(346),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [36] = {
    [sym_registerOperand] = STATE(188),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(271),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(348),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [37] = {
    [aux_sym_comment_token1] = ACTIONS(350),
    [aux_sym_comment_token2] = ACTIONS(350),
    [sym__line_break] = ACTIONS(352),
    [anon_sym_f] = ACTIONS(350),
    [aux_sym_operand_token1] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(350),
    [anon_sym_DOLLAR] = ACTIONS(350),
    [anon_sym_PERCENTss] = ACTIONS(350),
    [anon_sym_PERCENTcs] = ACTIONS(350),
    [anon_sym_PERCENTds] = ACTIONS(350),
    [anon_sym_PERCENTes] = ACTIONS(350),
    [anon_sym_PERCENTfs] = ACTIONS(350),
    [anon_sym_PERCENTgs] = ACTIONS(350),
    [anon_sym_PERCENTrax] = ACTIONS(350),
    [anon_sym_PERCENTrbx] = ACTIONS(350),
    [anon_sym_PERCENTrcx] = ACTIONS(350),
    [anon_sym_PERCENTrdx] = ACTIONS(350),
    [anon_sym_PERCENTrsi] = ACTIONS(350),
    [anon_sym_PERCENTrdi] = ACTIONS(350),
    [anon_sym_PERCENTrbp] = ACTIONS(350),
    [anon_sym_PERCENTrsp] = ACTIONS(350),
    [anon_sym_PERCENTr8] = ACTIONS(350),
    [anon_sym_PERCENTr9] = ACTIONS(350),
    [anon_sym_PERCENTr10] = ACTIONS(350),
    [anon_sym_PERCENTr11] = ACTIONS(350),
    [anon_sym_PERCENTr12] = ACTIONS(350),
    [anon_sym_PERCENTr13] = ACTIONS(350),
    [anon_sym_PERCENTr14] = ACTIONS(350),
    [anon_sym_PERCENTr15] = ACTIONS(350),
    [anon_sym_PERCENTeax] = ACTIONS(350),
    [anon_sym_PERCENTecx] = ACTIONS(350),
    [anon_sym_PERCENTedx] = ACTIONS(350),
    [anon_sym_PERCENTebx] = ACTIONS(350),
    [anon_sym_PERCENTesi] = ACTIONS(350),
    [anon_sym_PERCENTedi] = ACTIONS(350),
    [anon_sym_PERCENTebp] = ACTIONS(350),
    [anon_sym_PERCENTesp] = ACTIONS(350),
    [anon_sym_PERCENTr8d] = ACTIONS(350),
    [anon_sym_PERCENTr9d] = ACTIONS(350),
    [anon_sym_PERCENTr10d] = ACTIONS(350),
    [anon_sym_PERCENTr11d] = ACTIONS(350),
    [anon_sym_PERCENTr12d] = ACTIONS(350),
    [anon_sym_PERCENTr13d] = ACTIONS(350),
    [anon_sym_PERCENTr14d] = ACTIONS(350),
    [anon_sym_PERCENTr15d] = ACTIONS(350),
    [anon_sym_PERCENTax] = ACTIONS(350),
    [anon_sym_PERCENTcx] = ACTIONS(350),
    [anon_sym_PERCENTdx] = ACTIONS(350),
    [anon_sym_PERCENTbx] = ACTIONS(350),
    [anon_sym_PERCENTsi] = ACTIONS(350),
    [anon_sym_PERCENTdi] = ACTIONS(350),
    [anon_sym_PERCENTsp] = ACTIONS(350),
    [anon_sym_PERCENTbp] = ACTIONS(350),
    [anon_sym_PERCENTr8w] = ACTIONS(350),
    [anon_sym_PERCENTr9w] = ACTIONS(350),
    [anon_sym_PERCENTr10w] = ACTIONS(350),
    [anon_sym_PERCENTr11w] = ACTIONS(350),
    [anon_sym_PERCENTr12w] = ACTIONS(350),
    [anon_sym_PERCENTr13w] = ACTIONS(350),
    [anon_sym_PERCENTr14w] = ACTIONS(350),
    [anon_sym_PERCENTr15w] = ACTIONS(350),
    [anon_sym_PERCENTal] = ACTIONS(350),
    [anon_sym_PERCENTcl] = ACTIONS(350),
    [anon_sym_PERCENTdl] = ACTIONS(350),
    [anon_sym_PERCENTbl] = ACTIONS(350),
    [anon_sym_PERCENTsil] = ACTIONS(350),
    [anon_sym_PERCENTdil] = ACTIONS(350),
    [anon_sym_PERCENTspl] = ACTIONS(350),
    [anon_sym_PERCENTbpl] = ACTIONS(350),
    [anon_sym_PERCENTr8b] = ACTIONS(350),
    [anon_sym_PERCENTr9b] = ACTIONS(350),
    [anon_sym_PERCENTr10b] = ACTIONS(350),
    [anon_sym_PERCENTr11b] = ACTIONS(350),
    [anon_sym_PERCENTr12b] = ACTIONS(350),
    [anon_sym_PERCENTr13b] = ACTIONS(350),
    [anon_sym_PERCENTr14b] = ACTIONS(350),
    [anon_sym_PERCENTr15b] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_movsq] = ACTIONS(350),
    [anon_sym_cmpsb] = ACTIONS(350),
    [anon_sym_cmpxchg] = ACTIONS(350),
    [anon_sym_movsl] = ACTIONS(350),
    [anon_sym_PERCENTcr0] = ACTIONS(350),
    [anon_sym_PERCENTcr2] = ACTIONS(350),
    [anon_sym_PERCENTcr3] = ACTIONS(350),
    [anon_sym_PERCENTcr4] = ACTIONS(350),
    [anon_sym_PERCENTrip] = ACTIONS(350),
    [anon_sym_PERCENTeip] = ACTIONS(350),
    [anon_sym_PERCENTip] = ACTIONS(350),
    [anon_sym_PERCENTst] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(350),
  },
  [38] = {
    [aux_sym_comment_token1] = ACTIONS(354),
    [aux_sym_comment_token2] = ACTIONS(354),
    [sym__line_break] = ACTIONS(356),
    [anon_sym_f] = ACTIONS(354),
    [aux_sym_operand_token1] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(354),
    [anon_sym_DOLLAR] = ACTIONS(354),
    [anon_sym_PERCENTss] = ACTIONS(354),
    [anon_sym_PERCENTcs] = ACTIONS(354),
    [anon_sym_PERCENTds] = ACTIONS(354),
    [anon_sym_PERCENTes] = ACTIONS(354),
    [anon_sym_PERCENTfs] = ACTIONS(354),
    [anon_sym_PERCENTgs] = ACTIONS(354),
    [anon_sym_PERCENTrax] = ACTIONS(354),
    [anon_sym_PERCENTrbx] = ACTIONS(354),
    [anon_sym_PERCENTrcx] = ACTIONS(354),
    [anon_sym_PERCENTrdx] = ACTIONS(354),
    [anon_sym_PERCENTrsi] = ACTIONS(354),
    [anon_sym_PERCENTrdi] = ACTIONS(354),
    [anon_sym_PERCENTrbp] = ACTIONS(354),
    [anon_sym_PERCENTrsp] = ACTIONS(354),
    [anon_sym_PERCENTr8] = ACTIONS(354),
    [anon_sym_PERCENTr9] = ACTIONS(354),
    [anon_sym_PERCENTr10] = ACTIONS(354),
    [anon_sym_PERCENTr11] = ACTIONS(354),
    [anon_sym_PERCENTr12] = ACTIONS(354),
    [anon_sym_PERCENTr13] = ACTIONS(354),
    [anon_sym_PERCENTr14] = ACTIONS(354),
    [anon_sym_PERCENTr15] = ACTIONS(354),
    [anon_sym_PERCENTeax] = ACTIONS(354),
    [anon_sym_PERCENTecx] = ACTIONS(354),
    [anon_sym_PERCENTedx] = ACTIONS(354),
    [anon_sym_PERCENTebx] = ACTIONS(354),
    [anon_sym_PERCENTesi] = ACTIONS(354),
    [anon_sym_PERCENTedi] = ACTIONS(354),
    [anon_sym_PERCENTebp] = ACTIONS(354),
    [anon_sym_PERCENTesp] = ACTIONS(354),
    [anon_sym_PERCENTr8d] = ACTIONS(354),
    [anon_sym_PERCENTr9d] = ACTIONS(354),
    [anon_sym_PERCENTr10d] = ACTIONS(354),
    [anon_sym_PERCENTr11d] = ACTIONS(354),
    [anon_sym_PERCENTr12d] = ACTIONS(354),
    [anon_sym_PERCENTr13d] = ACTIONS(354),
    [anon_sym_PERCENTr14d] = ACTIONS(354),
    [anon_sym_PERCENTr15d] = ACTIONS(354),
    [anon_sym_PERCENTax] = ACTIONS(354),
    [anon_sym_PERCENTcx] = ACTIONS(354),
    [anon_sym_PERCENTdx] = ACTIONS(354),
    [anon_sym_PERCENTbx] = ACTIONS(354),
    [anon_sym_PERCENTsi] = ACTIONS(354),
    [anon_sym_PERCENTdi] = ACTIONS(354),
    [anon_sym_PERCENTsp] = ACTIONS(354),
    [anon_sym_PERCENTbp] = ACTIONS(354),
    [anon_sym_PERCENTr8w] = ACTIONS(354),
    [anon_sym_PERCENTr9w] = ACTIONS(354),
    [anon_sym_PERCENTr10w] = ACTIONS(354),
    [anon_sym_PERCENTr11w] = ACTIONS(354),
    [anon_sym_PERCENTr12w] = ACTIONS(354),
    [anon_sym_PERCENTr13w] = ACTIONS(354),
    [anon_sym_PERCENTr14w] = ACTIONS(354),
    [anon_sym_PERCENTr15w] = ACTIONS(354),
    [anon_sym_PERCENTal] = ACTIONS(354),
    [anon_sym_PERCENTcl] = ACTIONS(354),
    [anon_sym_PERCENTdl] = ACTIONS(354),
    [anon_sym_PERCENTbl] = ACTIONS(354),
    [anon_sym_PERCENTsil] = ACTIONS(354),
    [anon_sym_PERCENTdil] = ACTIONS(354),
    [anon_sym_PERCENTspl] = ACTIONS(354),
    [anon_sym_PERCENTbpl] = ACTIONS(354),
    [anon_sym_PERCENTr8b] = ACTIONS(354),
    [anon_sym_PERCENTr9b] = ACTIONS(354),
    [anon_sym_PERCENTr10b] = ACTIONS(354),
    [anon_sym_PERCENTr11b] = ACTIONS(354),
    [anon_sym_PERCENTr12b] = ACTIONS(354),
    [anon_sym_PERCENTr13b] = ACTIONS(354),
    [anon_sym_PERCENTr14b] = ACTIONS(354),
    [anon_sym_PERCENTr15b] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_movsq] = ACTIONS(354),
    [anon_sym_cmpsb] = ACTIONS(354),
    [anon_sym_cmpxchg] = ACTIONS(354),
    [anon_sym_movsl] = ACTIONS(354),
    [anon_sym_PERCENTcr0] = ACTIONS(354),
    [anon_sym_PERCENTcr2] = ACTIONS(354),
    [anon_sym_PERCENTcr3] = ACTIONS(354),
    [anon_sym_PERCENTcr4] = ACTIONS(354),
    [anon_sym_PERCENTrip] = ACTIONS(354),
    [anon_sym_PERCENTeip] = ACTIONS(354),
    [anon_sym_PERCENTip] = ACTIONS(354),
    [anon_sym_PERCENTst] = ACTIONS(354),
    [anon_sym_PERCENT] = ACTIONS(354),
  },
  [39] = {
    [aux_sym_comment_token1] = ACTIONS(358),
    [aux_sym_comment_token2] = ACTIONS(358),
    [sym__line_break] = ACTIONS(360),
    [anon_sym_f] = ACTIONS(358),
    [aux_sym_operand_token1] = ACTIONS(358),
    [anon_sym_LT] = ACTIONS(358),
    [anon_sym_DOLLAR] = ACTIONS(358),
    [anon_sym_PERCENTss] = ACTIONS(358),
    [anon_sym_PERCENTcs] = ACTIONS(358),
    [anon_sym_PERCENTds] = ACTIONS(358),
    [anon_sym_PERCENTes] = ACTIONS(358),
    [anon_sym_PERCENTfs] = ACTIONS(358),
    [anon_sym_PERCENTgs] = ACTIONS(358),
    [anon_sym_PERCENTrax] = ACTIONS(358),
    [anon_sym_PERCENTrbx] = ACTIONS(358),
    [anon_sym_PERCENTrcx] = ACTIONS(358),
    [anon_sym_PERCENTrdx] = ACTIONS(358),
    [anon_sym_PERCENTrsi] = ACTIONS(358),
    [anon_sym_PERCENTrdi] = ACTIONS(358),
    [anon_sym_PERCENTrbp] = ACTIONS(358),
    [anon_sym_PERCENTrsp] = ACTIONS(358),
    [anon_sym_PERCENTr8] = ACTIONS(358),
    [anon_sym_PERCENTr9] = ACTIONS(358),
    [anon_sym_PERCENTr10] = ACTIONS(358),
    [anon_sym_PERCENTr11] = ACTIONS(358),
    [anon_sym_PERCENTr12] = ACTIONS(358),
    [anon_sym_PERCENTr13] = ACTIONS(358),
    [anon_sym_PERCENTr14] = ACTIONS(358),
    [anon_sym_PERCENTr15] = ACTIONS(358),
    [anon_sym_PERCENTeax] = ACTIONS(358),
    [anon_sym_PERCENTecx] = ACTIONS(358),
    [anon_sym_PERCENTedx] = ACTIONS(358),
    [anon_sym_PERCENTebx] = ACTIONS(358),
    [anon_sym_PERCENTesi] = ACTIONS(358),
    [anon_sym_PERCENTedi] = ACTIONS(358),
    [anon_sym_PERCENTebp] = ACTIONS(358),
    [anon_sym_PERCENTesp] = ACTIONS(358),
    [anon_sym_PERCENTr8d] = ACTIONS(358),
    [anon_sym_PERCENTr9d] = ACTIONS(358),
    [anon_sym_PERCENTr10d] = ACTIONS(358),
    [anon_sym_PERCENTr11d] = ACTIONS(358),
    [anon_sym_PERCENTr12d] = ACTIONS(358),
    [anon_sym_PERCENTr13d] = ACTIONS(358),
    [anon_sym_PERCENTr14d] = ACTIONS(358),
    [anon_sym_PERCENTr15d] = ACTIONS(358),
    [anon_sym_PERCENTax] = ACTIONS(358),
    [anon_sym_PERCENTcx] = ACTIONS(358),
    [anon_sym_PERCENTdx] = ACTIONS(358),
    [anon_sym_PERCENTbx] = ACTIONS(358),
    [anon_sym_PERCENTsi] = ACTIONS(358),
    [anon_sym_PERCENTdi] = ACTIONS(358),
    [anon_sym_PERCENTsp] = ACTIONS(358),
    [anon_sym_PERCENTbp] = ACTIONS(358),
    [anon_sym_PERCENTr8w] = ACTIONS(358),
    [anon_sym_PERCENTr9w] = ACTIONS(358),
    [anon_sym_PERCENTr10w] = ACTIONS(358),
    [anon_sym_PERCENTr11w] = ACTIONS(358),
    [anon_sym_PERCENTr12w] = ACTIONS(358),
    [anon_sym_PERCENTr13w] = ACTIONS(358),
    [anon_sym_PERCENTr14w] = ACTIONS(358),
    [anon_sym_PERCENTr15w] = ACTIONS(358),
    [anon_sym_PERCENTal] = ACTIONS(358),
    [anon_sym_PERCENTcl] = ACTIONS(358),
    [anon_sym_PERCENTdl] = ACTIONS(358),
    [anon_sym_PERCENTbl] = ACTIONS(358),
    [anon_sym_PERCENTsil] = ACTIONS(358),
    [anon_sym_PERCENTdil] = ACTIONS(358),
    [anon_sym_PERCENTspl] = ACTIONS(358),
    [anon_sym_PERCENTbpl] = ACTIONS(358),
    [anon_sym_PERCENTr8b] = ACTIONS(358),
    [anon_sym_PERCENTr9b] = ACTIONS(358),
    [anon_sym_PERCENTr10b] = ACTIONS(358),
    [anon_sym_PERCENTr11b] = ACTIONS(358),
    [anon_sym_PERCENTr12b] = ACTIONS(358),
    [anon_sym_PERCENTr13b] = ACTIONS(358),
    [anon_sym_PERCENTr14b] = ACTIONS(358),
    [anon_sym_PERCENTr15b] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_movsq] = ACTIONS(358),
    [anon_sym_cmpsb] = ACTIONS(358),
    [anon_sym_cmpxchg] = ACTIONS(358),
    [anon_sym_movsl] = ACTIONS(358),
    [anon_sym_PERCENTcr0] = ACTIONS(358),
    [anon_sym_PERCENTcr2] = ACTIONS(358),
    [anon_sym_PERCENTcr3] = ACTIONS(358),
    [anon_sym_PERCENTcr4] = ACTIONS(358),
    [anon_sym_PERCENTrip] = ACTIONS(358),
    [anon_sym_PERCENTeip] = ACTIONS(358),
    [anon_sym_PERCENTip] = ACTIONS(358),
    [anon_sym_PERCENTst] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(358),
  },
  [40] = {
    [aux_sym_comment_token1] = ACTIONS(362),
    [aux_sym_comment_token2] = ACTIONS(362),
    [sym__line_break] = ACTIONS(364),
    [anon_sym_f] = ACTIONS(362),
    [aux_sym_operand_token1] = ACTIONS(362),
    [anon_sym_LT] = ACTIONS(362),
    [anon_sym_DOLLAR] = ACTIONS(362),
    [anon_sym_PERCENTss] = ACTIONS(362),
    [anon_sym_PERCENTcs] = ACTIONS(362),
    [anon_sym_PERCENTds] = ACTIONS(362),
    [anon_sym_PERCENTes] = ACTIONS(362),
    [anon_sym_PERCENTfs] = ACTIONS(362),
    [anon_sym_PERCENTgs] = ACTIONS(362),
    [anon_sym_PERCENTrax] = ACTIONS(362),
    [anon_sym_PERCENTrbx] = ACTIONS(362),
    [anon_sym_PERCENTrcx] = ACTIONS(362),
    [anon_sym_PERCENTrdx] = ACTIONS(362),
    [anon_sym_PERCENTrsi] = ACTIONS(362),
    [anon_sym_PERCENTrdi] = ACTIONS(362),
    [anon_sym_PERCENTrbp] = ACTIONS(362),
    [anon_sym_PERCENTrsp] = ACTIONS(362),
    [anon_sym_PERCENTr8] = ACTIONS(362),
    [anon_sym_PERCENTr9] = ACTIONS(362),
    [anon_sym_PERCENTr10] = ACTIONS(362),
    [anon_sym_PERCENTr11] = ACTIONS(362),
    [anon_sym_PERCENTr12] = ACTIONS(362),
    [anon_sym_PERCENTr13] = ACTIONS(362),
    [anon_sym_PERCENTr14] = ACTIONS(362),
    [anon_sym_PERCENTr15] = ACTIONS(362),
    [anon_sym_PERCENTeax] = ACTIONS(362),
    [anon_sym_PERCENTecx] = ACTIONS(362),
    [anon_sym_PERCENTedx] = ACTIONS(362),
    [anon_sym_PERCENTebx] = ACTIONS(362),
    [anon_sym_PERCENTesi] = ACTIONS(362),
    [anon_sym_PERCENTedi] = ACTIONS(362),
    [anon_sym_PERCENTebp] = ACTIONS(362),
    [anon_sym_PERCENTesp] = ACTIONS(362),
    [anon_sym_PERCENTr8d] = ACTIONS(362),
    [anon_sym_PERCENTr9d] = ACTIONS(362),
    [anon_sym_PERCENTr10d] = ACTIONS(362),
    [anon_sym_PERCENTr11d] = ACTIONS(362),
    [anon_sym_PERCENTr12d] = ACTIONS(362),
    [anon_sym_PERCENTr13d] = ACTIONS(362),
    [anon_sym_PERCENTr14d] = ACTIONS(362),
    [anon_sym_PERCENTr15d] = ACTIONS(362),
    [anon_sym_PERCENTax] = ACTIONS(362),
    [anon_sym_PERCENTcx] = ACTIONS(362),
    [anon_sym_PERCENTdx] = ACTIONS(362),
    [anon_sym_PERCENTbx] = ACTIONS(362),
    [anon_sym_PERCENTsi] = ACTIONS(362),
    [anon_sym_PERCENTdi] = ACTIONS(362),
    [anon_sym_PERCENTsp] = ACTIONS(362),
    [anon_sym_PERCENTbp] = ACTIONS(362),
    [anon_sym_PERCENTr8w] = ACTIONS(362),
    [anon_sym_PERCENTr9w] = ACTIONS(362),
    [anon_sym_PERCENTr10w] = ACTIONS(362),
    [anon_sym_PERCENTr11w] = ACTIONS(362),
    [anon_sym_PERCENTr12w] = ACTIONS(362),
    [anon_sym_PERCENTr13w] = ACTIONS(362),
    [anon_sym_PERCENTr14w] = ACTIONS(362),
    [anon_sym_PERCENTr15w] = ACTIONS(362),
    [anon_sym_PERCENTal] = ACTIONS(362),
    [anon_sym_PERCENTcl] = ACTIONS(362),
    [anon_sym_PERCENTdl] = ACTIONS(362),
    [anon_sym_PERCENTbl] = ACTIONS(362),
    [anon_sym_PERCENTsil] = ACTIONS(362),
    [anon_sym_PERCENTdil] = ACTIONS(362),
    [anon_sym_PERCENTspl] = ACTIONS(362),
    [anon_sym_PERCENTbpl] = ACTIONS(362),
    [anon_sym_PERCENTr8b] = ACTIONS(362),
    [anon_sym_PERCENTr9b] = ACTIONS(362),
    [anon_sym_PERCENTr10b] = ACTIONS(362),
    [anon_sym_PERCENTr11b] = ACTIONS(362),
    [anon_sym_PERCENTr12b] = ACTIONS(362),
    [anon_sym_PERCENTr13b] = ACTIONS(362),
    [anon_sym_PERCENTr14b] = ACTIONS(362),
    [anon_sym_PERCENTr15b] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_movsq] = ACTIONS(362),
    [anon_sym_cmpsb] = ACTIONS(362),
    [anon_sym_cmpxchg] = ACTIONS(362),
    [anon_sym_movsl] = ACTIONS(362),
    [anon_sym_PERCENTcr0] = ACTIONS(362),
    [anon_sym_PERCENTcr2] = ACTIONS(362),
    [anon_sym_PERCENTcr3] = ACTIONS(362),
    [anon_sym_PERCENTcr4] = ACTIONS(362),
    [anon_sym_PERCENTrip] = ACTIONS(362),
    [anon_sym_PERCENTeip] = ACTIONS(362),
    [anon_sym_PERCENTip] = ACTIONS(362),
    [anon_sym_PERCENTst] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
  },
  [41] = {
    [sym_registerOperand] = STATE(234),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_base] = STATE(257),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [sym__comma] = ACTIONS(366),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [42] = {
    [aux_sym_comment_token1] = ACTIONS(368),
    [aux_sym_comment_token2] = ACTIONS(368),
    [sym__line_break] = ACTIONS(370),
    [anon_sym_f] = ACTIONS(368),
    [aux_sym_operand_token1] = ACTIONS(368),
    [anon_sym_LT] = ACTIONS(368),
    [anon_sym_DOLLAR] = ACTIONS(368),
    [anon_sym_PERCENTss] = ACTIONS(368),
    [anon_sym_PERCENTcs] = ACTIONS(368),
    [anon_sym_PERCENTds] = ACTIONS(368),
    [anon_sym_PERCENTes] = ACTIONS(368),
    [anon_sym_PERCENTfs] = ACTIONS(368),
    [anon_sym_PERCENTgs] = ACTIONS(368),
    [anon_sym_PERCENTrax] = ACTIONS(368),
    [anon_sym_PERCENTrbx] = ACTIONS(368),
    [anon_sym_PERCENTrcx] = ACTIONS(368),
    [anon_sym_PERCENTrdx] = ACTIONS(368),
    [anon_sym_PERCENTrsi] = ACTIONS(368),
    [anon_sym_PERCENTrdi] = ACTIONS(368),
    [anon_sym_PERCENTrbp] = ACTIONS(368),
    [anon_sym_PERCENTrsp] = ACTIONS(368),
    [anon_sym_PERCENTr8] = ACTIONS(368),
    [anon_sym_PERCENTr9] = ACTIONS(368),
    [anon_sym_PERCENTr10] = ACTIONS(368),
    [anon_sym_PERCENTr11] = ACTIONS(368),
    [anon_sym_PERCENTr12] = ACTIONS(368),
    [anon_sym_PERCENTr13] = ACTIONS(368),
    [anon_sym_PERCENTr14] = ACTIONS(368),
    [anon_sym_PERCENTr15] = ACTIONS(368),
    [anon_sym_PERCENTeax] = ACTIONS(368),
    [anon_sym_PERCENTecx] = ACTIONS(368),
    [anon_sym_PERCENTedx] = ACTIONS(368),
    [anon_sym_PERCENTebx] = ACTIONS(368),
    [anon_sym_PERCENTesi] = ACTIONS(368),
    [anon_sym_PERCENTedi] = ACTIONS(368),
    [anon_sym_PERCENTebp] = ACTIONS(368),
    [anon_sym_PERCENTesp] = ACTIONS(368),
    [anon_sym_PERCENTr8d] = ACTIONS(368),
    [anon_sym_PERCENTr9d] = ACTIONS(368),
    [anon_sym_PERCENTr10d] = ACTIONS(368),
    [anon_sym_PERCENTr11d] = ACTIONS(368),
    [anon_sym_PERCENTr12d] = ACTIONS(368),
    [anon_sym_PERCENTr13d] = ACTIONS(368),
    [anon_sym_PERCENTr14d] = ACTIONS(368),
    [anon_sym_PERCENTr15d] = ACTIONS(368),
    [anon_sym_PERCENTax] = ACTIONS(368),
    [anon_sym_PERCENTcx] = ACTIONS(368),
    [anon_sym_PERCENTdx] = ACTIONS(368),
    [anon_sym_PERCENTbx] = ACTIONS(368),
    [anon_sym_PERCENTsi] = ACTIONS(368),
    [anon_sym_PERCENTdi] = ACTIONS(368),
    [anon_sym_PERCENTsp] = ACTIONS(368),
    [anon_sym_PERCENTbp] = ACTIONS(368),
    [anon_sym_PERCENTr8w] = ACTIONS(368),
    [anon_sym_PERCENTr9w] = ACTIONS(368),
    [anon_sym_PERCENTr10w] = ACTIONS(368),
    [anon_sym_PERCENTr11w] = ACTIONS(368),
    [anon_sym_PERCENTr12w] = ACTIONS(368),
    [anon_sym_PERCENTr13w] = ACTIONS(368),
    [anon_sym_PERCENTr14w] = ACTIONS(368),
    [anon_sym_PERCENTr15w] = ACTIONS(368),
    [anon_sym_PERCENTal] = ACTIONS(368),
    [anon_sym_PERCENTcl] = ACTIONS(368),
    [anon_sym_PERCENTdl] = ACTIONS(368),
    [anon_sym_PERCENTbl] = ACTIONS(368),
    [anon_sym_PERCENTsil] = ACTIONS(368),
    [anon_sym_PERCENTdil] = ACTIONS(368),
    [anon_sym_PERCENTspl] = ACTIONS(368),
    [anon_sym_PERCENTbpl] = ACTIONS(368),
    [anon_sym_PERCENTr8b] = ACTIONS(368),
    [anon_sym_PERCENTr9b] = ACTIONS(368),
    [anon_sym_PERCENTr10b] = ACTIONS(368),
    [anon_sym_PERCENTr11b] = ACTIONS(368),
    [anon_sym_PERCENTr12b] = ACTIONS(368),
    [anon_sym_PERCENTr13b] = ACTIONS(368),
    [anon_sym_PERCENTr14b] = ACTIONS(368),
    [anon_sym_PERCENTr15b] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_movsq] = ACTIONS(368),
    [anon_sym_cmpsb] = ACTIONS(368),
    [anon_sym_cmpxchg] = ACTIONS(368),
    [anon_sym_movsl] = ACTIONS(368),
    [anon_sym_PERCENTcr0] = ACTIONS(368),
    [anon_sym_PERCENTcr2] = ACTIONS(368),
    [anon_sym_PERCENTcr3] = ACTIONS(368),
    [anon_sym_PERCENTcr4] = ACTIONS(368),
    [anon_sym_PERCENTrip] = ACTIONS(368),
    [anon_sym_PERCENTeip] = ACTIONS(368),
    [anon_sym_PERCENTip] = ACTIONS(368),
    [anon_sym_PERCENTst] = ACTIONS(368),
    [anon_sym_PERCENT] = ACTIONS(368),
  },
  [43] = {
    [aux_sym_comment_token1] = ACTIONS(372),
    [aux_sym_comment_token2] = ACTIONS(372),
    [sym__line_break] = ACTIONS(374),
    [anon_sym_f] = ACTIONS(372),
    [aux_sym_operand_token1] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(372),
    [anon_sym_PERCENTss] = ACTIONS(372),
    [anon_sym_PERCENTcs] = ACTIONS(372),
    [anon_sym_PERCENTds] = ACTIONS(372),
    [anon_sym_PERCENTes] = ACTIONS(372),
    [anon_sym_PERCENTfs] = ACTIONS(372),
    [anon_sym_PERCENTgs] = ACTIONS(372),
    [anon_sym_PERCENTrax] = ACTIONS(372),
    [anon_sym_PERCENTrbx] = ACTIONS(372),
    [anon_sym_PERCENTrcx] = ACTIONS(372),
    [anon_sym_PERCENTrdx] = ACTIONS(372),
    [anon_sym_PERCENTrsi] = ACTIONS(372),
    [anon_sym_PERCENTrdi] = ACTIONS(372),
    [anon_sym_PERCENTrbp] = ACTIONS(372),
    [anon_sym_PERCENTrsp] = ACTIONS(372),
    [anon_sym_PERCENTr8] = ACTIONS(372),
    [anon_sym_PERCENTr9] = ACTIONS(372),
    [anon_sym_PERCENTr10] = ACTIONS(372),
    [anon_sym_PERCENTr11] = ACTIONS(372),
    [anon_sym_PERCENTr12] = ACTIONS(372),
    [anon_sym_PERCENTr13] = ACTIONS(372),
    [anon_sym_PERCENTr14] = ACTIONS(372),
    [anon_sym_PERCENTr15] = ACTIONS(372),
    [anon_sym_PERCENTeax] = ACTIONS(372),
    [anon_sym_PERCENTecx] = ACTIONS(372),
    [anon_sym_PERCENTedx] = ACTIONS(372),
    [anon_sym_PERCENTebx] = ACTIONS(372),
    [anon_sym_PERCENTesi] = ACTIONS(372),
    [anon_sym_PERCENTedi] = ACTIONS(372),
    [anon_sym_PERCENTebp] = ACTIONS(372),
    [anon_sym_PERCENTesp] = ACTIONS(372),
    [anon_sym_PERCENTr8d] = ACTIONS(372),
    [anon_sym_PERCENTr9d] = ACTIONS(372),
    [anon_sym_PERCENTr10d] = ACTIONS(372),
    [anon_sym_PERCENTr11d] = ACTIONS(372),
    [anon_sym_PERCENTr12d] = ACTIONS(372),
    [anon_sym_PERCENTr13d] = ACTIONS(372),
    [anon_sym_PERCENTr14d] = ACTIONS(372),
    [anon_sym_PERCENTr15d] = ACTIONS(372),
    [anon_sym_PERCENTax] = ACTIONS(372),
    [anon_sym_PERCENTcx] = ACTIONS(372),
    [anon_sym_PERCENTdx] = ACTIONS(372),
    [anon_sym_PERCENTbx] = ACTIONS(372),
    [anon_sym_PERCENTsi] = ACTIONS(372),
    [anon_sym_PERCENTdi] = ACTIONS(372),
    [anon_sym_PERCENTsp] = ACTIONS(372),
    [anon_sym_PERCENTbp] = ACTIONS(372),
    [anon_sym_PERCENTr8w] = ACTIONS(372),
    [anon_sym_PERCENTr9w] = ACTIONS(372),
    [anon_sym_PERCENTr10w] = ACTIONS(372),
    [anon_sym_PERCENTr11w] = ACTIONS(372),
    [anon_sym_PERCENTr12w] = ACTIONS(372),
    [anon_sym_PERCENTr13w] = ACTIONS(372),
    [anon_sym_PERCENTr14w] = ACTIONS(372),
    [anon_sym_PERCENTr15w] = ACTIONS(372),
    [anon_sym_PERCENTal] = ACTIONS(372),
    [anon_sym_PERCENTcl] = ACTIONS(372),
    [anon_sym_PERCENTdl] = ACTIONS(372),
    [anon_sym_PERCENTbl] = ACTIONS(372),
    [anon_sym_PERCENTsil] = ACTIONS(372),
    [anon_sym_PERCENTdil] = ACTIONS(372),
    [anon_sym_PERCENTspl] = ACTIONS(372),
    [anon_sym_PERCENTbpl] = ACTIONS(372),
    [anon_sym_PERCENTr8b] = ACTIONS(372),
    [anon_sym_PERCENTr9b] = ACTIONS(372),
    [anon_sym_PERCENTr10b] = ACTIONS(372),
    [anon_sym_PERCENTr11b] = ACTIONS(372),
    [anon_sym_PERCENTr12b] = ACTIONS(372),
    [anon_sym_PERCENTr13b] = ACTIONS(372),
    [anon_sym_PERCENTr14b] = ACTIONS(372),
    [anon_sym_PERCENTr15b] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(372),
    [anon_sym_movsq] = ACTIONS(372),
    [anon_sym_cmpsb] = ACTIONS(372),
    [anon_sym_cmpxchg] = ACTIONS(372),
    [anon_sym_movsl] = ACTIONS(372),
    [anon_sym_PERCENTcr0] = ACTIONS(372),
    [anon_sym_PERCENTcr2] = ACTIONS(372),
    [anon_sym_PERCENTcr3] = ACTIONS(372),
    [anon_sym_PERCENTcr4] = ACTIONS(372),
    [anon_sym_PERCENTrip] = ACTIONS(372),
    [anon_sym_PERCENTeip] = ACTIONS(372),
    [anon_sym_PERCENTip] = ACTIONS(372),
    [anon_sym_PERCENTst] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
  },
  [44] = {
    [aux_sym_comment_token1] = ACTIONS(376),
    [aux_sym_comment_token2] = ACTIONS(376),
    [sym__line_break] = ACTIONS(378),
    [anon_sym_f] = ACTIONS(376),
    [aux_sym_operand_token1] = ACTIONS(376),
    [anon_sym_LT] = ACTIONS(376),
    [anon_sym_DOLLAR] = ACTIONS(376),
    [anon_sym_PERCENTss] = ACTIONS(376),
    [anon_sym_PERCENTcs] = ACTIONS(376),
    [anon_sym_PERCENTds] = ACTIONS(376),
    [anon_sym_PERCENTes] = ACTIONS(376),
    [anon_sym_PERCENTfs] = ACTIONS(376),
    [anon_sym_PERCENTgs] = ACTIONS(376),
    [anon_sym_PERCENTrax] = ACTIONS(376),
    [anon_sym_PERCENTrbx] = ACTIONS(376),
    [anon_sym_PERCENTrcx] = ACTIONS(376),
    [anon_sym_PERCENTrdx] = ACTIONS(376),
    [anon_sym_PERCENTrsi] = ACTIONS(376),
    [anon_sym_PERCENTrdi] = ACTIONS(376),
    [anon_sym_PERCENTrbp] = ACTIONS(376),
    [anon_sym_PERCENTrsp] = ACTIONS(376),
    [anon_sym_PERCENTr8] = ACTIONS(376),
    [anon_sym_PERCENTr9] = ACTIONS(376),
    [anon_sym_PERCENTr10] = ACTIONS(376),
    [anon_sym_PERCENTr11] = ACTIONS(376),
    [anon_sym_PERCENTr12] = ACTIONS(376),
    [anon_sym_PERCENTr13] = ACTIONS(376),
    [anon_sym_PERCENTr14] = ACTIONS(376),
    [anon_sym_PERCENTr15] = ACTIONS(376),
    [anon_sym_PERCENTeax] = ACTIONS(376),
    [anon_sym_PERCENTecx] = ACTIONS(376),
    [anon_sym_PERCENTedx] = ACTIONS(376),
    [anon_sym_PERCENTebx] = ACTIONS(376),
    [anon_sym_PERCENTesi] = ACTIONS(376),
    [anon_sym_PERCENTedi] = ACTIONS(376),
    [anon_sym_PERCENTebp] = ACTIONS(376),
    [anon_sym_PERCENTesp] = ACTIONS(376),
    [anon_sym_PERCENTr8d] = ACTIONS(376),
    [anon_sym_PERCENTr9d] = ACTIONS(376),
    [anon_sym_PERCENTr10d] = ACTIONS(376),
    [anon_sym_PERCENTr11d] = ACTIONS(376),
    [anon_sym_PERCENTr12d] = ACTIONS(376),
    [anon_sym_PERCENTr13d] = ACTIONS(376),
    [anon_sym_PERCENTr14d] = ACTIONS(376),
    [anon_sym_PERCENTr15d] = ACTIONS(376),
    [anon_sym_PERCENTax] = ACTIONS(376),
    [anon_sym_PERCENTcx] = ACTIONS(376),
    [anon_sym_PERCENTdx] = ACTIONS(376),
    [anon_sym_PERCENTbx] = ACTIONS(376),
    [anon_sym_PERCENTsi] = ACTIONS(376),
    [anon_sym_PERCENTdi] = ACTIONS(376),
    [anon_sym_PERCENTsp] = ACTIONS(376),
    [anon_sym_PERCENTbp] = ACTIONS(376),
    [anon_sym_PERCENTr8w] = ACTIONS(376),
    [anon_sym_PERCENTr9w] = ACTIONS(376),
    [anon_sym_PERCENTr10w] = ACTIONS(376),
    [anon_sym_PERCENTr11w] = ACTIONS(376),
    [anon_sym_PERCENTr12w] = ACTIONS(376),
    [anon_sym_PERCENTr13w] = ACTIONS(376),
    [anon_sym_PERCENTr14w] = ACTIONS(376),
    [anon_sym_PERCENTr15w] = ACTIONS(376),
    [anon_sym_PERCENTal] = ACTIONS(376),
    [anon_sym_PERCENTcl] = ACTIONS(376),
    [anon_sym_PERCENTdl] = ACTIONS(376),
    [anon_sym_PERCENTbl] = ACTIONS(376),
    [anon_sym_PERCENTsil] = ACTIONS(376),
    [anon_sym_PERCENTdil] = ACTIONS(376),
    [anon_sym_PERCENTspl] = ACTIONS(376),
    [anon_sym_PERCENTbpl] = ACTIONS(376),
    [anon_sym_PERCENTr8b] = ACTIONS(376),
    [anon_sym_PERCENTr9b] = ACTIONS(376),
    [anon_sym_PERCENTr10b] = ACTIONS(376),
    [anon_sym_PERCENTr11b] = ACTIONS(376),
    [anon_sym_PERCENTr12b] = ACTIONS(376),
    [anon_sym_PERCENTr13b] = ACTIONS(376),
    [anon_sym_PERCENTr14b] = ACTIONS(376),
    [anon_sym_PERCENTr15b] = ACTIONS(376),
    [anon_sym_DASH] = ACTIONS(376),
    [anon_sym_LPAREN] = ACTIONS(376),
    [anon_sym_movsq] = ACTIONS(376),
    [anon_sym_cmpsb] = ACTIONS(376),
    [anon_sym_cmpxchg] = ACTIONS(376),
    [anon_sym_movsl] = ACTIONS(376),
    [anon_sym_PERCENTcr0] = ACTIONS(376),
    [anon_sym_PERCENTcr2] = ACTIONS(376),
    [anon_sym_PERCENTcr3] = ACTIONS(376),
    [anon_sym_PERCENTcr4] = ACTIONS(376),
    [anon_sym_PERCENTrip] = ACTIONS(376),
    [anon_sym_PERCENTeip] = ACTIONS(376),
    [anon_sym_PERCENTip] = ACTIONS(376),
    [anon_sym_PERCENTst] = ACTIONS(376),
    [anon_sym_PERCENT] = ACTIONS(376),
  },
  [45] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(286),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [46] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(290),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [47] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(270),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [48] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(285),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [49] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(260),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [50] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(272),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [51] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(276),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [52] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(288),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [53] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(292),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [54] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(293),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [55] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(279),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [56] = {
    [sym_registerOperand] = STATE(282),
    [sym_segmentRegisterOperand] = STATE(192),
    [sym_generalRegisterOperand] = STATE(192),
    [sym_generalRegister64Bits] = STATE(193),
    [sym_generalRegister32Bits] = STATE(193),
    [sym_generalRegister16Bits] = STATE(193),
    [sym_generalRegister8Bits] = STATE(193),
    [sym_index] = STATE(291),
    [sym_controlRegisterOperand] = STATE(192),
    [sym_instructionRegisterOperand] = STATE(192),
    [sym_floatRegisterOperand] = STATE(192),
    [sym_otherRegisterOperand] = STATE(192),
    [anon_sym_PERCENTss] = ACTIONS(286),
    [anon_sym_PERCENTcs] = ACTIONS(286),
    [anon_sym_PERCENTds] = ACTIONS(286),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(286),
    [anon_sym_PERCENTgs] = ACTIONS(286),
    [anon_sym_PERCENTrax] = ACTIONS(290),
    [anon_sym_PERCENTrbx] = ACTIONS(290),
    [anon_sym_PERCENTrcx] = ACTIONS(290),
    [anon_sym_PERCENTrdx] = ACTIONS(290),
    [anon_sym_PERCENTrsi] = ACTIONS(290),
    [anon_sym_PERCENTrdi] = ACTIONS(290),
    [anon_sym_PERCENTrbp] = ACTIONS(290),
    [anon_sym_PERCENTrsp] = ACTIONS(290),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(294),
    [anon_sym_PERCENTecx] = ACTIONS(294),
    [anon_sym_PERCENTedx] = ACTIONS(294),
    [anon_sym_PERCENTebx] = ACTIONS(294),
    [anon_sym_PERCENTesi] = ACTIONS(294),
    [anon_sym_PERCENTedi] = ACTIONS(294),
    [anon_sym_PERCENTebp] = ACTIONS(294),
    [anon_sym_PERCENTesp] = ACTIONS(294),
    [anon_sym_PERCENTr8d] = ACTIONS(294),
    [anon_sym_PERCENTr9d] = ACTIONS(294),
    [anon_sym_PERCENTr10d] = ACTIONS(294),
    [anon_sym_PERCENTr11d] = ACTIONS(294),
    [anon_sym_PERCENTr12d] = ACTIONS(294),
    [anon_sym_PERCENTr13d] = ACTIONS(294),
    [anon_sym_PERCENTr14d] = ACTIONS(294),
    [anon_sym_PERCENTr15d] = ACTIONS(294),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(298),
    [anon_sym_PERCENTdi] = ACTIONS(298),
    [anon_sym_PERCENTsp] = ACTIONS(298),
    [anon_sym_PERCENTbp] = ACTIONS(298),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(300),
    [anon_sym_PERCENTcl] = ACTIONS(300),
    [anon_sym_PERCENTdl] = ACTIONS(300),
    [anon_sym_PERCENTbl] = ACTIONS(300),
    [anon_sym_PERCENTsil] = ACTIONS(300),
    [anon_sym_PERCENTdil] = ACTIONS(300),
    [anon_sym_PERCENTspl] = ACTIONS(300),
    [anon_sym_PERCENTbpl] = ACTIONS(300),
    [anon_sym_PERCENTr8b] = ACTIONS(300),
    [anon_sym_PERCENTr9b] = ACTIONS(300),
    [anon_sym_PERCENTr10b] = ACTIONS(300),
    [anon_sym_PERCENTr11b] = ACTIONS(300),
    [anon_sym_PERCENTr12b] = ACTIONS(300),
    [anon_sym_PERCENTr13b] = ACTIONS(300),
    [anon_sym_PERCENTr14b] = ACTIONS(300),
    [anon_sym_PERCENTr15b] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(302),
    [anon_sym_PERCENTcr2] = ACTIONS(302),
    [anon_sym_PERCENTcr3] = ACTIONS(302),
    [anon_sym_PERCENTcr4] = ACTIONS(302),
    [anon_sym_PERCENTrip] = ACTIONS(304),
    [anon_sym_PERCENTeip] = ACTIONS(304),
    [anon_sym_PERCENTip] = ACTIONS(304),
    [anon_sym_PERCENTst] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
  },
  [57] = {
    [sym_registerOperand] = STATE(76),
    [sym_segmentRegisterOperand] = STATE(95),
    [sym_generalRegisterOperand] = STATE(95),
    [sym_generalRegister64Bits] = STATE(94),
    [sym_generalRegister32Bits] = STATE(94),
    [sym_generalRegister16Bits] = STATE(94),
    [sym_generalRegister8Bits] = STATE(94),
    [sym_controlRegisterOperand] = STATE(95),
    [sym_instructionRegisterOperand] = STATE(95),
    [sym_floatRegisterOperand] = STATE(95),
    [sym_otherRegisterOperand] = STATE(95),
    [anon_sym_PERCENTss] = ACTIONS(256),
    [anon_sym_PERCENTcs] = ACTIONS(256),
    [anon_sym_PERCENTds] = ACTIONS(256),
    [anon_sym_PERCENTes] = ACTIONS(146),
    [anon_sym_PERCENTfs] = ACTIONS(256),
    [anon_sym_PERCENTgs] = ACTIONS(256),
    [anon_sym_PERCENTrax] = ACTIONS(258),
    [anon_sym_PERCENTrbx] = ACTIONS(258),
    [anon_sym_PERCENTrcx] = ACTIONS(258),
    [anon_sym_PERCENTrdx] = ACTIONS(258),
    [anon_sym_PERCENTrsi] = ACTIONS(258),
    [anon_sym_PERCENTrdi] = ACTIONS(258),
    [anon_sym_PERCENTrbp] = ACTIONS(258),
    [anon_sym_PERCENTrsp] = ACTIONS(258),
    [anon_sym_PERCENTr8] = ACTIONS(148),
    [anon_sym_PERCENTr9] = ACTIONS(148),
    [anon_sym_PERCENTr10] = ACTIONS(148),
    [anon_sym_PERCENTr11] = ACTIONS(148),
    [anon_sym_PERCENTr12] = ACTIONS(148),
    [anon_sym_PERCENTr13] = ACTIONS(148),
    [anon_sym_PERCENTr14] = ACTIONS(148),
    [anon_sym_PERCENTr15] = ACTIONS(148),
    [anon_sym_PERCENTeax] = ACTIONS(260),
    [anon_sym_PERCENTecx] = ACTIONS(260),
    [anon_sym_PERCENTedx] = ACTIONS(260),
    [anon_sym_PERCENTebx] = ACTIONS(260),
    [anon_sym_PERCENTesi] = ACTIONS(260),
    [anon_sym_PERCENTedi] = ACTIONS(260),
    [anon_sym_PERCENTebp] = ACTIONS(260),
    [anon_sym_PERCENTesp] = ACTIONS(260),
    [anon_sym_PERCENTr8d] = ACTIONS(260),
    [anon_sym_PERCENTr9d] = ACTIONS(260),
    [anon_sym_PERCENTr10d] = ACTIONS(260),
    [anon_sym_PERCENTr11d] = ACTIONS(260),
    [anon_sym_PERCENTr12d] = ACTIONS(260),
    [anon_sym_PERCENTr13d] = ACTIONS(260),
    [anon_sym_PERCENTr14d] = ACTIONS(260),
    [anon_sym_PERCENTr15d] = ACTIONS(260),
    [anon_sym_PERCENTax] = ACTIONS(262),
    [anon_sym_PERCENTcx] = ACTIONS(262),
    [anon_sym_PERCENTdx] = ACTIONS(262),
    [anon_sym_PERCENTbx] = ACTIONS(262),
    [anon_sym_PERCENTsi] = ACTIONS(152),
    [anon_sym_PERCENTdi] = ACTIONS(152),
    [anon_sym_PERCENTsp] = ACTIONS(152),
    [anon_sym_PERCENTbp] = ACTIONS(152),
    [anon_sym_PERCENTr8w] = ACTIONS(262),
    [anon_sym_PERCENTr9w] = ACTIONS(262),
    [anon_sym_PERCENTr10w] = ACTIONS(262),
    [anon_sym_PERCENTr11w] = ACTIONS(262),
    [anon_sym_PERCENTr12w] = ACTIONS(262),
    [anon_sym_PERCENTr13w] = ACTIONS(262),
    [anon_sym_PERCENTr14w] = ACTIONS(262),
    [anon_sym_PERCENTr15w] = ACTIONS(262),
    [anon_sym_PERCENTal] = ACTIONS(264),
    [anon_sym_PERCENTcl] = ACTIONS(264),
    [anon_sym_PERCENTdl] = ACTIONS(264),
    [anon_sym_PERCENTbl] = ACTIONS(264),
    [anon_sym_PERCENTsil] = ACTIONS(264),
    [anon_sym_PERCENTdil] = ACTIONS(264),
    [anon_sym_PERCENTspl] = ACTIONS(264),
    [anon_sym_PERCENTbpl] = ACTIONS(264),
    [anon_sym_PERCENTr8b] = ACTIONS(264),
    [anon_sym_PERCENTr9b] = ACTIONS(264),
    [anon_sym_PERCENTr10b] = ACTIONS(264),
    [anon_sym_PERCENTr11b] = ACTIONS(264),
    [anon_sym_PERCENTr12b] = ACTIONS(264),
    [anon_sym_PERCENTr13b] = ACTIONS(264),
    [anon_sym_PERCENTr14b] = ACTIONS(264),
    [anon_sym_PERCENTr15b] = ACTIONS(264),
    [anon_sym_PERCENTcr0] = ACTIONS(268),
    [anon_sym_PERCENTcr2] = ACTIONS(268),
    [anon_sym_PERCENTcr3] = ACTIONS(268),
    [anon_sym_PERCENTcr4] = ACTIONS(268),
    [anon_sym_PERCENTrip] = ACTIONS(270),
    [anon_sym_PERCENTeip] = ACTIONS(270),
    [anon_sym_PERCENTip] = ACTIONS(270),
    [anon_sym_PERCENTst] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(168),
  },
  [58] = {
    [sym_registerOperand] = STATE(171),
    [sym_segmentRegisterOperand] = STATE(177),
    [sym_generalRegisterOperand] = STATE(177),
    [sym_generalRegister64Bits] = STATE(178),
    [sym_generalRegister32Bits] = STATE(178),
    [sym_generalRegister16Bits] = STATE(178),
    [sym_generalRegister8Bits] = STATE(178),
    [sym_controlRegisterOperand] = STATE(177),
    [sym_instructionRegisterOperand] = STATE(177),
    [sym_floatRegisterOperand] = STATE(177),
    [sym_otherRegisterOperand] = STATE(177),
    [anon_sym_PERCENTss] = ACTIONS(228),
    [anon_sym_PERCENTcs] = ACTIONS(228),
    [anon_sym_PERCENTds] = ACTIONS(228),
    [anon_sym_PERCENTes] = ACTIONS(230),
    [anon_sym_PERCENTfs] = ACTIONS(228),
    [anon_sym_PERCENTgs] = ACTIONS(228),
    [anon_sym_PERCENTrax] = ACTIONS(232),
    [anon_sym_PERCENTrbx] = ACTIONS(232),
    [anon_sym_PERCENTrcx] = ACTIONS(232),
    [anon_sym_PERCENTrdx] = ACTIONS(232),
    [anon_sym_PERCENTrsi] = ACTIONS(232),
    [anon_sym_PERCENTrdi] = ACTIONS(232),
    [anon_sym_PERCENTrbp] = ACTIONS(232),
    [anon_sym_PERCENTrsp] = ACTIONS(232),
    [anon_sym_PERCENTr8] = ACTIONS(234),
    [anon_sym_PERCENTr9] = ACTIONS(234),
    [anon_sym_PERCENTr10] = ACTIONS(234),
    [anon_sym_PERCENTr11] = ACTIONS(234),
    [anon_sym_PERCENTr12] = ACTIONS(234),
    [anon_sym_PERCENTr13] = ACTIONS(234),
    [anon_sym_PERCENTr14] = ACTIONS(234),
    [anon_sym_PERCENTr15] = ACTIONS(234),
    [anon_sym_PERCENTeax] = ACTIONS(236),
    [anon_sym_PERCENTecx] = ACTIONS(236),
    [anon_sym_PERCENTedx] = ACTIONS(236),
    [anon_sym_PERCENTebx] = ACTIONS(236),
    [anon_sym_PERCENTesi] = ACTIONS(236),
    [anon_sym_PERCENTedi] = ACTIONS(236),
    [anon_sym_PERCENTebp] = ACTIONS(236),
    [anon_sym_PERCENTesp] = ACTIONS(236),
    [anon_sym_PERCENTr8d] = ACTIONS(236),
    [anon_sym_PERCENTr9d] = ACTIONS(236),
    [anon_sym_PERCENTr10d] = ACTIONS(236),
    [anon_sym_PERCENTr11d] = ACTIONS(236),
    [anon_sym_PERCENTr12d] = ACTIONS(236),
    [anon_sym_PERCENTr13d] = ACTIONS(236),
    [anon_sym_PERCENTr14d] = ACTIONS(236),
    [anon_sym_PERCENTr15d] = ACTIONS(236),
    [anon_sym_PERCENTax] = ACTIONS(238),
    [anon_sym_PERCENTcx] = ACTIONS(238),
    [anon_sym_PERCENTdx] = ACTIONS(238),
    [anon_sym_PERCENTbx] = ACTIONS(238),
    [anon_sym_PERCENTsi] = ACTIONS(240),
    [anon_sym_PERCENTdi] = ACTIONS(240),
    [anon_sym_PERCENTsp] = ACTIONS(240),
    [anon_sym_PERCENTbp] = ACTIONS(240),
    [anon_sym_PERCENTr8w] = ACTIONS(238),
    [anon_sym_PERCENTr9w] = ACTIONS(238),
    [anon_sym_PERCENTr10w] = ACTIONS(238),
    [anon_sym_PERCENTr11w] = ACTIONS(238),
    [anon_sym_PERCENTr12w] = ACTIONS(238),
    [anon_sym_PERCENTr13w] = ACTIONS(238),
    [anon_sym_PERCENTr14w] = ACTIONS(238),
    [anon_sym_PERCENTr15w] = ACTIONS(238),
    [anon_sym_PERCENTal] = ACTIONS(242),
    [anon_sym_PERCENTcl] = ACTIONS(242),
    [anon_sym_PERCENTdl] = ACTIONS(242),
    [anon_sym_PERCENTbl] = ACTIONS(242),
    [anon_sym_PERCENTsil] = ACTIONS(242),
    [anon_sym_PERCENTdil] = ACTIONS(242),
    [anon_sym_PERCENTspl] = ACTIONS(242),
    [anon_sym_PERCENTbpl] = ACTIONS(242),
    [anon_sym_PERCENTr8b] = ACTIONS(242),
    [anon_sym_PERCENTr9b] = ACTIONS(242),
    [anon_sym_PERCENTr10b] = ACTIONS(242),
    [anon_sym_PERCENTr11b] = ACTIONS(242),
    [anon_sym_PERCENTr12b] = ACTIONS(242),
    [anon_sym_PERCENTr13b] = ACTIONS(242),
    [anon_sym_PERCENTr14b] = ACTIONS(242),
    [anon_sym_PERCENTr15b] = ACTIONS(242),
    [anon_sym_PERCENTcr0] = ACTIONS(246),
    [anon_sym_PERCENTcr2] = ACTIONS(246),
    [anon_sym_PERCENTcr3] = ACTIONS(246),
    [anon_sym_PERCENTcr4] = ACTIONS(246),
    [anon_sym_PERCENTrip] = ACTIONS(248),
    [anon_sym_PERCENTeip] = ACTIONS(248),
    [anon_sym_PERCENTip] = ACTIONS(248),
    [anon_sym_PERCENTst] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(252),
  },
  [59] = {
    [sym_registerOperand] = STATE(174),
    [sym_segmentRegisterOperand] = STATE(177),
    [sym_generalRegisterOperand] = STATE(177),
    [sym_generalRegister64Bits] = STATE(178),
    [sym_generalRegister32Bits] = STATE(178),
    [sym_generalRegister16Bits] = STATE(178),
    [sym_generalRegister8Bits] = STATE(178),
    [sym_controlRegisterOperand] = STATE(177),
    [sym_instructionRegisterOperand] = STATE(177),
    [sym_floatRegisterOperand] = STATE(177),
    [sym_otherRegisterOperand] = STATE(177),
    [anon_sym_PERCENTss] = ACTIONS(228),
    [anon_sym_PERCENTcs] = ACTIONS(228),
    [anon_sym_PERCENTds] = ACTIONS(228),
    [anon_sym_PERCENTes] = ACTIONS(230),
    [anon_sym_PERCENTfs] = ACTIONS(228),
    [anon_sym_PERCENTgs] = ACTIONS(228),
    [anon_sym_PERCENTrax] = ACTIONS(232),
    [anon_sym_PERCENTrbx] = ACTIONS(232),
    [anon_sym_PERCENTrcx] = ACTIONS(232),
    [anon_sym_PERCENTrdx] = ACTIONS(232),
    [anon_sym_PERCENTrsi] = ACTIONS(232),
    [anon_sym_PERCENTrdi] = ACTIONS(232),
    [anon_sym_PERCENTrbp] = ACTIONS(232),
    [anon_sym_PERCENTrsp] = ACTIONS(232),
    [anon_sym_PERCENTr8] = ACTIONS(234),
    [anon_sym_PERCENTr9] = ACTIONS(234),
    [anon_sym_PERCENTr10] = ACTIONS(234),
    [anon_sym_PERCENTr11] = ACTIONS(234),
    [anon_sym_PERCENTr12] = ACTIONS(234),
    [anon_sym_PERCENTr13] = ACTIONS(234),
    [anon_sym_PERCENTr14] = ACTIONS(234),
    [anon_sym_PERCENTr15] = ACTIONS(234),
    [anon_sym_PERCENTeax] = ACTIONS(236),
    [anon_sym_PERCENTecx] = ACTIONS(236),
    [anon_sym_PERCENTedx] = ACTIONS(236),
    [anon_sym_PERCENTebx] = ACTIONS(236),
    [anon_sym_PERCENTesi] = ACTIONS(236),
    [anon_sym_PERCENTedi] = ACTIONS(236),
    [anon_sym_PERCENTebp] = ACTIONS(236),
    [anon_sym_PERCENTesp] = ACTIONS(236),
    [anon_sym_PERCENTr8d] = ACTIONS(236),
    [anon_sym_PERCENTr9d] = ACTIONS(236),
    [anon_sym_PERCENTr10d] = ACTIONS(236),
    [anon_sym_PERCENTr11d] = ACTIONS(236),
    [anon_sym_PERCENTr12d] = ACTIONS(236),
    [anon_sym_PERCENTr13d] = ACTIONS(236),
    [anon_sym_PERCENTr14d] = ACTIONS(236),
    [anon_sym_PERCENTr15d] = ACTIONS(236),
    [anon_sym_PERCENTax] = ACTIONS(238),
    [anon_sym_PERCENTcx] = ACTIONS(238),
    [anon_sym_PERCENTdx] = ACTIONS(238),
    [anon_sym_PERCENTbx] = ACTIONS(238),
    [anon_sym_PERCENTsi] = ACTIONS(240),
    [anon_sym_PERCENTdi] = ACTIONS(240),
    [anon_sym_PERCENTsp] = ACTIONS(240),
    [anon_sym_PERCENTbp] = ACTIONS(240),
    [anon_sym_PERCENTr8w] = ACTIONS(238),
    [anon_sym_PERCENTr9w] = ACTIONS(238),
    [anon_sym_PERCENTr10w] = ACTIONS(238),
    [anon_sym_PERCENTr11w] = ACTIONS(238),
    [anon_sym_PERCENTr12w] = ACTIONS(238),
    [anon_sym_PERCENTr13w] = ACTIONS(238),
    [anon_sym_PERCENTr14w] = ACTIONS(238),
    [anon_sym_PERCENTr15w] = ACTIONS(238),
    [anon_sym_PERCENTal] = ACTIONS(242),
    [anon_sym_PERCENTcl] = ACTIONS(242),
    [anon_sym_PERCENTdl] = ACTIONS(242),
    [anon_sym_PERCENTbl] = ACTIONS(242),
    [anon_sym_PERCENTsil] = ACTIONS(242),
    [anon_sym_PERCENTdil] = ACTIONS(242),
    [anon_sym_PERCENTspl] = ACTIONS(242),
    [anon_sym_PERCENTbpl] = ACTIONS(242),
    [anon_sym_PERCENTr8b] = ACTIONS(242),
    [anon_sym_PERCENTr9b] = ACTIONS(242),
    [anon_sym_PERCENTr10b] = ACTIONS(242),
    [anon_sym_PERCENTr11b] = ACTIONS(242),
    [anon_sym_PERCENTr12b] = ACTIONS(242),
    [anon_sym_PERCENTr13b] = ACTIONS(242),
    [anon_sym_PERCENTr14b] = ACTIONS(242),
    [anon_sym_PERCENTr15b] = ACTIONS(242),
    [anon_sym_PERCENTcr0] = ACTIONS(246),
    [anon_sym_PERCENTcr2] = ACTIONS(246),
    [anon_sym_PERCENTcr3] = ACTIONS(246),
    [anon_sym_PERCENTcr4] = ACTIONS(246),
    [anon_sym_PERCENTrip] = ACTIONS(248),
    [anon_sym_PERCENTeip] = ACTIONS(248),
    [anon_sym_PERCENTip] = ACTIONS(248),
    [anon_sym_PERCENTst] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(252),
  },
  [60] = {
    [sym_registerOperand] = STATE(77),
    [sym_segmentRegisterOperand] = STATE(95),
    [sym_generalRegisterOperand] = STATE(95),
    [sym_generalRegister64Bits] = STATE(94),
    [sym_generalRegister32Bits] = STATE(94),
    [sym_generalRegister16Bits] = STATE(94),
    [sym_generalRegister8Bits] = STATE(94),
    [sym_controlRegisterOperand] = STATE(95),
    [sym_instructionRegisterOperand] = STATE(95),
    [sym_floatRegisterOperand] = STATE(95),
    [sym_otherRegisterOperand] = STATE(95),
    [anon_sym_PERCENTss] = ACTIONS(256),
    [anon_sym_PERCENTcs] = ACTIONS(256),
    [anon_sym_PERCENTds] = ACTIONS(256),
    [anon_sym_PERCENTes] = ACTIONS(146),
    [anon_sym_PERCENTfs] = ACTIONS(256),
    [anon_sym_PERCENTgs] = ACTIONS(256),
    [anon_sym_PERCENTrax] = ACTIONS(258),
    [anon_sym_PERCENTrbx] = ACTIONS(258),
    [anon_sym_PERCENTrcx] = ACTIONS(258),
    [anon_sym_PERCENTrdx] = ACTIONS(258),
    [anon_sym_PERCENTrsi] = ACTIONS(258),
    [anon_sym_PERCENTrdi] = ACTIONS(258),
    [anon_sym_PERCENTrbp] = ACTIONS(258),
    [anon_sym_PERCENTrsp] = ACTIONS(258),
    [anon_sym_PERCENTr8] = ACTIONS(148),
    [anon_sym_PERCENTr9] = ACTIONS(148),
    [anon_sym_PERCENTr10] = ACTIONS(148),
    [anon_sym_PERCENTr11] = ACTIONS(148),
    [anon_sym_PERCENTr12] = ACTIONS(148),
    [anon_sym_PERCENTr13] = ACTIONS(148),
    [anon_sym_PERCENTr14] = ACTIONS(148),
    [anon_sym_PERCENTr15] = ACTIONS(148),
    [anon_sym_PERCENTeax] = ACTIONS(260),
    [anon_sym_PERCENTecx] = ACTIONS(260),
    [anon_sym_PERCENTedx] = ACTIONS(260),
    [anon_sym_PERCENTebx] = ACTIONS(260),
    [anon_sym_PERCENTesi] = ACTIONS(260),
    [anon_sym_PERCENTedi] = ACTIONS(260),
    [anon_sym_PERCENTebp] = ACTIONS(260),
    [anon_sym_PERCENTesp] = ACTIONS(260),
    [anon_sym_PERCENTr8d] = ACTIONS(260),
    [anon_sym_PERCENTr9d] = ACTIONS(260),
    [anon_sym_PERCENTr10d] = ACTIONS(260),
    [anon_sym_PERCENTr11d] = ACTIONS(260),
    [anon_sym_PERCENTr12d] = ACTIONS(260),
    [anon_sym_PERCENTr13d] = ACTIONS(260),
    [anon_sym_PERCENTr14d] = ACTIONS(260),
    [anon_sym_PERCENTr15d] = ACTIONS(260),
    [anon_sym_PERCENTax] = ACTIONS(262),
    [anon_sym_PERCENTcx] = ACTIONS(262),
    [anon_sym_PERCENTdx] = ACTIONS(262),
    [anon_sym_PERCENTbx] = ACTIONS(262),
    [anon_sym_PERCENTsi] = ACTIONS(152),
    [anon_sym_PERCENTdi] = ACTIONS(152),
    [anon_sym_PERCENTsp] = ACTIONS(152),
    [anon_sym_PERCENTbp] = ACTIONS(152),
    [anon_sym_PERCENTr8w] = ACTIONS(262),
    [anon_sym_PERCENTr9w] = ACTIONS(262),
    [anon_sym_PERCENTr10w] = ACTIONS(262),
    [anon_sym_PERCENTr11w] = ACTIONS(262),
    [anon_sym_PERCENTr12w] = ACTIONS(262),
    [anon_sym_PERCENTr13w] = ACTIONS(262),
    [anon_sym_PERCENTr14w] = ACTIONS(262),
    [anon_sym_PERCENTr15w] = ACTIONS(262),
    [anon_sym_PERCENTal] = ACTIONS(264),
    [anon_sym_PERCENTcl] = ACTIONS(264),
    [anon_sym_PERCENTdl] = ACTIONS(264),
    [anon_sym_PERCENTbl] = ACTIONS(264),
    [anon_sym_PERCENTsil] = ACTIONS(264),
    [anon_sym_PERCENTdil] = ACTIONS(264),
    [anon_sym_PERCENTspl] = ACTIONS(264),
    [anon_sym_PERCENTbpl] = ACTIONS(264),
    [anon_sym_PERCENTr8b] = ACTIONS(264),
    [anon_sym_PERCENTr9b] = ACTIONS(264),
    [anon_sym_PERCENTr10b] = ACTIONS(264),
    [anon_sym_PERCENTr11b] = ACTIONS(264),
    [anon_sym_PERCENTr12b] = ACTIONS(264),
    [anon_sym_PERCENTr13b] = ACTIONS(264),
    [anon_sym_PERCENTr14b] = ACTIONS(264),
    [anon_sym_PERCENTr15b] = ACTIONS(264),
    [anon_sym_PERCENTcr0] = ACTIONS(268),
    [anon_sym_PERCENTcr2] = ACTIONS(268),
    [anon_sym_PERCENTcr3] = ACTIONS(268),
    [anon_sym_PERCENTcr4] = ACTIONS(268),
    [anon_sym_PERCENTrip] = ACTIONS(270),
    [anon_sym_PERCENTeip] = ACTIONS(270),
    [anon_sym_PERCENTip] = ACTIONS(270),
    [anon_sym_PERCENTst] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(168),
  },
  [61] = {
    [aux_sym_operand_repeat1] = STATE(61),
    [sym__comma] = ACTIONS(380),
    [aux_sym_operand_token1] = ACTIONS(382),
    [anon_sym_PERCENTss] = ACTIONS(380),
    [anon_sym_PERCENTcs] = ACTIONS(380),
    [anon_sym_PERCENTds] = ACTIONS(380),
    [anon_sym_PERCENTes] = ACTIONS(385),
    [anon_sym_PERCENTfs] = ACTIONS(380),
    [anon_sym_PERCENTgs] = ACTIONS(380),
    [anon_sym_PERCENTrax] = ACTIONS(380),
    [anon_sym_PERCENTrbx] = ACTIONS(380),
    [anon_sym_PERCENTrcx] = ACTIONS(380),
    [anon_sym_PERCENTrdx] = ACTIONS(380),
    [anon_sym_PERCENTrsi] = ACTIONS(380),
    [anon_sym_PERCENTrdi] = ACTIONS(380),
    [anon_sym_PERCENTrbp] = ACTIONS(380),
    [anon_sym_PERCENTrsp] = ACTIONS(380),
    [anon_sym_PERCENTr8] = ACTIONS(385),
    [anon_sym_PERCENTr9] = ACTIONS(385),
    [anon_sym_PERCENTr10] = ACTIONS(385),
    [anon_sym_PERCENTr11] = ACTIONS(385),
    [anon_sym_PERCENTr12] = ACTIONS(385),
    [anon_sym_PERCENTr13] = ACTIONS(385),
    [anon_sym_PERCENTr14] = ACTIONS(385),
    [anon_sym_PERCENTr15] = ACTIONS(385),
    [anon_sym_PERCENTeax] = ACTIONS(380),
    [anon_sym_PERCENTecx] = ACTIONS(380),
    [anon_sym_PERCENTedx] = ACTIONS(380),
    [anon_sym_PERCENTebx] = ACTIONS(380),
    [anon_sym_PERCENTesi] = ACTIONS(380),
    [anon_sym_PERCENTedi] = ACTIONS(380),
    [anon_sym_PERCENTebp] = ACTIONS(380),
    [anon_sym_PERCENTesp] = ACTIONS(380),
    [anon_sym_PERCENTr8d] = ACTIONS(380),
    [anon_sym_PERCENTr9d] = ACTIONS(380),
    [anon_sym_PERCENTr10d] = ACTIONS(380),
    [anon_sym_PERCENTr11d] = ACTIONS(380),
    [anon_sym_PERCENTr12d] = ACTIONS(380),
    [anon_sym_PERCENTr13d] = ACTIONS(380),
    [anon_sym_PERCENTr14d] = ACTIONS(380),
    [anon_sym_PERCENTr15d] = ACTIONS(380),
    [anon_sym_PERCENTax] = ACTIONS(380),
    [anon_sym_PERCENTcx] = ACTIONS(380),
    [anon_sym_PERCENTdx] = ACTIONS(380),
    [anon_sym_PERCENTbx] = ACTIONS(380),
    [anon_sym_PERCENTsi] = ACTIONS(385),
    [anon_sym_PERCENTdi] = ACTIONS(385),
    [anon_sym_PERCENTsp] = ACTIONS(385),
    [anon_sym_PERCENTbp] = ACTIONS(385),
    [anon_sym_PERCENTr8w] = ACTIONS(380),
    [anon_sym_PERCENTr9w] = ACTIONS(380),
    [anon_sym_PERCENTr10w] = ACTIONS(380),
    [anon_sym_PERCENTr11w] = ACTIONS(380),
    [anon_sym_PERCENTr12w] = ACTIONS(380),
    [anon_sym_PERCENTr13w] = ACTIONS(380),
    [anon_sym_PERCENTr14w] = ACTIONS(380),
    [anon_sym_PERCENTr15w] = ACTIONS(380),
    [anon_sym_PERCENTal] = ACTIONS(380),
    [anon_sym_PERCENTcl] = ACTIONS(380),
    [anon_sym_PERCENTdl] = ACTIONS(380),
    [anon_sym_PERCENTbl] = ACTIONS(380),
    [anon_sym_PERCENTsil] = ACTIONS(380),
    [anon_sym_PERCENTdil] = ACTIONS(380),
    [anon_sym_PERCENTspl] = ACTIONS(380),
    [anon_sym_PERCENTbpl] = ACTIONS(380),
    [anon_sym_PERCENTr8b] = ACTIONS(380),
    [anon_sym_PERCENTr9b] = ACTIONS(380),
    [anon_sym_PERCENTr10b] = ACTIONS(380),
    [anon_sym_PERCENTr11b] = ACTIONS(380),
    [anon_sym_PERCENTr12b] = ACTIONS(380),
    [anon_sym_PERCENTr13b] = ACTIONS(380),
    [anon_sym_PERCENTr14b] = ACTIONS(380),
    [anon_sym_PERCENTr15b] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_PERCENTcr0] = ACTIONS(380),
    [anon_sym_PERCENTcr2] = ACTIONS(380),
    [anon_sym_PERCENTcr3] = ACTIONS(380),
    [anon_sym_PERCENTcr4] = ACTIONS(380),
    [anon_sym_PERCENTrip] = ACTIONS(380),
    [anon_sym_PERCENTeip] = ACTIONS(380),
    [anon_sym_PERCENTip] = ACTIONS(380),
    [anon_sym_PERCENTst] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(385),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(389), 1,
      sym__line_break,
    ACTIONS(391), 1,
      anon_sym_jmpq,
    ACTIONS(393), 1,
      anon_sym_STAR,
    ACTIONS(395), 1,
      aux_sym_otherFnOperands_token1,
    STATE(63), 1,
      aux_sym_control_repeat1,
    STATE(68), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(103), 1,
      sym_fnOperand,
    ACTIONS(387), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(106), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [30] = 9,
    ACTIONS(399), 1,
      sym__line_break,
    ACTIONS(401), 1,
      anon_sym_jmpq,
    ACTIONS(404), 1,
      anon_sym_STAR,
    ACTIONS(407), 1,
      aux_sym_otherFnOperands_token1,
    STATE(63), 1,
      aux_sym_control_repeat1,
    STATE(143), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(230), 1,
      sym_fnOperand,
    ACTIONS(397), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(195), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [60] = 9,
    ACTIONS(391), 1,
      anon_sym_jmpq,
    ACTIONS(393), 1,
      anon_sym_STAR,
    ACTIONS(395), 1,
      aux_sym_otherFnOperands_token1,
    ACTIONS(412), 1,
      sym__line_break,
    STATE(62), 1,
      aux_sym_control_repeat1,
    STATE(68), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(130), 1,
      sym_fnOperand,
    ACTIONS(410), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(106), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [90] = 3,
    ACTIONS(414), 1,
      aux_sym_operand_token1,
    STATE(65), 1,
      aux_sym_operand_repeat1,
    ACTIONS(385), 8,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [107] = 4,
    ACTIONS(419), 1,
      aux_sym_operand_token1,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      aux_sym_operand_repeat1,
    ACTIONS(417), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [125] = 4,
    ACTIONS(419), 1,
      aux_sym_operand_token1,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      aux_sym_operand_repeat1,
    ACTIONS(423), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [142] = 3,
    ACTIONS(429), 1,
      aux_sym_otherFnOperands_token1,
    STATE(69), 1,
      aux_sym_otherFnOperands_repeat1,
    ACTIONS(427), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [156] = 3,
    ACTIONS(433), 1,
      aux_sym_otherFnOperands_token1,
    STATE(69), 1,
      aux_sym_otherFnOperands_repeat1,
    ACTIONS(431), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [170] = 4,
    ACTIONS(380), 1,
      anon_sym_,
    ACTIONS(436), 1,
      aux_sym_operand_token1,
    STATE(70), 1,
      aux_sym_operand_repeat1,
    ACTIONS(385), 4,
      sym__comma,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [186] = 3,
    ACTIONS(419), 1,
      aux_sym_operand_token1,
    STATE(65), 1,
      aux_sym_operand_repeat1,
    ACTIONS(439), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [200] = 3,
    ACTIONS(443), 1,
      aux_sym_immediateOperand_token1,
    STATE(73), 1,
      aux_sym_immediateOperand_repeat1,
    ACTIONS(441), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [214] = 3,
    ACTIONS(447), 1,
      aux_sym_immediateOperand_token1,
    STATE(73), 1,
      aux_sym_immediateOperand_repeat1,
    ACTIONS(445), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [228] = 2,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [240] = 1,
    ACTIONS(454), 7,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COLON,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [250] = 2,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [261] = 2,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [272] = 6,
    ACTIONS(464), 1,
      aux_sym_operand_token1,
    ACTIONS(466), 1,
      anon_sym_DASH,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      aux_sym_operand_repeat1,
    STATE(114), 1,
      sym_memoryAbsoluteOperand,
    STATE(278), 1,
      sym_offset,
  [291] = 2,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(470), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [302] = 2,
    ACTIONS(476), 1,
      anon_sym_COLON,
    ACTIONS(474), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [313] = 1,
    ACTIONS(478), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [322] = 1,
    ACTIONS(480), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [331] = 2,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    ACTIONS(482), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [342] = 1,
    ACTIONS(486), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [351] = 2,
    ACTIONS(399), 1,
      sym__line_break,
    ACTIONS(397), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_jmpq,
      anon_sym_STAR,
      aux_sym_otherFnOperands_token1,
  [362] = 2,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [373] = 1,
    ACTIONS(492), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [382] = 1,
    ACTIONS(494), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [391] = 5,
    ACTIONS(496), 1,
      anon_sym_,
    ACTIONS(498), 1,
      aux_sym_operand_token1,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      aux_sym_operand_repeat1,
    ACTIONS(417), 2,
      sym__comma,
      anon_sym_RPAREN,
  [408] = 1,
    ACTIONS(502), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [417] = 1,
    ACTIONS(504), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [426] = 2,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [437] = 6,
    ACTIONS(510), 1,
      aux_sym_operand_token1,
    ACTIONS(512), 1,
      anon_sym_DASH,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      aux_sym_operand_repeat1,
    STATE(202), 1,
      sym_memoryAbsoluteOperand,
    STATE(287), 1,
      sym_offset,
  [456] = 1,
    ACTIONS(516), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [465] = 1,
    ACTIONS(474), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [474] = 1,
    ACTIONS(518), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [483] = 2,
    ACTIONS(522), 1,
      sym__line_break,
    ACTIONS(520), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_jmpq,
      anon_sym_STAR,
      aux_sym_otherFnOperands_token1,
  [494] = 1,
    ACTIONS(524), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [502] = 1,
    ACTIONS(526), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [510] = 1,
    ACTIONS(528), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [518] = 5,
    ACTIONS(423), 1,
      sym__comma,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(498), 1,
      aux_sym_operand_token1,
    ACTIONS(530), 1,
      anon_sym_,
    STATE(70), 1,
      aux_sym_operand_repeat1,
  [534] = 2,
    ACTIONS(534), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(532), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [544] = 2,
    ACTIONS(538), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(536), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [554] = 1,
    ACTIONS(540), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [562] = 1,
    ACTIONS(542), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [570] = 1,
    ACTIONS(544), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [578] = 4,
    ACTIONS(274), 1,
      aux_sym_operand_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      aux_sym_operand_repeat1,
    ACTIONS(496), 2,
      sym__comma,
      anon_sym_RPAREN,
  [592] = 2,
    ACTIONS(534), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(134), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [602] = 2,
    STATE(259), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [612] = 1,
    ACTIONS(550), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [620] = 2,
    STATE(258), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [630] = 1,
    ACTIONS(552), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [638] = 2,
    STATE(281), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [648] = 1,
    ACTIONS(554), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [656] = 2,
    STATE(262), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [666] = 1,
    ACTIONS(456), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [674] = 2,
    STATE(280), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [684] = 2,
    STATE(295), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [694] = 2,
    STATE(264), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [704] = 1,
    ACTIONS(556), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [712] = 2,
    STATE(265), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [722] = 2,
    STATE(256), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [732] = 1,
    ACTIONS(558), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [740] = 1,
    ACTIONS(560), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [748] = 1,
    ACTIONS(562), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [756] = 1,
    ACTIONS(460), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [764] = 2,
    STATE(268), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [774] = 2,
    STATE(277), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [784] = 1,
    ACTIONS(564), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [792] = 2,
    ACTIONS(538), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(387), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [802] = 1,
    ACTIONS(566), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [810] = 1,
    ACTIONS(568), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [818] = 1,
    ACTIONS(570), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [826] = 2,
    STATE(275), 1,
      sym_scale,
    ACTIONS(548), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [836] = 1,
    ACTIONS(572), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [844] = 1,
    ACTIONS(574), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [852] = 2,
    ACTIONS(576), 1,
      anon_sym_,
    ACTIONS(454), 3,
      anon_sym_COLON,
      sym__comma,
      anon_sym_RPAREN,
  [861] = 3,
    ACTIONS(578), 1,
      anon_sym_,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 2,
      sym__comma,
      anon_sym_RPAREN,
  [872] = 4,
    ACTIONS(582), 1,
      aux_sym_operand_token1,
    ACTIONS(584), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_operand_repeat1,
    STATE(289), 1,
      sym_offset,
  [885] = 4,
    ACTIONS(582), 1,
      aux_sym_operand_token1,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_operand_repeat1,
    STATE(284), 1,
      sym_offset,
  [898] = 4,
    ACTIONS(441), 1,
      sym__comma,
    ACTIONS(588), 1,
      anon_sym_,
    ACTIONS(590), 1,
      aux_sym_immediateOperand_token1,
    STATE(145), 1,
      aux_sym_immediateOperand_repeat1,
  [911] = 4,
    ACTIONS(439), 1,
      sym__comma,
    ACTIONS(498), 1,
      aux_sym_operand_token1,
    ACTIONS(592), 1,
      anon_sym_,
    STATE(70), 1,
      aux_sym_operand_repeat1,
  [924] = 4,
    ACTIONS(427), 1,
      sym__comma,
    ACTIONS(594), 1,
      anon_sym_,
    ACTIONS(596), 1,
      aux_sym_otherFnOperands_token1,
    STATE(144), 1,
      aux_sym_otherFnOperands_repeat1,
  [937] = 4,
    ACTIONS(431), 1,
      sym__comma,
    ACTIONS(598), 1,
      anon_sym_,
    ACTIONS(600), 1,
      aux_sym_otherFnOperands_token1,
    STATE(144), 1,
      aux_sym_otherFnOperands_repeat1,
  [950] = 4,
    ACTIONS(445), 1,
      sym__comma,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(605), 1,
      aux_sym_immediateOperand_token1,
    STATE(145), 1,
      aux_sym_immediateOperand_repeat1,
  [963] = 3,
    ACTIONS(101), 1,
      sym__line_break,
    STATE(274), 1,
      sym_comment,
    ACTIONS(7), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [974] = 4,
    ACTIONS(582), 1,
      aux_sym_operand_token1,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_operand_repeat1,
    STATE(261), 1,
      sym_offset,
  [987] = 3,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(273), 1,
      sym_comment,
    ACTIONS(7), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [998] = 4,
    ACTIONS(582), 1,
      aux_sym_operand_token1,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_operand_repeat1,
    STATE(267), 1,
      sym_offset,
  [1011] = 2,
    ACTIONS(614), 1,
      anon_sym_,
    ACTIONS(486), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1019] = 3,
    ACTIONS(488), 1,
      sym__comma,
    ACTIONS(616), 1,
      anon_sym_,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
  [1029] = 3,
    ACTIONS(620), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1039] = 2,
    ACTIONS(624), 1,
      anon_sym_,
    ACTIONS(502), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1047] = 2,
    ACTIONS(626), 1,
      anon_sym_,
    ACTIONS(494), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1055] = 3,
    ACTIONS(620), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1065] = 3,
    ACTIONS(620), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1075] = 2,
    ACTIONS(632), 1,
      anon_sym_,
    ACTIONS(492), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1083] = 3,
    ACTIONS(620), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1093] = 3,
    ACTIONS(636), 1,
      aux_sym__address_token1,
    ACTIONS(639), 1,
      anon_sym_COLON,
    STATE(159), 1,
      aux_sym__address_repeat1,
  [1103] = 3,
    ACTIONS(620), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1113] = 3,
    ACTIONS(274), 1,
      aux_sym_operand_token1,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_operand_repeat1,
  [1123] = 3,
    ACTIONS(274), 1,
      aux_sym_operand_token1,
    ACTIONS(645), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      aux_sym_operand_repeat1,
  [1133] = 3,
    ACTIONS(620), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1143] = 2,
    ACTIONS(649), 1,
      anon_sym_,
    ACTIONS(480), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1151] = 3,
    ACTIONS(620), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1161] = 3,
    ACTIONS(482), 1,
      sym__comma,
    ACTIONS(653), 1,
      anon_sym_,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
  [1171] = 3,
    ACTIONS(657), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1181] = 3,
    ACTIONS(662), 1,
      aux_sym_operand_token2,
    ACTIONS(664), 1,
      anon_sym_GT,
    STATE(186), 1,
      aux_sym_operand_repeat2,
  [1191] = 2,
    ACTIONS(666), 1,
      anon_sym_,
    ACTIONS(504), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1199] = 3,
    ACTIONS(274), 1,
      aux_sym_operand_token1,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_operand_repeat1,
  [1209] = 3,
    ACTIONS(460), 1,
      sym__comma,
    ACTIONS(670), 1,
      anon_sym_,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
  [1219] = 3,
    ACTIONS(506), 1,
      sym__comma,
    ACTIONS(674), 1,
      anon_sym_,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
  [1229] = 3,
    ACTIONS(274), 1,
      aux_sym_operand_token1,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_operand_repeat1,
  [1239] = 3,
    ACTIONS(456), 1,
      sym__comma,
    ACTIONS(680), 1,
      anon_sym_,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
  [1249] = 3,
    ACTIONS(470), 1,
      sym__comma,
    ACTIONS(684), 1,
      anon_sym_,
    ACTIONS(686), 1,
      anon_sym_LBRACE,
  [1259] = 3,
    ACTIONS(620), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1269] = 2,
    ACTIONS(690), 1,
      anon_sym_,
    ACTIONS(474), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1277] = 2,
    ACTIONS(692), 1,
      anon_sym_,
    ACTIONS(516), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1285] = 2,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(578), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1293] = 3,
    ACTIONS(620), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1303] = 2,
    ACTIONS(698), 1,
      anon_sym_,
    ACTIONS(518), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1311] = 3,
    ACTIONS(474), 1,
      sym__comma,
    ACTIONS(690), 1,
      anon_sym_,
    ACTIONS(700), 1,
      anon_sym_COLON,
  [1321] = 2,
    ACTIONS(702), 1,
      anon_sym_,
    ACTIONS(478), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1329] = 3,
    ACTIONS(662), 1,
      aux_sym_operand_token2,
    ACTIONS(704), 1,
      anon_sym_GT,
    STATE(186), 1,
      aux_sym_operand_repeat2,
  [1339] = 3,
    ACTIONS(706), 1,
      aux_sym__address_token1,
    ACTIONS(708), 1,
      anon_sym_COLON,
    STATE(159), 1,
      aux_sym__address_repeat1,
  [1349] = 3,
    ACTIONS(710), 1,
      aux_sym_operand_token2,
    ACTIONS(713), 1,
      anon_sym_GT,
    STATE(186), 1,
      aux_sym_operand_repeat2,
  [1359] = 2,
    ACTIONS(717), 1,
      sym__line_break,
    ACTIONS(715), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [1367] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
  [1374] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [1381] = 2,
    ACTIONS(725), 1,
      aux_sym_operand_token1,
    STATE(107), 1,
      aux_sym_operand_repeat1,
  [1388] = 2,
    ACTIONS(542), 1,
      sym__comma,
    ACTIONS(727), 1,
      anon_sym_,
  [1395] = 1,
    ACTIONS(690), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1400] = 1,
    ACTIONS(692), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1405] = 2,
    ACTIONS(528), 1,
      sym__comma,
    ACTIONS(729), 1,
      anon_sym_,
  [1412] = 2,
    ACTIONS(544), 1,
      sym__comma,
    ACTIONS(731), 1,
      anon_sym_,
  [1419] = 2,
    ACTIONS(733), 1,
      anon_sym_COLON,
    STATE(9), 1,
      sym__colon,
  [1426] = 2,
    ACTIONS(735), 1,
      aux_sym_operand_token1,
    STATE(173), 1,
      aux_sym_operand_repeat1,
  [1433] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
  [1440] = 2,
    ACTIONS(540), 1,
      sym__comma,
    ACTIONS(739), 1,
      anon_sym_,
  [1447] = 1,
    ACTIONS(624), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1452] = 2,
    ACTIONS(526), 1,
      sym__comma,
    ACTIONS(741), 1,
      anon_sym_,
  [1459] = 2,
    ACTIONS(554), 1,
      sym__comma,
    ACTIONS(743), 1,
      anon_sym_,
  [1466] = 1,
    ACTIONS(626), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1471] = 2,
    ACTIONS(456), 1,
      sym__comma,
    ACTIONS(680), 1,
      anon_sym_,
  [1478] = 1,
    ACTIONS(632), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1483] = 1,
    ACTIONS(614), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1488] = 1,
    ACTIONS(698), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1493] = 2,
    ACTIONS(460), 1,
      sym__comma,
    ACTIONS(670), 1,
      anon_sym_,
  [1500] = 1,
    ACTIONS(649), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1505] = 1,
    ACTIONS(576), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1510] = 1,
    ACTIONS(702), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1515] = 2,
    ACTIONS(572), 1,
      sym__comma,
    ACTIONS(745), 1,
      anon_sym_,
  [1522] = 2,
    ACTIONS(574), 1,
      sym__comma,
    ACTIONS(747), 1,
      anon_sym_,
  [1529] = 2,
    ACTIONS(570), 1,
      sym__comma,
    ACTIONS(749), 1,
      anon_sym_,
  [1536] = 2,
    ACTIONS(568), 1,
      sym__comma,
    ACTIONS(751), 1,
      anon_sym_,
  [1543] = 2,
    ACTIONS(566), 1,
      sym__comma,
    ACTIONS(753), 1,
      anon_sym_,
  [1550] = 2,
    ACTIONS(564), 1,
      sym__comma,
    ACTIONS(755), 1,
      anon_sym_,
  [1557] = 2,
    ACTIONS(524), 1,
      sym__comma,
    ACTIONS(757), 1,
      anon_sym_,
  [1564] = 2,
    ACTIONS(562), 1,
      sym__comma,
    ACTIONS(759), 1,
      anon_sym_,
  [1571] = 2,
    ACTIONS(560), 1,
      sym__comma,
    ACTIONS(761), 1,
      anon_sym_,
  [1578] = 2,
    ACTIONS(558), 1,
      sym__comma,
    ACTIONS(763), 1,
      anon_sym_,
  [1585] = 2,
    ACTIONS(556), 1,
      sym__comma,
    ACTIONS(765), 1,
      anon_sym_,
  [1592] = 2,
    ACTIONS(552), 1,
      sym__comma,
    ACTIONS(767), 1,
      anon_sym_,
  [1599] = 2,
    ACTIONS(550), 1,
      sym__comma,
    ACTIONS(769), 1,
      anon_sym_,
  [1606] = 2,
    ACTIONS(771), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(165), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1613] = 2,
    ACTIONS(773), 1,
      aux_sym_operand_token1,
    STATE(161), 1,
      aux_sym_operand_repeat1,
  [1620] = 2,
    ACTIONS(775), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(163), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1627] = 2,
    ACTIONS(534), 1,
      sym__comma,
    ACTIONS(777), 1,
      anon_sym_,
  [1634] = 2,
    ACTIONS(779), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(160), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1641] = 2,
    ACTIONS(538), 1,
      sym__comma,
    ACTIONS(781), 1,
      anon_sym_,
  [1648] = 2,
    ACTIONS(783), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(158), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1655] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
  [1662] = 2,
    ACTIONS(787), 1,
      aux_sym_operand_token1,
    STATE(89), 1,
      aux_sym_operand_repeat1,
  [1669] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
  [1676] = 2,
    ACTIONS(791), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(156), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1683] = 2,
    ACTIONS(793), 1,
      aux_sym_operand_token1,
    STATE(66), 1,
      aux_sym_operand_repeat1,
  [1690] = 2,
    ACTIONS(795), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(155), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1697] = 2,
    ACTIONS(797), 1,
      aux_sym_operand_token1,
    STATE(71), 1,
      aux_sym_operand_repeat1,
  [1704] = 2,
    ACTIONS(799), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(152), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1711] = 2,
    ACTIONS(801), 1,
      aux_sym_operand_token1,
    STATE(142), 1,
      aux_sym_operand_repeat1,
  [1718] = 2,
    ACTIONS(803), 1,
      aux_sym_immediateOperand_token1,
    STATE(141), 1,
      aux_sym_immediateOperand_repeat1,
  [1725] = 2,
    ACTIONS(805), 1,
      aux_sym_operand_token2,
    STATE(168), 1,
      aux_sym_operand_repeat2,
  [1732] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
  [1739] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
  [1746] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
  [1753] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
  [1760] = 2,
    ACTIONS(815), 1,
      aux_sym_operand_token1,
    STATE(170), 1,
      aux_sym_operand_repeat1,
  [1767] = 1,
    ACTIONS(666), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1772] = 2,
    ACTIONS(817), 1,
      aux_sym_immediateOperand_token1,
    STATE(72), 1,
      aux_sym_immediateOperand_repeat1,
  [1779] = 2,
    ACTIONS(819), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(176), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1786] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
  [1793] = 2,
    ACTIONS(823), 1,
      aux_sym_operand_token2,
    STATE(184), 1,
      aux_sym_operand_repeat2,
  [1800] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [1807] = 2,
    ACTIONS(719), 1,
      sym__comma,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
  [1814] = 2,
    ACTIONS(829), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(180), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1821] = 1,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [1825] = 1,
    ACTIONS(346), 1,
      sym__comma,
  [1829] = 1,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [1833] = 1,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [1837] = 1,
    ACTIONS(837), 1,
      sym__comma,
  [1841] = 1,
    ACTIONS(839), 1,
      anon_sym_LPAREN,
  [1845] = 1,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
  [1849] = 1,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
  [1853] = 1,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
  [1857] = 1,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
  [1861] = 1,
    ACTIONS(348), 1,
      sym__comma,
  [1865] = 1,
    ACTIONS(849), 1,
      anon_sym_LPAREN,
  [1869] = 1,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
  [1873] = 1,
    ACTIONS(320), 1,
      sym__comma,
  [1877] = 1,
    ACTIONS(853), 1,
      sym__comma,
  [1881] = 1,
    ACTIONS(855), 1,
      sym__comma,
  [1885] = 1,
    ACTIONS(857), 1,
      sym__comma,
  [1889] = 1,
    ACTIONS(859), 1,
      sym__line_break,
  [1893] = 1,
    ACTIONS(610), 1,
      sym__line_break,
  [1897] = 1,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
  [1901] = 1,
    ACTIONS(863), 1,
      sym__comma,
  [1905] = 1,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
  [1909] = 1,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
  [1913] = 1,
    ACTIONS(867), 1,
      sym__comma,
  [1917] = 1,
    ACTIONS(869), 1,
      anon_sym_RPAREN,
  [1921] = 1,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
  [1925] = 1,
    ACTIONS(873), 1,
      sym__comma,
  [1929] = 1,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
  [1933] = 1,
    ACTIONS(875), 1,
      anon_sym_LPAREN,
  [1937] = 1,
    ACTIONS(877), 1,
      sym__comma,
  [1941] = 1,
    ACTIONS(879), 1,
      sym__comma,
  [1945] = 1,
    ACTIONS(584), 1,
      anon_sym_LPAREN,
  [1949] = 1,
    ACTIONS(881), 1,
      sym__comma,
  [1953] = 1,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
  [1957] = 1,
    ACTIONS(885), 1,
      sym__comma,
  [1961] = 1,
    ACTIONS(887), 1,
      sym__comma,
  [1965] = 1,
    ACTIONS(889), 1,
      sym__comma,
  [1969] = 1,
    ACTIONS(891), 1,
      sym__comma,
  [1973] = 1,
    ACTIONS(318), 1,
      sym__comma,
  [1977] = 1,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
  [1981] = 1,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
  [1985] = 1,
    ACTIONS(101), 1,
      sym__line_break,
  [1989] = 1,
    ACTIONS(895), 1,
      sym__line_break,
  [1993] = 1,
    ACTIONS(897), 1,
      ts_builtin_sym_end,
  [1997] = 1,
    ACTIONS(342), 1,
      sym__comma,
  [2001] = 1,
    ACTIONS(284), 1,
      sym__comma,
  [2005] = 1,
    ACTIONS(336), 1,
      sym__comma,
  [2009] = 1,
    ACTIONS(326), 1,
      sym__comma,
  [2013] = 1,
    ACTIONS(899), 1,
      sym__comma,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(62)] = 0,
  [SMALL_STATE(63)] = 30,
  [SMALL_STATE(64)] = 60,
  [SMALL_STATE(65)] = 90,
  [SMALL_STATE(66)] = 107,
  [SMALL_STATE(67)] = 125,
  [SMALL_STATE(68)] = 142,
  [SMALL_STATE(69)] = 156,
  [SMALL_STATE(70)] = 170,
  [SMALL_STATE(71)] = 186,
  [SMALL_STATE(72)] = 200,
  [SMALL_STATE(73)] = 214,
  [SMALL_STATE(74)] = 228,
  [SMALL_STATE(75)] = 240,
  [SMALL_STATE(76)] = 250,
  [SMALL_STATE(77)] = 261,
  [SMALL_STATE(78)] = 272,
  [SMALL_STATE(79)] = 291,
  [SMALL_STATE(80)] = 302,
  [SMALL_STATE(81)] = 313,
  [SMALL_STATE(82)] = 322,
  [SMALL_STATE(83)] = 331,
  [SMALL_STATE(84)] = 342,
  [SMALL_STATE(85)] = 351,
  [SMALL_STATE(86)] = 362,
  [SMALL_STATE(87)] = 373,
  [SMALL_STATE(88)] = 382,
  [SMALL_STATE(89)] = 391,
  [SMALL_STATE(90)] = 408,
  [SMALL_STATE(91)] = 417,
  [SMALL_STATE(92)] = 426,
  [SMALL_STATE(93)] = 437,
  [SMALL_STATE(94)] = 456,
  [SMALL_STATE(95)] = 465,
  [SMALL_STATE(96)] = 474,
  [SMALL_STATE(97)] = 483,
  [SMALL_STATE(98)] = 494,
  [SMALL_STATE(99)] = 502,
  [SMALL_STATE(100)] = 510,
  [SMALL_STATE(101)] = 518,
  [SMALL_STATE(102)] = 534,
  [SMALL_STATE(103)] = 544,
  [SMALL_STATE(104)] = 554,
  [SMALL_STATE(105)] = 562,
  [SMALL_STATE(106)] = 570,
  [SMALL_STATE(107)] = 578,
  [SMALL_STATE(108)] = 592,
  [SMALL_STATE(109)] = 602,
  [SMALL_STATE(110)] = 612,
  [SMALL_STATE(111)] = 620,
  [SMALL_STATE(112)] = 630,
  [SMALL_STATE(113)] = 638,
  [SMALL_STATE(114)] = 648,
  [SMALL_STATE(115)] = 656,
  [SMALL_STATE(116)] = 666,
  [SMALL_STATE(117)] = 674,
  [SMALL_STATE(118)] = 684,
  [SMALL_STATE(119)] = 694,
  [SMALL_STATE(120)] = 704,
  [SMALL_STATE(121)] = 712,
  [SMALL_STATE(122)] = 722,
  [SMALL_STATE(123)] = 732,
  [SMALL_STATE(124)] = 740,
  [SMALL_STATE(125)] = 748,
  [SMALL_STATE(126)] = 756,
  [SMALL_STATE(127)] = 764,
  [SMALL_STATE(128)] = 774,
  [SMALL_STATE(129)] = 784,
  [SMALL_STATE(130)] = 792,
  [SMALL_STATE(131)] = 802,
  [SMALL_STATE(132)] = 810,
  [SMALL_STATE(133)] = 818,
  [SMALL_STATE(134)] = 826,
  [SMALL_STATE(135)] = 836,
  [SMALL_STATE(136)] = 844,
  [SMALL_STATE(137)] = 852,
  [SMALL_STATE(138)] = 861,
  [SMALL_STATE(139)] = 872,
  [SMALL_STATE(140)] = 885,
  [SMALL_STATE(141)] = 898,
  [SMALL_STATE(142)] = 911,
  [SMALL_STATE(143)] = 924,
  [SMALL_STATE(144)] = 937,
  [SMALL_STATE(145)] = 950,
  [SMALL_STATE(146)] = 963,
  [SMALL_STATE(147)] = 974,
  [SMALL_STATE(148)] = 987,
  [SMALL_STATE(149)] = 998,
  [SMALL_STATE(150)] = 1011,
  [SMALL_STATE(151)] = 1019,
  [SMALL_STATE(152)] = 1029,
  [SMALL_STATE(153)] = 1039,
  [SMALL_STATE(154)] = 1047,
  [SMALL_STATE(155)] = 1055,
  [SMALL_STATE(156)] = 1065,
  [SMALL_STATE(157)] = 1075,
  [SMALL_STATE(158)] = 1083,
  [SMALL_STATE(159)] = 1093,
  [SMALL_STATE(160)] = 1103,
  [SMALL_STATE(161)] = 1113,
  [SMALL_STATE(162)] = 1123,
  [SMALL_STATE(163)] = 1133,
  [SMALL_STATE(164)] = 1143,
  [SMALL_STATE(165)] = 1151,
  [SMALL_STATE(166)] = 1161,
  [SMALL_STATE(167)] = 1171,
  [SMALL_STATE(168)] = 1181,
  [SMALL_STATE(169)] = 1191,
  [SMALL_STATE(170)] = 1199,
  [SMALL_STATE(171)] = 1209,
  [SMALL_STATE(172)] = 1219,
  [SMALL_STATE(173)] = 1229,
  [SMALL_STATE(174)] = 1239,
  [SMALL_STATE(175)] = 1249,
  [SMALL_STATE(176)] = 1259,
  [SMALL_STATE(177)] = 1269,
  [SMALL_STATE(178)] = 1277,
  [SMALL_STATE(179)] = 1285,
  [SMALL_STATE(180)] = 1293,
  [SMALL_STATE(181)] = 1303,
  [SMALL_STATE(182)] = 1311,
  [SMALL_STATE(183)] = 1321,
  [SMALL_STATE(184)] = 1329,
  [SMALL_STATE(185)] = 1339,
  [SMALL_STATE(186)] = 1349,
  [SMALL_STATE(187)] = 1359,
  [SMALL_STATE(188)] = 1367,
  [SMALL_STATE(189)] = 1374,
  [SMALL_STATE(190)] = 1381,
  [SMALL_STATE(191)] = 1388,
  [SMALL_STATE(192)] = 1395,
  [SMALL_STATE(193)] = 1400,
  [SMALL_STATE(194)] = 1405,
  [SMALL_STATE(195)] = 1412,
  [SMALL_STATE(196)] = 1419,
  [SMALL_STATE(197)] = 1426,
  [SMALL_STATE(198)] = 1433,
  [SMALL_STATE(199)] = 1440,
  [SMALL_STATE(200)] = 1447,
  [SMALL_STATE(201)] = 1452,
  [SMALL_STATE(202)] = 1459,
  [SMALL_STATE(203)] = 1466,
  [SMALL_STATE(204)] = 1471,
  [SMALL_STATE(205)] = 1478,
  [SMALL_STATE(206)] = 1483,
  [SMALL_STATE(207)] = 1488,
  [SMALL_STATE(208)] = 1493,
  [SMALL_STATE(209)] = 1500,
  [SMALL_STATE(210)] = 1505,
  [SMALL_STATE(211)] = 1510,
  [SMALL_STATE(212)] = 1515,
  [SMALL_STATE(213)] = 1522,
  [SMALL_STATE(214)] = 1529,
  [SMALL_STATE(215)] = 1536,
  [SMALL_STATE(216)] = 1543,
  [SMALL_STATE(217)] = 1550,
  [SMALL_STATE(218)] = 1557,
  [SMALL_STATE(219)] = 1564,
  [SMALL_STATE(220)] = 1571,
  [SMALL_STATE(221)] = 1578,
  [SMALL_STATE(222)] = 1585,
  [SMALL_STATE(223)] = 1592,
  [SMALL_STATE(224)] = 1599,
  [SMALL_STATE(225)] = 1606,
  [SMALL_STATE(226)] = 1613,
  [SMALL_STATE(227)] = 1620,
  [SMALL_STATE(228)] = 1627,
  [SMALL_STATE(229)] = 1634,
  [SMALL_STATE(230)] = 1641,
  [SMALL_STATE(231)] = 1648,
  [SMALL_STATE(232)] = 1655,
  [SMALL_STATE(233)] = 1662,
  [SMALL_STATE(234)] = 1669,
  [SMALL_STATE(235)] = 1676,
  [SMALL_STATE(236)] = 1683,
  [SMALL_STATE(237)] = 1690,
  [SMALL_STATE(238)] = 1697,
  [SMALL_STATE(239)] = 1704,
  [SMALL_STATE(240)] = 1711,
  [SMALL_STATE(241)] = 1718,
  [SMALL_STATE(242)] = 1725,
  [SMALL_STATE(243)] = 1732,
  [SMALL_STATE(244)] = 1739,
  [SMALL_STATE(245)] = 1746,
  [SMALL_STATE(246)] = 1753,
  [SMALL_STATE(247)] = 1760,
  [SMALL_STATE(248)] = 1767,
  [SMALL_STATE(249)] = 1772,
  [SMALL_STATE(250)] = 1779,
  [SMALL_STATE(251)] = 1786,
  [SMALL_STATE(252)] = 1793,
  [SMALL_STATE(253)] = 1800,
  [SMALL_STATE(254)] = 1807,
  [SMALL_STATE(255)] = 1814,
  [SMALL_STATE(256)] = 1821,
  [SMALL_STATE(257)] = 1825,
  [SMALL_STATE(258)] = 1829,
  [SMALL_STATE(259)] = 1833,
  [SMALL_STATE(260)] = 1837,
  [SMALL_STATE(261)] = 1841,
  [SMALL_STATE(262)] = 1845,
  [SMALL_STATE(263)] = 1849,
  [SMALL_STATE(264)] = 1853,
  [SMALL_STATE(265)] = 1857,
  [SMALL_STATE(266)] = 1861,
  [SMALL_STATE(267)] = 1865,
  [SMALL_STATE(268)] = 1869,
  [SMALL_STATE(269)] = 1873,
  [SMALL_STATE(270)] = 1877,
  [SMALL_STATE(271)] = 1881,
  [SMALL_STATE(272)] = 1885,
  [SMALL_STATE(273)] = 1889,
  [SMALL_STATE(274)] = 1893,
  [SMALL_STATE(275)] = 1897,
  [SMALL_STATE(276)] = 1901,
  [SMALL_STATE(277)] = 1905,
  [SMALL_STATE(278)] = 1909,
  [SMALL_STATE(279)] = 1913,
  [SMALL_STATE(280)] = 1917,
  [SMALL_STATE(281)] = 1921,
  [SMALL_STATE(282)] = 1925,
  [SMALL_STATE(283)] = 1929,
  [SMALL_STATE(284)] = 1933,
  [SMALL_STATE(285)] = 1937,
  [SMALL_STATE(286)] = 1941,
  [SMALL_STATE(287)] = 1945,
  [SMALL_STATE(288)] = 1949,
  [SMALL_STATE(289)] = 1953,
  [SMALL_STATE(290)] = 1957,
  [SMALL_STATE(291)] = 1961,
  [SMALL_STATE(292)] = 1965,
  [SMALL_STATE(293)] = 1969,
  [SMALL_STATE(294)] = 1973,
  [SMALL_STATE(295)] = 1977,
  [SMALL_STATE(296)] = 1981,
  [SMALL_STATE(297)] = 1985,
  [SMALL_STATE(298)] = 1989,
  [SMALL_STATE(299)] = 1993,
  [SMALL_STATE(300)] = 1997,
  [SMALL_STATE(301)] = 2001,
  [SMALL_STATE(302)] = 2005,
  [SMALL_STATE(303)] = 2009,
  [SMALL_STATE(304)] = 2013,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(185),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(298),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(44),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(43),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(42),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(40),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(39),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(38),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(37),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(29),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(18),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(28),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(26),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(31),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(20),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(21),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(97),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__machine_code, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_code, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__machine_code, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_code, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__machine_code_repeat1, 2), SHIFT_REPEAT(10),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__machine_code_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__machine_code_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(240),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(101),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(252),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(241),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(137),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(164),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(150),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(157),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(154),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(140),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(34),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(201),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(153),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(169),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(138),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(233),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PackUnpackOpcode, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PackUnpackOpcode, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AccessRegisterOpcode, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AccessRegisterOpcode, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ToBeClassifiedOpcode, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ToBeClassifiedOpcode, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StackOpcode, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StackOpcode, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ShiftAndRotateOpcode, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ShiftAndRotateOpcode, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StringOpcode, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringOpcode, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MiscellaneousOpcode, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MiscellaneousOpcode, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LogicalOpcode, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LogicalOpcode, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_IOOpcode, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IOOpcode, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DataTransferOpcode, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DataTransferOpcode, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CuriousOpcode, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CuriousOpcode, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BitAndByteOpcode, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BitAndByteOpcode, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BinaryArithmeticOpcode, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BinaryArithmeticOpcode, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(61),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2), SHIFT_REPEAT(195),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2), SHIFT_REPEAT(14),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2), SHIFT_REPEAT(143),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control, 1),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(65),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherRegisterOperand, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryAbsoluteOperand, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherFnOperands, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2), SHIFT_REPEAT(69),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(70),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediateOperand, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2), SHIFT_REPEAT(73),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatRegisterOperand, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segmentRegisterOperand, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 4),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registerOperand, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherRegisterOperand, 5),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister64Bits, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister32Bits, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister16Bits, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister8Bits, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherRegisterOperand, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_controlRegisterOperand, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instructionRegisterOperand, 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 4),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegisterOperand, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatRegisterOperand, 4),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_controlOpcode, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controlOpcode, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 7),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_someOpcode, 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryOperand, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryAbsoluteOperand, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 3),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 3),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fnOperand, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 11),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 10),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 9),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 8),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 8),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 7),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 7),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 6),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 6),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 6),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 5),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 5),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segmentRegisterOperand, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatRegisterOperand, 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediateOperand, 2),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherFnOperands, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2), SHIFT_REPEAT(144),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_immediateOperand_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2), SHIFT_REPEAT(145),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister32Bits, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 5),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controlRegisterOperand, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister8Bits, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister16Bits, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__address_repeat1, 2), SHIFT_REPEAT(159),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__address_repeat1, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister64Bits, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memoryIndirectOperand_repeat1, 2), SHIFT_REPEAT(167),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memoryIndirectOperand_repeat1, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instructionRegisterOperand, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 4),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 4),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 3),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 3),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registerOperand, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegisterOperand, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatRegisterOperand, 4),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherRegisterOperand, 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address, 1),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operand_repeat2, 2), SHIFT_REPEAT(186),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_repeat2, 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryOperand, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fnOperand, 1),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_someOpcode, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 5),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 5),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 6),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 6),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 6),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 7),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 7),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 7),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 8),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 8),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 9),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 10),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 11),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [897] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
