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
#define STATE_COUNT 311
#define LARGE_STATE_COUNT 68
#define SYMBOL_COUNT 583
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
  anon_sym_adcx = 62,
  anon_sym_adox = 63,
  anon_sym_vmulsd = 64,
  anon_sym_vpaddd = 65,
  anon_sym_vpaddb = 66,
  anon_sym_vpaddq = 67,
  anon_sym_vpaddw = 68,
  anon_sym_vpcmpgtd = 69,
  anon_sym_vdivsd = 70,
  anon_sym_vpmaddubsw = 71,
  anon_sym_vpmaddwd = 72,
  anon_sym_vpmullw = 73,
  anon_sym_vpmuludq = 74,
  anon_sym_vucomisd = 75,
  anon_sym_vucomiss = 76,
  anon_sym_addsd = 77,
  anon_sym_ucomisd = 78,
  anon_sym_ucomiss = 79,
  anon_sym_maxsd = 80,
  anon_sym_minsd = 81,
  anon_sym_maxss = 82,
  anon_sym_minss = 83,
  anon_sym_vsubsd = 84,
  anon_sym_vpsubusw = 85,
  anon_sym_vpsubq = 86,
  anon_sym_vpsubd = 87,
  anon_sym_vpsubw = 88,
  anon_sym_psubd = 89,
  anon_sym_pmaddwd = 90,
  anon_sym_paddw = 91,
  anon_sym_psubusw = 92,
  anon_sym_psubusb = 93,
  anon_sym_psubb = 94,
  anon_sym_psubq = 95,
  anon_sym_paddq = 96,
  anon_sym_pmuludq = 97,
  anon_sym_pmaddubsw = 98,
  anon_sym_paddd = 99,
  anon_sym_pcmpgtd = 100,
  anon_sym_pcmpeqd = 101,
  anon_sym_pcmpeqb = 102,
  anon_sym_vpcmpltud = 103,
  anon_sym_bsf = 104,
  anon_sym_bsr = 105,
  anon_sym_bts = 106,
  anon_sym_bt = 107,
  anon_sym_btr = 108,
  anon_sym_btl = 109,
  anon_sym_setne = 110,
  anon_sym_setb = 111,
  anon_sym_sete = 112,
  anon_sym_setbe = 113,
  anon_sym_seta = 114,
  anon_sym_setge = 115,
  anon_sym_setae = 116,
  anon_sym_setl = 117,
  anon_sym_setle = 118,
  anon_sym_setg = 119,
  anon_sym_seto = 120,
  anon_sym_setnp = 121,
  anon_sym_setp = 122,
  anon_sym_setns = 123,
  anon_sym_test = 124,
  anon_sym_testb = 125,
  anon_sym_testl = 126,
  anon_sym_knotw = 127,
  anon_sym_bswap = 128,
  anon_sym_cbtw = 129,
  anon_sym_cltd = 130,
  anon_sym_cltq = 131,
  anon_sym_cmovbe = 132,
  anon_sym_cmovl = 133,
  anon_sym_cmovae = 134,
  anon_sym_cmovo = 135,
  anon_sym_cmovne = 136,
  anon_sym_cmovns = 137,
  anon_sym_cmovg = 138,
  anon_sym_cmovp = 139,
  anon_sym_cmove = 140,
  anon_sym_cmovge = 141,
  anon_sym_cmovb = 142,
  anon_sym_cmova = 143,
  anon_sym_cmovle = 144,
  anon_sym_cmovs = 145,
  anon_sym_cwtl = 146,
  anon_sym_cwtd = 147,
  anon_sym_cqto = 148,
  anon_sym_cvttsd2si = 149,
  anon_sym_cvtss2sd = 150,
  anon_sym_cvttss2si = 151,
  anon_sym_cvtsi2sd = 152,
  anon_sym_cvtsi2ss = 153,
  anon_sym_cvtsi2sdq = 154,
  anon_sym_cvtsi2sdl = 155,
  anon_sym_cvtsd2ss = 156,
  anon_sym_cvtsi2ssl = 157,
  anon_sym_vcvtusi2sd = 158,
  anon_sym_mov = 159,
  anon_sym_movw = 160,
  anon_sym_movl = 161,
  anon_sym_movq = 162,
  anon_sym_movb = 163,
  anon_sym_movabs = 164,
  anon_sym_movsbw = 165,
  anon_sym_movsbq = 166,
  anon_sym_movsbl = 167,
  anon_sym_movswl = 168,
  anon_sym_movswq = 169,
  anon_sym_movzbw = 170,
  anon_sym_movzbq = 171,
  anon_sym_movzbl = 172,
  anon_sym_movzwl = 173,
  anon_sym_movaps = 174,
  anon_sym_movhlps = 175,
  anon_sym_movss = 176,
  anon_sym_movups = 177,
  anon_sym_movsd = 178,
  anon_sym_movd = 179,
  anon_sym_movhps = 180,
  anon_sym_movdqa = 181,
  anon_sym_movbe = 182,
  anon_sym_movapd = 183,
  anon_sym_movdqu = 184,
  anon_sym_xchg = 185,
  anon_sym_fildl = 186,
  anon_sym_fldt = 187,
  anon_sym_fstpl = 188,
  anon_sym_vmovaps = 189,
  anon_sym_vmovapd = 190,
  anon_sym_vmovss = 191,
  anon_sym_vmovdqu = 192,
  anon_sym_vmovdqu64 = 193,
  anon_sym_vmovdqu32 = 194,
  anon_sym_vmovdqa = 195,
  anon_sym_vmovdqa32 = 196,
  anon_sym_vmovdqa64 = 197,
  anon_sym_vmovq = 198,
  anon_sym_vmovups = 199,
  anon_sym_vmovd = 200,
  anon_sym_vmovsd = 201,
  anon_sym_pmovmskb = 202,
  anon_sym_insb = 203,
  anon_sym_insl = 204,
  anon_sym_outsb = 205,
  anon_sym_outsl = 206,
  anon_sym_or = 207,
  anon_sym_orq = 208,
  anon_sym_orl = 209,
  anon_sym_orb = 210,
  anon_sym_orw = 211,
  anon_sym_xor = 212,
  anon_sym_xorl = 213,
  anon_sym_xorw = 214,
  anon_sym_xorps = 215,
  anon_sym_xorpd = 216,
  anon_sym_vxorps = 217,
  anon_sym_vpxord = 218,
  anon_sym_vpxor = 219,
  anon_sym_and = 220,
  anon_sym_andq = 221,
  anon_sym_andl = 222,
  anon_sym_andw = 223,
  anon_sym_andb = 224,
  anon_sym_andn = 225,
  anon_sym_andpd = 226,
  anon_sym_pand = 227,
  anon_sym_pandn = 228,
  anon_sym_andps = 229,
  anon_sym_vpand = 230,
  anon_sym_not = 231,
  anon_sym_notl = 232,
  anon_sym_notw = 233,
  anon_sym_vpor = 234,
  anon_sym_por = 235,
  anon_sym_pxor = 236,
  anon_sym_cpuid = 237,
  anon_sym_lea = 238,
  anon_sym_popcnt = 239,
  anon_sym_nop = 240,
  anon_sym_nopl = 241,
  anon_sym_nopw = 242,
  anon_sym_ud2 = 243,
  anon_sym_data16 = 244,
  anon_sym_sha1rnds4 = 245,
  anon_sym_addr32 = 246,
  anon_sym_sha1msg1 = 247,
  anon_sym_sha1msg2 = 248,
  anon_sym_sha1nexte = 249,
  anon_sym_endbr64 = 250,
  anon_sym_gs = 251,
  anon_sym_re = 252,
  anon_sym_ss = 253,
  anon_sym_lock = 254,
  anon_sym_prefetcht1 = 255,
  anon_sym_prefetcht0 = 256,
  anon_sym_mfence = 257,
  anon_sym_femms = 258,
  anon_sym_tzcnt = 259,
  anon_sym_leaveq = 260,
  anon_sym_retq = 261,
  anon_sym_packuswb = 262,
  anon_sym_punpckhbw = 263,
  anon_sym_punpckhdq = 264,
  anon_sym_punpckhwd = 265,
  anon_sym_punpcklbw = 266,
  anon_sym_punpckldq = 267,
  anon_sym_punpcklwd = 268,
  anon_sym_vpunpcklwd = 269,
  anon_sym_vpunpckldq = 270,
  anon_sym_punpcklqdq = 271,
  anon_sym_punpckhqdq = 272,
  anon_sym_vpunpckhqdq = 273,
  anon_sym_vpunpckhdq = 274,
  anon_sym_vpunpcklqdq = 275,
  anon_sym_vpunpckhwd = 276,
  anon_sym_vpackusdw = 277,
  anon_sym_vpalignr = 278,
  anon_sym_palignr = 279,
  anon_sym_vunpckhpd = 280,
  anon_sym_vunpckhps = 281,
  anon_sym_vunpcklpd = 282,
  anon_sym_vunpcklps = 283,
  anon_sym_unpckhpd = 284,
  anon_sym_rol = 285,
  anon_sym_ror = 286,
  anon_sym_sar = 287,
  anon_sym_sarl = 288,
  anon_sym_sarx = 289,
  anon_sym_shl = 290,
  anon_sym_shll = 291,
  anon_sym_shld = 292,
  anon_sym_shlx = 293,
  anon_sym_shlq = 294,
  anon_sym_shr = 295,
  anon_sym_shrq = 296,
  anon_sym_shrd = 297,
  anon_sym_shrl = 298,
  anon_sym_shrx = 299,
  anon_sym_vprord = 300,
  anon_sym_vprorq = 301,
  anon_sym_rorl = 302,
  anon_sym_roll = 303,
  anon_sym_vpslldq = 304,
  anon_sym_vpslld = 305,
  anon_sym_vpsllq = 306,
  anon_sym_vpsllw = 307,
  anon_sym_vpsrldq = 308,
  anon_sym_vpsrld = 309,
  anon_sym_vpsrlq = 310,
  anon_sym_vpsrlw = 311,
  anon_sym_rorx = 312,
  anon_sym_psrld = 313,
  anon_sym_psrlw = 314,
  anon_sym_psllq = 315,
  anon_sym_psrlq = 316,
  anon_sym_pslldq = 317,
  anon_sym_psrldq = 318,
  anon_sym_psrad = 319,
  anon_sym_pslld = 320,
  anon_sym_push = 321,
  anon_sym_pushq = 322,
  anon_sym_pop = 323,
  anon_sym_movslq = 324,
  anon_sym_movsb = 325,
  anon_sym_rep = 326,
  anon_sym_repz = 327,
  anon_sym_repnz = 328,
  anon_sym_rex = 329,
  anon_sym_rex_DOTWB = 330,
  anon_sym_rex_DOTWRB = 331,
  anon_sym_rex_DOTRXB = 332,
  anon_sym_rex_DOTB = 333,
  anon_sym_rex_DOTWRXB = 334,
  anon_sym_rex_DOTXB = 335,
  anon_sym_rex_DOTW = 336,
  anon_sym_rex_DOTRB = 337,
  anon_sym_xgetbv = 338,
  anon_sym_fs = 339,
  anon_sym_kmovw = 340,
  anon_sym_vzeroall = 341,
  anon_sym_vzeroupper = 342,
  anon_sym_aesdec = 343,
  anon_sym_aesdeclast = 344,
  anon_sym_aesenc = 345,
  anon_sym_aesenclast = 346,
  anon_sym_vaesenc = 347,
  anon_sym_vaesenclast = 348,
  anon_sym_aeskeygenassist = 349,
  anon_sym_vpextrw = 350,
  anon_sym_vextracti128 = 351,
  anon_sym_vextracti32x4 = 352,
  anon_sym_pextrq = 353,
  anon_sym_pextrw = 354,
  anon_sym_pextrb = 355,
  anon_sym_vpinsrw = 356,
  anon_sym_vpinsrd = 357,
  anon_sym_vpinsrq = 358,
  anon_sym_vpinsrb = 359,
  anon_sym_vinserti128 = 360,
  anon_sym_vinserti32x4 = 361,
  anon_sym_vinserti64x4 = 362,
  anon_sym_vinsertf128 = 363,
  anon_sym_pinsrw = 364,
  anon_sym_pinsrb = 365,
  anon_sym_pinsrd = 366,
  anon_sym_vpshufb = 367,
  anon_sym_vpshufd = 368,
  anon_sym_vshufps = 369,
  anon_sym_vshufi32x4 = 370,
  anon_sym_vshufi64x2 = 371,
  anon_sym_shufps = 372,
  anon_sym_pshuflw = 373,
  anon_sym_pshufd = 374,
  anon_sym_pshufhw = 375,
  anon_sym_shufpd = 376,
  anon_sym_pshufb = 377,
  anon_sym_vperm2f128 = 378,
  anon_sym_vperm2i128 = 379,
  anon_sym_vpermd = 380,
  anon_sym_vpermq = 381,
  anon_sym_vpermt2d = 382,
  anon_sym_vpermi2d = 383,
  anon_sym_vblendps = 384,
  anon_sym_vblendvps = 385,
  anon_sym_vpblendmd = 386,
  anon_sym_vpblendd = 387,
  anon_sym_pblendw = 388,
  anon_sym_blendvps = 389,
  anon_sym_vbroadcastss = 390,
  anon_sym_vpbroadcastq = 391,
  anon_sym_vpbroadcastd = 392,
  anon_sym_vbroadcasti128 = 393,
  anon_sym_vbroadcasti32x4 = 394,
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
  sym_DataTransferOpcode = 528,
  sym_IOOpcode = 529,
  sym_LogicalOpcode = 530,
  sym_MiscellaneousOpcode = 531,
  sym_OperatingSystemSupportOpcode = 532,
  sym_PackUnpackOpcode = 533,
  sym_ShiftAndRotateOpcode = 534,
  sym_StackOpcode = 535,
  sym_StringOpcode = 536,
  sym_AccessRegisterOpcode = 537,
  sym_CryptoOpcode = 538,
  sym_ExtractOpcode = 539,
  sym_InsertOpcode = 540,
  sym_ShuffleOpcode = 541,
  sym_PermuteOpcode = 542,
  sym_BlendOpcode = 543,
  sym_BroadcastOpcode = 544,
  sym_operand = 545,
  sym_immediateOperand = 546,
  sym_registerOperand = 547,
  sym_segmentRegisterOperand = 548,
  sym_generalRegisterOperand = 549,
  sym_generalRegister64Bits = 550,
  sym_generalRegister32Bits = 551,
  sym_generalRegister16Bits = 552,
  sym_generalRegister8Bits = 553,
  sym_memoryOperand = 554,
  sym_memoryScalaredIndexedOperand = 555,
  sym_memorySegmentBaseOperand = 556,
  sym_memoryIndirectOperand = 557,
  sym_offset = 558,
  sym_base = 559,
  sym_index = 560,
  sym_scale = 561,
  sym_memoryAbsoluteOperand = 562,
  sym_someOpcode = 563,
  sym_control = 564,
  sym_controlOpcode = 565,
  sym_fnOperand = 566,
  sym_indirectOperands = 567,
  sym_controlRegisterOperand = 568,
  sym_instructionRegisterOperand = 569,
  sym_floatRegisterOperand = 570,
  sym_otherRegisterOperand = 571,
  sym_otherFnOperands = 572,
  aux_sym_prog_repeat1 = 573,
  aux_sym__address_repeat1 = 574,
  aux_sym__machine_code_repeat1 = 575,
  aux_sym_data_repeat1 = 576,
  aux_sym_operand_repeat1 = 577,
  aux_sym_operand_repeat2 = 578,
  aux_sym_immediateOperand_repeat1 = 579,
  aux_sym_memoryIndirectOperand_repeat1 = 580,
  aux_sym_control_repeat1 = 581,
  aux_sym_otherFnOperands_repeat1 = 582,
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
  [anon_sym_adcx] = "adcx",
  [anon_sym_adox] = "adox",
  [anon_sym_vmulsd] = "vmulsd",
  [anon_sym_vpaddd] = "vpaddd",
  [anon_sym_vpaddb] = "vpaddb",
  [anon_sym_vpaddq] = "vpaddq",
  [anon_sym_vpaddw] = "vpaddw",
  [anon_sym_vpcmpgtd] = "vpcmpgtd",
  [anon_sym_vdivsd] = "vdivsd",
  [anon_sym_vpmaddubsw] = "vpmaddubsw",
  [anon_sym_vpmaddwd] = "vpmaddwd",
  [anon_sym_vpmullw] = "vpmullw",
  [anon_sym_vpmuludq] = "vpmuludq",
  [anon_sym_vucomisd] = "vucomisd",
  [anon_sym_vucomiss] = "vucomiss",
  [anon_sym_addsd] = "addsd",
  [anon_sym_ucomisd] = "ucomisd",
  [anon_sym_ucomiss] = "ucomiss",
  [anon_sym_maxsd] = "maxsd",
  [anon_sym_minsd] = "minsd",
  [anon_sym_maxss] = "maxss",
  [anon_sym_minss] = "minss",
  [anon_sym_vsubsd] = "vsubsd",
  [anon_sym_vpsubusw] = "vpsubusw",
  [anon_sym_vpsubq] = "vpsubq",
  [anon_sym_vpsubd] = "vpsubd",
  [anon_sym_vpsubw] = "vpsubw",
  [anon_sym_psubd] = "psubd",
  [anon_sym_pmaddwd] = "pmaddwd",
  [anon_sym_paddw] = "paddw",
  [anon_sym_psubusw] = "psubusw",
  [anon_sym_psubusb] = "psubusb",
  [anon_sym_psubb] = "psubb",
  [anon_sym_psubq] = "psubq",
  [anon_sym_paddq] = "paddq",
  [anon_sym_pmuludq] = "pmuludq",
  [anon_sym_pmaddubsw] = "pmaddubsw",
  [anon_sym_paddd] = "paddd",
  [anon_sym_pcmpgtd] = "pcmpgtd",
  [anon_sym_pcmpeqd] = "pcmpeqd",
  [anon_sym_pcmpeqb] = "pcmpeqb",
  [anon_sym_vpcmpltud] = "vpcmpltud",
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
  [anon_sym_vcvtusi2sd] = "vcvtusi2sd",
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
  [anon_sym_pmovmskb] = "pmovmskb",
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
  [anon_sym_vpor] = "vpor",
  [anon_sym_por] = "por",
  [anon_sym_pxor] = "pxor",
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
  [anon_sym_gs] = "gs",
  [anon_sym_re] = "re",
  [anon_sym_ss] = "ss",
  [anon_sym_lock] = "lock",
  [anon_sym_prefetcht1] = "prefetcht1",
  [anon_sym_prefetcht0] = "prefetcht0",
  [anon_sym_mfence] = "mfence",
  [anon_sym_femms] = "femms",
  [anon_sym_tzcnt] = "tzcnt",
  [anon_sym_leaveq] = "leaveq",
  [anon_sym_retq] = "retq",
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
  [anon_sym_vpackusdw] = "vpackusdw",
  [anon_sym_vpalignr] = "vpalignr",
  [anon_sym_palignr] = "palignr",
  [anon_sym_vunpckhpd] = "vunpckhpd",
  [anon_sym_vunpckhps] = "vunpckhps",
  [anon_sym_vunpcklpd] = "vunpcklpd",
  [anon_sym_vunpcklps] = "vunpcklps",
  [anon_sym_unpckhpd] = "unpckhpd",
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
  [anon_sym_vpslldq] = "vpslldq",
  [anon_sym_vpslld] = "vpslld",
  [anon_sym_vpsllq] = "vpsllq",
  [anon_sym_vpsllw] = "vpsllw",
  [anon_sym_vpsrldq] = "vpsrldq",
  [anon_sym_vpsrld] = "vpsrld",
  [anon_sym_vpsrlq] = "vpsrlq",
  [anon_sym_vpsrlw] = "vpsrlw",
  [anon_sym_rorx] = "rorx",
  [anon_sym_psrld] = "psrld",
  [anon_sym_psrlw] = "psrlw",
  [anon_sym_psllq] = "psllq",
  [anon_sym_psrlq] = "psrlq",
  [anon_sym_pslldq] = "pslldq",
  [anon_sym_psrldq] = "psrldq",
  [anon_sym_psrad] = "psrad",
  [anon_sym_pslld] = "pslld",
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
  [anon_sym_vzeroall] = "vzeroall",
  [anon_sym_vzeroupper] = "vzeroupper",
  [anon_sym_aesdec] = "aesdec",
  [anon_sym_aesdeclast] = "aesdeclast",
  [anon_sym_aesenc] = "aesenc",
  [anon_sym_aesenclast] = "aesenclast",
  [anon_sym_vaesenc] = "vaesenc",
  [anon_sym_vaesenclast] = "vaesenclast",
  [anon_sym_aeskeygenassist] = "aeskeygenassist",
  [anon_sym_vpextrw] = "vpextrw",
  [anon_sym_vextracti128] = "vextracti128",
  [anon_sym_vextracti32x4] = "vextracti32x4",
  [anon_sym_pextrq] = "pextrq",
  [anon_sym_pextrw] = "pextrw",
  [anon_sym_pextrb] = "pextrb",
  [anon_sym_vpinsrw] = "vpinsrw",
  [anon_sym_vpinsrd] = "vpinsrd",
  [anon_sym_vpinsrq] = "vpinsrq",
  [anon_sym_vpinsrb] = "vpinsrb",
  [anon_sym_vinserti128] = "vinserti128",
  [anon_sym_vinserti32x4] = "vinserti32x4",
  [anon_sym_vinserti64x4] = "vinserti64x4",
  [anon_sym_vinsertf128] = "vinsertf128",
  [anon_sym_pinsrw] = "pinsrw",
  [anon_sym_pinsrb] = "pinsrb",
  [anon_sym_pinsrd] = "pinsrd",
  [anon_sym_vpshufb] = "vpshufb",
  [anon_sym_vpshufd] = "vpshufd",
  [anon_sym_vshufps] = "vshufps",
  [anon_sym_vshufi32x4] = "vshufi32x4",
  [anon_sym_vshufi64x2] = "vshufi64x2",
  [anon_sym_shufps] = "shufps",
  [anon_sym_pshuflw] = "pshuflw",
  [anon_sym_pshufd] = "pshufd",
  [anon_sym_pshufhw] = "pshufhw",
  [anon_sym_shufpd] = "shufpd",
  [anon_sym_pshufb] = "pshufb",
  [anon_sym_vperm2f128] = "vperm2f128",
  [anon_sym_vperm2i128] = "vperm2i128",
  [anon_sym_vpermd] = "vpermd",
  [anon_sym_vpermq] = "vpermq",
  [anon_sym_vpermt2d] = "vpermt2d",
  [anon_sym_vpermi2d] = "vpermi2d",
  [anon_sym_vblendps] = "vblendps",
  [anon_sym_vblendvps] = "vblendvps",
  [anon_sym_vpblendmd] = "vpblendmd",
  [anon_sym_vpblendd] = "vpblendd",
  [anon_sym_pblendw] = "pblendw",
  [anon_sym_blendvps] = "blendvps",
  [anon_sym_vbroadcastss] = "vbroadcastss",
  [anon_sym_vpbroadcastq] = "vpbroadcastq",
  [anon_sym_vpbroadcastd] = "vpbroadcastd",
  [anon_sym_vbroadcasti128] = "vbroadcasti128",
  [anon_sym_vbroadcasti32x4] = "vbroadcasti32x4",
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
  [sym_DataTransferOpcode] = "DataTransferOpcode",
  [sym_IOOpcode] = "IOOpcode",
  [sym_LogicalOpcode] = "LogicalOpcode",
  [sym_MiscellaneousOpcode] = "MiscellaneousOpcode",
  [sym_OperatingSystemSupportOpcode] = "OperatingSystemSupportOpcode",
  [sym_PackUnpackOpcode] = "PackUnpackOpcode",
  [sym_ShiftAndRotateOpcode] = "ShiftAndRotateOpcode",
  [sym_StackOpcode] = "StackOpcode",
  [sym_StringOpcode] = "StringOpcode",
  [sym_AccessRegisterOpcode] = "AccessRegisterOpcode",
  [sym_CryptoOpcode] = "CryptoOpcode",
  [sym_ExtractOpcode] = "ExtractOpcode",
  [sym_InsertOpcode] = "InsertOpcode",
  [sym_ShuffleOpcode] = "ShuffleOpcode",
  [sym_PermuteOpcode] = "PermuteOpcode",
  [sym_BlendOpcode] = "BlendOpcode",
  [sym_BroadcastOpcode] = "BroadcastOpcode",
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
  [anon_sym_adcx] = anon_sym_adcx,
  [anon_sym_adox] = anon_sym_adox,
  [anon_sym_vmulsd] = anon_sym_vmulsd,
  [anon_sym_vpaddd] = anon_sym_vpaddd,
  [anon_sym_vpaddb] = anon_sym_vpaddb,
  [anon_sym_vpaddq] = anon_sym_vpaddq,
  [anon_sym_vpaddw] = anon_sym_vpaddw,
  [anon_sym_vpcmpgtd] = anon_sym_vpcmpgtd,
  [anon_sym_vdivsd] = anon_sym_vdivsd,
  [anon_sym_vpmaddubsw] = anon_sym_vpmaddubsw,
  [anon_sym_vpmaddwd] = anon_sym_vpmaddwd,
  [anon_sym_vpmullw] = anon_sym_vpmullw,
  [anon_sym_vpmuludq] = anon_sym_vpmuludq,
  [anon_sym_vucomisd] = anon_sym_vucomisd,
  [anon_sym_vucomiss] = anon_sym_vucomiss,
  [anon_sym_addsd] = anon_sym_addsd,
  [anon_sym_ucomisd] = anon_sym_ucomisd,
  [anon_sym_ucomiss] = anon_sym_ucomiss,
  [anon_sym_maxsd] = anon_sym_maxsd,
  [anon_sym_minsd] = anon_sym_minsd,
  [anon_sym_maxss] = anon_sym_maxss,
  [anon_sym_minss] = anon_sym_minss,
  [anon_sym_vsubsd] = anon_sym_vsubsd,
  [anon_sym_vpsubusw] = anon_sym_vpsubusw,
  [anon_sym_vpsubq] = anon_sym_vpsubq,
  [anon_sym_vpsubd] = anon_sym_vpsubd,
  [anon_sym_vpsubw] = anon_sym_vpsubw,
  [anon_sym_psubd] = anon_sym_psubd,
  [anon_sym_pmaddwd] = anon_sym_pmaddwd,
  [anon_sym_paddw] = anon_sym_paddw,
  [anon_sym_psubusw] = anon_sym_psubusw,
  [anon_sym_psubusb] = anon_sym_psubusb,
  [anon_sym_psubb] = anon_sym_psubb,
  [anon_sym_psubq] = anon_sym_psubq,
  [anon_sym_paddq] = anon_sym_paddq,
  [anon_sym_pmuludq] = anon_sym_pmuludq,
  [anon_sym_pmaddubsw] = anon_sym_pmaddubsw,
  [anon_sym_paddd] = anon_sym_paddd,
  [anon_sym_pcmpgtd] = anon_sym_pcmpgtd,
  [anon_sym_pcmpeqd] = anon_sym_pcmpeqd,
  [anon_sym_pcmpeqb] = anon_sym_pcmpeqb,
  [anon_sym_vpcmpltud] = anon_sym_vpcmpltud,
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
  [anon_sym_vcvtusi2sd] = anon_sym_vcvtusi2sd,
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
  [anon_sym_pmovmskb] = anon_sym_pmovmskb,
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
  [anon_sym_vpor] = anon_sym_vpor,
  [anon_sym_por] = anon_sym_por,
  [anon_sym_pxor] = anon_sym_pxor,
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
  [anon_sym_gs] = anon_sym_gs,
  [anon_sym_re] = anon_sym_re,
  [anon_sym_ss] = anon_sym_ss,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_prefetcht1] = anon_sym_prefetcht1,
  [anon_sym_prefetcht0] = anon_sym_prefetcht0,
  [anon_sym_mfence] = anon_sym_mfence,
  [anon_sym_femms] = anon_sym_femms,
  [anon_sym_tzcnt] = anon_sym_tzcnt,
  [anon_sym_leaveq] = anon_sym_leaveq,
  [anon_sym_retq] = anon_sym_retq,
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
  [anon_sym_vpackusdw] = anon_sym_vpackusdw,
  [anon_sym_vpalignr] = anon_sym_vpalignr,
  [anon_sym_palignr] = anon_sym_palignr,
  [anon_sym_vunpckhpd] = anon_sym_vunpckhpd,
  [anon_sym_vunpckhps] = anon_sym_vunpckhps,
  [anon_sym_vunpcklpd] = anon_sym_vunpcklpd,
  [anon_sym_vunpcklps] = anon_sym_vunpcklps,
  [anon_sym_unpckhpd] = anon_sym_unpckhpd,
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
  [anon_sym_vpslldq] = anon_sym_vpslldq,
  [anon_sym_vpslld] = anon_sym_vpslld,
  [anon_sym_vpsllq] = anon_sym_vpsllq,
  [anon_sym_vpsllw] = anon_sym_vpsllw,
  [anon_sym_vpsrldq] = anon_sym_vpsrldq,
  [anon_sym_vpsrld] = anon_sym_vpsrld,
  [anon_sym_vpsrlq] = anon_sym_vpsrlq,
  [anon_sym_vpsrlw] = anon_sym_vpsrlw,
  [anon_sym_rorx] = anon_sym_rorx,
  [anon_sym_psrld] = anon_sym_psrld,
  [anon_sym_psrlw] = anon_sym_psrlw,
  [anon_sym_psllq] = anon_sym_psllq,
  [anon_sym_psrlq] = anon_sym_psrlq,
  [anon_sym_pslldq] = anon_sym_pslldq,
  [anon_sym_psrldq] = anon_sym_psrldq,
  [anon_sym_psrad] = anon_sym_psrad,
  [anon_sym_pslld] = anon_sym_pslld,
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
  [anon_sym_vzeroall] = anon_sym_vzeroall,
  [anon_sym_vzeroupper] = anon_sym_vzeroupper,
  [anon_sym_aesdec] = anon_sym_aesdec,
  [anon_sym_aesdeclast] = anon_sym_aesdeclast,
  [anon_sym_aesenc] = anon_sym_aesenc,
  [anon_sym_aesenclast] = anon_sym_aesenclast,
  [anon_sym_vaesenc] = anon_sym_vaesenc,
  [anon_sym_vaesenclast] = anon_sym_vaesenclast,
  [anon_sym_aeskeygenassist] = anon_sym_aeskeygenassist,
  [anon_sym_vpextrw] = anon_sym_vpextrw,
  [anon_sym_vextracti128] = anon_sym_vextracti128,
  [anon_sym_vextracti32x4] = anon_sym_vextracti32x4,
  [anon_sym_pextrq] = anon_sym_pextrq,
  [anon_sym_pextrw] = anon_sym_pextrw,
  [anon_sym_pextrb] = anon_sym_pextrb,
  [anon_sym_vpinsrw] = anon_sym_vpinsrw,
  [anon_sym_vpinsrd] = anon_sym_vpinsrd,
  [anon_sym_vpinsrq] = anon_sym_vpinsrq,
  [anon_sym_vpinsrb] = anon_sym_vpinsrb,
  [anon_sym_vinserti128] = anon_sym_vinserti128,
  [anon_sym_vinserti32x4] = anon_sym_vinserti32x4,
  [anon_sym_vinserti64x4] = anon_sym_vinserti64x4,
  [anon_sym_vinsertf128] = anon_sym_vinsertf128,
  [anon_sym_pinsrw] = anon_sym_pinsrw,
  [anon_sym_pinsrb] = anon_sym_pinsrb,
  [anon_sym_pinsrd] = anon_sym_pinsrd,
  [anon_sym_vpshufb] = anon_sym_vpshufb,
  [anon_sym_vpshufd] = anon_sym_vpshufd,
  [anon_sym_vshufps] = anon_sym_vshufps,
  [anon_sym_vshufi32x4] = anon_sym_vshufi32x4,
  [anon_sym_vshufi64x2] = anon_sym_vshufi64x2,
  [anon_sym_shufps] = anon_sym_shufps,
  [anon_sym_pshuflw] = anon_sym_pshuflw,
  [anon_sym_pshufd] = anon_sym_pshufd,
  [anon_sym_pshufhw] = anon_sym_pshufhw,
  [anon_sym_shufpd] = anon_sym_shufpd,
  [anon_sym_pshufb] = anon_sym_pshufb,
  [anon_sym_vperm2f128] = anon_sym_vperm2f128,
  [anon_sym_vperm2i128] = anon_sym_vperm2i128,
  [anon_sym_vpermd] = anon_sym_vpermd,
  [anon_sym_vpermq] = anon_sym_vpermq,
  [anon_sym_vpermt2d] = anon_sym_vpermt2d,
  [anon_sym_vpermi2d] = anon_sym_vpermi2d,
  [anon_sym_vblendps] = anon_sym_vblendps,
  [anon_sym_vblendvps] = anon_sym_vblendvps,
  [anon_sym_vpblendmd] = anon_sym_vpblendmd,
  [anon_sym_vpblendd] = anon_sym_vpblendd,
  [anon_sym_pblendw] = anon_sym_pblendw,
  [anon_sym_blendvps] = anon_sym_blendvps,
  [anon_sym_vbroadcastss] = anon_sym_vbroadcastss,
  [anon_sym_vpbroadcastq] = anon_sym_vpbroadcastq,
  [anon_sym_vpbroadcastd] = anon_sym_vpbroadcastd,
  [anon_sym_vbroadcasti128] = anon_sym_vbroadcasti128,
  [anon_sym_vbroadcasti32x4] = anon_sym_vbroadcasti32x4,
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
  [sym_DataTransferOpcode] = sym_DataTransferOpcode,
  [sym_IOOpcode] = sym_IOOpcode,
  [sym_LogicalOpcode] = sym_LogicalOpcode,
  [sym_MiscellaneousOpcode] = sym_MiscellaneousOpcode,
  [sym_OperatingSystemSupportOpcode] = sym_OperatingSystemSupportOpcode,
  [sym_PackUnpackOpcode] = sym_PackUnpackOpcode,
  [sym_ShiftAndRotateOpcode] = sym_ShiftAndRotateOpcode,
  [sym_StackOpcode] = sym_StackOpcode,
  [sym_StringOpcode] = sym_StringOpcode,
  [sym_AccessRegisterOpcode] = sym_AccessRegisterOpcode,
  [sym_CryptoOpcode] = sym_CryptoOpcode,
  [sym_ExtractOpcode] = sym_ExtractOpcode,
  [sym_InsertOpcode] = sym_InsertOpcode,
  [sym_ShuffleOpcode] = sym_ShuffleOpcode,
  [sym_PermuteOpcode] = sym_PermuteOpcode,
  [sym_BlendOpcode] = sym_BlendOpcode,
  [sym_BroadcastOpcode] = sym_BroadcastOpcode,
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
  [anon_sym_adcx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vmulsd] = {
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
  [anon_sym_vpcmpgtd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vdivsd] = {
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
  [anon_sym_vucomisd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vucomiss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ucomisd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ucomiss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maxsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minsd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maxss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vsubsd] = {
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
  [anon_sym_psubd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmaddwd] = {
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
  [anon_sym_psubusb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psubq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paddq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmuludq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pmaddubsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_paddd] = {
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
  [anon_sym_pcmpeqb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpcmpltud] = {
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
  [anon_sym_vcvtusi2sd] = {
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
  [anon_sym_pmovmskb] = {
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
  [anon_sym_vpor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_por] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pxor] = {
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
  [anon_sym_lock] = {
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
  [anon_sym_mfence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_femms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tzcnt] = {
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
  [anon_sym_vpackusdw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpalignr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_palignr] = {
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
  [anon_sym_unpckhpd] = {
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
  [anon_sym_rorx] = {
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
  [anon_sym_psrlq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pslldq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psrldq] = {
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
  [anon_sym_vzeroall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vzeroupper] = {
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
  [anon_sym_vpextrw] = {
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
  [anon_sym_pextrq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pextrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pextrb] = {
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
  [anon_sym_vinsertf128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinsrw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinsrb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinsrd] = {
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
  [anon_sym_vshufps] = {
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
  [anon_sym_shufps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshuflw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshufd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshufhw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shufpd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pshufb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vperm2f128] = {
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
  [anon_sym_vblendps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vblendvps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpblendmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vpblendd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pblendw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blendvps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vbroadcastss] = {
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
  [sym_OperatingSystemSupportOpcode] = {
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
  [sym_CryptoOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ExtractOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_InsertOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_ShuffleOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_PermuteOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_BlendOpcode] = {
    .visible = true,
    .named = true,
  },
  [sym_BroadcastOpcode] = {
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
  [15] = 14,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 25,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 28,
  [39] = 31,
  [40] = 40,
  [41] = 41,
  [42] = 32,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 19,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 51,
  [56] = 56,
  [57] = 52,
  [58] = 56,
  [59] = 53,
  [60] = 54,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 67,
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
  [99] = 85,
  [100] = 100,
  [101] = 101,
  [102] = 72,
  [103] = 103,
  [104] = 73,
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
  [122] = 72,
  [123] = 119,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 117,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 121,
  [133] = 113,
  [134] = 120,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 110,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 79,
  [147] = 81,
  [148] = 75,
  [149] = 145,
  [150] = 74,
  [151] = 144,
  [152] = 77,
  [153] = 80,
  [154] = 78,
  [155] = 155,
  [156] = 156,
  [157] = 94,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 165,
  [170] = 160,
  [171] = 168,
  [172] = 166,
  [173] = 167,
  [174] = 163,
  [175] = 83,
  [176] = 101,
  [177] = 84,
  [178] = 86,
  [179] = 93,
  [180] = 89,
  [181] = 98,
  [182] = 100,
  [183] = 103,
  [184] = 96,
  [185] = 78,
  [186] = 167,
  [187] = 82,
  [188] = 87,
  [189] = 97,
  [190] = 166,
  [191] = 92,
  [192] = 95,
  [193] = 88,
  [194] = 194,
  [195] = 195,
  [196] = 86,
  [197] = 84,
  [198] = 135,
  [199] = 199,
  [200] = 131,
  [201] = 201,
  [202] = 195,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 141,
  [211] = 211,
  [212] = 112,
  [213] = 115,
  [214] = 211,
  [215] = 101,
  [216] = 130,
  [217] = 83,
  [218] = 129,
  [219] = 128,
  [220] = 108,
  [221] = 107,
  [222] = 106,
  [223] = 137,
  [224] = 138,
  [225] = 126,
  [226] = 111,
  [227] = 109,
  [228] = 105,
  [229] = 139,
  [230] = 136,
  [231] = 194,
  [232] = 232,
  [233] = 93,
  [234] = 89,
  [235] = 114,
  [236] = 98,
  [237] = 100,
  [238] = 238,
  [239] = 232,
  [240] = 103,
  [241] = 96,
  [242] = 232,
  [243] = 243,
  [244] = 80,
  [245] = 199,
  [246] = 205,
  [247] = 238,
  [248] = 204,
  [249] = 249,
  [250] = 250,
  [251] = 249,
  [252] = 206,
  [253] = 211,
  [254] = 140,
  [255] = 194,
  [256] = 243,
  [257] = 203,
  [258] = 250,
  [259] = 207,
  [260] = 260,
  [261] = 260,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 264,
  [277] = 277,
  [278] = 269,
  [279] = 265,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 266,
  [287] = 273,
  [288] = 288,
  [289] = 283,
  [290] = 277,
  [291] = 285,
  [292] = 292,
  [293] = 293,
  [294] = 292,
  [295] = 263,
  [296] = 271,
  [297] = 267,
  [298] = 270,
  [299] = 275,
  [300] = 300,
  [301] = 293,
  [302] = 272,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 274,
  [307] = 282,
  [308] = 288,
  [309] = 281,
  [310] = 268,
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
      if (aux_sym_otherFnOperands_token1_character_set_3(lookahead)) ADVANCE(1202);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(691);
      if (lookahead == ',') ADVANCE(689);
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
          lookahead == '}') ADVANCE(1086);
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
      if (lookahead == '0') ADVANCE(939);
      if (lookahead == '1') ADVANCE(938);
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
      if (lookahead == '1') ADVANCE(930);
      if (lookahead == '2') ADVANCE(931);
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
      if (lookahead == '2') ADVANCE(926);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(929);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(1063);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'q') ADVANCE(1064);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(879);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(877);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(1054);
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
      if (lookahead == '4') ADVANCE(933);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(928);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(880);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(876);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(1053);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(1044);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(1045);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(1035);
      END_STATE();
    case 59:
      if (lookahead == '4') ADVANCE(1077);
      END_STATE();
    case 60:
      if (lookahead == '4') ADVANCE(664);
      END_STATE();
    case 61:
      if (lookahead == '4') ADVANCE(660);
      END_STATE();
    case 62:
      if (lookahead == '6') ADVANCE(927);
      END_STATE();
    case 63:
      if (lookahead == '6') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == '8') ADVANCE(1061);
      END_STATE();
    case 65:
      if (lookahead == '8') ADVANCE(1062);
      END_STATE();
    case 66:
      if (lookahead == '8') ADVANCE(1046);
      END_STATE();
    case 67:
      if (lookahead == '8') ADVANCE(1043);
      END_STATE();
    case 68:
      if (lookahead == '8') ADVANCE(1034);
      END_STATE();
    case 69:
      if (lookahead == '8') ADVANCE(1076);
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
      if (lookahead == 'B') ADVANCE(1016);
      if (lookahead == 'R') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(1019);
      if (lookahead == 'X') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(1020);
      if (lookahead == 'X') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(1018);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(1015);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(1014);
      if (lookahead == 'X') ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(1017);
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
      if (lookahead == 's') ADVANCE(936);
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(921);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(973);
      if (lookahead == 'r') ADVANCE(978);
      if (lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'b') ADVANCE(794);
      if (lookahead == 'e') ADVANCE(795);
      if (lookahead == 'g') ADVANCE(802);
      if (lookahead == 'l') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(803);
      if (lookahead == 'p') ADVANCE(805);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == 'b') ADVANCE(825);
      if (lookahead == 'e') ADVANCE(823);
      if (lookahead == 'g') ADVANCE(821);
      if (lookahead == 'l') ADVANCE(816);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(818);
      if (lookahead == 'p') ADVANCE(822);
      if (lookahead == 's') ADVANCE(828);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(864);
      if (lookahead == 'u') ADVANCE(867);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == 'u') ADVANCE(875);
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
      if (lookahead == 'd') ADVANCE(883);
      if (lookahead == 'q') ADVANCE(881);
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
      if (lookahead == 'b') ADVANCE(886);
      if (lookahead == 'l') ADVANCE(887);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(1008);
      if (lookahead == 'd') ADVANCE(861);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead == 's') ADVANCE(859);
      if (lookahead == 'w') ADVANCE(358);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(360);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(888);
      if (lookahead == 'l') ADVANCE(889);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(777);
      if (lookahead == 'd') ADVANCE(772);
      if (lookahead == 'q') ADVANCE(778);
      if (lookahead == 'u') ADVANCE(537);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(1038);
      if (lookahead == 'q') ADVANCE(1036);
      if (lookahead == 'w') ADVANCE(1037);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(1048);
      if (lookahead == 'd') ADVANCE(1049);
      if (lookahead == 'w') ADVANCE(1047);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(1060);
      if (lookahead == 'd') ADVANCE(1057);
      if (lookahead == 'h') ADVANCE(640);
      if (lookahead == 'l') ADVANCE(641);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(749);
      if (lookahead == 'd') ADVANCE(748);
      if (lookahead == 'q') ADVANCE(750);
      if (lookahead == 'w') ADVANCE(751);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(785);
      if (lookahead == 'd') ADVANCE(784);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(776);
      if (lookahead == 'w') ADVANCE(775);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(1042);
      if (lookahead == 'd') ADVANCE(1040);
      if (lookahead == 'q') ADVANCE(1041);
      if (lookahead == 'w') ADVANCE(1039);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(1050);
      if (lookahead == 'd') ADVANCE(1051);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(945);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(885);
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
      if (lookahead == 'c') ADVANCE(1026);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(1028);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(1030);
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
      if (lookahead == 'd') ADVANCE(903);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(813);
      if (lookahead == 'q') ADVANCE(814);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(830);
      if (lookahead == 'l') ADVANCE(829);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(910);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(760);
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(909);
      if (lookahead == 's') ADVANCE(912);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(920);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(763);
      if (lookahead == 's') ADVANCE(765);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(764);
      if (lookahead == 's') ADVANCE(766);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == 's') ADVANCE(728);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead == 'q') ADVANCE(779);
      if (lookahead == 'w') ADVANCE(774);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(1003);
      if (lookahead == 'q') ADVANCE(998);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(1002);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'q') ADVANCE(999);
      if (lookahead == 'w') ADVANCE(997);
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
      if (lookahead == 'd') ADVANCE(913);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(899);
      if (lookahead == 's') ADVANCE(898);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(705);
      if (lookahead == 's') ADVANCE(704);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(866);
      if (lookahead == 's') ADVANCE(857);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(1059);
      if (lookahead == 's') ADVANCE(1055);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(753);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(884);
      if (lookahead == 's') ADVANCE(874);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(747);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(983);
      if (lookahead == 'q') ADVANCE(984);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(988);
      if (lookahead == 'q') ADVANCE(989);
      if (lookahead == 'w') ADVANCE(990);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(992);
      if (lookahead == 'q') ADVANCE(993);
      if (lookahead == 'w') ADVANCE(994);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(770);
      if (lookahead == 'q') ADVANCE(769);
      if (lookahead == 'u') ADVANCE(551);
      if (lookahead == 'w') ADVANCE(771);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(767);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(783);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(773);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(761);
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(873);
      if (lookahead == 's') ADVANCE(872);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(835);
      if (lookahead == 's') ADVANCE(836);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(967);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1070);
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(752);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(1066);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(1065);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(755);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(758);
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(948);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(951);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(1069);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(786);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(963);
      if (lookahead == 's') ADVANCE(964);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(965);
      if (lookahead == 's') ADVANCE(966);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(841);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(959);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(952);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(1075);
      if (lookahead == 'q') ADVANCE(1074);
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
      if (lookahead == 'e') ADVANCE(935);
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
      if (lookahead == 'e') ADVANCE(793);
      if (lookahead == 'p') ADVANCE(804);
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == 's') ADVANCE(820);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(613);
      if (lookahead == 's') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(613);
      if (lookahead == 's') ADVANCE(1022);
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
      if (lookahead == 'f') ADVANCE(787);
      if (lookahead == 'r') ADVANCE(788);
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
      if (lookahead == 'g') ADVANCE(868);
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
      if (lookahead == 'h') ADVANCE(1004);
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
      if (lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(834);
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
      if (lookahead == 'k') ADVANCE(937);
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
      if (lookahead == 't') ADVANCE(790);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 's') ADVANCE(288);
      if (lookahead == 't') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(725);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(968);
      if (lookahead == 'r') ADVANCE(969);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(733);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(869);
      END_STATE();
    case 356:
      if (lookahead == 'l') ADVANCE(871);
      END_STATE();
    case 357:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 358:
      if (lookahead == 'l') ADVANCE(851);
      if (lookahead == 'q') ADVANCE(852);
      END_STATE();
    case 359:
      if (lookahead == 'l') ADVANCE(855);
      if (lookahead == 'q') ADVANCE(854);
      if (lookahead == 'w') ADVANCE(853);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(856);
      END_STATE();
    case 361:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 362:
      if (lookahead == 'l') ADVANCE(1024);
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
      if (lookahead == 'o') ADVANCE(831);
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
      if (lookahead == 'p') ADVANCE(923);
      if (lookahead == 't') ADVANCE(914);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(1006);
      if (lookahead == 'r') ADVANCE(918);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 435:
      if (lookahead == 'p') ADVANCE(811);
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
      if (lookahead == 'q') ADVANCE(944);
      END_STATE();
    case 466:
      if (lookahead == 'q') ADVANCE(1171);
      END_STATE();
    case 467:
      if (lookahead == 'q') ADVANCE(943);
      END_STATE();
    case 468:
      if (lookahead == 'q') ADVANCE(1007);
      END_STATE();
    case 469:
      if (lookahead == 'q') ADVANCE(127);
      END_STATE();
    case 470:
      if (lookahead == 'q') ADVANCE(780);
      END_STATE();
    case 471:
      if (lookahead == 'q') ADVANCE(757);
      END_STATE();
    case 472:
      if (lookahead == 'q') ADVANCE(947);
      END_STATE();
    case 473:
      if (lookahead == 'q') ADVANCE(950);
      END_STATE();
    case 474:
      if (lookahead == 'q') ADVANCE(955);
      END_STATE();
    case 475:
      if (lookahead == 'q') ADVANCE(954);
      END_STATE();
    case 476:
      if (lookahead == 'q') ADVANCE(957);
      END_STATE();
    case 477:
      if (lookahead == 'q') ADVANCE(953);
      END_STATE();
    case 478:
      if (lookahead == 'q') ADVANCE(956);
      END_STATE();
    case 479:
      if (lookahead == 'q') ADVANCE(958);
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
      if (lookahead == 'r') ADVANCE(890);
      if (lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 499:
      if (lookahead == 'r') ADVANCE(970);
      END_STATE();
    case 500:
      if (lookahead == 'r') ADVANCE(895);
      END_STATE();
    case 501:
      if (lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 502:
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 503:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 504:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(902);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(962);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(961);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(1025);
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
      if (lookahead == 's') ADVANCE(934);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 521:
      if (lookahead == 's') ADVANCE(941);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(847);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(863);
      END_STATE();
    case 524:
      if (lookahead == 's') ADVANCE(860);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(900);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(858);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(882);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(1052);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(1072);
      END_STATE();
    case 530:
      if (lookahead == 's') ADVANCE(839);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(1067);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(1068);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(1073);
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
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(807);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(942);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(922);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(1027);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(1029);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(1031);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(1032);
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
      if (lookahead == 'v') ADVANCE(842);
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
      if (lookahead == 'v') ADVANCE(1021);
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
      if (lookahead == 'w') ADVANCE(812);
      END_STATE();
    case 637:
      if (lookahead == 'w') ADVANCE(1023);
      END_STATE();
    case 638:
      if (lookahead == 'w') ADVANCE(810);
      END_STATE();
    case 639:
      if (lookahead == 'w') ADVANCE(1071);
      END_STATE();
    case 640:
      if (lookahead == 'w') ADVANCE(1058);
      END_STATE();
    case 641:
      if (lookahead == 'w') ADVANCE(1056);
      END_STATE();
    case 642:
      if (lookahead == 'w') ADVANCE(1033);
      END_STATE();
    case 643:
      if (lookahead == 'w') ADVANCE(756);
      END_STATE();
    case 644:
      if (lookahead == 'w') ADVANCE(768);
      END_STATE();
    case 645:
      if (lookahead == 'w') ADVANCE(781);
      END_STATE();
    case 646:
      if (lookahead == 'w') ADVANCE(946);
      END_STATE();
    case 647:
      if (lookahead == 'w') ADVANCE(949);
      END_STATE();
    case 648:
      if (lookahead == 'w') ADVANCE(960);
      END_STATE();
    case 649:
      if (lookahead == 'w') ADVANCE(754);
      END_STATE();
    case 650:
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 651:
      if (lookahead == 'x') ADVANCE(746);
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
      if (lookahead == 'z') ADVANCE(1011);
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
      if (lookahead == 'x') ADVANCE(745);
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
      ACCEPT_TOKEN(anon_sym_adcx);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_adox);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_vmulsd);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_vpaddd);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_vpaddb);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_vpaddq);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_vpaddw);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_vpcmpgtd);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_vdivsd);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_vpmaddubsw);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_vpmaddwd);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_vpmullw);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_vpmuludq);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_vucomisd);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_vucomiss);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_addsd);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_ucomisd);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_ucomiss);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_maxsd);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_minsd);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_maxss);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_minss);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_vsubsd);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_vpsubusw);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_vpsubq);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_vpsubd);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_vpsubw);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_psubd);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_pmaddwd);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_paddw);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_psubusw);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_psubusb);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_psubb);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_psubq);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_paddq);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_pmuludq);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_pmaddubsw);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_paddd);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_pcmpgtd);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_pcmpeqd);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_pcmpeqb);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_vpcmpltud);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_bsf);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_bsr);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_bts);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_bt);
      if (lookahead == 'l') ADVANCE(792);
      if (lookahead == 'r') ADVANCE(791);
      if (lookahead == 's') ADVANCE(789);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_btr);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_btl);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_setne);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_setb);
      if (lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_sete);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_setbe);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_seta);
      if (lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_setge);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_setae);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_setl);
      if (lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_setle);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_setg);
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_seto);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_setnp);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_setp);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_setns);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == 'b') ADVANCE(808);
      if (lookahead == 'l') ADVANCE(809);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_testb);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_testl);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_knotw);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_bswap);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_cbtw);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_cltd);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_cltq);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_cmovbe);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_cmovl);
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_cmovae);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_cmovo);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_cmovne);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_cmovns);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_cmovg);
      if (lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_cmovp);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_cmove);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_cmovge);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_cmovb);
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_cmova);
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_cmovle);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_cmovs);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_cwtl);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_cwtd);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_cqto);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_cvttsd2si);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_cvtss2sd);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_cvttss2si);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_cvtsi2sd);
      if (lookahead == 'l') ADVANCE(838);
      if (lookahead == 'q') ADVANCE(837);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_cvtsi2ss);
      if (lookahead == 'l') ADVANCE(840);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdq);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdl);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_cvtsd2ss);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_cvtsi2ssl);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_vcvtusi2sd);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(846);
      if (lookahead == 'd') ADVANCE(862);
      if (lookahead == 'h') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(844);
      if (lookahead == 'q') ADVANCE(845);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == 'w') ADVANCE(843);
      if (lookahead == 'z') ADVANCE(119);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_movw);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_movl);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_movq);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_movb);
      if (lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_movabs);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_movsbw);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_movsbq);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_movsbl);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_movswl);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_movswq);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_movzbw);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_movzbq);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_movzbl);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_movzwl);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_movaps);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_movhlps);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_movss);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_movups);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_movsd);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_movd);
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_movhps);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_movdqa);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_movbe);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_movapd);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_movdqu);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_xchg);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_fildl);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_fldt);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_fstpl);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_vmovaps);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_vmovapd);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_vmovss);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_vmovdqu);
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_vmovdqu64);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_vmovdqu32);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_vmovdqa);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_vmovdqa32);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_vmovdqa64);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_vmovq);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_vmovups);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_vmovd);
      if (lookahead == 'q') ADVANCE(90);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_vmovsd);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_pmovmskb);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_insb);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_insl);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_outsb);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_outsl);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'b') ADVANCE(893);
      if (lookahead == 'l') ADVANCE(892);
      if (lookahead == 'q') ADVANCE(891);
      if (lookahead == 'w') ADVANCE(894);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_orq);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_orl);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_orb);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_orw);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == 'w') ADVANCE(897);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_xorl);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_xorw);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_xorps);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_xorpd);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_vxorps);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_vpxord);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_vpxor);
      if (lookahead == 'd') ADVANCE(901);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == 'b') ADVANCE(907);
      if (lookahead == 'l') ADVANCE(905);
      if (lookahead == 'n') ADVANCE(908);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 'q') ADVANCE(904);
      if (lookahead == 'w') ADVANCE(906);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_andq);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_andl);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_andw);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_andb);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_andn);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_andpd);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_pand);
      if (lookahead == 'n') ADVANCE(911);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_pandn);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_andps);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_vpand);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'l') ADVANCE(915);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(916);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_notl);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_notw);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_vpor);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_por);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_pxor);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_cpuid);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_lea);
      if (lookahead == 'v') ADVANCE(272);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_popcnt);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead == 'l') ADVANCE(924);
      if (lookahead == 'w') ADVANCE(925);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_nopl);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_nopw);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_ud2);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_data16);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_sha1rnds4);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_addr32);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_sha1msg1);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_sha1msg2);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_sha1nexte);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_endbr64);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_re);
      if (lookahead == 'p') ADVANCE(1009);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == 'x') ADVANCE(1012);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_prefetcht1);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_prefetcht0);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_mfence);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_femms);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_tzcnt);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_leaveq);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_retq);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_packuswb);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_punpckhbw);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_punpckhdq);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_punpckhwd);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_punpcklbw);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_punpckldq);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_punpcklwd);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_vpunpcklwd);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_vpunpckldq);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_punpcklqdq);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_punpckhqdq);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_vpunpckhqdq);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_vpunpckhdq);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_vpunpcklqdq);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_vpunpckhwd);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_vpackusdw);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_vpalignr);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_palignr);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_vunpckhpd);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_vunpckhps);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_vunpcklpd);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_vunpcklps);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_unpckhpd);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_rol);
      if (lookahead == 'l') ADVANCE(986);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_ror);
      if (lookahead == 'l') ADVANCE(985);
      if (lookahead == 'x') ADVANCE(995);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_sar);
      if (lookahead == 'l') ADVANCE(971);
      if (lookahead == 'x') ADVANCE(972);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_sarl);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_sarx);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == 'd') ADVANCE(975);
      if (lookahead == 'l') ADVANCE(974);
      if (lookahead == 'q') ADVANCE(977);
      if (lookahead == 'x') ADVANCE(976);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_shll);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_shld);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_shlx);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_shlq);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_shr);
      if (lookahead == 'd') ADVANCE(980);
      if (lookahead == 'l') ADVANCE(981);
      if (lookahead == 'q') ADVANCE(979);
      if (lookahead == 'x') ADVANCE(982);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_shrq);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_shrd);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_shrl);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_shrx);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_vprord);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_vprorq);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_rorl);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_roll);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_vpslldq);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_vpslld);
      if (lookahead == 'q') ADVANCE(987);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_vpsllq);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_vpsllw);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_vpsrldq);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_vpsrld);
      if (lookahead == 'q') ADVANCE(991);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_vpsrlq);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_vpsrlw);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_rorx);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_psrld);
      if (lookahead == 'q') ADVANCE(1001);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_psrlw);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_psllq);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_psrlq);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_pslldq);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_psrldq);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_psrad);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_pslld);
      if (lookahead == 'q') ADVANCE(1000);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'q') ADVANCE(1005);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_pushq);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_movslq);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_movsb);
      if (lookahead == 'l') ADVANCE(850);
      if (lookahead == 'q') ADVANCE(849);
      if (lookahead == 'w') ADVANCE(848);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_rep);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == 'z') ADVANCE(1010);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_repz);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_repnz);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_rex);
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_rex_DOTWB);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRB);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_rex_DOTRXB);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_rex_DOTB);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRXB);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_rex_DOTXB);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_rex_DOTW);
      if (lookahead == 'B') ADVANCE(1013);
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_rex_DOTRB);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_xgetbv);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_fs);
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_kmovw);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_vzeroall);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_vzeroupper);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_aesdec);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_aesdeclast);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_aesenc);
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_aesenclast);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_vaesenc);
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_vaesenclast);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_aeskeygenassist);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_vpextrw);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_vextracti128);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_vextracti32x4);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_pextrq);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_pextrw);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_pextrb);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_vpinsrw);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_vpinsrd);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_vpinsrq);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_vpinsrb);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_vinserti128);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_vinserti32x4);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_vinserti64x4);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_vinsertf128);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_pinsrw);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_pinsrb);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_pinsrd);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_vpshufb);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_vpshufd);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_vshufps);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_vshufi32x4);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_vshufi64x2);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_shufps);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_pshuflw);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_pshufd);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_pshufhw);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_shufpd);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_pshufb);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_vperm2f128);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_vperm2i128);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_vpermd);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_vpermq);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_vpermt2d);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_vpermi2d);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_vblendps);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_vblendvps);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(anon_sym_vpblendmd);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_vpblendd);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_pblendw);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_blendvps);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_vbroadcastss);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_vpbroadcastq);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_vpbroadcastd);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_vbroadcasti128);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_vbroadcasti32x4);
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
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 673},
  [9] = {.lex_state = 673},
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
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
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
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 673},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 673},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 673},
  [159] = {.lex_state = 70},
  [160] = {.lex_state = 670},
  [161] = {.lex_state = 670},
  [162] = {.lex_state = 70},
  [163] = {.lex_state = 73},
  [164] = {.lex_state = 73},
  [165] = {.lex_state = 670},
  [166] = {.lex_state = 670},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 670},
  [169] = {.lex_state = 670},
  [170] = {.lex_state = 670},
  [171] = {.lex_state = 670},
  [172] = {.lex_state = 670},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 73},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 670},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 670},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 670},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 73},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 670},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 7},
  [214] = {.lex_state = 670},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 671},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 670},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 670},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 671},
  [248] = {.lex_state = 670},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 10},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 670},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 670},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 73},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 10},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 10},
  [280] = {.lex_state = 673},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 10},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 10},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 10},
  [290] = {.lex_state = 10},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 10},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 673},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 673},
  [304] = {.lex_state = 673},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
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
    [sym_prog] = STATE(305),
    [sym__address] = STATE(201),
    [sym_comment] = STATE(303),
    [sym__machine_code] = STATE(4),
    [sym__line] = STATE(3),
    [sym_instruction] = STATE(155),
    [sym_data] = STATE(158),
    [sym_opcode] = STATE(13),
    [sym_BinaryArithmeticOpcode] = STATE(30),
    [sym_BitAndByteOpcode] = STATE(30),
    [sym_DataTransferOpcode] = STATE(30),
    [sym_IOOpcode] = STATE(30),
    [sym_LogicalOpcode] = STATE(30),
    [sym_MiscellaneousOpcode] = STATE(30),
    [sym_OperatingSystemSupportOpcode] = STATE(30),
    [sym_PackUnpackOpcode] = STATE(30),
    [sym_ShiftAndRotateOpcode] = STATE(30),
    [sym_StackOpcode] = STATE(30),
    [sym_StringOpcode] = STATE(30),
    [sym_AccessRegisterOpcode] = STATE(30),
    [sym_CryptoOpcode] = STATE(30),
    [sym_ExtractOpcode] = STATE(30),
    [sym_InsertOpcode] = STATE(30),
    [sym_ShuffleOpcode] = STATE(30),
    [sym_PermuteOpcode] = STATE(30),
    [sym_BlendOpcode] = STATE(30),
    [sym_BroadcastOpcode] = STATE(30),
    [sym_control] = STATE(158),
    [sym_controlOpcode] = STATE(70),
    [aux_sym_prog_repeat1] = STATE(3),
    [aux_sym__address_repeat1] = STATE(159),
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
    [anon_sym_adcx] = ACTIONS(11),
    [anon_sym_adox] = ACTIONS(11),
    [anon_sym_vmulsd] = ACTIONS(11),
    [anon_sym_vpaddd] = ACTIONS(11),
    [anon_sym_vpaddb] = ACTIONS(11),
    [anon_sym_vpaddq] = ACTIONS(11),
    [anon_sym_vpaddw] = ACTIONS(11),
    [anon_sym_vpcmpgtd] = ACTIONS(11),
    [anon_sym_vdivsd] = ACTIONS(11),
    [anon_sym_vpmaddubsw] = ACTIONS(11),
    [anon_sym_vpmaddwd] = ACTIONS(11),
    [anon_sym_vpmullw] = ACTIONS(11),
    [anon_sym_vpmuludq] = ACTIONS(11),
    [anon_sym_vucomisd] = ACTIONS(11),
    [anon_sym_vucomiss] = ACTIONS(11),
    [anon_sym_addsd] = ACTIONS(11),
    [anon_sym_ucomisd] = ACTIONS(11),
    [anon_sym_ucomiss] = ACTIONS(11),
    [anon_sym_maxsd] = ACTIONS(11),
    [anon_sym_minsd] = ACTIONS(11),
    [anon_sym_maxss] = ACTIONS(11),
    [anon_sym_minss] = ACTIONS(11),
    [anon_sym_vsubsd] = ACTIONS(11),
    [anon_sym_vpsubusw] = ACTIONS(11),
    [anon_sym_vpsubq] = ACTIONS(11),
    [anon_sym_vpsubd] = ACTIONS(11),
    [anon_sym_vpsubw] = ACTIONS(11),
    [anon_sym_psubd] = ACTIONS(11),
    [anon_sym_pmaddwd] = ACTIONS(11),
    [anon_sym_paddw] = ACTIONS(11),
    [anon_sym_psubusw] = ACTIONS(11),
    [anon_sym_psubusb] = ACTIONS(11),
    [anon_sym_psubb] = ACTIONS(11),
    [anon_sym_psubq] = ACTIONS(11),
    [anon_sym_paddq] = ACTIONS(11),
    [anon_sym_pmuludq] = ACTIONS(11),
    [anon_sym_pmaddubsw] = ACTIONS(11),
    [anon_sym_paddd] = ACTIONS(11),
    [anon_sym_pcmpgtd] = ACTIONS(11),
    [anon_sym_pcmpeqd] = ACTIONS(11),
    [anon_sym_pcmpeqb] = ACTIONS(11),
    [anon_sym_vpcmpltud] = ACTIONS(11),
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
    [anon_sym_bswap] = ACTIONS(15),
    [anon_sym_cbtw] = ACTIONS(15),
    [anon_sym_cltd] = ACTIONS(15),
    [anon_sym_cltq] = ACTIONS(15),
    [anon_sym_cmovbe] = ACTIONS(15),
    [anon_sym_cmovl] = ACTIONS(15),
    [anon_sym_cmovae] = ACTIONS(15),
    [anon_sym_cmovo] = ACTIONS(15),
    [anon_sym_cmovne] = ACTIONS(15),
    [anon_sym_cmovns] = ACTIONS(15),
    [anon_sym_cmovg] = ACTIONS(15),
    [anon_sym_cmovp] = ACTIONS(15),
    [anon_sym_cmove] = ACTIONS(15),
    [anon_sym_cmovge] = ACTIONS(15),
    [anon_sym_cmovb] = ACTIONS(15),
    [anon_sym_cmova] = ACTIONS(15),
    [anon_sym_cmovle] = ACTIONS(15),
    [anon_sym_cmovs] = ACTIONS(15),
    [anon_sym_cwtl] = ACTIONS(15),
    [anon_sym_cwtd] = ACTIONS(15),
    [anon_sym_cqto] = ACTIONS(15),
    [anon_sym_cvttsd2si] = ACTIONS(15),
    [anon_sym_cvtss2sd] = ACTIONS(15),
    [anon_sym_cvttss2si] = ACTIONS(15),
    [anon_sym_cvtsi2sd] = ACTIONS(15),
    [anon_sym_cvtsi2ss] = ACTIONS(15),
    [anon_sym_cvtsi2sdq] = ACTIONS(15),
    [anon_sym_cvtsi2sdl] = ACTIONS(15),
    [anon_sym_cvtsd2ss] = ACTIONS(15),
    [anon_sym_cvtsi2ssl] = ACTIONS(15),
    [anon_sym_vcvtusi2sd] = ACTIONS(15),
    [anon_sym_mov] = ACTIONS(15),
    [anon_sym_movw] = ACTIONS(15),
    [anon_sym_movl] = ACTIONS(15),
    [anon_sym_movq] = ACTIONS(15),
    [anon_sym_movb] = ACTIONS(15),
    [anon_sym_movabs] = ACTIONS(15),
    [anon_sym_movsbw] = ACTIONS(15),
    [anon_sym_movsbq] = ACTIONS(15),
    [anon_sym_movsbl] = ACTIONS(15),
    [anon_sym_movswl] = ACTIONS(15),
    [anon_sym_movswq] = ACTIONS(15),
    [anon_sym_movzbw] = ACTIONS(15),
    [anon_sym_movzbq] = ACTIONS(15),
    [anon_sym_movzbl] = ACTIONS(15),
    [anon_sym_movzwl] = ACTIONS(15),
    [anon_sym_movaps] = ACTIONS(15),
    [anon_sym_movhlps] = ACTIONS(15),
    [anon_sym_movss] = ACTIONS(15),
    [anon_sym_movups] = ACTIONS(15),
    [anon_sym_movsd] = ACTIONS(15),
    [anon_sym_movd] = ACTIONS(15),
    [anon_sym_movhps] = ACTIONS(15),
    [anon_sym_movdqa] = ACTIONS(15),
    [anon_sym_movbe] = ACTIONS(15),
    [anon_sym_movapd] = ACTIONS(15),
    [anon_sym_movdqu] = ACTIONS(15),
    [anon_sym_xchg] = ACTIONS(15),
    [anon_sym_fildl] = ACTIONS(15),
    [anon_sym_fldt] = ACTIONS(15),
    [anon_sym_fstpl] = ACTIONS(15),
    [anon_sym_vmovaps] = ACTIONS(15),
    [anon_sym_vmovapd] = ACTIONS(15),
    [anon_sym_vmovss] = ACTIONS(15),
    [anon_sym_vmovdqu] = ACTIONS(15),
    [anon_sym_vmovdqu64] = ACTIONS(15),
    [anon_sym_vmovdqu32] = ACTIONS(15),
    [anon_sym_vmovdqa] = ACTIONS(15),
    [anon_sym_vmovdqa32] = ACTIONS(15),
    [anon_sym_vmovdqa64] = ACTIONS(15),
    [anon_sym_vmovq] = ACTIONS(15),
    [anon_sym_vmovups] = ACTIONS(15),
    [anon_sym_vmovd] = ACTIONS(15),
    [anon_sym_vmovsd] = ACTIONS(15),
    [anon_sym_pmovmskb] = ACTIONS(15),
    [anon_sym_insb] = ACTIONS(17),
    [anon_sym_insl] = ACTIONS(17),
    [anon_sym_outsb] = ACTIONS(17),
    [anon_sym_outsl] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_orq] = ACTIONS(19),
    [anon_sym_orl] = ACTIONS(19),
    [anon_sym_orb] = ACTIONS(19),
    [anon_sym_orw] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_xorl] = ACTIONS(19),
    [anon_sym_xorw] = ACTIONS(19),
    [anon_sym_xorps] = ACTIONS(19),
    [anon_sym_xorpd] = ACTIONS(19),
    [anon_sym_vxorps] = ACTIONS(19),
    [anon_sym_vpxord] = ACTIONS(19),
    [anon_sym_vpxor] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_andq] = ACTIONS(19),
    [anon_sym_andl] = ACTIONS(19),
    [anon_sym_andw] = ACTIONS(19),
    [anon_sym_andb] = ACTIONS(19),
    [anon_sym_andn] = ACTIONS(19),
    [anon_sym_andpd] = ACTIONS(19),
    [anon_sym_pand] = ACTIONS(19),
    [anon_sym_pandn] = ACTIONS(19),
    [anon_sym_andps] = ACTIONS(19),
    [anon_sym_vpand] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_notl] = ACTIONS(19),
    [anon_sym_notw] = ACTIONS(19),
    [anon_sym_vpor] = ACTIONS(19),
    [anon_sym_por] = ACTIONS(19),
    [anon_sym_pxor] = ACTIONS(19),
    [anon_sym_cpuid] = ACTIONS(21),
    [anon_sym_lea] = ACTIONS(21),
    [anon_sym_popcnt] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(21),
    [anon_sym_nopl] = ACTIONS(21),
    [anon_sym_nopw] = ACTIONS(21),
    [anon_sym_ud2] = ACTIONS(21),
    [anon_sym_data16] = ACTIONS(21),
    [anon_sym_sha1rnds4] = ACTIONS(21),
    [anon_sym_addr32] = ACTIONS(21),
    [anon_sym_sha1msg1] = ACTIONS(21),
    [anon_sym_sha1msg2] = ACTIONS(21),
    [anon_sym_sha1nexte] = ACTIONS(21),
    [anon_sym_endbr64] = ACTIONS(21),
    [anon_sym_gs] = ACTIONS(21),
    [anon_sym_re] = ACTIONS(21),
    [anon_sym_ss] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(23),
    [anon_sym_prefetcht1] = ACTIONS(23),
    [anon_sym_prefetcht0] = ACTIONS(23),
    [anon_sym_mfence] = ACTIONS(23),
    [anon_sym_femms] = ACTIONS(23),
    [anon_sym_tzcnt] = ACTIONS(23),
    [anon_sym_leaveq] = ACTIONS(23),
    [anon_sym_retq] = ACTIONS(23),
    [anon_sym_packuswb] = ACTIONS(25),
    [anon_sym_punpckhbw] = ACTIONS(25),
    [anon_sym_punpckhdq] = ACTIONS(25),
    [anon_sym_punpckhwd] = ACTIONS(25),
    [anon_sym_punpcklbw] = ACTIONS(25),
    [anon_sym_punpckldq] = ACTIONS(25),
    [anon_sym_punpcklwd] = ACTIONS(25),
    [anon_sym_vpunpcklwd] = ACTIONS(25),
    [anon_sym_vpunpckldq] = ACTIONS(25),
    [anon_sym_punpcklqdq] = ACTIONS(25),
    [anon_sym_punpckhqdq] = ACTIONS(25),
    [anon_sym_vpunpckhqdq] = ACTIONS(25),
    [anon_sym_vpunpckhdq] = ACTIONS(25),
    [anon_sym_vpunpcklqdq] = ACTIONS(25),
    [anon_sym_vpunpckhwd] = ACTIONS(25),
    [anon_sym_vpackusdw] = ACTIONS(25),
    [anon_sym_vpalignr] = ACTIONS(25),
    [anon_sym_palignr] = ACTIONS(25),
    [anon_sym_vunpckhpd] = ACTIONS(25),
    [anon_sym_vunpckhps] = ACTIONS(25),
    [anon_sym_vunpcklpd] = ACTIONS(25),
    [anon_sym_vunpcklps] = ACTIONS(25),
    [anon_sym_unpckhpd] = ACTIONS(25),
    [anon_sym_rol] = ACTIONS(27),
    [anon_sym_ror] = ACTIONS(27),
    [anon_sym_sar] = ACTIONS(27),
    [anon_sym_sarl] = ACTIONS(27),
    [anon_sym_sarx] = ACTIONS(27),
    [anon_sym_shl] = ACTIONS(27),
    [anon_sym_shll] = ACTIONS(27),
    [anon_sym_shld] = ACTIONS(27),
    [anon_sym_shlx] = ACTIONS(27),
    [anon_sym_shlq] = ACTIONS(27),
    [anon_sym_shr] = ACTIONS(27),
    [anon_sym_shrq] = ACTIONS(27),
    [anon_sym_shrd] = ACTIONS(27),
    [anon_sym_shrl] = ACTIONS(27),
    [anon_sym_shrx] = ACTIONS(27),
    [anon_sym_vprord] = ACTIONS(27),
    [anon_sym_vprorq] = ACTIONS(27),
    [anon_sym_rorl] = ACTIONS(27),
    [anon_sym_roll] = ACTIONS(27),
    [anon_sym_vpslldq] = ACTIONS(27),
    [anon_sym_vpslld] = ACTIONS(27),
    [anon_sym_vpsllq] = ACTIONS(27),
    [anon_sym_vpsllw] = ACTIONS(27),
    [anon_sym_vpsrldq] = ACTIONS(27),
    [anon_sym_vpsrld] = ACTIONS(27),
    [anon_sym_vpsrlq] = ACTIONS(27),
    [anon_sym_vpsrlw] = ACTIONS(27),
    [anon_sym_rorx] = ACTIONS(27),
    [anon_sym_psrld] = ACTIONS(27),
    [anon_sym_psrlw] = ACTIONS(27),
    [anon_sym_psllq] = ACTIONS(27),
    [anon_sym_psrlq] = ACTIONS(27),
    [anon_sym_pslldq] = ACTIONS(27),
    [anon_sym_psrldq] = ACTIONS(27),
    [anon_sym_psrad] = ACTIONS(27),
    [anon_sym_pslld] = ACTIONS(27),
    [anon_sym_push] = ACTIONS(29),
    [anon_sym_pushq] = ACTIONS(29),
    [anon_sym_pop] = ACTIONS(29),
    [anon_sym_movslq] = ACTIONS(31),
    [anon_sym_movsb] = ACTIONS(31),
    [anon_sym_rep] = ACTIONS(31),
    [anon_sym_repz] = ACTIONS(31),
    [anon_sym_repnz] = ACTIONS(31),
    [anon_sym_rex] = ACTIONS(33),
    [anon_sym_rex_DOTWB] = ACTIONS(33),
    [anon_sym_rex_DOTWRB] = ACTIONS(33),
    [anon_sym_rex_DOTRXB] = ACTIONS(33),
    [anon_sym_rex_DOTB] = ACTIONS(33),
    [anon_sym_rex_DOTWRXB] = ACTIONS(33),
    [anon_sym_rex_DOTXB] = ACTIONS(33),
    [anon_sym_rex_DOTW] = ACTIONS(33),
    [anon_sym_rex_DOTRB] = ACTIONS(33),
    [anon_sym_xgetbv] = ACTIONS(33),
    [anon_sym_fs] = ACTIONS(33),
    [anon_sym_kmovw] = ACTIONS(33),
    [anon_sym_vzeroall] = ACTIONS(33),
    [anon_sym_vzeroupper] = ACTIONS(33),
    [anon_sym_aesdec] = ACTIONS(35),
    [anon_sym_aesdeclast] = ACTIONS(35),
    [anon_sym_aesenc] = ACTIONS(35),
    [anon_sym_aesenclast] = ACTIONS(35),
    [anon_sym_vaesenc] = ACTIONS(35),
    [anon_sym_vaesenclast] = ACTIONS(35),
    [anon_sym_aeskeygenassist] = ACTIONS(35),
    [anon_sym_vpextrw] = ACTIONS(37),
    [anon_sym_vextracti128] = ACTIONS(37),
    [anon_sym_vextracti32x4] = ACTIONS(37),
    [anon_sym_pextrq] = ACTIONS(37),
    [anon_sym_pextrw] = ACTIONS(37),
    [anon_sym_pextrb] = ACTIONS(37),
    [anon_sym_vpinsrw] = ACTIONS(39),
    [anon_sym_vpinsrd] = ACTIONS(39),
    [anon_sym_vpinsrq] = ACTIONS(39),
    [anon_sym_vpinsrb] = ACTIONS(39),
    [anon_sym_vinserti128] = ACTIONS(39),
    [anon_sym_vinserti32x4] = ACTIONS(39),
    [anon_sym_vinserti64x4] = ACTIONS(39),
    [anon_sym_vinsertf128] = ACTIONS(39),
    [anon_sym_pinsrw] = ACTIONS(39),
    [anon_sym_pinsrb] = ACTIONS(39),
    [anon_sym_pinsrd] = ACTIONS(39),
    [anon_sym_vpshufb] = ACTIONS(41),
    [anon_sym_vpshufd] = ACTIONS(41),
    [anon_sym_vshufps] = ACTIONS(41),
    [anon_sym_vshufi32x4] = ACTIONS(41),
    [anon_sym_vshufi64x2] = ACTIONS(41),
    [anon_sym_shufps] = ACTIONS(41),
    [anon_sym_pshuflw] = ACTIONS(41),
    [anon_sym_pshufd] = ACTIONS(41),
    [anon_sym_pshufhw] = ACTIONS(41),
    [anon_sym_shufpd] = ACTIONS(41),
    [anon_sym_pshufb] = ACTIONS(41),
    [anon_sym_vperm2f128] = ACTIONS(43),
    [anon_sym_vperm2i128] = ACTIONS(43),
    [anon_sym_vpermd] = ACTIONS(43),
    [anon_sym_vpermq] = ACTIONS(43),
    [anon_sym_vpermt2d] = ACTIONS(43),
    [anon_sym_vpermi2d] = ACTIONS(43),
    [anon_sym_vblendps] = ACTIONS(45),
    [anon_sym_vblendvps] = ACTIONS(45),
    [anon_sym_vpblendmd] = ACTIONS(45),
    [anon_sym_vpblendd] = ACTIONS(45),
    [anon_sym_pblendw] = ACTIONS(45),
    [anon_sym_blendvps] = ACTIONS(45),
    [anon_sym_vbroadcastss] = ACTIONS(47),
    [anon_sym_vpbroadcastq] = ACTIONS(47),
    [anon_sym_vpbroadcastd] = ACTIONS(47),
    [anon_sym_vbroadcasti128] = ACTIONS(47),
    [anon_sym_vbroadcasti32x4] = ACTIONS(47),
    [anon_sym_callq] = ACTIONS(49),
    [anon_sym_ja] = ACTIONS(49),
    [anon_sym_jae] = ACTIONS(49),
    [anon_sym_jb] = ACTIONS(49),
    [anon_sym_jbe] = ACTIONS(49),
    [anon_sym_je] = ACTIONS(49),
    [anon_sym_jg] = ACTIONS(49),
    [anon_sym_jge] = ACTIONS(49),
    [anon_sym_jl] = ACTIONS(49),
    [anon_sym_jle] = ACTIONS(49),
    [anon_sym_jmp] = ACTIONS(49),
    [anon_sym_jmpq] = ACTIONS(49),
    [anon_sym_jne] = ACTIONS(49),
    [anon_sym_jno] = ACTIONS(49),
    [anon_sym_jns] = ACTIONS(49),
    [anon_sym_jo] = ACTIONS(49),
    [anon_sym_jp] = ACTIONS(49),
    [anon_sym_jrcxz] = ACTIONS(49),
    [anon_sym_js] = ACTIONS(49),
    [anon_sym_notrack] = ACTIONS(49),
  },
  [2] = {
    [sym__address] = STATE(201),
    [sym_comment] = STATE(303),
    [sym__machine_code] = STATE(4),
    [sym__line] = STATE(2),
    [sym_instruction] = STATE(155),
    [sym_data] = STATE(158),
    [sym_opcode] = STATE(13),
    [sym_BinaryArithmeticOpcode] = STATE(30),
    [sym_BitAndByteOpcode] = STATE(30),
    [sym_DataTransferOpcode] = STATE(30),
    [sym_IOOpcode] = STATE(30),
    [sym_LogicalOpcode] = STATE(30),
    [sym_MiscellaneousOpcode] = STATE(30),
    [sym_OperatingSystemSupportOpcode] = STATE(30),
    [sym_PackUnpackOpcode] = STATE(30),
    [sym_ShiftAndRotateOpcode] = STATE(30),
    [sym_StackOpcode] = STATE(30),
    [sym_StringOpcode] = STATE(30),
    [sym_AccessRegisterOpcode] = STATE(30),
    [sym_CryptoOpcode] = STATE(30),
    [sym_ExtractOpcode] = STATE(30),
    [sym_InsertOpcode] = STATE(30),
    [sym_ShuffleOpcode] = STATE(30),
    [sym_PermuteOpcode] = STATE(30),
    [sym_BlendOpcode] = STATE(30),
    [sym_BroadcastOpcode] = STATE(30),
    [sym_control] = STATE(158),
    [sym_controlOpcode] = STATE(70),
    [aux_sym_prog_repeat1] = STATE(2),
    [aux_sym__address_repeat1] = STATE(159),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym__address_token1] = ACTIONS(53),
    [aux_sym_comment_token1] = ACTIONS(56),
    [aux_sym_comment_token2] = ACTIONS(56),
    [sym__line_break] = ACTIONS(59),
    [anon_sym_adc] = ACTIONS(62),
    [anon_sym_add] = ACTIONS(62),
    [anon_sym_addq] = ACTIONS(62),
    [anon_sym_addl] = ACTIONS(62),
    [anon_sym_addss] = ACTIONS(62),
    [anon_sym_addw] = ACTIONS(62),
    [anon_sym_addb] = ACTIONS(62),
    [anon_sym_cmp] = ACTIONS(62),
    [anon_sym_cmpb] = ACTIONS(62),
    [anon_sym_cmpw] = ACTIONS(62),
    [anon_sym_cmpl] = ACTIONS(62),
    [anon_sym_cmpq] = ACTIONS(62),
    [anon_sym_comiss] = ACTIONS(62),
    [anon_sym_comisd] = ACTIONS(62),
    [anon_sym_inc] = ACTIONS(62),
    [anon_sym_incl] = ACTIONS(62),
    [anon_sym_dec] = ACTIONS(62),
    [anon_sym_div] = ACTIONS(62),
    [anon_sym_divq] = ACTIONS(62),
    [anon_sym_divl] = ACTIONS(62),
    [anon_sym_divss] = ACTIONS(62),
    [anon_sym_divsd] = ACTIONS(62),
    [anon_sym_idiv] = ACTIONS(62),
    [anon_sym_idivl] = ACTIONS(62),
    [anon_sym_sub] = ACTIONS(62),
    [anon_sym_subq] = ACTIONS(62),
    [anon_sym_subl] = ACTIONS(62),
    [anon_sym_subss] = ACTIONS(62),
    [anon_sym_subw] = ACTIONS(62),
    [anon_sym_subb] = ACTIONS(62),
    [anon_sym_subsd] = ACTIONS(62),
    [anon_sym_subpd] = ACTIONS(62),
    [anon_sym_sbb] = ACTIONS(62),
    [anon_sym_mul] = ACTIONS(62),
    [anon_sym_mulq] = ACTIONS(62),
    [anon_sym_mull] = ACTIONS(62),
    [anon_sym_mulss] = ACTIONS(62),
    [anon_sym_mulw] = ACTIONS(62),
    [anon_sym_mulb] = ACTIONS(62),
    [anon_sym_mulsd] = ACTIONS(62),
    [anon_sym_mulx] = ACTIONS(62),
    [anon_sym_imul] = ACTIONS(62),
    [anon_sym_neg] = ACTIONS(62),
    [anon_sym_negl] = ACTIONS(62),
    [anon_sym_negq] = ACTIONS(62),
    [anon_sym_fmulp] = ACTIONS(62),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(62),
    [anon_sym_pclmullqlqdq] = ACTIONS(62),
    [anon_sym_pclmullqhqdq] = ACTIONS(62),
    [anon_sym_vpclmullqhqdq] = ACTIONS(62),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(62),
    [anon_sym_pclmulhqhqdq] = ACTIONS(62),
    [anon_sym_vpclmullqlqdq] = ACTIONS(62),
    [anon_sym_adcx] = ACTIONS(62),
    [anon_sym_adox] = ACTIONS(62),
    [anon_sym_vmulsd] = ACTIONS(62),
    [anon_sym_vpaddd] = ACTIONS(62),
    [anon_sym_vpaddb] = ACTIONS(62),
    [anon_sym_vpaddq] = ACTIONS(62),
    [anon_sym_vpaddw] = ACTIONS(62),
    [anon_sym_vpcmpgtd] = ACTIONS(62),
    [anon_sym_vdivsd] = ACTIONS(62),
    [anon_sym_vpmaddubsw] = ACTIONS(62),
    [anon_sym_vpmaddwd] = ACTIONS(62),
    [anon_sym_vpmullw] = ACTIONS(62),
    [anon_sym_vpmuludq] = ACTIONS(62),
    [anon_sym_vucomisd] = ACTIONS(62),
    [anon_sym_vucomiss] = ACTIONS(62),
    [anon_sym_addsd] = ACTIONS(62),
    [anon_sym_ucomisd] = ACTIONS(62),
    [anon_sym_ucomiss] = ACTIONS(62),
    [anon_sym_maxsd] = ACTIONS(62),
    [anon_sym_minsd] = ACTIONS(62),
    [anon_sym_maxss] = ACTIONS(62),
    [anon_sym_minss] = ACTIONS(62),
    [anon_sym_vsubsd] = ACTIONS(62),
    [anon_sym_vpsubusw] = ACTIONS(62),
    [anon_sym_vpsubq] = ACTIONS(62),
    [anon_sym_vpsubd] = ACTIONS(62),
    [anon_sym_vpsubw] = ACTIONS(62),
    [anon_sym_psubd] = ACTIONS(62),
    [anon_sym_pmaddwd] = ACTIONS(62),
    [anon_sym_paddw] = ACTIONS(62),
    [anon_sym_psubusw] = ACTIONS(62),
    [anon_sym_psubusb] = ACTIONS(62),
    [anon_sym_psubb] = ACTIONS(62),
    [anon_sym_psubq] = ACTIONS(62),
    [anon_sym_paddq] = ACTIONS(62),
    [anon_sym_pmuludq] = ACTIONS(62),
    [anon_sym_pmaddubsw] = ACTIONS(62),
    [anon_sym_paddd] = ACTIONS(62),
    [anon_sym_pcmpgtd] = ACTIONS(62),
    [anon_sym_pcmpeqd] = ACTIONS(62),
    [anon_sym_pcmpeqb] = ACTIONS(62),
    [anon_sym_vpcmpltud] = ACTIONS(62),
    [anon_sym_bsf] = ACTIONS(65),
    [anon_sym_bsr] = ACTIONS(65),
    [anon_sym_bts] = ACTIONS(65),
    [anon_sym_bt] = ACTIONS(65),
    [anon_sym_btr] = ACTIONS(65),
    [anon_sym_btl] = ACTIONS(65),
    [anon_sym_setne] = ACTIONS(65),
    [anon_sym_setb] = ACTIONS(65),
    [anon_sym_sete] = ACTIONS(65),
    [anon_sym_setbe] = ACTIONS(65),
    [anon_sym_seta] = ACTIONS(65),
    [anon_sym_setge] = ACTIONS(65),
    [anon_sym_setae] = ACTIONS(65),
    [anon_sym_setl] = ACTIONS(65),
    [anon_sym_setle] = ACTIONS(65),
    [anon_sym_setg] = ACTIONS(65),
    [anon_sym_seto] = ACTIONS(65),
    [anon_sym_setnp] = ACTIONS(65),
    [anon_sym_setp] = ACTIONS(65),
    [anon_sym_setns] = ACTIONS(65),
    [anon_sym_test] = ACTIONS(65),
    [anon_sym_testb] = ACTIONS(65),
    [anon_sym_testl] = ACTIONS(65),
    [anon_sym_knotw] = ACTIONS(65),
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
    [anon_sym_vcvtusi2sd] = ACTIONS(68),
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
    [anon_sym_vmovaps] = ACTIONS(68),
    [anon_sym_vmovapd] = ACTIONS(68),
    [anon_sym_vmovss] = ACTIONS(68),
    [anon_sym_vmovdqu] = ACTIONS(68),
    [anon_sym_vmovdqu64] = ACTIONS(68),
    [anon_sym_vmovdqu32] = ACTIONS(68),
    [anon_sym_vmovdqa] = ACTIONS(68),
    [anon_sym_vmovdqa32] = ACTIONS(68),
    [anon_sym_vmovdqa64] = ACTIONS(68),
    [anon_sym_vmovq] = ACTIONS(68),
    [anon_sym_vmovups] = ACTIONS(68),
    [anon_sym_vmovd] = ACTIONS(68),
    [anon_sym_vmovsd] = ACTIONS(68),
    [anon_sym_pmovmskb] = ACTIONS(68),
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
    [anon_sym_vpor] = ACTIONS(74),
    [anon_sym_por] = ACTIONS(74),
    [anon_sym_pxor] = ACTIONS(74),
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
    [anon_sym_gs] = ACTIONS(77),
    [anon_sym_re] = ACTIONS(77),
    [anon_sym_ss] = ACTIONS(77),
    [anon_sym_lock] = ACTIONS(80),
    [anon_sym_prefetcht1] = ACTIONS(80),
    [anon_sym_prefetcht0] = ACTIONS(80),
    [anon_sym_mfence] = ACTIONS(80),
    [anon_sym_femms] = ACTIONS(80),
    [anon_sym_tzcnt] = ACTIONS(80),
    [anon_sym_leaveq] = ACTIONS(80),
    [anon_sym_retq] = ACTIONS(80),
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
    [anon_sym_vpackusdw] = ACTIONS(83),
    [anon_sym_vpalignr] = ACTIONS(83),
    [anon_sym_palignr] = ACTIONS(83),
    [anon_sym_vunpckhpd] = ACTIONS(83),
    [anon_sym_vunpckhps] = ACTIONS(83),
    [anon_sym_vunpcklpd] = ACTIONS(83),
    [anon_sym_vunpcklps] = ACTIONS(83),
    [anon_sym_unpckhpd] = ACTIONS(83),
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
    [anon_sym_vpslldq] = ACTIONS(86),
    [anon_sym_vpslld] = ACTIONS(86),
    [anon_sym_vpsllq] = ACTIONS(86),
    [anon_sym_vpsllw] = ACTIONS(86),
    [anon_sym_vpsrldq] = ACTIONS(86),
    [anon_sym_vpsrld] = ACTIONS(86),
    [anon_sym_vpsrlq] = ACTIONS(86),
    [anon_sym_vpsrlw] = ACTIONS(86),
    [anon_sym_rorx] = ACTIONS(86),
    [anon_sym_psrld] = ACTIONS(86),
    [anon_sym_psrlw] = ACTIONS(86),
    [anon_sym_psllq] = ACTIONS(86),
    [anon_sym_psrlq] = ACTIONS(86),
    [anon_sym_pslldq] = ACTIONS(86),
    [anon_sym_psrldq] = ACTIONS(86),
    [anon_sym_psrad] = ACTIONS(86),
    [anon_sym_pslld] = ACTIONS(86),
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
    [anon_sym_vzeroall] = ACTIONS(95),
    [anon_sym_vzeroupper] = ACTIONS(95),
    [anon_sym_aesdec] = ACTIONS(98),
    [anon_sym_aesdeclast] = ACTIONS(98),
    [anon_sym_aesenc] = ACTIONS(98),
    [anon_sym_aesenclast] = ACTIONS(98),
    [anon_sym_vaesenc] = ACTIONS(98),
    [anon_sym_vaesenclast] = ACTIONS(98),
    [anon_sym_aeskeygenassist] = ACTIONS(98),
    [anon_sym_vpextrw] = ACTIONS(101),
    [anon_sym_vextracti128] = ACTIONS(101),
    [anon_sym_vextracti32x4] = ACTIONS(101),
    [anon_sym_pextrq] = ACTIONS(101),
    [anon_sym_pextrw] = ACTIONS(101),
    [anon_sym_pextrb] = ACTIONS(101),
    [anon_sym_vpinsrw] = ACTIONS(104),
    [anon_sym_vpinsrd] = ACTIONS(104),
    [anon_sym_vpinsrq] = ACTIONS(104),
    [anon_sym_vpinsrb] = ACTIONS(104),
    [anon_sym_vinserti128] = ACTIONS(104),
    [anon_sym_vinserti32x4] = ACTIONS(104),
    [anon_sym_vinserti64x4] = ACTIONS(104),
    [anon_sym_vinsertf128] = ACTIONS(104),
    [anon_sym_pinsrw] = ACTIONS(104),
    [anon_sym_pinsrb] = ACTIONS(104),
    [anon_sym_pinsrd] = ACTIONS(104),
    [anon_sym_vpshufb] = ACTIONS(107),
    [anon_sym_vpshufd] = ACTIONS(107),
    [anon_sym_vshufps] = ACTIONS(107),
    [anon_sym_vshufi32x4] = ACTIONS(107),
    [anon_sym_vshufi64x2] = ACTIONS(107),
    [anon_sym_shufps] = ACTIONS(107),
    [anon_sym_pshuflw] = ACTIONS(107),
    [anon_sym_pshufd] = ACTIONS(107),
    [anon_sym_pshufhw] = ACTIONS(107),
    [anon_sym_shufpd] = ACTIONS(107),
    [anon_sym_pshufb] = ACTIONS(107),
    [anon_sym_vperm2f128] = ACTIONS(110),
    [anon_sym_vperm2i128] = ACTIONS(110),
    [anon_sym_vpermd] = ACTIONS(110),
    [anon_sym_vpermq] = ACTIONS(110),
    [anon_sym_vpermt2d] = ACTIONS(110),
    [anon_sym_vpermi2d] = ACTIONS(110),
    [anon_sym_vblendps] = ACTIONS(113),
    [anon_sym_vblendvps] = ACTIONS(113),
    [anon_sym_vpblendmd] = ACTIONS(113),
    [anon_sym_vpblendd] = ACTIONS(113),
    [anon_sym_pblendw] = ACTIONS(113),
    [anon_sym_blendvps] = ACTIONS(113),
    [anon_sym_vbroadcastss] = ACTIONS(116),
    [anon_sym_vpbroadcastq] = ACTIONS(116),
    [anon_sym_vpbroadcastd] = ACTIONS(116),
    [anon_sym_vbroadcasti128] = ACTIONS(116),
    [anon_sym_vbroadcasti32x4] = ACTIONS(116),
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
  [3] = {
    [sym__address] = STATE(201),
    [sym_comment] = STATE(303),
    [sym__machine_code] = STATE(4),
    [sym__line] = STATE(2),
    [sym_instruction] = STATE(155),
    [sym_data] = STATE(158),
    [sym_opcode] = STATE(13),
    [sym_BinaryArithmeticOpcode] = STATE(30),
    [sym_BitAndByteOpcode] = STATE(30),
    [sym_DataTransferOpcode] = STATE(30),
    [sym_IOOpcode] = STATE(30),
    [sym_LogicalOpcode] = STATE(30),
    [sym_MiscellaneousOpcode] = STATE(30),
    [sym_OperatingSystemSupportOpcode] = STATE(30),
    [sym_PackUnpackOpcode] = STATE(30),
    [sym_ShiftAndRotateOpcode] = STATE(30),
    [sym_StackOpcode] = STATE(30),
    [sym_StringOpcode] = STATE(30),
    [sym_AccessRegisterOpcode] = STATE(30),
    [sym_CryptoOpcode] = STATE(30),
    [sym_ExtractOpcode] = STATE(30),
    [sym_InsertOpcode] = STATE(30),
    [sym_ShuffleOpcode] = STATE(30),
    [sym_PermuteOpcode] = STATE(30),
    [sym_BlendOpcode] = STATE(30),
    [sym_BroadcastOpcode] = STATE(30),
    [sym_control] = STATE(158),
    [sym_controlOpcode] = STATE(70),
    [aux_sym_prog_repeat1] = STATE(2),
    [aux_sym__address_repeat1] = STATE(159),
    [ts_builtin_sym_end] = ACTIONS(122),
    [aux_sym__address_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym__line_break] = ACTIONS(124),
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
    [anon_sym_adcx] = ACTIONS(11),
    [anon_sym_adox] = ACTIONS(11),
    [anon_sym_vmulsd] = ACTIONS(11),
    [anon_sym_vpaddd] = ACTIONS(11),
    [anon_sym_vpaddb] = ACTIONS(11),
    [anon_sym_vpaddq] = ACTIONS(11),
    [anon_sym_vpaddw] = ACTIONS(11),
    [anon_sym_vpcmpgtd] = ACTIONS(11),
    [anon_sym_vdivsd] = ACTIONS(11),
    [anon_sym_vpmaddubsw] = ACTIONS(11),
    [anon_sym_vpmaddwd] = ACTIONS(11),
    [anon_sym_vpmullw] = ACTIONS(11),
    [anon_sym_vpmuludq] = ACTIONS(11),
    [anon_sym_vucomisd] = ACTIONS(11),
    [anon_sym_vucomiss] = ACTIONS(11),
    [anon_sym_addsd] = ACTIONS(11),
    [anon_sym_ucomisd] = ACTIONS(11),
    [anon_sym_ucomiss] = ACTIONS(11),
    [anon_sym_maxsd] = ACTIONS(11),
    [anon_sym_minsd] = ACTIONS(11),
    [anon_sym_maxss] = ACTIONS(11),
    [anon_sym_minss] = ACTIONS(11),
    [anon_sym_vsubsd] = ACTIONS(11),
    [anon_sym_vpsubusw] = ACTIONS(11),
    [anon_sym_vpsubq] = ACTIONS(11),
    [anon_sym_vpsubd] = ACTIONS(11),
    [anon_sym_vpsubw] = ACTIONS(11),
    [anon_sym_psubd] = ACTIONS(11),
    [anon_sym_pmaddwd] = ACTIONS(11),
    [anon_sym_paddw] = ACTIONS(11),
    [anon_sym_psubusw] = ACTIONS(11),
    [anon_sym_psubusb] = ACTIONS(11),
    [anon_sym_psubb] = ACTIONS(11),
    [anon_sym_psubq] = ACTIONS(11),
    [anon_sym_paddq] = ACTIONS(11),
    [anon_sym_pmuludq] = ACTIONS(11),
    [anon_sym_pmaddubsw] = ACTIONS(11),
    [anon_sym_paddd] = ACTIONS(11),
    [anon_sym_pcmpgtd] = ACTIONS(11),
    [anon_sym_pcmpeqd] = ACTIONS(11),
    [anon_sym_pcmpeqb] = ACTIONS(11),
    [anon_sym_vpcmpltud] = ACTIONS(11),
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
    [anon_sym_bswap] = ACTIONS(15),
    [anon_sym_cbtw] = ACTIONS(15),
    [anon_sym_cltd] = ACTIONS(15),
    [anon_sym_cltq] = ACTIONS(15),
    [anon_sym_cmovbe] = ACTIONS(15),
    [anon_sym_cmovl] = ACTIONS(15),
    [anon_sym_cmovae] = ACTIONS(15),
    [anon_sym_cmovo] = ACTIONS(15),
    [anon_sym_cmovne] = ACTIONS(15),
    [anon_sym_cmovns] = ACTIONS(15),
    [anon_sym_cmovg] = ACTIONS(15),
    [anon_sym_cmovp] = ACTIONS(15),
    [anon_sym_cmove] = ACTIONS(15),
    [anon_sym_cmovge] = ACTIONS(15),
    [anon_sym_cmovb] = ACTIONS(15),
    [anon_sym_cmova] = ACTIONS(15),
    [anon_sym_cmovle] = ACTIONS(15),
    [anon_sym_cmovs] = ACTIONS(15),
    [anon_sym_cwtl] = ACTIONS(15),
    [anon_sym_cwtd] = ACTIONS(15),
    [anon_sym_cqto] = ACTIONS(15),
    [anon_sym_cvttsd2si] = ACTIONS(15),
    [anon_sym_cvtss2sd] = ACTIONS(15),
    [anon_sym_cvttss2si] = ACTIONS(15),
    [anon_sym_cvtsi2sd] = ACTIONS(15),
    [anon_sym_cvtsi2ss] = ACTIONS(15),
    [anon_sym_cvtsi2sdq] = ACTIONS(15),
    [anon_sym_cvtsi2sdl] = ACTIONS(15),
    [anon_sym_cvtsd2ss] = ACTIONS(15),
    [anon_sym_cvtsi2ssl] = ACTIONS(15),
    [anon_sym_vcvtusi2sd] = ACTIONS(15),
    [anon_sym_mov] = ACTIONS(15),
    [anon_sym_movw] = ACTIONS(15),
    [anon_sym_movl] = ACTIONS(15),
    [anon_sym_movq] = ACTIONS(15),
    [anon_sym_movb] = ACTIONS(15),
    [anon_sym_movabs] = ACTIONS(15),
    [anon_sym_movsbw] = ACTIONS(15),
    [anon_sym_movsbq] = ACTIONS(15),
    [anon_sym_movsbl] = ACTIONS(15),
    [anon_sym_movswl] = ACTIONS(15),
    [anon_sym_movswq] = ACTIONS(15),
    [anon_sym_movzbw] = ACTIONS(15),
    [anon_sym_movzbq] = ACTIONS(15),
    [anon_sym_movzbl] = ACTIONS(15),
    [anon_sym_movzwl] = ACTIONS(15),
    [anon_sym_movaps] = ACTIONS(15),
    [anon_sym_movhlps] = ACTIONS(15),
    [anon_sym_movss] = ACTIONS(15),
    [anon_sym_movups] = ACTIONS(15),
    [anon_sym_movsd] = ACTIONS(15),
    [anon_sym_movd] = ACTIONS(15),
    [anon_sym_movhps] = ACTIONS(15),
    [anon_sym_movdqa] = ACTIONS(15),
    [anon_sym_movbe] = ACTIONS(15),
    [anon_sym_movapd] = ACTIONS(15),
    [anon_sym_movdqu] = ACTIONS(15),
    [anon_sym_xchg] = ACTIONS(15),
    [anon_sym_fildl] = ACTIONS(15),
    [anon_sym_fldt] = ACTIONS(15),
    [anon_sym_fstpl] = ACTIONS(15),
    [anon_sym_vmovaps] = ACTIONS(15),
    [anon_sym_vmovapd] = ACTIONS(15),
    [anon_sym_vmovss] = ACTIONS(15),
    [anon_sym_vmovdqu] = ACTIONS(15),
    [anon_sym_vmovdqu64] = ACTIONS(15),
    [anon_sym_vmovdqu32] = ACTIONS(15),
    [anon_sym_vmovdqa] = ACTIONS(15),
    [anon_sym_vmovdqa32] = ACTIONS(15),
    [anon_sym_vmovdqa64] = ACTIONS(15),
    [anon_sym_vmovq] = ACTIONS(15),
    [anon_sym_vmovups] = ACTIONS(15),
    [anon_sym_vmovd] = ACTIONS(15),
    [anon_sym_vmovsd] = ACTIONS(15),
    [anon_sym_pmovmskb] = ACTIONS(15),
    [anon_sym_insb] = ACTIONS(17),
    [anon_sym_insl] = ACTIONS(17),
    [anon_sym_outsb] = ACTIONS(17),
    [anon_sym_outsl] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_orq] = ACTIONS(19),
    [anon_sym_orl] = ACTIONS(19),
    [anon_sym_orb] = ACTIONS(19),
    [anon_sym_orw] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_xorl] = ACTIONS(19),
    [anon_sym_xorw] = ACTIONS(19),
    [anon_sym_xorps] = ACTIONS(19),
    [anon_sym_xorpd] = ACTIONS(19),
    [anon_sym_vxorps] = ACTIONS(19),
    [anon_sym_vpxord] = ACTIONS(19),
    [anon_sym_vpxor] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_andq] = ACTIONS(19),
    [anon_sym_andl] = ACTIONS(19),
    [anon_sym_andw] = ACTIONS(19),
    [anon_sym_andb] = ACTIONS(19),
    [anon_sym_andn] = ACTIONS(19),
    [anon_sym_andpd] = ACTIONS(19),
    [anon_sym_pand] = ACTIONS(19),
    [anon_sym_pandn] = ACTIONS(19),
    [anon_sym_andps] = ACTIONS(19),
    [anon_sym_vpand] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_notl] = ACTIONS(19),
    [anon_sym_notw] = ACTIONS(19),
    [anon_sym_vpor] = ACTIONS(19),
    [anon_sym_por] = ACTIONS(19),
    [anon_sym_pxor] = ACTIONS(19),
    [anon_sym_cpuid] = ACTIONS(21),
    [anon_sym_lea] = ACTIONS(21),
    [anon_sym_popcnt] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(21),
    [anon_sym_nopl] = ACTIONS(21),
    [anon_sym_nopw] = ACTIONS(21),
    [anon_sym_ud2] = ACTIONS(21),
    [anon_sym_data16] = ACTIONS(21),
    [anon_sym_sha1rnds4] = ACTIONS(21),
    [anon_sym_addr32] = ACTIONS(21),
    [anon_sym_sha1msg1] = ACTIONS(21),
    [anon_sym_sha1msg2] = ACTIONS(21),
    [anon_sym_sha1nexte] = ACTIONS(21),
    [anon_sym_endbr64] = ACTIONS(21),
    [anon_sym_gs] = ACTIONS(21),
    [anon_sym_re] = ACTIONS(21),
    [anon_sym_ss] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(23),
    [anon_sym_prefetcht1] = ACTIONS(23),
    [anon_sym_prefetcht0] = ACTIONS(23),
    [anon_sym_mfence] = ACTIONS(23),
    [anon_sym_femms] = ACTIONS(23),
    [anon_sym_tzcnt] = ACTIONS(23),
    [anon_sym_leaveq] = ACTIONS(23),
    [anon_sym_retq] = ACTIONS(23),
    [anon_sym_packuswb] = ACTIONS(25),
    [anon_sym_punpckhbw] = ACTIONS(25),
    [anon_sym_punpckhdq] = ACTIONS(25),
    [anon_sym_punpckhwd] = ACTIONS(25),
    [anon_sym_punpcklbw] = ACTIONS(25),
    [anon_sym_punpckldq] = ACTIONS(25),
    [anon_sym_punpcklwd] = ACTIONS(25),
    [anon_sym_vpunpcklwd] = ACTIONS(25),
    [anon_sym_vpunpckldq] = ACTIONS(25),
    [anon_sym_punpcklqdq] = ACTIONS(25),
    [anon_sym_punpckhqdq] = ACTIONS(25),
    [anon_sym_vpunpckhqdq] = ACTIONS(25),
    [anon_sym_vpunpckhdq] = ACTIONS(25),
    [anon_sym_vpunpcklqdq] = ACTIONS(25),
    [anon_sym_vpunpckhwd] = ACTIONS(25),
    [anon_sym_vpackusdw] = ACTIONS(25),
    [anon_sym_vpalignr] = ACTIONS(25),
    [anon_sym_palignr] = ACTIONS(25),
    [anon_sym_vunpckhpd] = ACTIONS(25),
    [anon_sym_vunpckhps] = ACTIONS(25),
    [anon_sym_vunpcklpd] = ACTIONS(25),
    [anon_sym_vunpcklps] = ACTIONS(25),
    [anon_sym_unpckhpd] = ACTIONS(25),
    [anon_sym_rol] = ACTIONS(27),
    [anon_sym_ror] = ACTIONS(27),
    [anon_sym_sar] = ACTIONS(27),
    [anon_sym_sarl] = ACTIONS(27),
    [anon_sym_sarx] = ACTIONS(27),
    [anon_sym_shl] = ACTIONS(27),
    [anon_sym_shll] = ACTIONS(27),
    [anon_sym_shld] = ACTIONS(27),
    [anon_sym_shlx] = ACTIONS(27),
    [anon_sym_shlq] = ACTIONS(27),
    [anon_sym_shr] = ACTIONS(27),
    [anon_sym_shrq] = ACTIONS(27),
    [anon_sym_shrd] = ACTIONS(27),
    [anon_sym_shrl] = ACTIONS(27),
    [anon_sym_shrx] = ACTIONS(27),
    [anon_sym_vprord] = ACTIONS(27),
    [anon_sym_vprorq] = ACTIONS(27),
    [anon_sym_rorl] = ACTIONS(27),
    [anon_sym_roll] = ACTIONS(27),
    [anon_sym_vpslldq] = ACTIONS(27),
    [anon_sym_vpslld] = ACTIONS(27),
    [anon_sym_vpsllq] = ACTIONS(27),
    [anon_sym_vpsllw] = ACTIONS(27),
    [anon_sym_vpsrldq] = ACTIONS(27),
    [anon_sym_vpsrld] = ACTIONS(27),
    [anon_sym_vpsrlq] = ACTIONS(27),
    [anon_sym_vpsrlw] = ACTIONS(27),
    [anon_sym_rorx] = ACTIONS(27),
    [anon_sym_psrld] = ACTIONS(27),
    [anon_sym_psrlw] = ACTIONS(27),
    [anon_sym_psllq] = ACTIONS(27),
    [anon_sym_psrlq] = ACTIONS(27),
    [anon_sym_pslldq] = ACTIONS(27),
    [anon_sym_psrldq] = ACTIONS(27),
    [anon_sym_psrad] = ACTIONS(27),
    [anon_sym_pslld] = ACTIONS(27),
    [anon_sym_push] = ACTIONS(29),
    [anon_sym_pushq] = ACTIONS(29),
    [anon_sym_pop] = ACTIONS(29),
    [anon_sym_movslq] = ACTIONS(31),
    [anon_sym_movsb] = ACTIONS(31),
    [anon_sym_rep] = ACTIONS(31),
    [anon_sym_repz] = ACTIONS(31),
    [anon_sym_repnz] = ACTIONS(31),
    [anon_sym_rex] = ACTIONS(33),
    [anon_sym_rex_DOTWB] = ACTIONS(33),
    [anon_sym_rex_DOTWRB] = ACTIONS(33),
    [anon_sym_rex_DOTRXB] = ACTIONS(33),
    [anon_sym_rex_DOTB] = ACTIONS(33),
    [anon_sym_rex_DOTWRXB] = ACTIONS(33),
    [anon_sym_rex_DOTXB] = ACTIONS(33),
    [anon_sym_rex_DOTW] = ACTIONS(33),
    [anon_sym_rex_DOTRB] = ACTIONS(33),
    [anon_sym_xgetbv] = ACTIONS(33),
    [anon_sym_fs] = ACTIONS(33),
    [anon_sym_kmovw] = ACTIONS(33),
    [anon_sym_vzeroall] = ACTIONS(33),
    [anon_sym_vzeroupper] = ACTIONS(33),
    [anon_sym_aesdec] = ACTIONS(35),
    [anon_sym_aesdeclast] = ACTIONS(35),
    [anon_sym_aesenc] = ACTIONS(35),
    [anon_sym_aesenclast] = ACTIONS(35),
    [anon_sym_vaesenc] = ACTIONS(35),
    [anon_sym_vaesenclast] = ACTIONS(35),
    [anon_sym_aeskeygenassist] = ACTIONS(35),
    [anon_sym_vpextrw] = ACTIONS(37),
    [anon_sym_vextracti128] = ACTIONS(37),
    [anon_sym_vextracti32x4] = ACTIONS(37),
    [anon_sym_pextrq] = ACTIONS(37),
    [anon_sym_pextrw] = ACTIONS(37),
    [anon_sym_pextrb] = ACTIONS(37),
    [anon_sym_vpinsrw] = ACTIONS(39),
    [anon_sym_vpinsrd] = ACTIONS(39),
    [anon_sym_vpinsrq] = ACTIONS(39),
    [anon_sym_vpinsrb] = ACTIONS(39),
    [anon_sym_vinserti128] = ACTIONS(39),
    [anon_sym_vinserti32x4] = ACTIONS(39),
    [anon_sym_vinserti64x4] = ACTIONS(39),
    [anon_sym_vinsertf128] = ACTIONS(39),
    [anon_sym_pinsrw] = ACTIONS(39),
    [anon_sym_pinsrb] = ACTIONS(39),
    [anon_sym_pinsrd] = ACTIONS(39),
    [anon_sym_vpshufb] = ACTIONS(41),
    [anon_sym_vpshufd] = ACTIONS(41),
    [anon_sym_vshufps] = ACTIONS(41),
    [anon_sym_vshufi32x4] = ACTIONS(41),
    [anon_sym_vshufi64x2] = ACTIONS(41),
    [anon_sym_shufps] = ACTIONS(41),
    [anon_sym_pshuflw] = ACTIONS(41),
    [anon_sym_pshufd] = ACTIONS(41),
    [anon_sym_pshufhw] = ACTIONS(41),
    [anon_sym_shufpd] = ACTIONS(41),
    [anon_sym_pshufb] = ACTIONS(41),
    [anon_sym_vperm2f128] = ACTIONS(43),
    [anon_sym_vperm2i128] = ACTIONS(43),
    [anon_sym_vpermd] = ACTIONS(43),
    [anon_sym_vpermq] = ACTIONS(43),
    [anon_sym_vpermt2d] = ACTIONS(43),
    [anon_sym_vpermi2d] = ACTIONS(43),
    [anon_sym_vblendps] = ACTIONS(45),
    [anon_sym_vblendvps] = ACTIONS(45),
    [anon_sym_vpblendmd] = ACTIONS(45),
    [anon_sym_vpblendd] = ACTIONS(45),
    [anon_sym_pblendw] = ACTIONS(45),
    [anon_sym_blendvps] = ACTIONS(45),
    [anon_sym_vbroadcastss] = ACTIONS(47),
    [anon_sym_vpbroadcastq] = ACTIONS(47),
    [anon_sym_vpbroadcastd] = ACTIONS(47),
    [anon_sym_vbroadcasti128] = ACTIONS(47),
    [anon_sym_vbroadcasti32x4] = ACTIONS(47),
    [anon_sym_callq] = ACTIONS(49),
    [anon_sym_ja] = ACTIONS(49),
    [anon_sym_jae] = ACTIONS(49),
    [anon_sym_jb] = ACTIONS(49),
    [anon_sym_jbe] = ACTIONS(49),
    [anon_sym_je] = ACTIONS(49),
    [anon_sym_jg] = ACTIONS(49),
    [anon_sym_jge] = ACTIONS(49),
    [anon_sym_jl] = ACTIONS(49),
    [anon_sym_jle] = ACTIONS(49),
    [anon_sym_jmp] = ACTIONS(49),
    [anon_sym_jmpq] = ACTIONS(49),
    [anon_sym_jne] = ACTIONS(49),
    [anon_sym_jno] = ACTIONS(49),
    [anon_sym_jns] = ACTIONS(49),
    [anon_sym_jo] = ACTIONS(49),
    [anon_sym_jp] = ACTIONS(49),
    [anon_sym_jrcxz] = ACTIONS(49),
    [anon_sym_js] = ACTIONS(49),
    [anon_sym_notrack] = ACTIONS(49),
  },
  [4] = {
    [sym_comment] = STATE(300),
    [sym_instruction] = STATE(143),
    [sym_data] = STATE(158),
    [sym_opcode] = STATE(13),
    [sym_BinaryArithmeticOpcode] = STATE(30),
    [sym_BitAndByteOpcode] = STATE(30),
    [sym_DataTransferOpcode] = STATE(30),
    [sym_IOOpcode] = STATE(30),
    [sym_LogicalOpcode] = STATE(30),
    [sym_MiscellaneousOpcode] = STATE(30),
    [sym_OperatingSystemSupportOpcode] = STATE(30),
    [sym_PackUnpackOpcode] = STATE(30),
    [sym_ShiftAndRotateOpcode] = STATE(30),
    [sym_StackOpcode] = STATE(30),
    [sym_StringOpcode] = STATE(30),
    [sym_AccessRegisterOpcode] = STATE(30),
    [sym_CryptoOpcode] = STATE(30),
    [sym_ExtractOpcode] = STATE(30),
    [sym_InsertOpcode] = STATE(30),
    [sym_ShuffleOpcode] = STATE(30),
    [sym_PermuteOpcode] = STATE(30),
    [sym_BlendOpcode] = STATE(30),
    [sym_BroadcastOpcode] = STATE(30),
    [sym_control] = STATE(158),
    [sym_controlOpcode] = STATE(70),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym__line_break] = ACTIONS(126),
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
    [anon_sym_adcx] = ACTIONS(11),
    [anon_sym_adox] = ACTIONS(11),
    [anon_sym_vmulsd] = ACTIONS(11),
    [anon_sym_vpaddd] = ACTIONS(11),
    [anon_sym_vpaddb] = ACTIONS(11),
    [anon_sym_vpaddq] = ACTIONS(11),
    [anon_sym_vpaddw] = ACTIONS(11),
    [anon_sym_vpcmpgtd] = ACTIONS(11),
    [anon_sym_vdivsd] = ACTIONS(11),
    [anon_sym_vpmaddubsw] = ACTIONS(11),
    [anon_sym_vpmaddwd] = ACTIONS(11),
    [anon_sym_vpmullw] = ACTIONS(11),
    [anon_sym_vpmuludq] = ACTIONS(11),
    [anon_sym_vucomisd] = ACTIONS(11),
    [anon_sym_vucomiss] = ACTIONS(11),
    [anon_sym_addsd] = ACTIONS(11),
    [anon_sym_ucomisd] = ACTIONS(11),
    [anon_sym_ucomiss] = ACTIONS(11),
    [anon_sym_maxsd] = ACTIONS(11),
    [anon_sym_minsd] = ACTIONS(11),
    [anon_sym_maxss] = ACTIONS(11),
    [anon_sym_minss] = ACTIONS(11),
    [anon_sym_vsubsd] = ACTIONS(11),
    [anon_sym_vpsubusw] = ACTIONS(11),
    [anon_sym_vpsubq] = ACTIONS(11),
    [anon_sym_vpsubd] = ACTIONS(11),
    [anon_sym_vpsubw] = ACTIONS(11),
    [anon_sym_psubd] = ACTIONS(11),
    [anon_sym_pmaddwd] = ACTIONS(11),
    [anon_sym_paddw] = ACTIONS(11),
    [anon_sym_psubusw] = ACTIONS(11),
    [anon_sym_psubusb] = ACTIONS(11),
    [anon_sym_psubb] = ACTIONS(11),
    [anon_sym_psubq] = ACTIONS(11),
    [anon_sym_paddq] = ACTIONS(11),
    [anon_sym_pmuludq] = ACTIONS(11),
    [anon_sym_pmaddubsw] = ACTIONS(11),
    [anon_sym_paddd] = ACTIONS(11),
    [anon_sym_pcmpgtd] = ACTIONS(11),
    [anon_sym_pcmpeqd] = ACTIONS(11),
    [anon_sym_pcmpeqb] = ACTIONS(11),
    [anon_sym_vpcmpltud] = ACTIONS(11),
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
    [anon_sym_bswap] = ACTIONS(15),
    [anon_sym_cbtw] = ACTIONS(15),
    [anon_sym_cltd] = ACTIONS(15),
    [anon_sym_cltq] = ACTIONS(15),
    [anon_sym_cmovbe] = ACTIONS(15),
    [anon_sym_cmovl] = ACTIONS(15),
    [anon_sym_cmovae] = ACTIONS(15),
    [anon_sym_cmovo] = ACTIONS(15),
    [anon_sym_cmovne] = ACTIONS(15),
    [anon_sym_cmovns] = ACTIONS(15),
    [anon_sym_cmovg] = ACTIONS(15),
    [anon_sym_cmovp] = ACTIONS(15),
    [anon_sym_cmove] = ACTIONS(15),
    [anon_sym_cmovge] = ACTIONS(15),
    [anon_sym_cmovb] = ACTIONS(15),
    [anon_sym_cmova] = ACTIONS(15),
    [anon_sym_cmovle] = ACTIONS(15),
    [anon_sym_cmovs] = ACTIONS(15),
    [anon_sym_cwtl] = ACTIONS(15),
    [anon_sym_cwtd] = ACTIONS(15),
    [anon_sym_cqto] = ACTIONS(15),
    [anon_sym_cvttsd2si] = ACTIONS(15),
    [anon_sym_cvtss2sd] = ACTIONS(15),
    [anon_sym_cvttss2si] = ACTIONS(15),
    [anon_sym_cvtsi2sd] = ACTIONS(15),
    [anon_sym_cvtsi2ss] = ACTIONS(15),
    [anon_sym_cvtsi2sdq] = ACTIONS(15),
    [anon_sym_cvtsi2sdl] = ACTIONS(15),
    [anon_sym_cvtsd2ss] = ACTIONS(15),
    [anon_sym_cvtsi2ssl] = ACTIONS(15),
    [anon_sym_vcvtusi2sd] = ACTIONS(15),
    [anon_sym_mov] = ACTIONS(15),
    [anon_sym_movw] = ACTIONS(15),
    [anon_sym_movl] = ACTIONS(15),
    [anon_sym_movq] = ACTIONS(15),
    [anon_sym_movb] = ACTIONS(15),
    [anon_sym_movabs] = ACTIONS(15),
    [anon_sym_movsbw] = ACTIONS(15),
    [anon_sym_movsbq] = ACTIONS(15),
    [anon_sym_movsbl] = ACTIONS(15),
    [anon_sym_movswl] = ACTIONS(15),
    [anon_sym_movswq] = ACTIONS(15),
    [anon_sym_movzbw] = ACTIONS(15),
    [anon_sym_movzbq] = ACTIONS(15),
    [anon_sym_movzbl] = ACTIONS(15),
    [anon_sym_movzwl] = ACTIONS(15),
    [anon_sym_movaps] = ACTIONS(15),
    [anon_sym_movhlps] = ACTIONS(15),
    [anon_sym_movss] = ACTIONS(15),
    [anon_sym_movups] = ACTIONS(15),
    [anon_sym_movsd] = ACTIONS(15),
    [anon_sym_movd] = ACTIONS(15),
    [anon_sym_movhps] = ACTIONS(15),
    [anon_sym_movdqa] = ACTIONS(15),
    [anon_sym_movbe] = ACTIONS(15),
    [anon_sym_movapd] = ACTIONS(15),
    [anon_sym_movdqu] = ACTIONS(15),
    [anon_sym_xchg] = ACTIONS(15),
    [anon_sym_fildl] = ACTIONS(15),
    [anon_sym_fldt] = ACTIONS(15),
    [anon_sym_fstpl] = ACTIONS(15),
    [anon_sym_vmovaps] = ACTIONS(15),
    [anon_sym_vmovapd] = ACTIONS(15),
    [anon_sym_vmovss] = ACTIONS(15),
    [anon_sym_vmovdqu] = ACTIONS(15),
    [anon_sym_vmovdqu64] = ACTIONS(15),
    [anon_sym_vmovdqu32] = ACTIONS(15),
    [anon_sym_vmovdqa] = ACTIONS(15),
    [anon_sym_vmovdqa32] = ACTIONS(15),
    [anon_sym_vmovdqa64] = ACTIONS(15),
    [anon_sym_vmovq] = ACTIONS(15),
    [anon_sym_vmovups] = ACTIONS(15),
    [anon_sym_vmovd] = ACTIONS(15),
    [anon_sym_vmovsd] = ACTIONS(15),
    [anon_sym_pmovmskb] = ACTIONS(15),
    [anon_sym_insb] = ACTIONS(17),
    [anon_sym_insl] = ACTIONS(17),
    [anon_sym_outsb] = ACTIONS(17),
    [anon_sym_outsl] = ACTIONS(17),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_orq] = ACTIONS(19),
    [anon_sym_orl] = ACTIONS(19),
    [anon_sym_orb] = ACTIONS(19),
    [anon_sym_orw] = ACTIONS(19),
    [anon_sym_xor] = ACTIONS(19),
    [anon_sym_xorl] = ACTIONS(19),
    [anon_sym_xorw] = ACTIONS(19),
    [anon_sym_xorps] = ACTIONS(19),
    [anon_sym_xorpd] = ACTIONS(19),
    [anon_sym_vxorps] = ACTIONS(19),
    [anon_sym_vpxord] = ACTIONS(19),
    [anon_sym_vpxor] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_andq] = ACTIONS(19),
    [anon_sym_andl] = ACTIONS(19),
    [anon_sym_andw] = ACTIONS(19),
    [anon_sym_andb] = ACTIONS(19),
    [anon_sym_andn] = ACTIONS(19),
    [anon_sym_andpd] = ACTIONS(19),
    [anon_sym_pand] = ACTIONS(19),
    [anon_sym_pandn] = ACTIONS(19),
    [anon_sym_andps] = ACTIONS(19),
    [anon_sym_vpand] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_notl] = ACTIONS(19),
    [anon_sym_notw] = ACTIONS(19),
    [anon_sym_vpor] = ACTIONS(19),
    [anon_sym_por] = ACTIONS(19),
    [anon_sym_pxor] = ACTIONS(19),
    [anon_sym_cpuid] = ACTIONS(21),
    [anon_sym_lea] = ACTIONS(21),
    [anon_sym_popcnt] = ACTIONS(21),
    [anon_sym_nop] = ACTIONS(21),
    [anon_sym_nopl] = ACTIONS(21),
    [anon_sym_nopw] = ACTIONS(21),
    [anon_sym_ud2] = ACTIONS(21),
    [anon_sym_data16] = ACTIONS(21),
    [anon_sym_sha1rnds4] = ACTIONS(21),
    [anon_sym_addr32] = ACTIONS(21),
    [anon_sym_sha1msg1] = ACTIONS(21),
    [anon_sym_sha1msg2] = ACTIONS(21),
    [anon_sym_sha1nexte] = ACTIONS(21),
    [anon_sym_endbr64] = ACTIONS(21),
    [anon_sym_gs] = ACTIONS(21),
    [anon_sym_re] = ACTIONS(21),
    [anon_sym_ss] = ACTIONS(21),
    [anon_sym_lock] = ACTIONS(23),
    [anon_sym_prefetcht1] = ACTIONS(23),
    [anon_sym_prefetcht0] = ACTIONS(23),
    [anon_sym_mfence] = ACTIONS(23),
    [anon_sym_femms] = ACTIONS(23),
    [anon_sym_tzcnt] = ACTIONS(23),
    [anon_sym_leaveq] = ACTIONS(23),
    [anon_sym_retq] = ACTIONS(23),
    [anon_sym_packuswb] = ACTIONS(25),
    [anon_sym_punpckhbw] = ACTIONS(25),
    [anon_sym_punpckhdq] = ACTIONS(25),
    [anon_sym_punpckhwd] = ACTIONS(25),
    [anon_sym_punpcklbw] = ACTIONS(25),
    [anon_sym_punpckldq] = ACTIONS(25),
    [anon_sym_punpcklwd] = ACTIONS(25),
    [anon_sym_vpunpcklwd] = ACTIONS(25),
    [anon_sym_vpunpckldq] = ACTIONS(25),
    [anon_sym_punpcklqdq] = ACTIONS(25),
    [anon_sym_punpckhqdq] = ACTIONS(25),
    [anon_sym_vpunpckhqdq] = ACTIONS(25),
    [anon_sym_vpunpckhdq] = ACTIONS(25),
    [anon_sym_vpunpcklqdq] = ACTIONS(25),
    [anon_sym_vpunpckhwd] = ACTIONS(25),
    [anon_sym_vpackusdw] = ACTIONS(25),
    [anon_sym_vpalignr] = ACTIONS(25),
    [anon_sym_palignr] = ACTIONS(25),
    [anon_sym_vunpckhpd] = ACTIONS(25),
    [anon_sym_vunpckhps] = ACTIONS(25),
    [anon_sym_vunpcklpd] = ACTIONS(25),
    [anon_sym_vunpcklps] = ACTIONS(25),
    [anon_sym_unpckhpd] = ACTIONS(25),
    [anon_sym_rol] = ACTIONS(27),
    [anon_sym_ror] = ACTIONS(27),
    [anon_sym_sar] = ACTIONS(27),
    [anon_sym_sarl] = ACTIONS(27),
    [anon_sym_sarx] = ACTIONS(27),
    [anon_sym_shl] = ACTIONS(27),
    [anon_sym_shll] = ACTIONS(27),
    [anon_sym_shld] = ACTIONS(27),
    [anon_sym_shlx] = ACTIONS(27),
    [anon_sym_shlq] = ACTIONS(27),
    [anon_sym_shr] = ACTIONS(27),
    [anon_sym_shrq] = ACTIONS(27),
    [anon_sym_shrd] = ACTIONS(27),
    [anon_sym_shrl] = ACTIONS(27),
    [anon_sym_shrx] = ACTIONS(27),
    [anon_sym_vprord] = ACTIONS(27),
    [anon_sym_vprorq] = ACTIONS(27),
    [anon_sym_rorl] = ACTIONS(27),
    [anon_sym_roll] = ACTIONS(27),
    [anon_sym_vpslldq] = ACTIONS(27),
    [anon_sym_vpslld] = ACTIONS(27),
    [anon_sym_vpsllq] = ACTIONS(27),
    [anon_sym_vpsllw] = ACTIONS(27),
    [anon_sym_vpsrldq] = ACTIONS(27),
    [anon_sym_vpsrld] = ACTIONS(27),
    [anon_sym_vpsrlq] = ACTIONS(27),
    [anon_sym_vpsrlw] = ACTIONS(27),
    [anon_sym_rorx] = ACTIONS(27),
    [anon_sym_psrld] = ACTIONS(27),
    [anon_sym_psrlw] = ACTIONS(27),
    [anon_sym_psllq] = ACTIONS(27),
    [anon_sym_psrlq] = ACTIONS(27),
    [anon_sym_pslldq] = ACTIONS(27),
    [anon_sym_psrldq] = ACTIONS(27),
    [anon_sym_psrad] = ACTIONS(27),
    [anon_sym_pslld] = ACTIONS(27),
    [anon_sym_push] = ACTIONS(29),
    [anon_sym_pushq] = ACTIONS(29),
    [anon_sym_pop] = ACTIONS(29),
    [anon_sym_movslq] = ACTIONS(31),
    [anon_sym_movsb] = ACTIONS(31),
    [anon_sym_rep] = ACTIONS(31),
    [anon_sym_repz] = ACTIONS(31),
    [anon_sym_repnz] = ACTIONS(31),
    [anon_sym_rex] = ACTIONS(33),
    [anon_sym_rex_DOTWB] = ACTIONS(33),
    [anon_sym_rex_DOTWRB] = ACTIONS(33),
    [anon_sym_rex_DOTRXB] = ACTIONS(33),
    [anon_sym_rex_DOTB] = ACTIONS(33),
    [anon_sym_rex_DOTWRXB] = ACTIONS(33),
    [anon_sym_rex_DOTXB] = ACTIONS(33),
    [anon_sym_rex_DOTW] = ACTIONS(33),
    [anon_sym_rex_DOTRB] = ACTIONS(33),
    [anon_sym_xgetbv] = ACTIONS(33),
    [anon_sym_fs] = ACTIONS(33),
    [anon_sym_kmovw] = ACTIONS(33),
    [anon_sym_vzeroall] = ACTIONS(33),
    [anon_sym_vzeroupper] = ACTIONS(33),
    [anon_sym_aesdec] = ACTIONS(35),
    [anon_sym_aesdeclast] = ACTIONS(35),
    [anon_sym_aesenc] = ACTIONS(35),
    [anon_sym_aesenclast] = ACTIONS(35),
    [anon_sym_vaesenc] = ACTIONS(35),
    [anon_sym_vaesenclast] = ACTIONS(35),
    [anon_sym_aeskeygenassist] = ACTIONS(35),
    [anon_sym_vpextrw] = ACTIONS(37),
    [anon_sym_vextracti128] = ACTIONS(37),
    [anon_sym_vextracti32x4] = ACTIONS(37),
    [anon_sym_pextrq] = ACTIONS(37),
    [anon_sym_pextrw] = ACTIONS(37),
    [anon_sym_pextrb] = ACTIONS(37),
    [anon_sym_vpinsrw] = ACTIONS(39),
    [anon_sym_vpinsrd] = ACTIONS(39),
    [anon_sym_vpinsrq] = ACTIONS(39),
    [anon_sym_vpinsrb] = ACTIONS(39),
    [anon_sym_vinserti128] = ACTIONS(39),
    [anon_sym_vinserti32x4] = ACTIONS(39),
    [anon_sym_vinserti64x4] = ACTIONS(39),
    [anon_sym_vinsertf128] = ACTIONS(39),
    [anon_sym_pinsrw] = ACTIONS(39),
    [anon_sym_pinsrb] = ACTIONS(39),
    [anon_sym_pinsrd] = ACTIONS(39),
    [anon_sym_vpshufb] = ACTIONS(41),
    [anon_sym_vpshufd] = ACTIONS(41),
    [anon_sym_vshufps] = ACTIONS(41),
    [anon_sym_vshufi32x4] = ACTIONS(41),
    [anon_sym_vshufi64x2] = ACTIONS(41),
    [anon_sym_shufps] = ACTIONS(41),
    [anon_sym_pshuflw] = ACTIONS(41),
    [anon_sym_pshufd] = ACTIONS(41),
    [anon_sym_pshufhw] = ACTIONS(41),
    [anon_sym_shufpd] = ACTIONS(41),
    [anon_sym_pshufb] = ACTIONS(41),
    [anon_sym_vperm2f128] = ACTIONS(43),
    [anon_sym_vperm2i128] = ACTIONS(43),
    [anon_sym_vpermd] = ACTIONS(43),
    [anon_sym_vpermq] = ACTIONS(43),
    [anon_sym_vpermt2d] = ACTIONS(43),
    [anon_sym_vpermi2d] = ACTIONS(43),
    [anon_sym_vblendps] = ACTIONS(45),
    [anon_sym_vblendvps] = ACTIONS(45),
    [anon_sym_vpblendmd] = ACTIONS(45),
    [anon_sym_vpblendd] = ACTIONS(45),
    [anon_sym_pblendw] = ACTIONS(45),
    [anon_sym_blendvps] = ACTIONS(45),
    [anon_sym_vbroadcastss] = ACTIONS(47),
    [anon_sym_vpbroadcastq] = ACTIONS(47),
    [anon_sym_vpbroadcastd] = ACTIONS(47),
    [anon_sym_vbroadcasti128] = ACTIONS(47),
    [anon_sym_vbroadcasti32x4] = ACTIONS(47),
    [anon_sym_callq] = ACTIONS(49),
    [anon_sym_ja] = ACTIONS(49),
    [anon_sym_jae] = ACTIONS(49),
    [anon_sym_jb] = ACTIONS(49),
    [anon_sym_jbe] = ACTIONS(49),
    [anon_sym_je] = ACTIONS(49),
    [anon_sym_jg] = ACTIONS(49),
    [anon_sym_jge] = ACTIONS(49),
    [anon_sym_jl] = ACTIONS(49),
    [anon_sym_jle] = ACTIONS(49),
    [anon_sym_jmp] = ACTIONS(49),
    [anon_sym_jmpq] = ACTIONS(49),
    [anon_sym_jne] = ACTIONS(49),
    [anon_sym_jno] = ACTIONS(49),
    [anon_sym_jns] = ACTIONS(49),
    [anon_sym_jo] = ACTIONS(49),
    [anon_sym_jp] = ACTIONS(49),
    [anon_sym_jrcxz] = ACTIONS(49),
    [anon_sym_js] = ACTIONS(49),
    [anon_sym_notrack] = ACTIONS(49),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [aux_sym__address_token1] = ACTIONS(130),
    [aux_sym_comment_token1] = ACTIONS(130),
    [aux_sym_comment_token2] = ACTIONS(130),
    [sym__line_break] = ACTIONS(128),
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
    [anon_sym_adcx] = ACTIONS(130),
    [anon_sym_adox] = ACTIONS(130),
    [anon_sym_vmulsd] = ACTIONS(130),
    [anon_sym_vpaddd] = ACTIONS(130),
    [anon_sym_vpaddb] = ACTIONS(130),
    [anon_sym_vpaddq] = ACTIONS(130),
    [anon_sym_vpaddw] = ACTIONS(130),
    [anon_sym_vpcmpgtd] = ACTIONS(130),
    [anon_sym_vdivsd] = ACTIONS(130),
    [anon_sym_vpmaddubsw] = ACTIONS(130),
    [anon_sym_vpmaddwd] = ACTIONS(130),
    [anon_sym_vpmullw] = ACTIONS(130),
    [anon_sym_vpmuludq] = ACTIONS(130),
    [anon_sym_vucomisd] = ACTIONS(130),
    [anon_sym_vucomiss] = ACTIONS(130),
    [anon_sym_addsd] = ACTIONS(130),
    [anon_sym_ucomisd] = ACTIONS(130),
    [anon_sym_ucomiss] = ACTIONS(130),
    [anon_sym_maxsd] = ACTIONS(130),
    [anon_sym_minsd] = ACTIONS(130),
    [anon_sym_maxss] = ACTIONS(130),
    [anon_sym_minss] = ACTIONS(130),
    [anon_sym_vsubsd] = ACTIONS(130),
    [anon_sym_vpsubusw] = ACTIONS(130),
    [anon_sym_vpsubq] = ACTIONS(130),
    [anon_sym_vpsubd] = ACTIONS(130),
    [anon_sym_vpsubw] = ACTIONS(130),
    [anon_sym_psubd] = ACTIONS(130),
    [anon_sym_pmaddwd] = ACTIONS(130),
    [anon_sym_paddw] = ACTIONS(130),
    [anon_sym_psubusw] = ACTIONS(130),
    [anon_sym_psubusb] = ACTIONS(130),
    [anon_sym_psubb] = ACTIONS(130),
    [anon_sym_psubq] = ACTIONS(130),
    [anon_sym_paddq] = ACTIONS(130),
    [anon_sym_pmuludq] = ACTIONS(130),
    [anon_sym_pmaddubsw] = ACTIONS(130),
    [anon_sym_paddd] = ACTIONS(130),
    [anon_sym_pcmpgtd] = ACTIONS(130),
    [anon_sym_pcmpeqd] = ACTIONS(130),
    [anon_sym_pcmpeqb] = ACTIONS(130),
    [anon_sym_vpcmpltud] = ACTIONS(130),
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
    [anon_sym_vcvtusi2sd] = ACTIONS(130),
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
    [anon_sym_pmovmskb] = ACTIONS(130),
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
    [anon_sym_vpor] = ACTIONS(130),
    [anon_sym_por] = ACTIONS(130),
    [anon_sym_pxor] = ACTIONS(130),
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
    [anon_sym_gs] = ACTIONS(130),
    [anon_sym_re] = ACTIONS(130),
    [anon_sym_ss] = ACTIONS(130),
    [anon_sym_lock] = ACTIONS(130),
    [anon_sym_prefetcht1] = ACTIONS(130),
    [anon_sym_prefetcht0] = ACTIONS(130),
    [anon_sym_mfence] = ACTIONS(130),
    [anon_sym_femms] = ACTIONS(130),
    [anon_sym_tzcnt] = ACTIONS(130),
    [anon_sym_leaveq] = ACTIONS(130),
    [anon_sym_retq] = ACTIONS(130),
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
    [anon_sym_vpackusdw] = ACTIONS(130),
    [anon_sym_vpalignr] = ACTIONS(130),
    [anon_sym_palignr] = ACTIONS(130),
    [anon_sym_vunpckhpd] = ACTIONS(130),
    [anon_sym_vunpckhps] = ACTIONS(130),
    [anon_sym_vunpcklpd] = ACTIONS(130),
    [anon_sym_vunpcklps] = ACTIONS(130),
    [anon_sym_unpckhpd] = ACTIONS(130),
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
    [anon_sym_vpslldq] = ACTIONS(130),
    [anon_sym_vpslld] = ACTIONS(130),
    [anon_sym_vpsllq] = ACTIONS(130),
    [anon_sym_vpsllw] = ACTIONS(130),
    [anon_sym_vpsrldq] = ACTIONS(130),
    [anon_sym_vpsrld] = ACTIONS(130),
    [anon_sym_vpsrlq] = ACTIONS(130),
    [anon_sym_vpsrlw] = ACTIONS(130),
    [anon_sym_rorx] = ACTIONS(130),
    [anon_sym_psrld] = ACTIONS(130),
    [anon_sym_psrlw] = ACTIONS(130),
    [anon_sym_psllq] = ACTIONS(130),
    [anon_sym_psrlq] = ACTIONS(130),
    [anon_sym_pslldq] = ACTIONS(130),
    [anon_sym_psrldq] = ACTIONS(130),
    [anon_sym_psrad] = ACTIONS(130),
    [anon_sym_pslld] = ACTIONS(130),
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
    [anon_sym_vzeroall] = ACTIONS(130),
    [anon_sym_vzeroupper] = ACTIONS(130),
    [anon_sym_aesdec] = ACTIONS(130),
    [anon_sym_aesdeclast] = ACTIONS(130),
    [anon_sym_aesenc] = ACTIONS(130),
    [anon_sym_aesenclast] = ACTIONS(130),
    [anon_sym_vaesenc] = ACTIONS(130),
    [anon_sym_vaesenclast] = ACTIONS(130),
    [anon_sym_aeskeygenassist] = ACTIONS(130),
    [anon_sym_vpextrw] = ACTIONS(130),
    [anon_sym_vextracti128] = ACTIONS(130),
    [anon_sym_vextracti32x4] = ACTIONS(130),
    [anon_sym_pextrq] = ACTIONS(130),
    [anon_sym_pextrw] = ACTIONS(130),
    [anon_sym_pextrb] = ACTIONS(130),
    [anon_sym_vpinsrw] = ACTIONS(130),
    [anon_sym_vpinsrd] = ACTIONS(130),
    [anon_sym_vpinsrq] = ACTIONS(130),
    [anon_sym_vpinsrb] = ACTIONS(130),
    [anon_sym_vinserti128] = ACTIONS(130),
    [anon_sym_vinserti32x4] = ACTIONS(130),
    [anon_sym_vinserti64x4] = ACTIONS(130),
    [anon_sym_vinsertf128] = ACTIONS(130),
    [anon_sym_pinsrw] = ACTIONS(130),
    [anon_sym_pinsrb] = ACTIONS(130),
    [anon_sym_pinsrd] = ACTIONS(130),
    [anon_sym_vpshufb] = ACTIONS(130),
    [anon_sym_vpshufd] = ACTIONS(130),
    [anon_sym_vshufps] = ACTIONS(130),
    [anon_sym_vshufi32x4] = ACTIONS(130),
    [anon_sym_vshufi64x2] = ACTIONS(130),
    [anon_sym_shufps] = ACTIONS(130),
    [anon_sym_pshuflw] = ACTIONS(130),
    [anon_sym_pshufd] = ACTIONS(130),
    [anon_sym_pshufhw] = ACTIONS(130),
    [anon_sym_shufpd] = ACTIONS(130),
    [anon_sym_pshufb] = ACTIONS(130),
    [anon_sym_vperm2f128] = ACTIONS(130),
    [anon_sym_vperm2i128] = ACTIONS(130),
    [anon_sym_vpermd] = ACTIONS(130),
    [anon_sym_vpermq] = ACTIONS(130),
    [anon_sym_vpermt2d] = ACTIONS(130),
    [anon_sym_vpermi2d] = ACTIONS(130),
    [anon_sym_vblendps] = ACTIONS(130),
    [anon_sym_vblendvps] = ACTIONS(130),
    [anon_sym_vpblendmd] = ACTIONS(130),
    [anon_sym_vpblendd] = ACTIONS(130),
    [anon_sym_pblendw] = ACTIONS(130),
    [anon_sym_blendvps] = ACTIONS(130),
    [anon_sym_vbroadcastss] = ACTIONS(130),
    [anon_sym_vpbroadcastq] = ACTIONS(130),
    [anon_sym_vpbroadcastd] = ACTIONS(130),
    [anon_sym_vbroadcasti128] = ACTIONS(130),
    [anon_sym_vbroadcasti32x4] = ACTIONS(130),
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
  [6] = {
    [aux_sym__machine_code_repeat1] = STATE(7),
    [sym__byte] = ACTIONS(132),
    [aux_sym_comment_token1] = ACTIONS(134),
    [aux_sym_comment_token2] = ACTIONS(134),
    [sym__line_break] = ACTIONS(136),
    [anon_sym_adc] = ACTIONS(134),
    [anon_sym_add] = ACTIONS(134),
    [anon_sym_addq] = ACTIONS(134),
    [anon_sym_addl] = ACTIONS(134),
    [anon_sym_addss] = ACTIONS(134),
    [anon_sym_addw] = ACTIONS(134),
    [anon_sym_addb] = ACTIONS(134),
    [anon_sym_cmp] = ACTIONS(134),
    [anon_sym_cmpb] = ACTIONS(134),
    [anon_sym_cmpw] = ACTIONS(134),
    [anon_sym_cmpl] = ACTIONS(134),
    [anon_sym_cmpq] = ACTIONS(134),
    [anon_sym_comiss] = ACTIONS(134),
    [anon_sym_comisd] = ACTIONS(134),
    [anon_sym_inc] = ACTIONS(134),
    [anon_sym_incl] = ACTIONS(134),
    [anon_sym_dec] = ACTIONS(134),
    [anon_sym_div] = ACTIONS(134),
    [anon_sym_divq] = ACTIONS(134),
    [anon_sym_divl] = ACTIONS(134),
    [anon_sym_divss] = ACTIONS(134),
    [anon_sym_divsd] = ACTIONS(134),
    [anon_sym_idiv] = ACTIONS(134),
    [anon_sym_idivl] = ACTIONS(134),
    [anon_sym_sub] = ACTIONS(134),
    [anon_sym_subq] = ACTIONS(134),
    [anon_sym_subl] = ACTIONS(134),
    [anon_sym_subss] = ACTIONS(134),
    [anon_sym_subw] = ACTIONS(134),
    [anon_sym_subb] = ACTIONS(134),
    [anon_sym_subsd] = ACTIONS(134),
    [anon_sym_subpd] = ACTIONS(134),
    [anon_sym_sbb] = ACTIONS(134),
    [anon_sym_mul] = ACTIONS(134),
    [anon_sym_mulq] = ACTIONS(134),
    [anon_sym_mull] = ACTIONS(134),
    [anon_sym_mulss] = ACTIONS(134),
    [anon_sym_mulw] = ACTIONS(134),
    [anon_sym_mulb] = ACTIONS(134),
    [anon_sym_mulsd] = ACTIONS(134),
    [anon_sym_mulx] = ACTIONS(134),
    [anon_sym_imul] = ACTIONS(134),
    [anon_sym_neg] = ACTIONS(134),
    [anon_sym_negl] = ACTIONS(134),
    [anon_sym_negq] = ACTIONS(134),
    [anon_sym_fmulp] = ACTIONS(134),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(134),
    [anon_sym_pclmullqlqdq] = ACTIONS(134),
    [anon_sym_pclmullqhqdq] = ACTIONS(134),
    [anon_sym_vpclmullqhqdq] = ACTIONS(134),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(134),
    [anon_sym_pclmulhqhqdq] = ACTIONS(134),
    [anon_sym_vpclmullqlqdq] = ACTIONS(134),
    [anon_sym_adcx] = ACTIONS(134),
    [anon_sym_adox] = ACTIONS(134),
    [anon_sym_vmulsd] = ACTIONS(134),
    [anon_sym_vpaddd] = ACTIONS(134),
    [anon_sym_vpaddb] = ACTIONS(134),
    [anon_sym_vpaddq] = ACTIONS(134),
    [anon_sym_vpaddw] = ACTIONS(134),
    [anon_sym_vpcmpgtd] = ACTIONS(134),
    [anon_sym_vdivsd] = ACTIONS(134),
    [anon_sym_vpmaddubsw] = ACTIONS(134),
    [anon_sym_vpmaddwd] = ACTIONS(134),
    [anon_sym_vpmullw] = ACTIONS(134),
    [anon_sym_vpmuludq] = ACTIONS(134),
    [anon_sym_vucomisd] = ACTIONS(134),
    [anon_sym_vucomiss] = ACTIONS(134),
    [anon_sym_addsd] = ACTIONS(134),
    [anon_sym_ucomisd] = ACTIONS(134),
    [anon_sym_ucomiss] = ACTIONS(134),
    [anon_sym_maxsd] = ACTIONS(134),
    [anon_sym_minsd] = ACTIONS(134),
    [anon_sym_maxss] = ACTIONS(134),
    [anon_sym_minss] = ACTIONS(134),
    [anon_sym_vsubsd] = ACTIONS(134),
    [anon_sym_vpsubusw] = ACTIONS(134),
    [anon_sym_vpsubq] = ACTIONS(134),
    [anon_sym_vpsubd] = ACTIONS(134),
    [anon_sym_vpsubw] = ACTIONS(134),
    [anon_sym_psubd] = ACTIONS(134),
    [anon_sym_pmaddwd] = ACTIONS(134),
    [anon_sym_paddw] = ACTIONS(134),
    [anon_sym_psubusw] = ACTIONS(134),
    [anon_sym_psubusb] = ACTIONS(134),
    [anon_sym_psubb] = ACTIONS(134),
    [anon_sym_psubq] = ACTIONS(134),
    [anon_sym_paddq] = ACTIONS(134),
    [anon_sym_pmuludq] = ACTIONS(134),
    [anon_sym_pmaddubsw] = ACTIONS(134),
    [anon_sym_paddd] = ACTIONS(134),
    [anon_sym_pcmpgtd] = ACTIONS(134),
    [anon_sym_pcmpeqd] = ACTIONS(134),
    [anon_sym_pcmpeqb] = ACTIONS(134),
    [anon_sym_vpcmpltud] = ACTIONS(134),
    [anon_sym_bsf] = ACTIONS(134),
    [anon_sym_bsr] = ACTIONS(134),
    [anon_sym_bts] = ACTIONS(134),
    [anon_sym_bt] = ACTIONS(134),
    [anon_sym_btr] = ACTIONS(134),
    [anon_sym_btl] = ACTIONS(134),
    [anon_sym_setne] = ACTIONS(134),
    [anon_sym_setb] = ACTIONS(134),
    [anon_sym_sete] = ACTIONS(134),
    [anon_sym_setbe] = ACTIONS(134),
    [anon_sym_seta] = ACTIONS(134),
    [anon_sym_setge] = ACTIONS(134),
    [anon_sym_setae] = ACTIONS(134),
    [anon_sym_setl] = ACTIONS(134),
    [anon_sym_setle] = ACTIONS(134),
    [anon_sym_setg] = ACTIONS(134),
    [anon_sym_seto] = ACTIONS(134),
    [anon_sym_setnp] = ACTIONS(134),
    [anon_sym_setp] = ACTIONS(134),
    [anon_sym_setns] = ACTIONS(134),
    [anon_sym_test] = ACTIONS(134),
    [anon_sym_testb] = ACTIONS(134),
    [anon_sym_testl] = ACTIONS(134),
    [anon_sym_knotw] = ACTIONS(134),
    [anon_sym_bswap] = ACTIONS(134),
    [anon_sym_cbtw] = ACTIONS(134),
    [anon_sym_cltd] = ACTIONS(134),
    [anon_sym_cltq] = ACTIONS(134),
    [anon_sym_cmovbe] = ACTIONS(134),
    [anon_sym_cmovl] = ACTIONS(134),
    [anon_sym_cmovae] = ACTIONS(134),
    [anon_sym_cmovo] = ACTIONS(134),
    [anon_sym_cmovne] = ACTIONS(134),
    [anon_sym_cmovns] = ACTIONS(134),
    [anon_sym_cmovg] = ACTIONS(134),
    [anon_sym_cmovp] = ACTIONS(134),
    [anon_sym_cmove] = ACTIONS(134),
    [anon_sym_cmovge] = ACTIONS(134),
    [anon_sym_cmovb] = ACTIONS(134),
    [anon_sym_cmova] = ACTIONS(134),
    [anon_sym_cmovle] = ACTIONS(134),
    [anon_sym_cmovs] = ACTIONS(134),
    [anon_sym_cwtl] = ACTIONS(134),
    [anon_sym_cwtd] = ACTIONS(134),
    [anon_sym_cqto] = ACTIONS(134),
    [anon_sym_cvttsd2si] = ACTIONS(134),
    [anon_sym_cvtss2sd] = ACTIONS(134),
    [anon_sym_cvttss2si] = ACTIONS(134),
    [anon_sym_cvtsi2sd] = ACTIONS(134),
    [anon_sym_cvtsi2ss] = ACTIONS(134),
    [anon_sym_cvtsi2sdq] = ACTIONS(134),
    [anon_sym_cvtsi2sdl] = ACTIONS(134),
    [anon_sym_cvtsd2ss] = ACTIONS(134),
    [anon_sym_cvtsi2ssl] = ACTIONS(134),
    [anon_sym_vcvtusi2sd] = ACTIONS(134),
    [anon_sym_mov] = ACTIONS(134),
    [anon_sym_movw] = ACTIONS(134),
    [anon_sym_movl] = ACTIONS(134),
    [anon_sym_movq] = ACTIONS(134),
    [anon_sym_movb] = ACTIONS(134),
    [anon_sym_movabs] = ACTIONS(134),
    [anon_sym_movsbw] = ACTIONS(134),
    [anon_sym_movsbq] = ACTIONS(134),
    [anon_sym_movsbl] = ACTIONS(134),
    [anon_sym_movswl] = ACTIONS(134),
    [anon_sym_movswq] = ACTIONS(134),
    [anon_sym_movzbw] = ACTIONS(134),
    [anon_sym_movzbq] = ACTIONS(134),
    [anon_sym_movzbl] = ACTIONS(134),
    [anon_sym_movzwl] = ACTIONS(134),
    [anon_sym_movaps] = ACTIONS(134),
    [anon_sym_movhlps] = ACTIONS(134),
    [anon_sym_movss] = ACTIONS(134),
    [anon_sym_movups] = ACTIONS(134),
    [anon_sym_movsd] = ACTIONS(134),
    [anon_sym_movd] = ACTIONS(134),
    [anon_sym_movhps] = ACTIONS(134),
    [anon_sym_movdqa] = ACTIONS(134),
    [anon_sym_movbe] = ACTIONS(134),
    [anon_sym_movapd] = ACTIONS(134),
    [anon_sym_movdqu] = ACTIONS(134),
    [anon_sym_xchg] = ACTIONS(134),
    [anon_sym_fildl] = ACTIONS(134),
    [anon_sym_fldt] = ACTIONS(134),
    [anon_sym_fstpl] = ACTIONS(134),
    [anon_sym_vmovaps] = ACTIONS(134),
    [anon_sym_vmovapd] = ACTIONS(134),
    [anon_sym_vmovss] = ACTIONS(134),
    [anon_sym_vmovdqu] = ACTIONS(134),
    [anon_sym_vmovdqu64] = ACTIONS(134),
    [anon_sym_vmovdqu32] = ACTIONS(134),
    [anon_sym_vmovdqa] = ACTIONS(134),
    [anon_sym_vmovdqa32] = ACTIONS(134),
    [anon_sym_vmovdqa64] = ACTIONS(134),
    [anon_sym_vmovq] = ACTIONS(134),
    [anon_sym_vmovups] = ACTIONS(134),
    [anon_sym_vmovd] = ACTIONS(134),
    [anon_sym_vmovsd] = ACTIONS(134),
    [anon_sym_pmovmskb] = ACTIONS(134),
    [anon_sym_insb] = ACTIONS(134),
    [anon_sym_insl] = ACTIONS(134),
    [anon_sym_outsb] = ACTIONS(134),
    [anon_sym_outsl] = ACTIONS(134),
    [anon_sym_or] = ACTIONS(134),
    [anon_sym_orq] = ACTIONS(134),
    [anon_sym_orl] = ACTIONS(134),
    [anon_sym_orb] = ACTIONS(134),
    [anon_sym_orw] = ACTIONS(134),
    [anon_sym_xor] = ACTIONS(134),
    [anon_sym_xorl] = ACTIONS(134),
    [anon_sym_xorw] = ACTIONS(134),
    [anon_sym_xorps] = ACTIONS(134),
    [anon_sym_xorpd] = ACTIONS(134),
    [anon_sym_vxorps] = ACTIONS(134),
    [anon_sym_vpxord] = ACTIONS(134),
    [anon_sym_vpxor] = ACTIONS(134),
    [anon_sym_and] = ACTIONS(134),
    [anon_sym_andq] = ACTIONS(134),
    [anon_sym_andl] = ACTIONS(134),
    [anon_sym_andw] = ACTIONS(134),
    [anon_sym_andb] = ACTIONS(134),
    [anon_sym_andn] = ACTIONS(134),
    [anon_sym_andpd] = ACTIONS(134),
    [anon_sym_pand] = ACTIONS(134),
    [anon_sym_pandn] = ACTIONS(134),
    [anon_sym_andps] = ACTIONS(134),
    [anon_sym_vpand] = ACTIONS(134),
    [anon_sym_not] = ACTIONS(134),
    [anon_sym_notl] = ACTIONS(134),
    [anon_sym_notw] = ACTIONS(134),
    [anon_sym_vpor] = ACTIONS(134),
    [anon_sym_por] = ACTIONS(134),
    [anon_sym_pxor] = ACTIONS(134),
    [anon_sym_cpuid] = ACTIONS(134),
    [anon_sym_lea] = ACTIONS(134),
    [anon_sym_popcnt] = ACTIONS(134),
    [anon_sym_nop] = ACTIONS(134),
    [anon_sym_nopl] = ACTIONS(134),
    [anon_sym_nopw] = ACTIONS(134),
    [anon_sym_ud2] = ACTIONS(134),
    [anon_sym_data16] = ACTIONS(134),
    [anon_sym_sha1rnds4] = ACTIONS(134),
    [anon_sym_addr32] = ACTIONS(134),
    [anon_sym_sha1msg1] = ACTIONS(134),
    [anon_sym_sha1msg2] = ACTIONS(134),
    [anon_sym_sha1nexte] = ACTIONS(134),
    [anon_sym_endbr64] = ACTIONS(134),
    [anon_sym_gs] = ACTIONS(134),
    [anon_sym_re] = ACTIONS(134),
    [anon_sym_ss] = ACTIONS(134),
    [anon_sym_lock] = ACTIONS(134),
    [anon_sym_prefetcht1] = ACTIONS(134),
    [anon_sym_prefetcht0] = ACTIONS(134),
    [anon_sym_mfence] = ACTIONS(134),
    [anon_sym_femms] = ACTIONS(134),
    [anon_sym_tzcnt] = ACTIONS(134),
    [anon_sym_leaveq] = ACTIONS(134),
    [anon_sym_retq] = ACTIONS(134),
    [anon_sym_packuswb] = ACTIONS(134),
    [anon_sym_punpckhbw] = ACTIONS(134),
    [anon_sym_punpckhdq] = ACTIONS(134),
    [anon_sym_punpckhwd] = ACTIONS(134),
    [anon_sym_punpcklbw] = ACTIONS(134),
    [anon_sym_punpckldq] = ACTIONS(134),
    [anon_sym_punpcklwd] = ACTIONS(134),
    [anon_sym_vpunpcklwd] = ACTIONS(134),
    [anon_sym_vpunpckldq] = ACTIONS(134),
    [anon_sym_punpcklqdq] = ACTIONS(134),
    [anon_sym_punpckhqdq] = ACTIONS(134),
    [anon_sym_vpunpckhqdq] = ACTIONS(134),
    [anon_sym_vpunpckhdq] = ACTIONS(134),
    [anon_sym_vpunpcklqdq] = ACTIONS(134),
    [anon_sym_vpunpckhwd] = ACTIONS(134),
    [anon_sym_vpackusdw] = ACTIONS(134),
    [anon_sym_vpalignr] = ACTIONS(134),
    [anon_sym_palignr] = ACTIONS(134),
    [anon_sym_vunpckhpd] = ACTIONS(134),
    [anon_sym_vunpckhps] = ACTIONS(134),
    [anon_sym_vunpcklpd] = ACTIONS(134),
    [anon_sym_vunpcklps] = ACTIONS(134),
    [anon_sym_unpckhpd] = ACTIONS(134),
    [anon_sym_rol] = ACTIONS(134),
    [anon_sym_ror] = ACTIONS(134),
    [anon_sym_sar] = ACTIONS(134),
    [anon_sym_sarl] = ACTIONS(134),
    [anon_sym_sarx] = ACTIONS(134),
    [anon_sym_shl] = ACTIONS(134),
    [anon_sym_shll] = ACTIONS(134),
    [anon_sym_shld] = ACTIONS(134),
    [anon_sym_shlx] = ACTIONS(134),
    [anon_sym_shlq] = ACTIONS(134),
    [anon_sym_shr] = ACTIONS(134),
    [anon_sym_shrq] = ACTIONS(134),
    [anon_sym_shrd] = ACTIONS(134),
    [anon_sym_shrl] = ACTIONS(134),
    [anon_sym_shrx] = ACTIONS(134),
    [anon_sym_vprord] = ACTIONS(134),
    [anon_sym_vprorq] = ACTIONS(134),
    [anon_sym_rorl] = ACTIONS(134),
    [anon_sym_roll] = ACTIONS(134),
    [anon_sym_vpslldq] = ACTIONS(134),
    [anon_sym_vpslld] = ACTIONS(134),
    [anon_sym_vpsllq] = ACTIONS(134),
    [anon_sym_vpsllw] = ACTIONS(134),
    [anon_sym_vpsrldq] = ACTIONS(134),
    [anon_sym_vpsrld] = ACTIONS(134),
    [anon_sym_vpsrlq] = ACTIONS(134),
    [anon_sym_vpsrlw] = ACTIONS(134),
    [anon_sym_rorx] = ACTIONS(134),
    [anon_sym_psrld] = ACTIONS(134),
    [anon_sym_psrlw] = ACTIONS(134),
    [anon_sym_psllq] = ACTIONS(134),
    [anon_sym_psrlq] = ACTIONS(134),
    [anon_sym_pslldq] = ACTIONS(134),
    [anon_sym_psrldq] = ACTIONS(134),
    [anon_sym_psrad] = ACTIONS(134),
    [anon_sym_pslld] = ACTIONS(134),
    [anon_sym_push] = ACTIONS(134),
    [anon_sym_pushq] = ACTIONS(134),
    [anon_sym_pop] = ACTIONS(134),
    [anon_sym_movslq] = ACTIONS(134),
    [anon_sym_movsb] = ACTIONS(134),
    [anon_sym_rep] = ACTIONS(134),
    [anon_sym_repz] = ACTIONS(134),
    [anon_sym_repnz] = ACTIONS(134),
    [anon_sym_rex] = ACTIONS(134),
    [anon_sym_rex_DOTWB] = ACTIONS(134),
    [anon_sym_rex_DOTWRB] = ACTIONS(134),
    [anon_sym_rex_DOTRXB] = ACTIONS(134),
    [anon_sym_rex_DOTB] = ACTIONS(134),
    [anon_sym_rex_DOTWRXB] = ACTIONS(134),
    [anon_sym_rex_DOTXB] = ACTIONS(134),
    [anon_sym_rex_DOTW] = ACTIONS(134),
    [anon_sym_rex_DOTRB] = ACTIONS(134),
    [anon_sym_xgetbv] = ACTIONS(134),
    [anon_sym_fs] = ACTIONS(134),
    [anon_sym_kmovw] = ACTIONS(134),
    [anon_sym_vzeroall] = ACTIONS(134),
    [anon_sym_vzeroupper] = ACTIONS(134),
    [anon_sym_aesdec] = ACTIONS(134),
    [anon_sym_aesdeclast] = ACTIONS(134),
    [anon_sym_aesenc] = ACTIONS(134),
    [anon_sym_aesenclast] = ACTIONS(134),
    [anon_sym_vaesenc] = ACTIONS(134),
    [anon_sym_vaesenclast] = ACTIONS(134),
    [anon_sym_aeskeygenassist] = ACTIONS(134),
    [anon_sym_vpextrw] = ACTIONS(134),
    [anon_sym_vextracti128] = ACTIONS(134),
    [anon_sym_vextracti32x4] = ACTIONS(134),
    [anon_sym_pextrq] = ACTIONS(134),
    [anon_sym_pextrw] = ACTIONS(134),
    [anon_sym_pextrb] = ACTIONS(134),
    [anon_sym_vpinsrw] = ACTIONS(134),
    [anon_sym_vpinsrd] = ACTIONS(134),
    [anon_sym_vpinsrq] = ACTIONS(134),
    [anon_sym_vpinsrb] = ACTIONS(134),
    [anon_sym_vinserti128] = ACTIONS(134),
    [anon_sym_vinserti32x4] = ACTIONS(134),
    [anon_sym_vinserti64x4] = ACTIONS(134),
    [anon_sym_vinsertf128] = ACTIONS(134),
    [anon_sym_pinsrw] = ACTIONS(134),
    [anon_sym_pinsrb] = ACTIONS(134),
    [anon_sym_pinsrd] = ACTIONS(134),
    [anon_sym_vpshufb] = ACTIONS(134),
    [anon_sym_vpshufd] = ACTIONS(134),
    [anon_sym_vshufps] = ACTIONS(134),
    [anon_sym_vshufi32x4] = ACTIONS(134),
    [anon_sym_vshufi64x2] = ACTIONS(134),
    [anon_sym_shufps] = ACTIONS(134),
    [anon_sym_pshuflw] = ACTIONS(134),
    [anon_sym_pshufd] = ACTIONS(134),
    [anon_sym_pshufhw] = ACTIONS(134),
    [anon_sym_shufpd] = ACTIONS(134),
    [anon_sym_pshufb] = ACTIONS(134),
    [anon_sym_vperm2f128] = ACTIONS(134),
    [anon_sym_vperm2i128] = ACTIONS(134),
    [anon_sym_vpermd] = ACTIONS(134),
    [anon_sym_vpermq] = ACTIONS(134),
    [anon_sym_vpermt2d] = ACTIONS(134),
    [anon_sym_vpermi2d] = ACTIONS(134),
    [anon_sym_vblendps] = ACTIONS(134),
    [anon_sym_vblendvps] = ACTIONS(134),
    [anon_sym_vpblendmd] = ACTIONS(134),
    [anon_sym_vpblendd] = ACTIONS(134),
    [anon_sym_pblendw] = ACTIONS(134),
    [anon_sym_blendvps] = ACTIONS(134),
    [anon_sym_vbroadcastss] = ACTIONS(134),
    [anon_sym_vpbroadcastq] = ACTIONS(134),
    [anon_sym_vpbroadcastd] = ACTIONS(134),
    [anon_sym_vbroadcasti128] = ACTIONS(134),
    [anon_sym_vbroadcasti32x4] = ACTIONS(134),
    [anon_sym_callq] = ACTIONS(134),
    [anon_sym_ja] = ACTIONS(134),
    [anon_sym_jae] = ACTIONS(134),
    [anon_sym_jb] = ACTIONS(134),
    [anon_sym_jbe] = ACTIONS(134),
    [anon_sym_je] = ACTIONS(134),
    [anon_sym_jg] = ACTIONS(134),
    [anon_sym_jge] = ACTIONS(134),
    [anon_sym_jl] = ACTIONS(134),
    [anon_sym_jle] = ACTIONS(134),
    [anon_sym_jmp] = ACTIONS(134),
    [anon_sym_jmpq] = ACTIONS(134),
    [anon_sym_jne] = ACTIONS(134),
    [anon_sym_jno] = ACTIONS(134),
    [anon_sym_jns] = ACTIONS(134),
    [anon_sym_jo] = ACTIONS(134),
    [anon_sym_jp] = ACTIONS(134),
    [anon_sym_jrcxz] = ACTIONS(134),
    [anon_sym_js] = ACTIONS(134),
    [anon_sym_notrack] = ACTIONS(134),
  },
  [7] = {
    [aux_sym__machine_code_repeat1] = STATE(7),
    [sym__byte] = ACTIONS(138),
    [aux_sym_comment_token1] = ACTIONS(141),
    [aux_sym_comment_token2] = ACTIONS(141),
    [sym__line_break] = ACTIONS(143),
    [anon_sym_adc] = ACTIONS(141),
    [anon_sym_add] = ACTIONS(141),
    [anon_sym_addq] = ACTIONS(141),
    [anon_sym_addl] = ACTIONS(141),
    [anon_sym_addss] = ACTIONS(141),
    [anon_sym_addw] = ACTIONS(141),
    [anon_sym_addb] = ACTIONS(141),
    [anon_sym_cmp] = ACTIONS(141),
    [anon_sym_cmpb] = ACTIONS(141),
    [anon_sym_cmpw] = ACTIONS(141),
    [anon_sym_cmpl] = ACTIONS(141),
    [anon_sym_cmpq] = ACTIONS(141),
    [anon_sym_comiss] = ACTIONS(141),
    [anon_sym_comisd] = ACTIONS(141),
    [anon_sym_inc] = ACTIONS(141),
    [anon_sym_incl] = ACTIONS(141),
    [anon_sym_dec] = ACTIONS(141),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_divq] = ACTIONS(141),
    [anon_sym_divl] = ACTIONS(141),
    [anon_sym_divss] = ACTIONS(141),
    [anon_sym_divsd] = ACTIONS(141),
    [anon_sym_idiv] = ACTIONS(141),
    [anon_sym_idivl] = ACTIONS(141),
    [anon_sym_sub] = ACTIONS(141),
    [anon_sym_subq] = ACTIONS(141),
    [anon_sym_subl] = ACTIONS(141),
    [anon_sym_subss] = ACTIONS(141),
    [anon_sym_subw] = ACTIONS(141),
    [anon_sym_subb] = ACTIONS(141),
    [anon_sym_subsd] = ACTIONS(141),
    [anon_sym_subpd] = ACTIONS(141),
    [anon_sym_sbb] = ACTIONS(141),
    [anon_sym_mul] = ACTIONS(141),
    [anon_sym_mulq] = ACTIONS(141),
    [anon_sym_mull] = ACTIONS(141),
    [anon_sym_mulss] = ACTIONS(141),
    [anon_sym_mulw] = ACTIONS(141),
    [anon_sym_mulb] = ACTIONS(141),
    [anon_sym_mulsd] = ACTIONS(141),
    [anon_sym_mulx] = ACTIONS(141),
    [anon_sym_imul] = ACTIONS(141),
    [anon_sym_neg] = ACTIONS(141),
    [anon_sym_negl] = ACTIONS(141),
    [anon_sym_negq] = ACTIONS(141),
    [anon_sym_fmulp] = ACTIONS(141),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(141),
    [anon_sym_pclmullqlqdq] = ACTIONS(141),
    [anon_sym_pclmullqhqdq] = ACTIONS(141),
    [anon_sym_vpclmullqhqdq] = ACTIONS(141),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(141),
    [anon_sym_pclmulhqhqdq] = ACTIONS(141),
    [anon_sym_vpclmullqlqdq] = ACTIONS(141),
    [anon_sym_adcx] = ACTIONS(141),
    [anon_sym_adox] = ACTIONS(141),
    [anon_sym_vmulsd] = ACTIONS(141),
    [anon_sym_vpaddd] = ACTIONS(141),
    [anon_sym_vpaddb] = ACTIONS(141),
    [anon_sym_vpaddq] = ACTIONS(141),
    [anon_sym_vpaddw] = ACTIONS(141),
    [anon_sym_vpcmpgtd] = ACTIONS(141),
    [anon_sym_vdivsd] = ACTIONS(141),
    [anon_sym_vpmaddubsw] = ACTIONS(141),
    [anon_sym_vpmaddwd] = ACTIONS(141),
    [anon_sym_vpmullw] = ACTIONS(141),
    [anon_sym_vpmuludq] = ACTIONS(141),
    [anon_sym_vucomisd] = ACTIONS(141),
    [anon_sym_vucomiss] = ACTIONS(141),
    [anon_sym_addsd] = ACTIONS(141),
    [anon_sym_ucomisd] = ACTIONS(141),
    [anon_sym_ucomiss] = ACTIONS(141),
    [anon_sym_maxsd] = ACTIONS(141),
    [anon_sym_minsd] = ACTIONS(141),
    [anon_sym_maxss] = ACTIONS(141),
    [anon_sym_minss] = ACTIONS(141),
    [anon_sym_vsubsd] = ACTIONS(141),
    [anon_sym_vpsubusw] = ACTIONS(141),
    [anon_sym_vpsubq] = ACTIONS(141),
    [anon_sym_vpsubd] = ACTIONS(141),
    [anon_sym_vpsubw] = ACTIONS(141),
    [anon_sym_psubd] = ACTIONS(141),
    [anon_sym_pmaddwd] = ACTIONS(141),
    [anon_sym_paddw] = ACTIONS(141),
    [anon_sym_psubusw] = ACTIONS(141),
    [anon_sym_psubusb] = ACTIONS(141),
    [anon_sym_psubb] = ACTIONS(141),
    [anon_sym_psubq] = ACTIONS(141),
    [anon_sym_paddq] = ACTIONS(141),
    [anon_sym_pmuludq] = ACTIONS(141),
    [anon_sym_pmaddubsw] = ACTIONS(141),
    [anon_sym_paddd] = ACTIONS(141),
    [anon_sym_pcmpgtd] = ACTIONS(141),
    [anon_sym_pcmpeqd] = ACTIONS(141),
    [anon_sym_pcmpeqb] = ACTIONS(141),
    [anon_sym_vpcmpltud] = ACTIONS(141),
    [anon_sym_bsf] = ACTIONS(141),
    [anon_sym_bsr] = ACTIONS(141),
    [anon_sym_bts] = ACTIONS(141),
    [anon_sym_bt] = ACTIONS(141),
    [anon_sym_btr] = ACTIONS(141),
    [anon_sym_btl] = ACTIONS(141),
    [anon_sym_setne] = ACTIONS(141),
    [anon_sym_setb] = ACTIONS(141),
    [anon_sym_sete] = ACTIONS(141),
    [anon_sym_setbe] = ACTIONS(141),
    [anon_sym_seta] = ACTIONS(141),
    [anon_sym_setge] = ACTIONS(141),
    [anon_sym_setae] = ACTIONS(141),
    [anon_sym_setl] = ACTIONS(141),
    [anon_sym_setle] = ACTIONS(141),
    [anon_sym_setg] = ACTIONS(141),
    [anon_sym_seto] = ACTIONS(141),
    [anon_sym_setnp] = ACTIONS(141),
    [anon_sym_setp] = ACTIONS(141),
    [anon_sym_setns] = ACTIONS(141),
    [anon_sym_test] = ACTIONS(141),
    [anon_sym_testb] = ACTIONS(141),
    [anon_sym_testl] = ACTIONS(141),
    [anon_sym_knotw] = ACTIONS(141),
    [anon_sym_bswap] = ACTIONS(141),
    [anon_sym_cbtw] = ACTIONS(141),
    [anon_sym_cltd] = ACTIONS(141),
    [anon_sym_cltq] = ACTIONS(141),
    [anon_sym_cmovbe] = ACTIONS(141),
    [anon_sym_cmovl] = ACTIONS(141),
    [anon_sym_cmovae] = ACTIONS(141),
    [anon_sym_cmovo] = ACTIONS(141),
    [anon_sym_cmovne] = ACTIONS(141),
    [anon_sym_cmovns] = ACTIONS(141),
    [anon_sym_cmovg] = ACTIONS(141),
    [anon_sym_cmovp] = ACTIONS(141),
    [anon_sym_cmove] = ACTIONS(141),
    [anon_sym_cmovge] = ACTIONS(141),
    [anon_sym_cmovb] = ACTIONS(141),
    [anon_sym_cmova] = ACTIONS(141),
    [anon_sym_cmovle] = ACTIONS(141),
    [anon_sym_cmovs] = ACTIONS(141),
    [anon_sym_cwtl] = ACTIONS(141),
    [anon_sym_cwtd] = ACTIONS(141),
    [anon_sym_cqto] = ACTIONS(141),
    [anon_sym_cvttsd2si] = ACTIONS(141),
    [anon_sym_cvtss2sd] = ACTIONS(141),
    [anon_sym_cvttss2si] = ACTIONS(141),
    [anon_sym_cvtsi2sd] = ACTIONS(141),
    [anon_sym_cvtsi2ss] = ACTIONS(141),
    [anon_sym_cvtsi2sdq] = ACTIONS(141),
    [anon_sym_cvtsi2sdl] = ACTIONS(141),
    [anon_sym_cvtsd2ss] = ACTIONS(141),
    [anon_sym_cvtsi2ssl] = ACTIONS(141),
    [anon_sym_vcvtusi2sd] = ACTIONS(141),
    [anon_sym_mov] = ACTIONS(141),
    [anon_sym_movw] = ACTIONS(141),
    [anon_sym_movl] = ACTIONS(141),
    [anon_sym_movq] = ACTIONS(141),
    [anon_sym_movb] = ACTIONS(141),
    [anon_sym_movabs] = ACTIONS(141),
    [anon_sym_movsbw] = ACTIONS(141),
    [anon_sym_movsbq] = ACTIONS(141),
    [anon_sym_movsbl] = ACTIONS(141),
    [anon_sym_movswl] = ACTIONS(141),
    [anon_sym_movswq] = ACTIONS(141),
    [anon_sym_movzbw] = ACTIONS(141),
    [anon_sym_movzbq] = ACTIONS(141),
    [anon_sym_movzbl] = ACTIONS(141),
    [anon_sym_movzwl] = ACTIONS(141),
    [anon_sym_movaps] = ACTIONS(141),
    [anon_sym_movhlps] = ACTIONS(141),
    [anon_sym_movss] = ACTIONS(141),
    [anon_sym_movups] = ACTIONS(141),
    [anon_sym_movsd] = ACTIONS(141),
    [anon_sym_movd] = ACTIONS(141),
    [anon_sym_movhps] = ACTIONS(141),
    [anon_sym_movdqa] = ACTIONS(141),
    [anon_sym_movbe] = ACTIONS(141),
    [anon_sym_movapd] = ACTIONS(141),
    [anon_sym_movdqu] = ACTIONS(141),
    [anon_sym_xchg] = ACTIONS(141),
    [anon_sym_fildl] = ACTIONS(141),
    [anon_sym_fldt] = ACTIONS(141),
    [anon_sym_fstpl] = ACTIONS(141),
    [anon_sym_vmovaps] = ACTIONS(141),
    [anon_sym_vmovapd] = ACTIONS(141),
    [anon_sym_vmovss] = ACTIONS(141),
    [anon_sym_vmovdqu] = ACTIONS(141),
    [anon_sym_vmovdqu64] = ACTIONS(141),
    [anon_sym_vmovdqu32] = ACTIONS(141),
    [anon_sym_vmovdqa] = ACTIONS(141),
    [anon_sym_vmovdqa32] = ACTIONS(141),
    [anon_sym_vmovdqa64] = ACTIONS(141),
    [anon_sym_vmovq] = ACTIONS(141),
    [anon_sym_vmovups] = ACTIONS(141),
    [anon_sym_vmovd] = ACTIONS(141),
    [anon_sym_vmovsd] = ACTIONS(141),
    [anon_sym_pmovmskb] = ACTIONS(141),
    [anon_sym_insb] = ACTIONS(141),
    [anon_sym_insl] = ACTIONS(141),
    [anon_sym_outsb] = ACTIONS(141),
    [anon_sym_outsl] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(141),
    [anon_sym_orq] = ACTIONS(141),
    [anon_sym_orl] = ACTIONS(141),
    [anon_sym_orb] = ACTIONS(141),
    [anon_sym_orw] = ACTIONS(141),
    [anon_sym_xor] = ACTIONS(141),
    [anon_sym_xorl] = ACTIONS(141),
    [anon_sym_xorw] = ACTIONS(141),
    [anon_sym_xorps] = ACTIONS(141),
    [anon_sym_xorpd] = ACTIONS(141),
    [anon_sym_vxorps] = ACTIONS(141),
    [anon_sym_vpxord] = ACTIONS(141),
    [anon_sym_vpxor] = ACTIONS(141),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_andq] = ACTIONS(141),
    [anon_sym_andl] = ACTIONS(141),
    [anon_sym_andw] = ACTIONS(141),
    [anon_sym_andb] = ACTIONS(141),
    [anon_sym_andn] = ACTIONS(141),
    [anon_sym_andpd] = ACTIONS(141),
    [anon_sym_pand] = ACTIONS(141),
    [anon_sym_pandn] = ACTIONS(141),
    [anon_sym_andps] = ACTIONS(141),
    [anon_sym_vpand] = ACTIONS(141),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_notl] = ACTIONS(141),
    [anon_sym_notw] = ACTIONS(141),
    [anon_sym_vpor] = ACTIONS(141),
    [anon_sym_por] = ACTIONS(141),
    [anon_sym_pxor] = ACTIONS(141),
    [anon_sym_cpuid] = ACTIONS(141),
    [anon_sym_lea] = ACTIONS(141),
    [anon_sym_popcnt] = ACTIONS(141),
    [anon_sym_nop] = ACTIONS(141),
    [anon_sym_nopl] = ACTIONS(141),
    [anon_sym_nopw] = ACTIONS(141),
    [anon_sym_ud2] = ACTIONS(141),
    [anon_sym_data16] = ACTIONS(141),
    [anon_sym_sha1rnds4] = ACTIONS(141),
    [anon_sym_addr32] = ACTIONS(141),
    [anon_sym_sha1msg1] = ACTIONS(141),
    [anon_sym_sha1msg2] = ACTIONS(141),
    [anon_sym_sha1nexte] = ACTIONS(141),
    [anon_sym_endbr64] = ACTIONS(141),
    [anon_sym_gs] = ACTIONS(141),
    [anon_sym_re] = ACTIONS(141),
    [anon_sym_ss] = ACTIONS(141),
    [anon_sym_lock] = ACTIONS(141),
    [anon_sym_prefetcht1] = ACTIONS(141),
    [anon_sym_prefetcht0] = ACTIONS(141),
    [anon_sym_mfence] = ACTIONS(141),
    [anon_sym_femms] = ACTIONS(141),
    [anon_sym_tzcnt] = ACTIONS(141),
    [anon_sym_leaveq] = ACTIONS(141),
    [anon_sym_retq] = ACTIONS(141),
    [anon_sym_packuswb] = ACTIONS(141),
    [anon_sym_punpckhbw] = ACTIONS(141),
    [anon_sym_punpckhdq] = ACTIONS(141),
    [anon_sym_punpckhwd] = ACTIONS(141),
    [anon_sym_punpcklbw] = ACTIONS(141),
    [anon_sym_punpckldq] = ACTIONS(141),
    [anon_sym_punpcklwd] = ACTIONS(141),
    [anon_sym_vpunpcklwd] = ACTIONS(141),
    [anon_sym_vpunpckldq] = ACTIONS(141),
    [anon_sym_punpcklqdq] = ACTIONS(141),
    [anon_sym_punpckhqdq] = ACTIONS(141),
    [anon_sym_vpunpckhqdq] = ACTIONS(141),
    [anon_sym_vpunpckhdq] = ACTIONS(141),
    [anon_sym_vpunpcklqdq] = ACTIONS(141),
    [anon_sym_vpunpckhwd] = ACTIONS(141),
    [anon_sym_vpackusdw] = ACTIONS(141),
    [anon_sym_vpalignr] = ACTIONS(141),
    [anon_sym_palignr] = ACTIONS(141),
    [anon_sym_vunpckhpd] = ACTIONS(141),
    [anon_sym_vunpckhps] = ACTIONS(141),
    [anon_sym_vunpcklpd] = ACTIONS(141),
    [anon_sym_vunpcklps] = ACTIONS(141),
    [anon_sym_unpckhpd] = ACTIONS(141),
    [anon_sym_rol] = ACTIONS(141),
    [anon_sym_ror] = ACTIONS(141),
    [anon_sym_sar] = ACTIONS(141),
    [anon_sym_sarl] = ACTIONS(141),
    [anon_sym_sarx] = ACTIONS(141),
    [anon_sym_shl] = ACTIONS(141),
    [anon_sym_shll] = ACTIONS(141),
    [anon_sym_shld] = ACTIONS(141),
    [anon_sym_shlx] = ACTIONS(141),
    [anon_sym_shlq] = ACTIONS(141),
    [anon_sym_shr] = ACTIONS(141),
    [anon_sym_shrq] = ACTIONS(141),
    [anon_sym_shrd] = ACTIONS(141),
    [anon_sym_shrl] = ACTIONS(141),
    [anon_sym_shrx] = ACTIONS(141),
    [anon_sym_vprord] = ACTIONS(141),
    [anon_sym_vprorq] = ACTIONS(141),
    [anon_sym_rorl] = ACTIONS(141),
    [anon_sym_roll] = ACTIONS(141),
    [anon_sym_vpslldq] = ACTIONS(141),
    [anon_sym_vpslld] = ACTIONS(141),
    [anon_sym_vpsllq] = ACTIONS(141),
    [anon_sym_vpsllw] = ACTIONS(141),
    [anon_sym_vpsrldq] = ACTIONS(141),
    [anon_sym_vpsrld] = ACTIONS(141),
    [anon_sym_vpsrlq] = ACTIONS(141),
    [anon_sym_vpsrlw] = ACTIONS(141),
    [anon_sym_rorx] = ACTIONS(141),
    [anon_sym_psrld] = ACTIONS(141),
    [anon_sym_psrlw] = ACTIONS(141),
    [anon_sym_psllq] = ACTIONS(141),
    [anon_sym_psrlq] = ACTIONS(141),
    [anon_sym_pslldq] = ACTIONS(141),
    [anon_sym_psrldq] = ACTIONS(141),
    [anon_sym_psrad] = ACTIONS(141),
    [anon_sym_pslld] = ACTIONS(141),
    [anon_sym_push] = ACTIONS(141),
    [anon_sym_pushq] = ACTIONS(141),
    [anon_sym_pop] = ACTIONS(141),
    [anon_sym_movslq] = ACTIONS(141),
    [anon_sym_movsb] = ACTIONS(141),
    [anon_sym_rep] = ACTIONS(141),
    [anon_sym_repz] = ACTIONS(141),
    [anon_sym_repnz] = ACTIONS(141),
    [anon_sym_rex] = ACTIONS(141),
    [anon_sym_rex_DOTWB] = ACTIONS(141),
    [anon_sym_rex_DOTWRB] = ACTIONS(141),
    [anon_sym_rex_DOTRXB] = ACTIONS(141),
    [anon_sym_rex_DOTB] = ACTIONS(141),
    [anon_sym_rex_DOTWRXB] = ACTIONS(141),
    [anon_sym_rex_DOTXB] = ACTIONS(141),
    [anon_sym_rex_DOTW] = ACTIONS(141),
    [anon_sym_rex_DOTRB] = ACTIONS(141),
    [anon_sym_xgetbv] = ACTIONS(141),
    [anon_sym_fs] = ACTIONS(141),
    [anon_sym_kmovw] = ACTIONS(141),
    [anon_sym_vzeroall] = ACTIONS(141),
    [anon_sym_vzeroupper] = ACTIONS(141),
    [anon_sym_aesdec] = ACTIONS(141),
    [anon_sym_aesdeclast] = ACTIONS(141),
    [anon_sym_aesenc] = ACTIONS(141),
    [anon_sym_aesenclast] = ACTIONS(141),
    [anon_sym_vaesenc] = ACTIONS(141),
    [anon_sym_vaesenclast] = ACTIONS(141),
    [anon_sym_aeskeygenassist] = ACTIONS(141),
    [anon_sym_vpextrw] = ACTIONS(141),
    [anon_sym_vextracti128] = ACTIONS(141),
    [anon_sym_vextracti32x4] = ACTIONS(141),
    [anon_sym_pextrq] = ACTIONS(141),
    [anon_sym_pextrw] = ACTIONS(141),
    [anon_sym_pextrb] = ACTIONS(141),
    [anon_sym_vpinsrw] = ACTIONS(141),
    [anon_sym_vpinsrd] = ACTIONS(141),
    [anon_sym_vpinsrq] = ACTIONS(141),
    [anon_sym_vpinsrb] = ACTIONS(141),
    [anon_sym_vinserti128] = ACTIONS(141),
    [anon_sym_vinserti32x4] = ACTIONS(141),
    [anon_sym_vinserti64x4] = ACTIONS(141),
    [anon_sym_vinsertf128] = ACTIONS(141),
    [anon_sym_pinsrw] = ACTIONS(141),
    [anon_sym_pinsrb] = ACTIONS(141),
    [anon_sym_pinsrd] = ACTIONS(141),
    [anon_sym_vpshufb] = ACTIONS(141),
    [anon_sym_vpshufd] = ACTIONS(141),
    [anon_sym_vshufps] = ACTIONS(141),
    [anon_sym_vshufi32x4] = ACTIONS(141),
    [anon_sym_vshufi64x2] = ACTIONS(141),
    [anon_sym_shufps] = ACTIONS(141),
    [anon_sym_pshuflw] = ACTIONS(141),
    [anon_sym_pshufd] = ACTIONS(141),
    [anon_sym_pshufhw] = ACTIONS(141),
    [anon_sym_shufpd] = ACTIONS(141),
    [anon_sym_pshufb] = ACTIONS(141),
    [anon_sym_vperm2f128] = ACTIONS(141),
    [anon_sym_vperm2i128] = ACTIONS(141),
    [anon_sym_vpermd] = ACTIONS(141),
    [anon_sym_vpermq] = ACTIONS(141),
    [anon_sym_vpermt2d] = ACTIONS(141),
    [anon_sym_vpermi2d] = ACTIONS(141),
    [anon_sym_vblendps] = ACTIONS(141),
    [anon_sym_vblendvps] = ACTIONS(141),
    [anon_sym_vpblendmd] = ACTIONS(141),
    [anon_sym_vpblendd] = ACTIONS(141),
    [anon_sym_pblendw] = ACTIONS(141),
    [anon_sym_blendvps] = ACTIONS(141),
    [anon_sym_vbroadcastss] = ACTIONS(141),
    [anon_sym_vpbroadcastq] = ACTIONS(141),
    [anon_sym_vpbroadcastd] = ACTIONS(141),
    [anon_sym_vbroadcasti128] = ACTIONS(141),
    [anon_sym_vbroadcasti32x4] = ACTIONS(141),
    [anon_sym_callq] = ACTIONS(141),
    [anon_sym_ja] = ACTIONS(141),
    [anon_sym_jae] = ACTIONS(141),
    [anon_sym_jb] = ACTIONS(141),
    [anon_sym_jbe] = ACTIONS(141),
    [anon_sym_je] = ACTIONS(141),
    [anon_sym_jg] = ACTIONS(141),
    [anon_sym_jge] = ACTIONS(141),
    [anon_sym_jl] = ACTIONS(141),
    [anon_sym_jle] = ACTIONS(141),
    [anon_sym_jmp] = ACTIONS(141),
    [anon_sym_jmpq] = ACTIONS(141),
    [anon_sym_jne] = ACTIONS(141),
    [anon_sym_jno] = ACTIONS(141),
    [anon_sym_jns] = ACTIONS(141),
    [anon_sym_jo] = ACTIONS(141),
    [anon_sym_jp] = ACTIONS(141),
    [anon_sym_jrcxz] = ACTIONS(141),
    [anon_sym_js] = ACTIONS(141),
    [anon_sym_notrack] = ACTIONS(141),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym__address_token1] = ACTIONS(147),
    [aux_sym_comment_token1] = ACTIONS(147),
    [aux_sym_comment_token2] = ACTIONS(147),
    [sym__line_break] = ACTIONS(145),
    [anon_sym_adc] = ACTIONS(147),
    [anon_sym_add] = ACTIONS(147),
    [anon_sym_addq] = ACTIONS(147),
    [anon_sym_addl] = ACTIONS(147),
    [anon_sym_addss] = ACTIONS(147),
    [anon_sym_addw] = ACTIONS(147),
    [anon_sym_addb] = ACTIONS(147),
    [anon_sym_cmp] = ACTIONS(147),
    [anon_sym_cmpb] = ACTIONS(147),
    [anon_sym_cmpw] = ACTIONS(147),
    [anon_sym_cmpl] = ACTIONS(147),
    [anon_sym_cmpq] = ACTIONS(147),
    [anon_sym_comiss] = ACTIONS(147),
    [anon_sym_comisd] = ACTIONS(147),
    [anon_sym_inc] = ACTIONS(147),
    [anon_sym_incl] = ACTIONS(147),
    [anon_sym_dec] = ACTIONS(147),
    [anon_sym_div] = ACTIONS(147),
    [anon_sym_divq] = ACTIONS(147),
    [anon_sym_divl] = ACTIONS(147),
    [anon_sym_divss] = ACTIONS(147),
    [anon_sym_divsd] = ACTIONS(147),
    [anon_sym_idiv] = ACTIONS(147),
    [anon_sym_idivl] = ACTIONS(147),
    [anon_sym_sub] = ACTIONS(147),
    [anon_sym_subq] = ACTIONS(147),
    [anon_sym_subl] = ACTIONS(147),
    [anon_sym_subss] = ACTIONS(147),
    [anon_sym_subw] = ACTIONS(147),
    [anon_sym_subb] = ACTIONS(147),
    [anon_sym_subsd] = ACTIONS(147),
    [anon_sym_subpd] = ACTIONS(147),
    [anon_sym_sbb] = ACTIONS(147),
    [anon_sym_mul] = ACTIONS(147),
    [anon_sym_mulq] = ACTIONS(147),
    [anon_sym_mull] = ACTIONS(147),
    [anon_sym_mulss] = ACTIONS(147),
    [anon_sym_mulw] = ACTIONS(147),
    [anon_sym_mulb] = ACTIONS(147),
    [anon_sym_mulsd] = ACTIONS(147),
    [anon_sym_mulx] = ACTIONS(147),
    [anon_sym_imul] = ACTIONS(147),
    [anon_sym_neg] = ACTIONS(147),
    [anon_sym_negl] = ACTIONS(147),
    [anon_sym_negq] = ACTIONS(147),
    [anon_sym_fmulp] = ACTIONS(147),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(147),
    [anon_sym_pclmullqlqdq] = ACTIONS(147),
    [anon_sym_pclmullqhqdq] = ACTIONS(147),
    [anon_sym_vpclmullqhqdq] = ACTIONS(147),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(147),
    [anon_sym_pclmulhqhqdq] = ACTIONS(147),
    [anon_sym_vpclmullqlqdq] = ACTIONS(147),
    [anon_sym_adcx] = ACTIONS(147),
    [anon_sym_adox] = ACTIONS(147),
    [anon_sym_vmulsd] = ACTIONS(147),
    [anon_sym_vpaddd] = ACTIONS(147),
    [anon_sym_vpaddb] = ACTIONS(147),
    [anon_sym_vpaddq] = ACTIONS(147),
    [anon_sym_vpaddw] = ACTIONS(147),
    [anon_sym_vpcmpgtd] = ACTIONS(147),
    [anon_sym_vdivsd] = ACTIONS(147),
    [anon_sym_vpmaddubsw] = ACTIONS(147),
    [anon_sym_vpmaddwd] = ACTIONS(147),
    [anon_sym_vpmullw] = ACTIONS(147),
    [anon_sym_vpmuludq] = ACTIONS(147),
    [anon_sym_vucomisd] = ACTIONS(147),
    [anon_sym_vucomiss] = ACTIONS(147),
    [anon_sym_addsd] = ACTIONS(147),
    [anon_sym_ucomisd] = ACTIONS(147),
    [anon_sym_ucomiss] = ACTIONS(147),
    [anon_sym_maxsd] = ACTIONS(147),
    [anon_sym_minsd] = ACTIONS(147),
    [anon_sym_maxss] = ACTIONS(147),
    [anon_sym_minss] = ACTIONS(147),
    [anon_sym_vsubsd] = ACTIONS(147),
    [anon_sym_vpsubusw] = ACTIONS(147),
    [anon_sym_vpsubq] = ACTIONS(147),
    [anon_sym_vpsubd] = ACTIONS(147),
    [anon_sym_vpsubw] = ACTIONS(147),
    [anon_sym_psubd] = ACTIONS(147),
    [anon_sym_pmaddwd] = ACTIONS(147),
    [anon_sym_paddw] = ACTIONS(147),
    [anon_sym_psubusw] = ACTIONS(147),
    [anon_sym_psubusb] = ACTIONS(147),
    [anon_sym_psubb] = ACTIONS(147),
    [anon_sym_psubq] = ACTIONS(147),
    [anon_sym_paddq] = ACTIONS(147),
    [anon_sym_pmuludq] = ACTIONS(147),
    [anon_sym_pmaddubsw] = ACTIONS(147),
    [anon_sym_paddd] = ACTIONS(147),
    [anon_sym_pcmpgtd] = ACTIONS(147),
    [anon_sym_pcmpeqd] = ACTIONS(147),
    [anon_sym_pcmpeqb] = ACTIONS(147),
    [anon_sym_vpcmpltud] = ACTIONS(147),
    [anon_sym_bsf] = ACTIONS(147),
    [anon_sym_bsr] = ACTIONS(147),
    [anon_sym_bts] = ACTIONS(147),
    [anon_sym_bt] = ACTIONS(147),
    [anon_sym_btr] = ACTIONS(147),
    [anon_sym_btl] = ACTIONS(147),
    [anon_sym_setne] = ACTIONS(147),
    [anon_sym_setb] = ACTIONS(147),
    [anon_sym_sete] = ACTIONS(147),
    [anon_sym_setbe] = ACTIONS(147),
    [anon_sym_seta] = ACTIONS(147),
    [anon_sym_setge] = ACTIONS(147),
    [anon_sym_setae] = ACTIONS(147),
    [anon_sym_setl] = ACTIONS(147),
    [anon_sym_setle] = ACTIONS(147),
    [anon_sym_setg] = ACTIONS(147),
    [anon_sym_seto] = ACTIONS(147),
    [anon_sym_setnp] = ACTIONS(147),
    [anon_sym_setp] = ACTIONS(147),
    [anon_sym_setns] = ACTIONS(147),
    [anon_sym_test] = ACTIONS(147),
    [anon_sym_testb] = ACTIONS(147),
    [anon_sym_testl] = ACTIONS(147),
    [anon_sym_knotw] = ACTIONS(147),
    [anon_sym_bswap] = ACTIONS(147),
    [anon_sym_cbtw] = ACTIONS(147),
    [anon_sym_cltd] = ACTIONS(147),
    [anon_sym_cltq] = ACTIONS(147),
    [anon_sym_cmovbe] = ACTIONS(147),
    [anon_sym_cmovl] = ACTIONS(147),
    [anon_sym_cmovae] = ACTIONS(147),
    [anon_sym_cmovo] = ACTIONS(147),
    [anon_sym_cmovne] = ACTIONS(147),
    [anon_sym_cmovns] = ACTIONS(147),
    [anon_sym_cmovg] = ACTIONS(147),
    [anon_sym_cmovp] = ACTIONS(147),
    [anon_sym_cmove] = ACTIONS(147),
    [anon_sym_cmovge] = ACTIONS(147),
    [anon_sym_cmovb] = ACTIONS(147),
    [anon_sym_cmova] = ACTIONS(147),
    [anon_sym_cmovle] = ACTIONS(147),
    [anon_sym_cmovs] = ACTIONS(147),
    [anon_sym_cwtl] = ACTIONS(147),
    [anon_sym_cwtd] = ACTIONS(147),
    [anon_sym_cqto] = ACTIONS(147),
    [anon_sym_cvttsd2si] = ACTIONS(147),
    [anon_sym_cvtss2sd] = ACTIONS(147),
    [anon_sym_cvttss2si] = ACTIONS(147),
    [anon_sym_cvtsi2sd] = ACTIONS(147),
    [anon_sym_cvtsi2ss] = ACTIONS(147),
    [anon_sym_cvtsi2sdq] = ACTIONS(147),
    [anon_sym_cvtsi2sdl] = ACTIONS(147),
    [anon_sym_cvtsd2ss] = ACTIONS(147),
    [anon_sym_cvtsi2ssl] = ACTIONS(147),
    [anon_sym_vcvtusi2sd] = ACTIONS(147),
    [anon_sym_mov] = ACTIONS(147),
    [anon_sym_movw] = ACTIONS(147),
    [anon_sym_movl] = ACTIONS(147),
    [anon_sym_movq] = ACTIONS(147),
    [anon_sym_movb] = ACTIONS(147),
    [anon_sym_movabs] = ACTIONS(147),
    [anon_sym_movsbw] = ACTIONS(147),
    [anon_sym_movsbq] = ACTIONS(147),
    [anon_sym_movsbl] = ACTIONS(147),
    [anon_sym_movswl] = ACTIONS(147),
    [anon_sym_movswq] = ACTIONS(147),
    [anon_sym_movzbw] = ACTIONS(147),
    [anon_sym_movzbq] = ACTIONS(147),
    [anon_sym_movzbl] = ACTIONS(147),
    [anon_sym_movzwl] = ACTIONS(147),
    [anon_sym_movaps] = ACTIONS(147),
    [anon_sym_movhlps] = ACTIONS(147),
    [anon_sym_movss] = ACTIONS(147),
    [anon_sym_movups] = ACTIONS(147),
    [anon_sym_movsd] = ACTIONS(147),
    [anon_sym_movd] = ACTIONS(147),
    [anon_sym_movhps] = ACTIONS(147),
    [anon_sym_movdqa] = ACTIONS(147),
    [anon_sym_movbe] = ACTIONS(147),
    [anon_sym_movapd] = ACTIONS(147),
    [anon_sym_movdqu] = ACTIONS(147),
    [anon_sym_xchg] = ACTIONS(147),
    [anon_sym_fildl] = ACTIONS(147),
    [anon_sym_fldt] = ACTIONS(147),
    [anon_sym_fstpl] = ACTIONS(147),
    [anon_sym_vmovaps] = ACTIONS(147),
    [anon_sym_vmovapd] = ACTIONS(147),
    [anon_sym_vmovss] = ACTIONS(147),
    [anon_sym_vmovdqu] = ACTIONS(147),
    [anon_sym_vmovdqu64] = ACTIONS(147),
    [anon_sym_vmovdqu32] = ACTIONS(147),
    [anon_sym_vmovdqa] = ACTIONS(147),
    [anon_sym_vmovdqa32] = ACTIONS(147),
    [anon_sym_vmovdqa64] = ACTIONS(147),
    [anon_sym_vmovq] = ACTIONS(147),
    [anon_sym_vmovups] = ACTIONS(147),
    [anon_sym_vmovd] = ACTIONS(147),
    [anon_sym_vmovsd] = ACTIONS(147),
    [anon_sym_pmovmskb] = ACTIONS(147),
    [anon_sym_insb] = ACTIONS(147),
    [anon_sym_insl] = ACTIONS(147),
    [anon_sym_outsb] = ACTIONS(147),
    [anon_sym_outsl] = ACTIONS(147),
    [anon_sym_or] = ACTIONS(147),
    [anon_sym_orq] = ACTIONS(147),
    [anon_sym_orl] = ACTIONS(147),
    [anon_sym_orb] = ACTIONS(147),
    [anon_sym_orw] = ACTIONS(147),
    [anon_sym_xor] = ACTIONS(147),
    [anon_sym_xorl] = ACTIONS(147),
    [anon_sym_xorw] = ACTIONS(147),
    [anon_sym_xorps] = ACTIONS(147),
    [anon_sym_xorpd] = ACTIONS(147),
    [anon_sym_vxorps] = ACTIONS(147),
    [anon_sym_vpxord] = ACTIONS(147),
    [anon_sym_vpxor] = ACTIONS(147),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_andq] = ACTIONS(147),
    [anon_sym_andl] = ACTIONS(147),
    [anon_sym_andw] = ACTIONS(147),
    [anon_sym_andb] = ACTIONS(147),
    [anon_sym_andn] = ACTIONS(147),
    [anon_sym_andpd] = ACTIONS(147),
    [anon_sym_pand] = ACTIONS(147),
    [anon_sym_pandn] = ACTIONS(147),
    [anon_sym_andps] = ACTIONS(147),
    [anon_sym_vpand] = ACTIONS(147),
    [anon_sym_not] = ACTIONS(147),
    [anon_sym_notl] = ACTIONS(147),
    [anon_sym_notw] = ACTIONS(147),
    [anon_sym_vpor] = ACTIONS(147),
    [anon_sym_por] = ACTIONS(147),
    [anon_sym_pxor] = ACTIONS(147),
    [anon_sym_cpuid] = ACTIONS(147),
    [anon_sym_lea] = ACTIONS(147),
    [anon_sym_popcnt] = ACTIONS(147),
    [anon_sym_nop] = ACTIONS(147),
    [anon_sym_nopl] = ACTIONS(147),
    [anon_sym_nopw] = ACTIONS(147),
    [anon_sym_ud2] = ACTIONS(147),
    [anon_sym_data16] = ACTIONS(147),
    [anon_sym_sha1rnds4] = ACTIONS(147),
    [anon_sym_addr32] = ACTIONS(147),
    [anon_sym_sha1msg1] = ACTIONS(147),
    [anon_sym_sha1msg2] = ACTIONS(147),
    [anon_sym_sha1nexte] = ACTIONS(147),
    [anon_sym_endbr64] = ACTIONS(147),
    [anon_sym_gs] = ACTIONS(147),
    [anon_sym_re] = ACTIONS(147),
    [anon_sym_ss] = ACTIONS(147),
    [anon_sym_lock] = ACTIONS(147),
    [anon_sym_prefetcht1] = ACTIONS(147),
    [anon_sym_prefetcht0] = ACTIONS(147),
    [anon_sym_mfence] = ACTIONS(147),
    [anon_sym_femms] = ACTIONS(147),
    [anon_sym_tzcnt] = ACTIONS(147),
    [anon_sym_leaveq] = ACTIONS(147),
    [anon_sym_retq] = ACTIONS(147),
    [anon_sym_packuswb] = ACTIONS(147),
    [anon_sym_punpckhbw] = ACTIONS(147),
    [anon_sym_punpckhdq] = ACTIONS(147),
    [anon_sym_punpckhwd] = ACTIONS(147),
    [anon_sym_punpcklbw] = ACTIONS(147),
    [anon_sym_punpckldq] = ACTIONS(147),
    [anon_sym_punpcklwd] = ACTIONS(147),
    [anon_sym_vpunpcklwd] = ACTIONS(147),
    [anon_sym_vpunpckldq] = ACTIONS(147),
    [anon_sym_punpcklqdq] = ACTIONS(147),
    [anon_sym_punpckhqdq] = ACTIONS(147),
    [anon_sym_vpunpckhqdq] = ACTIONS(147),
    [anon_sym_vpunpckhdq] = ACTIONS(147),
    [anon_sym_vpunpcklqdq] = ACTIONS(147),
    [anon_sym_vpunpckhwd] = ACTIONS(147),
    [anon_sym_vpackusdw] = ACTIONS(147),
    [anon_sym_vpalignr] = ACTIONS(147),
    [anon_sym_palignr] = ACTIONS(147),
    [anon_sym_vunpckhpd] = ACTIONS(147),
    [anon_sym_vunpckhps] = ACTIONS(147),
    [anon_sym_vunpcklpd] = ACTIONS(147),
    [anon_sym_vunpcklps] = ACTIONS(147),
    [anon_sym_unpckhpd] = ACTIONS(147),
    [anon_sym_rol] = ACTIONS(147),
    [anon_sym_ror] = ACTIONS(147),
    [anon_sym_sar] = ACTIONS(147),
    [anon_sym_sarl] = ACTIONS(147),
    [anon_sym_sarx] = ACTIONS(147),
    [anon_sym_shl] = ACTIONS(147),
    [anon_sym_shll] = ACTIONS(147),
    [anon_sym_shld] = ACTIONS(147),
    [anon_sym_shlx] = ACTIONS(147),
    [anon_sym_shlq] = ACTIONS(147),
    [anon_sym_shr] = ACTIONS(147),
    [anon_sym_shrq] = ACTIONS(147),
    [anon_sym_shrd] = ACTIONS(147),
    [anon_sym_shrl] = ACTIONS(147),
    [anon_sym_shrx] = ACTIONS(147),
    [anon_sym_vprord] = ACTIONS(147),
    [anon_sym_vprorq] = ACTIONS(147),
    [anon_sym_rorl] = ACTIONS(147),
    [anon_sym_roll] = ACTIONS(147),
    [anon_sym_vpslldq] = ACTIONS(147),
    [anon_sym_vpslld] = ACTIONS(147),
    [anon_sym_vpsllq] = ACTIONS(147),
    [anon_sym_vpsllw] = ACTIONS(147),
    [anon_sym_vpsrldq] = ACTIONS(147),
    [anon_sym_vpsrld] = ACTIONS(147),
    [anon_sym_vpsrlq] = ACTIONS(147),
    [anon_sym_vpsrlw] = ACTIONS(147),
    [anon_sym_rorx] = ACTIONS(147),
    [anon_sym_psrld] = ACTIONS(147),
    [anon_sym_psrlw] = ACTIONS(147),
    [anon_sym_psllq] = ACTIONS(147),
    [anon_sym_psrlq] = ACTIONS(147),
    [anon_sym_pslldq] = ACTIONS(147),
    [anon_sym_psrldq] = ACTIONS(147),
    [anon_sym_psrad] = ACTIONS(147),
    [anon_sym_pslld] = ACTIONS(147),
    [anon_sym_push] = ACTIONS(147),
    [anon_sym_pushq] = ACTIONS(147),
    [anon_sym_pop] = ACTIONS(147),
    [anon_sym_movslq] = ACTIONS(147),
    [anon_sym_movsb] = ACTIONS(147),
    [anon_sym_rep] = ACTIONS(147),
    [anon_sym_repz] = ACTIONS(147),
    [anon_sym_repnz] = ACTIONS(147),
    [anon_sym_rex] = ACTIONS(147),
    [anon_sym_rex_DOTWB] = ACTIONS(147),
    [anon_sym_rex_DOTWRB] = ACTIONS(147),
    [anon_sym_rex_DOTRXB] = ACTIONS(147),
    [anon_sym_rex_DOTB] = ACTIONS(147),
    [anon_sym_rex_DOTWRXB] = ACTIONS(147),
    [anon_sym_rex_DOTXB] = ACTIONS(147),
    [anon_sym_rex_DOTW] = ACTIONS(147),
    [anon_sym_rex_DOTRB] = ACTIONS(147),
    [anon_sym_xgetbv] = ACTIONS(147),
    [anon_sym_fs] = ACTIONS(147),
    [anon_sym_kmovw] = ACTIONS(147),
    [anon_sym_vzeroall] = ACTIONS(147),
    [anon_sym_vzeroupper] = ACTIONS(147),
    [anon_sym_aesdec] = ACTIONS(147),
    [anon_sym_aesdeclast] = ACTIONS(147),
    [anon_sym_aesenc] = ACTIONS(147),
    [anon_sym_aesenclast] = ACTIONS(147),
    [anon_sym_vaesenc] = ACTIONS(147),
    [anon_sym_vaesenclast] = ACTIONS(147),
    [anon_sym_aeskeygenassist] = ACTIONS(147),
    [anon_sym_vpextrw] = ACTIONS(147),
    [anon_sym_vextracti128] = ACTIONS(147),
    [anon_sym_vextracti32x4] = ACTIONS(147),
    [anon_sym_pextrq] = ACTIONS(147),
    [anon_sym_pextrw] = ACTIONS(147),
    [anon_sym_pextrb] = ACTIONS(147),
    [anon_sym_vpinsrw] = ACTIONS(147),
    [anon_sym_vpinsrd] = ACTIONS(147),
    [anon_sym_vpinsrq] = ACTIONS(147),
    [anon_sym_vpinsrb] = ACTIONS(147),
    [anon_sym_vinserti128] = ACTIONS(147),
    [anon_sym_vinserti32x4] = ACTIONS(147),
    [anon_sym_vinserti64x4] = ACTIONS(147),
    [anon_sym_vinsertf128] = ACTIONS(147),
    [anon_sym_pinsrw] = ACTIONS(147),
    [anon_sym_pinsrb] = ACTIONS(147),
    [anon_sym_pinsrd] = ACTIONS(147),
    [anon_sym_vpshufb] = ACTIONS(147),
    [anon_sym_vpshufd] = ACTIONS(147),
    [anon_sym_vshufps] = ACTIONS(147),
    [anon_sym_vshufi32x4] = ACTIONS(147),
    [anon_sym_vshufi64x2] = ACTIONS(147),
    [anon_sym_shufps] = ACTIONS(147),
    [anon_sym_pshuflw] = ACTIONS(147),
    [anon_sym_pshufd] = ACTIONS(147),
    [anon_sym_pshufhw] = ACTIONS(147),
    [anon_sym_shufpd] = ACTIONS(147),
    [anon_sym_pshufb] = ACTIONS(147),
    [anon_sym_vperm2f128] = ACTIONS(147),
    [anon_sym_vperm2i128] = ACTIONS(147),
    [anon_sym_vpermd] = ACTIONS(147),
    [anon_sym_vpermq] = ACTIONS(147),
    [anon_sym_vpermt2d] = ACTIONS(147),
    [anon_sym_vpermi2d] = ACTIONS(147),
    [anon_sym_vblendps] = ACTIONS(147),
    [anon_sym_vblendvps] = ACTIONS(147),
    [anon_sym_vpblendmd] = ACTIONS(147),
    [anon_sym_vpblendd] = ACTIONS(147),
    [anon_sym_pblendw] = ACTIONS(147),
    [anon_sym_blendvps] = ACTIONS(147),
    [anon_sym_vbroadcastss] = ACTIONS(147),
    [anon_sym_vpbroadcastq] = ACTIONS(147),
    [anon_sym_vpbroadcastd] = ACTIONS(147),
    [anon_sym_vbroadcasti128] = ACTIONS(147),
    [anon_sym_vbroadcasti32x4] = ACTIONS(147),
    [anon_sym_callq] = ACTIONS(147),
    [anon_sym_ja] = ACTIONS(147),
    [anon_sym_jae] = ACTIONS(147),
    [anon_sym_jb] = ACTIONS(147),
    [anon_sym_jbe] = ACTIONS(147),
    [anon_sym_je] = ACTIONS(147),
    [anon_sym_jg] = ACTIONS(147),
    [anon_sym_jge] = ACTIONS(147),
    [anon_sym_jl] = ACTIONS(147),
    [anon_sym_jle] = ACTIONS(147),
    [anon_sym_jmp] = ACTIONS(147),
    [anon_sym_jmpq] = ACTIONS(147),
    [anon_sym_jne] = ACTIONS(147),
    [anon_sym_jno] = ACTIONS(147),
    [anon_sym_jns] = ACTIONS(147),
    [anon_sym_jo] = ACTIONS(147),
    [anon_sym_jp] = ACTIONS(147),
    [anon_sym_jrcxz] = ACTIONS(147),
    [anon_sym_js] = ACTIONS(147),
    [anon_sym_notrack] = ACTIONS(147),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym__address_token1] = ACTIONS(151),
    [aux_sym_comment_token1] = ACTIONS(151),
    [aux_sym_comment_token2] = ACTIONS(151),
    [sym__line_break] = ACTIONS(149),
    [anon_sym_adc] = ACTIONS(151),
    [anon_sym_add] = ACTIONS(151),
    [anon_sym_addq] = ACTIONS(151),
    [anon_sym_addl] = ACTIONS(151),
    [anon_sym_addss] = ACTIONS(151),
    [anon_sym_addw] = ACTIONS(151),
    [anon_sym_addb] = ACTIONS(151),
    [anon_sym_cmp] = ACTIONS(151),
    [anon_sym_cmpb] = ACTIONS(151),
    [anon_sym_cmpw] = ACTIONS(151),
    [anon_sym_cmpl] = ACTIONS(151),
    [anon_sym_cmpq] = ACTIONS(151),
    [anon_sym_comiss] = ACTIONS(151),
    [anon_sym_comisd] = ACTIONS(151),
    [anon_sym_inc] = ACTIONS(151),
    [anon_sym_incl] = ACTIONS(151),
    [anon_sym_dec] = ACTIONS(151),
    [anon_sym_div] = ACTIONS(151),
    [anon_sym_divq] = ACTIONS(151),
    [anon_sym_divl] = ACTIONS(151),
    [anon_sym_divss] = ACTIONS(151),
    [anon_sym_divsd] = ACTIONS(151),
    [anon_sym_idiv] = ACTIONS(151),
    [anon_sym_idivl] = ACTIONS(151),
    [anon_sym_sub] = ACTIONS(151),
    [anon_sym_subq] = ACTIONS(151),
    [anon_sym_subl] = ACTIONS(151),
    [anon_sym_subss] = ACTIONS(151),
    [anon_sym_subw] = ACTIONS(151),
    [anon_sym_subb] = ACTIONS(151),
    [anon_sym_subsd] = ACTIONS(151),
    [anon_sym_subpd] = ACTIONS(151),
    [anon_sym_sbb] = ACTIONS(151),
    [anon_sym_mul] = ACTIONS(151),
    [anon_sym_mulq] = ACTIONS(151),
    [anon_sym_mull] = ACTIONS(151),
    [anon_sym_mulss] = ACTIONS(151),
    [anon_sym_mulw] = ACTIONS(151),
    [anon_sym_mulb] = ACTIONS(151),
    [anon_sym_mulsd] = ACTIONS(151),
    [anon_sym_mulx] = ACTIONS(151),
    [anon_sym_imul] = ACTIONS(151),
    [anon_sym_neg] = ACTIONS(151),
    [anon_sym_negl] = ACTIONS(151),
    [anon_sym_negq] = ACTIONS(151),
    [anon_sym_fmulp] = ACTIONS(151),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(151),
    [anon_sym_pclmullqlqdq] = ACTIONS(151),
    [anon_sym_pclmullqhqdq] = ACTIONS(151),
    [anon_sym_vpclmullqhqdq] = ACTIONS(151),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(151),
    [anon_sym_pclmulhqhqdq] = ACTIONS(151),
    [anon_sym_vpclmullqlqdq] = ACTIONS(151),
    [anon_sym_adcx] = ACTIONS(151),
    [anon_sym_adox] = ACTIONS(151),
    [anon_sym_vmulsd] = ACTIONS(151),
    [anon_sym_vpaddd] = ACTIONS(151),
    [anon_sym_vpaddb] = ACTIONS(151),
    [anon_sym_vpaddq] = ACTIONS(151),
    [anon_sym_vpaddw] = ACTIONS(151),
    [anon_sym_vpcmpgtd] = ACTIONS(151),
    [anon_sym_vdivsd] = ACTIONS(151),
    [anon_sym_vpmaddubsw] = ACTIONS(151),
    [anon_sym_vpmaddwd] = ACTIONS(151),
    [anon_sym_vpmullw] = ACTIONS(151),
    [anon_sym_vpmuludq] = ACTIONS(151),
    [anon_sym_vucomisd] = ACTIONS(151),
    [anon_sym_vucomiss] = ACTIONS(151),
    [anon_sym_addsd] = ACTIONS(151),
    [anon_sym_ucomisd] = ACTIONS(151),
    [anon_sym_ucomiss] = ACTIONS(151),
    [anon_sym_maxsd] = ACTIONS(151),
    [anon_sym_minsd] = ACTIONS(151),
    [anon_sym_maxss] = ACTIONS(151),
    [anon_sym_minss] = ACTIONS(151),
    [anon_sym_vsubsd] = ACTIONS(151),
    [anon_sym_vpsubusw] = ACTIONS(151),
    [anon_sym_vpsubq] = ACTIONS(151),
    [anon_sym_vpsubd] = ACTIONS(151),
    [anon_sym_vpsubw] = ACTIONS(151),
    [anon_sym_psubd] = ACTIONS(151),
    [anon_sym_pmaddwd] = ACTIONS(151),
    [anon_sym_paddw] = ACTIONS(151),
    [anon_sym_psubusw] = ACTIONS(151),
    [anon_sym_psubusb] = ACTIONS(151),
    [anon_sym_psubb] = ACTIONS(151),
    [anon_sym_psubq] = ACTIONS(151),
    [anon_sym_paddq] = ACTIONS(151),
    [anon_sym_pmuludq] = ACTIONS(151),
    [anon_sym_pmaddubsw] = ACTIONS(151),
    [anon_sym_paddd] = ACTIONS(151),
    [anon_sym_pcmpgtd] = ACTIONS(151),
    [anon_sym_pcmpeqd] = ACTIONS(151),
    [anon_sym_pcmpeqb] = ACTIONS(151),
    [anon_sym_vpcmpltud] = ACTIONS(151),
    [anon_sym_bsf] = ACTIONS(151),
    [anon_sym_bsr] = ACTIONS(151),
    [anon_sym_bts] = ACTIONS(151),
    [anon_sym_bt] = ACTIONS(151),
    [anon_sym_btr] = ACTIONS(151),
    [anon_sym_btl] = ACTIONS(151),
    [anon_sym_setne] = ACTIONS(151),
    [anon_sym_setb] = ACTIONS(151),
    [anon_sym_sete] = ACTIONS(151),
    [anon_sym_setbe] = ACTIONS(151),
    [anon_sym_seta] = ACTIONS(151),
    [anon_sym_setge] = ACTIONS(151),
    [anon_sym_setae] = ACTIONS(151),
    [anon_sym_setl] = ACTIONS(151),
    [anon_sym_setle] = ACTIONS(151),
    [anon_sym_setg] = ACTIONS(151),
    [anon_sym_seto] = ACTIONS(151),
    [anon_sym_setnp] = ACTIONS(151),
    [anon_sym_setp] = ACTIONS(151),
    [anon_sym_setns] = ACTIONS(151),
    [anon_sym_test] = ACTIONS(151),
    [anon_sym_testb] = ACTIONS(151),
    [anon_sym_testl] = ACTIONS(151),
    [anon_sym_knotw] = ACTIONS(151),
    [anon_sym_bswap] = ACTIONS(151),
    [anon_sym_cbtw] = ACTIONS(151),
    [anon_sym_cltd] = ACTIONS(151),
    [anon_sym_cltq] = ACTIONS(151),
    [anon_sym_cmovbe] = ACTIONS(151),
    [anon_sym_cmovl] = ACTIONS(151),
    [anon_sym_cmovae] = ACTIONS(151),
    [anon_sym_cmovo] = ACTIONS(151),
    [anon_sym_cmovne] = ACTIONS(151),
    [anon_sym_cmovns] = ACTIONS(151),
    [anon_sym_cmovg] = ACTIONS(151),
    [anon_sym_cmovp] = ACTIONS(151),
    [anon_sym_cmove] = ACTIONS(151),
    [anon_sym_cmovge] = ACTIONS(151),
    [anon_sym_cmovb] = ACTIONS(151),
    [anon_sym_cmova] = ACTIONS(151),
    [anon_sym_cmovle] = ACTIONS(151),
    [anon_sym_cmovs] = ACTIONS(151),
    [anon_sym_cwtl] = ACTIONS(151),
    [anon_sym_cwtd] = ACTIONS(151),
    [anon_sym_cqto] = ACTIONS(151),
    [anon_sym_cvttsd2si] = ACTIONS(151),
    [anon_sym_cvtss2sd] = ACTIONS(151),
    [anon_sym_cvttss2si] = ACTIONS(151),
    [anon_sym_cvtsi2sd] = ACTIONS(151),
    [anon_sym_cvtsi2ss] = ACTIONS(151),
    [anon_sym_cvtsi2sdq] = ACTIONS(151),
    [anon_sym_cvtsi2sdl] = ACTIONS(151),
    [anon_sym_cvtsd2ss] = ACTIONS(151),
    [anon_sym_cvtsi2ssl] = ACTIONS(151),
    [anon_sym_vcvtusi2sd] = ACTIONS(151),
    [anon_sym_mov] = ACTIONS(151),
    [anon_sym_movw] = ACTIONS(151),
    [anon_sym_movl] = ACTIONS(151),
    [anon_sym_movq] = ACTIONS(151),
    [anon_sym_movb] = ACTIONS(151),
    [anon_sym_movabs] = ACTIONS(151),
    [anon_sym_movsbw] = ACTIONS(151),
    [anon_sym_movsbq] = ACTIONS(151),
    [anon_sym_movsbl] = ACTIONS(151),
    [anon_sym_movswl] = ACTIONS(151),
    [anon_sym_movswq] = ACTIONS(151),
    [anon_sym_movzbw] = ACTIONS(151),
    [anon_sym_movzbq] = ACTIONS(151),
    [anon_sym_movzbl] = ACTIONS(151),
    [anon_sym_movzwl] = ACTIONS(151),
    [anon_sym_movaps] = ACTIONS(151),
    [anon_sym_movhlps] = ACTIONS(151),
    [anon_sym_movss] = ACTIONS(151),
    [anon_sym_movups] = ACTIONS(151),
    [anon_sym_movsd] = ACTIONS(151),
    [anon_sym_movd] = ACTIONS(151),
    [anon_sym_movhps] = ACTIONS(151),
    [anon_sym_movdqa] = ACTIONS(151),
    [anon_sym_movbe] = ACTIONS(151),
    [anon_sym_movapd] = ACTIONS(151),
    [anon_sym_movdqu] = ACTIONS(151),
    [anon_sym_xchg] = ACTIONS(151),
    [anon_sym_fildl] = ACTIONS(151),
    [anon_sym_fldt] = ACTIONS(151),
    [anon_sym_fstpl] = ACTIONS(151),
    [anon_sym_vmovaps] = ACTIONS(151),
    [anon_sym_vmovapd] = ACTIONS(151),
    [anon_sym_vmovss] = ACTIONS(151),
    [anon_sym_vmovdqu] = ACTIONS(151),
    [anon_sym_vmovdqu64] = ACTIONS(151),
    [anon_sym_vmovdqu32] = ACTIONS(151),
    [anon_sym_vmovdqa] = ACTIONS(151),
    [anon_sym_vmovdqa32] = ACTIONS(151),
    [anon_sym_vmovdqa64] = ACTIONS(151),
    [anon_sym_vmovq] = ACTIONS(151),
    [anon_sym_vmovups] = ACTIONS(151),
    [anon_sym_vmovd] = ACTIONS(151),
    [anon_sym_vmovsd] = ACTIONS(151),
    [anon_sym_pmovmskb] = ACTIONS(151),
    [anon_sym_insb] = ACTIONS(151),
    [anon_sym_insl] = ACTIONS(151),
    [anon_sym_outsb] = ACTIONS(151),
    [anon_sym_outsl] = ACTIONS(151),
    [anon_sym_or] = ACTIONS(151),
    [anon_sym_orq] = ACTIONS(151),
    [anon_sym_orl] = ACTIONS(151),
    [anon_sym_orb] = ACTIONS(151),
    [anon_sym_orw] = ACTIONS(151),
    [anon_sym_xor] = ACTIONS(151),
    [anon_sym_xorl] = ACTIONS(151),
    [anon_sym_xorw] = ACTIONS(151),
    [anon_sym_xorps] = ACTIONS(151),
    [anon_sym_xorpd] = ACTIONS(151),
    [anon_sym_vxorps] = ACTIONS(151),
    [anon_sym_vpxord] = ACTIONS(151),
    [anon_sym_vpxor] = ACTIONS(151),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_andq] = ACTIONS(151),
    [anon_sym_andl] = ACTIONS(151),
    [anon_sym_andw] = ACTIONS(151),
    [anon_sym_andb] = ACTIONS(151),
    [anon_sym_andn] = ACTIONS(151),
    [anon_sym_andpd] = ACTIONS(151),
    [anon_sym_pand] = ACTIONS(151),
    [anon_sym_pandn] = ACTIONS(151),
    [anon_sym_andps] = ACTIONS(151),
    [anon_sym_vpand] = ACTIONS(151),
    [anon_sym_not] = ACTIONS(151),
    [anon_sym_notl] = ACTIONS(151),
    [anon_sym_notw] = ACTIONS(151),
    [anon_sym_vpor] = ACTIONS(151),
    [anon_sym_por] = ACTIONS(151),
    [anon_sym_pxor] = ACTIONS(151),
    [anon_sym_cpuid] = ACTIONS(151),
    [anon_sym_lea] = ACTIONS(151),
    [anon_sym_popcnt] = ACTIONS(151),
    [anon_sym_nop] = ACTIONS(151),
    [anon_sym_nopl] = ACTIONS(151),
    [anon_sym_nopw] = ACTIONS(151),
    [anon_sym_ud2] = ACTIONS(151),
    [anon_sym_data16] = ACTIONS(151),
    [anon_sym_sha1rnds4] = ACTIONS(151),
    [anon_sym_addr32] = ACTIONS(151),
    [anon_sym_sha1msg1] = ACTIONS(151),
    [anon_sym_sha1msg2] = ACTIONS(151),
    [anon_sym_sha1nexte] = ACTIONS(151),
    [anon_sym_endbr64] = ACTIONS(151),
    [anon_sym_gs] = ACTIONS(151),
    [anon_sym_re] = ACTIONS(151),
    [anon_sym_ss] = ACTIONS(151),
    [anon_sym_lock] = ACTIONS(151),
    [anon_sym_prefetcht1] = ACTIONS(151),
    [anon_sym_prefetcht0] = ACTIONS(151),
    [anon_sym_mfence] = ACTIONS(151),
    [anon_sym_femms] = ACTIONS(151),
    [anon_sym_tzcnt] = ACTIONS(151),
    [anon_sym_leaveq] = ACTIONS(151),
    [anon_sym_retq] = ACTIONS(151),
    [anon_sym_packuswb] = ACTIONS(151),
    [anon_sym_punpckhbw] = ACTIONS(151),
    [anon_sym_punpckhdq] = ACTIONS(151),
    [anon_sym_punpckhwd] = ACTIONS(151),
    [anon_sym_punpcklbw] = ACTIONS(151),
    [anon_sym_punpckldq] = ACTIONS(151),
    [anon_sym_punpcklwd] = ACTIONS(151),
    [anon_sym_vpunpcklwd] = ACTIONS(151),
    [anon_sym_vpunpckldq] = ACTIONS(151),
    [anon_sym_punpcklqdq] = ACTIONS(151),
    [anon_sym_punpckhqdq] = ACTIONS(151),
    [anon_sym_vpunpckhqdq] = ACTIONS(151),
    [anon_sym_vpunpckhdq] = ACTIONS(151),
    [anon_sym_vpunpcklqdq] = ACTIONS(151),
    [anon_sym_vpunpckhwd] = ACTIONS(151),
    [anon_sym_vpackusdw] = ACTIONS(151),
    [anon_sym_vpalignr] = ACTIONS(151),
    [anon_sym_palignr] = ACTIONS(151),
    [anon_sym_vunpckhpd] = ACTIONS(151),
    [anon_sym_vunpckhps] = ACTIONS(151),
    [anon_sym_vunpcklpd] = ACTIONS(151),
    [anon_sym_vunpcklps] = ACTIONS(151),
    [anon_sym_unpckhpd] = ACTIONS(151),
    [anon_sym_rol] = ACTIONS(151),
    [anon_sym_ror] = ACTIONS(151),
    [anon_sym_sar] = ACTIONS(151),
    [anon_sym_sarl] = ACTIONS(151),
    [anon_sym_sarx] = ACTIONS(151),
    [anon_sym_shl] = ACTIONS(151),
    [anon_sym_shll] = ACTIONS(151),
    [anon_sym_shld] = ACTIONS(151),
    [anon_sym_shlx] = ACTIONS(151),
    [anon_sym_shlq] = ACTIONS(151),
    [anon_sym_shr] = ACTIONS(151),
    [anon_sym_shrq] = ACTIONS(151),
    [anon_sym_shrd] = ACTIONS(151),
    [anon_sym_shrl] = ACTIONS(151),
    [anon_sym_shrx] = ACTIONS(151),
    [anon_sym_vprord] = ACTIONS(151),
    [anon_sym_vprorq] = ACTIONS(151),
    [anon_sym_rorl] = ACTIONS(151),
    [anon_sym_roll] = ACTIONS(151),
    [anon_sym_vpslldq] = ACTIONS(151),
    [anon_sym_vpslld] = ACTIONS(151),
    [anon_sym_vpsllq] = ACTIONS(151),
    [anon_sym_vpsllw] = ACTIONS(151),
    [anon_sym_vpsrldq] = ACTIONS(151),
    [anon_sym_vpsrld] = ACTIONS(151),
    [anon_sym_vpsrlq] = ACTIONS(151),
    [anon_sym_vpsrlw] = ACTIONS(151),
    [anon_sym_rorx] = ACTIONS(151),
    [anon_sym_psrld] = ACTIONS(151),
    [anon_sym_psrlw] = ACTIONS(151),
    [anon_sym_psllq] = ACTIONS(151),
    [anon_sym_psrlq] = ACTIONS(151),
    [anon_sym_pslldq] = ACTIONS(151),
    [anon_sym_psrldq] = ACTIONS(151),
    [anon_sym_psrad] = ACTIONS(151),
    [anon_sym_pslld] = ACTIONS(151),
    [anon_sym_push] = ACTIONS(151),
    [anon_sym_pushq] = ACTIONS(151),
    [anon_sym_pop] = ACTIONS(151),
    [anon_sym_movslq] = ACTIONS(151),
    [anon_sym_movsb] = ACTIONS(151),
    [anon_sym_rep] = ACTIONS(151),
    [anon_sym_repz] = ACTIONS(151),
    [anon_sym_repnz] = ACTIONS(151),
    [anon_sym_rex] = ACTIONS(151),
    [anon_sym_rex_DOTWB] = ACTIONS(151),
    [anon_sym_rex_DOTWRB] = ACTIONS(151),
    [anon_sym_rex_DOTRXB] = ACTIONS(151),
    [anon_sym_rex_DOTB] = ACTIONS(151),
    [anon_sym_rex_DOTWRXB] = ACTIONS(151),
    [anon_sym_rex_DOTXB] = ACTIONS(151),
    [anon_sym_rex_DOTW] = ACTIONS(151),
    [anon_sym_rex_DOTRB] = ACTIONS(151),
    [anon_sym_xgetbv] = ACTIONS(151),
    [anon_sym_fs] = ACTIONS(151),
    [anon_sym_kmovw] = ACTIONS(151),
    [anon_sym_vzeroall] = ACTIONS(151),
    [anon_sym_vzeroupper] = ACTIONS(151),
    [anon_sym_aesdec] = ACTIONS(151),
    [anon_sym_aesdeclast] = ACTIONS(151),
    [anon_sym_aesenc] = ACTIONS(151),
    [anon_sym_aesenclast] = ACTIONS(151),
    [anon_sym_vaesenc] = ACTIONS(151),
    [anon_sym_vaesenclast] = ACTIONS(151),
    [anon_sym_aeskeygenassist] = ACTIONS(151),
    [anon_sym_vpextrw] = ACTIONS(151),
    [anon_sym_vextracti128] = ACTIONS(151),
    [anon_sym_vextracti32x4] = ACTIONS(151),
    [anon_sym_pextrq] = ACTIONS(151),
    [anon_sym_pextrw] = ACTIONS(151),
    [anon_sym_pextrb] = ACTIONS(151),
    [anon_sym_vpinsrw] = ACTIONS(151),
    [anon_sym_vpinsrd] = ACTIONS(151),
    [anon_sym_vpinsrq] = ACTIONS(151),
    [anon_sym_vpinsrb] = ACTIONS(151),
    [anon_sym_vinserti128] = ACTIONS(151),
    [anon_sym_vinserti32x4] = ACTIONS(151),
    [anon_sym_vinserti64x4] = ACTIONS(151),
    [anon_sym_vinsertf128] = ACTIONS(151),
    [anon_sym_pinsrw] = ACTIONS(151),
    [anon_sym_pinsrb] = ACTIONS(151),
    [anon_sym_pinsrd] = ACTIONS(151),
    [anon_sym_vpshufb] = ACTIONS(151),
    [anon_sym_vpshufd] = ACTIONS(151),
    [anon_sym_vshufps] = ACTIONS(151),
    [anon_sym_vshufi32x4] = ACTIONS(151),
    [anon_sym_vshufi64x2] = ACTIONS(151),
    [anon_sym_shufps] = ACTIONS(151),
    [anon_sym_pshuflw] = ACTIONS(151),
    [anon_sym_pshufd] = ACTIONS(151),
    [anon_sym_pshufhw] = ACTIONS(151),
    [anon_sym_shufpd] = ACTIONS(151),
    [anon_sym_pshufb] = ACTIONS(151),
    [anon_sym_vperm2f128] = ACTIONS(151),
    [anon_sym_vperm2i128] = ACTIONS(151),
    [anon_sym_vpermd] = ACTIONS(151),
    [anon_sym_vpermq] = ACTIONS(151),
    [anon_sym_vpermt2d] = ACTIONS(151),
    [anon_sym_vpermi2d] = ACTIONS(151),
    [anon_sym_vblendps] = ACTIONS(151),
    [anon_sym_vblendvps] = ACTIONS(151),
    [anon_sym_vpblendmd] = ACTIONS(151),
    [anon_sym_vpblendd] = ACTIONS(151),
    [anon_sym_pblendw] = ACTIONS(151),
    [anon_sym_blendvps] = ACTIONS(151),
    [anon_sym_vbroadcastss] = ACTIONS(151),
    [anon_sym_vpbroadcastq] = ACTIONS(151),
    [anon_sym_vpbroadcastd] = ACTIONS(151),
    [anon_sym_vbroadcasti128] = ACTIONS(151),
    [anon_sym_vbroadcasti32x4] = ACTIONS(151),
    [anon_sym_callq] = ACTIONS(151),
    [anon_sym_ja] = ACTIONS(151),
    [anon_sym_jae] = ACTIONS(151),
    [anon_sym_jb] = ACTIONS(151),
    [anon_sym_jbe] = ACTIONS(151),
    [anon_sym_je] = ACTIONS(151),
    [anon_sym_jg] = ACTIONS(151),
    [anon_sym_jge] = ACTIONS(151),
    [anon_sym_jl] = ACTIONS(151),
    [anon_sym_jle] = ACTIONS(151),
    [anon_sym_jmp] = ACTIONS(151),
    [anon_sym_jmpq] = ACTIONS(151),
    [anon_sym_jne] = ACTIONS(151),
    [anon_sym_jno] = ACTIONS(151),
    [anon_sym_jns] = ACTIONS(151),
    [anon_sym_jo] = ACTIONS(151),
    [anon_sym_jp] = ACTIONS(151),
    [anon_sym_jrcxz] = ACTIONS(151),
    [anon_sym_js] = ACTIONS(151),
    [anon_sym_notrack] = ACTIONS(151),
  },
  [10] = {
    [aux_sym__machine_code_repeat1] = STATE(6),
    [sym__byte] = ACTIONS(153),
    [aux_sym_comment_token1] = ACTIONS(155),
    [aux_sym_comment_token2] = ACTIONS(155),
    [sym__line_break] = ACTIONS(157),
    [anon_sym_adc] = ACTIONS(155),
    [anon_sym_add] = ACTIONS(155),
    [anon_sym_addq] = ACTIONS(155),
    [anon_sym_addl] = ACTIONS(155),
    [anon_sym_addss] = ACTIONS(155),
    [anon_sym_addw] = ACTIONS(155),
    [anon_sym_addb] = ACTIONS(155),
    [anon_sym_cmp] = ACTIONS(155),
    [anon_sym_cmpb] = ACTIONS(155),
    [anon_sym_cmpw] = ACTIONS(155),
    [anon_sym_cmpl] = ACTIONS(155),
    [anon_sym_cmpq] = ACTIONS(155),
    [anon_sym_comiss] = ACTIONS(155),
    [anon_sym_comisd] = ACTIONS(155),
    [anon_sym_inc] = ACTIONS(155),
    [anon_sym_incl] = ACTIONS(155),
    [anon_sym_dec] = ACTIONS(155),
    [anon_sym_div] = ACTIONS(155),
    [anon_sym_divq] = ACTIONS(155),
    [anon_sym_divl] = ACTIONS(155),
    [anon_sym_divss] = ACTIONS(155),
    [anon_sym_divsd] = ACTIONS(155),
    [anon_sym_idiv] = ACTIONS(155),
    [anon_sym_idivl] = ACTIONS(155),
    [anon_sym_sub] = ACTIONS(155),
    [anon_sym_subq] = ACTIONS(155),
    [anon_sym_subl] = ACTIONS(155),
    [anon_sym_subss] = ACTIONS(155),
    [anon_sym_subw] = ACTIONS(155),
    [anon_sym_subb] = ACTIONS(155),
    [anon_sym_subsd] = ACTIONS(155),
    [anon_sym_subpd] = ACTIONS(155),
    [anon_sym_sbb] = ACTIONS(155),
    [anon_sym_mul] = ACTIONS(155),
    [anon_sym_mulq] = ACTIONS(155),
    [anon_sym_mull] = ACTIONS(155),
    [anon_sym_mulss] = ACTIONS(155),
    [anon_sym_mulw] = ACTIONS(155),
    [anon_sym_mulb] = ACTIONS(155),
    [anon_sym_mulsd] = ACTIONS(155),
    [anon_sym_mulx] = ACTIONS(155),
    [anon_sym_imul] = ACTIONS(155),
    [anon_sym_neg] = ACTIONS(155),
    [anon_sym_negl] = ACTIONS(155),
    [anon_sym_negq] = ACTIONS(155),
    [anon_sym_fmulp] = ACTIONS(155),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(155),
    [anon_sym_pclmullqlqdq] = ACTIONS(155),
    [anon_sym_pclmullqhqdq] = ACTIONS(155),
    [anon_sym_vpclmullqhqdq] = ACTIONS(155),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(155),
    [anon_sym_pclmulhqhqdq] = ACTIONS(155),
    [anon_sym_vpclmullqlqdq] = ACTIONS(155),
    [anon_sym_adcx] = ACTIONS(155),
    [anon_sym_adox] = ACTIONS(155),
    [anon_sym_vmulsd] = ACTIONS(155),
    [anon_sym_vpaddd] = ACTIONS(155),
    [anon_sym_vpaddb] = ACTIONS(155),
    [anon_sym_vpaddq] = ACTIONS(155),
    [anon_sym_vpaddw] = ACTIONS(155),
    [anon_sym_vpcmpgtd] = ACTIONS(155),
    [anon_sym_vdivsd] = ACTIONS(155),
    [anon_sym_vpmaddubsw] = ACTIONS(155),
    [anon_sym_vpmaddwd] = ACTIONS(155),
    [anon_sym_vpmullw] = ACTIONS(155),
    [anon_sym_vpmuludq] = ACTIONS(155),
    [anon_sym_vucomisd] = ACTIONS(155),
    [anon_sym_vucomiss] = ACTIONS(155),
    [anon_sym_addsd] = ACTIONS(155),
    [anon_sym_ucomisd] = ACTIONS(155),
    [anon_sym_ucomiss] = ACTIONS(155),
    [anon_sym_maxsd] = ACTIONS(155),
    [anon_sym_minsd] = ACTIONS(155),
    [anon_sym_maxss] = ACTIONS(155),
    [anon_sym_minss] = ACTIONS(155),
    [anon_sym_vsubsd] = ACTIONS(155),
    [anon_sym_vpsubusw] = ACTIONS(155),
    [anon_sym_vpsubq] = ACTIONS(155),
    [anon_sym_vpsubd] = ACTIONS(155),
    [anon_sym_vpsubw] = ACTIONS(155),
    [anon_sym_psubd] = ACTIONS(155),
    [anon_sym_pmaddwd] = ACTIONS(155),
    [anon_sym_paddw] = ACTIONS(155),
    [anon_sym_psubusw] = ACTIONS(155),
    [anon_sym_psubusb] = ACTIONS(155),
    [anon_sym_psubb] = ACTIONS(155),
    [anon_sym_psubq] = ACTIONS(155),
    [anon_sym_paddq] = ACTIONS(155),
    [anon_sym_pmuludq] = ACTIONS(155),
    [anon_sym_pmaddubsw] = ACTIONS(155),
    [anon_sym_paddd] = ACTIONS(155),
    [anon_sym_pcmpgtd] = ACTIONS(155),
    [anon_sym_pcmpeqd] = ACTIONS(155),
    [anon_sym_pcmpeqb] = ACTIONS(155),
    [anon_sym_vpcmpltud] = ACTIONS(155),
    [anon_sym_bsf] = ACTIONS(155),
    [anon_sym_bsr] = ACTIONS(155),
    [anon_sym_bts] = ACTIONS(155),
    [anon_sym_bt] = ACTIONS(155),
    [anon_sym_btr] = ACTIONS(155),
    [anon_sym_btl] = ACTIONS(155),
    [anon_sym_setne] = ACTIONS(155),
    [anon_sym_setb] = ACTIONS(155),
    [anon_sym_sete] = ACTIONS(155),
    [anon_sym_setbe] = ACTIONS(155),
    [anon_sym_seta] = ACTIONS(155),
    [anon_sym_setge] = ACTIONS(155),
    [anon_sym_setae] = ACTIONS(155),
    [anon_sym_setl] = ACTIONS(155),
    [anon_sym_setle] = ACTIONS(155),
    [anon_sym_setg] = ACTIONS(155),
    [anon_sym_seto] = ACTIONS(155),
    [anon_sym_setnp] = ACTIONS(155),
    [anon_sym_setp] = ACTIONS(155),
    [anon_sym_setns] = ACTIONS(155),
    [anon_sym_test] = ACTIONS(155),
    [anon_sym_testb] = ACTIONS(155),
    [anon_sym_testl] = ACTIONS(155),
    [anon_sym_knotw] = ACTIONS(155),
    [anon_sym_bswap] = ACTIONS(155),
    [anon_sym_cbtw] = ACTIONS(155),
    [anon_sym_cltd] = ACTIONS(155),
    [anon_sym_cltq] = ACTIONS(155),
    [anon_sym_cmovbe] = ACTIONS(155),
    [anon_sym_cmovl] = ACTIONS(155),
    [anon_sym_cmovae] = ACTIONS(155),
    [anon_sym_cmovo] = ACTIONS(155),
    [anon_sym_cmovne] = ACTIONS(155),
    [anon_sym_cmovns] = ACTIONS(155),
    [anon_sym_cmovg] = ACTIONS(155),
    [anon_sym_cmovp] = ACTIONS(155),
    [anon_sym_cmove] = ACTIONS(155),
    [anon_sym_cmovge] = ACTIONS(155),
    [anon_sym_cmovb] = ACTIONS(155),
    [anon_sym_cmova] = ACTIONS(155),
    [anon_sym_cmovle] = ACTIONS(155),
    [anon_sym_cmovs] = ACTIONS(155),
    [anon_sym_cwtl] = ACTIONS(155),
    [anon_sym_cwtd] = ACTIONS(155),
    [anon_sym_cqto] = ACTIONS(155),
    [anon_sym_cvttsd2si] = ACTIONS(155),
    [anon_sym_cvtss2sd] = ACTIONS(155),
    [anon_sym_cvttss2si] = ACTIONS(155),
    [anon_sym_cvtsi2sd] = ACTIONS(155),
    [anon_sym_cvtsi2ss] = ACTIONS(155),
    [anon_sym_cvtsi2sdq] = ACTIONS(155),
    [anon_sym_cvtsi2sdl] = ACTIONS(155),
    [anon_sym_cvtsd2ss] = ACTIONS(155),
    [anon_sym_cvtsi2ssl] = ACTIONS(155),
    [anon_sym_vcvtusi2sd] = ACTIONS(155),
    [anon_sym_mov] = ACTIONS(155),
    [anon_sym_movw] = ACTIONS(155),
    [anon_sym_movl] = ACTIONS(155),
    [anon_sym_movq] = ACTIONS(155),
    [anon_sym_movb] = ACTIONS(155),
    [anon_sym_movabs] = ACTIONS(155),
    [anon_sym_movsbw] = ACTIONS(155),
    [anon_sym_movsbq] = ACTIONS(155),
    [anon_sym_movsbl] = ACTIONS(155),
    [anon_sym_movswl] = ACTIONS(155),
    [anon_sym_movswq] = ACTIONS(155),
    [anon_sym_movzbw] = ACTIONS(155),
    [anon_sym_movzbq] = ACTIONS(155),
    [anon_sym_movzbl] = ACTIONS(155),
    [anon_sym_movzwl] = ACTIONS(155),
    [anon_sym_movaps] = ACTIONS(155),
    [anon_sym_movhlps] = ACTIONS(155),
    [anon_sym_movss] = ACTIONS(155),
    [anon_sym_movups] = ACTIONS(155),
    [anon_sym_movsd] = ACTIONS(155),
    [anon_sym_movd] = ACTIONS(155),
    [anon_sym_movhps] = ACTIONS(155),
    [anon_sym_movdqa] = ACTIONS(155),
    [anon_sym_movbe] = ACTIONS(155),
    [anon_sym_movapd] = ACTIONS(155),
    [anon_sym_movdqu] = ACTIONS(155),
    [anon_sym_xchg] = ACTIONS(155),
    [anon_sym_fildl] = ACTIONS(155),
    [anon_sym_fldt] = ACTIONS(155),
    [anon_sym_fstpl] = ACTIONS(155),
    [anon_sym_vmovaps] = ACTIONS(155),
    [anon_sym_vmovapd] = ACTIONS(155),
    [anon_sym_vmovss] = ACTIONS(155),
    [anon_sym_vmovdqu] = ACTIONS(155),
    [anon_sym_vmovdqu64] = ACTIONS(155),
    [anon_sym_vmovdqu32] = ACTIONS(155),
    [anon_sym_vmovdqa] = ACTIONS(155),
    [anon_sym_vmovdqa32] = ACTIONS(155),
    [anon_sym_vmovdqa64] = ACTIONS(155),
    [anon_sym_vmovq] = ACTIONS(155),
    [anon_sym_vmovups] = ACTIONS(155),
    [anon_sym_vmovd] = ACTIONS(155),
    [anon_sym_vmovsd] = ACTIONS(155),
    [anon_sym_pmovmskb] = ACTIONS(155),
    [anon_sym_insb] = ACTIONS(155),
    [anon_sym_insl] = ACTIONS(155),
    [anon_sym_outsb] = ACTIONS(155),
    [anon_sym_outsl] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [anon_sym_orq] = ACTIONS(155),
    [anon_sym_orl] = ACTIONS(155),
    [anon_sym_orb] = ACTIONS(155),
    [anon_sym_orw] = ACTIONS(155),
    [anon_sym_xor] = ACTIONS(155),
    [anon_sym_xorl] = ACTIONS(155),
    [anon_sym_xorw] = ACTIONS(155),
    [anon_sym_xorps] = ACTIONS(155),
    [anon_sym_xorpd] = ACTIONS(155),
    [anon_sym_vxorps] = ACTIONS(155),
    [anon_sym_vpxord] = ACTIONS(155),
    [anon_sym_vpxor] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_andq] = ACTIONS(155),
    [anon_sym_andl] = ACTIONS(155),
    [anon_sym_andw] = ACTIONS(155),
    [anon_sym_andb] = ACTIONS(155),
    [anon_sym_andn] = ACTIONS(155),
    [anon_sym_andpd] = ACTIONS(155),
    [anon_sym_pand] = ACTIONS(155),
    [anon_sym_pandn] = ACTIONS(155),
    [anon_sym_andps] = ACTIONS(155),
    [anon_sym_vpand] = ACTIONS(155),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_notl] = ACTIONS(155),
    [anon_sym_notw] = ACTIONS(155),
    [anon_sym_vpor] = ACTIONS(155),
    [anon_sym_por] = ACTIONS(155),
    [anon_sym_pxor] = ACTIONS(155),
    [anon_sym_cpuid] = ACTIONS(155),
    [anon_sym_lea] = ACTIONS(155),
    [anon_sym_popcnt] = ACTIONS(155),
    [anon_sym_nop] = ACTIONS(155),
    [anon_sym_nopl] = ACTIONS(155),
    [anon_sym_nopw] = ACTIONS(155),
    [anon_sym_ud2] = ACTIONS(155),
    [anon_sym_data16] = ACTIONS(155),
    [anon_sym_sha1rnds4] = ACTIONS(155),
    [anon_sym_addr32] = ACTIONS(155),
    [anon_sym_sha1msg1] = ACTIONS(155),
    [anon_sym_sha1msg2] = ACTIONS(155),
    [anon_sym_sha1nexte] = ACTIONS(155),
    [anon_sym_endbr64] = ACTIONS(155),
    [anon_sym_gs] = ACTIONS(155),
    [anon_sym_re] = ACTIONS(155),
    [anon_sym_ss] = ACTIONS(155),
    [anon_sym_lock] = ACTIONS(155),
    [anon_sym_prefetcht1] = ACTIONS(155),
    [anon_sym_prefetcht0] = ACTIONS(155),
    [anon_sym_mfence] = ACTIONS(155),
    [anon_sym_femms] = ACTIONS(155),
    [anon_sym_tzcnt] = ACTIONS(155),
    [anon_sym_leaveq] = ACTIONS(155),
    [anon_sym_retq] = ACTIONS(155),
    [anon_sym_packuswb] = ACTIONS(155),
    [anon_sym_punpckhbw] = ACTIONS(155),
    [anon_sym_punpckhdq] = ACTIONS(155),
    [anon_sym_punpckhwd] = ACTIONS(155),
    [anon_sym_punpcklbw] = ACTIONS(155),
    [anon_sym_punpckldq] = ACTIONS(155),
    [anon_sym_punpcklwd] = ACTIONS(155),
    [anon_sym_vpunpcklwd] = ACTIONS(155),
    [anon_sym_vpunpckldq] = ACTIONS(155),
    [anon_sym_punpcklqdq] = ACTIONS(155),
    [anon_sym_punpckhqdq] = ACTIONS(155),
    [anon_sym_vpunpckhqdq] = ACTIONS(155),
    [anon_sym_vpunpckhdq] = ACTIONS(155),
    [anon_sym_vpunpcklqdq] = ACTIONS(155),
    [anon_sym_vpunpckhwd] = ACTIONS(155),
    [anon_sym_vpackusdw] = ACTIONS(155),
    [anon_sym_vpalignr] = ACTIONS(155),
    [anon_sym_palignr] = ACTIONS(155),
    [anon_sym_vunpckhpd] = ACTIONS(155),
    [anon_sym_vunpckhps] = ACTIONS(155),
    [anon_sym_vunpcklpd] = ACTIONS(155),
    [anon_sym_vunpcklps] = ACTIONS(155),
    [anon_sym_unpckhpd] = ACTIONS(155),
    [anon_sym_rol] = ACTIONS(155),
    [anon_sym_ror] = ACTIONS(155),
    [anon_sym_sar] = ACTIONS(155),
    [anon_sym_sarl] = ACTIONS(155),
    [anon_sym_sarx] = ACTIONS(155),
    [anon_sym_shl] = ACTIONS(155),
    [anon_sym_shll] = ACTIONS(155),
    [anon_sym_shld] = ACTIONS(155),
    [anon_sym_shlx] = ACTIONS(155),
    [anon_sym_shlq] = ACTIONS(155),
    [anon_sym_shr] = ACTIONS(155),
    [anon_sym_shrq] = ACTIONS(155),
    [anon_sym_shrd] = ACTIONS(155),
    [anon_sym_shrl] = ACTIONS(155),
    [anon_sym_shrx] = ACTIONS(155),
    [anon_sym_vprord] = ACTIONS(155),
    [anon_sym_vprorq] = ACTIONS(155),
    [anon_sym_rorl] = ACTIONS(155),
    [anon_sym_roll] = ACTIONS(155),
    [anon_sym_vpslldq] = ACTIONS(155),
    [anon_sym_vpslld] = ACTIONS(155),
    [anon_sym_vpsllq] = ACTIONS(155),
    [anon_sym_vpsllw] = ACTIONS(155),
    [anon_sym_vpsrldq] = ACTIONS(155),
    [anon_sym_vpsrld] = ACTIONS(155),
    [anon_sym_vpsrlq] = ACTIONS(155),
    [anon_sym_vpsrlw] = ACTIONS(155),
    [anon_sym_rorx] = ACTIONS(155),
    [anon_sym_psrld] = ACTIONS(155),
    [anon_sym_psrlw] = ACTIONS(155),
    [anon_sym_psllq] = ACTIONS(155),
    [anon_sym_psrlq] = ACTIONS(155),
    [anon_sym_pslldq] = ACTIONS(155),
    [anon_sym_psrldq] = ACTIONS(155),
    [anon_sym_psrad] = ACTIONS(155),
    [anon_sym_pslld] = ACTIONS(155),
    [anon_sym_push] = ACTIONS(155),
    [anon_sym_pushq] = ACTIONS(155),
    [anon_sym_pop] = ACTIONS(155),
    [anon_sym_movslq] = ACTIONS(155),
    [anon_sym_movsb] = ACTIONS(155),
    [anon_sym_rep] = ACTIONS(155),
    [anon_sym_repz] = ACTIONS(155),
    [anon_sym_repnz] = ACTIONS(155),
    [anon_sym_rex] = ACTIONS(155),
    [anon_sym_rex_DOTWB] = ACTIONS(155),
    [anon_sym_rex_DOTWRB] = ACTIONS(155),
    [anon_sym_rex_DOTRXB] = ACTIONS(155),
    [anon_sym_rex_DOTB] = ACTIONS(155),
    [anon_sym_rex_DOTWRXB] = ACTIONS(155),
    [anon_sym_rex_DOTXB] = ACTIONS(155),
    [anon_sym_rex_DOTW] = ACTIONS(155),
    [anon_sym_rex_DOTRB] = ACTIONS(155),
    [anon_sym_xgetbv] = ACTIONS(155),
    [anon_sym_fs] = ACTIONS(155),
    [anon_sym_kmovw] = ACTIONS(155),
    [anon_sym_vzeroall] = ACTIONS(155),
    [anon_sym_vzeroupper] = ACTIONS(155),
    [anon_sym_aesdec] = ACTIONS(155),
    [anon_sym_aesdeclast] = ACTIONS(155),
    [anon_sym_aesenc] = ACTIONS(155),
    [anon_sym_aesenclast] = ACTIONS(155),
    [anon_sym_vaesenc] = ACTIONS(155),
    [anon_sym_vaesenclast] = ACTIONS(155),
    [anon_sym_aeskeygenassist] = ACTIONS(155),
    [anon_sym_vpextrw] = ACTIONS(155),
    [anon_sym_vextracti128] = ACTIONS(155),
    [anon_sym_vextracti32x4] = ACTIONS(155),
    [anon_sym_pextrq] = ACTIONS(155),
    [anon_sym_pextrw] = ACTIONS(155),
    [anon_sym_pextrb] = ACTIONS(155),
    [anon_sym_vpinsrw] = ACTIONS(155),
    [anon_sym_vpinsrd] = ACTIONS(155),
    [anon_sym_vpinsrq] = ACTIONS(155),
    [anon_sym_vpinsrb] = ACTIONS(155),
    [anon_sym_vinserti128] = ACTIONS(155),
    [anon_sym_vinserti32x4] = ACTIONS(155),
    [anon_sym_vinserti64x4] = ACTIONS(155),
    [anon_sym_vinsertf128] = ACTIONS(155),
    [anon_sym_pinsrw] = ACTIONS(155),
    [anon_sym_pinsrb] = ACTIONS(155),
    [anon_sym_pinsrd] = ACTIONS(155),
    [anon_sym_vpshufb] = ACTIONS(155),
    [anon_sym_vpshufd] = ACTIONS(155),
    [anon_sym_vshufps] = ACTIONS(155),
    [anon_sym_vshufi32x4] = ACTIONS(155),
    [anon_sym_vshufi64x2] = ACTIONS(155),
    [anon_sym_shufps] = ACTIONS(155),
    [anon_sym_pshuflw] = ACTIONS(155),
    [anon_sym_pshufd] = ACTIONS(155),
    [anon_sym_pshufhw] = ACTIONS(155),
    [anon_sym_shufpd] = ACTIONS(155),
    [anon_sym_pshufb] = ACTIONS(155),
    [anon_sym_vperm2f128] = ACTIONS(155),
    [anon_sym_vperm2i128] = ACTIONS(155),
    [anon_sym_vpermd] = ACTIONS(155),
    [anon_sym_vpermq] = ACTIONS(155),
    [anon_sym_vpermt2d] = ACTIONS(155),
    [anon_sym_vpermi2d] = ACTIONS(155),
    [anon_sym_vblendps] = ACTIONS(155),
    [anon_sym_vblendvps] = ACTIONS(155),
    [anon_sym_vpblendmd] = ACTIONS(155),
    [anon_sym_vpblendd] = ACTIONS(155),
    [anon_sym_pblendw] = ACTIONS(155),
    [anon_sym_blendvps] = ACTIONS(155),
    [anon_sym_vbroadcastss] = ACTIONS(155),
    [anon_sym_vpbroadcastq] = ACTIONS(155),
    [anon_sym_vpbroadcastd] = ACTIONS(155),
    [anon_sym_vbroadcasti128] = ACTIONS(155),
    [anon_sym_vbroadcasti32x4] = ACTIONS(155),
    [anon_sym_callq] = ACTIONS(155),
    [anon_sym_ja] = ACTIONS(155),
    [anon_sym_jae] = ACTIONS(155),
    [anon_sym_jb] = ACTIONS(155),
    [anon_sym_jbe] = ACTIONS(155),
    [anon_sym_je] = ACTIONS(155),
    [anon_sym_jg] = ACTIONS(155),
    [anon_sym_jge] = ACTIONS(155),
    [anon_sym_jl] = ACTIONS(155),
    [anon_sym_jle] = ACTIONS(155),
    [anon_sym_jmp] = ACTIONS(155),
    [anon_sym_jmpq] = ACTIONS(155),
    [anon_sym_jne] = ACTIONS(155),
    [anon_sym_jno] = ACTIONS(155),
    [anon_sym_jns] = ACTIONS(155),
    [anon_sym_jo] = ACTIONS(155),
    [anon_sym_jp] = ACTIONS(155),
    [anon_sym_jrcxz] = ACTIONS(155),
    [anon_sym_js] = ACTIONS(155),
    [anon_sym_notrack] = ACTIONS(155),
  },
  [11] = {
    [sym_operand] = STATE(118),
    [sym_immediateOperand] = STATE(140),
    [sym_registerOperand] = STATE(140),
    [sym_segmentRegisterOperand] = STATE(87),
    [sym_generalRegisterOperand] = STATE(86),
    [sym_generalRegister64Bits] = STATE(84),
    [sym_generalRegister32Bits] = STATE(84),
    [sym_generalRegister16Bits] = STATE(84),
    [sym_generalRegister8Bits] = STATE(84),
    [sym_memoryOperand] = STATE(140),
    [sym_memoryScalaredIndexedOperand] = STATE(135),
    [sym_memorySegmentBaseOperand] = STATE(135),
    [sym_memoryIndirectOperand] = STATE(135),
    [sym_offset] = STATE(283),
    [sym_memoryAbsoluteOperand] = STATE(135),
    [sym_someOpcode] = STATE(140),
    [sym_controlRegisterOperand] = STATE(86),
    [sym_instructionRegisterOperand] = STATE(86),
    [sym_floatRegisterOperand] = STATE(86),
    [sym_otherRegisterOperand] = STATE(86),
    [aux_sym_data_repeat1] = STATE(12),
    [aux_sym_operand_repeat1] = STATE(73),
    [aux_sym_comment_token1] = ACTIONS(159),
    [aux_sym_comment_token2] = ACTIONS(159),
    [sym__line_break] = ACTIONS(161),
    [anon_sym_f] = ACTIONS(163),
    [aux_sym_operand_token1] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_DOLLAR] = ACTIONS(169),
    [anon_sym_PERCENTss] = ACTIONS(171),
    [anon_sym_PERCENTcs] = ACTIONS(171),
    [anon_sym_PERCENTds] = ACTIONS(171),
    [anon_sym_PERCENTes] = ACTIONS(171),
    [anon_sym_PERCENTfs] = ACTIONS(171),
    [anon_sym_PERCENTgs] = ACTIONS(171),
    [anon_sym_PERCENTrax] = ACTIONS(173),
    [anon_sym_PERCENTrbx] = ACTIONS(173),
    [anon_sym_PERCENTrcx] = ACTIONS(173),
    [anon_sym_PERCENTrdx] = ACTIONS(173),
    [anon_sym_PERCENTrsi] = ACTIONS(173),
    [anon_sym_PERCENTrdi] = ACTIONS(173),
    [anon_sym_PERCENTrbp] = ACTIONS(173),
    [anon_sym_PERCENTrsp] = ACTIONS(173),
    [anon_sym_PERCENTr8] = ACTIONS(173),
    [anon_sym_PERCENTr9] = ACTIONS(173),
    [anon_sym_PERCENTr10] = ACTIONS(173),
    [anon_sym_PERCENTr11] = ACTIONS(173),
    [anon_sym_PERCENTr12] = ACTIONS(173),
    [anon_sym_PERCENTr13] = ACTIONS(173),
    [anon_sym_PERCENTr14] = ACTIONS(173),
    [anon_sym_PERCENTr15] = ACTIONS(173),
    [anon_sym_PERCENTeax] = ACTIONS(175),
    [anon_sym_PERCENTecx] = ACTIONS(175),
    [anon_sym_PERCENTedx] = ACTIONS(175),
    [anon_sym_PERCENTebx] = ACTIONS(175),
    [anon_sym_PERCENTesi] = ACTIONS(175),
    [anon_sym_PERCENTedi] = ACTIONS(175),
    [anon_sym_PERCENTebp] = ACTIONS(175),
    [anon_sym_PERCENTesp] = ACTIONS(175),
    [anon_sym_PERCENTr8d] = ACTIONS(175),
    [anon_sym_PERCENTr9d] = ACTIONS(175),
    [anon_sym_PERCENTr10d] = ACTIONS(175),
    [anon_sym_PERCENTr11d] = ACTIONS(175),
    [anon_sym_PERCENTr12d] = ACTIONS(175),
    [anon_sym_PERCENTr13d] = ACTIONS(175),
    [anon_sym_PERCENTr14d] = ACTIONS(175),
    [anon_sym_PERCENTr15d] = ACTIONS(175),
    [anon_sym_PERCENTax] = ACTIONS(177),
    [anon_sym_PERCENTcx] = ACTIONS(177),
    [anon_sym_PERCENTdx] = ACTIONS(177),
    [anon_sym_PERCENTbx] = ACTIONS(177),
    [anon_sym_PERCENTsi] = ACTIONS(177),
    [anon_sym_PERCENTdi] = ACTIONS(177),
    [anon_sym_PERCENTsp] = ACTIONS(177),
    [anon_sym_PERCENTbp] = ACTIONS(177),
    [anon_sym_PERCENTr8w] = ACTIONS(177),
    [anon_sym_PERCENTr9w] = ACTIONS(177),
    [anon_sym_PERCENTr10w] = ACTIONS(177),
    [anon_sym_PERCENTr11w] = ACTIONS(177),
    [anon_sym_PERCENTr12w] = ACTIONS(177),
    [anon_sym_PERCENTr13w] = ACTIONS(177),
    [anon_sym_PERCENTr14w] = ACTIONS(177),
    [anon_sym_PERCENTr15w] = ACTIONS(177),
    [anon_sym_PERCENTal] = ACTIONS(179),
    [anon_sym_PERCENTcl] = ACTIONS(179),
    [anon_sym_PERCENTdl] = ACTIONS(179),
    [anon_sym_PERCENTbl] = ACTIONS(179),
    [anon_sym_PERCENTsil] = ACTIONS(179),
    [anon_sym_PERCENTdil] = ACTIONS(179),
    [anon_sym_PERCENTspl] = ACTIONS(179),
    [anon_sym_PERCENTbpl] = ACTIONS(179),
    [anon_sym_PERCENTr8b] = ACTIONS(179),
    [anon_sym_PERCENTr9b] = ACTIONS(179),
    [anon_sym_PERCENTr10b] = ACTIONS(179),
    [anon_sym_PERCENTr11b] = ACTIONS(179),
    [anon_sym_PERCENTr12b] = ACTIONS(179),
    [anon_sym_PERCENTr13b] = ACTIONS(179),
    [anon_sym_PERCENTr14b] = ACTIONS(179),
    [anon_sym_PERCENTr15b] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_movsq] = ACTIONS(185),
    [anon_sym_cmpsb] = ACTIONS(185),
    [anon_sym_cmpxchg] = ACTIONS(185),
    [anon_sym_movsl] = ACTIONS(185),
    [anon_sym_PERCENTcr0] = ACTIONS(187),
    [anon_sym_PERCENTcr2] = ACTIONS(187),
    [anon_sym_PERCENTcr3] = ACTIONS(187),
    [anon_sym_PERCENTcr4] = ACTIONS(187),
    [anon_sym_PERCENTrip] = ACTIONS(189),
    [anon_sym_PERCENTeip] = ACTIONS(189),
    [anon_sym_PERCENTip] = ACTIONS(189),
    [anon_sym_PERCENTst] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(193),
  },
  [12] = {
    [sym_operand] = STATE(209),
    [sym_immediateOperand] = STATE(254),
    [sym_registerOperand] = STATE(254),
    [sym_segmentRegisterOperand] = STATE(188),
    [sym_generalRegisterOperand] = STATE(178),
    [sym_generalRegister64Bits] = STATE(177),
    [sym_generalRegister32Bits] = STATE(177),
    [sym_generalRegister16Bits] = STATE(177),
    [sym_generalRegister8Bits] = STATE(177),
    [sym_memoryOperand] = STATE(254),
    [sym_memoryScalaredIndexedOperand] = STATE(198),
    [sym_memorySegmentBaseOperand] = STATE(198),
    [sym_memoryIndirectOperand] = STATE(198),
    [sym_offset] = STATE(289),
    [sym_memoryAbsoluteOperand] = STATE(198),
    [sym_someOpcode] = STATE(254),
    [sym_controlRegisterOperand] = STATE(178),
    [sym_instructionRegisterOperand] = STATE(178),
    [sym_floatRegisterOperand] = STATE(178),
    [sym_otherRegisterOperand] = STATE(178),
    [aux_sym_data_repeat1] = STATE(12),
    [aux_sym_operand_repeat1] = STATE(104),
    [aux_sym_comment_token1] = ACTIONS(195),
    [aux_sym_comment_token2] = ACTIONS(195),
    [sym__line_break] = ACTIONS(197),
    [anon_sym_f] = ACTIONS(199),
    [aux_sym_operand_token1] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_PERCENTss] = ACTIONS(211),
    [anon_sym_PERCENTcs] = ACTIONS(211),
    [anon_sym_PERCENTds] = ACTIONS(211),
    [anon_sym_PERCENTes] = ACTIONS(211),
    [anon_sym_PERCENTfs] = ACTIONS(211),
    [anon_sym_PERCENTgs] = ACTIONS(211),
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
    [anon_sym_PERCENTeax] = ACTIONS(217),
    [anon_sym_PERCENTecx] = ACTIONS(217),
    [anon_sym_PERCENTedx] = ACTIONS(217),
    [anon_sym_PERCENTebx] = ACTIONS(217),
    [anon_sym_PERCENTesi] = ACTIONS(217),
    [anon_sym_PERCENTedi] = ACTIONS(217),
    [anon_sym_PERCENTebp] = ACTIONS(217),
    [anon_sym_PERCENTesp] = ACTIONS(217),
    [anon_sym_PERCENTr8d] = ACTIONS(217),
    [anon_sym_PERCENTr9d] = ACTIONS(217),
    [anon_sym_PERCENTr10d] = ACTIONS(217),
    [anon_sym_PERCENTr11d] = ACTIONS(217),
    [anon_sym_PERCENTr12d] = ACTIONS(217),
    [anon_sym_PERCENTr13d] = ACTIONS(217),
    [anon_sym_PERCENTr14d] = ACTIONS(217),
    [anon_sym_PERCENTr15d] = ACTIONS(217),
    [anon_sym_PERCENTax] = ACTIONS(220),
    [anon_sym_PERCENTcx] = ACTIONS(220),
    [anon_sym_PERCENTdx] = ACTIONS(220),
    [anon_sym_PERCENTbx] = ACTIONS(220),
    [anon_sym_PERCENTsi] = ACTIONS(220),
    [anon_sym_PERCENTdi] = ACTIONS(220),
    [anon_sym_PERCENTsp] = ACTIONS(220),
    [anon_sym_PERCENTbp] = ACTIONS(220),
    [anon_sym_PERCENTr8w] = ACTIONS(220),
    [anon_sym_PERCENTr9w] = ACTIONS(220),
    [anon_sym_PERCENTr10w] = ACTIONS(220),
    [anon_sym_PERCENTr11w] = ACTIONS(220),
    [anon_sym_PERCENTr12w] = ACTIONS(220),
    [anon_sym_PERCENTr13w] = ACTIONS(220),
    [anon_sym_PERCENTr14w] = ACTIONS(220),
    [anon_sym_PERCENTr15w] = ACTIONS(220),
    [anon_sym_PERCENTal] = ACTIONS(223),
    [anon_sym_PERCENTcl] = ACTIONS(223),
    [anon_sym_PERCENTdl] = ACTIONS(223),
    [anon_sym_PERCENTbl] = ACTIONS(223),
    [anon_sym_PERCENTsil] = ACTIONS(223),
    [anon_sym_PERCENTdil] = ACTIONS(223),
    [anon_sym_PERCENTspl] = ACTIONS(223),
    [anon_sym_PERCENTbpl] = ACTIONS(223),
    [anon_sym_PERCENTr8b] = ACTIONS(223),
    [anon_sym_PERCENTr9b] = ACTIONS(223),
    [anon_sym_PERCENTr10b] = ACTIONS(223),
    [anon_sym_PERCENTr11b] = ACTIONS(223),
    [anon_sym_PERCENTr12b] = ACTIONS(223),
    [anon_sym_PERCENTr13b] = ACTIONS(223),
    [anon_sym_PERCENTr14b] = ACTIONS(223),
    [anon_sym_PERCENTr15b] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_movsq] = ACTIONS(232),
    [anon_sym_cmpsb] = ACTIONS(232),
    [anon_sym_cmpxchg] = ACTIONS(232),
    [anon_sym_movsl] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(235),
    [anon_sym_PERCENTcr2] = ACTIONS(235),
    [anon_sym_PERCENTcr3] = ACTIONS(235),
    [anon_sym_PERCENTcr4] = ACTIONS(235),
    [anon_sym_PERCENTrip] = ACTIONS(238),
    [anon_sym_PERCENTeip] = ACTIONS(238),
    [anon_sym_PERCENTip] = ACTIONS(238),
    [anon_sym_PERCENTst] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(244),
  },
  [13] = {
    [sym_operand] = STATE(124),
    [sym_immediateOperand] = STATE(140),
    [sym_registerOperand] = STATE(140),
    [sym_segmentRegisterOperand] = STATE(87),
    [sym_generalRegisterOperand] = STATE(86),
    [sym_generalRegister64Bits] = STATE(84),
    [sym_generalRegister32Bits] = STATE(84),
    [sym_generalRegister16Bits] = STATE(84),
    [sym_generalRegister8Bits] = STATE(84),
    [sym_memoryOperand] = STATE(140),
    [sym_memoryScalaredIndexedOperand] = STATE(135),
    [sym_memorySegmentBaseOperand] = STATE(135),
    [sym_memoryIndirectOperand] = STATE(135),
    [sym_offset] = STATE(283),
    [sym_memoryAbsoluteOperand] = STATE(135),
    [sym_someOpcode] = STATE(140),
    [sym_controlRegisterOperand] = STATE(86),
    [sym_instructionRegisterOperand] = STATE(86),
    [sym_floatRegisterOperand] = STATE(86),
    [sym_otherRegisterOperand] = STATE(86),
    [aux_sym_data_repeat1] = STATE(11),
    [aux_sym_operand_repeat1] = STATE(73),
    [aux_sym_comment_token1] = ACTIONS(247),
    [aux_sym_comment_token2] = ACTIONS(247),
    [sym__line_break] = ACTIONS(249),
    [anon_sym_f] = ACTIONS(163),
    [aux_sym_operand_token1] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_DOLLAR] = ACTIONS(169),
    [anon_sym_PERCENTss] = ACTIONS(171),
    [anon_sym_PERCENTcs] = ACTIONS(171),
    [anon_sym_PERCENTds] = ACTIONS(171),
    [anon_sym_PERCENTes] = ACTIONS(171),
    [anon_sym_PERCENTfs] = ACTIONS(171),
    [anon_sym_PERCENTgs] = ACTIONS(171),
    [anon_sym_PERCENTrax] = ACTIONS(173),
    [anon_sym_PERCENTrbx] = ACTIONS(173),
    [anon_sym_PERCENTrcx] = ACTIONS(173),
    [anon_sym_PERCENTrdx] = ACTIONS(173),
    [anon_sym_PERCENTrsi] = ACTIONS(173),
    [anon_sym_PERCENTrdi] = ACTIONS(173),
    [anon_sym_PERCENTrbp] = ACTIONS(173),
    [anon_sym_PERCENTrsp] = ACTIONS(173),
    [anon_sym_PERCENTr8] = ACTIONS(173),
    [anon_sym_PERCENTr9] = ACTIONS(173),
    [anon_sym_PERCENTr10] = ACTIONS(173),
    [anon_sym_PERCENTr11] = ACTIONS(173),
    [anon_sym_PERCENTr12] = ACTIONS(173),
    [anon_sym_PERCENTr13] = ACTIONS(173),
    [anon_sym_PERCENTr14] = ACTIONS(173),
    [anon_sym_PERCENTr15] = ACTIONS(173),
    [anon_sym_PERCENTeax] = ACTIONS(175),
    [anon_sym_PERCENTecx] = ACTIONS(175),
    [anon_sym_PERCENTedx] = ACTIONS(175),
    [anon_sym_PERCENTebx] = ACTIONS(175),
    [anon_sym_PERCENTesi] = ACTIONS(175),
    [anon_sym_PERCENTedi] = ACTIONS(175),
    [anon_sym_PERCENTebp] = ACTIONS(175),
    [anon_sym_PERCENTesp] = ACTIONS(175),
    [anon_sym_PERCENTr8d] = ACTIONS(175),
    [anon_sym_PERCENTr9d] = ACTIONS(175),
    [anon_sym_PERCENTr10d] = ACTIONS(175),
    [anon_sym_PERCENTr11d] = ACTIONS(175),
    [anon_sym_PERCENTr12d] = ACTIONS(175),
    [anon_sym_PERCENTr13d] = ACTIONS(175),
    [anon_sym_PERCENTr14d] = ACTIONS(175),
    [anon_sym_PERCENTr15d] = ACTIONS(175),
    [anon_sym_PERCENTax] = ACTIONS(177),
    [anon_sym_PERCENTcx] = ACTIONS(177),
    [anon_sym_PERCENTdx] = ACTIONS(177),
    [anon_sym_PERCENTbx] = ACTIONS(177),
    [anon_sym_PERCENTsi] = ACTIONS(177),
    [anon_sym_PERCENTdi] = ACTIONS(177),
    [anon_sym_PERCENTsp] = ACTIONS(177),
    [anon_sym_PERCENTbp] = ACTIONS(177),
    [anon_sym_PERCENTr8w] = ACTIONS(177),
    [anon_sym_PERCENTr9w] = ACTIONS(177),
    [anon_sym_PERCENTr10w] = ACTIONS(177),
    [anon_sym_PERCENTr11w] = ACTIONS(177),
    [anon_sym_PERCENTr12w] = ACTIONS(177),
    [anon_sym_PERCENTr13w] = ACTIONS(177),
    [anon_sym_PERCENTr14w] = ACTIONS(177),
    [anon_sym_PERCENTr15w] = ACTIONS(177),
    [anon_sym_PERCENTal] = ACTIONS(179),
    [anon_sym_PERCENTcl] = ACTIONS(179),
    [anon_sym_PERCENTdl] = ACTIONS(179),
    [anon_sym_PERCENTbl] = ACTIONS(179),
    [anon_sym_PERCENTsil] = ACTIONS(179),
    [anon_sym_PERCENTdil] = ACTIONS(179),
    [anon_sym_PERCENTspl] = ACTIONS(179),
    [anon_sym_PERCENTbpl] = ACTIONS(179),
    [anon_sym_PERCENTr8b] = ACTIONS(179),
    [anon_sym_PERCENTr9b] = ACTIONS(179),
    [anon_sym_PERCENTr10b] = ACTIONS(179),
    [anon_sym_PERCENTr11b] = ACTIONS(179),
    [anon_sym_PERCENTr12b] = ACTIONS(179),
    [anon_sym_PERCENTr13b] = ACTIONS(179),
    [anon_sym_PERCENTr14b] = ACTIONS(179),
    [anon_sym_PERCENTr15b] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_movsq] = ACTIONS(185),
    [anon_sym_cmpsb] = ACTIONS(185),
    [anon_sym_cmpxchg] = ACTIONS(185),
    [anon_sym_movsl] = ACTIONS(185),
    [anon_sym_PERCENTcr0] = ACTIONS(187),
    [anon_sym_PERCENTcr2] = ACTIONS(187),
    [anon_sym_PERCENTcr3] = ACTIONS(187),
    [anon_sym_PERCENTcr4] = ACTIONS(187),
    [anon_sym_PERCENTrip] = ACTIONS(189),
    [anon_sym_PERCENTeip] = ACTIONS(189),
    [anon_sym_PERCENTip] = ACTIONS(189),
    [anon_sym_PERCENTst] = ACTIONS(191),
    [anon_sym_PERCENT] = ACTIONS(193),
  },
  [14] = {
    [sym_registerOperand] = STATE(92),
    [sym_segmentRegisterOperand] = STATE(86),
    [sym_generalRegisterOperand] = STATE(86),
    [sym_generalRegister64Bits] = STATE(84),
    [sym_generalRegister32Bits] = STATE(84),
    [sym_generalRegister16Bits] = STATE(84),
    [sym_generalRegister8Bits] = STATE(84),
    [sym_controlRegisterOperand] = STATE(86),
    [sym_instructionRegisterOperand] = STATE(86),
    [sym_floatRegisterOperand] = STATE(86),
    [sym_otherRegisterOperand] = STATE(86),
    [aux_sym_operand_repeat1] = STATE(67),
    [aux_sym_operand_token1] = ACTIONS(251),
    [anon_sym_PERCENTss] = ACTIONS(253),
    [anon_sym_PERCENTcs] = ACTIONS(253),
    [anon_sym_PERCENTds] = ACTIONS(253),
    [anon_sym_PERCENTes] = ACTIONS(171),
    [anon_sym_PERCENTfs] = ACTIONS(253),
    [anon_sym_PERCENTgs] = ACTIONS(253),
    [anon_sym_PERCENTrax] = ACTIONS(255),
    [anon_sym_PERCENTrbx] = ACTIONS(255),
    [anon_sym_PERCENTrcx] = ACTIONS(255),
    [anon_sym_PERCENTrdx] = ACTIONS(255),
    [anon_sym_PERCENTrsi] = ACTIONS(255),
    [anon_sym_PERCENTrdi] = ACTIONS(255),
    [anon_sym_PERCENTrbp] = ACTIONS(255),
    [anon_sym_PERCENTrsp] = ACTIONS(255),
    [anon_sym_PERCENTr8] = ACTIONS(173),
    [anon_sym_PERCENTr9] = ACTIONS(173),
    [anon_sym_PERCENTr10] = ACTIONS(173),
    [anon_sym_PERCENTr11] = ACTIONS(173),
    [anon_sym_PERCENTr12] = ACTIONS(173),
    [anon_sym_PERCENTr13] = ACTIONS(173),
    [anon_sym_PERCENTr14] = ACTIONS(173),
    [anon_sym_PERCENTr15] = ACTIONS(173),
    [anon_sym_PERCENTeax] = ACTIONS(257),
    [anon_sym_PERCENTecx] = ACTIONS(257),
    [anon_sym_PERCENTedx] = ACTIONS(257),
    [anon_sym_PERCENTebx] = ACTIONS(257),
    [anon_sym_PERCENTesi] = ACTIONS(257),
    [anon_sym_PERCENTedi] = ACTIONS(257),
    [anon_sym_PERCENTebp] = ACTIONS(257),
    [anon_sym_PERCENTesp] = ACTIONS(257),
    [anon_sym_PERCENTr8d] = ACTIONS(257),
    [anon_sym_PERCENTr9d] = ACTIONS(257),
    [anon_sym_PERCENTr10d] = ACTIONS(257),
    [anon_sym_PERCENTr11d] = ACTIONS(257),
    [anon_sym_PERCENTr12d] = ACTIONS(257),
    [anon_sym_PERCENTr13d] = ACTIONS(257),
    [anon_sym_PERCENTr14d] = ACTIONS(257),
    [anon_sym_PERCENTr15d] = ACTIONS(257),
    [anon_sym_PERCENTax] = ACTIONS(259),
    [anon_sym_PERCENTcx] = ACTIONS(259),
    [anon_sym_PERCENTdx] = ACTIONS(259),
    [anon_sym_PERCENTbx] = ACTIONS(259),
    [anon_sym_PERCENTsi] = ACTIONS(177),
    [anon_sym_PERCENTdi] = ACTIONS(177),
    [anon_sym_PERCENTsp] = ACTIONS(177),
    [anon_sym_PERCENTbp] = ACTIONS(177),
    [anon_sym_PERCENTr8w] = ACTIONS(259),
    [anon_sym_PERCENTr9w] = ACTIONS(259),
    [anon_sym_PERCENTr10w] = ACTIONS(259),
    [anon_sym_PERCENTr11w] = ACTIONS(259),
    [anon_sym_PERCENTr12w] = ACTIONS(259),
    [anon_sym_PERCENTr13w] = ACTIONS(259),
    [anon_sym_PERCENTr14w] = ACTIONS(259),
    [anon_sym_PERCENTr15w] = ACTIONS(259),
    [anon_sym_PERCENTal] = ACTIONS(261),
    [anon_sym_PERCENTcl] = ACTIONS(261),
    [anon_sym_PERCENTdl] = ACTIONS(261),
    [anon_sym_PERCENTbl] = ACTIONS(261),
    [anon_sym_PERCENTsil] = ACTIONS(261),
    [anon_sym_PERCENTdil] = ACTIONS(261),
    [anon_sym_PERCENTspl] = ACTIONS(261),
    [anon_sym_PERCENTbpl] = ACTIONS(261),
    [anon_sym_PERCENTr8b] = ACTIONS(261),
    [anon_sym_PERCENTr9b] = ACTIONS(261),
    [anon_sym_PERCENTr10b] = ACTIONS(261),
    [anon_sym_PERCENTr11b] = ACTIONS(261),
    [anon_sym_PERCENTr12b] = ACTIONS(261),
    [anon_sym_PERCENTr13b] = ACTIONS(261),
    [anon_sym_PERCENTr14b] = ACTIONS(261),
    [anon_sym_PERCENTr15b] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_PERCENTcr0] = ACTIONS(265),
    [anon_sym_PERCENTcr2] = ACTIONS(265),
    [anon_sym_PERCENTcr3] = ACTIONS(265),
    [anon_sym_PERCENTcr4] = ACTIONS(265),
    [anon_sym_PERCENTrip] = ACTIONS(267),
    [anon_sym_PERCENTeip] = ACTIONS(267),
    [anon_sym_PERCENTip] = ACTIONS(267),
    [anon_sym_PERCENTst] = ACTIONS(269),
    [anon_sym_PERCENT] = ACTIONS(193),
  },
  [15] = {
    [sym_registerOperand] = STATE(191),
    [sym_segmentRegisterOperand] = STATE(178),
    [sym_generalRegisterOperand] = STATE(178),
    [sym_generalRegister64Bits] = STATE(177),
    [sym_generalRegister32Bits] = STATE(177),
    [sym_generalRegister16Bits] = STATE(177),
    [sym_generalRegister8Bits] = STATE(177),
    [sym_controlRegisterOperand] = STATE(178),
    [sym_instructionRegisterOperand] = STATE(178),
    [sym_floatRegisterOperand] = STATE(178),
    [sym_otherRegisterOperand] = STATE(178),
    [aux_sym_operand_repeat1] = STATE(67),
    [aux_sym_operand_token1] = ACTIONS(251),
    [anon_sym_PERCENTss] = ACTIONS(271),
    [anon_sym_PERCENTcs] = ACTIONS(271),
    [anon_sym_PERCENTds] = ACTIONS(271),
    [anon_sym_PERCENTes] = ACTIONS(273),
    [anon_sym_PERCENTfs] = ACTIONS(271),
    [anon_sym_PERCENTgs] = ACTIONS(271),
    [anon_sym_PERCENTrax] = ACTIONS(275),
    [anon_sym_PERCENTrbx] = ACTIONS(275),
    [anon_sym_PERCENTrcx] = ACTIONS(275),
    [anon_sym_PERCENTrdx] = ACTIONS(275),
    [anon_sym_PERCENTrsi] = ACTIONS(275),
    [anon_sym_PERCENTrdi] = ACTIONS(275),
    [anon_sym_PERCENTrbp] = ACTIONS(275),
    [anon_sym_PERCENTrsp] = ACTIONS(275),
    [anon_sym_PERCENTr8] = ACTIONS(277),
    [anon_sym_PERCENTr9] = ACTIONS(277),
    [anon_sym_PERCENTr10] = ACTIONS(277),
    [anon_sym_PERCENTr11] = ACTIONS(277),
    [anon_sym_PERCENTr12] = ACTIONS(277),
    [anon_sym_PERCENTr13] = ACTIONS(277),
    [anon_sym_PERCENTr14] = ACTIONS(277),
    [anon_sym_PERCENTr15] = ACTIONS(277),
    [anon_sym_PERCENTeax] = ACTIONS(279),
    [anon_sym_PERCENTecx] = ACTIONS(279),
    [anon_sym_PERCENTedx] = ACTIONS(279),
    [anon_sym_PERCENTebx] = ACTIONS(279),
    [anon_sym_PERCENTesi] = ACTIONS(279),
    [anon_sym_PERCENTedi] = ACTIONS(279),
    [anon_sym_PERCENTebp] = ACTIONS(279),
    [anon_sym_PERCENTesp] = ACTIONS(279),
    [anon_sym_PERCENTr8d] = ACTIONS(279),
    [anon_sym_PERCENTr9d] = ACTIONS(279),
    [anon_sym_PERCENTr10d] = ACTIONS(279),
    [anon_sym_PERCENTr11d] = ACTIONS(279),
    [anon_sym_PERCENTr12d] = ACTIONS(279),
    [anon_sym_PERCENTr13d] = ACTIONS(279),
    [anon_sym_PERCENTr14d] = ACTIONS(279),
    [anon_sym_PERCENTr15d] = ACTIONS(279),
    [anon_sym_PERCENTax] = ACTIONS(281),
    [anon_sym_PERCENTcx] = ACTIONS(281),
    [anon_sym_PERCENTdx] = ACTIONS(281),
    [anon_sym_PERCENTbx] = ACTIONS(281),
    [anon_sym_PERCENTsi] = ACTIONS(283),
    [anon_sym_PERCENTdi] = ACTIONS(283),
    [anon_sym_PERCENTsp] = ACTIONS(283),
    [anon_sym_PERCENTbp] = ACTIONS(283),
    [anon_sym_PERCENTr8w] = ACTIONS(281),
    [anon_sym_PERCENTr9w] = ACTIONS(281),
    [anon_sym_PERCENTr10w] = ACTIONS(281),
    [anon_sym_PERCENTr11w] = ACTIONS(281),
    [anon_sym_PERCENTr12w] = ACTIONS(281),
    [anon_sym_PERCENTr13w] = ACTIONS(281),
    [anon_sym_PERCENTr14w] = ACTIONS(281),
    [anon_sym_PERCENTr15w] = ACTIONS(281),
    [anon_sym_PERCENTal] = ACTIONS(285),
    [anon_sym_PERCENTcl] = ACTIONS(285),
    [anon_sym_PERCENTdl] = ACTIONS(285),
    [anon_sym_PERCENTbl] = ACTIONS(285),
    [anon_sym_PERCENTsil] = ACTIONS(285),
    [anon_sym_PERCENTdil] = ACTIONS(285),
    [anon_sym_PERCENTspl] = ACTIONS(285),
    [anon_sym_PERCENTbpl] = ACTIONS(285),
    [anon_sym_PERCENTr8b] = ACTIONS(285),
    [anon_sym_PERCENTr9b] = ACTIONS(285),
    [anon_sym_PERCENTr10b] = ACTIONS(285),
    [anon_sym_PERCENTr11b] = ACTIONS(285),
    [anon_sym_PERCENTr12b] = ACTIONS(285),
    [anon_sym_PERCENTr13b] = ACTIONS(285),
    [anon_sym_PERCENTr14b] = ACTIONS(285),
    [anon_sym_PERCENTr15b] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_PERCENTcr0] = ACTIONS(289),
    [anon_sym_PERCENTcr2] = ACTIONS(289),
    [anon_sym_PERCENTcr3] = ACTIONS(289),
    [anon_sym_PERCENTcr4] = ACTIONS(289),
    [anon_sym_PERCENTrip] = ACTIONS(291),
    [anon_sym_PERCENTeip] = ACTIONS(291),
    [anon_sym_PERCENTip] = ACTIONS(291),
    [anon_sym_PERCENTst] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(295),
  },
  [16] = {
    [sym_registerOperand] = STATE(187),
    [sym_segmentRegisterOperand] = STATE(178),
    [sym_generalRegisterOperand] = STATE(178),
    [sym_generalRegister64Bits] = STATE(177),
    [sym_generalRegister32Bits] = STATE(177),
    [sym_generalRegister16Bits] = STATE(177),
    [sym_generalRegister8Bits] = STATE(177),
    [sym_controlRegisterOperand] = STATE(178),
    [sym_instructionRegisterOperand] = STATE(178),
    [sym_floatRegisterOperand] = STATE(178),
    [sym_otherRegisterOperand] = STATE(178),
    [aux_sym_operand_repeat1] = STATE(15),
    [aux_sym_operand_token1] = ACTIONS(297),
    [anon_sym_PERCENTss] = ACTIONS(271),
    [anon_sym_PERCENTcs] = ACTIONS(271),
    [anon_sym_PERCENTds] = ACTIONS(271),
    [anon_sym_PERCENTes] = ACTIONS(273),
    [anon_sym_PERCENTfs] = ACTIONS(271),
    [anon_sym_PERCENTgs] = ACTIONS(271),
    [anon_sym_PERCENTrax] = ACTIONS(275),
    [anon_sym_PERCENTrbx] = ACTIONS(275),
    [anon_sym_PERCENTrcx] = ACTIONS(275),
    [anon_sym_PERCENTrdx] = ACTIONS(275),
    [anon_sym_PERCENTrsi] = ACTIONS(275),
    [anon_sym_PERCENTrdi] = ACTIONS(275),
    [anon_sym_PERCENTrbp] = ACTIONS(275),
    [anon_sym_PERCENTrsp] = ACTIONS(275),
    [anon_sym_PERCENTr8] = ACTIONS(277),
    [anon_sym_PERCENTr9] = ACTIONS(277),
    [anon_sym_PERCENTr10] = ACTIONS(277),
    [anon_sym_PERCENTr11] = ACTIONS(277),
    [anon_sym_PERCENTr12] = ACTIONS(277),
    [anon_sym_PERCENTr13] = ACTIONS(277),
    [anon_sym_PERCENTr14] = ACTIONS(277),
    [anon_sym_PERCENTr15] = ACTIONS(277),
    [anon_sym_PERCENTeax] = ACTIONS(279),
    [anon_sym_PERCENTecx] = ACTIONS(279),
    [anon_sym_PERCENTedx] = ACTIONS(279),
    [anon_sym_PERCENTebx] = ACTIONS(279),
    [anon_sym_PERCENTesi] = ACTIONS(279),
    [anon_sym_PERCENTedi] = ACTIONS(279),
    [anon_sym_PERCENTebp] = ACTIONS(279),
    [anon_sym_PERCENTesp] = ACTIONS(279),
    [anon_sym_PERCENTr8d] = ACTIONS(279),
    [anon_sym_PERCENTr9d] = ACTIONS(279),
    [anon_sym_PERCENTr10d] = ACTIONS(279),
    [anon_sym_PERCENTr11d] = ACTIONS(279),
    [anon_sym_PERCENTr12d] = ACTIONS(279),
    [anon_sym_PERCENTr13d] = ACTIONS(279),
    [anon_sym_PERCENTr14d] = ACTIONS(279),
    [anon_sym_PERCENTr15d] = ACTIONS(279),
    [anon_sym_PERCENTax] = ACTIONS(281),
    [anon_sym_PERCENTcx] = ACTIONS(281),
    [anon_sym_PERCENTdx] = ACTIONS(281),
    [anon_sym_PERCENTbx] = ACTIONS(281),
    [anon_sym_PERCENTsi] = ACTIONS(283),
    [anon_sym_PERCENTdi] = ACTIONS(283),
    [anon_sym_PERCENTsp] = ACTIONS(283),
    [anon_sym_PERCENTbp] = ACTIONS(283),
    [anon_sym_PERCENTr8w] = ACTIONS(281),
    [anon_sym_PERCENTr9w] = ACTIONS(281),
    [anon_sym_PERCENTr10w] = ACTIONS(281),
    [anon_sym_PERCENTr11w] = ACTIONS(281),
    [anon_sym_PERCENTr12w] = ACTIONS(281),
    [anon_sym_PERCENTr13w] = ACTIONS(281),
    [anon_sym_PERCENTr14w] = ACTIONS(281),
    [anon_sym_PERCENTr15w] = ACTIONS(281),
    [anon_sym_PERCENTal] = ACTIONS(285),
    [anon_sym_PERCENTcl] = ACTIONS(285),
    [anon_sym_PERCENTdl] = ACTIONS(285),
    [anon_sym_PERCENTbl] = ACTIONS(285),
    [anon_sym_PERCENTsil] = ACTIONS(285),
    [anon_sym_PERCENTdil] = ACTIONS(285),
    [anon_sym_PERCENTspl] = ACTIONS(285),
    [anon_sym_PERCENTbpl] = ACTIONS(285),
    [anon_sym_PERCENTr8b] = ACTIONS(285),
    [anon_sym_PERCENTr9b] = ACTIONS(285),
    [anon_sym_PERCENTr10b] = ACTIONS(285),
    [anon_sym_PERCENTr11b] = ACTIONS(285),
    [anon_sym_PERCENTr12b] = ACTIONS(285),
    [anon_sym_PERCENTr13b] = ACTIONS(285),
    [anon_sym_PERCENTr14b] = ACTIONS(285),
    [anon_sym_PERCENTr15b] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_PERCENTcr0] = ACTIONS(289),
    [anon_sym_PERCENTcr2] = ACTIONS(289),
    [anon_sym_PERCENTcr3] = ACTIONS(289),
    [anon_sym_PERCENTcr4] = ACTIONS(289),
    [anon_sym_PERCENTrip] = ACTIONS(291),
    [anon_sym_PERCENTeip] = ACTIONS(291),
    [anon_sym_PERCENTip] = ACTIONS(291),
    [anon_sym_PERCENTst] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(295),
  },
  [17] = {
    [sym_registerOperand] = STATE(82),
    [sym_segmentRegisterOperand] = STATE(86),
    [sym_generalRegisterOperand] = STATE(86),
    [sym_generalRegister64Bits] = STATE(84),
    [sym_generalRegister32Bits] = STATE(84),
    [sym_generalRegister16Bits] = STATE(84),
    [sym_generalRegister8Bits] = STATE(84),
    [sym_controlRegisterOperand] = STATE(86),
    [sym_instructionRegisterOperand] = STATE(86),
    [sym_floatRegisterOperand] = STATE(86),
    [sym_otherRegisterOperand] = STATE(86),
    [aux_sym_operand_repeat1] = STATE(14),
    [aux_sym_operand_token1] = ACTIONS(301),
    [anon_sym_PERCENTss] = ACTIONS(253),
    [anon_sym_PERCENTcs] = ACTIONS(253),
    [anon_sym_PERCENTds] = ACTIONS(253),
    [anon_sym_PERCENTes] = ACTIONS(171),
    [anon_sym_PERCENTfs] = ACTIONS(253),
    [anon_sym_PERCENTgs] = ACTIONS(253),
    [anon_sym_PERCENTrax] = ACTIONS(255),
    [anon_sym_PERCENTrbx] = ACTIONS(255),
    [anon_sym_PERCENTrcx] = ACTIONS(255),
    [anon_sym_PERCENTrdx] = ACTIONS(255),
    [anon_sym_PERCENTrsi] = ACTIONS(255),
    [anon_sym_PERCENTrdi] = ACTIONS(255),
    [anon_sym_PERCENTrbp] = ACTIONS(255),
    [anon_sym_PERCENTrsp] = ACTIONS(255),
    [anon_sym_PERCENTr8] = ACTIONS(173),
    [anon_sym_PERCENTr9] = ACTIONS(173),
    [anon_sym_PERCENTr10] = ACTIONS(173),
    [anon_sym_PERCENTr11] = ACTIONS(173),
    [anon_sym_PERCENTr12] = ACTIONS(173),
    [anon_sym_PERCENTr13] = ACTIONS(173),
    [anon_sym_PERCENTr14] = ACTIONS(173),
    [anon_sym_PERCENTr15] = ACTIONS(173),
    [anon_sym_PERCENTeax] = ACTIONS(257),
    [anon_sym_PERCENTecx] = ACTIONS(257),
    [anon_sym_PERCENTedx] = ACTIONS(257),
    [anon_sym_PERCENTebx] = ACTIONS(257),
    [anon_sym_PERCENTesi] = ACTIONS(257),
    [anon_sym_PERCENTedi] = ACTIONS(257),
    [anon_sym_PERCENTebp] = ACTIONS(257),
    [anon_sym_PERCENTesp] = ACTIONS(257),
    [anon_sym_PERCENTr8d] = ACTIONS(257),
    [anon_sym_PERCENTr9d] = ACTIONS(257),
    [anon_sym_PERCENTr10d] = ACTIONS(257),
    [anon_sym_PERCENTr11d] = ACTIONS(257),
    [anon_sym_PERCENTr12d] = ACTIONS(257),
    [anon_sym_PERCENTr13d] = ACTIONS(257),
    [anon_sym_PERCENTr14d] = ACTIONS(257),
    [anon_sym_PERCENTr15d] = ACTIONS(257),
    [anon_sym_PERCENTax] = ACTIONS(259),
    [anon_sym_PERCENTcx] = ACTIONS(259),
    [anon_sym_PERCENTdx] = ACTIONS(259),
    [anon_sym_PERCENTbx] = ACTIONS(259),
    [anon_sym_PERCENTsi] = ACTIONS(177),
    [anon_sym_PERCENTdi] = ACTIONS(177),
    [anon_sym_PERCENTsp] = ACTIONS(177),
    [anon_sym_PERCENTbp] = ACTIONS(177),
    [anon_sym_PERCENTr8w] = ACTIONS(259),
    [anon_sym_PERCENTr9w] = ACTIONS(259),
    [anon_sym_PERCENTr10w] = ACTIONS(259),
    [anon_sym_PERCENTr11w] = ACTIONS(259),
    [anon_sym_PERCENTr12w] = ACTIONS(259),
    [anon_sym_PERCENTr13w] = ACTIONS(259),
    [anon_sym_PERCENTr14w] = ACTIONS(259),
    [anon_sym_PERCENTr15w] = ACTIONS(259),
    [anon_sym_PERCENTal] = ACTIONS(261),
    [anon_sym_PERCENTcl] = ACTIONS(261),
    [anon_sym_PERCENTdl] = ACTIONS(261),
    [anon_sym_PERCENTbl] = ACTIONS(261),
    [anon_sym_PERCENTsil] = ACTIONS(261),
    [anon_sym_PERCENTdil] = ACTIONS(261),
    [anon_sym_PERCENTspl] = ACTIONS(261),
    [anon_sym_PERCENTbpl] = ACTIONS(261),
    [anon_sym_PERCENTr8b] = ACTIONS(261),
    [anon_sym_PERCENTr9b] = ACTIONS(261),
    [anon_sym_PERCENTr10b] = ACTIONS(261),
    [anon_sym_PERCENTr11b] = ACTIONS(261),
    [anon_sym_PERCENTr12b] = ACTIONS(261),
    [anon_sym_PERCENTr13b] = ACTIONS(261),
    [anon_sym_PERCENTr14b] = ACTIONS(261),
    [anon_sym_PERCENTr15b] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_PERCENTcr0] = ACTIONS(265),
    [anon_sym_PERCENTcr2] = ACTIONS(265),
    [anon_sym_PERCENTcr3] = ACTIONS(265),
    [anon_sym_PERCENTcr4] = ACTIONS(265),
    [anon_sym_PERCENTrip] = ACTIONS(267),
    [anon_sym_PERCENTeip] = ACTIONS(267),
    [anon_sym_PERCENTip] = ACTIONS(267),
    [anon_sym_PERCENTst] = ACTIONS(269),
    [anon_sym_PERCENT] = ACTIONS(193),
  },
  [18] = {
    [aux_sym_comment_token1] = ACTIONS(305),
    [aux_sym_comment_token2] = ACTIONS(305),
    [sym__line_break] = ACTIONS(307),
    [anon_sym_f] = ACTIONS(305),
    [aux_sym_operand_token1] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [anon_sym_PERCENTss] = ACTIONS(305),
    [anon_sym_PERCENTcs] = ACTIONS(305),
    [anon_sym_PERCENTds] = ACTIONS(305),
    [anon_sym_PERCENTes] = ACTIONS(305),
    [anon_sym_PERCENTfs] = ACTIONS(305),
    [anon_sym_PERCENTgs] = ACTIONS(305),
    [anon_sym_PERCENTrax] = ACTIONS(305),
    [anon_sym_PERCENTrbx] = ACTIONS(305),
    [anon_sym_PERCENTrcx] = ACTIONS(305),
    [anon_sym_PERCENTrdx] = ACTIONS(305),
    [anon_sym_PERCENTrsi] = ACTIONS(305),
    [anon_sym_PERCENTrdi] = ACTIONS(305),
    [anon_sym_PERCENTrbp] = ACTIONS(305),
    [anon_sym_PERCENTrsp] = ACTIONS(305),
    [anon_sym_PERCENTr8] = ACTIONS(305),
    [anon_sym_PERCENTr9] = ACTIONS(305),
    [anon_sym_PERCENTr10] = ACTIONS(305),
    [anon_sym_PERCENTr11] = ACTIONS(305),
    [anon_sym_PERCENTr12] = ACTIONS(305),
    [anon_sym_PERCENTr13] = ACTIONS(305),
    [anon_sym_PERCENTr14] = ACTIONS(305),
    [anon_sym_PERCENTr15] = ACTIONS(305),
    [anon_sym_PERCENTeax] = ACTIONS(305),
    [anon_sym_PERCENTecx] = ACTIONS(305),
    [anon_sym_PERCENTedx] = ACTIONS(305),
    [anon_sym_PERCENTebx] = ACTIONS(305),
    [anon_sym_PERCENTesi] = ACTIONS(305),
    [anon_sym_PERCENTedi] = ACTIONS(305),
    [anon_sym_PERCENTebp] = ACTIONS(305),
    [anon_sym_PERCENTesp] = ACTIONS(305),
    [anon_sym_PERCENTr8d] = ACTIONS(305),
    [anon_sym_PERCENTr9d] = ACTIONS(305),
    [anon_sym_PERCENTr10d] = ACTIONS(305),
    [anon_sym_PERCENTr11d] = ACTIONS(305),
    [anon_sym_PERCENTr12d] = ACTIONS(305),
    [anon_sym_PERCENTr13d] = ACTIONS(305),
    [anon_sym_PERCENTr14d] = ACTIONS(305),
    [anon_sym_PERCENTr15d] = ACTIONS(305),
    [anon_sym_PERCENTax] = ACTIONS(305),
    [anon_sym_PERCENTcx] = ACTIONS(305),
    [anon_sym_PERCENTdx] = ACTIONS(305),
    [anon_sym_PERCENTbx] = ACTIONS(305),
    [anon_sym_PERCENTsi] = ACTIONS(305),
    [anon_sym_PERCENTdi] = ACTIONS(305),
    [anon_sym_PERCENTsp] = ACTIONS(305),
    [anon_sym_PERCENTbp] = ACTIONS(305),
    [anon_sym_PERCENTr8w] = ACTIONS(305),
    [anon_sym_PERCENTr9w] = ACTIONS(305),
    [anon_sym_PERCENTr10w] = ACTIONS(305),
    [anon_sym_PERCENTr11w] = ACTIONS(305),
    [anon_sym_PERCENTr12w] = ACTIONS(305),
    [anon_sym_PERCENTr13w] = ACTIONS(305),
    [anon_sym_PERCENTr14w] = ACTIONS(305),
    [anon_sym_PERCENTr15w] = ACTIONS(305),
    [anon_sym_PERCENTal] = ACTIONS(305),
    [anon_sym_PERCENTcl] = ACTIONS(305),
    [anon_sym_PERCENTdl] = ACTIONS(305),
    [anon_sym_PERCENTbl] = ACTIONS(305),
    [anon_sym_PERCENTsil] = ACTIONS(305),
    [anon_sym_PERCENTdil] = ACTIONS(305),
    [anon_sym_PERCENTspl] = ACTIONS(305),
    [anon_sym_PERCENTbpl] = ACTIONS(305),
    [anon_sym_PERCENTr8b] = ACTIONS(305),
    [anon_sym_PERCENTr9b] = ACTIONS(305),
    [anon_sym_PERCENTr10b] = ACTIONS(305),
    [anon_sym_PERCENTr11b] = ACTIONS(305),
    [anon_sym_PERCENTr12b] = ACTIONS(305),
    [anon_sym_PERCENTr13b] = ACTIONS(305),
    [anon_sym_PERCENTr14b] = ACTIONS(305),
    [anon_sym_PERCENTr15b] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_movsq] = ACTIONS(305),
    [anon_sym_cmpsb] = ACTIONS(305),
    [anon_sym_cmpxchg] = ACTIONS(305),
    [anon_sym_movsl] = ACTIONS(305),
    [anon_sym_PERCENTcr0] = ACTIONS(305),
    [anon_sym_PERCENTcr2] = ACTIONS(305),
    [anon_sym_PERCENTcr3] = ACTIONS(305),
    [anon_sym_PERCENTcr4] = ACTIONS(305),
    [anon_sym_PERCENTrip] = ACTIONS(305),
    [anon_sym_PERCENTeip] = ACTIONS(305),
    [anon_sym_PERCENTip] = ACTIONS(305),
    [anon_sym_PERCENTst] = ACTIONS(305),
    [anon_sym_PERCENT] = ACTIONS(305),
  },
  [19] = {
    [sym_registerOperand] = STATE(202),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(288),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(309),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [20] = {
    [aux_sym_comment_token1] = ACTIONS(335),
    [aux_sym_comment_token2] = ACTIONS(335),
    [sym__line_break] = ACTIONS(337),
    [anon_sym_f] = ACTIONS(335),
    [aux_sym_operand_token1] = ACTIONS(335),
    [anon_sym_LT] = ACTIONS(335),
    [anon_sym_DOLLAR] = ACTIONS(335),
    [anon_sym_PERCENTss] = ACTIONS(335),
    [anon_sym_PERCENTcs] = ACTIONS(335),
    [anon_sym_PERCENTds] = ACTIONS(335),
    [anon_sym_PERCENTes] = ACTIONS(335),
    [anon_sym_PERCENTfs] = ACTIONS(335),
    [anon_sym_PERCENTgs] = ACTIONS(335),
    [anon_sym_PERCENTrax] = ACTIONS(335),
    [anon_sym_PERCENTrbx] = ACTIONS(335),
    [anon_sym_PERCENTrcx] = ACTIONS(335),
    [anon_sym_PERCENTrdx] = ACTIONS(335),
    [anon_sym_PERCENTrsi] = ACTIONS(335),
    [anon_sym_PERCENTrdi] = ACTIONS(335),
    [anon_sym_PERCENTrbp] = ACTIONS(335),
    [anon_sym_PERCENTrsp] = ACTIONS(335),
    [anon_sym_PERCENTr8] = ACTIONS(335),
    [anon_sym_PERCENTr9] = ACTIONS(335),
    [anon_sym_PERCENTr10] = ACTIONS(335),
    [anon_sym_PERCENTr11] = ACTIONS(335),
    [anon_sym_PERCENTr12] = ACTIONS(335),
    [anon_sym_PERCENTr13] = ACTIONS(335),
    [anon_sym_PERCENTr14] = ACTIONS(335),
    [anon_sym_PERCENTr15] = ACTIONS(335),
    [anon_sym_PERCENTeax] = ACTIONS(335),
    [anon_sym_PERCENTecx] = ACTIONS(335),
    [anon_sym_PERCENTedx] = ACTIONS(335),
    [anon_sym_PERCENTebx] = ACTIONS(335),
    [anon_sym_PERCENTesi] = ACTIONS(335),
    [anon_sym_PERCENTedi] = ACTIONS(335),
    [anon_sym_PERCENTebp] = ACTIONS(335),
    [anon_sym_PERCENTesp] = ACTIONS(335),
    [anon_sym_PERCENTr8d] = ACTIONS(335),
    [anon_sym_PERCENTr9d] = ACTIONS(335),
    [anon_sym_PERCENTr10d] = ACTIONS(335),
    [anon_sym_PERCENTr11d] = ACTIONS(335),
    [anon_sym_PERCENTr12d] = ACTIONS(335),
    [anon_sym_PERCENTr13d] = ACTIONS(335),
    [anon_sym_PERCENTr14d] = ACTIONS(335),
    [anon_sym_PERCENTr15d] = ACTIONS(335),
    [anon_sym_PERCENTax] = ACTIONS(335),
    [anon_sym_PERCENTcx] = ACTIONS(335),
    [anon_sym_PERCENTdx] = ACTIONS(335),
    [anon_sym_PERCENTbx] = ACTIONS(335),
    [anon_sym_PERCENTsi] = ACTIONS(335),
    [anon_sym_PERCENTdi] = ACTIONS(335),
    [anon_sym_PERCENTsp] = ACTIONS(335),
    [anon_sym_PERCENTbp] = ACTIONS(335),
    [anon_sym_PERCENTr8w] = ACTIONS(335),
    [anon_sym_PERCENTr9w] = ACTIONS(335),
    [anon_sym_PERCENTr10w] = ACTIONS(335),
    [anon_sym_PERCENTr11w] = ACTIONS(335),
    [anon_sym_PERCENTr12w] = ACTIONS(335),
    [anon_sym_PERCENTr13w] = ACTIONS(335),
    [anon_sym_PERCENTr14w] = ACTIONS(335),
    [anon_sym_PERCENTr15w] = ACTIONS(335),
    [anon_sym_PERCENTal] = ACTIONS(335),
    [anon_sym_PERCENTcl] = ACTIONS(335),
    [anon_sym_PERCENTdl] = ACTIONS(335),
    [anon_sym_PERCENTbl] = ACTIONS(335),
    [anon_sym_PERCENTsil] = ACTIONS(335),
    [anon_sym_PERCENTdil] = ACTIONS(335),
    [anon_sym_PERCENTspl] = ACTIONS(335),
    [anon_sym_PERCENTbpl] = ACTIONS(335),
    [anon_sym_PERCENTr8b] = ACTIONS(335),
    [anon_sym_PERCENTr9b] = ACTIONS(335),
    [anon_sym_PERCENTr10b] = ACTIONS(335),
    [anon_sym_PERCENTr11b] = ACTIONS(335),
    [anon_sym_PERCENTr12b] = ACTIONS(335),
    [anon_sym_PERCENTr13b] = ACTIONS(335),
    [anon_sym_PERCENTr14b] = ACTIONS(335),
    [anon_sym_PERCENTr15b] = ACTIONS(335),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_movsq] = ACTIONS(335),
    [anon_sym_cmpsb] = ACTIONS(335),
    [anon_sym_cmpxchg] = ACTIONS(335),
    [anon_sym_movsl] = ACTIONS(335),
    [anon_sym_PERCENTcr0] = ACTIONS(335),
    [anon_sym_PERCENTcr2] = ACTIONS(335),
    [anon_sym_PERCENTcr3] = ACTIONS(335),
    [anon_sym_PERCENTcr4] = ACTIONS(335),
    [anon_sym_PERCENTrip] = ACTIONS(335),
    [anon_sym_PERCENTeip] = ACTIONS(335),
    [anon_sym_PERCENTip] = ACTIONS(335),
    [anon_sym_PERCENTst] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(335),
  },
  [21] = {
    [aux_sym_comment_token1] = ACTIONS(339),
    [aux_sym_comment_token2] = ACTIONS(339),
    [sym__line_break] = ACTIONS(341),
    [anon_sym_f] = ACTIONS(339),
    [aux_sym_operand_token1] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(339),
    [anon_sym_PERCENTss] = ACTIONS(339),
    [anon_sym_PERCENTcs] = ACTIONS(339),
    [anon_sym_PERCENTds] = ACTIONS(339),
    [anon_sym_PERCENTes] = ACTIONS(339),
    [anon_sym_PERCENTfs] = ACTIONS(339),
    [anon_sym_PERCENTgs] = ACTIONS(339),
    [anon_sym_PERCENTrax] = ACTIONS(339),
    [anon_sym_PERCENTrbx] = ACTIONS(339),
    [anon_sym_PERCENTrcx] = ACTIONS(339),
    [anon_sym_PERCENTrdx] = ACTIONS(339),
    [anon_sym_PERCENTrsi] = ACTIONS(339),
    [anon_sym_PERCENTrdi] = ACTIONS(339),
    [anon_sym_PERCENTrbp] = ACTIONS(339),
    [anon_sym_PERCENTrsp] = ACTIONS(339),
    [anon_sym_PERCENTr8] = ACTIONS(339),
    [anon_sym_PERCENTr9] = ACTIONS(339),
    [anon_sym_PERCENTr10] = ACTIONS(339),
    [anon_sym_PERCENTr11] = ACTIONS(339),
    [anon_sym_PERCENTr12] = ACTIONS(339),
    [anon_sym_PERCENTr13] = ACTIONS(339),
    [anon_sym_PERCENTr14] = ACTIONS(339),
    [anon_sym_PERCENTr15] = ACTIONS(339),
    [anon_sym_PERCENTeax] = ACTIONS(339),
    [anon_sym_PERCENTecx] = ACTIONS(339),
    [anon_sym_PERCENTedx] = ACTIONS(339),
    [anon_sym_PERCENTebx] = ACTIONS(339),
    [anon_sym_PERCENTesi] = ACTIONS(339),
    [anon_sym_PERCENTedi] = ACTIONS(339),
    [anon_sym_PERCENTebp] = ACTIONS(339),
    [anon_sym_PERCENTesp] = ACTIONS(339),
    [anon_sym_PERCENTr8d] = ACTIONS(339),
    [anon_sym_PERCENTr9d] = ACTIONS(339),
    [anon_sym_PERCENTr10d] = ACTIONS(339),
    [anon_sym_PERCENTr11d] = ACTIONS(339),
    [anon_sym_PERCENTr12d] = ACTIONS(339),
    [anon_sym_PERCENTr13d] = ACTIONS(339),
    [anon_sym_PERCENTr14d] = ACTIONS(339),
    [anon_sym_PERCENTr15d] = ACTIONS(339),
    [anon_sym_PERCENTax] = ACTIONS(339),
    [anon_sym_PERCENTcx] = ACTIONS(339),
    [anon_sym_PERCENTdx] = ACTIONS(339),
    [anon_sym_PERCENTbx] = ACTIONS(339),
    [anon_sym_PERCENTsi] = ACTIONS(339),
    [anon_sym_PERCENTdi] = ACTIONS(339),
    [anon_sym_PERCENTsp] = ACTIONS(339),
    [anon_sym_PERCENTbp] = ACTIONS(339),
    [anon_sym_PERCENTr8w] = ACTIONS(339),
    [anon_sym_PERCENTr9w] = ACTIONS(339),
    [anon_sym_PERCENTr10w] = ACTIONS(339),
    [anon_sym_PERCENTr11w] = ACTIONS(339),
    [anon_sym_PERCENTr12w] = ACTIONS(339),
    [anon_sym_PERCENTr13w] = ACTIONS(339),
    [anon_sym_PERCENTr14w] = ACTIONS(339),
    [anon_sym_PERCENTr15w] = ACTIONS(339),
    [anon_sym_PERCENTal] = ACTIONS(339),
    [anon_sym_PERCENTcl] = ACTIONS(339),
    [anon_sym_PERCENTdl] = ACTIONS(339),
    [anon_sym_PERCENTbl] = ACTIONS(339),
    [anon_sym_PERCENTsil] = ACTIONS(339),
    [anon_sym_PERCENTdil] = ACTIONS(339),
    [anon_sym_PERCENTspl] = ACTIONS(339),
    [anon_sym_PERCENTbpl] = ACTIONS(339),
    [anon_sym_PERCENTr8b] = ACTIONS(339),
    [anon_sym_PERCENTr9b] = ACTIONS(339),
    [anon_sym_PERCENTr10b] = ACTIONS(339),
    [anon_sym_PERCENTr11b] = ACTIONS(339),
    [anon_sym_PERCENTr12b] = ACTIONS(339),
    [anon_sym_PERCENTr13b] = ACTIONS(339),
    [anon_sym_PERCENTr14b] = ACTIONS(339),
    [anon_sym_PERCENTr15b] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_movsq] = ACTIONS(339),
    [anon_sym_cmpsb] = ACTIONS(339),
    [anon_sym_cmpxchg] = ACTIONS(339),
    [anon_sym_movsl] = ACTIONS(339),
    [anon_sym_PERCENTcr0] = ACTIONS(339),
    [anon_sym_PERCENTcr2] = ACTIONS(339),
    [anon_sym_PERCENTcr3] = ACTIONS(339),
    [anon_sym_PERCENTcr4] = ACTIONS(339),
    [anon_sym_PERCENTrip] = ACTIONS(339),
    [anon_sym_PERCENTeip] = ACTIONS(339),
    [anon_sym_PERCENTip] = ACTIONS(339),
    [anon_sym_PERCENTst] = ACTIONS(339),
    [anon_sym_PERCENT] = ACTIONS(339),
  },
  [22] = {
    [aux_sym_comment_token1] = ACTIONS(343),
    [aux_sym_comment_token2] = ACTIONS(343),
    [sym__line_break] = ACTIONS(345),
    [anon_sym_f] = ACTIONS(343),
    [aux_sym_operand_token1] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [anon_sym_PERCENTss] = ACTIONS(343),
    [anon_sym_PERCENTcs] = ACTIONS(343),
    [anon_sym_PERCENTds] = ACTIONS(343),
    [anon_sym_PERCENTes] = ACTIONS(343),
    [anon_sym_PERCENTfs] = ACTIONS(343),
    [anon_sym_PERCENTgs] = ACTIONS(343),
    [anon_sym_PERCENTrax] = ACTIONS(343),
    [anon_sym_PERCENTrbx] = ACTIONS(343),
    [anon_sym_PERCENTrcx] = ACTIONS(343),
    [anon_sym_PERCENTrdx] = ACTIONS(343),
    [anon_sym_PERCENTrsi] = ACTIONS(343),
    [anon_sym_PERCENTrdi] = ACTIONS(343),
    [anon_sym_PERCENTrbp] = ACTIONS(343),
    [anon_sym_PERCENTrsp] = ACTIONS(343),
    [anon_sym_PERCENTr8] = ACTIONS(343),
    [anon_sym_PERCENTr9] = ACTIONS(343),
    [anon_sym_PERCENTr10] = ACTIONS(343),
    [anon_sym_PERCENTr11] = ACTIONS(343),
    [anon_sym_PERCENTr12] = ACTIONS(343),
    [anon_sym_PERCENTr13] = ACTIONS(343),
    [anon_sym_PERCENTr14] = ACTIONS(343),
    [anon_sym_PERCENTr15] = ACTIONS(343),
    [anon_sym_PERCENTeax] = ACTIONS(343),
    [anon_sym_PERCENTecx] = ACTIONS(343),
    [anon_sym_PERCENTedx] = ACTIONS(343),
    [anon_sym_PERCENTebx] = ACTIONS(343),
    [anon_sym_PERCENTesi] = ACTIONS(343),
    [anon_sym_PERCENTedi] = ACTIONS(343),
    [anon_sym_PERCENTebp] = ACTIONS(343),
    [anon_sym_PERCENTesp] = ACTIONS(343),
    [anon_sym_PERCENTr8d] = ACTIONS(343),
    [anon_sym_PERCENTr9d] = ACTIONS(343),
    [anon_sym_PERCENTr10d] = ACTIONS(343),
    [anon_sym_PERCENTr11d] = ACTIONS(343),
    [anon_sym_PERCENTr12d] = ACTIONS(343),
    [anon_sym_PERCENTr13d] = ACTIONS(343),
    [anon_sym_PERCENTr14d] = ACTIONS(343),
    [anon_sym_PERCENTr15d] = ACTIONS(343),
    [anon_sym_PERCENTax] = ACTIONS(343),
    [anon_sym_PERCENTcx] = ACTIONS(343),
    [anon_sym_PERCENTdx] = ACTIONS(343),
    [anon_sym_PERCENTbx] = ACTIONS(343),
    [anon_sym_PERCENTsi] = ACTIONS(343),
    [anon_sym_PERCENTdi] = ACTIONS(343),
    [anon_sym_PERCENTsp] = ACTIONS(343),
    [anon_sym_PERCENTbp] = ACTIONS(343),
    [anon_sym_PERCENTr8w] = ACTIONS(343),
    [anon_sym_PERCENTr9w] = ACTIONS(343),
    [anon_sym_PERCENTr10w] = ACTIONS(343),
    [anon_sym_PERCENTr11w] = ACTIONS(343),
    [anon_sym_PERCENTr12w] = ACTIONS(343),
    [anon_sym_PERCENTr13w] = ACTIONS(343),
    [anon_sym_PERCENTr14w] = ACTIONS(343),
    [anon_sym_PERCENTr15w] = ACTIONS(343),
    [anon_sym_PERCENTal] = ACTIONS(343),
    [anon_sym_PERCENTcl] = ACTIONS(343),
    [anon_sym_PERCENTdl] = ACTIONS(343),
    [anon_sym_PERCENTbl] = ACTIONS(343),
    [anon_sym_PERCENTsil] = ACTIONS(343),
    [anon_sym_PERCENTdil] = ACTIONS(343),
    [anon_sym_PERCENTspl] = ACTIONS(343),
    [anon_sym_PERCENTbpl] = ACTIONS(343),
    [anon_sym_PERCENTr8b] = ACTIONS(343),
    [anon_sym_PERCENTr9b] = ACTIONS(343),
    [anon_sym_PERCENTr10b] = ACTIONS(343),
    [anon_sym_PERCENTr11b] = ACTIONS(343),
    [anon_sym_PERCENTr12b] = ACTIONS(343),
    [anon_sym_PERCENTr13b] = ACTIONS(343),
    [anon_sym_PERCENTr14b] = ACTIONS(343),
    [anon_sym_PERCENTr15b] = ACTIONS(343),
    [anon_sym_DASH] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_movsq] = ACTIONS(343),
    [anon_sym_cmpsb] = ACTIONS(343),
    [anon_sym_cmpxchg] = ACTIONS(343),
    [anon_sym_movsl] = ACTIONS(343),
    [anon_sym_PERCENTcr0] = ACTIONS(343),
    [anon_sym_PERCENTcr2] = ACTIONS(343),
    [anon_sym_PERCENTcr3] = ACTIONS(343),
    [anon_sym_PERCENTcr4] = ACTIONS(343),
    [anon_sym_PERCENTrip] = ACTIONS(343),
    [anon_sym_PERCENTeip] = ACTIONS(343),
    [anon_sym_PERCENTip] = ACTIONS(343),
    [anon_sym_PERCENTst] = ACTIONS(343),
    [anon_sym_PERCENT] = ACTIONS(343),
  },
  [23] = {
    [aux_sym_comment_token1] = ACTIONS(347),
    [aux_sym_comment_token2] = ACTIONS(347),
    [sym__line_break] = ACTIONS(349),
    [anon_sym_f] = ACTIONS(347),
    [aux_sym_operand_token1] = ACTIONS(347),
    [anon_sym_LT] = ACTIONS(347),
    [anon_sym_DOLLAR] = ACTIONS(347),
    [anon_sym_PERCENTss] = ACTIONS(347),
    [anon_sym_PERCENTcs] = ACTIONS(347),
    [anon_sym_PERCENTds] = ACTIONS(347),
    [anon_sym_PERCENTes] = ACTIONS(347),
    [anon_sym_PERCENTfs] = ACTIONS(347),
    [anon_sym_PERCENTgs] = ACTIONS(347),
    [anon_sym_PERCENTrax] = ACTIONS(347),
    [anon_sym_PERCENTrbx] = ACTIONS(347),
    [anon_sym_PERCENTrcx] = ACTIONS(347),
    [anon_sym_PERCENTrdx] = ACTIONS(347),
    [anon_sym_PERCENTrsi] = ACTIONS(347),
    [anon_sym_PERCENTrdi] = ACTIONS(347),
    [anon_sym_PERCENTrbp] = ACTIONS(347),
    [anon_sym_PERCENTrsp] = ACTIONS(347),
    [anon_sym_PERCENTr8] = ACTIONS(347),
    [anon_sym_PERCENTr9] = ACTIONS(347),
    [anon_sym_PERCENTr10] = ACTIONS(347),
    [anon_sym_PERCENTr11] = ACTIONS(347),
    [anon_sym_PERCENTr12] = ACTIONS(347),
    [anon_sym_PERCENTr13] = ACTIONS(347),
    [anon_sym_PERCENTr14] = ACTIONS(347),
    [anon_sym_PERCENTr15] = ACTIONS(347),
    [anon_sym_PERCENTeax] = ACTIONS(347),
    [anon_sym_PERCENTecx] = ACTIONS(347),
    [anon_sym_PERCENTedx] = ACTIONS(347),
    [anon_sym_PERCENTebx] = ACTIONS(347),
    [anon_sym_PERCENTesi] = ACTIONS(347),
    [anon_sym_PERCENTedi] = ACTIONS(347),
    [anon_sym_PERCENTebp] = ACTIONS(347),
    [anon_sym_PERCENTesp] = ACTIONS(347),
    [anon_sym_PERCENTr8d] = ACTIONS(347),
    [anon_sym_PERCENTr9d] = ACTIONS(347),
    [anon_sym_PERCENTr10d] = ACTIONS(347),
    [anon_sym_PERCENTr11d] = ACTIONS(347),
    [anon_sym_PERCENTr12d] = ACTIONS(347),
    [anon_sym_PERCENTr13d] = ACTIONS(347),
    [anon_sym_PERCENTr14d] = ACTIONS(347),
    [anon_sym_PERCENTr15d] = ACTIONS(347),
    [anon_sym_PERCENTax] = ACTIONS(347),
    [anon_sym_PERCENTcx] = ACTIONS(347),
    [anon_sym_PERCENTdx] = ACTIONS(347),
    [anon_sym_PERCENTbx] = ACTIONS(347),
    [anon_sym_PERCENTsi] = ACTIONS(347),
    [anon_sym_PERCENTdi] = ACTIONS(347),
    [anon_sym_PERCENTsp] = ACTIONS(347),
    [anon_sym_PERCENTbp] = ACTIONS(347),
    [anon_sym_PERCENTr8w] = ACTIONS(347),
    [anon_sym_PERCENTr9w] = ACTIONS(347),
    [anon_sym_PERCENTr10w] = ACTIONS(347),
    [anon_sym_PERCENTr11w] = ACTIONS(347),
    [anon_sym_PERCENTr12w] = ACTIONS(347),
    [anon_sym_PERCENTr13w] = ACTIONS(347),
    [anon_sym_PERCENTr14w] = ACTIONS(347),
    [anon_sym_PERCENTr15w] = ACTIONS(347),
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
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(347),
    [anon_sym_movsq] = ACTIONS(347),
    [anon_sym_cmpsb] = ACTIONS(347),
    [anon_sym_cmpxchg] = ACTIONS(347),
    [anon_sym_movsl] = ACTIONS(347),
    [anon_sym_PERCENTcr0] = ACTIONS(347),
    [anon_sym_PERCENTcr2] = ACTIONS(347),
    [anon_sym_PERCENTcr3] = ACTIONS(347),
    [anon_sym_PERCENTcr4] = ACTIONS(347),
    [anon_sym_PERCENTrip] = ACTIONS(347),
    [anon_sym_PERCENTeip] = ACTIONS(347),
    [anon_sym_PERCENTip] = ACTIONS(347),
    [anon_sym_PERCENTst] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(347),
  },
  [24] = {
    [aux_sym_comment_token1] = ACTIONS(195),
    [aux_sym_comment_token2] = ACTIONS(195),
    [sym__line_break] = ACTIONS(197),
    [anon_sym_f] = ACTIONS(195),
    [aux_sym_operand_token1] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_PERCENTss] = ACTIONS(195),
    [anon_sym_PERCENTcs] = ACTIONS(195),
    [anon_sym_PERCENTds] = ACTIONS(195),
    [anon_sym_PERCENTes] = ACTIONS(195),
    [anon_sym_PERCENTfs] = ACTIONS(195),
    [anon_sym_PERCENTgs] = ACTIONS(195),
    [anon_sym_PERCENTrax] = ACTIONS(195),
    [anon_sym_PERCENTrbx] = ACTIONS(195),
    [anon_sym_PERCENTrcx] = ACTIONS(195),
    [anon_sym_PERCENTrdx] = ACTIONS(195),
    [anon_sym_PERCENTrsi] = ACTIONS(195),
    [anon_sym_PERCENTrdi] = ACTIONS(195),
    [anon_sym_PERCENTrbp] = ACTIONS(195),
    [anon_sym_PERCENTrsp] = ACTIONS(195),
    [anon_sym_PERCENTr8] = ACTIONS(195),
    [anon_sym_PERCENTr9] = ACTIONS(195),
    [anon_sym_PERCENTr10] = ACTIONS(195),
    [anon_sym_PERCENTr11] = ACTIONS(195),
    [anon_sym_PERCENTr12] = ACTIONS(195),
    [anon_sym_PERCENTr13] = ACTIONS(195),
    [anon_sym_PERCENTr14] = ACTIONS(195),
    [anon_sym_PERCENTr15] = ACTIONS(195),
    [anon_sym_PERCENTeax] = ACTIONS(195),
    [anon_sym_PERCENTecx] = ACTIONS(195),
    [anon_sym_PERCENTedx] = ACTIONS(195),
    [anon_sym_PERCENTebx] = ACTIONS(195),
    [anon_sym_PERCENTesi] = ACTIONS(195),
    [anon_sym_PERCENTedi] = ACTIONS(195),
    [anon_sym_PERCENTebp] = ACTIONS(195),
    [anon_sym_PERCENTesp] = ACTIONS(195),
    [anon_sym_PERCENTr8d] = ACTIONS(195),
    [anon_sym_PERCENTr9d] = ACTIONS(195),
    [anon_sym_PERCENTr10d] = ACTIONS(195),
    [anon_sym_PERCENTr11d] = ACTIONS(195),
    [anon_sym_PERCENTr12d] = ACTIONS(195),
    [anon_sym_PERCENTr13d] = ACTIONS(195),
    [anon_sym_PERCENTr14d] = ACTIONS(195),
    [anon_sym_PERCENTr15d] = ACTIONS(195),
    [anon_sym_PERCENTax] = ACTIONS(195),
    [anon_sym_PERCENTcx] = ACTIONS(195),
    [anon_sym_PERCENTdx] = ACTIONS(195),
    [anon_sym_PERCENTbx] = ACTIONS(195),
    [anon_sym_PERCENTsi] = ACTIONS(195),
    [anon_sym_PERCENTdi] = ACTIONS(195),
    [anon_sym_PERCENTsp] = ACTIONS(195),
    [anon_sym_PERCENTbp] = ACTIONS(195),
    [anon_sym_PERCENTr8w] = ACTIONS(195),
    [anon_sym_PERCENTr9w] = ACTIONS(195),
    [anon_sym_PERCENTr10w] = ACTIONS(195),
    [anon_sym_PERCENTr11w] = ACTIONS(195),
    [anon_sym_PERCENTr12w] = ACTIONS(195),
    [anon_sym_PERCENTr13w] = ACTIONS(195),
    [anon_sym_PERCENTr14w] = ACTIONS(195),
    [anon_sym_PERCENTr15w] = ACTIONS(195),
    [anon_sym_PERCENTal] = ACTIONS(195),
    [anon_sym_PERCENTcl] = ACTIONS(195),
    [anon_sym_PERCENTdl] = ACTIONS(195),
    [anon_sym_PERCENTbl] = ACTIONS(195),
    [anon_sym_PERCENTsil] = ACTIONS(195),
    [anon_sym_PERCENTdil] = ACTIONS(195),
    [anon_sym_PERCENTspl] = ACTIONS(195),
    [anon_sym_PERCENTbpl] = ACTIONS(195),
    [anon_sym_PERCENTr8b] = ACTIONS(195),
    [anon_sym_PERCENTr9b] = ACTIONS(195),
    [anon_sym_PERCENTr10b] = ACTIONS(195),
    [anon_sym_PERCENTr11b] = ACTIONS(195),
    [anon_sym_PERCENTr12b] = ACTIONS(195),
    [anon_sym_PERCENTr13b] = ACTIONS(195),
    [anon_sym_PERCENTr14b] = ACTIONS(195),
    [anon_sym_PERCENTr15b] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_movsq] = ACTIONS(195),
    [anon_sym_cmpsb] = ACTIONS(195),
    [anon_sym_cmpxchg] = ACTIONS(195),
    [anon_sym_movsl] = ACTIONS(195),
    [anon_sym_PERCENTcr0] = ACTIONS(195),
    [anon_sym_PERCENTcr2] = ACTIONS(195),
    [anon_sym_PERCENTcr3] = ACTIONS(195),
    [anon_sym_PERCENTcr4] = ACTIONS(195),
    [anon_sym_PERCENTrip] = ACTIONS(195),
    [anon_sym_PERCENTeip] = ACTIONS(195),
    [anon_sym_PERCENTip] = ACTIONS(195),
    [anon_sym_PERCENTst] = ACTIONS(195),
    [anon_sym_PERCENT] = ACTIONS(195),
  },
  [25] = {
    [sym_registerOperand] = STATE(258),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(282),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(351),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [26] = {
    [aux_sym_comment_token1] = ACTIONS(353),
    [aux_sym_comment_token2] = ACTIONS(353),
    [sym__line_break] = ACTIONS(355),
    [anon_sym_f] = ACTIONS(353),
    [aux_sym_operand_token1] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
    [anon_sym_PERCENTss] = ACTIONS(353),
    [anon_sym_PERCENTcs] = ACTIONS(353),
    [anon_sym_PERCENTds] = ACTIONS(353),
    [anon_sym_PERCENTes] = ACTIONS(353),
    [anon_sym_PERCENTfs] = ACTIONS(353),
    [anon_sym_PERCENTgs] = ACTIONS(353),
    [anon_sym_PERCENTrax] = ACTIONS(353),
    [anon_sym_PERCENTrbx] = ACTIONS(353),
    [anon_sym_PERCENTrcx] = ACTIONS(353),
    [anon_sym_PERCENTrdx] = ACTIONS(353),
    [anon_sym_PERCENTrsi] = ACTIONS(353),
    [anon_sym_PERCENTrdi] = ACTIONS(353),
    [anon_sym_PERCENTrbp] = ACTIONS(353),
    [anon_sym_PERCENTrsp] = ACTIONS(353),
    [anon_sym_PERCENTr8] = ACTIONS(353),
    [anon_sym_PERCENTr9] = ACTIONS(353),
    [anon_sym_PERCENTr10] = ACTIONS(353),
    [anon_sym_PERCENTr11] = ACTIONS(353),
    [anon_sym_PERCENTr12] = ACTIONS(353),
    [anon_sym_PERCENTr13] = ACTIONS(353),
    [anon_sym_PERCENTr14] = ACTIONS(353),
    [anon_sym_PERCENTr15] = ACTIONS(353),
    [anon_sym_PERCENTeax] = ACTIONS(353),
    [anon_sym_PERCENTecx] = ACTIONS(353),
    [anon_sym_PERCENTedx] = ACTIONS(353),
    [anon_sym_PERCENTebx] = ACTIONS(353),
    [anon_sym_PERCENTesi] = ACTIONS(353),
    [anon_sym_PERCENTedi] = ACTIONS(353),
    [anon_sym_PERCENTebp] = ACTIONS(353),
    [anon_sym_PERCENTesp] = ACTIONS(353),
    [anon_sym_PERCENTr8d] = ACTIONS(353),
    [anon_sym_PERCENTr9d] = ACTIONS(353),
    [anon_sym_PERCENTr10d] = ACTIONS(353),
    [anon_sym_PERCENTr11d] = ACTIONS(353),
    [anon_sym_PERCENTr12d] = ACTIONS(353),
    [anon_sym_PERCENTr13d] = ACTIONS(353),
    [anon_sym_PERCENTr14d] = ACTIONS(353),
    [anon_sym_PERCENTr15d] = ACTIONS(353),
    [anon_sym_PERCENTax] = ACTIONS(353),
    [anon_sym_PERCENTcx] = ACTIONS(353),
    [anon_sym_PERCENTdx] = ACTIONS(353),
    [anon_sym_PERCENTbx] = ACTIONS(353),
    [anon_sym_PERCENTsi] = ACTIONS(353),
    [anon_sym_PERCENTdi] = ACTIONS(353),
    [anon_sym_PERCENTsp] = ACTIONS(353),
    [anon_sym_PERCENTbp] = ACTIONS(353),
    [anon_sym_PERCENTr8w] = ACTIONS(353),
    [anon_sym_PERCENTr9w] = ACTIONS(353),
    [anon_sym_PERCENTr10w] = ACTIONS(353),
    [anon_sym_PERCENTr11w] = ACTIONS(353),
    [anon_sym_PERCENTr12w] = ACTIONS(353),
    [anon_sym_PERCENTr13w] = ACTIONS(353),
    [anon_sym_PERCENTr14w] = ACTIONS(353),
    [anon_sym_PERCENTr15w] = ACTIONS(353),
    [anon_sym_PERCENTal] = ACTIONS(353),
    [anon_sym_PERCENTcl] = ACTIONS(353),
    [anon_sym_PERCENTdl] = ACTIONS(353),
    [anon_sym_PERCENTbl] = ACTIONS(353),
    [anon_sym_PERCENTsil] = ACTIONS(353),
    [anon_sym_PERCENTdil] = ACTIONS(353),
    [anon_sym_PERCENTspl] = ACTIONS(353),
    [anon_sym_PERCENTbpl] = ACTIONS(353),
    [anon_sym_PERCENTr8b] = ACTIONS(353),
    [anon_sym_PERCENTr9b] = ACTIONS(353),
    [anon_sym_PERCENTr10b] = ACTIONS(353),
    [anon_sym_PERCENTr11b] = ACTIONS(353),
    [anon_sym_PERCENTr12b] = ACTIONS(353),
    [anon_sym_PERCENTr13b] = ACTIONS(353),
    [anon_sym_PERCENTr14b] = ACTIONS(353),
    [anon_sym_PERCENTr15b] = ACTIONS(353),
    [anon_sym_DASH] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_movsq] = ACTIONS(353),
    [anon_sym_cmpsb] = ACTIONS(353),
    [anon_sym_cmpxchg] = ACTIONS(353),
    [anon_sym_movsl] = ACTIONS(353),
    [anon_sym_PERCENTcr0] = ACTIONS(353),
    [anon_sym_PERCENTcr2] = ACTIONS(353),
    [anon_sym_PERCENTcr3] = ACTIONS(353),
    [anon_sym_PERCENTcr4] = ACTIONS(353),
    [anon_sym_PERCENTrip] = ACTIONS(353),
    [anon_sym_PERCENTeip] = ACTIONS(353),
    [anon_sym_PERCENTip] = ACTIONS(353),
    [anon_sym_PERCENTst] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(353),
  },
  [27] = {
    [aux_sym_comment_token1] = ACTIONS(357),
    [aux_sym_comment_token2] = ACTIONS(357),
    [sym__line_break] = ACTIONS(359),
    [anon_sym_f] = ACTIONS(357),
    [aux_sym_operand_token1] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_DOLLAR] = ACTIONS(357),
    [anon_sym_PERCENTss] = ACTIONS(357),
    [anon_sym_PERCENTcs] = ACTIONS(357),
    [anon_sym_PERCENTds] = ACTIONS(357),
    [anon_sym_PERCENTes] = ACTIONS(357),
    [anon_sym_PERCENTfs] = ACTIONS(357),
    [anon_sym_PERCENTgs] = ACTIONS(357),
    [anon_sym_PERCENTrax] = ACTIONS(357),
    [anon_sym_PERCENTrbx] = ACTIONS(357),
    [anon_sym_PERCENTrcx] = ACTIONS(357),
    [anon_sym_PERCENTrdx] = ACTIONS(357),
    [anon_sym_PERCENTrsi] = ACTIONS(357),
    [anon_sym_PERCENTrdi] = ACTIONS(357),
    [anon_sym_PERCENTrbp] = ACTIONS(357),
    [anon_sym_PERCENTrsp] = ACTIONS(357),
    [anon_sym_PERCENTr8] = ACTIONS(357),
    [anon_sym_PERCENTr9] = ACTIONS(357),
    [anon_sym_PERCENTr10] = ACTIONS(357),
    [anon_sym_PERCENTr11] = ACTIONS(357),
    [anon_sym_PERCENTr12] = ACTIONS(357),
    [anon_sym_PERCENTr13] = ACTIONS(357),
    [anon_sym_PERCENTr14] = ACTIONS(357),
    [anon_sym_PERCENTr15] = ACTIONS(357),
    [anon_sym_PERCENTeax] = ACTIONS(357),
    [anon_sym_PERCENTecx] = ACTIONS(357),
    [anon_sym_PERCENTedx] = ACTIONS(357),
    [anon_sym_PERCENTebx] = ACTIONS(357),
    [anon_sym_PERCENTesi] = ACTIONS(357),
    [anon_sym_PERCENTedi] = ACTIONS(357),
    [anon_sym_PERCENTebp] = ACTIONS(357),
    [anon_sym_PERCENTesp] = ACTIONS(357),
    [anon_sym_PERCENTr8d] = ACTIONS(357),
    [anon_sym_PERCENTr9d] = ACTIONS(357),
    [anon_sym_PERCENTr10d] = ACTIONS(357),
    [anon_sym_PERCENTr11d] = ACTIONS(357),
    [anon_sym_PERCENTr12d] = ACTIONS(357),
    [anon_sym_PERCENTr13d] = ACTIONS(357),
    [anon_sym_PERCENTr14d] = ACTIONS(357),
    [anon_sym_PERCENTr15d] = ACTIONS(357),
    [anon_sym_PERCENTax] = ACTIONS(357),
    [anon_sym_PERCENTcx] = ACTIONS(357),
    [anon_sym_PERCENTdx] = ACTIONS(357),
    [anon_sym_PERCENTbx] = ACTIONS(357),
    [anon_sym_PERCENTsi] = ACTIONS(357),
    [anon_sym_PERCENTdi] = ACTIONS(357),
    [anon_sym_PERCENTsp] = ACTIONS(357),
    [anon_sym_PERCENTbp] = ACTIONS(357),
    [anon_sym_PERCENTr8w] = ACTIONS(357),
    [anon_sym_PERCENTr9w] = ACTIONS(357),
    [anon_sym_PERCENTr10w] = ACTIONS(357),
    [anon_sym_PERCENTr11w] = ACTIONS(357),
    [anon_sym_PERCENTr12w] = ACTIONS(357),
    [anon_sym_PERCENTr13w] = ACTIONS(357),
    [anon_sym_PERCENTr14w] = ACTIONS(357),
    [anon_sym_PERCENTr15w] = ACTIONS(357),
    [anon_sym_PERCENTal] = ACTIONS(357),
    [anon_sym_PERCENTcl] = ACTIONS(357),
    [anon_sym_PERCENTdl] = ACTIONS(357),
    [anon_sym_PERCENTbl] = ACTIONS(357),
    [anon_sym_PERCENTsil] = ACTIONS(357),
    [anon_sym_PERCENTdil] = ACTIONS(357),
    [anon_sym_PERCENTspl] = ACTIONS(357),
    [anon_sym_PERCENTbpl] = ACTIONS(357),
    [anon_sym_PERCENTr8b] = ACTIONS(357),
    [anon_sym_PERCENTr9b] = ACTIONS(357),
    [anon_sym_PERCENTr10b] = ACTIONS(357),
    [anon_sym_PERCENTr11b] = ACTIONS(357),
    [anon_sym_PERCENTr12b] = ACTIONS(357),
    [anon_sym_PERCENTr13b] = ACTIONS(357),
    [anon_sym_PERCENTr14b] = ACTIONS(357),
    [anon_sym_PERCENTr15b] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym_LPAREN] = ACTIONS(357),
    [anon_sym_movsq] = ACTIONS(357),
    [anon_sym_cmpsb] = ACTIONS(357),
    [anon_sym_cmpxchg] = ACTIONS(357),
    [anon_sym_movsl] = ACTIONS(357),
    [anon_sym_PERCENTcr0] = ACTIONS(357),
    [anon_sym_PERCENTcr2] = ACTIONS(357),
    [anon_sym_PERCENTcr3] = ACTIONS(357),
    [anon_sym_PERCENTcr4] = ACTIONS(357),
    [anon_sym_PERCENTrip] = ACTIONS(357),
    [anon_sym_PERCENTeip] = ACTIONS(357),
    [anon_sym_PERCENTip] = ACTIONS(357),
    [anon_sym_PERCENTst] = ACTIONS(357),
    [anon_sym_PERCENT] = ACTIONS(357),
  },
  [28] = {
    [sym_registerOperand] = STATE(257),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(309),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(361),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [29] = {
    [sym_registerOperand] = STATE(250),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(307),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(363),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [30] = {
    [aux_sym_comment_token1] = ACTIONS(365),
    [aux_sym_comment_token2] = ACTIONS(365),
    [sym__line_break] = ACTIONS(367),
    [anon_sym_f] = ACTIONS(365),
    [aux_sym_operand_token1] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [anon_sym_PERCENTss] = ACTIONS(365),
    [anon_sym_PERCENTcs] = ACTIONS(365),
    [anon_sym_PERCENTds] = ACTIONS(365),
    [anon_sym_PERCENTes] = ACTIONS(365),
    [anon_sym_PERCENTfs] = ACTIONS(365),
    [anon_sym_PERCENTgs] = ACTIONS(365),
    [anon_sym_PERCENTrax] = ACTIONS(365),
    [anon_sym_PERCENTrbx] = ACTIONS(365),
    [anon_sym_PERCENTrcx] = ACTIONS(365),
    [anon_sym_PERCENTrdx] = ACTIONS(365),
    [anon_sym_PERCENTrsi] = ACTIONS(365),
    [anon_sym_PERCENTrdi] = ACTIONS(365),
    [anon_sym_PERCENTrbp] = ACTIONS(365),
    [anon_sym_PERCENTrsp] = ACTIONS(365),
    [anon_sym_PERCENTr8] = ACTIONS(365),
    [anon_sym_PERCENTr9] = ACTIONS(365),
    [anon_sym_PERCENTr10] = ACTIONS(365),
    [anon_sym_PERCENTr11] = ACTIONS(365),
    [anon_sym_PERCENTr12] = ACTIONS(365),
    [anon_sym_PERCENTr13] = ACTIONS(365),
    [anon_sym_PERCENTr14] = ACTIONS(365),
    [anon_sym_PERCENTr15] = ACTIONS(365),
    [anon_sym_PERCENTeax] = ACTIONS(365),
    [anon_sym_PERCENTecx] = ACTIONS(365),
    [anon_sym_PERCENTedx] = ACTIONS(365),
    [anon_sym_PERCENTebx] = ACTIONS(365),
    [anon_sym_PERCENTesi] = ACTIONS(365),
    [anon_sym_PERCENTedi] = ACTIONS(365),
    [anon_sym_PERCENTebp] = ACTIONS(365),
    [anon_sym_PERCENTesp] = ACTIONS(365),
    [anon_sym_PERCENTr8d] = ACTIONS(365),
    [anon_sym_PERCENTr9d] = ACTIONS(365),
    [anon_sym_PERCENTr10d] = ACTIONS(365),
    [anon_sym_PERCENTr11d] = ACTIONS(365),
    [anon_sym_PERCENTr12d] = ACTIONS(365),
    [anon_sym_PERCENTr13d] = ACTIONS(365),
    [anon_sym_PERCENTr14d] = ACTIONS(365),
    [anon_sym_PERCENTr15d] = ACTIONS(365),
    [anon_sym_PERCENTax] = ACTIONS(365),
    [anon_sym_PERCENTcx] = ACTIONS(365),
    [anon_sym_PERCENTdx] = ACTIONS(365),
    [anon_sym_PERCENTbx] = ACTIONS(365),
    [anon_sym_PERCENTsi] = ACTIONS(365),
    [anon_sym_PERCENTdi] = ACTIONS(365),
    [anon_sym_PERCENTsp] = ACTIONS(365),
    [anon_sym_PERCENTbp] = ACTIONS(365),
    [anon_sym_PERCENTr8w] = ACTIONS(365),
    [anon_sym_PERCENTr9w] = ACTIONS(365),
    [anon_sym_PERCENTr10w] = ACTIONS(365),
    [anon_sym_PERCENTr11w] = ACTIONS(365),
    [anon_sym_PERCENTr12w] = ACTIONS(365),
    [anon_sym_PERCENTr13w] = ACTIONS(365),
    [anon_sym_PERCENTr14w] = ACTIONS(365),
    [anon_sym_PERCENTr15w] = ACTIONS(365),
    [anon_sym_PERCENTal] = ACTIONS(365),
    [anon_sym_PERCENTcl] = ACTIONS(365),
    [anon_sym_PERCENTdl] = ACTIONS(365),
    [anon_sym_PERCENTbl] = ACTIONS(365),
    [anon_sym_PERCENTsil] = ACTIONS(365),
    [anon_sym_PERCENTdil] = ACTIONS(365),
    [anon_sym_PERCENTspl] = ACTIONS(365),
    [anon_sym_PERCENTbpl] = ACTIONS(365),
    [anon_sym_PERCENTr8b] = ACTIONS(365),
    [anon_sym_PERCENTr9b] = ACTIONS(365),
    [anon_sym_PERCENTr10b] = ACTIONS(365),
    [anon_sym_PERCENTr11b] = ACTIONS(365),
    [anon_sym_PERCENTr12b] = ACTIONS(365),
    [anon_sym_PERCENTr13b] = ACTIONS(365),
    [anon_sym_PERCENTr14b] = ACTIONS(365),
    [anon_sym_PERCENTr15b] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_movsq] = ACTIONS(365),
    [anon_sym_cmpsb] = ACTIONS(365),
    [anon_sym_cmpxchg] = ACTIONS(365),
    [anon_sym_movsl] = ACTIONS(365),
    [anon_sym_PERCENTcr0] = ACTIONS(365),
    [anon_sym_PERCENTcr2] = ACTIONS(365),
    [anon_sym_PERCENTcr3] = ACTIONS(365),
    [anon_sym_PERCENTcr4] = ACTIONS(365),
    [anon_sym_PERCENTrip] = ACTIONS(365),
    [anon_sym_PERCENTeip] = ACTIONS(365),
    [anon_sym_PERCENTip] = ACTIONS(365),
    [anon_sym_PERCENTst] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(365),
  },
  [31] = {
    [sym_registerOperand] = STATE(261),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(268),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(369),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [32] = {
    [sym_registerOperand] = STATE(252),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(308),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(371),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [33] = {
    [aux_sym_comment_token1] = ACTIONS(373),
    [aux_sym_comment_token2] = ACTIONS(373),
    [sym__line_break] = ACTIONS(375),
    [anon_sym_f] = ACTIONS(373),
    [aux_sym_operand_token1] = ACTIONS(373),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [anon_sym_PERCENTss] = ACTIONS(373),
    [anon_sym_PERCENTcs] = ACTIONS(373),
    [anon_sym_PERCENTds] = ACTIONS(373),
    [anon_sym_PERCENTes] = ACTIONS(373),
    [anon_sym_PERCENTfs] = ACTIONS(373),
    [anon_sym_PERCENTgs] = ACTIONS(373),
    [anon_sym_PERCENTrax] = ACTIONS(373),
    [anon_sym_PERCENTrbx] = ACTIONS(373),
    [anon_sym_PERCENTrcx] = ACTIONS(373),
    [anon_sym_PERCENTrdx] = ACTIONS(373),
    [anon_sym_PERCENTrsi] = ACTIONS(373),
    [anon_sym_PERCENTrdi] = ACTIONS(373),
    [anon_sym_PERCENTrbp] = ACTIONS(373),
    [anon_sym_PERCENTrsp] = ACTIONS(373),
    [anon_sym_PERCENTr8] = ACTIONS(373),
    [anon_sym_PERCENTr9] = ACTIONS(373),
    [anon_sym_PERCENTr10] = ACTIONS(373),
    [anon_sym_PERCENTr11] = ACTIONS(373),
    [anon_sym_PERCENTr12] = ACTIONS(373),
    [anon_sym_PERCENTr13] = ACTIONS(373),
    [anon_sym_PERCENTr14] = ACTIONS(373),
    [anon_sym_PERCENTr15] = ACTIONS(373),
    [anon_sym_PERCENTeax] = ACTIONS(373),
    [anon_sym_PERCENTecx] = ACTIONS(373),
    [anon_sym_PERCENTedx] = ACTIONS(373),
    [anon_sym_PERCENTebx] = ACTIONS(373),
    [anon_sym_PERCENTesi] = ACTIONS(373),
    [anon_sym_PERCENTedi] = ACTIONS(373),
    [anon_sym_PERCENTebp] = ACTIONS(373),
    [anon_sym_PERCENTesp] = ACTIONS(373),
    [anon_sym_PERCENTr8d] = ACTIONS(373),
    [anon_sym_PERCENTr9d] = ACTIONS(373),
    [anon_sym_PERCENTr10d] = ACTIONS(373),
    [anon_sym_PERCENTr11d] = ACTIONS(373),
    [anon_sym_PERCENTr12d] = ACTIONS(373),
    [anon_sym_PERCENTr13d] = ACTIONS(373),
    [anon_sym_PERCENTr14d] = ACTIONS(373),
    [anon_sym_PERCENTr15d] = ACTIONS(373),
    [anon_sym_PERCENTax] = ACTIONS(373),
    [anon_sym_PERCENTcx] = ACTIONS(373),
    [anon_sym_PERCENTdx] = ACTIONS(373),
    [anon_sym_PERCENTbx] = ACTIONS(373),
    [anon_sym_PERCENTsi] = ACTIONS(373),
    [anon_sym_PERCENTdi] = ACTIONS(373),
    [anon_sym_PERCENTsp] = ACTIONS(373),
    [anon_sym_PERCENTbp] = ACTIONS(373),
    [anon_sym_PERCENTr8w] = ACTIONS(373),
    [anon_sym_PERCENTr9w] = ACTIONS(373),
    [anon_sym_PERCENTr10w] = ACTIONS(373),
    [anon_sym_PERCENTr11w] = ACTIONS(373),
    [anon_sym_PERCENTr12w] = ACTIONS(373),
    [anon_sym_PERCENTr13w] = ACTIONS(373),
    [anon_sym_PERCENTr14w] = ACTIONS(373),
    [anon_sym_PERCENTr15w] = ACTIONS(373),
    [anon_sym_PERCENTal] = ACTIONS(373),
    [anon_sym_PERCENTcl] = ACTIONS(373),
    [anon_sym_PERCENTdl] = ACTIONS(373),
    [anon_sym_PERCENTbl] = ACTIONS(373),
    [anon_sym_PERCENTsil] = ACTIONS(373),
    [anon_sym_PERCENTdil] = ACTIONS(373),
    [anon_sym_PERCENTspl] = ACTIONS(373),
    [anon_sym_PERCENTbpl] = ACTIONS(373),
    [anon_sym_PERCENTr8b] = ACTIONS(373),
    [anon_sym_PERCENTr9b] = ACTIONS(373),
    [anon_sym_PERCENTr10b] = ACTIONS(373),
    [anon_sym_PERCENTr11b] = ACTIONS(373),
    [anon_sym_PERCENTr12b] = ACTIONS(373),
    [anon_sym_PERCENTr13b] = ACTIONS(373),
    [anon_sym_PERCENTr14b] = ACTIONS(373),
    [anon_sym_PERCENTr15b] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_movsq] = ACTIONS(373),
    [anon_sym_cmpsb] = ACTIONS(373),
    [anon_sym_cmpxchg] = ACTIONS(373),
    [anon_sym_movsl] = ACTIONS(373),
    [anon_sym_PERCENTcr0] = ACTIONS(373),
    [anon_sym_PERCENTcr2] = ACTIONS(373),
    [anon_sym_PERCENTcr3] = ACTIONS(373),
    [anon_sym_PERCENTcr4] = ACTIONS(373),
    [anon_sym_PERCENTrip] = ACTIONS(373),
    [anon_sym_PERCENTeip] = ACTIONS(373),
    [anon_sym_PERCENTip] = ACTIONS(373),
    [anon_sym_PERCENTst] = ACTIONS(373),
    [anon_sym_PERCENT] = ACTIONS(373),
  },
  [34] = {
    [aux_sym_comment_token1] = ACTIONS(377),
    [aux_sym_comment_token2] = ACTIONS(377),
    [sym__line_break] = ACTIONS(379),
    [anon_sym_f] = ACTIONS(377),
    [aux_sym_operand_token1] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(377),
    [anon_sym_PERCENTss] = ACTIONS(377),
    [anon_sym_PERCENTcs] = ACTIONS(377),
    [anon_sym_PERCENTds] = ACTIONS(377),
    [anon_sym_PERCENTes] = ACTIONS(377),
    [anon_sym_PERCENTfs] = ACTIONS(377),
    [anon_sym_PERCENTgs] = ACTIONS(377),
    [anon_sym_PERCENTrax] = ACTIONS(377),
    [anon_sym_PERCENTrbx] = ACTIONS(377),
    [anon_sym_PERCENTrcx] = ACTIONS(377),
    [anon_sym_PERCENTrdx] = ACTIONS(377),
    [anon_sym_PERCENTrsi] = ACTIONS(377),
    [anon_sym_PERCENTrdi] = ACTIONS(377),
    [anon_sym_PERCENTrbp] = ACTIONS(377),
    [anon_sym_PERCENTrsp] = ACTIONS(377),
    [anon_sym_PERCENTr8] = ACTIONS(377),
    [anon_sym_PERCENTr9] = ACTIONS(377),
    [anon_sym_PERCENTr10] = ACTIONS(377),
    [anon_sym_PERCENTr11] = ACTIONS(377),
    [anon_sym_PERCENTr12] = ACTIONS(377),
    [anon_sym_PERCENTr13] = ACTIONS(377),
    [anon_sym_PERCENTr14] = ACTIONS(377),
    [anon_sym_PERCENTr15] = ACTIONS(377),
    [anon_sym_PERCENTeax] = ACTIONS(377),
    [anon_sym_PERCENTecx] = ACTIONS(377),
    [anon_sym_PERCENTedx] = ACTIONS(377),
    [anon_sym_PERCENTebx] = ACTIONS(377),
    [anon_sym_PERCENTesi] = ACTIONS(377),
    [anon_sym_PERCENTedi] = ACTIONS(377),
    [anon_sym_PERCENTebp] = ACTIONS(377),
    [anon_sym_PERCENTesp] = ACTIONS(377),
    [anon_sym_PERCENTr8d] = ACTIONS(377),
    [anon_sym_PERCENTr9d] = ACTIONS(377),
    [anon_sym_PERCENTr10d] = ACTIONS(377),
    [anon_sym_PERCENTr11d] = ACTIONS(377),
    [anon_sym_PERCENTr12d] = ACTIONS(377),
    [anon_sym_PERCENTr13d] = ACTIONS(377),
    [anon_sym_PERCENTr14d] = ACTIONS(377),
    [anon_sym_PERCENTr15d] = ACTIONS(377),
    [anon_sym_PERCENTax] = ACTIONS(377),
    [anon_sym_PERCENTcx] = ACTIONS(377),
    [anon_sym_PERCENTdx] = ACTIONS(377),
    [anon_sym_PERCENTbx] = ACTIONS(377),
    [anon_sym_PERCENTsi] = ACTIONS(377),
    [anon_sym_PERCENTdi] = ACTIONS(377),
    [anon_sym_PERCENTsp] = ACTIONS(377),
    [anon_sym_PERCENTbp] = ACTIONS(377),
    [anon_sym_PERCENTr8w] = ACTIONS(377),
    [anon_sym_PERCENTr9w] = ACTIONS(377),
    [anon_sym_PERCENTr10w] = ACTIONS(377),
    [anon_sym_PERCENTr11w] = ACTIONS(377),
    [anon_sym_PERCENTr12w] = ACTIONS(377),
    [anon_sym_PERCENTr13w] = ACTIONS(377),
    [anon_sym_PERCENTr14w] = ACTIONS(377),
    [anon_sym_PERCENTr15w] = ACTIONS(377),
    [anon_sym_PERCENTal] = ACTIONS(377),
    [anon_sym_PERCENTcl] = ACTIONS(377),
    [anon_sym_PERCENTdl] = ACTIONS(377),
    [anon_sym_PERCENTbl] = ACTIONS(377),
    [anon_sym_PERCENTsil] = ACTIONS(377),
    [anon_sym_PERCENTdil] = ACTIONS(377),
    [anon_sym_PERCENTspl] = ACTIONS(377),
    [anon_sym_PERCENTbpl] = ACTIONS(377),
    [anon_sym_PERCENTr8b] = ACTIONS(377),
    [anon_sym_PERCENTr9b] = ACTIONS(377),
    [anon_sym_PERCENTr10b] = ACTIONS(377),
    [anon_sym_PERCENTr11b] = ACTIONS(377),
    [anon_sym_PERCENTr12b] = ACTIONS(377),
    [anon_sym_PERCENTr13b] = ACTIONS(377),
    [anon_sym_PERCENTr14b] = ACTIONS(377),
    [anon_sym_PERCENTr15b] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_movsq] = ACTIONS(377),
    [anon_sym_cmpsb] = ACTIONS(377),
    [anon_sym_cmpxchg] = ACTIONS(377),
    [anon_sym_movsl] = ACTIONS(377),
    [anon_sym_PERCENTcr0] = ACTIONS(377),
    [anon_sym_PERCENTcr2] = ACTIONS(377),
    [anon_sym_PERCENTcr3] = ACTIONS(377),
    [anon_sym_PERCENTcr4] = ACTIONS(377),
    [anon_sym_PERCENTrip] = ACTIONS(377),
    [anon_sym_PERCENTeip] = ACTIONS(377),
    [anon_sym_PERCENTip] = ACTIONS(377),
    [anon_sym_PERCENTst] = ACTIONS(377),
    [anon_sym_PERCENT] = ACTIONS(377),
  },
  [35] = {
    [aux_sym_comment_token1] = ACTIONS(381),
    [aux_sym_comment_token2] = ACTIONS(381),
    [sym__line_break] = ACTIONS(383),
    [anon_sym_f] = ACTIONS(381),
    [aux_sym_operand_token1] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_PERCENTss] = ACTIONS(381),
    [anon_sym_PERCENTcs] = ACTIONS(381),
    [anon_sym_PERCENTds] = ACTIONS(381),
    [anon_sym_PERCENTes] = ACTIONS(381),
    [anon_sym_PERCENTfs] = ACTIONS(381),
    [anon_sym_PERCENTgs] = ACTIONS(381),
    [anon_sym_PERCENTrax] = ACTIONS(381),
    [anon_sym_PERCENTrbx] = ACTIONS(381),
    [anon_sym_PERCENTrcx] = ACTIONS(381),
    [anon_sym_PERCENTrdx] = ACTIONS(381),
    [anon_sym_PERCENTrsi] = ACTIONS(381),
    [anon_sym_PERCENTrdi] = ACTIONS(381),
    [anon_sym_PERCENTrbp] = ACTIONS(381),
    [anon_sym_PERCENTrsp] = ACTIONS(381),
    [anon_sym_PERCENTr8] = ACTIONS(381),
    [anon_sym_PERCENTr9] = ACTIONS(381),
    [anon_sym_PERCENTr10] = ACTIONS(381),
    [anon_sym_PERCENTr11] = ACTIONS(381),
    [anon_sym_PERCENTr12] = ACTIONS(381),
    [anon_sym_PERCENTr13] = ACTIONS(381),
    [anon_sym_PERCENTr14] = ACTIONS(381),
    [anon_sym_PERCENTr15] = ACTIONS(381),
    [anon_sym_PERCENTeax] = ACTIONS(381),
    [anon_sym_PERCENTecx] = ACTIONS(381),
    [anon_sym_PERCENTedx] = ACTIONS(381),
    [anon_sym_PERCENTebx] = ACTIONS(381),
    [anon_sym_PERCENTesi] = ACTIONS(381),
    [anon_sym_PERCENTedi] = ACTIONS(381),
    [anon_sym_PERCENTebp] = ACTIONS(381),
    [anon_sym_PERCENTesp] = ACTIONS(381),
    [anon_sym_PERCENTr8d] = ACTIONS(381),
    [anon_sym_PERCENTr9d] = ACTIONS(381),
    [anon_sym_PERCENTr10d] = ACTIONS(381),
    [anon_sym_PERCENTr11d] = ACTIONS(381),
    [anon_sym_PERCENTr12d] = ACTIONS(381),
    [anon_sym_PERCENTr13d] = ACTIONS(381),
    [anon_sym_PERCENTr14d] = ACTIONS(381),
    [anon_sym_PERCENTr15d] = ACTIONS(381),
    [anon_sym_PERCENTax] = ACTIONS(381),
    [anon_sym_PERCENTcx] = ACTIONS(381),
    [anon_sym_PERCENTdx] = ACTIONS(381),
    [anon_sym_PERCENTbx] = ACTIONS(381),
    [anon_sym_PERCENTsi] = ACTIONS(381),
    [anon_sym_PERCENTdi] = ACTIONS(381),
    [anon_sym_PERCENTsp] = ACTIONS(381),
    [anon_sym_PERCENTbp] = ACTIONS(381),
    [anon_sym_PERCENTr8w] = ACTIONS(381),
    [anon_sym_PERCENTr9w] = ACTIONS(381),
    [anon_sym_PERCENTr10w] = ACTIONS(381),
    [anon_sym_PERCENTr11w] = ACTIONS(381),
    [anon_sym_PERCENTr12w] = ACTIONS(381),
    [anon_sym_PERCENTr13w] = ACTIONS(381),
    [anon_sym_PERCENTr14w] = ACTIONS(381),
    [anon_sym_PERCENTr15w] = ACTIONS(381),
    [anon_sym_PERCENTal] = ACTIONS(381),
    [anon_sym_PERCENTcl] = ACTIONS(381),
    [anon_sym_PERCENTdl] = ACTIONS(381),
    [anon_sym_PERCENTbl] = ACTIONS(381),
    [anon_sym_PERCENTsil] = ACTIONS(381),
    [anon_sym_PERCENTdil] = ACTIONS(381),
    [anon_sym_PERCENTspl] = ACTIONS(381),
    [anon_sym_PERCENTbpl] = ACTIONS(381),
    [anon_sym_PERCENTr8b] = ACTIONS(381),
    [anon_sym_PERCENTr9b] = ACTIONS(381),
    [anon_sym_PERCENTr10b] = ACTIONS(381),
    [anon_sym_PERCENTr11b] = ACTIONS(381),
    [anon_sym_PERCENTr12b] = ACTIONS(381),
    [anon_sym_PERCENTr13b] = ACTIONS(381),
    [anon_sym_PERCENTr14b] = ACTIONS(381),
    [anon_sym_PERCENTr15b] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_movsq] = ACTIONS(381),
    [anon_sym_cmpsb] = ACTIONS(381),
    [anon_sym_cmpxchg] = ACTIONS(381),
    [anon_sym_movsl] = ACTIONS(381),
    [anon_sym_PERCENTcr0] = ACTIONS(381),
    [anon_sym_PERCENTcr2] = ACTIONS(381),
    [anon_sym_PERCENTcr3] = ACTIONS(381),
    [anon_sym_PERCENTcr4] = ACTIONS(381),
    [anon_sym_PERCENTrip] = ACTIONS(381),
    [anon_sym_PERCENTeip] = ACTIONS(381),
    [anon_sym_PERCENTip] = ACTIONS(381),
    [anon_sym_PERCENTst] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(381),
  },
  [36] = {
    [aux_sym_comment_token1] = ACTIONS(385),
    [aux_sym_comment_token2] = ACTIONS(385),
    [sym__line_break] = ACTIONS(387),
    [anon_sym_f] = ACTIONS(385),
    [aux_sym_operand_token1] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(385),
    [anon_sym_DOLLAR] = ACTIONS(385),
    [anon_sym_PERCENTss] = ACTIONS(385),
    [anon_sym_PERCENTcs] = ACTIONS(385),
    [anon_sym_PERCENTds] = ACTIONS(385),
    [anon_sym_PERCENTes] = ACTIONS(385),
    [anon_sym_PERCENTfs] = ACTIONS(385),
    [anon_sym_PERCENTgs] = ACTIONS(385),
    [anon_sym_PERCENTrax] = ACTIONS(385),
    [anon_sym_PERCENTrbx] = ACTIONS(385),
    [anon_sym_PERCENTrcx] = ACTIONS(385),
    [anon_sym_PERCENTrdx] = ACTIONS(385),
    [anon_sym_PERCENTrsi] = ACTIONS(385),
    [anon_sym_PERCENTrdi] = ACTIONS(385),
    [anon_sym_PERCENTrbp] = ACTIONS(385),
    [anon_sym_PERCENTrsp] = ACTIONS(385),
    [anon_sym_PERCENTr8] = ACTIONS(385),
    [anon_sym_PERCENTr9] = ACTIONS(385),
    [anon_sym_PERCENTr10] = ACTIONS(385),
    [anon_sym_PERCENTr11] = ACTIONS(385),
    [anon_sym_PERCENTr12] = ACTIONS(385),
    [anon_sym_PERCENTr13] = ACTIONS(385),
    [anon_sym_PERCENTr14] = ACTIONS(385),
    [anon_sym_PERCENTr15] = ACTIONS(385),
    [anon_sym_PERCENTeax] = ACTIONS(385),
    [anon_sym_PERCENTecx] = ACTIONS(385),
    [anon_sym_PERCENTedx] = ACTIONS(385),
    [anon_sym_PERCENTebx] = ACTIONS(385),
    [anon_sym_PERCENTesi] = ACTIONS(385),
    [anon_sym_PERCENTedi] = ACTIONS(385),
    [anon_sym_PERCENTebp] = ACTIONS(385),
    [anon_sym_PERCENTesp] = ACTIONS(385),
    [anon_sym_PERCENTr8d] = ACTIONS(385),
    [anon_sym_PERCENTr9d] = ACTIONS(385),
    [anon_sym_PERCENTr10d] = ACTIONS(385),
    [anon_sym_PERCENTr11d] = ACTIONS(385),
    [anon_sym_PERCENTr12d] = ACTIONS(385),
    [anon_sym_PERCENTr13d] = ACTIONS(385),
    [anon_sym_PERCENTr14d] = ACTIONS(385),
    [anon_sym_PERCENTr15d] = ACTIONS(385),
    [anon_sym_PERCENTax] = ACTIONS(385),
    [anon_sym_PERCENTcx] = ACTIONS(385),
    [anon_sym_PERCENTdx] = ACTIONS(385),
    [anon_sym_PERCENTbx] = ACTIONS(385),
    [anon_sym_PERCENTsi] = ACTIONS(385),
    [anon_sym_PERCENTdi] = ACTIONS(385),
    [anon_sym_PERCENTsp] = ACTIONS(385),
    [anon_sym_PERCENTbp] = ACTIONS(385),
    [anon_sym_PERCENTr8w] = ACTIONS(385),
    [anon_sym_PERCENTr9w] = ACTIONS(385),
    [anon_sym_PERCENTr10w] = ACTIONS(385),
    [anon_sym_PERCENTr11w] = ACTIONS(385),
    [anon_sym_PERCENTr12w] = ACTIONS(385),
    [anon_sym_PERCENTr13w] = ACTIONS(385),
    [anon_sym_PERCENTr14w] = ACTIONS(385),
    [anon_sym_PERCENTr15w] = ACTIONS(385),
    [anon_sym_PERCENTal] = ACTIONS(385),
    [anon_sym_PERCENTcl] = ACTIONS(385),
    [anon_sym_PERCENTdl] = ACTIONS(385),
    [anon_sym_PERCENTbl] = ACTIONS(385),
    [anon_sym_PERCENTsil] = ACTIONS(385),
    [anon_sym_PERCENTdil] = ACTIONS(385),
    [anon_sym_PERCENTspl] = ACTIONS(385),
    [anon_sym_PERCENTbpl] = ACTIONS(385),
    [anon_sym_PERCENTr8b] = ACTIONS(385),
    [anon_sym_PERCENTr9b] = ACTIONS(385),
    [anon_sym_PERCENTr10b] = ACTIONS(385),
    [anon_sym_PERCENTr11b] = ACTIONS(385),
    [anon_sym_PERCENTr12b] = ACTIONS(385),
    [anon_sym_PERCENTr13b] = ACTIONS(385),
    [anon_sym_PERCENTr14b] = ACTIONS(385),
    [anon_sym_PERCENTr15b] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(385),
    [anon_sym_movsq] = ACTIONS(385),
    [anon_sym_cmpsb] = ACTIONS(385),
    [anon_sym_cmpxchg] = ACTIONS(385),
    [anon_sym_movsl] = ACTIONS(385),
    [anon_sym_PERCENTcr0] = ACTIONS(385),
    [anon_sym_PERCENTcr2] = ACTIONS(385),
    [anon_sym_PERCENTcr3] = ACTIONS(385),
    [anon_sym_PERCENTcr4] = ACTIONS(385),
    [anon_sym_PERCENTrip] = ACTIONS(385),
    [anon_sym_PERCENTeip] = ACTIONS(385),
    [anon_sym_PERCENTip] = ACTIONS(385),
    [anon_sym_PERCENTst] = ACTIONS(385),
    [anon_sym_PERCENT] = ACTIONS(385),
  },
  [37] = {
    [aux_sym_comment_token1] = ACTIONS(389),
    [aux_sym_comment_token2] = ACTIONS(389),
    [sym__line_break] = ACTIONS(391),
    [anon_sym_f] = ACTIONS(389),
    [aux_sym_operand_token1] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(389),
    [anon_sym_DOLLAR] = ACTIONS(389),
    [anon_sym_PERCENTss] = ACTIONS(389),
    [anon_sym_PERCENTcs] = ACTIONS(389),
    [anon_sym_PERCENTds] = ACTIONS(389),
    [anon_sym_PERCENTes] = ACTIONS(389),
    [anon_sym_PERCENTfs] = ACTIONS(389),
    [anon_sym_PERCENTgs] = ACTIONS(389),
    [anon_sym_PERCENTrax] = ACTIONS(389),
    [anon_sym_PERCENTrbx] = ACTIONS(389),
    [anon_sym_PERCENTrcx] = ACTIONS(389),
    [anon_sym_PERCENTrdx] = ACTIONS(389),
    [anon_sym_PERCENTrsi] = ACTIONS(389),
    [anon_sym_PERCENTrdi] = ACTIONS(389),
    [anon_sym_PERCENTrbp] = ACTIONS(389),
    [anon_sym_PERCENTrsp] = ACTIONS(389),
    [anon_sym_PERCENTr8] = ACTIONS(389),
    [anon_sym_PERCENTr9] = ACTIONS(389),
    [anon_sym_PERCENTr10] = ACTIONS(389),
    [anon_sym_PERCENTr11] = ACTIONS(389),
    [anon_sym_PERCENTr12] = ACTIONS(389),
    [anon_sym_PERCENTr13] = ACTIONS(389),
    [anon_sym_PERCENTr14] = ACTIONS(389),
    [anon_sym_PERCENTr15] = ACTIONS(389),
    [anon_sym_PERCENTeax] = ACTIONS(389),
    [anon_sym_PERCENTecx] = ACTIONS(389),
    [anon_sym_PERCENTedx] = ACTIONS(389),
    [anon_sym_PERCENTebx] = ACTIONS(389),
    [anon_sym_PERCENTesi] = ACTIONS(389),
    [anon_sym_PERCENTedi] = ACTIONS(389),
    [anon_sym_PERCENTebp] = ACTIONS(389),
    [anon_sym_PERCENTesp] = ACTIONS(389),
    [anon_sym_PERCENTr8d] = ACTIONS(389),
    [anon_sym_PERCENTr9d] = ACTIONS(389),
    [anon_sym_PERCENTr10d] = ACTIONS(389),
    [anon_sym_PERCENTr11d] = ACTIONS(389),
    [anon_sym_PERCENTr12d] = ACTIONS(389),
    [anon_sym_PERCENTr13d] = ACTIONS(389),
    [anon_sym_PERCENTr14d] = ACTIONS(389),
    [anon_sym_PERCENTr15d] = ACTIONS(389),
    [anon_sym_PERCENTax] = ACTIONS(389),
    [anon_sym_PERCENTcx] = ACTIONS(389),
    [anon_sym_PERCENTdx] = ACTIONS(389),
    [anon_sym_PERCENTbx] = ACTIONS(389),
    [anon_sym_PERCENTsi] = ACTIONS(389),
    [anon_sym_PERCENTdi] = ACTIONS(389),
    [anon_sym_PERCENTsp] = ACTIONS(389),
    [anon_sym_PERCENTbp] = ACTIONS(389),
    [anon_sym_PERCENTr8w] = ACTIONS(389),
    [anon_sym_PERCENTr9w] = ACTIONS(389),
    [anon_sym_PERCENTr10w] = ACTIONS(389),
    [anon_sym_PERCENTr11w] = ACTIONS(389),
    [anon_sym_PERCENTr12w] = ACTIONS(389),
    [anon_sym_PERCENTr13w] = ACTIONS(389),
    [anon_sym_PERCENTr14w] = ACTIONS(389),
    [anon_sym_PERCENTr15w] = ACTIONS(389),
    [anon_sym_PERCENTal] = ACTIONS(389),
    [anon_sym_PERCENTcl] = ACTIONS(389),
    [anon_sym_PERCENTdl] = ACTIONS(389),
    [anon_sym_PERCENTbl] = ACTIONS(389),
    [anon_sym_PERCENTsil] = ACTIONS(389),
    [anon_sym_PERCENTdil] = ACTIONS(389),
    [anon_sym_PERCENTspl] = ACTIONS(389),
    [anon_sym_PERCENTbpl] = ACTIONS(389),
    [anon_sym_PERCENTr8b] = ACTIONS(389),
    [anon_sym_PERCENTr9b] = ACTIONS(389),
    [anon_sym_PERCENTr10b] = ACTIONS(389),
    [anon_sym_PERCENTr11b] = ACTIONS(389),
    [anon_sym_PERCENTr12b] = ACTIONS(389),
    [anon_sym_PERCENTr13b] = ACTIONS(389),
    [anon_sym_PERCENTr14b] = ACTIONS(389),
    [anon_sym_PERCENTr15b] = ACTIONS(389),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_movsq] = ACTIONS(389),
    [anon_sym_cmpsb] = ACTIONS(389),
    [anon_sym_cmpxchg] = ACTIONS(389),
    [anon_sym_movsl] = ACTIONS(389),
    [anon_sym_PERCENTcr0] = ACTIONS(389),
    [anon_sym_PERCENTcr2] = ACTIONS(389),
    [anon_sym_PERCENTcr3] = ACTIONS(389),
    [anon_sym_PERCENTcr4] = ACTIONS(389),
    [anon_sym_PERCENTrip] = ACTIONS(389),
    [anon_sym_PERCENTeip] = ACTIONS(389),
    [anon_sym_PERCENTip] = ACTIONS(389),
    [anon_sym_PERCENTst] = ACTIONS(389),
    [anon_sym_PERCENT] = ACTIONS(389),
  },
  [38] = {
    [sym_registerOperand] = STATE(203),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(281),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(393),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [39] = {
    [sym_registerOperand] = STATE(260),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(310),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(395),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [40] = {
    [aux_sym_comment_token1] = ACTIONS(397),
    [aux_sym_comment_token2] = ACTIONS(397),
    [sym__line_break] = ACTIONS(399),
    [anon_sym_f] = ACTIONS(397),
    [aux_sym_operand_token1] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_DOLLAR] = ACTIONS(397),
    [anon_sym_PERCENTss] = ACTIONS(397),
    [anon_sym_PERCENTcs] = ACTIONS(397),
    [anon_sym_PERCENTds] = ACTIONS(397),
    [anon_sym_PERCENTes] = ACTIONS(397),
    [anon_sym_PERCENTfs] = ACTIONS(397),
    [anon_sym_PERCENTgs] = ACTIONS(397),
    [anon_sym_PERCENTrax] = ACTIONS(397),
    [anon_sym_PERCENTrbx] = ACTIONS(397),
    [anon_sym_PERCENTrcx] = ACTIONS(397),
    [anon_sym_PERCENTrdx] = ACTIONS(397),
    [anon_sym_PERCENTrsi] = ACTIONS(397),
    [anon_sym_PERCENTrdi] = ACTIONS(397),
    [anon_sym_PERCENTrbp] = ACTIONS(397),
    [anon_sym_PERCENTrsp] = ACTIONS(397),
    [anon_sym_PERCENTr8] = ACTIONS(397),
    [anon_sym_PERCENTr9] = ACTIONS(397),
    [anon_sym_PERCENTr10] = ACTIONS(397),
    [anon_sym_PERCENTr11] = ACTIONS(397),
    [anon_sym_PERCENTr12] = ACTIONS(397),
    [anon_sym_PERCENTr13] = ACTIONS(397),
    [anon_sym_PERCENTr14] = ACTIONS(397),
    [anon_sym_PERCENTr15] = ACTIONS(397),
    [anon_sym_PERCENTeax] = ACTIONS(397),
    [anon_sym_PERCENTecx] = ACTIONS(397),
    [anon_sym_PERCENTedx] = ACTIONS(397),
    [anon_sym_PERCENTebx] = ACTIONS(397),
    [anon_sym_PERCENTesi] = ACTIONS(397),
    [anon_sym_PERCENTedi] = ACTIONS(397),
    [anon_sym_PERCENTebp] = ACTIONS(397),
    [anon_sym_PERCENTesp] = ACTIONS(397),
    [anon_sym_PERCENTr8d] = ACTIONS(397),
    [anon_sym_PERCENTr9d] = ACTIONS(397),
    [anon_sym_PERCENTr10d] = ACTIONS(397),
    [anon_sym_PERCENTr11d] = ACTIONS(397),
    [anon_sym_PERCENTr12d] = ACTIONS(397),
    [anon_sym_PERCENTr13d] = ACTIONS(397),
    [anon_sym_PERCENTr14d] = ACTIONS(397),
    [anon_sym_PERCENTr15d] = ACTIONS(397),
    [anon_sym_PERCENTax] = ACTIONS(397),
    [anon_sym_PERCENTcx] = ACTIONS(397),
    [anon_sym_PERCENTdx] = ACTIONS(397),
    [anon_sym_PERCENTbx] = ACTIONS(397),
    [anon_sym_PERCENTsi] = ACTIONS(397),
    [anon_sym_PERCENTdi] = ACTIONS(397),
    [anon_sym_PERCENTsp] = ACTIONS(397),
    [anon_sym_PERCENTbp] = ACTIONS(397),
    [anon_sym_PERCENTr8w] = ACTIONS(397),
    [anon_sym_PERCENTr9w] = ACTIONS(397),
    [anon_sym_PERCENTr10w] = ACTIONS(397),
    [anon_sym_PERCENTr11w] = ACTIONS(397),
    [anon_sym_PERCENTr12w] = ACTIONS(397),
    [anon_sym_PERCENTr13w] = ACTIONS(397),
    [anon_sym_PERCENTr14w] = ACTIONS(397),
    [anon_sym_PERCENTr15w] = ACTIONS(397),
    [anon_sym_PERCENTal] = ACTIONS(397),
    [anon_sym_PERCENTcl] = ACTIONS(397),
    [anon_sym_PERCENTdl] = ACTIONS(397),
    [anon_sym_PERCENTbl] = ACTIONS(397),
    [anon_sym_PERCENTsil] = ACTIONS(397),
    [anon_sym_PERCENTdil] = ACTIONS(397),
    [anon_sym_PERCENTspl] = ACTIONS(397),
    [anon_sym_PERCENTbpl] = ACTIONS(397),
    [anon_sym_PERCENTr8b] = ACTIONS(397),
    [anon_sym_PERCENTr9b] = ACTIONS(397),
    [anon_sym_PERCENTr10b] = ACTIONS(397),
    [anon_sym_PERCENTr11b] = ACTIONS(397),
    [anon_sym_PERCENTr12b] = ACTIONS(397),
    [anon_sym_PERCENTr13b] = ACTIONS(397),
    [anon_sym_PERCENTr14b] = ACTIONS(397),
    [anon_sym_PERCENTr15b] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_movsq] = ACTIONS(397),
    [anon_sym_cmpsb] = ACTIONS(397),
    [anon_sym_cmpxchg] = ACTIONS(397),
    [anon_sym_movsl] = ACTIONS(397),
    [anon_sym_PERCENTcr0] = ACTIONS(397),
    [anon_sym_PERCENTcr2] = ACTIONS(397),
    [anon_sym_PERCENTcr3] = ACTIONS(397),
    [anon_sym_PERCENTcr4] = ACTIONS(397),
    [anon_sym_PERCENTrip] = ACTIONS(397),
    [anon_sym_PERCENTeip] = ACTIONS(397),
    [anon_sym_PERCENTip] = ACTIONS(397),
    [anon_sym_PERCENTst] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(397),
  },
  [41] = {
    [aux_sym_comment_token1] = ACTIONS(401),
    [aux_sym_comment_token2] = ACTIONS(401),
    [sym__line_break] = ACTIONS(403),
    [anon_sym_f] = ACTIONS(401),
    [aux_sym_operand_token1] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_DOLLAR] = ACTIONS(401),
    [anon_sym_PERCENTss] = ACTIONS(401),
    [anon_sym_PERCENTcs] = ACTIONS(401),
    [anon_sym_PERCENTds] = ACTIONS(401),
    [anon_sym_PERCENTes] = ACTIONS(401),
    [anon_sym_PERCENTfs] = ACTIONS(401),
    [anon_sym_PERCENTgs] = ACTIONS(401),
    [anon_sym_PERCENTrax] = ACTIONS(401),
    [anon_sym_PERCENTrbx] = ACTIONS(401),
    [anon_sym_PERCENTrcx] = ACTIONS(401),
    [anon_sym_PERCENTrdx] = ACTIONS(401),
    [anon_sym_PERCENTrsi] = ACTIONS(401),
    [anon_sym_PERCENTrdi] = ACTIONS(401),
    [anon_sym_PERCENTrbp] = ACTIONS(401),
    [anon_sym_PERCENTrsp] = ACTIONS(401),
    [anon_sym_PERCENTr8] = ACTIONS(401),
    [anon_sym_PERCENTr9] = ACTIONS(401),
    [anon_sym_PERCENTr10] = ACTIONS(401),
    [anon_sym_PERCENTr11] = ACTIONS(401),
    [anon_sym_PERCENTr12] = ACTIONS(401),
    [anon_sym_PERCENTr13] = ACTIONS(401),
    [anon_sym_PERCENTr14] = ACTIONS(401),
    [anon_sym_PERCENTr15] = ACTIONS(401),
    [anon_sym_PERCENTeax] = ACTIONS(401),
    [anon_sym_PERCENTecx] = ACTIONS(401),
    [anon_sym_PERCENTedx] = ACTIONS(401),
    [anon_sym_PERCENTebx] = ACTIONS(401),
    [anon_sym_PERCENTesi] = ACTIONS(401),
    [anon_sym_PERCENTedi] = ACTIONS(401),
    [anon_sym_PERCENTebp] = ACTIONS(401),
    [anon_sym_PERCENTesp] = ACTIONS(401),
    [anon_sym_PERCENTr8d] = ACTIONS(401),
    [anon_sym_PERCENTr9d] = ACTIONS(401),
    [anon_sym_PERCENTr10d] = ACTIONS(401),
    [anon_sym_PERCENTr11d] = ACTIONS(401),
    [anon_sym_PERCENTr12d] = ACTIONS(401),
    [anon_sym_PERCENTr13d] = ACTIONS(401),
    [anon_sym_PERCENTr14d] = ACTIONS(401),
    [anon_sym_PERCENTr15d] = ACTIONS(401),
    [anon_sym_PERCENTax] = ACTIONS(401),
    [anon_sym_PERCENTcx] = ACTIONS(401),
    [anon_sym_PERCENTdx] = ACTIONS(401),
    [anon_sym_PERCENTbx] = ACTIONS(401),
    [anon_sym_PERCENTsi] = ACTIONS(401),
    [anon_sym_PERCENTdi] = ACTIONS(401),
    [anon_sym_PERCENTsp] = ACTIONS(401),
    [anon_sym_PERCENTbp] = ACTIONS(401),
    [anon_sym_PERCENTr8w] = ACTIONS(401),
    [anon_sym_PERCENTr9w] = ACTIONS(401),
    [anon_sym_PERCENTr10w] = ACTIONS(401),
    [anon_sym_PERCENTr11w] = ACTIONS(401),
    [anon_sym_PERCENTr12w] = ACTIONS(401),
    [anon_sym_PERCENTr13w] = ACTIONS(401),
    [anon_sym_PERCENTr14w] = ACTIONS(401),
    [anon_sym_PERCENTr15w] = ACTIONS(401),
    [anon_sym_PERCENTal] = ACTIONS(401),
    [anon_sym_PERCENTcl] = ACTIONS(401),
    [anon_sym_PERCENTdl] = ACTIONS(401),
    [anon_sym_PERCENTbl] = ACTIONS(401),
    [anon_sym_PERCENTsil] = ACTIONS(401),
    [anon_sym_PERCENTdil] = ACTIONS(401),
    [anon_sym_PERCENTspl] = ACTIONS(401),
    [anon_sym_PERCENTbpl] = ACTIONS(401),
    [anon_sym_PERCENTr8b] = ACTIONS(401),
    [anon_sym_PERCENTr9b] = ACTIONS(401),
    [anon_sym_PERCENTr10b] = ACTIONS(401),
    [anon_sym_PERCENTr11b] = ACTIONS(401),
    [anon_sym_PERCENTr12b] = ACTIONS(401),
    [anon_sym_PERCENTr13b] = ACTIONS(401),
    [anon_sym_PERCENTr14b] = ACTIONS(401),
    [anon_sym_PERCENTr15b] = ACTIONS(401),
    [anon_sym_DASH] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_movsq] = ACTIONS(401),
    [anon_sym_cmpsb] = ACTIONS(401),
    [anon_sym_cmpxchg] = ACTIONS(401),
    [anon_sym_movsl] = ACTIONS(401),
    [anon_sym_PERCENTcr0] = ACTIONS(401),
    [anon_sym_PERCENTcr2] = ACTIONS(401),
    [anon_sym_PERCENTcr3] = ACTIONS(401),
    [anon_sym_PERCENTcr4] = ACTIONS(401),
    [anon_sym_PERCENTrip] = ACTIONS(401),
    [anon_sym_PERCENTeip] = ACTIONS(401),
    [anon_sym_PERCENTip] = ACTIONS(401),
    [anon_sym_PERCENTst] = ACTIONS(401),
    [anon_sym_PERCENT] = ACTIONS(401),
  },
  [42] = {
    [sym_registerOperand] = STATE(206),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(288),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(309),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [43] = {
    [aux_sym_comment_token1] = ACTIONS(405),
    [aux_sym_comment_token2] = ACTIONS(405),
    [sym__line_break] = ACTIONS(407),
    [anon_sym_f] = ACTIONS(405),
    [aux_sym_operand_token1] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_PERCENTss] = ACTIONS(405),
    [anon_sym_PERCENTcs] = ACTIONS(405),
    [anon_sym_PERCENTds] = ACTIONS(405),
    [anon_sym_PERCENTes] = ACTIONS(405),
    [anon_sym_PERCENTfs] = ACTIONS(405),
    [anon_sym_PERCENTgs] = ACTIONS(405),
    [anon_sym_PERCENTrax] = ACTIONS(405),
    [anon_sym_PERCENTrbx] = ACTIONS(405),
    [anon_sym_PERCENTrcx] = ACTIONS(405),
    [anon_sym_PERCENTrdx] = ACTIONS(405),
    [anon_sym_PERCENTrsi] = ACTIONS(405),
    [anon_sym_PERCENTrdi] = ACTIONS(405),
    [anon_sym_PERCENTrbp] = ACTIONS(405),
    [anon_sym_PERCENTrsp] = ACTIONS(405),
    [anon_sym_PERCENTr8] = ACTIONS(405),
    [anon_sym_PERCENTr9] = ACTIONS(405),
    [anon_sym_PERCENTr10] = ACTIONS(405),
    [anon_sym_PERCENTr11] = ACTIONS(405),
    [anon_sym_PERCENTr12] = ACTIONS(405),
    [anon_sym_PERCENTr13] = ACTIONS(405),
    [anon_sym_PERCENTr14] = ACTIONS(405),
    [anon_sym_PERCENTr15] = ACTIONS(405),
    [anon_sym_PERCENTeax] = ACTIONS(405),
    [anon_sym_PERCENTecx] = ACTIONS(405),
    [anon_sym_PERCENTedx] = ACTIONS(405),
    [anon_sym_PERCENTebx] = ACTIONS(405),
    [anon_sym_PERCENTesi] = ACTIONS(405),
    [anon_sym_PERCENTedi] = ACTIONS(405),
    [anon_sym_PERCENTebp] = ACTIONS(405),
    [anon_sym_PERCENTesp] = ACTIONS(405),
    [anon_sym_PERCENTr8d] = ACTIONS(405),
    [anon_sym_PERCENTr9d] = ACTIONS(405),
    [anon_sym_PERCENTr10d] = ACTIONS(405),
    [anon_sym_PERCENTr11d] = ACTIONS(405),
    [anon_sym_PERCENTr12d] = ACTIONS(405),
    [anon_sym_PERCENTr13d] = ACTIONS(405),
    [anon_sym_PERCENTr14d] = ACTIONS(405),
    [anon_sym_PERCENTr15d] = ACTIONS(405),
    [anon_sym_PERCENTax] = ACTIONS(405),
    [anon_sym_PERCENTcx] = ACTIONS(405),
    [anon_sym_PERCENTdx] = ACTIONS(405),
    [anon_sym_PERCENTbx] = ACTIONS(405),
    [anon_sym_PERCENTsi] = ACTIONS(405),
    [anon_sym_PERCENTdi] = ACTIONS(405),
    [anon_sym_PERCENTsp] = ACTIONS(405),
    [anon_sym_PERCENTbp] = ACTIONS(405),
    [anon_sym_PERCENTr8w] = ACTIONS(405),
    [anon_sym_PERCENTr9w] = ACTIONS(405),
    [anon_sym_PERCENTr10w] = ACTIONS(405),
    [anon_sym_PERCENTr11w] = ACTIONS(405),
    [anon_sym_PERCENTr12w] = ACTIONS(405),
    [anon_sym_PERCENTr13w] = ACTIONS(405),
    [anon_sym_PERCENTr14w] = ACTIONS(405),
    [anon_sym_PERCENTr15w] = ACTIONS(405),
    [anon_sym_PERCENTal] = ACTIONS(405),
    [anon_sym_PERCENTcl] = ACTIONS(405),
    [anon_sym_PERCENTdl] = ACTIONS(405),
    [anon_sym_PERCENTbl] = ACTIONS(405),
    [anon_sym_PERCENTsil] = ACTIONS(405),
    [anon_sym_PERCENTdil] = ACTIONS(405),
    [anon_sym_PERCENTspl] = ACTIONS(405),
    [anon_sym_PERCENTbpl] = ACTIONS(405),
    [anon_sym_PERCENTr8b] = ACTIONS(405),
    [anon_sym_PERCENTr9b] = ACTIONS(405),
    [anon_sym_PERCENTr10b] = ACTIONS(405),
    [anon_sym_PERCENTr11b] = ACTIONS(405),
    [anon_sym_PERCENTr12b] = ACTIONS(405),
    [anon_sym_PERCENTr13b] = ACTIONS(405),
    [anon_sym_PERCENTr14b] = ACTIONS(405),
    [anon_sym_PERCENTr15b] = ACTIONS(405),
    [anon_sym_DASH] = ACTIONS(405),
    [anon_sym_LPAREN] = ACTIONS(405),
    [anon_sym_movsq] = ACTIONS(405),
    [anon_sym_cmpsb] = ACTIONS(405),
    [anon_sym_cmpxchg] = ACTIONS(405),
    [anon_sym_movsl] = ACTIONS(405),
    [anon_sym_PERCENTcr0] = ACTIONS(405),
    [anon_sym_PERCENTcr2] = ACTIONS(405),
    [anon_sym_PERCENTcr3] = ACTIONS(405),
    [anon_sym_PERCENTcr4] = ACTIONS(405),
    [anon_sym_PERCENTrip] = ACTIONS(405),
    [anon_sym_PERCENTeip] = ACTIONS(405),
    [anon_sym_PERCENTip] = ACTIONS(405),
    [anon_sym_PERCENTst] = ACTIONS(405),
    [anon_sym_PERCENT] = ACTIONS(405),
  },
  [44] = {
    [sym_registerOperand] = STATE(249),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(306),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(409),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [45] = {
    [aux_sym_comment_token1] = ACTIONS(411),
    [aux_sym_comment_token2] = ACTIONS(411),
    [sym__line_break] = ACTIONS(413),
    [anon_sym_f] = ACTIONS(411),
    [aux_sym_operand_token1] = ACTIONS(411),
    [anon_sym_LT] = ACTIONS(411),
    [anon_sym_DOLLAR] = ACTIONS(411),
    [anon_sym_PERCENTss] = ACTIONS(411),
    [anon_sym_PERCENTcs] = ACTIONS(411),
    [anon_sym_PERCENTds] = ACTIONS(411),
    [anon_sym_PERCENTes] = ACTIONS(411),
    [anon_sym_PERCENTfs] = ACTIONS(411),
    [anon_sym_PERCENTgs] = ACTIONS(411),
    [anon_sym_PERCENTrax] = ACTIONS(411),
    [anon_sym_PERCENTrbx] = ACTIONS(411),
    [anon_sym_PERCENTrcx] = ACTIONS(411),
    [anon_sym_PERCENTrdx] = ACTIONS(411),
    [anon_sym_PERCENTrsi] = ACTIONS(411),
    [anon_sym_PERCENTrdi] = ACTIONS(411),
    [anon_sym_PERCENTrbp] = ACTIONS(411),
    [anon_sym_PERCENTrsp] = ACTIONS(411),
    [anon_sym_PERCENTr8] = ACTIONS(411),
    [anon_sym_PERCENTr9] = ACTIONS(411),
    [anon_sym_PERCENTr10] = ACTIONS(411),
    [anon_sym_PERCENTr11] = ACTIONS(411),
    [anon_sym_PERCENTr12] = ACTIONS(411),
    [anon_sym_PERCENTr13] = ACTIONS(411),
    [anon_sym_PERCENTr14] = ACTIONS(411),
    [anon_sym_PERCENTr15] = ACTIONS(411),
    [anon_sym_PERCENTeax] = ACTIONS(411),
    [anon_sym_PERCENTecx] = ACTIONS(411),
    [anon_sym_PERCENTedx] = ACTIONS(411),
    [anon_sym_PERCENTebx] = ACTIONS(411),
    [anon_sym_PERCENTesi] = ACTIONS(411),
    [anon_sym_PERCENTedi] = ACTIONS(411),
    [anon_sym_PERCENTebp] = ACTIONS(411),
    [anon_sym_PERCENTesp] = ACTIONS(411),
    [anon_sym_PERCENTr8d] = ACTIONS(411),
    [anon_sym_PERCENTr9d] = ACTIONS(411),
    [anon_sym_PERCENTr10d] = ACTIONS(411),
    [anon_sym_PERCENTr11d] = ACTIONS(411),
    [anon_sym_PERCENTr12d] = ACTIONS(411),
    [anon_sym_PERCENTr13d] = ACTIONS(411),
    [anon_sym_PERCENTr14d] = ACTIONS(411),
    [anon_sym_PERCENTr15d] = ACTIONS(411),
    [anon_sym_PERCENTax] = ACTIONS(411),
    [anon_sym_PERCENTcx] = ACTIONS(411),
    [anon_sym_PERCENTdx] = ACTIONS(411),
    [anon_sym_PERCENTbx] = ACTIONS(411),
    [anon_sym_PERCENTsi] = ACTIONS(411),
    [anon_sym_PERCENTdi] = ACTIONS(411),
    [anon_sym_PERCENTsp] = ACTIONS(411),
    [anon_sym_PERCENTbp] = ACTIONS(411),
    [anon_sym_PERCENTr8w] = ACTIONS(411),
    [anon_sym_PERCENTr9w] = ACTIONS(411),
    [anon_sym_PERCENTr10w] = ACTIONS(411),
    [anon_sym_PERCENTr11w] = ACTIONS(411),
    [anon_sym_PERCENTr12w] = ACTIONS(411),
    [anon_sym_PERCENTr13w] = ACTIONS(411),
    [anon_sym_PERCENTr14w] = ACTIONS(411),
    [anon_sym_PERCENTr15w] = ACTIONS(411),
    [anon_sym_PERCENTal] = ACTIONS(411),
    [anon_sym_PERCENTcl] = ACTIONS(411),
    [anon_sym_PERCENTdl] = ACTIONS(411),
    [anon_sym_PERCENTbl] = ACTIONS(411),
    [anon_sym_PERCENTsil] = ACTIONS(411),
    [anon_sym_PERCENTdil] = ACTIONS(411),
    [anon_sym_PERCENTspl] = ACTIONS(411),
    [anon_sym_PERCENTbpl] = ACTIONS(411),
    [anon_sym_PERCENTr8b] = ACTIONS(411),
    [anon_sym_PERCENTr9b] = ACTIONS(411),
    [anon_sym_PERCENTr10b] = ACTIONS(411),
    [anon_sym_PERCENTr11b] = ACTIONS(411),
    [anon_sym_PERCENTr12b] = ACTIONS(411),
    [anon_sym_PERCENTr13b] = ACTIONS(411),
    [anon_sym_PERCENTr14b] = ACTIONS(411),
    [anon_sym_PERCENTr15b] = ACTIONS(411),
    [anon_sym_DASH] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_movsq] = ACTIONS(411),
    [anon_sym_cmpsb] = ACTIONS(411),
    [anon_sym_cmpxchg] = ACTIONS(411),
    [anon_sym_movsl] = ACTIONS(411),
    [anon_sym_PERCENTcr0] = ACTIONS(411),
    [anon_sym_PERCENTcr2] = ACTIONS(411),
    [anon_sym_PERCENTcr3] = ACTIONS(411),
    [anon_sym_PERCENTcr4] = ACTIONS(411),
    [anon_sym_PERCENTrip] = ACTIONS(411),
    [anon_sym_PERCENTeip] = ACTIONS(411),
    [anon_sym_PERCENTip] = ACTIONS(411),
    [anon_sym_PERCENTst] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(411),
  },
  [46] = {
    [aux_sym_comment_token1] = ACTIONS(415),
    [aux_sym_comment_token2] = ACTIONS(415),
    [sym__line_break] = ACTIONS(417),
    [anon_sym_f] = ACTIONS(415),
    [aux_sym_operand_token1] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(415),
    [anon_sym_DOLLAR] = ACTIONS(415),
    [anon_sym_PERCENTss] = ACTIONS(415),
    [anon_sym_PERCENTcs] = ACTIONS(415),
    [anon_sym_PERCENTds] = ACTIONS(415),
    [anon_sym_PERCENTes] = ACTIONS(415),
    [anon_sym_PERCENTfs] = ACTIONS(415),
    [anon_sym_PERCENTgs] = ACTIONS(415),
    [anon_sym_PERCENTrax] = ACTIONS(415),
    [anon_sym_PERCENTrbx] = ACTIONS(415),
    [anon_sym_PERCENTrcx] = ACTIONS(415),
    [anon_sym_PERCENTrdx] = ACTIONS(415),
    [anon_sym_PERCENTrsi] = ACTIONS(415),
    [anon_sym_PERCENTrdi] = ACTIONS(415),
    [anon_sym_PERCENTrbp] = ACTIONS(415),
    [anon_sym_PERCENTrsp] = ACTIONS(415),
    [anon_sym_PERCENTr8] = ACTIONS(415),
    [anon_sym_PERCENTr9] = ACTIONS(415),
    [anon_sym_PERCENTr10] = ACTIONS(415),
    [anon_sym_PERCENTr11] = ACTIONS(415),
    [anon_sym_PERCENTr12] = ACTIONS(415),
    [anon_sym_PERCENTr13] = ACTIONS(415),
    [anon_sym_PERCENTr14] = ACTIONS(415),
    [anon_sym_PERCENTr15] = ACTIONS(415),
    [anon_sym_PERCENTeax] = ACTIONS(415),
    [anon_sym_PERCENTecx] = ACTIONS(415),
    [anon_sym_PERCENTedx] = ACTIONS(415),
    [anon_sym_PERCENTebx] = ACTIONS(415),
    [anon_sym_PERCENTesi] = ACTIONS(415),
    [anon_sym_PERCENTedi] = ACTIONS(415),
    [anon_sym_PERCENTebp] = ACTIONS(415),
    [anon_sym_PERCENTesp] = ACTIONS(415),
    [anon_sym_PERCENTr8d] = ACTIONS(415),
    [anon_sym_PERCENTr9d] = ACTIONS(415),
    [anon_sym_PERCENTr10d] = ACTIONS(415),
    [anon_sym_PERCENTr11d] = ACTIONS(415),
    [anon_sym_PERCENTr12d] = ACTIONS(415),
    [anon_sym_PERCENTr13d] = ACTIONS(415),
    [anon_sym_PERCENTr14d] = ACTIONS(415),
    [anon_sym_PERCENTr15d] = ACTIONS(415),
    [anon_sym_PERCENTax] = ACTIONS(415),
    [anon_sym_PERCENTcx] = ACTIONS(415),
    [anon_sym_PERCENTdx] = ACTIONS(415),
    [anon_sym_PERCENTbx] = ACTIONS(415),
    [anon_sym_PERCENTsi] = ACTIONS(415),
    [anon_sym_PERCENTdi] = ACTIONS(415),
    [anon_sym_PERCENTsp] = ACTIONS(415),
    [anon_sym_PERCENTbp] = ACTIONS(415),
    [anon_sym_PERCENTr8w] = ACTIONS(415),
    [anon_sym_PERCENTr9w] = ACTIONS(415),
    [anon_sym_PERCENTr10w] = ACTIONS(415),
    [anon_sym_PERCENTr11w] = ACTIONS(415),
    [anon_sym_PERCENTr12w] = ACTIONS(415),
    [anon_sym_PERCENTr13w] = ACTIONS(415),
    [anon_sym_PERCENTr14w] = ACTIONS(415),
    [anon_sym_PERCENTr15w] = ACTIONS(415),
    [anon_sym_PERCENTal] = ACTIONS(415),
    [anon_sym_PERCENTcl] = ACTIONS(415),
    [anon_sym_PERCENTdl] = ACTIONS(415),
    [anon_sym_PERCENTbl] = ACTIONS(415),
    [anon_sym_PERCENTsil] = ACTIONS(415),
    [anon_sym_PERCENTdil] = ACTIONS(415),
    [anon_sym_PERCENTspl] = ACTIONS(415),
    [anon_sym_PERCENTbpl] = ACTIONS(415),
    [anon_sym_PERCENTr8b] = ACTIONS(415),
    [anon_sym_PERCENTr9b] = ACTIONS(415),
    [anon_sym_PERCENTr10b] = ACTIONS(415),
    [anon_sym_PERCENTr11b] = ACTIONS(415),
    [anon_sym_PERCENTr12b] = ACTIONS(415),
    [anon_sym_PERCENTr13b] = ACTIONS(415),
    [anon_sym_PERCENTr14b] = ACTIONS(415),
    [anon_sym_PERCENTr15b] = ACTIONS(415),
    [anon_sym_DASH] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(415),
    [anon_sym_movsq] = ACTIONS(415),
    [anon_sym_cmpsb] = ACTIONS(415),
    [anon_sym_cmpxchg] = ACTIONS(415),
    [anon_sym_movsl] = ACTIONS(415),
    [anon_sym_PERCENTcr0] = ACTIONS(415),
    [anon_sym_PERCENTcr2] = ACTIONS(415),
    [anon_sym_PERCENTcr3] = ACTIONS(415),
    [anon_sym_PERCENTcr4] = ACTIONS(415),
    [anon_sym_PERCENTrip] = ACTIONS(415),
    [anon_sym_PERCENTeip] = ACTIONS(415),
    [anon_sym_PERCENTip] = ACTIONS(415),
    [anon_sym_PERCENTst] = ACTIONS(415),
    [anon_sym_PERCENT] = ACTIONS(415),
  },
  [47] = {
    [sym_registerOperand] = STATE(251),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(274),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(419),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [48] = {
    [aux_sym_comment_token1] = ACTIONS(421),
    [aux_sym_comment_token2] = ACTIONS(421),
    [sym__line_break] = ACTIONS(423),
    [anon_sym_f] = ACTIONS(421),
    [aux_sym_operand_token1] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_DOLLAR] = ACTIONS(421),
    [anon_sym_PERCENTss] = ACTIONS(421),
    [anon_sym_PERCENTcs] = ACTIONS(421),
    [anon_sym_PERCENTds] = ACTIONS(421),
    [anon_sym_PERCENTes] = ACTIONS(421),
    [anon_sym_PERCENTfs] = ACTIONS(421),
    [anon_sym_PERCENTgs] = ACTIONS(421),
    [anon_sym_PERCENTrax] = ACTIONS(421),
    [anon_sym_PERCENTrbx] = ACTIONS(421),
    [anon_sym_PERCENTrcx] = ACTIONS(421),
    [anon_sym_PERCENTrdx] = ACTIONS(421),
    [anon_sym_PERCENTrsi] = ACTIONS(421),
    [anon_sym_PERCENTrdi] = ACTIONS(421),
    [anon_sym_PERCENTrbp] = ACTIONS(421),
    [anon_sym_PERCENTrsp] = ACTIONS(421),
    [anon_sym_PERCENTr8] = ACTIONS(421),
    [anon_sym_PERCENTr9] = ACTIONS(421),
    [anon_sym_PERCENTr10] = ACTIONS(421),
    [anon_sym_PERCENTr11] = ACTIONS(421),
    [anon_sym_PERCENTr12] = ACTIONS(421),
    [anon_sym_PERCENTr13] = ACTIONS(421),
    [anon_sym_PERCENTr14] = ACTIONS(421),
    [anon_sym_PERCENTr15] = ACTIONS(421),
    [anon_sym_PERCENTeax] = ACTIONS(421),
    [anon_sym_PERCENTecx] = ACTIONS(421),
    [anon_sym_PERCENTedx] = ACTIONS(421),
    [anon_sym_PERCENTebx] = ACTIONS(421),
    [anon_sym_PERCENTesi] = ACTIONS(421),
    [anon_sym_PERCENTedi] = ACTIONS(421),
    [anon_sym_PERCENTebp] = ACTIONS(421),
    [anon_sym_PERCENTesp] = ACTIONS(421),
    [anon_sym_PERCENTr8d] = ACTIONS(421),
    [anon_sym_PERCENTr9d] = ACTIONS(421),
    [anon_sym_PERCENTr10d] = ACTIONS(421),
    [anon_sym_PERCENTr11d] = ACTIONS(421),
    [anon_sym_PERCENTr12d] = ACTIONS(421),
    [anon_sym_PERCENTr13d] = ACTIONS(421),
    [anon_sym_PERCENTr14d] = ACTIONS(421),
    [anon_sym_PERCENTr15d] = ACTIONS(421),
    [anon_sym_PERCENTax] = ACTIONS(421),
    [anon_sym_PERCENTcx] = ACTIONS(421),
    [anon_sym_PERCENTdx] = ACTIONS(421),
    [anon_sym_PERCENTbx] = ACTIONS(421),
    [anon_sym_PERCENTsi] = ACTIONS(421),
    [anon_sym_PERCENTdi] = ACTIONS(421),
    [anon_sym_PERCENTsp] = ACTIONS(421),
    [anon_sym_PERCENTbp] = ACTIONS(421),
    [anon_sym_PERCENTr8w] = ACTIONS(421),
    [anon_sym_PERCENTr9w] = ACTIONS(421),
    [anon_sym_PERCENTr10w] = ACTIONS(421),
    [anon_sym_PERCENTr11w] = ACTIONS(421),
    [anon_sym_PERCENTr12w] = ACTIONS(421),
    [anon_sym_PERCENTr13w] = ACTIONS(421),
    [anon_sym_PERCENTr14w] = ACTIONS(421),
    [anon_sym_PERCENTr15w] = ACTIONS(421),
    [anon_sym_PERCENTal] = ACTIONS(421),
    [anon_sym_PERCENTcl] = ACTIONS(421),
    [anon_sym_PERCENTdl] = ACTIONS(421),
    [anon_sym_PERCENTbl] = ACTIONS(421),
    [anon_sym_PERCENTsil] = ACTIONS(421),
    [anon_sym_PERCENTdil] = ACTIONS(421),
    [anon_sym_PERCENTspl] = ACTIONS(421),
    [anon_sym_PERCENTbpl] = ACTIONS(421),
    [anon_sym_PERCENTr8b] = ACTIONS(421),
    [anon_sym_PERCENTr9b] = ACTIONS(421),
    [anon_sym_PERCENTr10b] = ACTIONS(421),
    [anon_sym_PERCENTr11b] = ACTIONS(421),
    [anon_sym_PERCENTr12b] = ACTIONS(421),
    [anon_sym_PERCENTr13b] = ACTIONS(421),
    [anon_sym_PERCENTr14b] = ACTIONS(421),
    [anon_sym_PERCENTr15b] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_LPAREN] = ACTIONS(421),
    [anon_sym_movsq] = ACTIONS(421),
    [anon_sym_cmpsb] = ACTIONS(421),
    [anon_sym_cmpxchg] = ACTIONS(421),
    [anon_sym_movsl] = ACTIONS(421),
    [anon_sym_PERCENTcr0] = ACTIONS(421),
    [anon_sym_PERCENTcr2] = ACTIONS(421),
    [anon_sym_PERCENTcr3] = ACTIONS(421),
    [anon_sym_PERCENTcr4] = ACTIONS(421),
    [anon_sym_PERCENTrip] = ACTIONS(421),
    [anon_sym_PERCENTeip] = ACTIONS(421),
    [anon_sym_PERCENTip] = ACTIONS(421),
    [anon_sym_PERCENTst] = ACTIONS(421),
    [anon_sym_PERCENT] = ACTIONS(421),
  },
  [49] = {
    [aux_sym_comment_token1] = ACTIONS(425),
    [aux_sym_comment_token2] = ACTIONS(425),
    [sym__line_break] = ACTIONS(427),
    [anon_sym_f] = ACTIONS(425),
    [aux_sym_operand_token1] = ACTIONS(425),
    [anon_sym_LT] = ACTIONS(425),
    [anon_sym_DOLLAR] = ACTIONS(425),
    [anon_sym_PERCENTss] = ACTIONS(425),
    [anon_sym_PERCENTcs] = ACTIONS(425),
    [anon_sym_PERCENTds] = ACTIONS(425),
    [anon_sym_PERCENTes] = ACTIONS(425),
    [anon_sym_PERCENTfs] = ACTIONS(425),
    [anon_sym_PERCENTgs] = ACTIONS(425),
    [anon_sym_PERCENTrax] = ACTIONS(425),
    [anon_sym_PERCENTrbx] = ACTIONS(425),
    [anon_sym_PERCENTrcx] = ACTIONS(425),
    [anon_sym_PERCENTrdx] = ACTIONS(425),
    [anon_sym_PERCENTrsi] = ACTIONS(425),
    [anon_sym_PERCENTrdi] = ACTIONS(425),
    [anon_sym_PERCENTrbp] = ACTIONS(425),
    [anon_sym_PERCENTrsp] = ACTIONS(425),
    [anon_sym_PERCENTr8] = ACTIONS(425),
    [anon_sym_PERCENTr9] = ACTIONS(425),
    [anon_sym_PERCENTr10] = ACTIONS(425),
    [anon_sym_PERCENTr11] = ACTIONS(425),
    [anon_sym_PERCENTr12] = ACTIONS(425),
    [anon_sym_PERCENTr13] = ACTIONS(425),
    [anon_sym_PERCENTr14] = ACTIONS(425),
    [anon_sym_PERCENTr15] = ACTIONS(425),
    [anon_sym_PERCENTeax] = ACTIONS(425),
    [anon_sym_PERCENTecx] = ACTIONS(425),
    [anon_sym_PERCENTedx] = ACTIONS(425),
    [anon_sym_PERCENTebx] = ACTIONS(425),
    [anon_sym_PERCENTesi] = ACTIONS(425),
    [anon_sym_PERCENTedi] = ACTIONS(425),
    [anon_sym_PERCENTebp] = ACTIONS(425),
    [anon_sym_PERCENTesp] = ACTIONS(425),
    [anon_sym_PERCENTr8d] = ACTIONS(425),
    [anon_sym_PERCENTr9d] = ACTIONS(425),
    [anon_sym_PERCENTr10d] = ACTIONS(425),
    [anon_sym_PERCENTr11d] = ACTIONS(425),
    [anon_sym_PERCENTr12d] = ACTIONS(425),
    [anon_sym_PERCENTr13d] = ACTIONS(425),
    [anon_sym_PERCENTr14d] = ACTIONS(425),
    [anon_sym_PERCENTr15d] = ACTIONS(425),
    [anon_sym_PERCENTax] = ACTIONS(425),
    [anon_sym_PERCENTcx] = ACTIONS(425),
    [anon_sym_PERCENTdx] = ACTIONS(425),
    [anon_sym_PERCENTbx] = ACTIONS(425),
    [anon_sym_PERCENTsi] = ACTIONS(425),
    [anon_sym_PERCENTdi] = ACTIONS(425),
    [anon_sym_PERCENTsp] = ACTIONS(425),
    [anon_sym_PERCENTbp] = ACTIONS(425),
    [anon_sym_PERCENTr8w] = ACTIONS(425),
    [anon_sym_PERCENTr9w] = ACTIONS(425),
    [anon_sym_PERCENTr10w] = ACTIONS(425),
    [anon_sym_PERCENTr11w] = ACTIONS(425),
    [anon_sym_PERCENTr12w] = ACTIONS(425),
    [anon_sym_PERCENTr13w] = ACTIONS(425),
    [anon_sym_PERCENTr14w] = ACTIONS(425),
    [anon_sym_PERCENTr15w] = ACTIONS(425),
    [anon_sym_PERCENTal] = ACTIONS(425),
    [anon_sym_PERCENTcl] = ACTIONS(425),
    [anon_sym_PERCENTdl] = ACTIONS(425),
    [anon_sym_PERCENTbl] = ACTIONS(425),
    [anon_sym_PERCENTsil] = ACTIONS(425),
    [anon_sym_PERCENTdil] = ACTIONS(425),
    [anon_sym_PERCENTspl] = ACTIONS(425),
    [anon_sym_PERCENTbpl] = ACTIONS(425),
    [anon_sym_PERCENTr8b] = ACTIONS(425),
    [anon_sym_PERCENTr9b] = ACTIONS(425),
    [anon_sym_PERCENTr10b] = ACTIONS(425),
    [anon_sym_PERCENTr11b] = ACTIONS(425),
    [anon_sym_PERCENTr12b] = ACTIONS(425),
    [anon_sym_PERCENTr13b] = ACTIONS(425),
    [anon_sym_PERCENTr14b] = ACTIONS(425),
    [anon_sym_PERCENTr15b] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(425),
    [anon_sym_movsq] = ACTIONS(425),
    [anon_sym_cmpsb] = ACTIONS(425),
    [anon_sym_cmpxchg] = ACTIONS(425),
    [anon_sym_movsl] = ACTIONS(425),
    [anon_sym_PERCENTcr0] = ACTIONS(425),
    [anon_sym_PERCENTcr2] = ACTIONS(425),
    [anon_sym_PERCENTcr3] = ACTIONS(425),
    [anon_sym_PERCENTcr4] = ACTIONS(425),
    [anon_sym_PERCENTrip] = ACTIONS(425),
    [anon_sym_PERCENTeip] = ACTIONS(425),
    [anon_sym_PERCENTip] = ACTIONS(425),
    [anon_sym_PERCENTst] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(425),
  },
  [50] = {
    [sym_registerOperand] = STATE(195),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_base] = STATE(308),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [sym__comma] = ACTIONS(371),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [51] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(285),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [52] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(292),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [53] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(271),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [54] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(267),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [55] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(291),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [56] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(299),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [57] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(294),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [58] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(275),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [59] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(296),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [60] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(297),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [61] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(298),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [62] = {
    [sym_registerOperand] = STATE(284),
    [sym_segmentRegisterOperand] = STATE(196),
    [sym_generalRegisterOperand] = STATE(196),
    [sym_generalRegister64Bits] = STATE(197),
    [sym_generalRegister32Bits] = STATE(197),
    [sym_generalRegister16Bits] = STATE(197),
    [sym_generalRegister8Bits] = STATE(197),
    [sym_index] = STATE(270),
    [sym_controlRegisterOperand] = STATE(196),
    [sym_instructionRegisterOperand] = STATE(196),
    [sym_floatRegisterOperand] = STATE(196),
    [sym_otherRegisterOperand] = STATE(196),
    [anon_sym_PERCENTss] = ACTIONS(311),
    [anon_sym_PERCENTcs] = ACTIONS(311),
    [anon_sym_PERCENTds] = ACTIONS(311),
    [anon_sym_PERCENTes] = ACTIONS(313),
    [anon_sym_PERCENTfs] = ACTIONS(311),
    [anon_sym_PERCENTgs] = ACTIONS(311),
    [anon_sym_PERCENTrax] = ACTIONS(315),
    [anon_sym_PERCENTrbx] = ACTIONS(315),
    [anon_sym_PERCENTrcx] = ACTIONS(315),
    [anon_sym_PERCENTrdx] = ACTIONS(315),
    [anon_sym_PERCENTrsi] = ACTIONS(315),
    [anon_sym_PERCENTrdi] = ACTIONS(315),
    [anon_sym_PERCENTrbp] = ACTIONS(315),
    [anon_sym_PERCENTrsp] = ACTIONS(315),
    [anon_sym_PERCENTr8] = ACTIONS(317),
    [anon_sym_PERCENTr9] = ACTIONS(317),
    [anon_sym_PERCENTr10] = ACTIONS(317),
    [anon_sym_PERCENTr11] = ACTIONS(317),
    [anon_sym_PERCENTr12] = ACTIONS(317),
    [anon_sym_PERCENTr13] = ACTIONS(317),
    [anon_sym_PERCENTr14] = ACTIONS(317),
    [anon_sym_PERCENTr15] = ACTIONS(317),
    [anon_sym_PERCENTeax] = ACTIONS(319),
    [anon_sym_PERCENTecx] = ACTIONS(319),
    [anon_sym_PERCENTedx] = ACTIONS(319),
    [anon_sym_PERCENTebx] = ACTIONS(319),
    [anon_sym_PERCENTesi] = ACTIONS(319),
    [anon_sym_PERCENTedi] = ACTIONS(319),
    [anon_sym_PERCENTebp] = ACTIONS(319),
    [anon_sym_PERCENTesp] = ACTIONS(319),
    [anon_sym_PERCENTr8d] = ACTIONS(319),
    [anon_sym_PERCENTr9d] = ACTIONS(319),
    [anon_sym_PERCENTr10d] = ACTIONS(319),
    [anon_sym_PERCENTr11d] = ACTIONS(319),
    [anon_sym_PERCENTr12d] = ACTIONS(319),
    [anon_sym_PERCENTr13d] = ACTIONS(319),
    [anon_sym_PERCENTr14d] = ACTIONS(319),
    [anon_sym_PERCENTr15d] = ACTIONS(319),
    [anon_sym_PERCENTax] = ACTIONS(321),
    [anon_sym_PERCENTcx] = ACTIONS(321),
    [anon_sym_PERCENTdx] = ACTIONS(321),
    [anon_sym_PERCENTbx] = ACTIONS(321),
    [anon_sym_PERCENTsi] = ACTIONS(323),
    [anon_sym_PERCENTdi] = ACTIONS(323),
    [anon_sym_PERCENTsp] = ACTIONS(323),
    [anon_sym_PERCENTbp] = ACTIONS(323),
    [anon_sym_PERCENTr8w] = ACTIONS(321),
    [anon_sym_PERCENTr9w] = ACTIONS(321),
    [anon_sym_PERCENTr10w] = ACTIONS(321),
    [anon_sym_PERCENTr11w] = ACTIONS(321),
    [anon_sym_PERCENTr12w] = ACTIONS(321),
    [anon_sym_PERCENTr13w] = ACTIONS(321),
    [anon_sym_PERCENTr14w] = ACTIONS(321),
    [anon_sym_PERCENTr15w] = ACTIONS(321),
    [anon_sym_PERCENTal] = ACTIONS(325),
    [anon_sym_PERCENTcl] = ACTIONS(325),
    [anon_sym_PERCENTdl] = ACTIONS(325),
    [anon_sym_PERCENTbl] = ACTIONS(325),
    [anon_sym_PERCENTsil] = ACTIONS(325),
    [anon_sym_PERCENTdil] = ACTIONS(325),
    [anon_sym_PERCENTspl] = ACTIONS(325),
    [anon_sym_PERCENTbpl] = ACTIONS(325),
    [anon_sym_PERCENTr8b] = ACTIONS(325),
    [anon_sym_PERCENTr9b] = ACTIONS(325),
    [anon_sym_PERCENTr10b] = ACTIONS(325),
    [anon_sym_PERCENTr11b] = ACTIONS(325),
    [anon_sym_PERCENTr12b] = ACTIONS(325),
    [anon_sym_PERCENTr13b] = ACTIONS(325),
    [anon_sym_PERCENTr14b] = ACTIONS(325),
    [anon_sym_PERCENTr15b] = ACTIONS(325),
    [anon_sym_PERCENTcr0] = ACTIONS(327),
    [anon_sym_PERCENTcr2] = ACTIONS(327),
    [anon_sym_PERCENTcr3] = ACTIONS(327),
    [anon_sym_PERCENTcr4] = ACTIONS(327),
    [anon_sym_PERCENTrip] = ACTIONS(329),
    [anon_sym_PERCENTeip] = ACTIONS(329),
    [anon_sym_PERCENTip] = ACTIONS(329),
    [anon_sym_PERCENTst] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
  },
  [63] = {
    [sym_registerOperand] = STATE(191),
    [sym_segmentRegisterOperand] = STATE(178),
    [sym_generalRegisterOperand] = STATE(178),
    [sym_generalRegister64Bits] = STATE(177),
    [sym_generalRegister32Bits] = STATE(177),
    [sym_generalRegister16Bits] = STATE(177),
    [sym_generalRegister8Bits] = STATE(177),
    [sym_controlRegisterOperand] = STATE(178),
    [sym_instructionRegisterOperand] = STATE(178),
    [sym_floatRegisterOperand] = STATE(178),
    [sym_otherRegisterOperand] = STATE(178),
    [anon_sym_PERCENTss] = ACTIONS(271),
    [anon_sym_PERCENTcs] = ACTIONS(271),
    [anon_sym_PERCENTds] = ACTIONS(271),
    [anon_sym_PERCENTes] = ACTIONS(273),
    [anon_sym_PERCENTfs] = ACTIONS(271),
    [anon_sym_PERCENTgs] = ACTIONS(271),
    [anon_sym_PERCENTrax] = ACTIONS(275),
    [anon_sym_PERCENTrbx] = ACTIONS(275),
    [anon_sym_PERCENTrcx] = ACTIONS(275),
    [anon_sym_PERCENTrdx] = ACTIONS(275),
    [anon_sym_PERCENTrsi] = ACTIONS(275),
    [anon_sym_PERCENTrdi] = ACTIONS(275),
    [anon_sym_PERCENTrbp] = ACTIONS(275),
    [anon_sym_PERCENTrsp] = ACTIONS(275),
    [anon_sym_PERCENTr8] = ACTIONS(277),
    [anon_sym_PERCENTr9] = ACTIONS(277),
    [anon_sym_PERCENTr10] = ACTIONS(277),
    [anon_sym_PERCENTr11] = ACTIONS(277),
    [anon_sym_PERCENTr12] = ACTIONS(277),
    [anon_sym_PERCENTr13] = ACTIONS(277),
    [anon_sym_PERCENTr14] = ACTIONS(277),
    [anon_sym_PERCENTr15] = ACTIONS(277),
    [anon_sym_PERCENTeax] = ACTIONS(279),
    [anon_sym_PERCENTecx] = ACTIONS(279),
    [anon_sym_PERCENTedx] = ACTIONS(279),
    [anon_sym_PERCENTebx] = ACTIONS(279),
    [anon_sym_PERCENTesi] = ACTIONS(279),
    [anon_sym_PERCENTedi] = ACTIONS(279),
    [anon_sym_PERCENTebp] = ACTIONS(279),
    [anon_sym_PERCENTesp] = ACTIONS(279),
    [anon_sym_PERCENTr8d] = ACTIONS(279),
    [anon_sym_PERCENTr9d] = ACTIONS(279),
    [anon_sym_PERCENTr10d] = ACTIONS(279),
    [anon_sym_PERCENTr11d] = ACTIONS(279),
    [anon_sym_PERCENTr12d] = ACTIONS(279),
    [anon_sym_PERCENTr13d] = ACTIONS(279),
    [anon_sym_PERCENTr14d] = ACTIONS(279),
    [anon_sym_PERCENTr15d] = ACTIONS(279),
    [anon_sym_PERCENTax] = ACTIONS(281),
    [anon_sym_PERCENTcx] = ACTIONS(281),
    [anon_sym_PERCENTdx] = ACTIONS(281),
    [anon_sym_PERCENTbx] = ACTIONS(281),
    [anon_sym_PERCENTsi] = ACTIONS(283),
    [anon_sym_PERCENTdi] = ACTIONS(283),
    [anon_sym_PERCENTsp] = ACTIONS(283),
    [anon_sym_PERCENTbp] = ACTIONS(283),
    [anon_sym_PERCENTr8w] = ACTIONS(281),
    [anon_sym_PERCENTr9w] = ACTIONS(281),
    [anon_sym_PERCENTr10w] = ACTIONS(281),
    [anon_sym_PERCENTr11w] = ACTIONS(281),
    [anon_sym_PERCENTr12w] = ACTIONS(281),
    [anon_sym_PERCENTr13w] = ACTIONS(281),
    [anon_sym_PERCENTr14w] = ACTIONS(281),
    [anon_sym_PERCENTr15w] = ACTIONS(281),
    [anon_sym_PERCENTal] = ACTIONS(285),
    [anon_sym_PERCENTcl] = ACTIONS(285),
    [anon_sym_PERCENTdl] = ACTIONS(285),
    [anon_sym_PERCENTbl] = ACTIONS(285),
    [anon_sym_PERCENTsil] = ACTIONS(285),
    [anon_sym_PERCENTdil] = ACTIONS(285),
    [anon_sym_PERCENTspl] = ACTIONS(285),
    [anon_sym_PERCENTbpl] = ACTIONS(285),
    [anon_sym_PERCENTr8b] = ACTIONS(285),
    [anon_sym_PERCENTr9b] = ACTIONS(285),
    [anon_sym_PERCENTr10b] = ACTIONS(285),
    [anon_sym_PERCENTr11b] = ACTIONS(285),
    [anon_sym_PERCENTr12b] = ACTIONS(285),
    [anon_sym_PERCENTr13b] = ACTIONS(285),
    [anon_sym_PERCENTr14b] = ACTIONS(285),
    [anon_sym_PERCENTr15b] = ACTIONS(285),
    [anon_sym_PERCENTcr0] = ACTIONS(289),
    [anon_sym_PERCENTcr2] = ACTIONS(289),
    [anon_sym_PERCENTcr3] = ACTIONS(289),
    [anon_sym_PERCENTcr4] = ACTIONS(289),
    [anon_sym_PERCENTrip] = ACTIONS(291),
    [anon_sym_PERCENTeip] = ACTIONS(291),
    [anon_sym_PERCENTip] = ACTIONS(291),
    [anon_sym_PERCENTst] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(295),
  },
  [64] = {
    [sym_registerOperand] = STATE(192),
    [sym_segmentRegisterOperand] = STATE(178),
    [sym_generalRegisterOperand] = STATE(178),
    [sym_generalRegister64Bits] = STATE(177),
    [sym_generalRegister32Bits] = STATE(177),
    [sym_generalRegister16Bits] = STATE(177),
    [sym_generalRegister8Bits] = STATE(177),
    [sym_controlRegisterOperand] = STATE(178),
    [sym_instructionRegisterOperand] = STATE(178),
    [sym_floatRegisterOperand] = STATE(178),
    [sym_otherRegisterOperand] = STATE(178),
    [anon_sym_PERCENTss] = ACTIONS(271),
    [anon_sym_PERCENTcs] = ACTIONS(271),
    [anon_sym_PERCENTds] = ACTIONS(271),
    [anon_sym_PERCENTes] = ACTIONS(273),
    [anon_sym_PERCENTfs] = ACTIONS(271),
    [anon_sym_PERCENTgs] = ACTIONS(271),
    [anon_sym_PERCENTrax] = ACTIONS(275),
    [anon_sym_PERCENTrbx] = ACTIONS(275),
    [anon_sym_PERCENTrcx] = ACTIONS(275),
    [anon_sym_PERCENTrdx] = ACTIONS(275),
    [anon_sym_PERCENTrsi] = ACTIONS(275),
    [anon_sym_PERCENTrdi] = ACTIONS(275),
    [anon_sym_PERCENTrbp] = ACTIONS(275),
    [anon_sym_PERCENTrsp] = ACTIONS(275),
    [anon_sym_PERCENTr8] = ACTIONS(277),
    [anon_sym_PERCENTr9] = ACTIONS(277),
    [anon_sym_PERCENTr10] = ACTIONS(277),
    [anon_sym_PERCENTr11] = ACTIONS(277),
    [anon_sym_PERCENTr12] = ACTIONS(277),
    [anon_sym_PERCENTr13] = ACTIONS(277),
    [anon_sym_PERCENTr14] = ACTIONS(277),
    [anon_sym_PERCENTr15] = ACTIONS(277),
    [anon_sym_PERCENTeax] = ACTIONS(279),
    [anon_sym_PERCENTecx] = ACTIONS(279),
    [anon_sym_PERCENTedx] = ACTIONS(279),
    [anon_sym_PERCENTebx] = ACTIONS(279),
    [anon_sym_PERCENTesi] = ACTIONS(279),
    [anon_sym_PERCENTedi] = ACTIONS(279),
    [anon_sym_PERCENTebp] = ACTIONS(279),
    [anon_sym_PERCENTesp] = ACTIONS(279),
    [anon_sym_PERCENTr8d] = ACTIONS(279),
    [anon_sym_PERCENTr9d] = ACTIONS(279),
    [anon_sym_PERCENTr10d] = ACTIONS(279),
    [anon_sym_PERCENTr11d] = ACTIONS(279),
    [anon_sym_PERCENTr12d] = ACTIONS(279),
    [anon_sym_PERCENTr13d] = ACTIONS(279),
    [anon_sym_PERCENTr14d] = ACTIONS(279),
    [anon_sym_PERCENTr15d] = ACTIONS(279),
    [anon_sym_PERCENTax] = ACTIONS(281),
    [anon_sym_PERCENTcx] = ACTIONS(281),
    [anon_sym_PERCENTdx] = ACTIONS(281),
    [anon_sym_PERCENTbx] = ACTIONS(281),
    [anon_sym_PERCENTsi] = ACTIONS(283),
    [anon_sym_PERCENTdi] = ACTIONS(283),
    [anon_sym_PERCENTsp] = ACTIONS(283),
    [anon_sym_PERCENTbp] = ACTIONS(283),
    [anon_sym_PERCENTr8w] = ACTIONS(281),
    [anon_sym_PERCENTr9w] = ACTIONS(281),
    [anon_sym_PERCENTr10w] = ACTIONS(281),
    [anon_sym_PERCENTr11w] = ACTIONS(281),
    [anon_sym_PERCENTr12w] = ACTIONS(281),
    [anon_sym_PERCENTr13w] = ACTIONS(281),
    [anon_sym_PERCENTr14w] = ACTIONS(281),
    [anon_sym_PERCENTr15w] = ACTIONS(281),
    [anon_sym_PERCENTal] = ACTIONS(285),
    [anon_sym_PERCENTcl] = ACTIONS(285),
    [anon_sym_PERCENTdl] = ACTIONS(285),
    [anon_sym_PERCENTbl] = ACTIONS(285),
    [anon_sym_PERCENTsil] = ACTIONS(285),
    [anon_sym_PERCENTdil] = ACTIONS(285),
    [anon_sym_PERCENTspl] = ACTIONS(285),
    [anon_sym_PERCENTbpl] = ACTIONS(285),
    [anon_sym_PERCENTr8b] = ACTIONS(285),
    [anon_sym_PERCENTr9b] = ACTIONS(285),
    [anon_sym_PERCENTr10b] = ACTIONS(285),
    [anon_sym_PERCENTr11b] = ACTIONS(285),
    [anon_sym_PERCENTr12b] = ACTIONS(285),
    [anon_sym_PERCENTr13b] = ACTIONS(285),
    [anon_sym_PERCENTr14b] = ACTIONS(285),
    [anon_sym_PERCENTr15b] = ACTIONS(285),
    [anon_sym_PERCENTcr0] = ACTIONS(289),
    [anon_sym_PERCENTcr2] = ACTIONS(289),
    [anon_sym_PERCENTcr3] = ACTIONS(289),
    [anon_sym_PERCENTcr4] = ACTIONS(289),
    [anon_sym_PERCENTrip] = ACTIONS(291),
    [anon_sym_PERCENTeip] = ACTIONS(291),
    [anon_sym_PERCENTip] = ACTIONS(291),
    [anon_sym_PERCENTst] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(295),
  },
  [65] = {
    [sym_registerOperand] = STATE(92),
    [sym_segmentRegisterOperand] = STATE(86),
    [sym_generalRegisterOperand] = STATE(86),
    [sym_generalRegister64Bits] = STATE(84),
    [sym_generalRegister32Bits] = STATE(84),
    [sym_generalRegister16Bits] = STATE(84),
    [sym_generalRegister8Bits] = STATE(84),
    [sym_controlRegisterOperand] = STATE(86),
    [sym_instructionRegisterOperand] = STATE(86),
    [sym_floatRegisterOperand] = STATE(86),
    [sym_otherRegisterOperand] = STATE(86),
    [anon_sym_PERCENTss] = ACTIONS(253),
    [anon_sym_PERCENTcs] = ACTIONS(253),
    [anon_sym_PERCENTds] = ACTIONS(253),
    [anon_sym_PERCENTes] = ACTIONS(171),
    [anon_sym_PERCENTfs] = ACTIONS(253),
    [anon_sym_PERCENTgs] = ACTIONS(253),
    [anon_sym_PERCENTrax] = ACTIONS(255),
    [anon_sym_PERCENTrbx] = ACTIONS(255),
    [anon_sym_PERCENTrcx] = ACTIONS(255),
    [anon_sym_PERCENTrdx] = ACTIONS(255),
    [anon_sym_PERCENTrsi] = ACTIONS(255),
    [anon_sym_PERCENTrdi] = ACTIONS(255),
    [anon_sym_PERCENTrbp] = ACTIONS(255),
    [anon_sym_PERCENTrsp] = ACTIONS(255),
    [anon_sym_PERCENTr8] = ACTIONS(173),
    [anon_sym_PERCENTr9] = ACTIONS(173),
    [anon_sym_PERCENTr10] = ACTIONS(173),
    [anon_sym_PERCENTr11] = ACTIONS(173),
    [anon_sym_PERCENTr12] = ACTIONS(173),
    [anon_sym_PERCENTr13] = ACTIONS(173),
    [anon_sym_PERCENTr14] = ACTIONS(173),
    [anon_sym_PERCENTr15] = ACTIONS(173),
    [anon_sym_PERCENTeax] = ACTIONS(257),
    [anon_sym_PERCENTecx] = ACTIONS(257),
    [anon_sym_PERCENTedx] = ACTIONS(257),
    [anon_sym_PERCENTebx] = ACTIONS(257),
    [anon_sym_PERCENTesi] = ACTIONS(257),
    [anon_sym_PERCENTedi] = ACTIONS(257),
    [anon_sym_PERCENTebp] = ACTIONS(257),
    [anon_sym_PERCENTesp] = ACTIONS(257),
    [anon_sym_PERCENTr8d] = ACTIONS(257),
    [anon_sym_PERCENTr9d] = ACTIONS(257),
    [anon_sym_PERCENTr10d] = ACTIONS(257),
    [anon_sym_PERCENTr11d] = ACTIONS(257),
    [anon_sym_PERCENTr12d] = ACTIONS(257),
    [anon_sym_PERCENTr13d] = ACTIONS(257),
    [anon_sym_PERCENTr14d] = ACTIONS(257),
    [anon_sym_PERCENTr15d] = ACTIONS(257),
    [anon_sym_PERCENTax] = ACTIONS(259),
    [anon_sym_PERCENTcx] = ACTIONS(259),
    [anon_sym_PERCENTdx] = ACTIONS(259),
    [anon_sym_PERCENTbx] = ACTIONS(259),
    [anon_sym_PERCENTsi] = ACTIONS(177),
    [anon_sym_PERCENTdi] = ACTIONS(177),
    [anon_sym_PERCENTsp] = ACTIONS(177),
    [anon_sym_PERCENTbp] = ACTIONS(177),
    [anon_sym_PERCENTr8w] = ACTIONS(259),
    [anon_sym_PERCENTr9w] = ACTIONS(259),
    [anon_sym_PERCENTr10w] = ACTIONS(259),
    [anon_sym_PERCENTr11w] = ACTIONS(259),
    [anon_sym_PERCENTr12w] = ACTIONS(259),
    [anon_sym_PERCENTr13w] = ACTIONS(259),
    [anon_sym_PERCENTr14w] = ACTIONS(259),
    [anon_sym_PERCENTr15w] = ACTIONS(259),
    [anon_sym_PERCENTal] = ACTIONS(261),
    [anon_sym_PERCENTcl] = ACTIONS(261),
    [anon_sym_PERCENTdl] = ACTIONS(261),
    [anon_sym_PERCENTbl] = ACTIONS(261),
    [anon_sym_PERCENTsil] = ACTIONS(261),
    [anon_sym_PERCENTdil] = ACTIONS(261),
    [anon_sym_PERCENTspl] = ACTIONS(261),
    [anon_sym_PERCENTbpl] = ACTIONS(261),
    [anon_sym_PERCENTr8b] = ACTIONS(261),
    [anon_sym_PERCENTr9b] = ACTIONS(261),
    [anon_sym_PERCENTr10b] = ACTIONS(261),
    [anon_sym_PERCENTr11b] = ACTIONS(261),
    [anon_sym_PERCENTr12b] = ACTIONS(261),
    [anon_sym_PERCENTr13b] = ACTIONS(261),
    [anon_sym_PERCENTr14b] = ACTIONS(261),
    [anon_sym_PERCENTr15b] = ACTIONS(261),
    [anon_sym_PERCENTcr0] = ACTIONS(265),
    [anon_sym_PERCENTcr2] = ACTIONS(265),
    [anon_sym_PERCENTcr3] = ACTIONS(265),
    [anon_sym_PERCENTcr4] = ACTIONS(265),
    [anon_sym_PERCENTrip] = ACTIONS(267),
    [anon_sym_PERCENTeip] = ACTIONS(267),
    [anon_sym_PERCENTip] = ACTIONS(267),
    [anon_sym_PERCENTst] = ACTIONS(269),
    [anon_sym_PERCENT] = ACTIONS(193),
  },
  [66] = {
    [sym_registerOperand] = STATE(95),
    [sym_segmentRegisterOperand] = STATE(86),
    [sym_generalRegisterOperand] = STATE(86),
    [sym_generalRegister64Bits] = STATE(84),
    [sym_generalRegister32Bits] = STATE(84),
    [sym_generalRegister16Bits] = STATE(84),
    [sym_generalRegister8Bits] = STATE(84),
    [sym_controlRegisterOperand] = STATE(86),
    [sym_instructionRegisterOperand] = STATE(86),
    [sym_floatRegisterOperand] = STATE(86),
    [sym_otherRegisterOperand] = STATE(86),
    [anon_sym_PERCENTss] = ACTIONS(253),
    [anon_sym_PERCENTcs] = ACTIONS(253),
    [anon_sym_PERCENTds] = ACTIONS(253),
    [anon_sym_PERCENTes] = ACTIONS(171),
    [anon_sym_PERCENTfs] = ACTIONS(253),
    [anon_sym_PERCENTgs] = ACTIONS(253),
    [anon_sym_PERCENTrax] = ACTIONS(255),
    [anon_sym_PERCENTrbx] = ACTIONS(255),
    [anon_sym_PERCENTrcx] = ACTIONS(255),
    [anon_sym_PERCENTrdx] = ACTIONS(255),
    [anon_sym_PERCENTrsi] = ACTIONS(255),
    [anon_sym_PERCENTrdi] = ACTIONS(255),
    [anon_sym_PERCENTrbp] = ACTIONS(255),
    [anon_sym_PERCENTrsp] = ACTIONS(255),
    [anon_sym_PERCENTr8] = ACTIONS(173),
    [anon_sym_PERCENTr9] = ACTIONS(173),
    [anon_sym_PERCENTr10] = ACTIONS(173),
    [anon_sym_PERCENTr11] = ACTIONS(173),
    [anon_sym_PERCENTr12] = ACTIONS(173),
    [anon_sym_PERCENTr13] = ACTIONS(173),
    [anon_sym_PERCENTr14] = ACTIONS(173),
    [anon_sym_PERCENTr15] = ACTIONS(173),
    [anon_sym_PERCENTeax] = ACTIONS(257),
    [anon_sym_PERCENTecx] = ACTIONS(257),
    [anon_sym_PERCENTedx] = ACTIONS(257),
    [anon_sym_PERCENTebx] = ACTIONS(257),
    [anon_sym_PERCENTesi] = ACTIONS(257),
    [anon_sym_PERCENTedi] = ACTIONS(257),
    [anon_sym_PERCENTebp] = ACTIONS(257),
    [anon_sym_PERCENTesp] = ACTIONS(257),
    [anon_sym_PERCENTr8d] = ACTIONS(257),
    [anon_sym_PERCENTr9d] = ACTIONS(257),
    [anon_sym_PERCENTr10d] = ACTIONS(257),
    [anon_sym_PERCENTr11d] = ACTIONS(257),
    [anon_sym_PERCENTr12d] = ACTIONS(257),
    [anon_sym_PERCENTr13d] = ACTIONS(257),
    [anon_sym_PERCENTr14d] = ACTIONS(257),
    [anon_sym_PERCENTr15d] = ACTIONS(257),
    [anon_sym_PERCENTax] = ACTIONS(259),
    [anon_sym_PERCENTcx] = ACTIONS(259),
    [anon_sym_PERCENTdx] = ACTIONS(259),
    [anon_sym_PERCENTbx] = ACTIONS(259),
    [anon_sym_PERCENTsi] = ACTIONS(177),
    [anon_sym_PERCENTdi] = ACTIONS(177),
    [anon_sym_PERCENTsp] = ACTIONS(177),
    [anon_sym_PERCENTbp] = ACTIONS(177),
    [anon_sym_PERCENTr8w] = ACTIONS(259),
    [anon_sym_PERCENTr9w] = ACTIONS(259),
    [anon_sym_PERCENTr10w] = ACTIONS(259),
    [anon_sym_PERCENTr11w] = ACTIONS(259),
    [anon_sym_PERCENTr12w] = ACTIONS(259),
    [anon_sym_PERCENTr13w] = ACTIONS(259),
    [anon_sym_PERCENTr14w] = ACTIONS(259),
    [anon_sym_PERCENTr15w] = ACTIONS(259),
    [anon_sym_PERCENTal] = ACTIONS(261),
    [anon_sym_PERCENTcl] = ACTIONS(261),
    [anon_sym_PERCENTdl] = ACTIONS(261),
    [anon_sym_PERCENTbl] = ACTIONS(261),
    [anon_sym_PERCENTsil] = ACTIONS(261),
    [anon_sym_PERCENTdil] = ACTIONS(261),
    [anon_sym_PERCENTspl] = ACTIONS(261),
    [anon_sym_PERCENTbpl] = ACTIONS(261),
    [anon_sym_PERCENTr8b] = ACTIONS(261),
    [anon_sym_PERCENTr9b] = ACTIONS(261),
    [anon_sym_PERCENTr10b] = ACTIONS(261),
    [anon_sym_PERCENTr11b] = ACTIONS(261),
    [anon_sym_PERCENTr12b] = ACTIONS(261),
    [anon_sym_PERCENTr13b] = ACTIONS(261),
    [anon_sym_PERCENTr14b] = ACTIONS(261),
    [anon_sym_PERCENTr15b] = ACTIONS(261),
    [anon_sym_PERCENTcr0] = ACTIONS(265),
    [anon_sym_PERCENTcr2] = ACTIONS(265),
    [anon_sym_PERCENTcr3] = ACTIONS(265),
    [anon_sym_PERCENTcr4] = ACTIONS(265),
    [anon_sym_PERCENTrip] = ACTIONS(267),
    [anon_sym_PERCENTeip] = ACTIONS(267),
    [anon_sym_PERCENTip] = ACTIONS(267),
    [anon_sym_PERCENTst] = ACTIONS(269),
    [anon_sym_PERCENT] = ACTIONS(193),
  },
  [67] = {
    [aux_sym_operand_repeat1] = STATE(67),
    [sym__comma] = ACTIONS(429),
    [aux_sym_operand_token1] = ACTIONS(431),
    [anon_sym_PERCENTss] = ACTIONS(429),
    [anon_sym_PERCENTcs] = ACTIONS(429),
    [anon_sym_PERCENTds] = ACTIONS(429),
    [anon_sym_PERCENTes] = ACTIONS(434),
    [anon_sym_PERCENTfs] = ACTIONS(429),
    [anon_sym_PERCENTgs] = ACTIONS(429),
    [anon_sym_PERCENTrax] = ACTIONS(429),
    [anon_sym_PERCENTrbx] = ACTIONS(429),
    [anon_sym_PERCENTrcx] = ACTIONS(429),
    [anon_sym_PERCENTrdx] = ACTIONS(429),
    [anon_sym_PERCENTrsi] = ACTIONS(429),
    [anon_sym_PERCENTrdi] = ACTIONS(429),
    [anon_sym_PERCENTrbp] = ACTIONS(429),
    [anon_sym_PERCENTrsp] = ACTIONS(429),
    [anon_sym_PERCENTr8] = ACTIONS(434),
    [anon_sym_PERCENTr9] = ACTIONS(434),
    [anon_sym_PERCENTr10] = ACTIONS(434),
    [anon_sym_PERCENTr11] = ACTIONS(434),
    [anon_sym_PERCENTr12] = ACTIONS(434),
    [anon_sym_PERCENTr13] = ACTIONS(434),
    [anon_sym_PERCENTr14] = ACTIONS(434),
    [anon_sym_PERCENTr15] = ACTIONS(434),
    [anon_sym_PERCENTeax] = ACTIONS(429),
    [anon_sym_PERCENTecx] = ACTIONS(429),
    [anon_sym_PERCENTedx] = ACTIONS(429),
    [anon_sym_PERCENTebx] = ACTIONS(429),
    [anon_sym_PERCENTesi] = ACTIONS(429),
    [anon_sym_PERCENTedi] = ACTIONS(429),
    [anon_sym_PERCENTebp] = ACTIONS(429),
    [anon_sym_PERCENTesp] = ACTIONS(429),
    [anon_sym_PERCENTr8d] = ACTIONS(429),
    [anon_sym_PERCENTr9d] = ACTIONS(429),
    [anon_sym_PERCENTr10d] = ACTIONS(429),
    [anon_sym_PERCENTr11d] = ACTIONS(429),
    [anon_sym_PERCENTr12d] = ACTIONS(429),
    [anon_sym_PERCENTr13d] = ACTIONS(429),
    [anon_sym_PERCENTr14d] = ACTIONS(429),
    [anon_sym_PERCENTr15d] = ACTIONS(429),
    [anon_sym_PERCENTax] = ACTIONS(429),
    [anon_sym_PERCENTcx] = ACTIONS(429),
    [anon_sym_PERCENTdx] = ACTIONS(429),
    [anon_sym_PERCENTbx] = ACTIONS(429),
    [anon_sym_PERCENTsi] = ACTIONS(434),
    [anon_sym_PERCENTdi] = ACTIONS(434),
    [anon_sym_PERCENTsp] = ACTIONS(434),
    [anon_sym_PERCENTbp] = ACTIONS(434),
    [anon_sym_PERCENTr8w] = ACTIONS(429),
    [anon_sym_PERCENTr9w] = ACTIONS(429),
    [anon_sym_PERCENTr10w] = ACTIONS(429),
    [anon_sym_PERCENTr11w] = ACTIONS(429),
    [anon_sym_PERCENTr12w] = ACTIONS(429),
    [anon_sym_PERCENTr13w] = ACTIONS(429),
    [anon_sym_PERCENTr14w] = ACTIONS(429),
    [anon_sym_PERCENTr15w] = ACTIONS(429),
    [anon_sym_PERCENTal] = ACTIONS(429),
    [anon_sym_PERCENTcl] = ACTIONS(429),
    [anon_sym_PERCENTdl] = ACTIONS(429),
    [anon_sym_PERCENTbl] = ACTIONS(429),
    [anon_sym_PERCENTsil] = ACTIONS(429),
    [anon_sym_PERCENTdil] = ACTIONS(429),
    [anon_sym_PERCENTspl] = ACTIONS(429),
    [anon_sym_PERCENTbpl] = ACTIONS(429),
    [anon_sym_PERCENTr8b] = ACTIONS(429),
    [anon_sym_PERCENTr9b] = ACTIONS(429),
    [anon_sym_PERCENTr10b] = ACTIONS(429),
    [anon_sym_PERCENTr11b] = ACTIONS(429),
    [anon_sym_PERCENTr12b] = ACTIONS(429),
    [anon_sym_PERCENTr13b] = ACTIONS(429),
    [anon_sym_PERCENTr14b] = ACTIONS(429),
    [anon_sym_PERCENTr15b] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_PERCENTcr0] = ACTIONS(429),
    [anon_sym_PERCENTcr2] = ACTIONS(429),
    [anon_sym_PERCENTcr3] = ACTIONS(429),
    [anon_sym_PERCENTcr4] = ACTIONS(429),
    [anon_sym_PERCENTrip] = ACTIONS(429),
    [anon_sym_PERCENTeip] = ACTIONS(429),
    [anon_sym_PERCENTip] = ACTIONS(429),
    [anon_sym_PERCENTst] = ACTIONS(429),
    [anon_sym_PERCENT] = ACTIONS(434),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(438), 1,
      sym__line_break,
    ACTIONS(440), 1,
      anon_sym_jmpq,
    ACTIONS(442), 1,
      anon_sym_STAR,
    ACTIONS(444), 1,
      aux_sym_otherFnOperands_token1,
    STATE(69), 1,
      aux_sym_control_repeat1,
    STATE(79), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(116), 1,
      sym_fnOperand,
    ACTIONS(436), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(131), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [30] = 9,
    ACTIONS(448), 1,
      sym__line_break,
    ACTIONS(450), 1,
      anon_sym_jmpq,
    ACTIONS(453), 1,
      anon_sym_STAR,
    ACTIONS(456), 1,
      aux_sym_otherFnOperands_token1,
    STATE(69), 1,
      aux_sym_control_repeat1,
    STATE(146), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(208), 1,
      sym_fnOperand,
    ACTIONS(446), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(200), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [60] = 9,
    ACTIONS(440), 1,
      anon_sym_jmpq,
    ACTIONS(442), 1,
      anon_sym_STAR,
    ACTIONS(444), 1,
      aux_sym_otherFnOperands_token1,
    ACTIONS(461), 1,
      sym__line_break,
    STATE(68), 1,
      aux_sym_control_repeat1,
    STATE(79), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(125), 1,
      sym_fnOperand,
    ACTIONS(459), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(131), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [90] = 3,
    ACTIONS(463), 1,
      aux_sym_operand_token1,
    STATE(71), 1,
      aux_sym_operand_repeat1,
    ACTIONS(434), 8,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [107] = 4,
    ACTIONS(468), 1,
      aux_sym_operand_token1,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      aux_sym_operand_repeat1,
    ACTIONS(466), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [125] = 4,
    ACTIONS(468), 1,
      aux_sym_operand_token1,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      aux_sym_operand_repeat1,
    ACTIONS(472), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [142] = 3,
    ACTIONS(478), 1,
      aux_sym_otherFnOperands_token1,
    STATE(74), 1,
      aux_sym_otherFnOperands_repeat1,
    ACTIONS(476), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [156] = 3,
    ACTIONS(483), 1,
      aux_sym_immediateOperand_token1,
    STATE(77), 1,
      aux_sym_immediateOperand_repeat1,
    ACTIONS(481), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [170] = 4,
    ACTIONS(429), 1,
      anon_sym_,
    ACTIONS(485), 1,
      aux_sym_operand_token1,
    STATE(76), 1,
      aux_sym_operand_repeat1,
    ACTIONS(434), 4,
      sym__comma,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [186] = 3,
    ACTIONS(490), 1,
      aux_sym_immediateOperand_token1,
    STATE(77), 1,
      aux_sym_immediateOperand_repeat1,
    ACTIONS(488), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [200] = 2,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [212] = 3,
    ACTIONS(499), 1,
      aux_sym_otherFnOperands_token1,
    STATE(74), 1,
      aux_sym_otherFnOperands_repeat1,
    ACTIONS(497), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [226] = 1,
    ACTIONS(501), 7,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COLON,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [236] = 3,
    ACTIONS(468), 1,
      aux_sym_operand_token1,
    STATE(71), 1,
      aux_sym_operand_repeat1,
    ACTIONS(503), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [250] = 2,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [261] = 1,
    ACTIONS(509), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [270] = 1,
    ACTIONS(511), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [279] = 6,
    ACTIONS(513), 1,
      aux_sym_operand_token1,
    ACTIONS(515), 1,
      anon_sym_DASH,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      aux_sym_operand_repeat1,
    STATE(112), 1,
      sym_memoryAbsoluteOperand,
    STATE(301), 1,
      sym_offset,
  [298] = 1,
    ACTIONS(519), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [307] = 2,
    ACTIONS(521), 1,
      anon_sym_COLON,
    ACTIONS(519), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [318] = 2,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    ACTIONS(523), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [329] = 1,
    ACTIONS(527), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [338] = 2,
    ACTIONS(531), 1,
      sym__line_break,
    ACTIONS(529), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_jmpq,
      anon_sym_STAR,
      aux_sym_otherFnOperands_token1,
  [349] = 2,
    ACTIONS(448), 1,
      sym__line_break,
    ACTIONS(446), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_jmpq,
      anon_sym_STAR,
      aux_sym_otherFnOperands_token1,
  [360] = 2,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [371] = 1,
    ACTIONS(537), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [380] = 2,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    ACTIONS(539), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [391] = 2,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    ACTIONS(543), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [402] = 1,
    ACTIONS(547), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [411] = 2,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [422] = 1,
    ACTIONS(553), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [431] = 6,
    ACTIONS(555), 1,
      aux_sym_operand_token1,
    ACTIONS(557), 1,
      anon_sym_DASH,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      aux_sym_operand_repeat1,
    STATE(212), 1,
      sym_memoryAbsoluteOperand,
    STATE(293), 1,
      sym_offset,
  [450] = 1,
    ACTIONS(561), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [459] = 1,
    ACTIONS(563), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [468] = 5,
    ACTIONS(565), 1,
      anon_sym_,
    ACTIONS(567), 1,
      aux_sym_operand_token1,
    ACTIONS(569), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      aux_sym_operand_repeat1,
    ACTIONS(466), 2,
      sym__comma,
      anon_sym_RPAREN,
  [485] = 1,
    ACTIONS(571), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [494] = 5,
    ACTIONS(472), 1,
      sym__comma,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      aux_sym_operand_token1,
    ACTIONS(573), 1,
      anon_sym_,
    STATE(76), 1,
      aux_sym_operand_repeat1,
  [510] = 1,
    ACTIONS(575), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [518] = 1,
    ACTIONS(577), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [526] = 1,
    ACTIONS(579), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [534] = 1,
    ACTIONS(581), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [542] = 1,
    ACTIONS(583), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [550] = 2,
    STATE(287), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [560] = 1,
    ACTIONS(587), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [568] = 1,
    ACTIONS(589), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [576] = 2,
    STATE(286), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [586] = 1,
    ACTIONS(591), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [594] = 1,
    ACTIONS(533), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [602] = 2,
    ACTIONS(595), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(593), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [612] = 2,
    STATE(279), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [622] = 2,
    ACTIONS(599), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(597), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [632] = 2,
    STATE(272), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [642] = 2,
    STATE(264), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [652] = 2,
    STATE(269), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [662] = 4,
    ACTIONS(251), 1,
      aux_sym_operand_token1,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      aux_sym_operand_repeat1,
    ACTIONS(565), 2,
      sym__comma,
      anon_sym_RPAREN,
  [676] = 2,
    STATE(302), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [686] = 2,
    ACTIONS(599), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(159), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [696] = 2,
    ACTIONS(595), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(436), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [706] = 1,
    ACTIONS(603), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [714] = 2,
    STATE(265), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [724] = 1,
    ACTIONS(605), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [732] = 1,
    ACTIONS(607), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [740] = 1,
    ACTIONS(543), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [748] = 1,
    ACTIONS(609), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [756] = 2,
    STATE(278), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [766] = 2,
    STATE(266), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [776] = 2,
    STATE(276), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [786] = 1,
    ACTIONS(611), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [794] = 1,
    ACTIONS(613), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [802] = 1,
    ACTIONS(615), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [810] = 1,
    ACTIONS(617), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [818] = 1,
    ACTIONS(619), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [826] = 1,
    ACTIONS(621), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [834] = 1,
    ACTIONS(623), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [842] = 2,
    STATE(273), 1,
      sym_scale,
    ACTIONS(585), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [852] = 3,
    ACTIONS(625), 1,
      sym__line_break,
    STATE(280), 1,
      sym_comment,
    ACTIONS(7), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [863] = 4,
    ACTIONS(627), 1,
      aux_sym_operand_token1,
    ACTIONS(629), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      aux_sym_operand_repeat1,
    STATE(295), 1,
      sym_offset,
  [876] = 4,
    ACTIONS(627), 1,
      aux_sym_operand_token1,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      aux_sym_operand_repeat1,
    STATE(290), 1,
      sym_offset,
  [889] = 4,
    ACTIONS(497), 1,
      sym__comma,
    ACTIONS(633), 1,
      anon_sym_,
    ACTIONS(635), 1,
      aux_sym_otherFnOperands_token1,
    STATE(150), 1,
      aux_sym_otherFnOperands_repeat1,
  [902] = 4,
    ACTIONS(503), 1,
      sym__comma,
    ACTIONS(567), 1,
      aux_sym_operand_token1,
    ACTIONS(637), 1,
      anon_sym_,
    STATE(76), 1,
      aux_sym_operand_repeat1,
  [915] = 4,
    ACTIONS(481), 1,
      sym__comma,
    ACTIONS(639), 1,
      anon_sym_,
    ACTIONS(641), 1,
      aux_sym_immediateOperand_token1,
    STATE(152), 1,
      aux_sym_immediateOperand_repeat1,
  [928] = 4,
    ACTIONS(627), 1,
      aux_sym_operand_token1,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      aux_sym_operand_repeat1,
    STATE(277), 1,
      sym_offset,
  [941] = 4,
    ACTIONS(476), 1,
      sym__comma,
    ACTIONS(645), 1,
      anon_sym_,
    ACTIONS(647), 1,
      aux_sym_otherFnOperands_token1,
    STATE(150), 1,
      aux_sym_otherFnOperands_repeat1,
  [954] = 4,
    ACTIONS(627), 1,
      aux_sym_operand_token1,
    ACTIONS(650), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      aux_sym_operand_repeat1,
    STATE(263), 1,
      sym_offset,
  [967] = 4,
    ACTIONS(488), 1,
      sym__comma,
    ACTIONS(652), 1,
      anon_sym_,
    ACTIONS(654), 1,
      aux_sym_immediateOperand_token1,
    STATE(152), 1,
      aux_sym_immediateOperand_repeat1,
  [980] = 2,
    ACTIONS(657), 1,
      anon_sym_,
    ACTIONS(501), 3,
      anon_sym_COLON,
      sym__comma,
      anon_sym_RPAREN,
  [989] = 3,
    ACTIONS(659), 1,
      anon_sym_,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1000] = 3,
    ACTIONS(126), 1,
      sym__line_break,
    STATE(300), 1,
      sym_comment,
    ACTIONS(7), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [1011] = 3,
    ACTIONS(251), 1,
      aux_sym_operand_token1,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      aux_sym_operand_repeat1,
  [1021] = 3,
    ACTIONS(539), 1,
      sym__comma,
    ACTIONS(665), 1,
      anon_sym_,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
  [1031] = 2,
    ACTIONS(671), 1,
      sym__line_break,
    ACTIONS(669), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [1039] = 3,
    ACTIONS(673), 1,
      aux_sym__address_token1,
    ACTIONS(675), 1,
      anon_sym_COLON,
    STATE(162), 1,
      aux_sym__address_repeat1,
  [1049] = 3,
    ACTIONS(677), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1059] = 3,
    ACTIONS(681), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1069] = 3,
    ACTIONS(686), 1,
      aux_sym__address_token1,
    ACTIONS(689), 1,
      anon_sym_COLON,
    STATE(162), 1,
      aux_sym__address_repeat1,
  [1079] = 3,
    ACTIONS(691), 1,
      aux_sym_operand_token2,
    ACTIONS(693), 1,
      anon_sym_GT,
    STATE(164), 1,
      aux_sym_operand_repeat2,
  [1089] = 3,
    ACTIONS(695), 1,
      aux_sym_operand_token2,
    ACTIONS(698), 1,
      anon_sym_GT,
    STATE(164), 1,
      aux_sym_operand_repeat2,
  [1099] = 3,
    ACTIONS(677), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1109] = 3,
    ACTIONS(677), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1119] = 3,
    ACTIONS(251), 1,
      aux_sym_operand_token1,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_operand_repeat1,
  [1129] = 3,
    ACTIONS(677), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1139] = 3,
    ACTIONS(677), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1149] = 3,
    ACTIONS(677), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1159] = 3,
    ACTIONS(677), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1169] = 3,
    ACTIONS(677), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1179] = 3,
    ACTIONS(251), 1,
      aux_sym_operand_token1,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_operand_repeat1,
  [1189] = 3,
    ACTIONS(691), 1,
      aux_sym_operand_token2,
    ACTIONS(718), 1,
      anon_sym_GT,
    STATE(164), 1,
      aux_sym_operand_repeat2,
  [1199] = 2,
    ACTIONS(720), 1,
      anon_sym_,
    ACTIONS(509), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1207] = 2,
    ACTIONS(722), 1,
      anon_sym_,
    ACTIONS(563), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1215] = 2,
    ACTIONS(724), 1,
      anon_sym_,
    ACTIONS(511), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1223] = 2,
    ACTIONS(726), 1,
      anon_sym_,
    ACTIONS(519), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1231] = 2,
    ACTIONS(728), 1,
      anon_sym_,
    ACTIONS(537), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1239] = 2,
    ACTIONS(730), 1,
      anon_sym_,
    ACTIONS(527), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1247] = 2,
    ACTIONS(732), 1,
      anon_sym_,
    ACTIONS(553), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1255] = 2,
    ACTIONS(734), 1,
      anon_sym_,
    ACTIONS(561), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1263] = 2,
    ACTIONS(736), 1,
      anon_sym_,
    ACTIONS(571), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1271] = 2,
    ACTIONS(738), 1,
      anon_sym_,
    ACTIONS(547), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1279] = 2,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    ACTIONS(659), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1287] = 3,
    ACTIONS(251), 1,
      aux_sym_operand_token1,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_operand_repeat1,
  [1297] = 3,
    ACTIONS(505), 1,
      sym__comma,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
  [1307] = 3,
    ACTIONS(519), 1,
      sym__comma,
    ACTIONS(726), 1,
      anon_sym_,
    ACTIONS(748), 1,
      anon_sym_COLON,
  [1317] = 3,
    ACTIONS(549), 1,
      sym__comma,
    ACTIONS(750), 1,
      anon_sym_,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
  [1327] = 3,
    ACTIONS(677), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1337] = 3,
    ACTIONS(533), 1,
      sym__comma,
    ACTIONS(756), 1,
      anon_sym_,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
  [1347] = 3,
    ACTIONS(543), 1,
      sym__comma,
    ACTIONS(760), 1,
      anon_sym_,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
  [1357] = 3,
    ACTIONS(523), 1,
      sym__comma,
    ACTIONS(764), 1,
      anon_sym_,
    ACTIONS(766), 1,
      anon_sym_LBRACE,
  [1367] = 2,
    ACTIONS(768), 1,
      aux_sym_operand_token1,
    STATE(173), 1,
      aux_sym_operand_repeat1,
  [1374] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
  [1381] = 1,
    ACTIONS(726), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1386] = 1,
    ACTIONS(724), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1391] = 2,
    ACTIONS(611), 1,
      sym__comma,
    ACTIONS(774), 1,
      anon_sym_,
  [1398] = 2,
    ACTIONS(776), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(165), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1405] = 2,
    ACTIONS(609), 1,
      sym__comma,
    ACTIONS(778), 1,
      anon_sym_,
  [1412] = 2,
    ACTIONS(780), 1,
      anon_sym_COLON,
    STATE(10), 1,
      sym__colon,
  [1419] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
  [1426] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
  [1433] = 2,
    ACTIONS(786), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(160), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1440] = 2,
    ACTIONS(788), 1,
      aux_sym_operand_token1,
    STATE(81), 1,
      aux_sym_operand_repeat1,
  [1447] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
  [1454] = 2,
    ACTIONS(792), 1,
      aux_sym_operand_token2,
    STATE(163), 1,
      aux_sym_operand_repeat2,
  [1461] = 2,
    ACTIONS(595), 1,
      sym__comma,
    ACTIONS(794), 1,
      anon_sym_,
  [1468] = 2,
    ACTIONS(599), 1,
      sym__comma,
    ACTIONS(796), 1,
      anon_sym_,
  [1475] = 2,
    ACTIONS(623), 1,
      sym__comma,
    ACTIONS(798), 1,
      anon_sym_,
  [1482] = 2,
    ACTIONS(800), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(166), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1489] = 2,
    ACTIONS(589), 1,
      sym__comma,
    ACTIONS(802), 1,
      anon_sym_,
  [1496] = 2,
    ACTIONS(533), 1,
      sym__comma,
    ACTIONS(756), 1,
      anon_sym_,
  [1503] = 2,
    ACTIONS(804), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(190), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1510] = 1,
    ACTIONS(722), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1515] = 2,
    ACTIONS(543), 1,
      sym__comma,
    ACTIONS(760), 1,
      anon_sym_,
  [1522] = 1,
    ACTIONS(720), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1527] = 2,
    ACTIONS(607), 1,
      sym__comma,
    ACTIONS(806), 1,
      anon_sym_,
  [1534] = 2,
    ACTIONS(605), 1,
      sym__comma,
    ACTIONS(808), 1,
      anon_sym_,
  [1541] = 2,
    ACTIONS(581), 1,
      sym__comma,
    ACTIONS(810), 1,
      anon_sym_,
  [1548] = 2,
    ACTIONS(579), 1,
      sym__comma,
    ACTIONS(812), 1,
      anon_sym_,
  [1555] = 2,
    ACTIONS(577), 1,
      sym__comma,
    ACTIONS(814), 1,
      anon_sym_,
  [1562] = 2,
    ACTIONS(615), 1,
      sym__comma,
    ACTIONS(816), 1,
      anon_sym_,
  [1569] = 2,
    ACTIONS(617), 1,
      sym__comma,
    ACTIONS(818), 1,
      anon_sym_,
  [1576] = 2,
    ACTIONS(603), 1,
      sym__comma,
    ACTIONS(820), 1,
      anon_sym_,
  [1583] = 2,
    ACTIONS(587), 1,
      sym__comma,
    ACTIONS(822), 1,
      anon_sym_,
  [1590] = 2,
    ACTIONS(583), 1,
      sym__comma,
    ACTIONS(824), 1,
      anon_sym_,
  [1597] = 2,
    ACTIONS(575), 1,
      sym__comma,
    ACTIONS(826), 1,
      anon_sym_,
  [1604] = 2,
    ACTIONS(619), 1,
      sym__comma,
    ACTIONS(828), 1,
      anon_sym_,
  [1611] = 2,
    ACTIONS(613), 1,
      sym__comma,
    ACTIONS(830), 1,
      anon_sym_,
  [1618] = 2,
    ACTIONS(832), 1,
      aux_sym_operand_token1,
    STATE(167), 1,
      aux_sym_operand_repeat1,
  [1625] = 2,
    ACTIONS(834), 1,
      aux_sym_operand_token1,
    STATE(122), 1,
      aux_sym_operand_repeat1,
  [1632] = 1,
    ACTIONS(728), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1637] = 1,
    ACTIONS(730), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1642] = 2,
    ACTIONS(591), 1,
      sym__comma,
    ACTIONS(836), 1,
      anon_sym_,
  [1649] = 1,
    ACTIONS(732), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1654] = 1,
    ACTIONS(734), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1659] = 2,
    ACTIONS(838), 1,
      aux_sym_immediateOperand_token1,
    STATE(75), 1,
      aux_sym_immediateOperand_repeat1,
  [1666] = 2,
    ACTIONS(840), 1,
      aux_sym_operand_token1,
    STATE(102), 1,
      aux_sym_operand_repeat1,
  [1673] = 1,
    ACTIONS(736), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1678] = 1,
    ACTIONS(738), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1683] = 2,
    ACTIONS(842), 1,
      aux_sym_operand_token1,
    STATE(72), 1,
      aux_sym_operand_repeat1,
  [1690] = 2,
    ACTIONS(844), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(168), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1697] = 1,
    ACTIONS(657), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1702] = 2,
    ACTIONS(846), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(169), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1709] = 2,
    ACTIONS(848), 1,
      aux_sym_operand_token1,
    STATE(147), 1,
      aux_sym_operand_repeat1,
  [1716] = 2,
    ACTIONS(850), 1,
      aux_sym_immediateOperand_token1,
    STATE(148), 1,
      aux_sym_immediateOperand_repeat1,
  [1723] = 2,
    ACTIONS(852), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(170), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1730] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
  [1737] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [1744] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
  [1751] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
  [1758] = 2,
    ACTIONS(862), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(172), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1765] = 2,
    ACTIONS(621), 1,
      sym__comma,
    ACTIONS(864), 1,
      anon_sym_,
  [1772] = 2,
    ACTIONS(866), 1,
      aux_sym_operand_token1,
    STATE(186), 1,
      aux_sym_operand_repeat1,
  [1779] = 2,
    ACTIONS(868), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1786] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
  [1793] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [1800] = 2,
    ACTIONS(874), 1,
      aux_sym_operand_token2,
    STATE(174), 1,
      aux_sym_operand_repeat2,
  [1807] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
  [1814] = 2,
    ACTIONS(770), 1,
      sym__comma,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
  [1821] = 1,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
  [1825] = 1,
    ACTIONS(882), 1,
      anon_sym_LPAREN,
  [1829] = 1,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
  [1833] = 1,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
  [1837] = 1,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
  [1841] = 1,
    ACTIONS(890), 1,
      sym__comma,
  [1845] = 1,
    ACTIONS(892), 1,
      sym__comma,
  [1849] = 1,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
  [1853] = 1,
    ACTIONS(896), 1,
      sym__comma,
  [1857] = 1,
    ACTIONS(898), 1,
      sym__comma,
  [1861] = 1,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
  [1865] = 1,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
  [1869] = 1,
    ACTIONS(351), 1,
      sym__comma,
  [1873] = 1,
    ACTIONS(904), 1,
      sym__comma,
  [1877] = 1,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
  [1881] = 1,
    ACTIONS(908), 1,
      anon_sym_LPAREN,
  [1885] = 1,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
  [1889] = 1,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
  [1893] = 1,
    ACTIONS(914), 1,
      sym__line_break,
  [1897] = 1,
    ACTIONS(369), 1,
      sym__comma,
  [1901] = 1,
    ACTIONS(309), 1,
      sym__comma,
  [1905] = 1,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
  [1909] = 1,
    ACTIONS(916), 1,
      sym__comma,
  [1913] = 1,
    ACTIONS(918), 1,
      sym__comma,
  [1917] = 1,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
  [1921] = 1,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
  [1925] = 1,
    ACTIONS(393), 1,
      sym__comma,
  [1929] = 1,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
  [1933] = 1,
    ACTIONS(924), 1,
      anon_sym_LPAREN,
  [1937] = 1,
    ACTIONS(926), 1,
      sym__comma,
  [1941] = 1,
    ACTIONS(928), 1,
      sym__comma,
  [1945] = 1,
    ACTIONS(629), 1,
      anon_sym_LPAREN,
  [1949] = 1,
    ACTIONS(930), 1,
      sym__comma,
  [1953] = 1,
    ACTIONS(932), 1,
      anon_sym_LPAREN,
  [1957] = 1,
    ACTIONS(934), 1,
      sym__comma,
  [1961] = 1,
    ACTIONS(936), 1,
      sym__comma,
  [1965] = 1,
    ACTIONS(938), 1,
      sym__comma,
  [1969] = 1,
    ACTIONS(940), 1,
      sym__comma,
  [1973] = 1,
    ACTIONS(625), 1,
      sym__line_break,
  [1977] = 1,
    ACTIONS(650), 1,
      anon_sym_LPAREN,
  [1981] = 1,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
  [1985] = 1,
    ACTIONS(126), 1,
      sym__line_break,
  [1989] = 1,
    ACTIONS(944), 1,
      sym__line_break,
  [1993] = 1,
    ACTIONS(946), 1,
      ts_builtin_sym_end,
  [1997] = 1,
    ACTIONS(363), 1,
      sym__comma,
  [2001] = 1,
    ACTIONS(371), 1,
      sym__comma,
  [2005] = 1,
    ACTIONS(361), 1,
      sym__comma,
  [2009] = 1,
    ACTIONS(395), 1,
      sym__comma,
  [2013] = 1,
    ACTIONS(948), 1,
      sym__comma,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(68)] = 0,
  [SMALL_STATE(69)] = 30,
  [SMALL_STATE(70)] = 60,
  [SMALL_STATE(71)] = 90,
  [SMALL_STATE(72)] = 107,
  [SMALL_STATE(73)] = 125,
  [SMALL_STATE(74)] = 142,
  [SMALL_STATE(75)] = 156,
  [SMALL_STATE(76)] = 170,
  [SMALL_STATE(77)] = 186,
  [SMALL_STATE(78)] = 200,
  [SMALL_STATE(79)] = 212,
  [SMALL_STATE(80)] = 226,
  [SMALL_STATE(81)] = 236,
  [SMALL_STATE(82)] = 250,
  [SMALL_STATE(83)] = 261,
  [SMALL_STATE(84)] = 270,
  [SMALL_STATE(85)] = 279,
  [SMALL_STATE(86)] = 298,
  [SMALL_STATE(87)] = 307,
  [SMALL_STATE(88)] = 318,
  [SMALL_STATE(89)] = 329,
  [SMALL_STATE(90)] = 338,
  [SMALL_STATE(91)] = 349,
  [SMALL_STATE(92)] = 360,
  [SMALL_STATE(93)] = 371,
  [SMALL_STATE(94)] = 380,
  [SMALL_STATE(95)] = 391,
  [SMALL_STATE(96)] = 402,
  [SMALL_STATE(97)] = 411,
  [SMALL_STATE(98)] = 422,
  [SMALL_STATE(99)] = 431,
  [SMALL_STATE(100)] = 450,
  [SMALL_STATE(101)] = 459,
  [SMALL_STATE(102)] = 468,
  [SMALL_STATE(103)] = 485,
  [SMALL_STATE(104)] = 494,
  [SMALL_STATE(105)] = 510,
  [SMALL_STATE(106)] = 518,
  [SMALL_STATE(107)] = 526,
  [SMALL_STATE(108)] = 534,
  [SMALL_STATE(109)] = 542,
  [SMALL_STATE(110)] = 550,
  [SMALL_STATE(111)] = 560,
  [SMALL_STATE(112)] = 568,
  [SMALL_STATE(113)] = 576,
  [SMALL_STATE(114)] = 586,
  [SMALL_STATE(115)] = 594,
  [SMALL_STATE(116)] = 602,
  [SMALL_STATE(117)] = 612,
  [SMALL_STATE(118)] = 622,
  [SMALL_STATE(119)] = 632,
  [SMALL_STATE(120)] = 642,
  [SMALL_STATE(121)] = 652,
  [SMALL_STATE(122)] = 662,
  [SMALL_STATE(123)] = 676,
  [SMALL_STATE(124)] = 686,
  [SMALL_STATE(125)] = 696,
  [SMALL_STATE(126)] = 706,
  [SMALL_STATE(127)] = 714,
  [SMALL_STATE(128)] = 724,
  [SMALL_STATE(129)] = 732,
  [SMALL_STATE(130)] = 740,
  [SMALL_STATE(131)] = 748,
  [SMALL_STATE(132)] = 756,
  [SMALL_STATE(133)] = 766,
  [SMALL_STATE(134)] = 776,
  [SMALL_STATE(135)] = 786,
  [SMALL_STATE(136)] = 794,
  [SMALL_STATE(137)] = 802,
  [SMALL_STATE(138)] = 810,
  [SMALL_STATE(139)] = 818,
  [SMALL_STATE(140)] = 826,
  [SMALL_STATE(141)] = 834,
  [SMALL_STATE(142)] = 842,
  [SMALL_STATE(143)] = 852,
  [SMALL_STATE(144)] = 863,
  [SMALL_STATE(145)] = 876,
  [SMALL_STATE(146)] = 889,
  [SMALL_STATE(147)] = 902,
  [SMALL_STATE(148)] = 915,
  [SMALL_STATE(149)] = 928,
  [SMALL_STATE(150)] = 941,
  [SMALL_STATE(151)] = 954,
  [SMALL_STATE(152)] = 967,
  [SMALL_STATE(153)] = 980,
  [SMALL_STATE(154)] = 989,
  [SMALL_STATE(155)] = 1000,
  [SMALL_STATE(156)] = 1011,
  [SMALL_STATE(157)] = 1021,
  [SMALL_STATE(158)] = 1031,
  [SMALL_STATE(159)] = 1039,
  [SMALL_STATE(160)] = 1049,
  [SMALL_STATE(161)] = 1059,
  [SMALL_STATE(162)] = 1069,
  [SMALL_STATE(163)] = 1079,
  [SMALL_STATE(164)] = 1089,
  [SMALL_STATE(165)] = 1099,
  [SMALL_STATE(166)] = 1109,
  [SMALL_STATE(167)] = 1119,
  [SMALL_STATE(168)] = 1129,
  [SMALL_STATE(169)] = 1139,
  [SMALL_STATE(170)] = 1149,
  [SMALL_STATE(171)] = 1159,
  [SMALL_STATE(172)] = 1169,
  [SMALL_STATE(173)] = 1179,
  [SMALL_STATE(174)] = 1189,
  [SMALL_STATE(175)] = 1199,
  [SMALL_STATE(176)] = 1207,
  [SMALL_STATE(177)] = 1215,
  [SMALL_STATE(178)] = 1223,
  [SMALL_STATE(179)] = 1231,
  [SMALL_STATE(180)] = 1239,
  [SMALL_STATE(181)] = 1247,
  [SMALL_STATE(182)] = 1255,
  [SMALL_STATE(183)] = 1263,
  [SMALL_STATE(184)] = 1271,
  [SMALL_STATE(185)] = 1279,
  [SMALL_STATE(186)] = 1287,
  [SMALL_STATE(187)] = 1297,
  [SMALL_STATE(188)] = 1307,
  [SMALL_STATE(189)] = 1317,
  [SMALL_STATE(190)] = 1327,
  [SMALL_STATE(191)] = 1337,
  [SMALL_STATE(192)] = 1347,
  [SMALL_STATE(193)] = 1357,
  [SMALL_STATE(194)] = 1367,
  [SMALL_STATE(195)] = 1374,
  [SMALL_STATE(196)] = 1381,
  [SMALL_STATE(197)] = 1386,
  [SMALL_STATE(198)] = 1391,
  [SMALL_STATE(199)] = 1398,
  [SMALL_STATE(200)] = 1405,
  [SMALL_STATE(201)] = 1412,
  [SMALL_STATE(202)] = 1419,
  [SMALL_STATE(203)] = 1426,
  [SMALL_STATE(204)] = 1433,
  [SMALL_STATE(205)] = 1440,
  [SMALL_STATE(206)] = 1447,
  [SMALL_STATE(207)] = 1454,
  [SMALL_STATE(208)] = 1461,
  [SMALL_STATE(209)] = 1468,
  [SMALL_STATE(210)] = 1475,
  [SMALL_STATE(211)] = 1482,
  [SMALL_STATE(212)] = 1489,
  [SMALL_STATE(213)] = 1496,
  [SMALL_STATE(214)] = 1503,
  [SMALL_STATE(215)] = 1510,
  [SMALL_STATE(216)] = 1515,
  [SMALL_STATE(217)] = 1522,
  [SMALL_STATE(218)] = 1527,
  [SMALL_STATE(219)] = 1534,
  [SMALL_STATE(220)] = 1541,
  [SMALL_STATE(221)] = 1548,
  [SMALL_STATE(222)] = 1555,
  [SMALL_STATE(223)] = 1562,
  [SMALL_STATE(224)] = 1569,
  [SMALL_STATE(225)] = 1576,
  [SMALL_STATE(226)] = 1583,
  [SMALL_STATE(227)] = 1590,
  [SMALL_STATE(228)] = 1597,
  [SMALL_STATE(229)] = 1604,
  [SMALL_STATE(230)] = 1611,
  [SMALL_STATE(231)] = 1618,
  [SMALL_STATE(232)] = 1625,
  [SMALL_STATE(233)] = 1632,
  [SMALL_STATE(234)] = 1637,
  [SMALL_STATE(235)] = 1642,
  [SMALL_STATE(236)] = 1649,
  [SMALL_STATE(237)] = 1654,
  [SMALL_STATE(238)] = 1659,
  [SMALL_STATE(239)] = 1666,
  [SMALL_STATE(240)] = 1673,
  [SMALL_STATE(241)] = 1678,
  [SMALL_STATE(242)] = 1683,
  [SMALL_STATE(243)] = 1690,
  [SMALL_STATE(244)] = 1697,
  [SMALL_STATE(245)] = 1702,
  [SMALL_STATE(246)] = 1709,
  [SMALL_STATE(247)] = 1716,
  [SMALL_STATE(248)] = 1723,
  [SMALL_STATE(249)] = 1730,
  [SMALL_STATE(250)] = 1737,
  [SMALL_STATE(251)] = 1744,
  [SMALL_STATE(252)] = 1751,
  [SMALL_STATE(253)] = 1758,
  [SMALL_STATE(254)] = 1765,
  [SMALL_STATE(255)] = 1772,
  [SMALL_STATE(256)] = 1779,
  [SMALL_STATE(257)] = 1786,
  [SMALL_STATE(258)] = 1793,
  [SMALL_STATE(259)] = 1800,
  [SMALL_STATE(260)] = 1807,
  [SMALL_STATE(261)] = 1814,
  [SMALL_STATE(262)] = 1821,
  [SMALL_STATE(263)] = 1825,
  [SMALL_STATE(264)] = 1829,
  [SMALL_STATE(265)] = 1833,
  [SMALL_STATE(266)] = 1837,
  [SMALL_STATE(267)] = 1841,
  [SMALL_STATE(268)] = 1845,
  [SMALL_STATE(269)] = 1849,
  [SMALL_STATE(270)] = 1853,
  [SMALL_STATE(271)] = 1857,
  [SMALL_STATE(272)] = 1861,
  [SMALL_STATE(273)] = 1865,
  [SMALL_STATE(274)] = 1869,
  [SMALL_STATE(275)] = 1873,
  [SMALL_STATE(276)] = 1877,
  [SMALL_STATE(277)] = 1881,
  [SMALL_STATE(278)] = 1885,
  [SMALL_STATE(279)] = 1889,
  [SMALL_STATE(280)] = 1893,
  [SMALL_STATE(281)] = 1897,
  [SMALL_STATE(282)] = 1901,
  [SMALL_STATE(283)] = 1905,
  [SMALL_STATE(284)] = 1909,
  [SMALL_STATE(285)] = 1913,
  [SMALL_STATE(286)] = 1917,
  [SMALL_STATE(287)] = 1921,
  [SMALL_STATE(288)] = 1925,
  [SMALL_STATE(289)] = 1929,
  [SMALL_STATE(290)] = 1933,
  [SMALL_STATE(291)] = 1937,
  [SMALL_STATE(292)] = 1941,
  [SMALL_STATE(293)] = 1945,
  [SMALL_STATE(294)] = 1949,
  [SMALL_STATE(295)] = 1953,
  [SMALL_STATE(296)] = 1957,
  [SMALL_STATE(297)] = 1961,
  [SMALL_STATE(298)] = 1965,
  [SMALL_STATE(299)] = 1969,
  [SMALL_STATE(300)] = 1973,
  [SMALL_STATE(301)] = 1977,
  [SMALL_STATE(302)] = 1981,
  [SMALL_STATE(303)] = 1985,
  [SMALL_STATE(304)] = 1989,
  [SMALL_STATE(305)] = 1993,
  [SMALL_STATE(306)] = 1997,
  [SMALL_STATE(307)] = 2001,
  [SMALL_STATE(308)] = 2005,
  [SMALL_STATE(309)] = 2009,
  [SMALL_STATE(310)] = 2013,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(159),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(304),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(26),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(27),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(33),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(36),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(43),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(49),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(48),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(46),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(45),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(40),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(37),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(35),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(18),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(34),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(41),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(20),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(21),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(22),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(23),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(90),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__machine_code, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_code, 3),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__machine_code_repeat1, 2), SHIFT_REPEAT(7),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__machine_code_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__machine_code_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__machine_code, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_code, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(246),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(104),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(259),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(247),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(153),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(184),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(183),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(182),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(181),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(145),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(44),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(235),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(180),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(179),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(154),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(239),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CryptoOpcode, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CryptoOpcode, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ShuffleOpcode, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ShuffleOpcode, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PermuteOpcode, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PermuteOpcode, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BlendOpcode, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BlendOpcode, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BroadcastOpcode, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BroadcastOpcode, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BinaryArithmeticOpcode, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BinaryArithmeticOpcode, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BitAndByteOpcode, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BitAndByteOpcode, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DataTransferOpcode, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DataTransferOpcode, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ExtractOpcode, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExtractOpcode, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AccessRegisterOpcode, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AccessRegisterOpcode, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_IOOpcode, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IOOpcode, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StringOpcode, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringOpcode, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StackOpcode, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StackOpcode, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_InsertOpcode, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_InsertOpcode, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LogicalOpcode, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LogicalOpcode, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ShiftAndRotateOpcode, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ShiftAndRotateOpcode, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PackUnpackOpcode, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PackUnpackOpcode, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OperatingSystemSupportOpcode, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OperatingSystemSupportOpcode, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MiscellaneousOpcode, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MiscellaneousOpcode, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(67),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2), SHIFT_REPEAT(200),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2), SHIFT_REPEAT(16),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2), SHIFT_REPEAT(146),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control, 1),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(71),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherRegisterOperand, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryAbsoluteOperand, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2), SHIFT_REPEAT(74),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediateOperand, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(76),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2), SHIFT_REPEAT(77),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatRegisterOperand, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherFnOperands, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segmentRegisterOperand, 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherRegisterOperand, 5),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegisterOperand, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registerOperand, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 5),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_controlRegisterOperand, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_controlOpcode, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controlOpcode, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instructionRegisterOperand, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister64Bits, 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 4),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister8Bits, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister16Bits, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatRegisterOperand, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherRegisterOperand, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister32Bits, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryAbsoluteOperand, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 9),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 6),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 6),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 6),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 8),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 8),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 3),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_someOpcode, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 7),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 5),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 5),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fnOperand, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryOperand, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 11),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 7),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 7),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 10),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherFnOperands, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediateOperand, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2), SHIFT_REPEAT(150),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_immediateOperand_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2), SHIFT_REPEAT(152),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segmentRegisterOperand, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatRegisterOperand, 1),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 3),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memoryIndirectOperand_repeat1, 2), SHIFT_REPEAT(161),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memoryIndirectOperand_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__address_repeat1, 2), SHIFT_REPEAT(162),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__address_repeat1, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operand_repeat2, 2), SHIFT_REPEAT(164),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_repeat2, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherRegisterOperand, 5),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatRegisterOperand, 4),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegisterOperand, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registerOperand, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instructionRegisterOperand, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controlRegisterOperand, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister8Bits, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister16Bits, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister32Bits, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister64Bits, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 2),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 4),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 3),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 4),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 5),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryOperand, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fnOperand, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 3),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 5),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 5),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 6),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 6),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 6),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 7),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 7),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 7),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 8),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 8),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 9),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 10),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 11),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_someOpcode, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [946] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
