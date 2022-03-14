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
#define STATE_COUNT 309
#define LARGE_STATE_COUNT 63
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
  [11] = 10,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
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
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 14,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 13,
  [39] = 39,
  [40] = 40,
  [41] = 35,
  [42] = 42,
  [43] = 33,
  [44] = 44,
  [45] = 39,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 47,
  [51] = 46,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 55,
  [56] = 55,
  [57] = 53,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 62,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 67,
  [86] = 79,
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
  [102] = 68,
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
  [116] = 67,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 120,
  [125] = 106,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 121,
  [130] = 109,
  [131] = 131,
  [132] = 104,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 118,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 77,
  [143] = 71,
  [144] = 72,
  [145] = 74,
  [146] = 146,
  [147] = 76,
  [148] = 141,
  [149] = 140,
  [150] = 78,
  [151] = 69,
  [152] = 96,
  [153] = 100,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 159,
  [163] = 163,
  [164] = 164,
  [165] = 163,
  [166] = 164,
  [167] = 160,
  [168] = 161,
  [169] = 157,
  [170] = 81,
  [171] = 171,
  [172] = 84,
  [173] = 173,
  [174] = 92,
  [175] = 90,
  [176] = 99,
  [177] = 80,
  [178] = 98,
  [179] = 97,
  [180] = 94,
  [181] = 87,
  [182] = 89,
  [183] = 76,
  [184] = 160,
  [185] = 95,
  [186] = 93,
  [187] = 83,
  [188] = 82,
  [189] = 161,
  [190] = 133,
  [191] = 191,
  [192] = 99,
  [193] = 193,
  [194] = 115,
  [195] = 90,
  [196] = 92,
  [197] = 108,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 202,
  [209] = 114,
  [210] = 110,
  [211] = 113,
  [212] = 212,
  [213] = 84,
  [214] = 128,
  [215] = 81,
  [216] = 135,
  [217] = 136,
  [218] = 138,
  [219] = 139,
  [220] = 134,
  [221] = 126,
  [222] = 122,
  [223] = 119,
  [224] = 112,
  [225] = 107,
  [226] = 105,
  [227] = 101,
  [228] = 127,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 103,
  [233] = 98,
  [234] = 97,
  [235] = 96,
  [236] = 236,
  [237] = 193,
  [238] = 94,
  [239] = 77,
  [240] = 240,
  [241] = 204,
  [242] = 193,
  [243] = 243,
  [244] = 207,
  [245] = 231,
  [246] = 191,
  [247] = 247,
  [248] = 236,
  [249] = 80,
  [250] = 203,
  [251] = 251,
  [252] = 240,
  [253] = 201,
  [254] = 202,
  [255] = 243,
  [256] = 204,
  [257] = 247,
  [258] = 230,
  [259] = 212,
  [260] = 229,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 263,
  [269] = 264,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 266,
  [274] = 270,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 277,
  [285] = 278,
  [286] = 286,
  [287] = 276,
  [288] = 272,
  [289] = 281,
  [290] = 290,
  [291] = 282,
  [292] = 265,
  [293] = 286,
  [294] = 294,
  [295] = 271,
  [296] = 262,
  [297] = 275,
  [298] = 294,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 267,
  [305] = 279,
  [306] = 261,
  [307] = 300,
  [308] = 302,
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
      if (eof) ADVANCE(660);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '$') ADVANCE(1071);
      if (lookahead == '%') ADVANCE(1186);
      if (lookahead == '(') ADVANCE(1144);
      if (lookahead == ')') ADVANCE(1145);
      if (lookahead == '*') ADVANCE(1177);
      if (lookahead == '+') ADVANCE(1069);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '-') ADVANCE(1143);
      if (lookahead == '.') ADVANCE(1072);
      if (lookahead == '/') ADVANCE(1072);
      if (lookahead == '1') ADVANCE(1149);
      if (lookahead == '2') ADVANCE(1150);
      if (lookahead == '4') ADVANCE(1151);
      if (lookahead == '8') ADVANCE(1152);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '<') ADVANCE(1068);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '>') ADVANCE(1070);
      if (lookahead == 'f') ADVANCE(1064);
      if (lookahead == '{') ADVANCE(1146);
      if (lookahead == '}') ADVANCE(1148);
      if (lookahead == '&' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(1188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(661);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '$') ADVANCE(1071);
      if (lookahead == '%') ADVANCE(1187);
      if (lookahead == '(') ADVANCE(1144);
      if (lookahead == '-') ADVANCE(1143);
      if (lookahead == '<') ADVANCE(1068);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(1066);
      if (lookahead == 'f') ADVANCE(1064);
      if (lookahead == 'm') ADVANCE(1067);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '*') ADVANCE(1177);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'j') ADVANCE(1189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (aux_sym_otherFnOperands_token1_character_set_1(lookahead)) ADVANCE(1188);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(672);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(346);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'g') ADVANCE(509);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'j') ADVANCE(81);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead == 'v') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(658);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == ' ') ADVANCE(676);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '(') ADVANCE(1144);
      if (lookahead == ')') ADVANCE(1145);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '{') ADVANCE(1146);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == ' ') ADVANCE(676);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1072);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == ' ') ADVANCE(676);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(6)
      if (aux_sym_otherFnOperands_token1_character_set_2(lookahead)) ADVANCE(1188);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(677);
      if (lookahead == '(') ADVANCE(1144);
      if (lookahead == ')') ADVANCE(1145);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '{') ADVANCE(1146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(677);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (aux_sym_otherFnOperands_token1_character_set_3(lookahead)) ADVANCE(1188);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(677);
      if (lookahead == ',') ADVANCE(675);
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
          lookahead == '}') ADVANCE(1072);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(1187);
      if (lookahead == '(') ADVANCE(1144);
      if (lookahead == ')') ADVANCE(1145);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '-') ADVANCE(1143);
      if (lookahead == '{') ADVANCE(1146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1065);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(1178);
      if (lookahead == '2') ADVANCE(1179);
      if (lookahead == '3') ADVANCE(1180);
      if (lookahead == '4') ADVANCE(1181);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(1089);
      if (lookahead == '1') ADVANCE(1090);
      if (lookahead == '2') ADVANCE(1091);
      if (lookahead == '3') ADVANCE(1092);
      if (lookahead == '4') ADVANCE(1093);
      if (lookahead == '5') ADVANCE(1094);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(925);
      if (lookahead == '1') ADVANCE(924);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(1149);
      if (lookahead == '2') ADVANCE(1150);
      if (lookahead == '4') ADVANCE(1151);
      if (lookahead == '8') ADVANCE(1152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '8') ADVANCE(1087);
      if (lookahead == '9') ADVANCE(1088);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'b') ADVANCE(423);
      if (lookahead == 'c') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(381);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(916);
      if (lookahead == '2') ADVANCE(917);
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
      if (lookahead == '2') ADVANCE(912);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(915);
      END_STATE();
    case 27:
      if (lookahead == '2') ADVANCE(285);
      if (lookahead == 'd') ADVANCE(1049);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'q') ADVANCE(1050);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(865);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(863);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(1040);
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
      if (lookahead == '2') ADVANCE(644);
      END_STATE();
    case 38:
      if (lookahead == '2') ADVANCE(645);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(648);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(649);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(558);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(546);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(208);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(209);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(533);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(534);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(555);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(559);
      END_STATE();
    case 49:
      if (lookahead == '3') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == '3') ADVANCE(37);
      if (lookahead == '6') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(919);
      END_STATE();
    case 52:
      if (lookahead == '4') ADVANCE(914);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(866);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(862);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(1039);
      END_STATE();
    case 56:
      if (lookahead == '4') ADVANCE(1030);
      END_STATE();
    case 57:
      if (lookahead == '4') ADVANCE(1031);
      END_STATE();
    case 58:
      if (lookahead == '4') ADVANCE(1021);
      END_STATE();
    case 59:
      if (lookahead == '4') ADVANCE(1063);
      END_STATE();
    case 60:
      if (lookahead == '4') ADVANCE(651);
      END_STATE();
    case 61:
      if (lookahead == '4') ADVANCE(646);
      END_STATE();
    case 62:
      if (lookahead == '6') ADVANCE(913);
      END_STATE();
    case 63:
      if (lookahead == '6') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == '8') ADVANCE(1047);
      END_STATE();
    case 65:
      if (lookahead == '8') ADVANCE(1048);
      END_STATE();
    case 66:
      if (lookahead == '8') ADVANCE(1032);
      END_STATE();
    case 67:
      if (lookahead == '8') ADVANCE(1029);
      END_STATE();
    case 68:
      if (lookahead == '8') ADVANCE(1020);
      END_STATE();
    case 69:
      if (lookahead == '8') ADVANCE(1062);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(671);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(1070);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1069);
      END_STATE();
    case 73:
      if (lookahead == 'B') ADVANCE(1002);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(1005);
      if (lookahead == 'X') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'B') ADVANCE(1006);
      if (lookahead == 'X') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(1004);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(1001);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(1000);
      if (lookahead == 'X') ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(1003);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'b') ADVANCE(421);
      if (lookahead == 'c') ADVANCE(638);
      if (lookahead == 'd') ADVANCE(316);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 's') ADVANCE(1076);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(665);
      if (lookahead == 'b') ADVANCE(668);
      if (lookahead == 'l') ADVANCE(565);
      if (lookahead == 'm') ADVANCE(409);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == 'p') ADVANCE(595);
      if (lookahead == 'q') ADVANCE(582);
      if (lookahead == 'v') ADVANCE(566);
      if (lookahead == 'w') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(1158);
      if (lookahead == 'b') ADVANCE(1160);
      if (lookahead == 'e') ADVANCE(1162);
      if (lookahead == 'g') ADVANCE(1163);
      if (lookahead == 'l') ADVANCE(1165);
      if (lookahead == 'm') ADVANCE(425);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(1172);
      if (lookahead == 'p') ADVANCE(1173);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == 's') ADVANCE(1175);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == 'u') ADVANCE(390);
      if (lookahead == 'x') ADVANCE(407);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == 's') ADVANCE(922);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(907);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(959);
      if (lookahead == 'r') ADVANCE(964);
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(783);
      if (lookahead == 'b') ADVANCE(780);
      if (lookahead == 'e') ADVANCE(781);
      if (lookahead == 'g') ADVANCE(788);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(789);
      if (lookahead == 'p') ADVANCE(791);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead == 'b') ADVANCE(811);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead == 'g') ADVANCE(807);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(804);
      if (lookahead == 'p') ADVANCE(808);
      if (lookahead == 's') ADVANCE(814);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(850);
      if (lookahead == 'u') ADVANCE(853);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(864);
      if (lookahead == 'u') ADVANCE(861);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == 'i') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(374);
      if (lookahead == 'c') ADVANCE(617);
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == 'i') ADVANCE(393);
      if (lookahead == 'm') ADVANCE(414);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(411);
      if (lookahead == 'z') ADVANCE(268);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(643);
      if (lookahead == 'f') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(611);
      if (lookahead == 'u') ADVANCE(347);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(620);
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'd') ADVANCE(869);
      if (lookahead == 'q') ADVANCE(867);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(447);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(375);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == 'u') ADVANCE(396);
      if (lookahead == 'x') ADVANCE(416);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 111:
      if (lookahead == 'b') ADVANCE(710);
      END_STATE();
    case 112:
      if (lookahead == 'b') ADVANCE(702);
      END_STATE();
    case 113:
      if (lookahead == 'b') ADVANCE(872);
      if (lookahead == 'l') ADVANCE(873);
      END_STATE();
    case 114:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 'b') ADVANCE(994);
      if (lookahead == 'd') ADVANCE(847);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead == 's') ADVANCE(845);
      if (lookahead == 'w') ADVANCE(353);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(354);
      if (lookahead == 'w') ADVANCE(355);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(874);
      if (lookahead == 'l') ADVANCE(875);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(763);
      if (lookahead == 'd') ADVANCE(758);
      if (lookahead == 'q') ADVANCE(764);
      if (lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(196);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(1024);
      if (lookahead == 'q') ADVANCE(1022);
      if (lookahead == 'w') ADVANCE(1023);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(1034);
      if (lookahead == 'd') ADVANCE(1035);
      if (lookahead == 'w') ADVANCE(1033);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(1046);
      if (lookahead == 'd') ADVANCE(1043);
      if (lookahead == 'h') ADVANCE(626);
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(735);
      if (lookahead == 'd') ADVANCE(734);
      if (lookahead == 'q') ADVANCE(736);
      if (lookahead == 'w') ADVANCE(737);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(771);
      if (lookahead == 'd') ADVANCE(770);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(762);
      if (lookahead == 'w') ADVANCE(761);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(1028);
      if (lookahead == 'd') ADVANCE(1026);
      if (lookahead == 'q') ADVANCE(1027);
      if (lookahead == 'w') ADVANCE(1025);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(1036);
      if (lookahead == 'd') ADVANCE(1037);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(931);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(871);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(1154);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(498);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(615);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(632);
      if (lookahead == 'd') ADVANCE(461);
      if (lookahead == 'q') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(633);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead == 'q') ADVANCE(235);
      if (lookahead == 'w') ADVANCE(213);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(512);
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(542);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(545);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(550);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(298);
      if (lookahead == 'g') ADVANCE(272);
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(692);
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(1012);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(1014);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(1016);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(642);
      END_STATE();
    case 155:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 156:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 157:
      if (lookahead == 'c') ADVANCE(585);
      END_STATE();
    case 158:
      if (lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(342);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(663);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(600);
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(799);
      if (lookahead == 'q') ADVANCE(800);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(816);
      if (lookahead == 'l') ADVANCE(815);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(896);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(746);
      if (lookahead == 's') ADVANCE(682);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(895);
      if (lookahead == 's') ADVANCE(898);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(906);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(699);
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(749);
      if (lookahead == 's') ADVANCE(751);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(750);
      if (lookahead == 's') ADVANCE(752);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(717);
      if (lookahead == 's') ADVANCE(714);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(768);
      if (lookahead == 'q') ADVANCE(765);
      if (lookahead == 'w') ADVANCE(760);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(606);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(989);
      if (lookahead == 'q') ADVANCE(984);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(988);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(982);
      if (lookahead == 'q') ADVANCE(985);
      if (lookahead == 'w') ADVANCE(983);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(709);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == 's') ADVANCE(705);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(899);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(885);
      if (lookahead == 's') ADVANCE(884);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(691);
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(852);
      if (lookahead == 's') ADVANCE(843);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(1045);
      if (lookahead == 's') ADVANCE(1041);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(739);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(870);
      if (lookahead == 's') ADVANCE(860);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(733);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(969);
      if (lookahead == 'q') ADVANCE(970);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(974);
      if (lookahead == 'q') ADVANCE(975);
      if (lookahead == 'w') ADVANCE(976);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(978);
      if (lookahead == 'q') ADVANCE(979);
      if (lookahead == 'w') ADVANCE(980);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(756);
      if (lookahead == 'q') ADVANCE(755);
      if (lookahead == 'u') ADVANCE(540);
      if (lookahead == 'w') ADVANCE(757);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(753);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(769);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(759);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(747);
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(859);
      if (lookahead == 's') ADVANCE(858);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(821);
      if (lookahead == 's') ADVANCE(822);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(819);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(953);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(1056);
      if (lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(738);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1052);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(1051);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(741);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(744);
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(934);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(937);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(1055);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(772);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(949);
      if (lookahead == 's') ADVANCE(950);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(951);
      if (lookahead == 's') ADVANCE(952);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(827);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(945);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(938);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(1061);
      if (lookahead == 'q') ADVANCE(1060);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == 'k') ADVANCE(258);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(569);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(621);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(634);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead == 'q') ADVANCE(239);
      if (lookahead == 'w') ADVANCE(219);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'q') ADVANCE(240);
      if (lookahead == 'w') ADVANCE(220);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(468);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(469);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(470);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(472);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(473);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(608);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(598);
      if (lookahead == 's') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(921);
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1169);
      if (lookahead == 'o') ADVANCE(1170);
      if (lookahead == 's') ADVANCE(1171);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == 'p') ADVANCE(790);
      if (lookahead == 's') ADVANCE(792);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(805);
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead == 'z') ADVANCE(148);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(591);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 281:
      if (lookahead == 'f') ADVANCE(773);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 282:
      if (lookahead == 'f') ADVANCE(122);
      END_STATE();
    case 283:
      if (lookahead == 'f') ADVANCE(319);
      END_STATE();
    case 284:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 285:
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 286:
      if (lookahead == 'f') ADVANCE(438);
      END_STATE();
    case 287:
      if (lookahead == 'f') ADVANCE(274);
      END_STATE();
    case 288:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 289:
      if (lookahead == 'g') ADVANCE(720);
      END_STATE();
    case 290:
      if (lookahead == 'g') ADVANCE(854);
      END_STATE();
    case 291:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 292:
      if (lookahead == 'g') ADVANCE(1155);
      END_STATE();
    case 293:
      if (lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 294:
      if (lookahead == 'g') ADVANCE(401);
      END_STATE();
    case 295:
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead == 'l') ADVANCE(594);
      END_STATE();
    case 296:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 297:
      if (lookahead == 'h') ADVANCE(990);
      END_STATE();
    case 298:
      if (lookahead == 'h') ADVANCE(290);
      END_STATE();
    case 299:
      if (lookahead == 'h') ADVANCE(596);
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 300:
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 301:
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 302:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 303:
      if (lookahead == 'h') ADVANCE(476);
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 304:
      if (lookahead == 'h') ADVANCE(477);
      END_STATE();
    case 305:
      if (lookahead == 'h') ADVANCE(448);
      END_STATE();
    case 306:
      if (lookahead == 'h') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(442);
      END_STATE();
    case 307:
      if (lookahead == 'h') ADVANCE(573);
      END_STATE();
    case 308:
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 309:
      if (lookahead == 'h') ADVANCE(478);
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 310:
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 311:
      if (lookahead == 'h') ADVANCE(480);
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 312:
      if (lookahead == 'h') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 313:
      if (lookahead == 'h') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(1116);
      if (lookahead == 'l') ADVANCE(1129);
      if (lookahead == 's') ADVANCE(1075);
      if (lookahead == 'x') ADVANCE(1113);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(1115);
      if (lookahead == 'p') ADVANCE(1117);
      if (lookahead == 's') ADVANCE(1073);
      if (lookahead == 't') ADVANCE(1185);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(1100);
      if (lookahead == 'x') ADVANCE(1097);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(1084);
      if (lookahead == 'x') ADVANCE(1082);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(1083);
      if (lookahead == 'p') ADVANCE(1086);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(818);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(820);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(613);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(543);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 's') ADVANCE(523);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 334:
      if (lookahead == 'k') ADVANCE(923);
      END_STATE();
    case 335:
      if (lookahead == 'k') ADVANCE(1176);
      END_STATE();
    case 336:
      if (lookahead == 'k') ADVANCE(300);
      END_STATE();
    case 337:
      if (lookahead == 'k') ADVANCE(305);
      END_STATE();
    case 338:
      if (lookahead == 'k') ADVANCE(306);
      END_STATE();
    case 339:
      if (lookahead == 'k') ADVANCE(603);
      END_STATE();
    case 340:
      if (lookahead == 'k') ADVANCE(301);
      END_STATE();
    case 341:
      if (lookahead == 'k') ADVANCE(129);
      END_STATE();
    case 342:
      if (lookahead == 'k') ADVANCE(609);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(1127);
      if (lookahead == 'x') ADVANCE(1111);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(1130);
      if (lookahead == 'p') ADVANCE(1118);
      if (lookahead == 'x') ADVANCE(1114);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(1128);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead == 'x') ADVANCE(1112);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 't') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(711);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(954);
      if (lookahead == 'r') ADVANCE(955);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(719);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(855);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(857);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(837);
      if (lookahead == 'q') ADVANCE(838);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(841);
      if (lookahead == 'q') ADVANCE(840);
      if (lookahead == 'w') ADVANCE(839);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(842);
      END_STATE();
    case 356:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 357:
      if (lookahead == 'l') ADVANCE(1010);
      END_STATE();
    case 358:
      if (lookahead == 'l') ADVANCE(1156);
      if (lookahead == 'q') ADVANCE(1153);
      END_STATE();
    case 359:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 360:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 361:
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 362:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 363:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 364:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(601);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(629);
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == 'p') ADVANCE(513);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 376:
      if (lookahead == 'm') ADVANCE(412);
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 377:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 378:
      if (lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 379:
      if (lookahead == 'm') ADVANCE(511);
      END_STATE();
    case 380:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 381:
      if (lookahead == 'm') ADVANCE(531);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(402);
      END_STATE();
    case 382:
      if (lookahead == 'm') ADVANCE(328);
      END_STATE();
    case 383:
      if (lookahead == 'm') ADVANCE(602);
      END_STATE();
    case 384:
      if (lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 385:
      if (lookahead == 'm') ADVANCE(607);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      END_STATE();
    case 387:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 388:
      if (lookahead == 'n') ADVANCE(532);
      END_STATE();
    case 389:
      if (lookahead == 'n') ADVANCE(536);
      END_STATE();
    case 390:
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 391:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 392:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 393:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 394:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 395:
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(817);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead == 'p') ADVANCE(685);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 420:
      if (lookahead == 'p') ADVANCE(1184);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(1101);
      if (lookahead == 'x') ADVANCE(1098);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(1183);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(1085);
      if (lookahead == 'x') ADVANCE(1080);
      END_STATE();
    case 424:
      if (lookahead == 'p') ADVANCE(1182);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(1167);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(909);
      if (lookahead == 't') ADVANCE(900);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(992);
      if (lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 428:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 429:
      if (lookahead == 'p') ADVANCE(797);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(723);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(539);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 435:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 436:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 437:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(514);
      END_STATE();
    case 441:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 442:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 443:
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 444:
      if (lookahead == 'p') ADVANCE(515);
      END_STATE();
    case 445:
      if (lookahead == 'p') ADVANCE(453);
      END_STATE();
    case 446:
      if (lookahead == 'p') ADVANCE(516);
      END_STATE();
    case 447:
      if (lookahead == 'p') ADVANCE(517);
      END_STATE();
    case 448:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 449:
      if (lookahead == 'p') ADVANCE(519);
      END_STATE();
    case 450:
      if (lookahead == 'p') ADVANCE(521);
      if (lookahead == 'v') ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'p') ADVANCE(522);
      END_STATE();
    case 452:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 453:
      if (lookahead == 'q') ADVANCE(1168);
      END_STATE();
    case 454:
      if (lookahead == 'q') ADVANCE(930);
      END_STATE();
    case 455:
      if (lookahead == 'q') ADVANCE(1157);
      END_STATE();
    case 456:
      if (lookahead == 'q') ADVANCE(929);
      END_STATE();
    case 457:
      if (lookahead == 'q') ADVANCE(993);
      END_STATE();
    case 458:
      if (lookahead == 'q') ADVANCE(124);
      END_STATE();
    case 459:
      if (lookahead == 'q') ADVANCE(766);
      END_STATE();
    case 460:
      if (lookahead == 'q') ADVANCE(743);
      END_STATE();
    case 461:
      if (lookahead == 'q') ADVANCE(933);
      END_STATE();
    case 462:
      if (lookahead == 'q') ADVANCE(936);
      END_STATE();
    case 463:
      if (lookahead == 'q') ADVANCE(941);
      END_STATE();
    case 464:
      if (lookahead == 'q') ADVANCE(940);
      END_STATE();
    case 465:
      if (lookahead == 'q') ADVANCE(943);
      END_STATE();
    case 466:
      if (lookahead == 'q') ADVANCE(939);
      END_STATE();
    case 467:
      if (lookahead == 'q') ADVANCE(942);
      END_STATE();
    case 468:
      if (lookahead == 'q') ADVANCE(944);
      END_STATE();
    case 469:
      if (lookahead == 'q') ADVANCE(729);
      END_STATE();
    case 470:
      if (lookahead == 'q') ADVANCE(726);
      END_STATE();
    case 471:
      if (lookahead == 'q') ADVANCE(725);
      END_STATE();
    case 472:
      if (lookahead == 'q') ADVANCE(728);
      END_STATE();
    case 473:
      if (lookahead == 'q') ADVANCE(724);
      END_STATE();
    case 474:
      if (lookahead == 'q') ADVANCE(727);
      END_STATE();
    case 475:
      if (lookahead == 'q') ADVANCE(730);
      END_STATE();
    case 476:
      if (lookahead == 'q') ADVANCE(304);
      END_STATE();
    case 477:
      if (lookahead == 'q') ADVANCE(241);
      END_STATE();
    case 478:
      if (lookahead == 'q') ADVANCE(242);
      END_STATE();
    case 479:
      if (lookahead == 'q') ADVANCE(243);
      END_STATE();
    case 480:
      if (lookahead == 'q') ADVANCE(244);
      END_STATE();
    case 481:
      if (lookahead == 'q') ADVANCE(245);
      END_STATE();
    case 482:
      if (lookahead == 'q') ADVANCE(246);
      END_STATE();
    case 483:
      if (lookahead == 'q') ADVANCE(247);
      END_STATE();
    case 484:
      if (lookahead == 'q') ADVANCE(309);
      END_STATE();
    case 485:
      if (lookahead == 'q') ADVANCE(311);
      END_STATE();
    case 486:
      if (lookahead == 'q') ADVANCE(312);
      END_STATE();
    case 487:
      if (lookahead == 'r') ADVANCE(876);
      if (lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 488:
      if (lookahead == 'r') ADVANCE(956);
      END_STATE();
    case 489:
      if (lookahead == 'r') ADVANCE(881);
      END_STATE();
    case 490:
      if (lookahead == 'r') ADVANCE(905);
      END_STATE();
    case 491:
      if (lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 492:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(888);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(948);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(947);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(1011);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 499:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 500:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 501:
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 'x') ADVANCE(590);
      END_STATE();
    case 502:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 503:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 504:
      if (lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 507:
      if (lookahead == 's') ADVANCE(1077);
      END_STATE();
    case 508:
      if (lookahead == 's') ADVANCE(1078);
      END_STATE();
    case 509:
      if (lookahead == 's') ADVANCE(920);
      END_STATE();
    case 510:
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 511:
      if (lookahead == 's') ADVANCE(927);
      END_STATE();
    case 512:
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 513:
      if (lookahead == 's') ADVANCE(849);
      END_STATE();
    case 514:
      if (lookahead == 's') ADVANCE(846);
      END_STATE();
    case 515:
      if (lookahead == 's') ADVANCE(886);
      END_STATE();
    case 516:
      if (lookahead == 's') ADVANCE(844);
      END_STATE();
    case 517:
      if (lookahead == 's') ADVANCE(868);
      END_STATE();
    case 518:
      if (lookahead == 's') ADVANCE(1038);
      END_STATE();
    case 519:
      if (lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 520:
      if (lookahead == 's') ADVANCE(825);
      END_STATE();
    case 521:
      if (lookahead == 's') ADVANCE(1053);
      END_STATE();
    case 522:
      if (lookahead == 's') ADVANCE(1054);
      END_STATE();
    case 523:
      if (lookahead == 's') ADVANCE(1059);
      END_STATE();
    case 524:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(636);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 530:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 534:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(493);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(570);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(635);
      END_STATE();
    case 546:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 547:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 548:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 549:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 550:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 551:
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 552:
      if (lookahead == 's') ADVANCE(575);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 554:
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 555:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 556:
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(520);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 560:
      if (lookahead == 's') ADVANCE(564);
      END_STATE();
    case 561:
      if (lookahead == 's') ADVANCE(581);
      END_STATE();
    case 562:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 563:
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 564:
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(856);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(793);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(928);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(908);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(1013);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(1015);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(1017);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(1018);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(624);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(503);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 595:
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 596:
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 597:
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 598:
      if (lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 599:
      if (lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 600:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 601:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 602:
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 603:
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 604:
      if (lookahead == 'u') ADVANCE(530);
      END_STATE();
    case 605:
      if (lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 606:
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == 'w') ADVANCE(199);
      END_STATE();
    case 607:
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 608:
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(210);
      END_STATE();
    case 609:
      if (lookahead == 'u') ADVANCE(557);
      END_STATE();
    case 610:
      if (lookahead == 'v') ADVANCE(695);
      END_STATE();
    case 611:
      if (lookahead == 'v') ADVANCE(828);
      END_STATE();
    case 612:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 613:
      if (lookahead == 'v') ADVANCE(700);
      END_STATE();
    case 614:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 615:
      if (lookahead == 'v') ADVANCE(1007);
      END_STATE();
    case 616:
      if (lookahead == 'v') ADVANCE(623);
      END_STATE();
    case 617:
      if (lookahead == 'v') ADVANCE(593);
      END_STATE();
    case 618:
      if (lookahead == 'v') ADVANCE(548);
      END_STATE();
    case 619:
      if (lookahead == 'v') ADVANCE(526);
      END_STATE();
    case 620:
      if (lookahead == 'v') ADVANCE(380);
      END_STATE();
    case 621:
      if (lookahead == 'v') ADVANCE(449);
      END_STATE();
    case 622:
      if (lookahead == 'w') ADVANCE(798);
      END_STATE();
    case 623:
      if (lookahead == 'w') ADVANCE(1009);
      END_STATE();
    case 624:
      if (lookahead == 'w') ADVANCE(796);
      END_STATE();
    case 625:
      if (lookahead == 'w') ADVANCE(1057);
      END_STATE();
    case 626:
      if (lookahead == 'w') ADVANCE(1044);
      END_STATE();
    case 627:
      if (lookahead == 'w') ADVANCE(1042);
      END_STATE();
    case 628:
      if (lookahead == 'w') ADVANCE(1019);
      END_STATE();
    case 629:
      if (lookahead == 'w') ADVANCE(742);
      END_STATE();
    case 630:
      if (lookahead == 'w') ADVANCE(754);
      END_STATE();
    case 631:
      if (lookahead == 'w') ADVANCE(767);
      END_STATE();
    case 632:
      if (lookahead == 'w') ADVANCE(932);
      END_STATE();
    case 633:
      if (lookahead == 'w') ADVANCE(935);
      END_STATE();
    case 634:
      if (lookahead == 'w') ADVANCE(946);
      END_STATE();
    case 635:
      if (lookahead == 'w') ADVANCE(740);
      END_STATE();
    case 636:
      if (lookahead == 'w') ADVANCE(128);
      END_STATE();
    case 637:
      if (lookahead == 'x') ADVANCE(1095);
      END_STATE();
    case 638:
      if (lookahead == 'x') ADVANCE(1096);
      END_STATE();
    case 639:
      if (lookahead == 'x') ADVANCE(1079);
      END_STATE();
    case 640:
      if (lookahead == 'x') ADVANCE(1081);
      END_STATE();
    case 641:
      if (lookahead == 'x') ADVANCE(732);
      END_STATE();
    case 642:
      if (lookahead == 'x') ADVANCE(654);
      END_STATE();
    case 643:
      if (lookahead == 'x') ADVANCE(529);
      END_STATE();
    case 644:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 645:
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 646:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 647:
      if (lookahead == 'x') ADVANCE(586);
      END_STATE();
    case 648:
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 649:
      if (lookahead == 'x') ADVANCE(59);
      END_STATE();
    case 650:
      if (lookahead == 'x') ADVANCE(587);
      END_STATE();
    case 651:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 652:
      if (lookahead == 'x') ADVANCE(588);
      END_STATE();
    case 653:
      if (lookahead == 'y') ADVANCE(296);
      END_STATE();
    case 654:
      if (lookahead == 'z') ADVANCE(1174);
      END_STATE();
    case 655:
      if (lookahead == 'z') ADVANCE(997);
      END_STATE();
    case 656:
      if (lookahead == '}') ADVANCE(1148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(656)
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1147);
      END_STATE();
    case 657:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(657)
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('(' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(1072);
      END_STATE();
    case 658:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      END_STATE();
    case 659:
      if (eof) ADVANCE(660);
      if (lookahead == '%') ADVANCE(1187);
      if (lookahead == '(') ADVANCE(1144);
      if (lookahead == ')') ADVANCE(1145);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(659)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(661);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__address_token1);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__byte);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'c') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'c') ADVANCE(694);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 'm') ADVANCE(379);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__byte);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(670);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(672);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == ' ') ADVANCE(676);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(673);
      if (lookahead == ' ') ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_adc);
      if (lookahead == 'x') ADVANCE(731);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == 'b') ADVANCE(684);
      if (lookahead == 'l') ADVANCE(681);
      if (lookahead == 'q') ADVANCE(680);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(683);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_addq);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_addl);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_addss);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_addw);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_addb);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_cmp);
      if (lookahead == 'b') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(688);
      if (lookahead == 'q') ADVANCE(689);
      if (lookahead == 'w') ADVANCE(687);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_cmpb);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_cmpw);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_cmpl);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_cmpq);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_comiss);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_comisd);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_inc);
      if (lookahead == 'l') ADVANCE(693);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_incl);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == 'l') ADVANCE(697);
      if (lookahead == 'q') ADVANCE(696);
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_divq);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_divl);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_divss);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_divsd);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_idiv);
      if (lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_idivl);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_sub);
      if (lookahead == 'b') ADVANCE(707);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 'q') ADVANCE(703);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 'w') ADVANCE(706);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_subq);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_subl);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_subss);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_subw);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_subb);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_subsd);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_subpd);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_sbb);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_mul);
      if (lookahead == 'b') ADVANCE(716);
      if (lookahead == 'l') ADVANCE(713);
      if (lookahead == 'q') ADVANCE(712);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 'w') ADVANCE(715);
      if (lookahead == 'x') ADVANCE(718);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_mulq);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_mull);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_mulss);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_mulw);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_mulb);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_mulsd);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_mulx);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_imul);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_neg);
      if (lookahead == 'l') ADVANCE(721);
      if (lookahead == 'q') ADVANCE(722);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_negl);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_negq);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_fmulp);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_vpclmulhqlqdq);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_pclmullqlqdq);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_pclmullqhqdq);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_vpclmullqhqdq);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_vpclmulhqhqdq);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_pclmulhqhqdq);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_vpclmullqlqdq);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_adcx);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_adox);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_vmulsd);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_vpaddd);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_vpaddb);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_vpaddq);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_vpaddw);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_vpcmpgtd);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_vdivsd);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_vpmaddubsw);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_vpmaddwd);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_vpmullw);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_vpmuludq);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_vucomisd);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_vucomiss);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_addsd);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_ucomisd);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_ucomiss);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_maxsd);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_minsd);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_maxss);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_minss);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_vsubsd);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_vpsubusw);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_vpsubq);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_vpsubd);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_vpsubw);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_psubd);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_pmaddwd);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_paddw);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_psubusw);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_psubusb);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_psubb);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_psubq);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_paddq);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_pmuludq);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_pmaddubsw);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_paddd);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_pcmpgtd);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_pcmpeqd);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_pcmpeqb);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_vpcmpltud);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_bsf);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_bsr);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_bts);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_bt);
      if (lookahead == 'l') ADVANCE(778);
      if (lookahead == 'r') ADVANCE(777);
      if (lookahead == 's') ADVANCE(775);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_btr);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_btl);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_setne);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_setb);
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_sete);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_setbe);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_seta);
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_setge);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_setae);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_setl);
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_setle);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_setg);
      if (lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_seto);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_setnp);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_setp);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_setns);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead == 'b') ADVANCE(794);
      if (lookahead == 'l') ADVANCE(795);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_testb);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_testl);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_knotw);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_bswap);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_cbtw);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_cltd);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_cltq);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_cmovbe);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_cmovl);
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_cmovae);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_cmovo);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_cmovne);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_cmovns);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_cmovg);
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_cmovp);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_cmove);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_cmovge);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_cmovb);
      if (lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_cmova);
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_cmovle);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_cmovs);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_cwtl);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_cwtd);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_cqto);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_cvttsd2si);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_cvtss2sd);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_cvttss2si);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_cvtsi2sd);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'q') ADVANCE(823);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_cvtsi2ss);
      if (lookahead == 'l') ADVANCE(826);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdq);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_cvtsi2sdl);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_cvtsd2ss);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_cvtsi2ssl);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_vcvtusi2sd);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_mov);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(832);
      if (lookahead == 'd') ADVANCE(848);
      if (lookahead == 'h') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(830);
      if (lookahead == 'q') ADVANCE(831);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(440);
      if (lookahead == 'w') ADVANCE(829);
      if (lookahead == 'z') ADVANCE(116);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_movw);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_movl);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_movq);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_movb);
      if (lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_movabs);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_movsbw);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_movsbq);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_movsbl);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_movswl);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_movswq);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_movzbw);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_movzbq);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_movzbl);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_movzwl);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_movaps);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_movhlps);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_movss);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_movups);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_movsd);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_movd);
      if (lookahead == 'q') ADVANCE(88);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_movhps);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_movdqa);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_movbe);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_movapd);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_movdqu);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_xchg);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_fildl);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_fldt);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_fstpl);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_vmovaps);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_vmovapd);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_vmovss);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_vmovdqu);
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_vmovdqu64);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_vmovdqu32);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_vmovdqa);
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_vmovdqa32);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_vmovdqa64);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_vmovq);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_vmovups);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_vmovd);
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_vmovsd);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_pmovmskb);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_insb);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_insl);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_outsb);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_outsl);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == 'b') ADVANCE(879);
      if (lookahead == 'l') ADVANCE(878);
      if (lookahead == 'q') ADVANCE(877);
      if (lookahead == 'w') ADVANCE(880);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_orq);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_orl);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_orb);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_orw);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == 'l') ADVANCE(882);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == 'w') ADVANCE(883);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_xorl);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_xorw);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_xorps);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_xorpd);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_vxorps);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_vpxord);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_vpxor);
      if (lookahead == 'd') ADVANCE(887);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == 'b') ADVANCE(893);
      if (lookahead == 'l') ADVANCE(891);
      if (lookahead == 'n') ADVANCE(894);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == 'q') ADVANCE(890);
      if (lookahead == 'w') ADVANCE(892);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_andq);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_andl);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_andw);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_andb);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_andn);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_andpd);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_pand);
      if (lookahead == 'n') ADVANCE(897);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_pandn);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_andps);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_vpand);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'l') ADVANCE(901);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(902);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_notl);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_notw);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_vpor);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_por);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_pxor);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_cpuid);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_lea);
      if (lookahead == 'v') ADVANCE(265);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_popcnt);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_nop);
      if (lookahead == 'l') ADVANCE(910);
      if (lookahead == 'w') ADVANCE(911);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_nopl);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_nopw);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_ud2);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_data16);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_sha1rnds4);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_addr32);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_sha1msg1);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_sha1msg2);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_sha1nexte);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_endbr64);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_re);
      if (lookahead == 'p') ADVANCE(995);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead == 'x') ADVANCE(998);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_prefetcht1);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_prefetcht0);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_mfence);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_femms);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_tzcnt);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_leaveq);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_retq);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_packuswb);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_punpckhbw);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_punpckhdq);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_punpckhwd);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_punpcklbw);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_punpckldq);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_punpcklwd);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_vpunpcklwd);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_vpunpckldq);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_punpcklqdq);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_punpckhqdq);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_vpunpckhqdq);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_vpunpckhdq);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_vpunpcklqdq);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_vpunpckhwd);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_vpackusdw);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_vpalignr);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_palignr);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_vunpckhpd);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_vunpckhps);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_vunpcklpd);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_vunpcklps);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_unpckhpd);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_rol);
      if (lookahead == 'l') ADVANCE(972);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_ror);
      if (lookahead == 'l') ADVANCE(971);
      if (lookahead == 'x') ADVANCE(981);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_sar);
      if (lookahead == 'l') ADVANCE(957);
      if (lookahead == 'x') ADVANCE(958);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_sarl);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_sarx);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == 'd') ADVANCE(961);
      if (lookahead == 'l') ADVANCE(960);
      if (lookahead == 'q') ADVANCE(963);
      if (lookahead == 'x') ADVANCE(962);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_shll);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_shld);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_shlx);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_shlq);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_shr);
      if (lookahead == 'd') ADVANCE(966);
      if (lookahead == 'l') ADVANCE(967);
      if (lookahead == 'q') ADVANCE(965);
      if (lookahead == 'x') ADVANCE(968);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_shrq);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_shrd);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_shrl);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_shrx);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_vprord);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_vprorq);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_rorl);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_roll);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_vpslldq);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_vpslld);
      if (lookahead == 'q') ADVANCE(973);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_vpsllq);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_vpsllw);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_vpsrldq);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_vpsrld);
      if (lookahead == 'q') ADVANCE(977);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_vpsrlq);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_vpsrlw);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_rorx);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_psrld);
      if (lookahead == 'q') ADVANCE(987);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_psrlw);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_psllq);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_psrlq);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_pslldq);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_psrldq);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_psrad);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_pslld);
      if (lookahead == 'q') ADVANCE(986);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'q') ADVANCE(991);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_pushq);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_movslq);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_movsb);
      if (lookahead == 'l') ADVANCE(836);
      if (lookahead == 'q') ADVANCE(835);
      if (lookahead == 'w') ADVANCE(834);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_rep);
      if (lookahead == 'n') ADVANCE(655);
      if (lookahead == 'z') ADVANCE(996);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_repz);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_repnz);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_rex);
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_rex_DOTWB);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRB);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_rex_DOTRXB);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_rex_DOTB);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_rex_DOTWRXB);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_rex_DOTXB);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_rex_DOTW);
      if (lookahead == 'B') ADVANCE(999);
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_rex_DOTRB);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_xgetbv);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_fs);
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(anon_sym_kmovw);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(anon_sym_vzeroall);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_vzeroupper);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_aesdec);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_aesdeclast);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(anon_sym_aesenc);
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(anon_sym_aesenclast);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(anon_sym_vaesenc);
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(anon_sym_vaesenclast);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(anon_sym_aeskeygenassist);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(anon_sym_vpextrw);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(anon_sym_vextracti128);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(anon_sym_vextracti32x4);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(anon_sym_pextrq);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(anon_sym_pextrw);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(anon_sym_pextrb);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(anon_sym_vpinsrw);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(anon_sym_vpinsrd);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(anon_sym_vpinsrq);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(anon_sym_vpinsrb);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(anon_sym_vinserti128);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(anon_sym_vinserti32x4);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(anon_sym_vinserti64x4);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(anon_sym_vinsertf128);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(anon_sym_pinsrw);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(anon_sym_pinsrb);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(anon_sym_pinsrd);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(anon_sym_vpshufb);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(anon_sym_vpshufd);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(anon_sym_vshufps);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(anon_sym_vshufi32x4);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(anon_sym_vshufi64x2);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(anon_sym_shufps);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(anon_sym_pshuflw);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(anon_sym_pshufd);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(anon_sym_pshufhw);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(anon_sym_shufpd);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(anon_sym_pshufb);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(anon_sym_vperm2f128);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_vperm2i128);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_vpermd);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_vpermq);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_vpermt2d);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_vpermi2d);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_vblendps);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_vblendvps);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_vpblendmd);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(anon_sym_vpblendd);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_pblendw);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(anon_sym_blendvps);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_vbroadcastss);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_vpbroadcastq);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_vpbroadcastd);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_vbroadcasti128);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_vbroadcasti32x4);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'm') ADVANCE(432);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_operand_token1);
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_operand_token2);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_immediateOperand_token1);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_PERCENTss);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(anon_sym_PERCENTcs);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(anon_sym_PERCENTds);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(anon_sym_PERCENTes);
      if (lookahead == 'i') ADVANCE(1099);
      if (lookahead == 'p') ADVANCE(1102);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(anon_sym_PERCENTfs);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_PERCENTgs);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_PERCENTrax);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_PERCENTrbx);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_PERCENTrcx);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_PERCENTrdx);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(anon_sym_PERCENTrsi);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(anon_sym_PERCENTrdi);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_PERCENTrbp);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_PERCENTrsp);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_PERCENTr8);
      if (lookahead == 'b') ADVANCE(1135);
      if (lookahead == 'd') ADVANCE(1103);
      if (lookahead == 'w') ADVANCE(1119);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(anon_sym_PERCENTr9);
      if (lookahead == 'b') ADVANCE(1136);
      if (lookahead == 'd') ADVANCE(1104);
      if (lookahead == 'w') ADVANCE(1120);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_PERCENTr10);
      if (lookahead == 'b') ADVANCE(1137);
      if (lookahead == 'd') ADVANCE(1105);
      if (lookahead == 'w') ADVANCE(1121);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_PERCENTr11);
      if (lookahead == 'b') ADVANCE(1138);
      if (lookahead == 'd') ADVANCE(1106);
      if (lookahead == 'w') ADVANCE(1122);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_PERCENTr12);
      if (lookahead == 'b') ADVANCE(1139);
      if (lookahead == 'd') ADVANCE(1107);
      if (lookahead == 'w') ADVANCE(1123);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_PERCENTr13);
      if (lookahead == 'b') ADVANCE(1140);
      if (lookahead == 'd') ADVANCE(1108);
      if (lookahead == 'w') ADVANCE(1124);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_PERCENTr14);
      if (lookahead == 'b') ADVANCE(1141);
      if (lookahead == 'd') ADVANCE(1109);
      if (lookahead == 'w') ADVANCE(1125);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_PERCENTr15);
      if (lookahead == 'b') ADVANCE(1142);
      if (lookahead == 'd') ADVANCE(1110);
      if (lookahead == 'w') ADVANCE(1126);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_PERCENTeax);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_PERCENTecx);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_PERCENTedx);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_PERCENTebx);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_PERCENTesi);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_PERCENTedi);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_PERCENTebp);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_PERCENTesp);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_PERCENTr8d);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_PERCENTr9d);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_PERCENTr10d);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_PERCENTr11d);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_PERCENTr12d);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_PERCENTr13d);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_PERCENTr14d);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_PERCENTr15d);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_PERCENTax);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_PERCENTcx);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_PERCENTdx);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_PERCENTbx);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_PERCENTsi);
      if (lookahead == 'l') ADVANCE(1131);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_PERCENTdi);
      if (lookahead == 'l') ADVANCE(1132);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_PERCENTsp);
      if (lookahead == 'l') ADVANCE(1133);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_PERCENTbp);
      if (lookahead == 'l') ADVANCE(1134);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_PERCENTr8w);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_PERCENTr9w);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_PERCENTr10w);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_PERCENTr11w);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_PERCENTr12w);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_PERCENTr13w);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_PERCENTr14w);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_PERCENTr15w);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_PERCENTal);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_PERCENTcl);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_PERCENTdl);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_PERCENTbl);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_PERCENTsil);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_PERCENTdil);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_PERCENTspl);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_PERCENTbpl);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_PERCENTr8b);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_PERCENTr9b);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_PERCENTr10b);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_PERCENTr11b);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_PERCENTr12b);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_PERCENTr13b);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_PERCENTr14b);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_PERCENTr15b);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_memoryIndirectOperand_token1);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_movsq);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_cmpsb);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_cmpxchg);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_movsl);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_callq);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_ja);
      if (lookahead == 'e') ADVANCE(1159);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_jae);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_jb);
      if (lookahead == 'e') ADVANCE(1161);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_jbe);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_je);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_jg);
      if (lookahead == 'e') ADVANCE(1164);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_jge);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_jl);
      if (lookahead == 'e') ADVANCE(1166);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_jle);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (lookahead == 'q') ADVANCE(1168);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_jmpq);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_jne);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_jno);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_jns);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_jo);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_jp);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_jrcxz);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_js);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_notrack);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_PERCENTcr0);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_PERCENTcr2);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_PERCENTcr3);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_PERCENTcr4);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_PERCENTrip);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_PERCENTeip);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_PERCENTip);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_PERCENTst);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'b') ADVANCE(344);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == 'd') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(507);
      if (lookahead == 'g') ADVANCE(508);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_otherFnOperands_token1);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_otherFnOperands_token1);
      if (lookahead == 'm') ADVANCE(445);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 659},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 659},
  [14] = {.lex_state = 659},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 659},
  [31] = {.lex_state = 659},
  [32] = {.lex_state = 659},
  [33] = {.lex_state = 659},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 659},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 659},
  [39] = {.lex_state = 659},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 659},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 659},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 659},
  [46] = {.lex_state = 659},
  [47] = {.lex_state = 659},
  [48] = {.lex_state = 659},
  [49] = {.lex_state = 659},
  [50] = {.lex_state = 659},
  [51] = {.lex_state = 659},
  [52] = {.lex_state = 659},
  [53] = {.lex_state = 659},
  [54] = {.lex_state = 659},
  [55] = {.lex_state = 659},
  [56] = {.lex_state = 659},
  [57] = {.lex_state = 659},
  [58] = {.lex_state = 659},
  [59] = {.lex_state = 659},
  [60] = {.lex_state = 659},
  [61] = {.lex_state = 659},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 659},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 659},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 659},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 659},
  [157] = {.lex_state = 72},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 656},
  [160] = {.lex_state = 656},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 656},
  [163] = {.lex_state = 656},
  [164] = {.lex_state = 656},
  [165] = {.lex_state = 656},
  [166] = {.lex_state = 656},
  [167] = {.lex_state = 656},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 72},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 656},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 72},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 659},
  [184] = {.lex_state = 656},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 656},
  [192] = {.lex_state = 659},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 659},
  [196] = {.lex_state = 659},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 659},
  [199] = {.lex_state = 659},
  [200] = {.lex_state = 659},
  [201] = {.lex_state = 656},
  [202] = {.lex_state = 656},
  [203] = {.lex_state = 659},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 656},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 72},
  [213] = {.lex_state = 659},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 659},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
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
  [229] = {.lex_state = 656},
  [230] = {.lex_state = 659},
  [231] = {.lex_state = 657},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 659},
  [234] = {.lex_state = 659},
  [235] = {.lex_state = 659},
  [236] = {.lex_state = 659},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 659},
  [239] = {.lex_state = 659},
  [240] = {.lex_state = 659},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 659},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 657},
  [246] = {.lex_state = 656},
  [247] = {.lex_state = 659},
  [248] = {.lex_state = 659},
  [249] = {.lex_state = 659},
  [250] = {.lex_state = 659},
  [251] = {.lex_state = 659},
  [252] = {.lex_state = 659},
  [253] = {.lex_state = 656},
  [254] = {.lex_state = 656},
  [255] = {.lex_state = 659},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 659},
  [258] = {.lex_state = 659},
  [259] = {.lex_state = 72},
  [260] = {.lex_state = 656},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 659},
  [264] = {.lex_state = 659},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 659},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 659},
  [269] = {.lex_state = 659},
  [270] = {.lex_state = 659},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 659},
  [273] = {.lex_state = 659},
  [274] = {.lex_state = 659},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 659},
  [277] = {.lex_state = 659},
  [278] = {.lex_state = 659},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 659},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 659},
  [285] = {.lex_state = 659},
  [286] = {.lex_state = 659},
  [287] = {.lex_state = 659},
  [288] = {.lex_state = 659},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 659},
  [291] = {.lex_state = 659},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 659},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
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
    [sym_prog] = STATE(283),
    [sym__address] = STATE(198),
    [sym__machine_code] = STATE(2),
    [sym__line] = STATE(70),
    [aux_sym_prog_repeat1] = STATE(70),
    [aux_sym__address_repeat1] = STATE(154),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__address_token1] = ACTIONS(5),
  },
  [2] = {
    [sym_comment] = STATE(299),
    [sym_instruction] = STATE(146),
    [sym_data] = STATE(155),
    [sym_opcode] = STATE(6),
    [sym_BinaryArithmeticOpcode] = STATE(34),
    [sym_BitAndByteOpcode] = STATE(34),
    [sym_DataTransferOpcode] = STATE(34),
    [sym_IOOpcode] = STATE(34),
    [sym_LogicalOpcode] = STATE(34),
    [sym_MiscellaneousOpcode] = STATE(34),
    [sym_OperatingSystemSupportOpcode] = STATE(34),
    [sym_PackUnpackOpcode] = STATE(34),
    [sym_ShiftAndRotateOpcode] = STATE(34),
    [sym_StackOpcode] = STATE(34),
    [sym_StringOpcode] = STATE(34),
    [sym_AccessRegisterOpcode] = STATE(34),
    [sym_CryptoOpcode] = STATE(34),
    [sym_ExtractOpcode] = STATE(34),
    [sym_InsertOpcode] = STATE(34),
    [sym_ShuffleOpcode] = STATE(34),
    [sym_PermuteOpcode] = STATE(34),
    [sym_BlendOpcode] = STATE(34),
    [sym_BroadcastOpcode] = STATE(34),
    [sym_control] = STATE(155),
    [sym_controlOpcode] = STATE(64),
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
  [3] = {
    [aux_sym__machine_code_repeat1] = STATE(3),
    [sym__byte] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(54),
    [aux_sym_comment_token2] = ACTIONS(54),
    [sym__line_break] = ACTIONS(56),
    [anon_sym_adc] = ACTIONS(54),
    [anon_sym_add] = ACTIONS(54),
    [anon_sym_addq] = ACTIONS(54),
    [anon_sym_addl] = ACTIONS(54),
    [anon_sym_addss] = ACTIONS(54),
    [anon_sym_addw] = ACTIONS(54),
    [anon_sym_addb] = ACTIONS(54),
    [anon_sym_cmp] = ACTIONS(54),
    [anon_sym_cmpb] = ACTIONS(54),
    [anon_sym_cmpw] = ACTIONS(54),
    [anon_sym_cmpl] = ACTIONS(54),
    [anon_sym_cmpq] = ACTIONS(54),
    [anon_sym_comiss] = ACTIONS(54),
    [anon_sym_comisd] = ACTIONS(54),
    [anon_sym_inc] = ACTIONS(54),
    [anon_sym_incl] = ACTIONS(54),
    [anon_sym_dec] = ACTIONS(54),
    [anon_sym_div] = ACTIONS(54),
    [anon_sym_divq] = ACTIONS(54),
    [anon_sym_divl] = ACTIONS(54),
    [anon_sym_divss] = ACTIONS(54),
    [anon_sym_divsd] = ACTIONS(54),
    [anon_sym_idiv] = ACTIONS(54),
    [anon_sym_idivl] = ACTIONS(54),
    [anon_sym_sub] = ACTIONS(54),
    [anon_sym_subq] = ACTIONS(54),
    [anon_sym_subl] = ACTIONS(54),
    [anon_sym_subss] = ACTIONS(54),
    [anon_sym_subw] = ACTIONS(54),
    [anon_sym_subb] = ACTIONS(54),
    [anon_sym_subsd] = ACTIONS(54),
    [anon_sym_subpd] = ACTIONS(54),
    [anon_sym_sbb] = ACTIONS(54),
    [anon_sym_mul] = ACTIONS(54),
    [anon_sym_mulq] = ACTIONS(54),
    [anon_sym_mull] = ACTIONS(54),
    [anon_sym_mulss] = ACTIONS(54),
    [anon_sym_mulw] = ACTIONS(54),
    [anon_sym_mulb] = ACTIONS(54),
    [anon_sym_mulsd] = ACTIONS(54),
    [anon_sym_mulx] = ACTIONS(54),
    [anon_sym_imul] = ACTIONS(54),
    [anon_sym_neg] = ACTIONS(54),
    [anon_sym_negl] = ACTIONS(54),
    [anon_sym_negq] = ACTIONS(54),
    [anon_sym_fmulp] = ACTIONS(54),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(54),
    [anon_sym_pclmullqlqdq] = ACTIONS(54),
    [anon_sym_pclmullqhqdq] = ACTIONS(54),
    [anon_sym_vpclmullqhqdq] = ACTIONS(54),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(54),
    [anon_sym_pclmulhqhqdq] = ACTIONS(54),
    [anon_sym_vpclmullqlqdq] = ACTIONS(54),
    [anon_sym_adcx] = ACTIONS(54),
    [anon_sym_adox] = ACTIONS(54),
    [anon_sym_vmulsd] = ACTIONS(54),
    [anon_sym_vpaddd] = ACTIONS(54),
    [anon_sym_vpaddb] = ACTIONS(54),
    [anon_sym_vpaddq] = ACTIONS(54),
    [anon_sym_vpaddw] = ACTIONS(54),
    [anon_sym_vpcmpgtd] = ACTIONS(54),
    [anon_sym_vdivsd] = ACTIONS(54),
    [anon_sym_vpmaddubsw] = ACTIONS(54),
    [anon_sym_vpmaddwd] = ACTIONS(54),
    [anon_sym_vpmullw] = ACTIONS(54),
    [anon_sym_vpmuludq] = ACTIONS(54),
    [anon_sym_vucomisd] = ACTIONS(54),
    [anon_sym_vucomiss] = ACTIONS(54),
    [anon_sym_addsd] = ACTIONS(54),
    [anon_sym_ucomisd] = ACTIONS(54),
    [anon_sym_ucomiss] = ACTIONS(54),
    [anon_sym_maxsd] = ACTIONS(54),
    [anon_sym_minsd] = ACTIONS(54),
    [anon_sym_maxss] = ACTIONS(54),
    [anon_sym_minss] = ACTIONS(54),
    [anon_sym_vsubsd] = ACTIONS(54),
    [anon_sym_vpsubusw] = ACTIONS(54),
    [anon_sym_vpsubq] = ACTIONS(54),
    [anon_sym_vpsubd] = ACTIONS(54),
    [anon_sym_vpsubw] = ACTIONS(54),
    [anon_sym_psubd] = ACTIONS(54),
    [anon_sym_pmaddwd] = ACTIONS(54),
    [anon_sym_paddw] = ACTIONS(54),
    [anon_sym_psubusw] = ACTIONS(54),
    [anon_sym_psubusb] = ACTIONS(54),
    [anon_sym_psubb] = ACTIONS(54),
    [anon_sym_psubq] = ACTIONS(54),
    [anon_sym_paddq] = ACTIONS(54),
    [anon_sym_pmuludq] = ACTIONS(54),
    [anon_sym_pmaddubsw] = ACTIONS(54),
    [anon_sym_paddd] = ACTIONS(54),
    [anon_sym_pcmpgtd] = ACTIONS(54),
    [anon_sym_pcmpeqd] = ACTIONS(54),
    [anon_sym_pcmpeqb] = ACTIONS(54),
    [anon_sym_vpcmpltud] = ACTIONS(54),
    [anon_sym_bsf] = ACTIONS(54),
    [anon_sym_bsr] = ACTIONS(54),
    [anon_sym_bts] = ACTIONS(54),
    [anon_sym_bt] = ACTIONS(54),
    [anon_sym_btr] = ACTIONS(54),
    [anon_sym_btl] = ACTIONS(54),
    [anon_sym_setne] = ACTIONS(54),
    [anon_sym_setb] = ACTIONS(54),
    [anon_sym_sete] = ACTIONS(54),
    [anon_sym_setbe] = ACTIONS(54),
    [anon_sym_seta] = ACTIONS(54),
    [anon_sym_setge] = ACTIONS(54),
    [anon_sym_setae] = ACTIONS(54),
    [anon_sym_setl] = ACTIONS(54),
    [anon_sym_setle] = ACTIONS(54),
    [anon_sym_setg] = ACTIONS(54),
    [anon_sym_seto] = ACTIONS(54),
    [anon_sym_setnp] = ACTIONS(54),
    [anon_sym_setp] = ACTIONS(54),
    [anon_sym_setns] = ACTIONS(54),
    [anon_sym_test] = ACTIONS(54),
    [anon_sym_testb] = ACTIONS(54),
    [anon_sym_testl] = ACTIONS(54),
    [anon_sym_knotw] = ACTIONS(54),
    [anon_sym_bswap] = ACTIONS(54),
    [anon_sym_cbtw] = ACTIONS(54),
    [anon_sym_cltd] = ACTIONS(54),
    [anon_sym_cltq] = ACTIONS(54),
    [anon_sym_cmovbe] = ACTIONS(54),
    [anon_sym_cmovl] = ACTIONS(54),
    [anon_sym_cmovae] = ACTIONS(54),
    [anon_sym_cmovo] = ACTIONS(54),
    [anon_sym_cmovne] = ACTIONS(54),
    [anon_sym_cmovns] = ACTIONS(54),
    [anon_sym_cmovg] = ACTIONS(54),
    [anon_sym_cmovp] = ACTIONS(54),
    [anon_sym_cmove] = ACTIONS(54),
    [anon_sym_cmovge] = ACTIONS(54),
    [anon_sym_cmovb] = ACTIONS(54),
    [anon_sym_cmova] = ACTIONS(54),
    [anon_sym_cmovle] = ACTIONS(54),
    [anon_sym_cmovs] = ACTIONS(54),
    [anon_sym_cwtl] = ACTIONS(54),
    [anon_sym_cwtd] = ACTIONS(54),
    [anon_sym_cqto] = ACTIONS(54),
    [anon_sym_cvttsd2si] = ACTIONS(54),
    [anon_sym_cvtss2sd] = ACTIONS(54),
    [anon_sym_cvttss2si] = ACTIONS(54),
    [anon_sym_cvtsi2sd] = ACTIONS(54),
    [anon_sym_cvtsi2ss] = ACTIONS(54),
    [anon_sym_cvtsi2sdq] = ACTIONS(54),
    [anon_sym_cvtsi2sdl] = ACTIONS(54),
    [anon_sym_cvtsd2ss] = ACTIONS(54),
    [anon_sym_cvtsi2ssl] = ACTIONS(54),
    [anon_sym_vcvtusi2sd] = ACTIONS(54),
    [anon_sym_mov] = ACTIONS(54),
    [anon_sym_movw] = ACTIONS(54),
    [anon_sym_movl] = ACTIONS(54),
    [anon_sym_movq] = ACTIONS(54),
    [anon_sym_movb] = ACTIONS(54),
    [anon_sym_movabs] = ACTIONS(54),
    [anon_sym_movsbw] = ACTIONS(54),
    [anon_sym_movsbq] = ACTIONS(54),
    [anon_sym_movsbl] = ACTIONS(54),
    [anon_sym_movswl] = ACTIONS(54),
    [anon_sym_movswq] = ACTIONS(54),
    [anon_sym_movzbw] = ACTIONS(54),
    [anon_sym_movzbq] = ACTIONS(54),
    [anon_sym_movzbl] = ACTIONS(54),
    [anon_sym_movzwl] = ACTIONS(54),
    [anon_sym_movaps] = ACTIONS(54),
    [anon_sym_movhlps] = ACTIONS(54),
    [anon_sym_movss] = ACTIONS(54),
    [anon_sym_movups] = ACTIONS(54),
    [anon_sym_movsd] = ACTIONS(54),
    [anon_sym_movd] = ACTIONS(54),
    [anon_sym_movhps] = ACTIONS(54),
    [anon_sym_movdqa] = ACTIONS(54),
    [anon_sym_movbe] = ACTIONS(54),
    [anon_sym_movapd] = ACTIONS(54),
    [anon_sym_movdqu] = ACTIONS(54),
    [anon_sym_xchg] = ACTIONS(54),
    [anon_sym_fildl] = ACTIONS(54),
    [anon_sym_fldt] = ACTIONS(54),
    [anon_sym_fstpl] = ACTIONS(54),
    [anon_sym_vmovaps] = ACTIONS(54),
    [anon_sym_vmovapd] = ACTIONS(54),
    [anon_sym_vmovss] = ACTIONS(54),
    [anon_sym_vmovdqu] = ACTIONS(54),
    [anon_sym_vmovdqu64] = ACTIONS(54),
    [anon_sym_vmovdqu32] = ACTIONS(54),
    [anon_sym_vmovdqa] = ACTIONS(54),
    [anon_sym_vmovdqa32] = ACTIONS(54),
    [anon_sym_vmovdqa64] = ACTIONS(54),
    [anon_sym_vmovq] = ACTIONS(54),
    [anon_sym_vmovups] = ACTIONS(54),
    [anon_sym_vmovd] = ACTIONS(54),
    [anon_sym_vmovsd] = ACTIONS(54),
    [anon_sym_pmovmskb] = ACTIONS(54),
    [anon_sym_insb] = ACTIONS(54),
    [anon_sym_insl] = ACTIONS(54),
    [anon_sym_outsb] = ACTIONS(54),
    [anon_sym_outsl] = ACTIONS(54),
    [anon_sym_or] = ACTIONS(54),
    [anon_sym_orq] = ACTIONS(54),
    [anon_sym_orl] = ACTIONS(54),
    [anon_sym_orb] = ACTIONS(54),
    [anon_sym_orw] = ACTIONS(54),
    [anon_sym_xor] = ACTIONS(54),
    [anon_sym_xorl] = ACTIONS(54),
    [anon_sym_xorw] = ACTIONS(54),
    [anon_sym_xorps] = ACTIONS(54),
    [anon_sym_xorpd] = ACTIONS(54),
    [anon_sym_vxorps] = ACTIONS(54),
    [anon_sym_vpxord] = ACTIONS(54),
    [anon_sym_vpxor] = ACTIONS(54),
    [anon_sym_and] = ACTIONS(54),
    [anon_sym_andq] = ACTIONS(54),
    [anon_sym_andl] = ACTIONS(54),
    [anon_sym_andw] = ACTIONS(54),
    [anon_sym_andb] = ACTIONS(54),
    [anon_sym_andn] = ACTIONS(54),
    [anon_sym_andpd] = ACTIONS(54),
    [anon_sym_pand] = ACTIONS(54),
    [anon_sym_pandn] = ACTIONS(54),
    [anon_sym_andps] = ACTIONS(54),
    [anon_sym_vpand] = ACTIONS(54),
    [anon_sym_not] = ACTIONS(54),
    [anon_sym_notl] = ACTIONS(54),
    [anon_sym_notw] = ACTIONS(54),
    [anon_sym_vpor] = ACTIONS(54),
    [anon_sym_por] = ACTIONS(54),
    [anon_sym_pxor] = ACTIONS(54),
    [anon_sym_cpuid] = ACTIONS(54),
    [anon_sym_lea] = ACTIONS(54),
    [anon_sym_popcnt] = ACTIONS(54),
    [anon_sym_nop] = ACTIONS(54),
    [anon_sym_nopl] = ACTIONS(54),
    [anon_sym_nopw] = ACTIONS(54),
    [anon_sym_ud2] = ACTIONS(54),
    [anon_sym_data16] = ACTIONS(54),
    [anon_sym_sha1rnds4] = ACTIONS(54),
    [anon_sym_addr32] = ACTIONS(54),
    [anon_sym_sha1msg1] = ACTIONS(54),
    [anon_sym_sha1msg2] = ACTIONS(54),
    [anon_sym_sha1nexte] = ACTIONS(54),
    [anon_sym_endbr64] = ACTIONS(54),
    [anon_sym_gs] = ACTIONS(54),
    [anon_sym_re] = ACTIONS(54),
    [anon_sym_ss] = ACTIONS(54),
    [anon_sym_lock] = ACTIONS(54),
    [anon_sym_prefetcht1] = ACTIONS(54),
    [anon_sym_prefetcht0] = ACTIONS(54),
    [anon_sym_mfence] = ACTIONS(54),
    [anon_sym_femms] = ACTIONS(54),
    [anon_sym_tzcnt] = ACTIONS(54),
    [anon_sym_leaveq] = ACTIONS(54),
    [anon_sym_retq] = ACTIONS(54),
    [anon_sym_packuswb] = ACTIONS(54),
    [anon_sym_punpckhbw] = ACTIONS(54),
    [anon_sym_punpckhdq] = ACTIONS(54),
    [anon_sym_punpckhwd] = ACTIONS(54),
    [anon_sym_punpcklbw] = ACTIONS(54),
    [anon_sym_punpckldq] = ACTIONS(54),
    [anon_sym_punpcklwd] = ACTIONS(54),
    [anon_sym_vpunpcklwd] = ACTIONS(54),
    [anon_sym_vpunpckldq] = ACTIONS(54),
    [anon_sym_punpcklqdq] = ACTIONS(54),
    [anon_sym_punpckhqdq] = ACTIONS(54),
    [anon_sym_vpunpckhqdq] = ACTIONS(54),
    [anon_sym_vpunpckhdq] = ACTIONS(54),
    [anon_sym_vpunpcklqdq] = ACTIONS(54),
    [anon_sym_vpunpckhwd] = ACTIONS(54),
    [anon_sym_vpackusdw] = ACTIONS(54),
    [anon_sym_vpalignr] = ACTIONS(54),
    [anon_sym_palignr] = ACTIONS(54),
    [anon_sym_vunpckhpd] = ACTIONS(54),
    [anon_sym_vunpckhps] = ACTIONS(54),
    [anon_sym_vunpcklpd] = ACTIONS(54),
    [anon_sym_vunpcklps] = ACTIONS(54),
    [anon_sym_unpckhpd] = ACTIONS(54),
    [anon_sym_rol] = ACTIONS(54),
    [anon_sym_ror] = ACTIONS(54),
    [anon_sym_sar] = ACTIONS(54),
    [anon_sym_sarl] = ACTIONS(54),
    [anon_sym_sarx] = ACTIONS(54),
    [anon_sym_shl] = ACTIONS(54),
    [anon_sym_shll] = ACTIONS(54),
    [anon_sym_shld] = ACTIONS(54),
    [anon_sym_shlx] = ACTIONS(54),
    [anon_sym_shlq] = ACTIONS(54),
    [anon_sym_shr] = ACTIONS(54),
    [anon_sym_shrq] = ACTIONS(54),
    [anon_sym_shrd] = ACTIONS(54),
    [anon_sym_shrl] = ACTIONS(54),
    [anon_sym_shrx] = ACTIONS(54),
    [anon_sym_vprord] = ACTIONS(54),
    [anon_sym_vprorq] = ACTIONS(54),
    [anon_sym_rorl] = ACTIONS(54),
    [anon_sym_roll] = ACTIONS(54),
    [anon_sym_vpslldq] = ACTIONS(54),
    [anon_sym_vpslld] = ACTIONS(54),
    [anon_sym_vpsllq] = ACTIONS(54),
    [anon_sym_vpsllw] = ACTIONS(54),
    [anon_sym_vpsrldq] = ACTIONS(54),
    [anon_sym_vpsrld] = ACTIONS(54),
    [anon_sym_vpsrlq] = ACTIONS(54),
    [anon_sym_vpsrlw] = ACTIONS(54),
    [anon_sym_rorx] = ACTIONS(54),
    [anon_sym_psrld] = ACTIONS(54),
    [anon_sym_psrlw] = ACTIONS(54),
    [anon_sym_psllq] = ACTIONS(54),
    [anon_sym_psrlq] = ACTIONS(54),
    [anon_sym_pslldq] = ACTIONS(54),
    [anon_sym_psrldq] = ACTIONS(54),
    [anon_sym_psrad] = ACTIONS(54),
    [anon_sym_pslld] = ACTIONS(54),
    [anon_sym_push] = ACTIONS(54),
    [anon_sym_pushq] = ACTIONS(54),
    [anon_sym_pop] = ACTIONS(54),
    [anon_sym_movslq] = ACTIONS(54),
    [anon_sym_movsb] = ACTIONS(54),
    [anon_sym_rep] = ACTIONS(54),
    [anon_sym_repz] = ACTIONS(54),
    [anon_sym_repnz] = ACTIONS(54),
    [anon_sym_rex] = ACTIONS(54),
    [anon_sym_rex_DOTWB] = ACTIONS(54),
    [anon_sym_rex_DOTWRB] = ACTIONS(54),
    [anon_sym_rex_DOTRXB] = ACTIONS(54),
    [anon_sym_rex_DOTB] = ACTIONS(54),
    [anon_sym_rex_DOTWRXB] = ACTIONS(54),
    [anon_sym_rex_DOTXB] = ACTIONS(54),
    [anon_sym_rex_DOTW] = ACTIONS(54),
    [anon_sym_rex_DOTRB] = ACTIONS(54),
    [anon_sym_xgetbv] = ACTIONS(54),
    [anon_sym_fs] = ACTIONS(54),
    [anon_sym_kmovw] = ACTIONS(54),
    [anon_sym_vzeroall] = ACTIONS(54),
    [anon_sym_vzeroupper] = ACTIONS(54),
    [anon_sym_aesdec] = ACTIONS(54),
    [anon_sym_aesdeclast] = ACTIONS(54),
    [anon_sym_aesenc] = ACTIONS(54),
    [anon_sym_aesenclast] = ACTIONS(54),
    [anon_sym_vaesenc] = ACTIONS(54),
    [anon_sym_vaesenclast] = ACTIONS(54),
    [anon_sym_aeskeygenassist] = ACTIONS(54),
    [anon_sym_vpextrw] = ACTIONS(54),
    [anon_sym_vextracti128] = ACTIONS(54),
    [anon_sym_vextracti32x4] = ACTIONS(54),
    [anon_sym_pextrq] = ACTIONS(54),
    [anon_sym_pextrw] = ACTIONS(54),
    [anon_sym_pextrb] = ACTIONS(54),
    [anon_sym_vpinsrw] = ACTIONS(54),
    [anon_sym_vpinsrd] = ACTIONS(54),
    [anon_sym_vpinsrq] = ACTIONS(54),
    [anon_sym_vpinsrb] = ACTIONS(54),
    [anon_sym_vinserti128] = ACTIONS(54),
    [anon_sym_vinserti32x4] = ACTIONS(54),
    [anon_sym_vinserti64x4] = ACTIONS(54),
    [anon_sym_vinsertf128] = ACTIONS(54),
    [anon_sym_pinsrw] = ACTIONS(54),
    [anon_sym_pinsrb] = ACTIONS(54),
    [anon_sym_pinsrd] = ACTIONS(54),
    [anon_sym_vpshufb] = ACTIONS(54),
    [anon_sym_vpshufd] = ACTIONS(54),
    [anon_sym_vshufps] = ACTIONS(54),
    [anon_sym_vshufi32x4] = ACTIONS(54),
    [anon_sym_vshufi64x2] = ACTIONS(54),
    [anon_sym_shufps] = ACTIONS(54),
    [anon_sym_pshuflw] = ACTIONS(54),
    [anon_sym_pshufd] = ACTIONS(54),
    [anon_sym_pshufhw] = ACTIONS(54),
    [anon_sym_shufpd] = ACTIONS(54),
    [anon_sym_pshufb] = ACTIONS(54),
    [anon_sym_vperm2f128] = ACTIONS(54),
    [anon_sym_vperm2i128] = ACTIONS(54),
    [anon_sym_vpermd] = ACTIONS(54),
    [anon_sym_vpermq] = ACTIONS(54),
    [anon_sym_vpermt2d] = ACTIONS(54),
    [anon_sym_vpermi2d] = ACTIONS(54),
    [anon_sym_vblendps] = ACTIONS(54),
    [anon_sym_vblendvps] = ACTIONS(54),
    [anon_sym_vpblendmd] = ACTIONS(54),
    [anon_sym_vpblendd] = ACTIONS(54),
    [anon_sym_pblendw] = ACTIONS(54),
    [anon_sym_blendvps] = ACTIONS(54),
    [anon_sym_vbroadcastss] = ACTIONS(54),
    [anon_sym_vpbroadcastq] = ACTIONS(54),
    [anon_sym_vpbroadcastd] = ACTIONS(54),
    [anon_sym_vbroadcasti128] = ACTIONS(54),
    [anon_sym_vbroadcasti32x4] = ACTIONS(54),
    [anon_sym_callq] = ACTIONS(54),
    [anon_sym_ja] = ACTIONS(54),
    [anon_sym_jae] = ACTIONS(54),
    [anon_sym_jb] = ACTIONS(54),
    [anon_sym_jbe] = ACTIONS(54),
    [anon_sym_je] = ACTIONS(54),
    [anon_sym_jg] = ACTIONS(54),
    [anon_sym_jge] = ACTIONS(54),
    [anon_sym_jl] = ACTIONS(54),
    [anon_sym_jle] = ACTIONS(54),
    [anon_sym_jmp] = ACTIONS(54),
    [anon_sym_jmpq] = ACTIONS(54),
    [anon_sym_jne] = ACTIONS(54),
    [anon_sym_jno] = ACTIONS(54),
    [anon_sym_jns] = ACTIONS(54),
    [anon_sym_jo] = ACTIONS(54),
    [anon_sym_jp] = ACTIONS(54),
    [anon_sym_jrcxz] = ACTIONS(54),
    [anon_sym_js] = ACTIONS(54),
    [anon_sym_notrack] = ACTIONS(54),
  },
  [4] = {
    [aux_sym__machine_code_repeat1] = STATE(5),
    [sym__byte] = ACTIONS(58),
    [aux_sym_comment_token1] = ACTIONS(60),
    [aux_sym_comment_token2] = ACTIONS(60),
    [sym__line_break] = ACTIONS(62),
    [anon_sym_adc] = ACTIONS(60),
    [anon_sym_add] = ACTIONS(60),
    [anon_sym_addq] = ACTIONS(60),
    [anon_sym_addl] = ACTIONS(60),
    [anon_sym_addss] = ACTIONS(60),
    [anon_sym_addw] = ACTIONS(60),
    [anon_sym_addb] = ACTIONS(60),
    [anon_sym_cmp] = ACTIONS(60),
    [anon_sym_cmpb] = ACTIONS(60),
    [anon_sym_cmpw] = ACTIONS(60),
    [anon_sym_cmpl] = ACTIONS(60),
    [anon_sym_cmpq] = ACTIONS(60),
    [anon_sym_comiss] = ACTIONS(60),
    [anon_sym_comisd] = ACTIONS(60),
    [anon_sym_inc] = ACTIONS(60),
    [anon_sym_incl] = ACTIONS(60),
    [anon_sym_dec] = ACTIONS(60),
    [anon_sym_div] = ACTIONS(60),
    [anon_sym_divq] = ACTIONS(60),
    [anon_sym_divl] = ACTIONS(60),
    [anon_sym_divss] = ACTIONS(60),
    [anon_sym_divsd] = ACTIONS(60),
    [anon_sym_idiv] = ACTIONS(60),
    [anon_sym_idivl] = ACTIONS(60),
    [anon_sym_sub] = ACTIONS(60),
    [anon_sym_subq] = ACTIONS(60),
    [anon_sym_subl] = ACTIONS(60),
    [anon_sym_subss] = ACTIONS(60),
    [anon_sym_subw] = ACTIONS(60),
    [anon_sym_subb] = ACTIONS(60),
    [anon_sym_subsd] = ACTIONS(60),
    [anon_sym_subpd] = ACTIONS(60),
    [anon_sym_sbb] = ACTIONS(60),
    [anon_sym_mul] = ACTIONS(60),
    [anon_sym_mulq] = ACTIONS(60),
    [anon_sym_mull] = ACTIONS(60),
    [anon_sym_mulss] = ACTIONS(60),
    [anon_sym_mulw] = ACTIONS(60),
    [anon_sym_mulb] = ACTIONS(60),
    [anon_sym_mulsd] = ACTIONS(60),
    [anon_sym_mulx] = ACTIONS(60),
    [anon_sym_imul] = ACTIONS(60),
    [anon_sym_neg] = ACTIONS(60),
    [anon_sym_negl] = ACTIONS(60),
    [anon_sym_negq] = ACTIONS(60),
    [anon_sym_fmulp] = ACTIONS(60),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(60),
    [anon_sym_pclmullqlqdq] = ACTIONS(60),
    [anon_sym_pclmullqhqdq] = ACTIONS(60),
    [anon_sym_vpclmullqhqdq] = ACTIONS(60),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(60),
    [anon_sym_pclmulhqhqdq] = ACTIONS(60),
    [anon_sym_vpclmullqlqdq] = ACTIONS(60),
    [anon_sym_adcx] = ACTIONS(60),
    [anon_sym_adox] = ACTIONS(60),
    [anon_sym_vmulsd] = ACTIONS(60),
    [anon_sym_vpaddd] = ACTIONS(60),
    [anon_sym_vpaddb] = ACTIONS(60),
    [anon_sym_vpaddq] = ACTIONS(60),
    [anon_sym_vpaddw] = ACTIONS(60),
    [anon_sym_vpcmpgtd] = ACTIONS(60),
    [anon_sym_vdivsd] = ACTIONS(60),
    [anon_sym_vpmaddubsw] = ACTIONS(60),
    [anon_sym_vpmaddwd] = ACTIONS(60),
    [anon_sym_vpmullw] = ACTIONS(60),
    [anon_sym_vpmuludq] = ACTIONS(60),
    [anon_sym_vucomisd] = ACTIONS(60),
    [anon_sym_vucomiss] = ACTIONS(60),
    [anon_sym_addsd] = ACTIONS(60),
    [anon_sym_ucomisd] = ACTIONS(60),
    [anon_sym_ucomiss] = ACTIONS(60),
    [anon_sym_maxsd] = ACTIONS(60),
    [anon_sym_minsd] = ACTIONS(60),
    [anon_sym_maxss] = ACTIONS(60),
    [anon_sym_minss] = ACTIONS(60),
    [anon_sym_vsubsd] = ACTIONS(60),
    [anon_sym_vpsubusw] = ACTIONS(60),
    [anon_sym_vpsubq] = ACTIONS(60),
    [anon_sym_vpsubd] = ACTIONS(60),
    [anon_sym_vpsubw] = ACTIONS(60),
    [anon_sym_psubd] = ACTIONS(60),
    [anon_sym_pmaddwd] = ACTIONS(60),
    [anon_sym_paddw] = ACTIONS(60),
    [anon_sym_psubusw] = ACTIONS(60),
    [anon_sym_psubusb] = ACTIONS(60),
    [anon_sym_psubb] = ACTIONS(60),
    [anon_sym_psubq] = ACTIONS(60),
    [anon_sym_paddq] = ACTIONS(60),
    [anon_sym_pmuludq] = ACTIONS(60),
    [anon_sym_pmaddubsw] = ACTIONS(60),
    [anon_sym_paddd] = ACTIONS(60),
    [anon_sym_pcmpgtd] = ACTIONS(60),
    [anon_sym_pcmpeqd] = ACTIONS(60),
    [anon_sym_pcmpeqb] = ACTIONS(60),
    [anon_sym_vpcmpltud] = ACTIONS(60),
    [anon_sym_bsf] = ACTIONS(60),
    [anon_sym_bsr] = ACTIONS(60),
    [anon_sym_bts] = ACTIONS(60),
    [anon_sym_bt] = ACTIONS(60),
    [anon_sym_btr] = ACTIONS(60),
    [anon_sym_btl] = ACTIONS(60),
    [anon_sym_setne] = ACTIONS(60),
    [anon_sym_setb] = ACTIONS(60),
    [anon_sym_sete] = ACTIONS(60),
    [anon_sym_setbe] = ACTIONS(60),
    [anon_sym_seta] = ACTIONS(60),
    [anon_sym_setge] = ACTIONS(60),
    [anon_sym_setae] = ACTIONS(60),
    [anon_sym_setl] = ACTIONS(60),
    [anon_sym_setle] = ACTIONS(60),
    [anon_sym_setg] = ACTIONS(60),
    [anon_sym_seto] = ACTIONS(60),
    [anon_sym_setnp] = ACTIONS(60),
    [anon_sym_setp] = ACTIONS(60),
    [anon_sym_setns] = ACTIONS(60),
    [anon_sym_test] = ACTIONS(60),
    [anon_sym_testb] = ACTIONS(60),
    [anon_sym_testl] = ACTIONS(60),
    [anon_sym_knotw] = ACTIONS(60),
    [anon_sym_bswap] = ACTIONS(60),
    [anon_sym_cbtw] = ACTIONS(60),
    [anon_sym_cltd] = ACTIONS(60),
    [anon_sym_cltq] = ACTIONS(60),
    [anon_sym_cmovbe] = ACTIONS(60),
    [anon_sym_cmovl] = ACTIONS(60),
    [anon_sym_cmovae] = ACTIONS(60),
    [anon_sym_cmovo] = ACTIONS(60),
    [anon_sym_cmovne] = ACTIONS(60),
    [anon_sym_cmovns] = ACTIONS(60),
    [anon_sym_cmovg] = ACTIONS(60),
    [anon_sym_cmovp] = ACTIONS(60),
    [anon_sym_cmove] = ACTIONS(60),
    [anon_sym_cmovge] = ACTIONS(60),
    [anon_sym_cmovb] = ACTIONS(60),
    [anon_sym_cmova] = ACTIONS(60),
    [anon_sym_cmovle] = ACTIONS(60),
    [anon_sym_cmovs] = ACTIONS(60),
    [anon_sym_cwtl] = ACTIONS(60),
    [anon_sym_cwtd] = ACTIONS(60),
    [anon_sym_cqto] = ACTIONS(60),
    [anon_sym_cvttsd2si] = ACTIONS(60),
    [anon_sym_cvtss2sd] = ACTIONS(60),
    [anon_sym_cvttss2si] = ACTIONS(60),
    [anon_sym_cvtsi2sd] = ACTIONS(60),
    [anon_sym_cvtsi2ss] = ACTIONS(60),
    [anon_sym_cvtsi2sdq] = ACTIONS(60),
    [anon_sym_cvtsi2sdl] = ACTIONS(60),
    [anon_sym_cvtsd2ss] = ACTIONS(60),
    [anon_sym_cvtsi2ssl] = ACTIONS(60),
    [anon_sym_vcvtusi2sd] = ACTIONS(60),
    [anon_sym_mov] = ACTIONS(60),
    [anon_sym_movw] = ACTIONS(60),
    [anon_sym_movl] = ACTIONS(60),
    [anon_sym_movq] = ACTIONS(60),
    [anon_sym_movb] = ACTIONS(60),
    [anon_sym_movabs] = ACTIONS(60),
    [anon_sym_movsbw] = ACTIONS(60),
    [anon_sym_movsbq] = ACTIONS(60),
    [anon_sym_movsbl] = ACTIONS(60),
    [anon_sym_movswl] = ACTIONS(60),
    [anon_sym_movswq] = ACTIONS(60),
    [anon_sym_movzbw] = ACTIONS(60),
    [anon_sym_movzbq] = ACTIONS(60),
    [anon_sym_movzbl] = ACTIONS(60),
    [anon_sym_movzwl] = ACTIONS(60),
    [anon_sym_movaps] = ACTIONS(60),
    [anon_sym_movhlps] = ACTIONS(60),
    [anon_sym_movss] = ACTIONS(60),
    [anon_sym_movups] = ACTIONS(60),
    [anon_sym_movsd] = ACTIONS(60),
    [anon_sym_movd] = ACTIONS(60),
    [anon_sym_movhps] = ACTIONS(60),
    [anon_sym_movdqa] = ACTIONS(60),
    [anon_sym_movbe] = ACTIONS(60),
    [anon_sym_movapd] = ACTIONS(60),
    [anon_sym_movdqu] = ACTIONS(60),
    [anon_sym_xchg] = ACTIONS(60),
    [anon_sym_fildl] = ACTIONS(60),
    [anon_sym_fldt] = ACTIONS(60),
    [anon_sym_fstpl] = ACTIONS(60),
    [anon_sym_vmovaps] = ACTIONS(60),
    [anon_sym_vmovapd] = ACTIONS(60),
    [anon_sym_vmovss] = ACTIONS(60),
    [anon_sym_vmovdqu] = ACTIONS(60),
    [anon_sym_vmovdqu64] = ACTIONS(60),
    [anon_sym_vmovdqu32] = ACTIONS(60),
    [anon_sym_vmovdqa] = ACTIONS(60),
    [anon_sym_vmovdqa32] = ACTIONS(60),
    [anon_sym_vmovdqa64] = ACTIONS(60),
    [anon_sym_vmovq] = ACTIONS(60),
    [anon_sym_vmovups] = ACTIONS(60),
    [anon_sym_vmovd] = ACTIONS(60),
    [anon_sym_vmovsd] = ACTIONS(60),
    [anon_sym_pmovmskb] = ACTIONS(60),
    [anon_sym_insb] = ACTIONS(60),
    [anon_sym_insl] = ACTIONS(60),
    [anon_sym_outsb] = ACTIONS(60),
    [anon_sym_outsl] = ACTIONS(60),
    [anon_sym_or] = ACTIONS(60),
    [anon_sym_orq] = ACTIONS(60),
    [anon_sym_orl] = ACTIONS(60),
    [anon_sym_orb] = ACTIONS(60),
    [anon_sym_orw] = ACTIONS(60),
    [anon_sym_xor] = ACTIONS(60),
    [anon_sym_xorl] = ACTIONS(60),
    [anon_sym_xorw] = ACTIONS(60),
    [anon_sym_xorps] = ACTIONS(60),
    [anon_sym_xorpd] = ACTIONS(60),
    [anon_sym_vxorps] = ACTIONS(60),
    [anon_sym_vpxord] = ACTIONS(60),
    [anon_sym_vpxor] = ACTIONS(60),
    [anon_sym_and] = ACTIONS(60),
    [anon_sym_andq] = ACTIONS(60),
    [anon_sym_andl] = ACTIONS(60),
    [anon_sym_andw] = ACTIONS(60),
    [anon_sym_andb] = ACTIONS(60),
    [anon_sym_andn] = ACTIONS(60),
    [anon_sym_andpd] = ACTIONS(60),
    [anon_sym_pand] = ACTIONS(60),
    [anon_sym_pandn] = ACTIONS(60),
    [anon_sym_andps] = ACTIONS(60),
    [anon_sym_vpand] = ACTIONS(60),
    [anon_sym_not] = ACTIONS(60),
    [anon_sym_notl] = ACTIONS(60),
    [anon_sym_notw] = ACTIONS(60),
    [anon_sym_vpor] = ACTIONS(60),
    [anon_sym_por] = ACTIONS(60),
    [anon_sym_pxor] = ACTIONS(60),
    [anon_sym_cpuid] = ACTIONS(60),
    [anon_sym_lea] = ACTIONS(60),
    [anon_sym_popcnt] = ACTIONS(60),
    [anon_sym_nop] = ACTIONS(60),
    [anon_sym_nopl] = ACTIONS(60),
    [anon_sym_nopw] = ACTIONS(60),
    [anon_sym_ud2] = ACTIONS(60),
    [anon_sym_data16] = ACTIONS(60),
    [anon_sym_sha1rnds4] = ACTIONS(60),
    [anon_sym_addr32] = ACTIONS(60),
    [anon_sym_sha1msg1] = ACTIONS(60),
    [anon_sym_sha1msg2] = ACTIONS(60),
    [anon_sym_sha1nexte] = ACTIONS(60),
    [anon_sym_endbr64] = ACTIONS(60),
    [anon_sym_gs] = ACTIONS(60),
    [anon_sym_re] = ACTIONS(60),
    [anon_sym_ss] = ACTIONS(60),
    [anon_sym_lock] = ACTIONS(60),
    [anon_sym_prefetcht1] = ACTIONS(60),
    [anon_sym_prefetcht0] = ACTIONS(60),
    [anon_sym_mfence] = ACTIONS(60),
    [anon_sym_femms] = ACTIONS(60),
    [anon_sym_tzcnt] = ACTIONS(60),
    [anon_sym_leaveq] = ACTIONS(60),
    [anon_sym_retq] = ACTIONS(60),
    [anon_sym_packuswb] = ACTIONS(60),
    [anon_sym_punpckhbw] = ACTIONS(60),
    [anon_sym_punpckhdq] = ACTIONS(60),
    [anon_sym_punpckhwd] = ACTIONS(60),
    [anon_sym_punpcklbw] = ACTIONS(60),
    [anon_sym_punpckldq] = ACTIONS(60),
    [anon_sym_punpcklwd] = ACTIONS(60),
    [anon_sym_vpunpcklwd] = ACTIONS(60),
    [anon_sym_vpunpckldq] = ACTIONS(60),
    [anon_sym_punpcklqdq] = ACTIONS(60),
    [anon_sym_punpckhqdq] = ACTIONS(60),
    [anon_sym_vpunpckhqdq] = ACTIONS(60),
    [anon_sym_vpunpckhdq] = ACTIONS(60),
    [anon_sym_vpunpcklqdq] = ACTIONS(60),
    [anon_sym_vpunpckhwd] = ACTIONS(60),
    [anon_sym_vpackusdw] = ACTIONS(60),
    [anon_sym_vpalignr] = ACTIONS(60),
    [anon_sym_palignr] = ACTIONS(60),
    [anon_sym_vunpckhpd] = ACTIONS(60),
    [anon_sym_vunpckhps] = ACTIONS(60),
    [anon_sym_vunpcklpd] = ACTIONS(60),
    [anon_sym_vunpcklps] = ACTIONS(60),
    [anon_sym_unpckhpd] = ACTIONS(60),
    [anon_sym_rol] = ACTIONS(60),
    [anon_sym_ror] = ACTIONS(60),
    [anon_sym_sar] = ACTIONS(60),
    [anon_sym_sarl] = ACTIONS(60),
    [anon_sym_sarx] = ACTIONS(60),
    [anon_sym_shl] = ACTIONS(60),
    [anon_sym_shll] = ACTIONS(60),
    [anon_sym_shld] = ACTIONS(60),
    [anon_sym_shlx] = ACTIONS(60),
    [anon_sym_shlq] = ACTIONS(60),
    [anon_sym_shr] = ACTIONS(60),
    [anon_sym_shrq] = ACTIONS(60),
    [anon_sym_shrd] = ACTIONS(60),
    [anon_sym_shrl] = ACTIONS(60),
    [anon_sym_shrx] = ACTIONS(60),
    [anon_sym_vprord] = ACTIONS(60),
    [anon_sym_vprorq] = ACTIONS(60),
    [anon_sym_rorl] = ACTIONS(60),
    [anon_sym_roll] = ACTIONS(60),
    [anon_sym_vpslldq] = ACTIONS(60),
    [anon_sym_vpslld] = ACTIONS(60),
    [anon_sym_vpsllq] = ACTIONS(60),
    [anon_sym_vpsllw] = ACTIONS(60),
    [anon_sym_vpsrldq] = ACTIONS(60),
    [anon_sym_vpsrld] = ACTIONS(60),
    [anon_sym_vpsrlq] = ACTIONS(60),
    [anon_sym_vpsrlw] = ACTIONS(60),
    [anon_sym_rorx] = ACTIONS(60),
    [anon_sym_psrld] = ACTIONS(60),
    [anon_sym_psrlw] = ACTIONS(60),
    [anon_sym_psllq] = ACTIONS(60),
    [anon_sym_psrlq] = ACTIONS(60),
    [anon_sym_pslldq] = ACTIONS(60),
    [anon_sym_psrldq] = ACTIONS(60),
    [anon_sym_psrad] = ACTIONS(60),
    [anon_sym_pslld] = ACTIONS(60),
    [anon_sym_push] = ACTIONS(60),
    [anon_sym_pushq] = ACTIONS(60),
    [anon_sym_pop] = ACTIONS(60),
    [anon_sym_movslq] = ACTIONS(60),
    [anon_sym_movsb] = ACTIONS(60),
    [anon_sym_rep] = ACTIONS(60),
    [anon_sym_repz] = ACTIONS(60),
    [anon_sym_repnz] = ACTIONS(60),
    [anon_sym_rex] = ACTIONS(60),
    [anon_sym_rex_DOTWB] = ACTIONS(60),
    [anon_sym_rex_DOTWRB] = ACTIONS(60),
    [anon_sym_rex_DOTRXB] = ACTIONS(60),
    [anon_sym_rex_DOTB] = ACTIONS(60),
    [anon_sym_rex_DOTWRXB] = ACTIONS(60),
    [anon_sym_rex_DOTXB] = ACTIONS(60),
    [anon_sym_rex_DOTW] = ACTIONS(60),
    [anon_sym_rex_DOTRB] = ACTIONS(60),
    [anon_sym_xgetbv] = ACTIONS(60),
    [anon_sym_fs] = ACTIONS(60),
    [anon_sym_kmovw] = ACTIONS(60),
    [anon_sym_vzeroall] = ACTIONS(60),
    [anon_sym_vzeroupper] = ACTIONS(60),
    [anon_sym_aesdec] = ACTIONS(60),
    [anon_sym_aesdeclast] = ACTIONS(60),
    [anon_sym_aesenc] = ACTIONS(60),
    [anon_sym_aesenclast] = ACTIONS(60),
    [anon_sym_vaesenc] = ACTIONS(60),
    [anon_sym_vaesenclast] = ACTIONS(60),
    [anon_sym_aeskeygenassist] = ACTIONS(60),
    [anon_sym_vpextrw] = ACTIONS(60),
    [anon_sym_vextracti128] = ACTIONS(60),
    [anon_sym_vextracti32x4] = ACTIONS(60),
    [anon_sym_pextrq] = ACTIONS(60),
    [anon_sym_pextrw] = ACTIONS(60),
    [anon_sym_pextrb] = ACTIONS(60),
    [anon_sym_vpinsrw] = ACTIONS(60),
    [anon_sym_vpinsrd] = ACTIONS(60),
    [anon_sym_vpinsrq] = ACTIONS(60),
    [anon_sym_vpinsrb] = ACTIONS(60),
    [anon_sym_vinserti128] = ACTIONS(60),
    [anon_sym_vinserti32x4] = ACTIONS(60),
    [anon_sym_vinserti64x4] = ACTIONS(60),
    [anon_sym_vinsertf128] = ACTIONS(60),
    [anon_sym_pinsrw] = ACTIONS(60),
    [anon_sym_pinsrb] = ACTIONS(60),
    [anon_sym_pinsrd] = ACTIONS(60),
    [anon_sym_vpshufb] = ACTIONS(60),
    [anon_sym_vpshufd] = ACTIONS(60),
    [anon_sym_vshufps] = ACTIONS(60),
    [anon_sym_vshufi32x4] = ACTIONS(60),
    [anon_sym_vshufi64x2] = ACTIONS(60),
    [anon_sym_shufps] = ACTIONS(60),
    [anon_sym_pshuflw] = ACTIONS(60),
    [anon_sym_pshufd] = ACTIONS(60),
    [anon_sym_pshufhw] = ACTIONS(60),
    [anon_sym_shufpd] = ACTIONS(60),
    [anon_sym_pshufb] = ACTIONS(60),
    [anon_sym_vperm2f128] = ACTIONS(60),
    [anon_sym_vperm2i128] = ACTIONS(60),
    [anon_sym_vpermd] = ACTIONS(60),
    [anon_sym_vpermq] = ACTIONS(60),
    [anon_sym_vpermt2d] = ACTIONS(60),
    [anon_sym_vpermi2d] = ACTIONS(60),
    [anon_sym_vblendps] = ACTIONS(60),
    [anon_sym_vblendvps] = ACTIONS(60),
    [anon_sym_vpblendmd] = ACTIONS(60),
    [anon_sym_vpblendd] = ACTIONS(60),
    [anon_sym_pblendw] = ACTIONS(60),
    [anon_sym_blendvps] = ACTIONS(60),
    [anon_sym_vbroadcastss] = ACTIONS(60),
    [anon_sym_vpbroadcastq] = ACTIONS(60),
    [anon_sym_vpbroadcastd] = ACTIONS(60),
    [anon_sym_vbroadcasti128] = ACTIONS(60),
    [anon_sym_vbroadcasti32x4] = ACTIONS(60),
    [anon_sym_callq] = ACTIONS(60),
    [anon_sym_ja] = ACTIONS(60),
    [anon_sym_jae] = ACTIONS(60),
    [anon_sym_jb] = ACTIONS(60),
    [anon_sym_jbe] = ACTIONS(60),
    [anon_sym_je] = ACTIONS(60),
    [anon_sym_jg] = ACTIONS(60),
    [anon_sym_jge] = ACTIONS(60),
    [anon_sym_jl] = ACTIONS(60),
    [anon_sym_jle] = ACTIONS(60),
    [anon_sym_jmp] = ACTIONS(60),
    [anon_sym_jmpq] = ACTIONS(60),
    [anon_sym_jne] = ACTIONS(60),
    [anon_sym_jno] = ACTIONS(60),
    [anon_sym_jns] = ACTIONS(60),
    [anon_sym_jo] = ACTIONS(60),
    [anon_sym_jp] = ACTIONS(60),
    [anon_sym_jrcxz] = ACTIONS(60),
    [anon_sym_js] = ACTIONS(60),
    [anon_sym_notrack] = ACTIONS(60),
  },
  [5] = {
    [aux_sym__machine_code_repeat1] = STATE(3),
    [sym__byte] = ACTIONS(64),
    [aux_sym_comment_token1] = ACTIONS(66),
    [aux_sym_comment_token2] = ACTIONS(66),
    [sym__line_break] = ACTIONS(68),
    [anon_sym_adc] = ACTIONS(66),
    [anon_sym_add] = ACTIONS(66),
    [anon_sym_addq] = ACTIONS(66),
    [anon_sym_addl] = ACTIONS(66),
    [anon_sym_addss] = ACTIONS(66),
    [anon_sym_addw] = ACTIONS(66),
    [anon_sym_addb] = ACTIONS(66),
    [anon_sym_cmp] = ACTIONS(66),
    [anon_sym_cmpb] = ACTIONS(66),
    [anon_sym_cmpw] = ACTIONS(66),
    [anon_sym_cmpl] = ACTIONS(66),
    [anon_sym_cmpq] = ACTIONS(66),
    [anon_sym_comiss] = ACTIONS(66),
    [anon_sym_comisd] = ACTIONS(66),
    [anon_sym_inc] = ACTIONS(66),
    [anon_sym_incl] = ACTIONS(66),
    [anon_sym_dec] = ACTIONS(66),
    [anon_sym_div] = ACTIONS(66),
    [anon_sym_divq] = ACTIONS(66),
    [anon_sym_divl] = ACTIONS(66),
    [anon_sym_divss] = ACTIONS(66),
    [anon_sym_divsd] = ACTIONS(66),
    [anon_sym_idiv] = ACTIONS(66),
    [anon_sym_idivl] = ACTIONS(66),
    [anon_sym_sub] = ACTIONS(66),
    [anon_sym_subq] = ACTIONS(66),
    [anon_sym_subl] = ACTIONS(66),
    [anon_sym_subss] = ACTIONS(66),
    [anon_sym_subw] = ACTIONS(66),
    [anon_sym_subb] = ACTIONS(66),
    [anon_sym_subsd] = ACTIONS(66),
    [anon_sym_subpd] = ACTIONS(66),
    [anon_sym_sbb] = ACTIONS(66),
    [anon_sym_mul] = ACTIONS(66),
    [anon_sym_mulq] = ACTIONS(66),
    [anon_sym_mull] = ACTIONS(66),
    [anon_sym_mulss] = ACTIONS(66),
    [anon_sym_mulw] = ACTIONS(66),
    [anon_sym_mulb] = ACTIONS(66),
    [anon_sym_mulsd] = ACTIONS(66),
    [anon_sym_mulx] = ACTIONS(66),
    [anon_sym_imul] = ACTIONS(66),
    [anon_sym_neg] = ACTIONS(66),
    [anon_sym_negl] = ACTIONS(66),
    [anon_sym_negq] = ACTIONS(66),
    [anon_sym_fmulp] = ACTIONS(66),
    [anon_sym_vpclmulhqlqdq] = ACTIONS(66),
    [anon_sym_pclmullqlqdq] = ACTIONS(66),
    [anon_sym_pclmullqhqdq] = ACTIONS(66),
    [anon_sym_vpclmullqhqdq] = ACTIONS(66),
    [anon_sym_vpclmulhqhqdq] = ACTIONS(66),
    [anon_sym_pclmulhqhqdq] = ACTIONS(66),
    [anon_sym_vpclmullqlqdq] = ACTIONS(66),
    [anon_sym_adcx] = ACTIONS(66),
    [anon_sym_adox] = ACTIONS(66),
    [anon_sym_vmulsd] = ACTIONS(66),
    [anon_sym_vpaddd] = ACTIONS(66),
    [anon_sym_vpaddb] = ACTIONS(66),
    [anon_sym_vpaddq] = ACTIONS(66),
    [anon_sym_vpaddw] = ACTIONS(66),
    [anon_sym_vpcmpgtd] = ACTIONS(66),
    [anon_sym_vdivsd] = ACTIONS(66),
    [anon_sym_vpmaddubsw] = ACTIONS(66),
    [anon_sym_vpmaddwd] = ACTIONS(66),
    [anon_sym_vpmullw] = ACTIONS(66),
    [anon_sym_vpmuludq] = ACTIONS(66),
    [anon_sym_vucomisd] = ACTIONS(66),
    [anon_sym_vucomiss] = ACTIONS(66),
    [anon_sym_addsd] = ACTIONS(66),
    [anon_sym_ucomisd] = ACTIONS(66),
    [anon_sym_ucomiss] = ACTIONS(66),
    [anon_sym_maxsd] = ACTIONS(66),
    [anon_sym_minsd] = ACTIONS(66),
    [anon_sym_maxss] = ACTIONS(66),
    [anon_sym_minss] = ACTIONS(66),
    [anon_sym_vsubsd] = ACTIONS(66),
    [anon_sym_vpsubusw] = ACTIONS(66),
    [anon_sym_vpsubq] = ACTIONS(66),
    [anon_sym_vpsubd] = ACTIONS(66),
    [anon_sym_vpsubw] = ACTIONS(66),
    [anon_sym_psubd] = ACTIONS(66),
    [anon_sym_pmaddwd] = ACTIONS(66),
    [anon_sym_paddw] = ACTIONS(66),
    [anon_sym_psubusw] = ACTIONS(66),
    [anon_sym_psubusb] = ACTIONS(66),
    [anon_sym_psubb] = ACTIONS(66),
    [anon_sym_psubq] = ACTIONS(66),
    [anon_sym_paddq] = ACTIONS(66),
    [anon_sym_pmuludq] = ACTIONS(66),
    [anon_sym_pmaddubsw] = ACTIONS(66),
    [anon_sym_paddd] = ACTIONS(66),
    [anon_sym_pcmpgtd] = ACTIONS(66),
    [anon_sym_pcmpeqd] = ACTIONS(66),
    [anon_sym_pcmpeqb] = ACTIONS(66),
    [anon_sym_vpcmpltud] = ACTIONS(66),
    [anon_sym_bsf] = ACTIONS(66),
    [anon_sym_bsr] = ACTIONS(66),
    [anon_sym_bts] = ACTIONS(66),
    [anon_sym_bt] = ACTIONS(66),
    [anon_sym_btr] = ACTIONS(66),
    [anon_sym_btl] = ACTIONS(66),
    [anon_sym_setne] = ACTIONS(66),
    [anon_sym_setb] = ACTIONS(66),
    [anon_sym_sete] = ACTIONS(66),
    [anon_sym_setbe] = ACTIONS(66),
    [anon_sym_seta] = ACTIONS(66),
    [anon_sym_setge] = ACTIONS(66),
    [anon_sym_setae] = ACTIONS(66),
    [anon_sym_setl] = ACTIONS(66),
    [anon_sym_setle] = ACTIONS(66),
    [anon_sym_setg] = ACTIONS(66),
    [anon_sym_seto] = ACTIONS(66),
    [anon_sym_setnp] = ACTIONS(66),
    [anon_sym_setp] = ACTIONS(66),
    [anon_sym_setns] = ACTIONS(66),
    [anon_sym_test] = ACTIONS(66),
    [anon_sym_testb] = ACTIONS(66),
    [anon_sym_testl] = ACTIONS(66),
    [anon_sym_knotw] = ACTIONS(66),
    [anon_sym_bswap] = ACTIONS(66),
    [anon_sym_cbtw] = ACTIONS(66),
    [anon_sym_cltd] = ACTIONS(66),
    [anon_sym_cltq] = ACTIONS(66),
    [anon_sym_cmovbe] = ACTIONS(66),
    [anon_sym_cmovl] = ACTIONS(66),
    [anon_sym_cmovae] = ACTIONS(66),
    [anon_sym_cmovo] = ACTIONS(66),
    [anon_sym_cmovne] = ACTIONS(66),
    [anon_sym_cmovns] = ACTIONS(66),
    [anon_sym_cmovg] = ACTIONS(66),
    [anon_sym_cmovp] = ACTIONS(66),
    [anon_sym_cmove] = ACTIONS(66),
    [anon_sym_cmovge] = ACTIONS(66),
    [anon_sym_cmovb] = ACTIONS(66),
    [anon_sym_cmova] = ACTIONS(66),
    [anon_sym_cmovle] = ACTIONS(66),
    [anon_sym_cmovs] = ACTIONS(66),
    [anon_sym_cwtl] = ACTIONS(66),
    [anon_sym_cwtd] = ACTIONS(66),
    [anon_sym_cqto] = ACTIONS(66),
    [anon_sym_cvttsd2si] = ACTIONS(66),
    [anon_sym_cvtss2sd] = ACTIONS(66),
    [anon_sym_cvttss2si] = ACTIONS(66),
    [anon_sym_cvtsi2sd] = ACTIONS(66),
    [anon_sym_cvtsi2ss] = ACTIONS(66),
    [anon_sym_cvtsi2sdq] = ACTIONS(66),
    [anon_sym_cvtsi2sdl] = ACTIONS(66),
    [anon_sym_cvtsd2ss] = ACTIONS(66),
    [anon_sym_cvtsi2ssl] = ACTIONS(66),
    [anon_sym_vcvtusi2sd] = ACTIONS(66),
    [anon_sym_mov] = ACTIONS(66),
    [anon_sym_movw] = ACTIONS(66),
    [anon_sym_movl] = ACTIONS(66),
    [anon_sym_movq] = ACTIONS(66),
    [anon_sym_movb] = ACTIONS(66),
    [anon_sym_movabs] = ACTIONS(66),
    [anon_sym_movsbw] = ACTIONS(66),
    [anon_sym_movsbq] = ACTIONS(66),
    [anon_sym_movsbl] = ACTIONS(66),
    [anon_sym_movswl] = ACTIONS(66),
    [anon_sym_movswq] = ACTIONS(66),
    [anon_sym_movzbw] = ACTIONS(66),
    [anon_sym_movzbq] = ACTIONS(66),
    [anon_sym_movzbl] = ACTIONS(66),
    [anon_sym_movzwl] = ACTIONS(66),
    [anon_sym_movaps] = ACTIONS(66),
    [anon_sym_movhlps] = ACTIONS(66),
    [anon_sym_movss] = ACTIONS(66),
    [anon_sym_movups] = ACTIONS(66),
    [anon_sym_movsd] = ACTIONS(66),
    [anon_sym_movd] = ACTIONS(66),
    [anon_sym_movhps] = ACTIONS(66),
    [anon_sym_movdqa] = ACTIONS(66),
    [anon_sym_movbe] = ACTIONS(66),
    [anon_sym_movapd] = ACTIONS(66),
    [anon_sym_movdqu] = ACTIONS(66),
    [anon_sym_xchg] = ACTIONS(66),
    [anon_sym_fildl] = ACTIONS(66),
    [anon_sym_fldt] = ACTIONS(66),
    [anon_sym_fstpl] = ACTIONS(66),
    [anon_sym_vmovaps] = ACTIONS(66),
    [anon_sym_vmovapd] = ACTIONS(66),
    [anon_sym_vmovss] = ACTIONS(66),
    [anon_sym_vmovdqu] = ACTIONS(66),
    [anon_sym_vmovdqu64] = ACTIONS(66),
    [anon_sym_vmovdqu32] = ACTIONS(66),
    [anon_sym_vmovdqa] = ACTIONS(66),
    [anon_sym_vmovdqa32] = ACTIONS(66),
    [anon_sym_vmovdqa64] = ACTIONS(66),
    [anon_sym_vmovq] = ACTIONS(66),
    [anon_sym_vmovups] = ACTIONS(66),
    [anon_sym_vmovd] = ACTIONS(66),
    [anon_sym_vmovsd] = ACTIONS(66),
    [anon_sym_pmovmskb] = ACTIONS(66),
    [anon_sym_insb] = ACTIONS(66),
    [anon_sym_insl] = ACTIONS(66),
    [anon_sym_outsb] = ACTIONS(66),
    [anon_sym_outsl] = ACTIONS(66),
    [anon_sym_or] = ACTIONS(66),
    [anon_sym_orq] = ACTIONS(66),
    [anon_sym_orl] = ACTIONS(66),
    [anon_sym_orb] = ACTIONS(66),
    [anon_sym_orw] = ACTIONS(66),
    [anon_sym_xor] = ACTIONS(66),
    [anon_sym_xorl] = ACTIONS(66),
    [anon_sym_xorw] = ACTIONS(66),
    [anon_sym_xorps] = ACTIONS(66),
    [anon_sym_xorpd] = ACTIONS(66),
    [anon_sym_vxorps] = ACTIONS(66),
    [anon_sym_vpxord] = ACTIONS(66),
    [anon_sym_vpxor] = ACTIONS(66),
    [anon_sym_and] = ACTIONS(66),
    [anon_sym_andq] = ACTIONS(66),
    [anon_sym_andl] = ACTIONS(66),
    [anon_sym_andw] = ACTIONS(66),
    [anon_sym_andb] = ACTIONS(66),
    [anon_sym_andn] = ACTIONS(66),
    [anon_sym_andpd] = ACTIONS(66),
    [anon_sym_pand] = ACTIONS(66),
    [anon_sym_pandn] = ACTIONS(66),
    [anon_sym_andps] = ACTIONS(66),
    [anon_sym_vpand] = ACTIONS(66),
    [anon_sym_not] = ACTIONS(66),
    [anon_sym_notl] = ACTIONS(66),
    [anon_sym_notw] = ACTIONS(66),
    [anon_sym_vpor] = ACTIONS(66),
    [anon_sym_por] = ACTIONS(66),
    [anon_sym_pxor] = ACTIONS(66),
    [anon_sym_cpuid] = ACTIONS(66),
    [anon_sym_lea] = ACTIONS(66),
    [anon_sym_popcnt] = ACTIONS(66),
    [anon_sym_nop] = ACTIONS(66),
    [anon_sym_nopl] = ACTIONS(66),
    [anon_sym_nopw] = ACTIONS(66),
    [anon_sym_ud2] = ACTIONS(66),
    [anon_sym_data16] = ACTIONS(66),
    [anon_sym_sha1rnds4] = ACTIONS(66),
    [anon_sym_addr32] = ACTIONS(66),
    [anon_sym_sha1msg1] = ACTIONS(66),
    [anon_sym_sha1msg2] = ACTIONS(66),
    [anon_sym_sha1nexte] = ACTIONS(66),
    [anon_sym_endbr64] = ACTIONS(66),
    [anon_sym_gs] = ACTIONS(66),
    [anon_sym_re] = ACTIONS(66),
    [anon_sym_ss] = ACTIONS(66),
    [anon_sym_lock] = ACTIONS(66),
    [anon_sym_prefetcht1] = ACTIONS(66),
    [anon_sym_prefetcht0] = ACTIONS(66),
    [anon_sym_mfence] = ACTIONS(66),
    [anon_sym_femms] = ACTIONS(66),
    [anon_sym_tzcnt] = ACTIONS(66),
    [anon_sym_leaveq] = ACTIONS(66),
    [anon_sym_retq] = ACTIONS(66),
    [anon_sym_packuswb] = ACTIONS(66),
    [anon_sym_punpckhbw] = ACTIONS(66),
    [anon_sym_punpckhdq] = ACTIONS(66),
    [anon_sym_punpckhwd] = ACTIONS(66),
    [anon_sym_punpcklbw] = ACTIONS(66),
    [anon_sym_punpckldq] = ACTIONS(66),
    [anon_sym_punpcklwd] = ACTIONS(66),
    [anon_sym_vpunpcklwd] = ACTIONS(66),
    [anon_sym_vpunpckldq] = ACTIONS(66),
    [anon_sym_punpcklqdq] = ACTIONS(66),
    [anon_sym_punpckhqdq] = ACTIONS(66),
    [anon_sym_vpunpckhqdq] = ACTIONS(66),
    [anon_sym_vpunpckhdq] = ACTIONS(66),
    [anon_sym_vpunpcklqdq] = ACTIONS(66),
    [anon_sym_vpunpckhwd] = ACTIONS(66),
    [anon_sym_vpackusdw] = ACTIONS(66),
    [anon_sym_vpalignr] = ACTIONS(66),
    [anon_sym_palignr] = ACTIONS(66),
    [anon_sym_vunpckhpd] = ACTIONS(66),
    [anon_sym_vunpckhps] = ACTIONS(66),
    [anon_sym_vunpcklpd] = ACTIONS(66),
    [anon_sym_vunpcklps] = ACTIONS(66),
    [anon_sym_unpckhpd] = ACTIONS(66),
    [anon_sym_rol] = ACTIONS(66),
    [anon_sym_ror] = ACTIONS(66),
    [anon_sym_sar] = ACTIONS(66),
    [anon_sym_sarl] = ACTIONS(66),
    [anon_sym_sarx] = ACTIONS(66),
    [anon_sym_shl] = ACTIONS(66),
    [anon_sym_shll] = ACTIONS(66),
    [anon_sym_shld] = ACTIONS(66),
    [anon_sym_shlx] = ACTIONS(66),
    [anon_sym_shlq] = ACTIONS(66),
    [anon_sym_shr] = ACTIONS(66),
    [anon_sym_shrq] = ACTIONS(66),
    [anon_sym_shrd] = ACTIONS(66),
    [anon_sym_shrl] = ACTIONS(66),
    [anon_sym_shrx] = ACTIONS(66),
    [anon_sym_vprord] = ACTIONS(66),
    [anon_sym_vprorq] = ACTIONS(66),
    [anon_sym_rorl] = ACTIONS(66),
    [anon_sym_roll] = ACTIONS(66),
    [anon_sym_vpslldq] = ACTIONS(66),
    [anon_sym_vpslld] = ACTIONS(66),
    [anon_sym_vpsllq] = ACTIONS(66),
    [anon_sym_vpsllw] = ACTIONS(66),
    [anon_sym_vpsrldq] = ACTIONS(66),
    [anon_sym_vpsrld] = ACTIONS(66),
    [anon_sym_vpsrlq] = ACTIONS(66),
    [anon_sym_vpsrlw] = ACTIONS(66),
    [anon_sym_rorx] = ACTIONS(66),
    [anon_sym_psrld] = ACTIONS(66),
    [anon_sym_psrlw] = ACTIONS(66),
    [anon_sym_psllq] = ACTIONS(66),
    [anon_sym_psrlq] = ACTIONS(66),
    [anon_sym_pslldq] = ACTIONS(66),
    [anon_sym_psrldq] = ACTIONS(66),
    [anon_sym_psrad] = ACTIONS(66),
    [anon_sym_pslld] = ACTIONS(66),
    [anon_sym_push] = ACTIONS(66),
    [anon_sym_pushq] = ACTIONS(66),
    [anon_sym_pop] = ACTIONS(66),
    [anon_sym_movslq] = ACTIONS(66),
    [anon_sym_movsb] = ACTIONS(66),
    [anon_sym_rep] = ACTIONS(66),
    [anon_sym_repz] = ACTIONS(66),
    [anon_sym_repnz] = ACTIONS(66),
    [anon_sym_rex] = ACTIONS(66),
    [anon_sym_rex_DOTWB] = ACTIONS(66),
    [anon_sym_rex_DOTWRB] = ACTIONS(66),
    [anon_sym_rex_DOTRXB] = ACTIONS(66),
    [anon_sym_rex_DOTB] = ACTIONS(66),
    [anon_sym_rex_DOTWRXB] = ACTIONS(66),
    [anon_sym_rex_DOTXB] = ACTIONS(66),
    [anon_sym_rex_DOTW] = ACTIONS(66),
    [anon_sym_rex_DOTRB] = ACTIONS(66),
    [anon_sym_xgetbv] = ACTIONS(66),
    [anon_sym_fs] = ACTIONS(66),
    [anon_sym_kmovw] = ACTIONS(66),
    [anon_sym_vzeroall] = ACTIONS(66),
    [anon_sym_vzeroupper] = ACTIONS(66),
    [anon_sym_aesdec] = ACTIONS(66),
    [anon_sym_aesdeclast] = ACTIONS(66),
    [anon_sym_aesenc] = ACTIONS(66),
    [anon_sym_aesenclast] = ACTIONS(66),
    [anon_sym_vaesenc] = ACTIONS(66),
    [anon_sym_vaesenclast] = ACTIONS(66),
    [anon_sym_aeskeygenassist] = ACTIONS(66),
    [anon_sym_vpextrw] = ACTIONS(66),
    [anon_sym_vextracti128] = ACTIONS(66),
    [anon_sym_vextracti32x4] = ACTIONS(66),
    [anon_sym_pextrq] = ACTIONS(66),
    [anon_sym_pextrw] = ACTIONS(66),
    [anon_sym_pextrb] = ACTIONS(66),
    [anon_sym_vpinsrw] = ACTIONS(66),
    [anon_sym_vpinsrd] = ACTIONS(66),
    [anon_sym_vpinsrq] = ACTIONS(66),
    [anon_sym_vpinsrb] = ACTIONS(66),
    [anon_sym_vinserti128] = ACTIONS(66),
    [anon_sym_vinserti32x4] = ACTIONS(66),
    [anon_sym_vinserti64x4] = ACTIONS(66),
    [anon_sym_vinsertf128] = ACTIONS(66),
    [anon_sym_pinsrw] = ACTIONS(66),
    [anon_sym_pinsrb] = ACTIONS(66),
    [anon_sym_pinsrd] = ACTIONS(66),
    [anon_sym_vpshufb] = ACTIONS(66),
    [anon_sym_vpshufd] = ACTIONS(66),
    [anon_sym_vshufps] = ACTIONS(66),
    [anon_sym_vshufi32x4] = ACTIONS(66),
    [anon_sym_vshufi64x2] = ACTIONS(66),
    [anon_sym_shufps] = ACTIONS(66),
    [anon_sym_pshuflw] = ACTIONS(66),
    [anon_sym_pshufd] = ACTIONS(66),
    [anon_sym_pshufhw] = ACTIONS(66),
    [anon_sym_shufpd] = ACTIONS(66),
    [anon_sym_pshufb] = ACTIONS(66),
    [anon_sym_vperm2f128] = ACTIONS(66),
    [anon_sym_vperm2i128] = ACTIONS(66),
    [anon_sym_vpermd] = ACTIONS(66),
    [anon_sym_vpermq] = ACTIONS(66),
    [anon_sym_vpermt2d] = ACTIONS(66),
    [anon_sym_vpermi2d] = ACTIONS(66),
    [anon_sym_vblendps] = ACTIONS(66),
    [anon_sym_vblendvps] = ACTIONS(66),
    [anon_sym_vpblendmd] = ACTIONS(66),
    [anon_sym_vpblendd] = ACTIONS(66),
    [anon_sym_pblendw] = ACTIONS(66),
    [anon_sym_blendvps] = ACTIONS(66),
    [anon_sym_vbroadcastss] = ACTIONS(66),
    [anon_sym_vpbroadcastq] = ACTIONS(66),
    [anon_sym_vpbroadcastd] = ACTIONS(66),
    [anon_sym_vbroadcasti128] = ACTIONS(66),
    [anon_sym_vbroadcasti32x4] = ACTIONS(66),
    [anon_sym_callq] = ACTIONS(66),
    [anon_sym_ja] = ACTIONS(66),
    [anon_sym_jae] = ACTIONS(66),
    [anon_sym_jb] = ACTIONS(66),
    [anon_sym_jbe] = ACTIONS(66),
    [anon_sym_je] = ACTIONS(66),
    [anon_sym_jg] = ACTIONS(66),
    [anon_sym_jge] = ACTIONS(66),
    [anon_sym_jl] = ACTIONS(66),
    [anon_sym_jle] = ACTIONS(66),
    [anon_sym_jmp] = ACTIONS(66),
    [anon_sym_jmpq] = ACTIONS(66),
    [anon_sym_jne] = ACTIONS(66),
    [anon_sym_jno] = ACTIONS(66),
    [anon_sym_jns] = ACTIONS(66),
    [anon_sym_jo] = ACTIONS(66),
    [anon_sym_jp] = ACTIONS(66),
    [anon_sym_jrcxz] = ACTIONS(66),
    [anon_sym_js] = ACTIONS(66),
    [anon_sym_notrack] = ACTIONS(66),
  },
  [6] = {
    [sym_operand] = STATE(111),
    [sym_immediateOperand] = STATE(115),
    [sym_registerOperand] = STATE(115),
    [sym_segmentRegisterOperand] = STATE(93),
    [sym_generalRegisterOperand] = STATE(90),
    [sym_generalRegister64Bits] = STATE(92),
    [sym_generalRegister32Bits] = STATE(92),
    [sym_generalRegister16Bits] = STATE(92),
    [sym_generalRegister8Bits] = STATE(92),
    [sym_memoryOperand] = STATE(115),
    [sym_memoryScalaredIndexedOperand] = STATE(108),
    [sym_memorySegmentBaseOperand] = STATE(108),
    [sym_memoryIndirectOperand] = STATE(108),
    [sym_offset] = STATE(276),
    [sym_memoryAbsoluteOperand] = STATE(108),
    [sym_someOpcode] = STATE(115),
    [sym_controlRegisterOperand] = STATE(90),
    [sym_instructionRegisterOperand] = STATE(90),
    [sym_floatRegisterOperand] = STATE(90),
    [sym_otherRegisterOperand] = STATE(90),
    [aux_sym_data_repeat1] = STATE(8),
    [aux_sym_operand_repeat1] = STATE(68),
    [aux_sym_comment_token1] = ACTIONS(70),
    [aux_sym_comment_token2] = ACTIONS(70),
    [sym__line_break] = ACTIONS(72),
    [anon_sym_f] = ACTIONS(74),
    [aux_sym_operand_token1] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_PERCENTss] = ACTIONS(82),
    [anon_sym_PERCENTcs] = ACTIONS(82),
    [anon_sym_PERCENTds] = ACTIONS(82),
    [anon_sym_PERCENTes] = ACTIONS(82),
    [anon_sym_PERCENTfs] = ACTIONS(82),
    [anon_sym_PERCENTgs] = ACTIONS(82),
    [anon_sym_PERCENTrax] = ACTIONS(84),
    [anon_sym_PERCENTrbx] = ACTIONS(84),
    [anon_sym_PERCENTrcx] = ACTIONS(84),
    [anon_sym_PERCENTrdx] = ACTIONS(84),
    [anon_sym_PERCENTrsi] = ACTIONS(84),
    [anon_sym_PERCENTrdi] = ACTIONS(84),
    [anon_sym_PERCENTrbp] = ACTIONS(84),
    [anon_sym_PERCENTrsp] = ACTIONS(84),
    [anon_sym_PERCENTr8] = ACTIONS(84),
    [anon_sym_PERCENTr9] = ACTIONS(84),
    [anon_sym_PERCENTr10] = ACTIONS(84),
    [anon_sym_PERCENTr11] = ACTIONS(84),
    [anon_sym_PERCENTr12] = ACTIONS(84),
    [anon_sym_PERCENTr13] = ACTIONS(84),
    [anon_sym_PERCENTr14] = ACTIONS(84),
    [anon_sym_PERCENTr15] = ACTIONS(84),
    [anon_sym_PERCENTeax] = ACTIONS(86),
    [anon_sym_PERCENTecx] = ACTIONS(86),
    [anon_sym_PERCENTedx] = ACTIONS(86),
    [anon_sym_PERCENTebx] = ACTIONS(86),
    [anon_sym_PERCENTesi] = ACTIONS(86),
    [anon_sym_PERCENTedi] = ACTIONS(86),
    [anon_sym_PERCENTebp] = ACTIONS(86),
    [anon_sym_PERCENTesp] = ACTIONS(86),
    [anon_sym_PERCENTr8d] = ACTIONS(86),
    [anon_sym_PERCENTr9d] = ACTIONS(86),
    [anon_sym_PERCENTr10d] = ACTIONS(86),
    [anon_sym_PERCENTr11d] = ACTIONS(86),
    [anon_sym_PERCENTr12d] = ACTIONS(86),
    [anon_sym_PERCENTr13d] = ACTIONS(86),
    [anon_sym_PERCENTr14d] = ACTIONS(86),
    [anon_sym_PERCENTr15d] = ACTIONS(86),
    [anon_sym_PERCENTax] = ACTIONS(88),
    [anon_sym_PERCENTcx] = ACTIONS(88),
    [anon_sym_PERCENTdx] = ACTIONS(88),
    [anon_sym_PERCENTbx] = ACTIONS(88),
    [anon_sym_PERCENTsi] = ACTIONS(88),
    [anon_sym_PERCENTdi] = ACTIONS(88),
    [anon_sym_PERCENTsp] = ACTIONS(88),
    [anon_sym_PERCENTbp] = ACTIONS(88),
    [anon_sym_PERCENTr8w] = ACTIONS(88),
    [anon_sym_PERCENTr9w] = ACTIONS(88),
    [anon_sym_PERCENTr10w] = ACTIONS(88),
    [anon_sym_PERCENTr11w] = ACTIONS(88),
    [anon_sym_PERCENTr12w] = ACTIONS(88),
    [anon_sym_PERCENTr13w] = ACTIONS(88),
    [anon_sym_PERCENTr14w] = ACTIONS(88),
    [anon_sym_PERCENTr15w] = ACTIONS(88),
    [anon_sym_PERCENTal] = ACTIONS(90),
    [anon_sym_PERCENTcl] = ACTIONS(90),
    [anon_sym_PERCENTdl] = ACTIONS(90),
    [anon_sym_PERCENTbl] = ACTIONS(90),
    [anon_sym_PERCENTsil] = ACTIONS(90),
    [anon_sym_PERCENTdil] = ACTIONS(90),
    [anon_sym_PERCENTspl] = ACTIONS(90),
    [anon_sym_PERCENTbpl] = ACTIONS(90),
    [anon_sym_PERCENTr8b] = ACTIONS(90),
    [anon_sym_PERCENTr9b] = ACTIONS(90),
    [anon_sym_PERCENTr10b] = ACTIONS(90),
    [anon_sym_PERCENTr11b] = ACTIONS(90),
    [anon_sym_PERCENTr12b] = ACTIONS(90),
    [anon_sym_PERCENTr13b] = ACTIONS(90),
    [anon_sym_PERCENTr14b] = ACTIONS(90),
    [anon_sym_PERCENTr15b] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_movsq] = ACTIONS(96),
    [anon_sym_cmpsb] = ACTIONS(96),
    [anon_sym_cmpxchg] = ACTIONS(96),
    [anon_sym_movsl] = ACTIONS(96),
    [anon_sym_PERCENTcr0] = ACTIONS(98),
    [anon_sym_PERCENTcr2] = ACTIONS(98),
    [anon_sym_PERCENTcr3] = ACTIONS(98),
    [anon_sym_PERCENTcr4] = ACTIONS(98),
    [anon_sym_PERCENTrip] = ACTIONS(100),
    [anon_sym_PERCENTeip] = ACTIONS(100),
    [anon_sym_PERCENTip] = ACTIONS(100),
    [anon_sym_PERCENTst] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(104),
  },
  [7] = {
    [sym_operand] = STATE(206),
    [sym_immediateOperand] = STATE(194),
    [sym_registerOperand] = STATE(194),
    [sym_segmentRegisterOperand] = STATE(186),
    [sym_generalRegisterOperand] = STATE(175),
    [sym_generalRegister64Bits] = STATE(174),
    [sym_generalRegister32Bits] = STATE(174),
    [sym_generalRegister16Bits] = STATE(174),
    [sym_generalRegister8Bits] = STATE(174),
    [sym_memoryOperand] = STATE(194),
    [sym_memoryScalaredIndexedOperand] = STATE(197),
    [sym_memorySegmentBaseOperand] = STATE(197),
    [sym_memoryIndirectOperand] = STATE(197),
    [sym_offset] = STATE(287),
    [sym_memoryAbsoluteOperand] = STATE(197),
    [sym_someOpcode] = STATE(194),
    [sym_controlRegisterOperand] = STATE(175),
    [sym_instructionRegisterOperand] = STATE(175),
    [sym_floatRegisterOperand] = STATE(175),
    [sym_otherRegisterOperand] = STATE(175),
    [aux_sym_data_repeat1] = STATE(7),
    [aux_sym_operand_repeat1] = STATE(102),
    [aux_sym_comment_token1] = ACTIONS(106),
    [aux_sym_comment_token2] = ACTIONS(106),
    [sym__line_break] = ACTIONS(108),
    [anon_sym_f] = ACTIONS(110),
    [aux_sym_operand_token1] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(119),
    [anon_sym_PERCENTss] = ACTIONS(122),
    [anon_sym_PERCENTcs] = ACTIONS(122),
    [anon_sym_PERCENTds] = ACTIONS(122),
    [anon_sym_PERCENTes] = ACTIONS(122),
    [anon_sym_PERCENTfs] = ACTIONS(122),
    [anon_sym_PERCENTgs] = ACTIONS(122),
    [anon_sym_PERCENTrax] = ACTIONS(125),
    [anon_sym_PERCENTrbx] = ACTIONS(125),
    [anon_sym_PERCENTrcx] = ACTIONS(125),
    [anon_sym_PERCENTrdx] = ACTIONS(125),
    [anon_sym_PERCENTrsi] = ACTIONS(125),
    [anon_sym_PERCENTrdi] = ACTIONS(125),
    [anon_sym_PERCENTrbp] = ACTIONS(125),
    [anon_sym_PERCENTrsp] = ACTIONS(125),
    [anon_sym_PERCENTr8] = ACTIONS(125),
    [anon_sym_PERCENTr9] = ACTIONS(125),
    [anon_sym_PERCENTr10] = ACTIONS(125),
    [anon_sym_PERCENTr11] = ACTIONS(125),
    [anon_sym_PERCENTr12] = ACTIONS(125),
    [anon_sym_PERCENTr13] = ACTIONS(125),
    [anon_sym_PERCENTr14] = ACTIONS(125),
    [anon_sym_PERCENTr15] = ACTIONS(125),
    [anon_sym_PERCENTeax] = ACTIONS(128),
    [anon_sym_PERCENTecx] = ACTIONS(128),
    [anon_sym_PERCENTedx] = ACTIONS(128),
    [anon_sym_PERCENTebx] = ACTIONS(128),
    [anon_sym_PERCENTesi] = ACTIONS(128),
    [anon_sym_PERCENTedi] = ACTIONS(128),
    [anon_sym_PERCENTebp] = ACTIONS(128),
    [anon_sym_PERCENTesp] = ACTIONS(128),
    [anon_sym_PERCENTr8d] = ACTIONS(128),
    [anon_sym_PERCENTr9d] = ACTIONS(128),
    [anon_sym_PERCENTr10d] = ACTIONS(128),
    [anon_sym_PERCENTr11d] = ACTIONS(128),
    [anon_sym_PERCENTr12d] = ACTIONS(128),
    [anon_sym_PERCENTr13d] = ACTIONS(128),
    [anon_sym_PERCENTr14d] = ACTIONS(128),
    [anon_sym_PERCENTr15d] = ACTIONS(128),
    [anon_sym_PERCENTax] = ACTIONS(131),
    [anon_sym_PERCENTcx] = ACTIONS(131),
    [anon_sym_PERCENTdx] = ACTIONS(131),
    [anon_sym_PERCENTbx] = ACTIONS(131),
    [anon_sym_PERCENTsi] = ACTIONS(131),
    [anon_sym_PERCENTdi] = ACTIONS(131),
    [anon_sym_PERCENTsp] = ACTIONS(131),
    [anon_sym_PERCENTbp] = ACTIONS(131),
    [anon_sym_PERCENTr8w] = ACTIONS(131),
    [anon_sym_PERCENTr9w] = ACTIONS(131),
    [anon_sym_PERCENTr10w] = ACTIONS(131),
    [anon_sym_PERCENTr11w] = ACTIONS(131),
    [anon_sym_PERCENTr12w] = ACTIONS(131),
    [anon_sym_PERCENTr13w] = ACTIONS(131),
    [anon_sym_PERCENTr14w] = ACTIONS(131),
    [anon_sym_PERCENTr15w] = ACTIONS(131),
    [anon_sym_PERCENTal] = ACTIONS(134),
    [anon_sym_PERCENTcl] = ACTIONS(134),
    [anon_sym_PERCENTdl] = ACTIONS(134),
    [anon_sym_PERCENTbl] = ACTIONS(134),
    [anon_sym_PERCENTsil] = ACTIONS(134),
    [anon_sym_PERCENTdil] = ACTIONS(134),
    [anon_sym_PERCENTspl] = ACTIONS(134),
    [anon_sym_PERCENTbpl] = ACTIONS(134),
    [anon_sym_PERCENTr8b] = ACTIONS(134),
    [anon_sym_PERCENTr9b] = ACTIONS(134),
    [anon_sym_PERCENTr10b] = ACTIONS(134),
    [anon_sym_PERCENTr11b] = ACTIONS(134),
    [anon_sym_PERCENTr12b] = ACTIONS(134),
    [anon_sym_PERCENTr13b] = ACTIONS(134),
    [anon_sym_PERCENTr14b] = ACTIONS(134),
    [anon_sym_PERCENTr15b] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_movsq] = ACTIONS(143),
    [anon_sym_cmpsb] = ACTIONS(143),
    [anon_sym_cmpxchg] = ACTIONS(143),
    [anon_sym_movsl] = ACTIONS(143),
    [anon_sym_PERCENTcr0] = ACTIONS(146),
    [anon_sym_PERCENTcr2] = ACTIONS(146),
    [anon_sym_PERCENTcr3] = ACTIONS(146),
    [anon_sym_PERCENTcr4] = ACTIONS(146),
    [anon_sym_PERCENTrip] = ACTIONS(149),
    [anon_sym_PERCENTeip] = ACTIONS(149),
    [anon_sym_PERCENTip] = ACTIONS(149),
    [anon_sym_PERCENTst] = ACTIONS(152),
    [anon_sym_PERCENT] = ACTIONS(155),
  },
  [8] = {
    [sym_operand] = STATE(123),
    [sym_immediateOperand] = STATE(115),
    [sym_registerOperand] = STATE(115),
    [sym_segmentRegisterOperand] = STATE(93),
    [sym_generalRegisterOperand] = STATE(90),
    [sym_generalRegister64Bits] = STATE(92),
    [sym_generalRegister32Bits] = STATE(92),
    [sym_generalRegister16Bits] = STATE(92),
    [sym_generalRegister8Bits] = STATE(92),
    [sym_memoryOperand] = STATE(115),
    [sym_memoryScalaredIndexedOperand] = STATE(108),
    [sym_memorySegmentBaseOperand] = STATE(108),
    [sym_memoryIndirectOperand] = STATE(108),
    [sym_offset] = STATE(276),
    [sym_memoryAbsoluteOperand] = STATE(108),
    [sym_someOpcode] = STATE(115),
    [sym_controlRegisterOperand] = STATE(90),
    [sym_instructionRegisterOperand] = STATE(90),
    [sym_floatRegisterOperand] = STATE(90),
    [sym_otherRegisterOperand] = STATE(90),
    [aux_sym_data_repeat1] = STATE(7),
    [aux_sym_operand_repeat1] = STATE(68),
    [aux_sym_comment_token1] = ACTIONS(158),
    [aux_sym_comment_token2] = ACTIONS(158),
    [sym__line_break] = ACTIONS(160),
    [anon_sym_f] = ACTIONS(74),
    [aux_sym_operand_token1] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_PERCENTss] = ACTIONS(82),
    [anon_sym_PERCENTcs] = ACTIONS(82),
    [anon_sym_PERCENTds] = ACTIONS(82),
    [anon_sym_PERCENTes] = ACTIONS(82),
    [anon_sym_PERCENTfs] = ACTIONS(82),
    [anon_sym_PERCENTgs] = ACTIONS(82),
    [anon_sym_PERCENTrax] = ACTIONS(84),
    [anon_sym_PERCENTrbx] = ACTIONS(84),
    [anon_sym_PERCENTrcx] = ACTIONS(84),
    [anon_sym_PERCENTrdx] = ACTIONS(84),
    [anon_sym_PERCENTrsi] = ACTIONS(84),
    [anon_sym_PERCENTrdi] = ACTIONS(84),
    [anon_sym_PERCENTrbp] = ACTIONS(84),
    [anon_sym_PERCENTrsp] = ACTIONS(84),
    [anon_sym_PERCENTr8] = ACTIONS(84),
    [anon_sym_PERCENTr9] = ACTIONS(84),
    [anon_sym_PERCENTr10] = ACTIONS(84),
    [anon_sym_PERCENTr11] = ACTIONS(84),
    [anon_sym_PERCENTr12] = ACTIONS(84),
    [anon_sym_PERCENTr13] = ACTIONS(84),
    [anon_sym_PERCENTr14] = ACTIONS(84),
    [anon_sym_PERCENTr15] = ACTIONS(84),
    [anon_sym_PERCENTeax] = ACTIONS(86),
    [anon_sym_PERCENTecx] = ACTIONS(86),
    [anon_sym_PERCENTedx] = ACTIONS(86),
    [anon_sym_PERCENTebx] = ACTIONS(86),
    [anon_sym_PERCENTesi] = ACTIONS(86),
    [anon_sym_PERCENTedi] = ACTIONS(86),
    [anon_sym_PERCENTebp] = ACTIONS(86),
    [anon_sym_PERCENTesp] = ACTIONS(86),
    [anon_sym_PERCENTr8d] = ACTIONS(86),
    [anon_sym_PERCENTr9d] = ACTIONS(86),
    [anon_sym_PERCENTr10d] = ACTIONS(86),
    [anon_sym_PERCENTr11d] = ACTIONS(86),
    [anon_sym_PERCENTr12d] = ACTIONS(86),
    [anon_sym_PERCENTr13d] = ACTIONS(86),
    [anon_sym_PERCENTr14d] = ACTIONS(86),
    [anon_sym_PERCENTr15d] = ACTIONS(86),
    [anon_sym_PERCENTax] = ACTIONS(88),
    [anon_sym_PERCENTcx] = ACTIONS(88),
    [anon_sym_PERCENTdx] = ACTIONS(88),
    [anon_sym_PERCENTbx] = ACTIONS(88),
    [anon_sym_PERCENTsi] = ACTIONS(88),
    [anon_sym_PERCENTdi] = ACTIONS(88),
    [anon_sym_PERCENTsp] = ACTIONS(88),
    [anon_sym_PERCENTbp] = ACTIONS(88),
    [anon_sym_PERCENTr8w] = ACTIONS(88),
    [anon_sym_PERCENTr9w] = ACTIONS(88),
    [anon_sym_PERCENTr10w] = ACTIONS(88),
    [anon_sym_PERCENTr11w] = ACTIONS(88),
    [anon_sym_PERCENTr12w] = ACTIONS(88),
    [anon_sym_PERCENTr13w] = ACTIONS(88),
    [anon_sym_PERCENTr14w] = ACTIONS(88),
    [anon_sym_PERCENTr15w] = ACTIONS(88),
    [anon_sym_PERCENTal] = ACTIONS(90),
    [anon_sym_PERCENTcl] = ACTIONS(90),
    [anon_sym_PERCENTdl] = ACTIONS(90),
    [anon_sym_PERCENTbl] = ACTIONS(90),
    [anon_sym_PERCENTsil] = ACTIONS(90),
    [anon_sym_PERCENTdil] = ACTIONS(90),
    [anon_sym_PERCENTspl] = ACTIONS(90),
    [anon_sym_PERCENTbpl] = ACTIONS(90),
    [anon_sym_PERCENTr8b] = ACTIONS(90),
    [anon_sym_PERCENTr9b] = ACTIONS(90),
    [anon_sym_PERCENTr10b] = ACTIONS(90),
    [anon_sym_PERCENTr11b] = ACTIONS(90),
    [anon_sym_PERCENTr12b] = ACTIONS(90),
    [anon_sym_PERCENTr13b] = ACTIONS(90),
    [anon_sym_PERCENTr14b] = ACTIONS(90),
    [anon_sym_PERCENTr15b] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_movsq] = ACTIONS(96),
    [anon_sym_cmpsb] = ACTIONS(96),
    [anon_sym_cmpxchg] = ACTIONS(96),
    [anon_sym_movsl] = ACTIONS(96),
    [anon_sym_PERCENTcr0] = ACTIONS(98),
    [anon_sym_PERCENTcr2] = ACTIONS(98),
    [anon_sym_PERCENTcr3] = ACTIONS(98),
    [anon_sym_PERCENTcr4] = ACTIONS(98),
    [anon_sym_PERCENTrip] = ACTIONS(100),
    [anon_sym_PERCENTeip] = ACTIONS(100),
    [anon_sym_PERCENTip] = ACTIONS(100),
    [anon_sym_PERCENTst] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(104),
  },
  [9] = {
    [sym_registerOperand] = STATE(89),
    [sym_segmentRegisterOperand] = STATE(90),
    [sym_generalRegisterOperand] = STATE(90),
    [sym_generalRegister64Bits] = STATE(92),
    [sym_generalRegister32Bits] = STATE(92),
    [sym_generalRegister16Bits] = STATE(92),
    [sym_generalRegister8Bits] = STATE(92),
    [sym_controlRegisterOperand] = STATE(90),
    [sym_instructionRegisterOperand] = STATE(90),
    [sym_floatRegisterOperand] = STATE(90),
    [sym_otherRegisterOperand] = STATE(90),
    [aux_sym_operand_repeat1] = STATE(10),
    [aux_sym_operand_token1] = ACTIONS(162),
    [anon_sym_PERCENTss] = ACTIONS(164),
    [anon_sym_PERCENTcs] = ACTIONS(164),
    [anon_sym_PERCENTds] = ACTIONS(164),
    [anon_sym_PERCENTes] = ACTIONS(82),
    [anon_sym_PERCENTfs] = ACTIONS(164),
    [anon_sym_PERCENTgs] = ACTIONS(164),
    [anon_sym_PERCENTrax] = ACTIONS(166),
    [anon_sym_PERCENTrbx] = ACTIONS(166),
    [anon_sym_PERCENTrcx] = ACTIONS(166),
    [anon_sym_PERCENTrdx] = ACTIONS(166),
    [anon_sym_PERCENTrsi] = ACTIONS(166),
    [anon_sym_PERCENTrdi] = ACTIONS(166),
    [anon_sym_PERCENTrbp] = ACTIONS(166),
    [anon_sym_PERCENTrsp] = ACTIONS(166),
    [anon_sym_PERCENTr8] = ACTIONS(84),
    [anon_sym_PERCENTr9] = ACTIONS(84),
    [anon_sym_PERCENTr10] = ACTIONS(84),
    [anon_sym_PERCENTr11] = ACTIONS(84),
    [anon_sym_PERCENTr12] = ACTIONS(84),
    [anon_sym_PERCENTr13] = ACTIONS(84),
    [anon_sym_PERCENTr14] = ACTIONS(84),
    [anon_sym_PERCENTr15] = ACTIONS(84),
    [anon_sym_PERCENTeax] = ACTIONS(168),
    [anon_sym_PERCENTecx] = ACTIONS(168),
    [anon_sym_PERCENTedx] = ACTIONS(168),
    [anon_sym_PERCENTebx] = ACTIONS(168),
    [anon_sym_PERCENTesi] = ACTIONS(168),
    [anon_sym_PERCENTedi] = ACTIONS(168),
    [anon_sym_PERCENTebp] = ACTIONS(168),
    [anon_sym_PERCENTesp] = ACTIONS(168),
    [anon_sym_PERCENTr8d] = ACTIONS(168),
    [anon_sym_PERCENTr9d] = ACTIONS(168),
    [anon_sym_PERCENTr10d] = ACTIONS(168),
    [anon_sym_PERCENTr11d] = ACTIONS(168),
    [anon_sym_PERCENTr12d] = ACTIONS(168),
    [anon_sym_PERCENTr13d] = ACTIONS(168),
    [anon_sym_PERCENTr14d] = ACTIONS(168),
    [anon_sym_PERCENTr15d] = ACTIONS(168),
    [anon_sym_PERCENTax] = ACTIONS(170),
    [anon_sym_PERCENTcx] = ACTIONS(170),
    [anon_sym_PERCENTdx] = ACTIONS(170),
    [anon_sym_PERCENTbx] = ACTIONS(170),
    [anon_sym_PERCENTsi] = ACTIONS(88),
    [anon_sym_PERCENTdi] = ACTIONS(88),
    [anon_sym_PERCENTsp] = ACTIONS(88),
    [anon_sym_PERCENTbp] = ACTIONS(88),
    [anon_sym_PERCENTr8w] = ACTIONS(170),
    [anon_sym_PERCENTr9w] = ACTIONS(170),
    [anon_sym_PERCENTr10w] = ACTIONS(170),
    [anon_sym_PERCENTr11w] = ACTIONS(170),
    [anon_sym_PERCENTr12w] = ACTIONS(170),
    [anon_sym_PERCENTr13w] = ACTIONS(170),
    [anon_sym_PERCENTr14w] = ACTIONS(170),
    [anon_sym_PERCENTr15w] = ACTIONS(170),
    [anon_sym_PERCENTal] = ACTIONS(172),
    [anon_sym_PERCENTcl] = ACTIONS(172),
    [anon_sym_PERCENTdl] = ACTIONS(172),
    [anon_sym_PERCENTbl] = ACTIONS(172),
    [anon_sym_PERCENTsil] = ACTIONS(172),
    [anon_sym_PERCENTdil] = ACTIONS(172),
    [anon_sym_PERCENTspl] = ACTIONS(172),
    [anon_sym_PERCENTbpl] = ACTIONS(172),
    [anon_sym_PERCENTr8b] = ACTIONS(172),
    [anon_sym_PERCENTr9b] = ACTIONS(172),
    [anon_sym_PERCENTr10b] = ACTIONS(172),
    [anon_sym_PERCENTr11b] = ACTIONS(172),
    [anon_sym_PERCENTr12b] = ACTIONS(172),
    [anon_sym_PERCENTr13b] = ACTIONS(172),
    [anon_sym_PERCENTr14b] = ACTIONS(172),
    [anon_sym_PERCENTr15b] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_PERCENTcr0] = ACTIONS(176),
    [anon_sym_PERCENTcr2] = ACTIONS(176),
    [anon_sym_PERCENTcr3] = ACTIONS(176),
    [anon_sym_PERCENTcr4] = ACTIONS(176),
    [anon_sym_PERCENTrip] = ACTIONS(178),
    [anon_sym_PERCENTeip] = ACTIONS(178),
    [anon_sym_PERCENTip] = ACTIONS(178),
    [anon_sym_PERCENTst] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(104),
  },
  [10] = {
    [sym_registerOperand] = STATE(95),
    [sym_segmentRegisterOperand] = STATE(90),
    [sym_generalRegisterOperand] = STATE(90),
    [sym_generalRegister64Bits] = STATE(92),
    [sym_generalRegister32Bits] = STATE(92),
    [sym_generalRegister16Bits] = STATE(92),
    [sym_generalRegister8Bits] = STATE(92),
    [sym_controlRegisterOperand] = STATE(90),
    [sym_instructionRegisterOperand] = STATE(90),
    [sym_floatRegisterOperand] = STATE(90),
    [sym_otherRegisterOperand] = STATE(90),
    [aux_sym_operand_repeat1] = STATE(62),
    [aux_sym_operand_token1] = ACTIONS(182),
    [anon_sym_PERCENTss] = ACTIONS(164),
    [anon_sym_PERCENTcs] = ACTIONS(164),
    [anon_sym_PERCENTds] = ACTIONS(164),
    [anon_sym_PERCENTes] = ACTIONS(82),
    [anon_sym_PERCENTfs] = ACTIONS(164),
    [anon_sym_PERCENTgs] = ACTIONS(164),
    [anon_sym_PERCENTrax] = ACTIONS(166),
    [anon_sym_PERCENTrbx] = ACTIONS(166),
    [anon_sym_PERCENTrcx] = ACTIONS(166),
    [anon_sym_PERCENTrdx] = ACTIONS(166),
    [anon_sym_PERCENTrsi] = ACTIONS(166),
    [anon_sym_PERCENTrdi] = ACTIONS(166),
    [anon_sym_PERCENTrbp] = ACTIONS(166),
    [anon_sym_PERCENTrsp] = ACTIONS(166),
    [anon_sym_PERCENTr8] = ACTIONS(84),
    [anon_sym_PERCENTr9] = ACTIONS(84),
    [anon_sym_PERCENTr10] = ACTIONS(84),
    [anon_sym_PERCENTr11] = ACTIONS(84),
    [anon_sym_PERCENTr12] = ACTIONS(84),
    [anon_sym_PERCENTr13] = ACTIONS(84),
    [anon_sym_PERCENTr14] = ACTIONS(84),
    [anon_sym_PERCENTr15] = ACTIONS(84),
    [anon_sym_PERCENTeax] = ACTIONS(168),
    [anon_sym_PERCENTecx] = ACTIONS(168),
    [anon_sym_PERCENTedx] = ACTIONS(168),
    [anon_sym_PERCENTebx] = ACTIONS(168),
    [anon_sym_PERCENTesi] = ACTIONS(168),
    [anon_sym_PERCENTedi] = ACTIONS(168),
    [anon_sym_PERCENTebp] = ACTIONS(168),
    [anon_sym_PERCENTesp] = ACTIONS(168),
    [anon_sym_PERCENTr8d] = ACTIONS(168),
    [anon_sym_PERCENTr9d] = ACTIONS(168),
    [anon_sym_PERCENTr10d] = ACTIONS(168),
    [anon_sym_PERCENTr11d] = ACTIONS(168),
    [anon_sym_PERCENTr12d] = ACTIONS(168),
    [anon_sym_PERCENTr13d] = ACTIONS(168),
    [anon_sym_PERCENTr14d] = ACTIONS(168),
    [anon_sym_PERCENTr15d] = ACTIONS(168),
    [anon_sym_PERCENTax] = ACTIONS(170),
    [anon_sym_PERCENTcx] = ACTIONS(170),
    [anon_sym_PERCENTdx] = ACTIONS(170),
    [anon_sym_PERCENTbx] = ACTIONS(170),
    [anon_sym_PERCENTsi] = ACTIONS(88),
    [anon_sym_PERCENTdi] = ACTIONS(88),
    [anon_sym_PERCENTsp] = ACTIONS(88),
    [anon_sym_PERCENTbp] = ACTIONS(88),
    [anon_sym_PERCENTr8w] = ACTIONS(170),
    [anon_sym_PERCENTr9w] = ACTIONS(170),
    [anon_sym_PERCENTr10w] = ACTIONS(170),
    [anon_sym_PERCENTr11w] = ACTIONS(170),
    [anon_sym_PERCENTr12w] = ACTIONS(170),
    [anon_sym_PERCENTr13w] = ACTIONS(170),
    [anon_sym_PERCENTr14w] = ACTIONS(170),
    [anon_sym_PERCENTr15w] = ACTIONS(170),
    [anon_sym_PERCENTal] = ACTIONS(172),
    [anon_sym_PERCENTcl] = ACTIONS(172),
    [anon_sym_PERCENTdl] = ACTIONS(172),
    [anon_sym_PERCENTbl] = ACTIONS(172),
    [anon_sym_PERCENTsil] = ACTIONS(172),
    [anon_sym_PERCENTdil] = ACTIONS(172),
    [anon_sym_PERCENTspl] = ACTIONS(172),
    [anon_sym_PERCENTbpl] = ACTIONS(172),
    [anon_sym_PERCENTr8b] = ACTIONS(172),
    [anon_sym_PERCENTr9b] = ACTIONS(172),
    [anon_sym_PERCENTr10b] = ACTIONS(172),
    [anon_sym_PERCENTr11b] = ACTIONS(172),
    [anon_sym_PERCENTr12b] = ACTIONS(172),
    [anon_sym_PERCENTr13b] = ACTIONS(172),
    [anon_sym_PERCENTr14b] = ACTIONS(172),
    [anon_sym_PERCENTr15b] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_PERCENTcr0] = ACTIONS(176),
    [anon_sym_PERCENTcr2] = ACTIONS(176),
    [anon_sym_PERCENTcr3] = ACTIONS(176),
    [anon_sym_PERCENTcr4] = ACTIONS(176),
    [anon_sym_PERCENTrip] = ACTIONS(178),
    [anon_sym_PERCENTeip] = ACTIONS(178),
    [anon_sym_PERCENTip] = ACTIONS(178),
    [anon_sym_PERCENTst] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(104),
  },
  [11] = {
    [sym_registerOperand] = STATE(185),
    [sym_segmentRegisterOperand] = STATE(175),
    [sym_generalRegisterOperand] = STATE(175),
    [sym_generalRegister64Bits] = STATE(174),
    [sym_generalRegister32Bits] = STATE(174),
    [sym_generalRegister16Bits] = STATE(174),
    [sym_generalRegister8Bits] = STATE(174),
    [sym_controlRegisterOperand] = STATE(175),
    [sym_instructionRegisterOperand] = STATE(175),
    [sym_floatRegisterOperand] = STATE(175),
    [sym_otherRegisterOperand] = STATE(175),
    [aux_sym_operand_repeat1] = STATE(62),
    [aux_sym_operand_token1] = ACTIONS(182),
    [anon_sym_PERCENTss] = ACTIONS(186),
    [anon_sym_PERCENTcs] = ACTIONS(186),
    [anon_sym_PERCENTds] = ACTIONS(186),
    [anon_sym_PERCENTes] = ACTIONS(188),
    [anon_sym_PERCENTfs] = ACTIONS(186),
    [anon_sym_PERCENTgs] = ACTIONS(186),
    [anon_sym_PERCENTrax] = ACTIONS(190),
    [anon_sym_PERCENTrbx] = ACTIONS(190),
    [anon_sym_PERCENTrcx] = ACTIONS(190),
    [anon_sym_PERCENTrdx] = ACTIONS(190),
    [anon_sym_PERCENTrsi] = ACTIONS(190),
    [anon_sym_PERCENTrdi] = ACTIONS(190),
    [anon_sym_PERCENTrbp] = ACTIONS(190),
    [anon_sym_PERCENTrsp] = ACTIONS(190),
    [anon_sym_PERCENTr8] = ACTIONS(192),
    [anon_sym_PERCENTr9] = ACTIONS(192),
    [anon_sym_PERCENTr10] = ACTIONS(192),
    [anon_sym_PERCENTr11] = ACTIONS(192),
    [anon_sym_PERCENTr12] = ACTIONS(192),
    [anon_sym_PERCENTr13] = ACTIONS(192),
    [anon_sym_PERCENTr14] = ACTIONS(192),
    [anon_sym_PERCENTr15] = ACTIONS(192),
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
    [anon_sym_PERCENTax] = ACTIONS(196),
    [anon_sym_PERCENTcx] = ACTIONS(196),
    [anon_sym_PERCENTdx] = ACTIONS(196),
    [anon_sym_PERCENTbx] = ACTIONS(196),
    [anon_sym_PERCENTsi] = ACTIONS(198),
    [anon_sym_PERCENTdi] = ACTIONS(198),
    [anon_sym_PERCENTsp] = ACTIONS(198),
    [anon_sym_PERCENTbp] = ACTIONS(198),
    [anon_sym_PERCENTr8w] = ACTIONS(196),
    [anon_sym_PERCENTr9w] = ACTIONS(196),
    [anon_sym_PERCENTr10w] = ACTIONS(196),
    [anon_sym_PERCENTr11w] = ACTIONS(196),
    [anon_sym_PERCENTr12w] = ACTIONS(196),
    [anon_sym_PERCENTr13w] = ACTIONS(196),
    [anon_sym_PERCENTr14w] = ACTIONS(196),
    [anon_sym_PERCENTr15w] = ACTIONS(196),
    [anon_sym_PERCENTal] = ACTIONS(200),
    [anon_sym_PERCENTcl] = ACTIONS(200),
    [anon_sym_PERCENTdl] = ACTIONS(200),
    [anon_sym_PERCENTbl] = ACTIONS(200),
    [anon_sym_PERCENTsil] = ACTIONS(200),
    [anon_sym_PERCENTdil] = ACTIONS(200),
    [anon_sym_PERCENTspl] = ACTIONS(200),
    [anon_sym_PERCENTbpl] = ACTIONS(200),
    [anon_sym_PERCENTr8b] = ACTIONS(200),
    [anon_sym_PERCENTr9b] = ACTIONS(200),
    [anon_sym_PERCENTr10b] = ACTIONS(200),
    [anon_sym_PERCENTr11b] = ACTIONS(200),
    [anon_sym_PERCENTr12b] = ACTIONS(200),
    [anon_sym_PERCENTr13b] = ACTIONS(200),
    [anon_sym_PERCENTr14b] = ACTIONS(200),
    [anon_sym_PERCENTr15b] = ACTIONS(200),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_PERCENTcr0] = ACTIONS(204),
    [anon_sym_PERCENTcr2] = ACTIONS(204),
    [anon_sym_PERCENTcr3] = ACTIONS(204),
    [anon_sym_PERCENTcr4] = ACTIONS(204),
    [anon_sym_PERCENTrip] = ACTIONS(206),
    [anon_sym_PERCENTeip] = ACTIONS(206),
    [anon_sym_PERCENTip] = ACTIONS(206),
    [anon_sym_PERCENTst] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(210),
  },
  [12] = {
    [sym_registerOperand] = STATE(182),
    [sym_segmentRegisterOperand] = STATE(175),
    [sym_generalRegisterOperand] = STATE(175),
    [sym_generalRegister64Bits] = STATE(174),
    [sym_generalRegister32Bits] = STATE(174),
    [sym_generalRegister16Bits] = STATE(174),
    [sym_generalRegister8Bits] = STATE(174),
    [sym_controlRegisterOperand] = STATE(175),
    [sym_instructionRegisterOperand] = STATE(175),
    [sym_floatRegisterOperand] = STATE(175),
    [sym_otherRegisterOperand] = STATE(175),
    [aux_sym_operand_repeat1] = STATE(11),
    [aux_sym_operand_token1] = ACTIONS(212),
    [anon_sym_PERCENTss] = ACTIONS(186),
    [anon_sym_PERCENTcs] = ACTIONS(186),
    [anon_sym_PERCENTds] = ACTIONS(186),
    [anon_sym_PERCENTes] = ACTIONS(188),
    [anon_sym_PERCENTfs] = ACTIONS(186),
    [anon_sym_PERCENTgs] = ACTIONS(186),
    [anon_sym_PERCENTrax] = ACTIONS(190),
    [anon_sym_PERCENTrbx] = ACTIONS(190),
    [anon_sym_PERCENTrcx] = ACTIONS(190),
    [anon_sym_PERCENTrdx] = ACTIONS(190),
    [anon_sym_PERCENTrsi] = ACTIONS(190),
    [anon_sym_PERCENTrdi] = ACTIONS(190),
    [anon_sym_PERCENTrbp] = ACTIONS(190),
    [anon_sym_PERCENTrsp] = ACTIONS(190),
    [anon_sym_PERCENTr8] = ACTIONS(192),
    [anon_sym_PERCENTr9] = ACTIONS(192),
    [anon_sym_PERCENTr10] = ACTIONS(192),
    [anon_sym_PERCENTr11] = ACTIONS(192),
    [anon_sym_PERCENTr12] = ACTIONS(192),
    [anon_sym_PERCENTr13] = ACTIONS(192),
    [anon_sym_PERCENTr14] = ACTIONS(192),
    [anon_sym_PERCENTr15] = ACTIONS(192),
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
    [anon_sym_PERCENTax] = ACTIONS(196),
    [anon_sym_PERCENTcx] = ACTIONS(196),
    [anon_sym_PERCENTdx] = ACTIONS(196),
    [anon_sym_PERCENTbx] = ACTIONS(196),
    [anon_sym_PERCENTsi] = ACTIONS(198),
    [anon_sym_PERCENTdi] = ACTIONS(198),
    [anon_sym_PERCENTsp] = ACTIONS(198),
    [anon_sym_PERCENTbp] = ACTIONS(198),
    [anon_sym_PERCENTr8w] = ACTIONS(196),
    [anon_sym_PERCENTr9w] = ACTIONS(196),
    [anon_sym_PERCENTr10w] = ACTIONS(196),
    [anon_sym_PERCENTr11w] = ACTIONS(196),
    [anon_sym_PERCENTr12w] = ACTIONS(196),
    [anon_sym_PERCENTr13w] = ACTIONS(196),
    [anon_sym_PERCENTr14w] = ACTIONS(196),
    [anon_sym_PERCENTr15w] = ACTIONS(196),
    [anon_sym_PERCENTal] = ACTIONS(200),
    [anon_sym_PERCENTcl] = ACTIONS(200),
    [anon_sym_PERCENTdl] = ACTIONS(200),
    [anon_sym_PERCENTbl] = ACTIONS(200),
    [anon_sym_PERCENTsil] = ACTIONS(200),
    [anon_sym_PERCENTdil] = ACTIONS(200),
    [anon_sym_PERCENTspl] = ACTIONS(200),
    [anon_sym_PERCENTbpl] = ACTIONS(200),
    [anon_sym_PERCENTr8b] = ACTIONS(200),
    [anon_sym_PERCENTr9b] = ACTIONS(200),
    [anon_sym_PERCENTr10b] = ACTIONS(200),
    [anon_sym_PERCENTr11b] = ACTIONS(200),
    [anon_sym_PERCENTr12b] = ACTIONS(200),
    [anon_sym_PERCENTr13b] = ACTIONS(200),
    [anon_sym_PERCENTr14b] = ACTIONS(200),
    [anon_sym_PERCENTr15b] = ACTIONS(200),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_PERCENTcr0] = ACTIONS(204),
    [anon_sym_PERCENTcr2] = ACTIONS(204),
    [anon_sym_PERCENTcr3] = ACTIONS(204),
    [anon_sym_PERCENTcr4] = ACTIONS(204),
    [anon_sym_PERCENTrip] = ACTIONS(206),
    [anon_sym_PERCENTeip] = ACTIONS(206),
    [anon_sym_PERCENTip] = ACTIONS(206),
    [anon_sym_PERCENTst] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(210),
  },
  [13] = {
    [sym_registerOperand] = STATE(243),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(300),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(216),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [14] = {
    [sym_registerOperand] = STATE(248),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(305),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(242),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [15] = {
    [aux_sym_comment_token1] = ACTIONS(244),
    [aux_sym_comment_token2] = ACTIONS(244),
    [sym__line_break] = ACTIONS(246),
    [anon_sym_f] = ACTIONS(244),
    [aux_sym_operand_token1] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(244),
    [anon_sym_DOLLAR] = ACTIONS(244),
    [anon_sym_PERCENTss] = ACTIONS(244),
    [anon_sym_PERCENTcs] = ACTIONS(244),
    [anon_sym_PERCENTds] = ACTIONS(244),
    [anon_sym_PERCENTes] = ACTIONS(244),
    [anon_sym_PERCENTfs] = ACTIONS(244),
    [anon_sym_PERCENTgs] = ACTIONS(244),
    [anon_sym_PERCENTrax] = ACTIONS(244),
    [anon_sym_PERCENTrbx] = ACTIONS(244),
    [anon_sym_PERCENTrcx] = ACTIONS(244),
    [anon_sym_PERCENTrdx] = ACTIONS(244),
    [anon_sym_PERCENTrsi] = ACTIONS(244),
    [anon_sym_PERCENTrdi] = ACTIONS(244),
    [anon_sym_PERCENTrbp] = ACTIONS(244),
    [anon_sym_PERCENTrsp] = ACTIONS(244),
    [anon_sym_PERCENTr8] = ACTIONS(244),
    [anon_sym_PERCENTr9] = ACTIONS(244),
    [anon_sym_PERCENTr10] = ACTIONS(244),
    [anon_sym_PERCENTr11] = ACTIONS(244),
    [anon_sym_PERCENTr12] = ACTIONS(244),
    [anon_sym_PERCENTr13] = ACTIONS(244),
    [anon_sym_PERCENTr14] = ACTIONS(244),
    [anon_sym_PERCENTr15] = ACTIONS(244),
    [anon_sym_PERCENTeax] = ACTIONS(244),
    [anon_sym_PERCENTecx] = ACTIONS(244),
    [anon_sym_PERCENTedx] = ACTIONS(244),
    [anon_sym_PERCENTebx] = ACTIONS(244),
    [anon_sym_PERCENTesi] = ACTIONS(244),
    [anon_sym_PERCENTedi] = ACTIONS(244),
    [anon_sym_PERCENTebp] = ACTIONS(244),
    [anon_sym_PERCENTesp] = ACTIONS(244),
    [anon_sym_PERCENTr8d] = ACTIONS(244),
    [anon_sym_PERCENTr9d] = ACTIONS(244),
    [anon_sym_PERCENTr10d] = ACTIONS(244),
    [anon_sym_PERCENTr11d] = ACTIONS(244),
    [anon_sym_PERCENTr12d] = ACTIONS(244),
    [anon_sym_PERCENTr13d] = ACTIONS(244),
    [anon_sym_PERCENTr14d] = ACTIONS(244),
    [anon_sym_PERCENTr15d] = ACTIONS(244),
    [anon_sym_PERCENTax] = ACTIONS(244),
    [anon_sym_PERCENTcx] = ACTIONS(244),
    [anon_sym_PERCENTdx] = ACTIONS(244),
    [anon_sym_PERCENTbx] = ACTIONS(244),
    [anon_sym_PERCENTsi] = ACTIONS(244),
    [anon_sym_PERCENTdi] = ACTIONS(244),
    [anon_sym_PERCENTsp] = ACTIONS(244),
    [anon_sym_PERCENTbp] = ACTIONS(244),
    [anon_sym_PERCENTr8w] = ACTIONS(244),
    [anon_sym_PERCENTr9w] = ACTIONS(244),
    [anon_sym_PERCENTr10w] = ACTIONS(244),
    [anon_sym_PERCENTr11w] = ACTIONS(244),
    [anon_sym_PERCENTr12w] = ACTIONS(244),
    [anon_sym_PERCENTr13w] = ACTIONS(244),
    [anon_sym_PERCENTr14w] = ACTIONS(244),
    [anon_sym_PERCENTr15w] = ACTIONS(244),
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
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_movsq] = ACTIONS(244),
    [anon_sym_cmpsb] = ACTIONS(244),
    [anon_sym_cmpxchg] = ACTIONS(244),
    [anon_sym_movsl] = ACTIONS(244),
    [anon_sym_PERCENTcr0] = ACTIONS(244),
    [anon_sym_PERCENTcr2] = ACTIONS(244),
    [anon_sym_PERCENTcr3] = ACTIONS(244),
    [anon_sym_PERCENTcr4] = ACTIONS(244),
    [anon_sym_PERCENTrip] = ACTIONS(244),
    [anon_sym_PERCENTeip] = ACTIONS(244),
    [anon_sym_PERCENTip] = ACTIONS(244),
    [anon_sym_PERCENTst] = ACTIONS(244),
    [anon_sym_PERCENT] = ACTIONS(244),
  },
  [16] = {
    [aux_sym_comment_token1] = ACTIONS(248),
    [aux_sym_comment_token2] = ACTIONS(248),
    [sym__line_break] = ACTIONS(250),
    [anon_sym_f] = ACTIONS(248),
    [aux_sym_operand_token1] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_DOLLAR] = ACTIONS(248),
    [anon_sym_PERCENTss] = ACTIONS(248),
    [anon_sym_PERCENTcs] = ACTIONS(248),
    [anon_sym_PERCENTds] = ACTIONS(248),
    [anon_sym_PERCENTes] = ACTIONS(248),
    [anon_sym_PERCENTfs] = ACTIONS(248),
    [anon_sym_PERCENTgs] = ACTIONS(248),
    [anon_sym_PERCENTrax] = ACTIONS(248),
    [anon_sym_PERCENTrbx] = ACTIONS(248),
    [anon_sym_PERCENTrcx] = ACTIONS(248),
    [anon_sym_PERCENTrdx] = ACTIONS(248),
    [anon_sym_PERCENTrsi] = ACTIONS(248),
    [anon_sym_PERCENTrdi] = ACTIONS(248),
    [anon_sym_PERCENTrbp] = ACTIONS(248),
    [anon_sym_PERCENTrsp] = ACTIONS(248),
    [anon_sym_PERCENTr8] = ACTIONS(248),
    [anon_sym_PERCENTr9] = ACTIONS(248),
    [anon_sym_PERCENTr10] = ACTIONS(248),
    [anon_sym_PERCENTr11] = ACTIONS(248),
    [anon_sym_PERCENTr12] = ACTIONS(248),
    [anon_sym_PERCENTr13] = ACTIONS(248),
    [anon_sym_PERCENTr14] = ACTIONS(248),
    [anon_sym_PERCENTr15] = ACTIONS(248),
    [anon_sym_PERCENTeax] = ACTIONS(248),
    [anon_sym_PERCENTecx] = ACTIONS(248),
    [anon_sym_PERCENTedx] = ACTIONS(248),
    [anon_sym_PERCENTebx] = ACTIONS(248),
    [anon_sym_PERCENTesi] = ACTIONS(248),
    [anon_sym_PERCENTedi] = ACTIONS(248),
    [anon_sym_PERCENTebp] = ACTIONS(248),
    [anon_sym_PERCENTesp] = ACTIONS(248),
    [anon_sym_PERCENTr8d] = ACTIONS(248),
    [anon_sym_PERCENTr9d] = ACTIONS(248),
    [anon_sym_PERCENTr10d] = ACTIONS(248),
    [anon_sym_PERCENTr11d] = ACTIONS(248),
    [anon_sym_PERCENTr12d] = ACTIONS(248),
    [anon_sym_PERCENTr13d] = ACTIONS(248),
    [anon_sym_PERCENTr14d] = ACTIONS(248),
    [anon_sym_PERCENTr15d] = ACTIONS(248),
    [anon_sym_PERCENTax] = ACTIONS(248),
    [anon_sym_PERCENTcx] = ACTIONS(248),
    [anon_sym_PERCENTdx] = ACTIONS(248),
    [anon_sym_PERCENTbx] = ACTIONS(248),
    [anon_sym_PERCENTsi] = ACTIONS(248),
    [anon_sym_PERCENTdi] = ACTIONS(248),
    [anon_sym_PERCENTsp] = ACTIONS(248),
    [anon_sym_PERCENTbp] = ACTIONS(248),
    [anon_sym_PERCENTr8w] = ACTIONS(248),
    [anon_sym_PERCENTr9w] = ACTIONS(248),
    [anon_sym_PERCENTr10w] = ACTIONS(248),
    [anon_sym_PERCENTr11w] = ACTIONS(248),
    [anon_sym_PERCENTr12w] = ACTIONS(248),
    [anon_sym_PERCENTr13w] = ACTIONS(248),
    [anon_sym_PERCENTr14w] = ACTIONS(248),
    [anon_sym_PERCENTr15w] = ACTIONS(248),
    [anon_sym_PERCENTal] = ACTIONS(248),
    [anon_sym_PERCENTcl] = ACTIONS(248),
    [anon_sym_PERCENTdl] = ACTIONS(248),
    [anon_sym_PERCENTbl] = ACTIONS(248),
    [anon_sym_PERCENTsil] = ACTIONS(248),
    [anon_sym_PERCENTdil] = ACTIONS(248),
    [anon_sym_PERCENTspl] = ACTIONS(248),
    [anon_sym_PERCENTbpl] = ACTIONS(248),
    [anon_sym_PERCENTr8b] = ACTIONS(248),
    [anon_sym_PERCENTr9b] = ACTIONS(248),
    [anon_sym_PERCENTr10b] = ACTIONS(248),
    [anon_sym_PERCENTr11b] = ACTIONS(248),
    [anon_sym_PERCENTr12b] = ACTIONS(248),
    [anon_sym_PERCENTr13b] = ACTIONS(248),
    [anon_sym_PERCENTr14b] = ACTIONS(248),
    [anon_sym_PERCENTr15b] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_movsq] = ACTIONS(248),
    [anon_sym_cmpsb] = ACTIONS(248),
    [anon_sym_cmpxchg] = ACTIONS(248),
    [anon_sym_movsl] = ACTIONS(248),
    [anon_sym_PERCENTcr0] = ACTIONS(248),
    [anon_sym_PERCENTcr2] = ACTIONS(248),
    [anon_sym_PERCENTcr3] = ACTIONS(248),
    [anon_sym_PERCENTcr4] = ACTIONS(248),
    [anon_sym_PERCENTrip] = ACTIONS(248),
    [anon_sym_PERCENTeip] = ACTIONS(248),
    [anon_sym_PERCENTip] = ACTIONS(248),
    [anon_sym_PERCENTst] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(248),
  },
  [17] = {
    [aux_sym_comment_token1] = ACTIONS(252),
    [aux_sym_comment_token2] = ACTIONS(252),
    [sym__line_break] = ACTIONS(254),
    [anon_sym_f] = ACTIONS(252),
    [aux_sym_operand_token1] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(252),
    [anon_sym_DOLLAR] = ACTIONS(252),
    [anon_sym_PERCENTss] = ACTIONS(252),
    [anon_sym_PERCENTcs] = ACTIONS(252),
    [anon_sym_PERCENTds] = ACTIONS(252),
    [anon_sym_PERCENTes] = ACTIONS(252),
    [anon_sym_PERCENTfs] = ACTIONS(252),
    [anon_sym_PERCENTgs] = ACTIONS(252),
    [anon_sym_PERCENTrax] = ACTIONS(252),
    [anon_sym_PERCENTrbx] = ACTIONS(252),
    [anon_sym_PERCENTrcx] = ACTIONS(252),
    [anon_sym_PERCENTrdx] = ACTIONS(252),
    [anon_sym_PERCENTrsi] = ACTIONS(252),
    [anon_sym_PERCENTrdi] = ACTIONS(252),
    [anon_sym_PERCENTrbp] = ACTIONS(252),
    [anon_sym_PERCENTrsp] = ACTIONS(252),
    [anon_sym_PERCENTr8] = ACTIONS(252),
    [anon_sym_PERCENTr9] = ACTIONS(252),
    [anon_sym_PERCENTr10] = ACTIONS(252),
    [anon_sym_PERCENTr11] = ACTIONS(252),
    [anon_sym_PERCENTr12] = ACTIONS(252),
    [anon_sym_PERCENTr13] = ACTIONS(252),
    [anon_sym_PERCENTr14] = ACTIONS(252),
    [anon_sym_PERCENTr15] = ACTIONS(252),
    [anon_sym_PERCENTeax] = ACTIONS(252),
    [anon_sym_PERCENTecx] = ACTIONS(252),
    [anon_sym_PERCENTedx] = ACTIONS(252),
    [anon_sym_PERCENTebx] = ACTIONS(252),
    [anon_sym_PERCENTesi] = ACTIONS(252),
    [anon_sym_PERCENTedi] = ACTIONS(252),
    [anon_sym_PERCENTebp] = ACTIONS(252),
    [anon_sym_PERCENTesp] = ACTIONS(252),
    [anon_sym_PERCENTr8d] = ACTIONS(252),
    [anon_sym_PERCENTr9d] = ACTIONS(252),
    [anon_sym_PERCENTr10d] = ACTIONS(252),
    [anon_sym_PERCENTr11d] = ACTIONS(252),
    [anon_sym_PERCENTr12d] = ACTIONS(252),
    [anon_sym_PERCENTr13d] = ACTIONS(252),
    [anon_sym_PERCENTr14d] = ACTIONS(252),
    [anon_sym_PERCENTr15d] = ACTIONS(252),
    [anon_sym_PERCENTax] = ACTIONS(252),
    [anon_sym_PERCENTcx] = ACTIONS(252),
    [anon_sym_PERCENTdx] = ACTIONS(252),
    [anon_sym_PERCENTbx] = ACTIONS(252),
    [anon_sym_PERCENTsi] = ACTIONS(252),
    [anon_sym_PERCENTdi] = ACTIONS(252),
    [anon_sym_PERCENTsp] = ACTIONS(252),
    [anon_sym_PERCENTbp] = ACTIONS(252),
    [anon_sym_PERCENTr8w] = ACTIONS(252),
    [anon_sym_PERCENTr9w] = ACTIONS(252),
    [anon_sym_PERCENTr10w] = ACTIONS(252),
    [anon_sym_PERCENTr11w] = ACTIONS(252),
    [anon_sym_PERCENTr12w] = ACTIONS(252),
    [anon_sym_PERCENTr13w] = ACTIONS(252),
    [anon_sym_PERCENTr14w] = ACTIONS(252),
    [anon_sym_PERCENTr15w] = ACTIONS(252),
    [anon_sym_PERCENTal] = ACTIONS(252),
    [anon_sym_PERCENTcl] = ACTIONS(252),
    [anon_sym_PERCENTdl] = ACTIONS(252),
    [anon_sym_PERCENTbl] = ACTIONS(252),
    [anon_sym_PERCENTsil] = ACTIONS(252),
    [anon_sym_PERCENTdil] = ACTIONS(252),
    [anon_sym_PERCENTspl] = ACTIONS(252),
    [anon_sym_PERCENTbpl] = ACTIONS(252),
    [anon_sym_PERCENTr8b] = ACTIONS(252),
    [anon_sym_PERCENTr9b] = ACTIONS(252),
    [anon_sym_PERCENTr10b] = ACTIONS(252),
    [anon_sym_PERCENTr11b] = ACTIONS(252),
    [anon_sym_PERCENTr12b] = ACTIONS(252),
    [anon_sym_PERCENTr13b] = ACTIONS(252),
    [anon_sym_PERCENTr14b] = ACTIONS(252),
    [anon_sym_PERCENTr15b] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_movsq] = ACTIONS(252),
    [anon_sym_cmpsb] = ACTIONS(252),
    [anon_sym_cmpxchg] = ACTIONS(252),
    [anon_sym_movsl] = ACTIONS(252),
    [anon_sym_PERCENTcr0] = ACTIONS(252),
    [anon_sym_PERCENTcr2] = ACTIONS(252),
    [anon_sym_PERCENTcr3] = ACTIONS(252),
    [anon_sym_PERCENTcr4] = ACTIONS(252),
    [anon_sym_PERCENTrip] = ACTIONS(252),
    [anon_sym_PERCENTeip] = ACTIONS(252),
    [anon_sym_PERCENTip] = ACTIONS(252),
    [anon_sym_PERCENTst] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
  },
  [18] = {
    [aux_sym_comment_token1] = ACTIONS(256),
    [aux_sym_comment_token2] = ACTIONS(256),
    [sym__line_break] = ACTIONS(258),
    [anon_sym_f] = ACTIONS(256),
    [aux_sym_operand_token1] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_DOLLAR] = ACTIONS(256),
    [anon_sym_PERCENTss] = ACTIONS(256),
    [anon_sym_PERCENTcs] = ACTIONS(256),
    [anon_sym_PERCENTds] = ACTIONS(256),
    [anon_sym_PERCENTes] = ACTIONS(256),
    [anon_sym_PERCENTfs] = ACTIONS(256),
    [anon_sym_PERCENTgs] = ACTIONS(256),
    [anon_sym_PERCENTrax] = ACTIONS(256),
    [anon_sym_PERCENTrbx] = ACTIONS(256),
    [anon_sym_PERCENTrcx] = ACTIONS(256),
    [anon_sym_PERCENTrdx] = ACTIONS(256),
    [anon_sym_PERCENTrsi] = ACTIONS(256),
    [anon_sym_PERCENTrdi] = ACTIONS(256),
    [anon_sym_PERCENTrbp] = ACTIONS(256),
    [anon_sym_PERCENTrsp] = ACTIONS(256),
    [anon_sym_PERCENTr8] = ACTIONS(256),
    [anon_sym_PERCENTr9] = ACTIONS(256),
    [anon_sym_PERCENTr10] = ACTIONS(256),
    [anon_sym_PERCENTr11] = ACTIONS(256),
    [anon_sym_PERCENTr12] = ACTIONS(256),
    [anon_sym_PERCENTr13] = ACTIONS(256),
    [anon_sym_PERCENTr14] = ACTIONS(256),
    [anon_sym_PERCENTr15] = ACTIONS(256),
    [anon_sym_PERCENTeax] = ACTIONS(256),
    [anon_sym_PERCENTecx] = ACTIONS(256),
    [anon_sym_PERCENTedx] = ACTIONS(256),
    [anon_sym_PERCENTebx] = ACTIONS(256),
    [anon_sym_PERCENTesi] = ACTIONS(256),
    [anon_sym_PERCENTedi] = ACTIONS(256),
    [anon_sym_PERCENTebp] = ACTIONS(256),
    [anon_sym_PERCENTesp] = ACTIONS(256),
    [anon_sym_PERCENTr8d] = ACTIONS(256),
    [anon_sym_PERCENTr9d] = ACTIONS(256),
    [anon_sym_PERCENTr10d] = ACTIONS(256),
    [anon_sym_PERCENTr11d] = ACTIONS(256),
    [anon_sym_PERCENTr12d] = ACTIONS(256),
    [anon_sym_PERCENTr13d] = ACTIONS(256),
    [anon_sym_PERCENTr14d] = ACTIONS(256),
    [anon_sym_PERCENTr15d] = ACTIONS(256),
    [anon_sym_PERCENTax] = ACTIONS(256),
    [anon_sym_PERCENTcx] = ACTIONS(256),
    [anon_sym_PERCENTdx] = ACTIONS(256),
    [anon_sym_PERCENTbx] = ACTIONS(256),
    [anon_sym_PERCENTsi] = ACTIONS(256),
    [anon_sym_PERCENTdi] = ACTIONS(256),
    [anon_sym_PERCENTsp] = ACTIONS(256),
    [anon_sym_PERCENTbp] = ACTIONS(256),
    [anon_sym_PERCENTr8w] = ACTIONS(256),
    [anon_sym_PERCENTr9w] = ACTIONS(256),
    [anon_sym_PERCENTr10w] = ACTIONS(256),
    [anon_sym_PERCENTr11w] = ACTIONS(256),
    [anon_sym_PERCENTr12w] = ACTIONS(256),
    [anon_sym_PERCENTr13w] = ACTIONS(256),
    [anon_sym_PERCENTr14w] = ACTIONS(256),
    [anon_sym_PERCENTr15w] = ACTIONS(256),
    [anon_sym_PERCENTal] = ACTIONS(256),
    [anon_sym_PERCENTcl] = ACTIONS(256),
    [anon_sym_PERCENTdl] = ACTIONS(256),
    [anon_sym_PERCENTbl] = ACTIONS(256),
    [anon_sym_PERCENTsil] = ACTIONS(256),
    [anon_sym_PERCENTdil] = ACTIONS(256),
    [anon_sym_PERCENTspl] = ACTIONS(256),
    [anon_sym_PERCENTbpl] = ACTIONS(256),
    [anon_sym_PERCENTr8b] = ACTIONS(256),
    [anon_sym_PERCENTr9b] = ACTIONS(256),
    [anon_sym_PERCENTr10b] = ACTIONS(256),
    [anon_sym_PERCENTr11b] = ACTIONS(256),
    [anon_sym_PERCENTr12b] = ACTIONS(256),
    [anon_sym_PERCENTr13b] = ACTIONS(256),
    [anon_sym_PERCENTr14b] = ACTIONS(256),
    [anon_sym_PERCENTr15b] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_movsq] = ACTIONS(256),
    [anon_sym_cmpsb] = ACTIONS(256),
    [anon_sym_cmpxchg] = ACTIONS(256),
    [anon_sym_movsl] = ACTIONS(256),
    [anon_sym_PERCENTcr0] = ACTIONS(256),
    [anon_sym_PERCENTcr2] = ACTIONS(256),
    [anon_sym_PERCENTcr3] = ACTIONS(256),
    [anon_sym_PERCENTcr4] = ACTIONS(256),
    [anon_sym_PERCENTrip] = ACTIONS(256),
    [anon_sym_PERCENTeip] = ACTIONS(256),
    [anon_sym_PERCENTip] = ACTIONS(256),
    [anon_sym_PERCENTst] = ACTIONS(256),
    [anon_sym_PERCENT] = ACTIONS(256),
  },
  [19] = {
    [aux_sym_comment_token1] = ACTIONS(260),
    [aux_sym_comment_token2] = ACTIONS(260),
    [sym__line_break] = ACTIONS(262),
    [anon_sym_f] = ACTIONS(260),
    [aux_sym_operand_token1] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(260),
    [anon_sym_DOLLAR] = ACTIONS(260),
    [anon_sym_PERCENTss] = ACTIONS(260),
    [anon_sym_PERCENTcs] = ACTIONS(260),
    [anon_sym_PERCENTds] = ACTIONS(260),
    [anon_sym_PERCENTes] = ACTIONS(260),
    [anon_sym_PERCENTfs] = ACTIONS(260),
    [anon_sym_PERCENTgs] = ACTIONS(260),
    [anon_sym_PERCENTrax] = ACTIONS(260),
    [anon_sym_PERCENTrbx] = ACTIONS(260),
    [anon_sym_PERCENTrcx] = ACTIONS(260),
    [anon_sym_PERCENTrdx] = ACTIONS(260),
    [anon_sym_PERCENTrsi] = ACTIONS(260),
    [anon_sym_PERCENTrdi] = ACTIONS(260),
    [anon_sym_PERCENTrbp] = ACTIONS(260),
    [anon_sym_PERCENTrsp] = ACTIONS(260),
    [anon_sym_PERCENTr8] = ACTIONS(260),
    [anon_sym_PERCENTr9] = ACTIONS(260),
    [anon_sym_PERCENTr10] = ACTIONS(260),
    [anon_sym_PERCENTr11] = ACTIONS(260),
    [anon_sym_PERCENTr12] = ACTIONS(260),
    [anon_sym_PERCENTr13] = ACTIONS(260),
    [anon_sym_PERCENTr14] = ACTIONS(260),
    [anon_sym_PERCENTr15] = ACTIONS(260),
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
    [anon_sym_PERCENTax] = ACTIONS(260),
    [anon_sym_PERCENTcx] = ACTIONS(260),
    [anon_sym_PERCENTdx] = ACTIONS(260),
    [anon_sym_PERCENTbx] = ACTIONS(260),
    [anon_sym_PERCENTsi] = ACTIONS(260),
    [anon_sym_PERCENTdi] = ACTIONS(260),
    [anon_sym_PERCENTsp] = ACTIONS(260),
    [anon_sym_PERCENTbp] = ACTIONS(260),
    [anon_sym_PERCENTr8w] = ACTIONS(260),
    [anon_sym_PERCENTr9w] = ACTIONS(260),
    [anon_sym_PERCENTr10w] = ACTIONS(260),
    [anon_sym_PERCENTr11w] = ACTIONS(260),
    [anon_sym_PERCENTr12w] = ACTIONS(260),
    [anon_sym_PERCENTr13w] = ACTIONS(260),
    [anon_sym_PERCENTr14w] = ACTIONS(260),
    [anon_sym_PERCENTr15w] = ACTIONS(260),
    [anon_sym_PERCENTal] = ACTIONS(260),
    [anon_sym_PERCENTcl] = ACTIONS(260),
    [anon_sym_PERCENTdl] = ACTIONS(260),
    [anon_sym_PERCENTbl] = ACTIONS(260),
    [anon_sym_PERCENTsil] = ACTIONS(260),
    [anon_sym_PERCENTdil] = ACTIONS(260),
    [anon_sym_PERCENTspl] = ACTIONS(260),
    [anon_sym_PERCENTbpl] = ACTIONS(260),
    [anon_sym_PERCENTr8b] = ACTIONS(260),
    [anon_sym_PERCENTr9b] = ACTIONS(260),
    [anon_sym_PERCENTr10b] = ACTIONS(260),
    [anon_sym_PERCENTr11b] = ACTIONS(260),
    [anon_sym_PERCENTr12b] = ACTIONS(260),
    [anon_sym_PERCENTr13b] = ACTIONS(260),
    [anon_sym_PERCENTr14b] = ACTIONS(260),
    [anon_sym_PERCENTr15b] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_movsq] = ACTIONS(260),
    [anon_sym_cmpsb] = ACTIONS(260),
    [anon_sym_cmpxchg] = ACTIONS(260),
    [anon_sym_movsl] = ACTIONS(260),
    [anon_sym_PERCENTcr0] = ACTIONS(260),
    [anon_sym_PERCENTcr2] = ACTIONS(260),
    [anon_sym_PERCENTcr3] = ACTIONS(260),
    [anon_sym_PERCENTcr4] = ACTIONS(260),
    [anon_sym_PERCENTrip] = ACTIONS(260),
    [anon_sym_PERCENTeip] = ACTIONS(260),
    [anon_sym_PERCENTip] = ACTIONS(260),
    [anon_sym_PERCENTst] = ACTIONS(260),
    [anon_sym_PERCENT] = ACTIONS(260),
  },
  [20] = {
    [aux_sym_comment_token1] = ACTIONS(264),
    [aux_sym_comment_token2] = ACTIONS(264),
    [sym__line_break] = ACTIONS(266),
    [anon_sym_f] = ACTIONS(264),
    [aux_sym_operand_token1] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(264),
    [anon_sym_PERCENTss] = ACTIONS(264),
    [anon_sym_PERCENTcs] = ACTIONS(264),
    [anon_sym_PERCENTds] = ACTIONS(264),
    [anon_sym_PERCENTes] = ACTIONS(264),
    [anon_sym_PERCENTfs] = ACTIONS(264),
    [anon_sym_PERCENTgs] = ACTIONS(264),
    [anon_sym_PERCENTrax] = ACTIONS(264),
    [anon_sym_PERCENTrbx] = ACTIONS(264),
    [anon_sym_PERCENTrcx] = ACTIONS(264),
    [anon_sym_PERCENTrdx] = ACTIONS(264),
    [anon_sym_PERCENTrsi] = ACTIONS(264),
    [anon_sym_PERCENTrdi] = ACTIONS(264),
    [anon_sym_PERCENTrbp] = ACTIONS(264),
    [anon_sym_PERCENTrsp] = ACTIONS(264),
    [anon_sym_PERCENTr8] = ACTIONS(264),
    [anon_sym_PERCENTr9] = ACTIONS(264),
    [anon_sym_PERCENTr10] = ACTIONS(264),
    [anon_sym_PERCENTr11] = ACTIONS(264),
    [anon_sym_PERCENTr12] = ACTIONS(264),
    [anon_sym_PERCENTr13] = ACTIONS(264),
    [anon_sym_PERCENTr14] = ACTIONS(264),
    [anon_sym_PERCENTr15] = ACTIONS(264),
    [anon_sym_PERCENTeax] = ACTIONS(264),
    [anon_sym_PERCENTecx] = ACTIONS(264),
    [anon_sym_PERCENTedx] = ACTIONS(264),
    [anon_sym_PERCENTebx] = ACTIONS(264),
    [anon_sym_PERCENTesi] = ACTIONS(264),
    [anon_sym_PERCENTedi] = ACTIONS(264),
    [anon_sym_PERCENTebp] = ACTIONS(264),
    [anon_sym_PERCENTesp] = ACTIONS(264),
    [anon_sym_PERCENTr8d] = ACTIONS(264),
    [anon_sym_PERCENTr9d] = ACTIONS(264),
    [anon_sym_PERCENTr10d] = ACTIONS(264),
    [anon_sym_PERCENTr11d] = ACTIONS(264),
    [anon_sym_PERCENTr12d] = ACTIONS(264),
    [anon_sym_PERCENTr13d] = ACTIONS(264),
    [anon_sym_PERCENTr14d] = ACTIONS(264),
    [anon_sym_PERCENTr15d] = ACTIONS(264),
    [anon_sym_PERCENTax] = ACTIONS(264),
    [anon_sym_PERCENTcx] = ACTIONS(264),
    [anon_sym_PERCENTdx] = ACTIONS(264),
    [anon_sym_PERCENTbx] = ACTIONS(264),
    [anon_sym_PERCENTsi] = ACTIONS(264),
    [anon_sym_PERCENTdi] = ACTIONS(264),
    [anon_sym_PERCENTsp] = ACTIONS(264),
    [anon_sym_PERCENTbp] = ACTIONS(264),
    [anon_sym_PERCENTr8w] = ACTIONS(264),
    [anon_sym_PERCENTr9w] = ACTIONS(264),
    [anon_sym_PERCENTr10w] = ACTIONS(264),
    [anon_sym_PERCENTr11w] = ACTIONS(264),
    [anon_sym_PERCENTr12w] = ACTIONS(264),
    [anon_sym_PERCENTr13w] = ACTIONS(264),
    [anon_sym_PERCENTr14w] = ACTIONS(264),
    [anon_sym_PERCENTr15w] = ACTIONS(264),
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
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_movsq] = ACTIONS(264),
    [anon_sym_cmpsb] = ACTIONS(264),
    [anon_sym_cmpxchg] = ACTIONS(264),
    [anon_sym_movsl] = ACTIONS(264),
    [anon_sym_PERCENTcr0] = ACTIONS(264),
    [anon_sym_PERCENTcr2] = ACTIONS(264),
    [anon_sym_PERCENTcr3] = ACTIONS(264),
    [anon_sym_PERCENTcr4] = ACTIONS(264),
    [anon_sym_PERCENTrip] = ACTIONS(264),
    [anon_sym_PERCENTeip] = ACTIONS(264),
    [anon_sym_PERCENTip] = ACTIONS(264),
    [anon_sym_PERCENTst] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(264),
  },
  [21] = {
    [aux_sym_comment_token1] = ACTIONS(268),
    [aux_sym_comment_token2] = ACTIONS(268),
    [sym__line_break] = ACTIONS(270),
    [anon_sym_f] = ACTIONS(268),
    [aux_sym_operand_token1] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(268),
    [anon_sym_DOLLAR] = ACTIONS(268),
    [anon_sym_PERCENTss] = ACTIONS(268),
    [anon_sym_PERCENTcs] = ACTIONS(268),
    [anon_sym_PERCENTds] = ACTIONS(268),
    [anon_sym_PERCENTes] = ACTIONS(268),
    [anon_sym_PERCENTfs] = ACTIONS(268),
    [anon_sym_PERCENTgs] = ACTIONS(268),
    [anon_sym_PERCENTrax] = ACTIONS(268),
    [anon_sym_PERCENTrbx] = ACTIONS(268),
    [anon_sym_PERCENTrcx] = ACTIONS(268),
    [anon_sym_PERCENTrdx] = ACTIONS(268),
    [anon_sym_PERCENTrsi] = ACTIONS(268),
    [anon_sym_PERCENTrdi] = ACTIONS(268),
    [anon_sym_PERCENTrbp] = ACTIONS(268),
    [anon_sym_PERCENTrsp] = ACTIONS(268),
    [anon_sym_PERCENTr8] = ACTIONS(268),
    [anon_sym_PERCENTr9] = ACTIONS(268),
    [anon_sym_PERCENTr10] = ACTIONS(268),
    [anon_sym_PERCENTr11] = ACTIONS(268),
    [anon_sym_PERCENTr12] = ACTIONS(268),
    [anon_sym_PERCENTr13] = ACTIONS(268),
    [anon_sym_PERCENTr14] = ACTIONS(268),
    [anon_sym_PERCENTr15] = ACTIONS(268),
    [anon_sym_PERCENTeax] = ACTIONS(268),
    [anon_sym_PERCENTecx] = ACTIONS(268),
    [anon_sym_PERCENTedx] = ACTIONS(268),
    [anon_sym_PERCENTebx] = ACTIONS(268),
    [anon_sym_PERCENTesi] = ACTIONS(268),
    [anon_sym_PERCENTedi] = ACTIONS(268),
    [anon_sym_PERCENTebp] = ACTIONS(268),
    [anon_sym_PERCENTesp] = ACTIONS(268),
    [anon_sym_PERCENTr8d] = ACTIONS(268),
    [anon_sym_PERCENTr9d] = ACTIONS(268),
    [anon_sym_PERCENTr10d] = ACTIONS(268),
    [anon_sym_PERCENTr11d] = ACTIONS(268),
    [anon_sym_PERCENTr12d] = ACTIONS(268),
    [anon_sym_PERCENTr13d] = ACTIONS(268),
    [anon_sym_PERCENTr14d] = ACTIONS(268),
    [anon_sym_PERCENTr15d] = ACTIONS(268),
    [anon_sym_PERCENTax] = ACTIONS(268),
    [anon_sym_PERCENTcx] = ACTIONS(268),
    [anon_sym_PERCENTdx] = ACTIONS(268),
    [anon_sym_PERCENTbx] = ACTIONS(268),
    [anon_sym_PERCENTsi] = ACTIONS(268),
    [anon_sym_PERCENTdi] = ACTIONS(268),
    [anon_sym_PERCENTsp] = ACTIONS(268),
    [anon_sym_PERCENTbp] = ACTIONS(268),
    [anon_sym_PERCENTr8w] = ACTIONS(268),
    [anon_sym_PERCENTr9w] = ACTIONS(268),
    [anon_sym_PERCENTr10w] = ACTIONS(268),
    [anon_sym_PERCENTr11w] = ACTIONS(268),
    [anon_sym_PERCENTr12w] = ACTIONS(268),
    [anon_sym_PERCENTr13w] = ACTIONS(268),
    [anon_sym_PERCENTr14w] = ACTIONS(268),
    [anon_sym_PERCENTr15w] = ACTIONS(268),
    [anon_sym_PERCENTal] = ACTIONS(268),
    [anon_sym_PERCENTcl] = ACTIONS(268),
    [anon_sym_PERCENTdl] = ACTIONS(268),
    [anon_sym_PERCENTbl] = ACTIONS(268),
    [anon_sym_PERCENTsil] = ACTIONS(268),
    [anon_sym_PERCENTdil] = ACTIONS(268),
    [anon_sym_PERCENTspl] = ACTIONS(268),
    [anon_sym_PERCENTbpl] = ACTIONS(268),
    [anon_sym_PERCENTr8b] = ACTIONS(268),
    [anon_sym_PERCENTr9b] = ACTIONS(268),
    [anon_sym_PERCENTr10b] = ACTIONS(268),
    [anon_sym_PERCENTr11b] = ACTIONS(268),
    [anon_sym_PERCENTr12b] = ACTIONS(268),
    [anon_sym_PERCENTr13b] = ACTIONS(268),
    [anon_sym_PERCENTr14b] = ACTIONS(268),
    [anon_sym_PERCENTr15b] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_movsq] = ACTIONS(268),
    [anon_sym_cmpsb] = ACTIONS(268),
    [anon_sym_cmpxchg] = ACTIONS(268),
    [anon_sym_movsl] = ACTIONS(268),
    [anon_sym_PERCENTcr0] = ACTIONS(268),
    [anon_sym_PERCENTcr2] = ACTIONS(268),
    [anon_sym_PERCENTcr3] = ACTIONS(268),
    [anon_sym_PERCENTcr4] = ACTIONS(268),
    [anon_sym_PERCENTrip] = ACTIONS(268),
    [anon_sym_PERCENTeip] = ACTIONS(268),
    [anon_sym_PERCENTip] = ACTIONS(268),
    [anon_sym_PERCENTst] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(268),
  },
  [22] = {
    [aux_sym_comment_token1] = ACTIONS(272),
    [aux_sym_comment_token2] = ACTIONS(272),
    [sym__line_break] = ACTIONS(274),
    [anon_sym_f] = ACTIONS(272),
    [aux_sym_operand_token1] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(272),
    [anon_sym_PERCENTss] = ACTIONS(272),
    [anon_sym_PERCENTcs] = ACTIONS(272),
    [anon_sym_PERCENTds] = ACTIONS(272),
    [anon_sym_PERCENTes] = ACTIONS(272),
    [anon_sym_PERCENTfs] = ACTIONS(272),
    [anon_sym_PERCENTgs] = ACTIONS(272),
    [anon_sym_PERCENTrax] = ACTIONS(272),
    [anon_sym_PERCENTrbx] = ACTIONS(272),
    [anon_sym_PERCENTrcx] = ACTIONS(272),
    [anon_sym_PERCENTrdx] = ACTIONS(272),
    [anon_sym_PERCENTrsi] = ACTIONS(272),
    [anon_sym_PERCENTrdi] = ACTIONS(272),
    [anon_sym_PERCENTrbp] = ACTIONS(272),
    [anon_sym_PERCENTrsp] = ACTIONS(272),
    [anon_sym_PERCENTr8] = ACTIONS(272),
    [anon_sym_PERCENTr9] = ACTIONS(272),
    [anon_sym_PERCENTr10] = ACTIONS(272),
    [anon_sym_PERCENTr11] = ACTIONS(272),
    [anon_sym_PERCENTr12] = ACTIONS(272),
    [anon_sym_PERCENTr13] = ACTIONS(272),
    [anon_sym_PERCENTr14] = ACTIONS(272),
    [anon_sym_PERCENTr15] = ACTIONS(272),
    [anon_sym_PERCENTeax] = ACTIONS(272),
    [anon_sym_PERCENTecx] = ACTIONS(272),
    [anon_sym_PERCENTedx] = ACTIONS(272),
    [anon_sym_PERCENTebx] = ACTIONS(272),
    [anon_sym_PERCENTesi] = ACTIONS(272),
    [anon_sym_PERCENTedi] = ACTIONS(272),
    [anon_sym_PERCENTebp] = ACTIONS(272),
    [anon_sym_PERCENTesp] = ACTIONS(272),
    [anon_sym_PERCENTr8d] = ACTIONS(272),
    [anon_sym_PERCENTr9d] = ACTIONS(272),
    [anon_sym_PERCENTr10d] = ACTIONS(272),
    [anon_sym_PERCENTr11d] = ACTIONS(272),
    [anon_sym_PERCENTr12d] = ACTIONS(272),
    [anon_sym_PERCENTr13d] = ACTIONS(272),
    [anon_sym_PERCENTr14d] = ACTIONS(272),
    [anon_sym_PERCENTr15d] = ACTIONS(272),
    [anon_sym_PERCENTax] = ACTIONS(272),
    [anon_sym_PERCENTcx] = ACTIONS(272),
    [anon_sym_PERCENTdx] = ACTIONS(272),
    [anon_sym_PERCENTbx] = ACTIONS(272),
    [anon_sym_PERCENTsi] = ACTIONS(272),
    [anon_sym_PERCENTdi] = ACTIONS(272),
    [anon_sym_PERCENTsp] = ACTIONS(272),
    [anon_sym_PERCENTbp] = ACTIONS(272),
    [anon_sym_PERCENTr8w] = ACTIONS(272),
    [anon_sym_PERCENTr9w] = ACTIONS(272),
    [anon_sym_PERCENTr10w] = ACTIONS(272),
    [anon_sym_PERCENTr11w] = ACTIONS(272),
    [anon_sym_PERCENTr12w] = ACTIONS(272),
    [anon_sym_PERCENTr13w] = ACTIONS(272),
    [anon_sym_PERCENTr14w] = ACTIONS(272),
    [anon_sym_PERCENTr15w] = ACTIONS(272),
    [anon_sym_PERCENTal] = ACTIONS(272),
    [anon_sym_PERCENTcl] = ACTIONS(272),
    [anon_sym_PERCENTdl] = ACTIONS(272),
    [anon_sym_PERCENTbl] = ACTIONS(272),
    [anon_sym_PERCENTsil] = ACTIONS(272),
    [anon_sym_PERCENTdil] = ACTIONS(272),
    [anon_sym_PERCENTspl] = ACTIONS(272),
    [anon_sym_PERCENTbpl] = ACTIONS(272),
    [anon_sym_PERCENTr8b] = ACTIONS(272),
    [anon_sym_PERCENTr9b] = ACTIONS(272),
    [anon_sym_PERCENTr10b] = ACTIONS(272),
    [anon_sym_PERCENTr11b] = ACTIONS(272),
    [anon_sym_PERCENTr12b] = ACTIONS(272),
    [anon_sym_PERCENTr13b] = ACTIONS(272),
    [anon_sym_PERCENTr14b] = ACTIONS(272),
    [anon_sym_PERCENTr15b] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_movsq] = ACTIONS(272),
    [anon_sym_cmpsb] = ACTIONS(272),
    [anon_sym_cmpxchg] = ACTIONS(272),
    [anon_sym_movsl] = ACTIONS(272),
    [anon_sym_PERCENTcr0] = ACTIONS(272),
    [anon_sym_PERCENTcr2] = ACTIONS(272),
    [anon_sym_PERCENTcr3] = ACTIONS(272),
    [anon_sym_PERCENTcr4] = ACTIONS(272),
    [anon_sym_PERCENTrip] = ACTIONS(272),
    [anon_sym_PERCENTeip] = ACTIONS(272),
    [anon_sym_PERCENTip] = ACTIONS(272),
    [anon_sym_PERCENTst] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(272),
  },
  [23] = {
    [aux_sym_comment_token1] = ACTIONS(276),
    [aux_sym_comment_token2] = ACTIONS(276),
    [sym__line_break] = ACTIONS(278),
    [anon_sym_f] = ACTIONS(276),
    [aux_sym_operand_token1] = ACTIONS(276),
    [anon_sym_LT] = ACTIONS(276),
    [anon_sym_DOLLAR] = ACTIONS(276),
    [anon_sym_PERCENTss] = ACTIONS(276),
    [anon_sym_PERCENTcs] = ACTIONS(276),
    [anon_sym_PERCENTds] = ACTIONS(276),
    [anon_sym_PERCENTes] = ACTIONS(276),
    [anon_sym_PERCENTfs] = ACTIONS(276),
    [anon_sym_PERCENTgs] = ACTIONS(276),
    [anon_sym_PERCENTrax] = ACTIONS(276),
    [anon_sym_PERCENTrbx] = ACTIONS(276),
    [anon_sym_PERCENTrcx] = ACTIONS(276),
    [anon_sym_PERCENTrdx] = ACTIONS(276),
    [anon_sym_PERCENTrsi] = ACTIONS(276),
    [anon_sym_PERCENTrdi] = ACTIONS(276),
    [anon_sym_PERCENTrbp] = ACTIONS(276),
    [anon_sym_PERCENTrsp] = ACTIONS(276),
    [anon_sym_PERCENTr8] = ACTIONS(276),
    [anon_sym_PERCENTr9] = ACTIONS(276),
    [anon_sym_PERCENTr10] = ACTIONS(276),
    [anon_sym_PERCENTr11] = ACTIONS(276),
    [anon_sym_PERCENTr12] = ACTIONS(276),
    [anon_sym_PERCENTr13] = ACTIONS(276),
    [anon_sym_PERCENTr14] = ACTIONS(276),
    [anon_sym_PERCENTr15] = ACTIONS(276),
    [anon_sym_PERCENTeax] = ACTIONS(276),
    [anon_sym_PERCENTecx] = ACTIONS(276),
    [anon_sym_PERCENTedx] = ACTIONS(276),
    [anon_sym_PERCENTebx] = ACTIONS(276),
    [anon_sym_PERCENTesi] = ACTIONS(276),
    [anon_sym_PERCENTedi] = ACTIONS(276),
    [anon_sym_PERCENTebp] = ACTIONS(276),
    [anon_sym_PERCENTesp] = ACTIONS(276),
    [anon_sym_PERCENTr8d] = ACTIONS(276),
    [anon_sym_PERCENTr9d] = ACTIONS(276),
    [anon_sym_PERCENTr10d] = ACTIONS(276),
    [anon_sym_PERCENTr11d] = ACTIONS(276),
    [anon_sym_PERCENTr12d] = ACTIONS(276),
    [anon_sym_PERCENTr13d] = ACTIONS(276),
    [anon_sym_PERCENTr14d] = ACTIONS(276),
    [anon_sym_PERCENTr15d] = ACTIONS(276),
    [anon_sym_PERCENTax] = ACTIONS(276),
    [anon_sym_PERCENTcx] = ACTIONS(276),
    [anon_sym_PERCENTdx] = ACTIONS(276),
    [anon_sym_PERCENTbx] = ACTIONS(276),
    [anon_sym_PERCENTsi] = ACTIONS(276),
    [anon_sym_PERCENTdi] = ACTIONS(276),
    [anon_sym_PERCENTsp] = ACTIONS(276),
    [anon_sym_PERCENTbp] = ACTIONS(276),
    [anon_sym_PERCENTr8w] = ACTIONS(276),
    [anon_sym_PERCENTr9w] = ACTIONS(276),
    [anon_sym_PERCENTr10w] = ACTIONS(276),
    [anon_sym_PERCENTr11w] = ACTIONS(276),
    [anon_sym_PERCENTr12w] = ACTIONS(276),
    [anon_sym_PERCENTr13w] = ACTIONS(276),
    [anon_sym_PERCENTr14w] = ACTIONS(276),
    [anon_sym_PERCENTr15w] = ACTIONS(276),
    [anon_sym_PERCENTal] = ACTIONS(276),
    [anon_sym_PERCENTcl] = ACTIONS(276),
    [anon_sym_PERCENTdl] = ACTIONS(276),
    [anon_sym_PERCENTbl] = ACTIONS(276),
    [anon_sym_PERCENTsil] = ACTIONS(276),
    [anon_sym_PERCENTdil] = ACTIONS(276),
    [anon_sym_PERCENTspl] = ACTIONS(276),
    [anon_sym_PERCENTbpl] = ACTIONS(276),
    [anon_sym_PERCENTr8b] = ACTIONS(276),
    [anon_sym_PERCENTr9b] = ACTIONS(276),
    [anon_sym_PERCENTr10b] = ACTIONS(276),
    [anon_sym_PERCENTr11b] = ACTIONS(276),
    [anon_sym_PERCENTr12b] = ACTIONS(276),
    [anon_sym_PERCENTr13b] = ACTIONS(276),
    [anon_sym_PERCENTr14b] = ACTIONS(276),
    [anon_sym_PERCENTr15b] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_movsq] = ACTIONS(276),
    [anon_sym_cmpsb] = ACTIONS(276),
    [anon_sym_cmpxchg] = ACTIONS(276),
    [anon_sym_movsl] = ACTIONS(276),
    [anon_sym_PERCENTcr0] = ACTIONS(276),
    [anon_sym_PERCENTcr2] = ACTIONS(276),
    [anon_sym_PERCENTcr3] = ACTIONS(276),
    [anon_sym_PERCENTcr4] = ACTIONS(276),
    [anon_sym_PERCENTrip] = ACTIONS(276),
    [anon_sym_PERCENTeip] = ACTIONS(276),
    [anon_sym_PERCENTip] = ACTIONS(276),
    [anon_sym_PERCENTst] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(276),
  },
  [24] = {
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
  [25] = {
    [aux_sym_comment_token1] = ACTIONS(284),
    [aux_sym_comment_token2] = ACTIONS(284),
    [sym__line_break] = ACTIONS(286),
    [anon_sym_f] = ACTIONS(284),
    [aux_sym_operand_token1] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(284),
    [anon_sym_DOLLAR] = ACTIONS(284),
    [anon_sym_PERCENTss] = ACTIONS(284),
    [anon_sym_PERCENTcs] = ACTIONS(284),
    [anon_sym_PERCENTds] = ACTIONS(284),
    [anon_sym_PERCENTes] = ACTIONS(284),
    [anon_sym_PERCENTfs] = ACTIONS(284),
    [anon_sym_PERCENTgs] = ACTIONS(284),
    [anon_sym_PERCENTrax] = ACTIONS(284),
    [anon_sym_PERCENTrbx] = ACTIONS(284),
    [anon_sym_PERCENTrcx] = ACTIONS(284),
    [anon_sym_PERCENTrdx] = ACTIONS(284),
    [anon_sym_PERCENTrsi] = ACTIONS(284),
    [anon_sym_PERCENTrdi] = ACTIONS(284),
    [anon_sym_PERCENTrbp] = ACTIONS(284),
    [anon_sym_PERCENTrsp] = ACTIONS(284),
    [anon_sym_PERCENTr8] = ACTIONS(284),
    [anon_sym_PERCENTr9] = ACTIONS(284),
    [anon_sym_PERCENTr10] = ACTIONS(284),
    [anon_sym_PERCENTr11] = ACTIONS(284),
    [anon_sym_PERCENTr12] = ACTIONS(284),
    [anon_sym_PERCENTr13] = ACTIONS(284),
    [anon_sym_PERCENTr14] = ACTIONS(284),
    [anon_sym_PERCENTr15] = ACTIONS(284),
    [anon_sym_PERCENTeax] = ACTIONS(284),
    [anon_sym_PERCENTecx] = ACTIONS(284),
    [anon_sym_PERCENTedx] = ACTIONS(284),
    [anon_sym_PERCENTebx] = ACTIONS(284),
    [anon_sym_PERCENTesi] = ACTIONS(284),
    [anon_sym_PERCENTedi] = ACTIONS(284),
    [anon_sym_PERCENTebp] = ACTIONS(284),
    [anon_sym_PERCENTesp] = ACTIONS(284),
    [anon_sym_PERCENTr8d] = ACTIONS(284),
    [anon_sym_PERCENTr9d] = ACTIONS(284),
    [anon_sym_PERCENTr10d] = ACTIONS(284),
    [anon_sym_PERCENTr11d] = ACTIONS(284),
    [anon_sym_PERCENTr12d] = ACTIONS(284),
    [anon_sym_PERCENTr13d] = ACTIONS(284),
    [anon_sym_PERCENTr14d] = ACTIONS(284),
    [anon_sym_PERCENTr15d] = ACTIONS(284),
    [anon_sym_PERCENTax] = ACTIONS(284),
    [anon_sym_PERCENTcx] = ACTIONS(284),
    [anon_sym_PERCENTdx] = ACTIONS(284),
    [anon_sym_PERCENTbx] = ACTIONS(284),
    [anon_sym_PERCENTsi] = ACTIONS(284),
    [anon_sym_PERCENTdi] = ACTIONS(284),
    [anon_sym_PERCENTsp] = ACTIONS(284),
    [anon_sym_PERCENTbp] = ACTIONS(284),
    [anon_sym_PERCENTr8w] = ACTIONS(284),
    [anon_sym_PERCENTr9w] = ACTIONS(284),
    [anon_sym_PERCENTr10w] = ACTIONS(284),
    [anon_sym_PERCENTr11w] = ACTIONS(284),
    [anon_sym_PERCENTr12w] = ACTIONS(284),
    [anon_sym_PERCENTr13w] = ACTIONS(284),
    [anon_sym_PERCENTr14w] = ACTIONS(284),
    [anon_sym_PERCENTr15w] = ACTIONS(284),
    [anon_sym_PERCENTal] = ACTIONS(284),
    [anon_sym_PERCENTcl] = ACTIONS(284),
    [anon_sym_PERCENTdl] = ACTIONS(284),
    [anon_sym_PERCENTbl] = ACTIONS(284),
    [anon_sym_PERCENTsil] = ACTIONS(284),
    [anon_sym_PERCENTdil] = ACTIONS(284),
    [anon_sym_PERCENTspl] = ACTIONS(284),
    [anon_sym_PERCENTbpl] = ACTIONS(284),
    [anon_sym_PERCENTr8b] = ACTIONS(284),
    [anon_sym_PERCENTr9b] = ACTIONS(284),
    [anon_sym_PERCENTr10b] = ACTIONS(284),
    [anon_sym_PERCENTr11b] = ACTIONS(284),
    [anon_sym_PERCENTr12b] = ACTIONS(284),
    [anon_sym_PERCENTr13b] = ACTIONS(284),
    [anon_sym_PERCENTr14b] = ACTIONS(284),
    [anon_sym_PERCENTr15b] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_movsq] = ACTIONS(284),
    [anon_sym_cmpsb] = ACTIONS(284),
    [anon_sym_cmpxchg] = ACTIONS(284),
    [anon_sym_movsl] = ACTIONS(284),
    [anon_sym_PERCENTcr0] = ACTIONS(284),
    [anon_sym_PERCENTcr2] = ACTIONS(284),
    [anon_sym_PERCENTcr3] = ACTIONS(284),
    [anon_sym_PERCENTcr4] = ACTIONS(284),
    [anon_sym_PERCENTrip] = ACTIONS(284),
    [anon_sym_PERCENTeip] = ACTIONS(284),
    [anon_sym_PERCENTip] = ACTIONS(284),
    [anon_sym_PERCENTst] = ACTIONS(284),
    [anon_sym_PERCENT] = ACTIONS(284),
  },
  [26] = {
    [aux_sym_comment_token1] = ACTIONS(288),
    [aux_sym_comment_token2] = ACTIONS(288),
    [sym__line_break] = ACTIONS(290),
    [anon_sym_f] = ACTIONS(288),
    [aux_sym_operand_token1] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(288),
    [anon_sym_DOLLAR] = ACTIONS(288),
    [anon_sym_PERCENTss] = ACTIONS(288),
    [anon_sym_PERCENTcs] = ACTIONS(288),
    [anon_sym_PERCENTds] = ACTIONS(288),
    [anon_sym_PERCENTes] = ACTIONS(288),
    [anon_sym_PERCENTfs] = ACTIONS(288),
    [anon_sym_PERCENTgs] = ACTIONS(288),
    [anon_sym_PERCENTrax] = ACTIONS(288),
    [anon_sym_PERCENTrbx] = ACTIONS(288),
    [anon_sym_PERCENTrcx] = ACTIONS(288),
    [anon_sym_PERCENTrdx] = ACTIONS(288),
    [anon_sym_PERCENTrsi] = ACTIONS(288),
    [anon_sym_PERCENTrdi] = ACTIONS(288),
    [anon_sym_PERCENTrbp] = ACTIONS(288),
    [anon_sym_PERCENTrsp] = ACTIONS(288),
    [anon_sym_PERCENTr8] = ACTIONS(288),
    [anon_sym_PERCENTr9] = ACTIONS(288),
    [anon_sym_PERCENTr10] = ACTIONS(288),
    [anon_sym_PERCENTr11] = ACTIONS(288),
    [anon_sym_PERCENTr12] = ACTIONS(288),
    [anon_sym_PERCENTr13] = ACTIONS(288),
    [anon_sym_PERCENTr14] = ACTIONS(288),
    [anon_sym_PERCENTr15] = ACTIONS(288),
    [anon_sym_PERCENTeax] = ACTIONS(288),
    [anon_sym_PERCENTecx] = ACTIONS(288),
    [anon_sym_PERCENTedx] = ACTIONS(288),
    [anon_sym_PERCENTebx] = ACTIONS(288),
    [anon_sym_PERCENTesi] = ACTIONS(288),
    [anon_sym_PERCENTedi] = ACTIONS(288),
    [anon_sym_PERCENTebp] = ACTIONS(288),
    [anon_sym_PERCENTesp] = ACTIONS(288),
    [anon_sym_PERCENTr8d] = ACTIONS(288),
    [anon_sym_PERCENTr9d] = ACTIONS(288),
    [anon_sym_PERCENTr10d] = ACTIONS(288),
    [anon_sym_PERCENTr11d] = ACTIONS(288),
    [anon_sym_PERCENTr12d] = ACTIONS(288),
    [anon_sym_PERCENTr13d] = ACTIONS(288),
    [anon_sym_PERCENTr14d] = ACTIONS(288),
    [anon_sym_PERCENTr15d] = ACTIONS(288),
    [anon_sym_PERCENTax] = ACTIONS(288),
    [anon_sym_PERCENTcx] = ACTIONS(288),
    [anon_sym_PERCENTdx] = ACTIONS(288),
    [anon_sym_PERCENTbx] = ACTIONS(288),
    [anon_sym_PERCENTsi] = ACTIONS(288),
    [anon_sym_PERCENTdi] = ACTIONS(288),
    [anon_sym_PERCENTsp] = ACTIONS(288),
    [anon_sym_PERCENTbp] = ACTIONS(288),
    [anon_sym_PERCENTr8w] = ACTIONS(288),
    [anon_sym_PERCENTr9w] = ACTIONS(288),
    [anon_sym_PERCENTr10w] = ACTIONS(288),
    [anon_sym_PERCENTr11w] = ACTIONS(288),
    [anon_sym_PERCENTr12w] = ACTIONS(288),
    [anon_sym_PERCENTr13w] = ACTIONS(288),
    [anon_sym_PERCENTr14w] = ACTIONS(288),
    [anon_sym_PERCENTr15w] = ACTIONS(288),
    [anon_sym_PERCENTal] = ACTIONS(288),
    [anon_sym_PERCENTcl] = ACTIONS(288),
    [anon_sym_PERCENTdl] = ACTIONS(288),
    [anon_sym_PERCENTbl] = ACTIONS(288),
    [anon_sym_PERCENTsil] = ACTIONS(288),
    [anon_sym_PERCENTdil] = ACTIONS(288),
    [anon_sym_PERCENTspl] = ACTIONS(288),
    [anon_sym_PERCENTbpl] = ACTIONS(288),
    [anon_sym_PERCENTr8b] = ACTIONS(288),
    [anon_sym_PERCENTr9b] = ACTIONS(288),
    [anon_sym_PERCENTr10b] = ACTIONS(288),
    [anon_sym_PERCENTr11b] = ACTIONS(288),
    [anon_sym_PERCENTr12b] = ACTIONS(288),
    [anon_sym_PERCENTr13b] = ACTIONS(288),
    [anon_sym_PERCENTr14b] = ACTIONS(288),
    [anon_sym_PERCENTr15b] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_movsq] = ACTIONS(288),
    [anon_sym_cmpsb] = ACTIONS(288),
    [anon_sym_cmpxchg] = ACTIONS(288),
    [anon_sym_movsl] = ACTIONS(288),
    [anon_sym_PERCENTcr0] = ACTIONS(288),
    [anon_sym_PERCENTcr2] = ACTIONS(288),
    [anon_sym_PERCENTcr3] = ACTIONS(288),
    [anon_sym_PERCENTcr4] = ACTIONS(288),
    [anon_sym_PERCENTrip] = ACTIONS(288),
    [anon_sym_PERCENTeip] = ACTIONS(288),
    [anon_sym_PERCENTip] = ACTIONS(288),
    [anon_sym_PERCENTst] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(288),
  },
  [27] = {
    [aux_sym_comment_token1] = ACTIONS(292),
    [aux_sym_comment_token2] = ACTIONS(292),
    [sym__line_break] = ACTIONS(294),
    [anon_sym_f] = ACTIONS(292),
    [aux_sym_operand_token1] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(292),
    [anon_sym_DOLLAR] = ACTIONS(292),
    [anon_sym_PERCENTss] = ACTIONS(292),
    [anon_sym_PERCENTcs] = ACTIONS(292),
    [anon_sym_PERCENTds] = ACTIONS(292),
    [anon_sym_PERCENTes] = ACTIONS(292),
    [anon_sym_PERCENTfs] = ACTIONS(292),
    [anon_sym_PERCENTgs] = ACTIONS(292),
    [anon_sym_PERCENTrax] = ACTIONS(292),
    [anon_sym_PERCENTrbx] = ACTIONS(292),
    [anon_sym_PERCENTrcx] = ACTIONS(292),
    [anon_sym_PERCENTrdx] = ACTIONS(292),
    [anon_sym_PERCENTrsi] = ACTIONS(292),
    [anon_sym_PERCENTrdi] = ACTIONS(292),
    [anon_sym_PERCENTrbp] = ACTIONS(292),
    [anon_sym_PERCENTrsp] = ACTIONS(292),
    [anon_sym_PERCENTr8] = ACTIONS(292),
    [anon_sym_PERCENTr9] = ACTIONS(292),
    [anon_sym_PERCENTr10] = ACTIONS(292),
    [anon_sym_PERCENTr11] = ACTIONS(292),
    [anon_sym_PERCENTr12] = ACTIONS(292),
    [anon_sym_PERCENTr13] = ACTIONS(292),
    [anon_sym_PERCENTr14] = ACTIONS(292),
    [anon_sym_PERCENTr15] = ACTIONS(292),
    [anon_sym_PERCENTeax] = ACTIONS(292),
    [anon_sym_PERCENTecx] = ACTIONS(292),
    [anon_sym_PERCENTedx] = ACTIONS(292),
    [anon_sym_PERCENTebx] = ACTIONS(292),
    [anon_sym_PERCENTesi] = ACTIONS(292),
    [anon_sym_PERCENTedi] = ACTIONS(292),
    [anon_sym_PERCENTebp] = ACTIONS(292),
    [anon_sym_PERCENTesp] = ACTIONS(292),
    [anon_sym_PERCENTr8d] = ACTIONS(292),
    [anon_sym_PERCENTr9d] = ACTIONS(292),
    [anon_sym_PERCENTr10d] = ACTIONS(292),
    [anon_sym_PERCENTr11d] = ACTIONS(292),
    [anon_sym_PERCENTr12d] = ACTIONS(292),
    [anon_sym_PERCENTr13d] = ACTIONS(292),
    [anon_sym_PERCENTr14d] = ACTIONS(292),
    [anon_sym_PERCENTr15d] = ACTIONS(292),
    [anon_sym_PERCENTax] = ACTIONS(292),
    [anon_sym_PERCENTcx] = ACTIONS(292),
    [anon_sym_PERCENTdx] = ACTIONS(292),
    [anon_sym_PERCENTbx] = ACTIONS(292),
    [anon_sym_PERCENTsi] = ACTIONS(292),
    [anon_sym_PERCENTdi] = ACTIONS(292),
    [anon_sym_PERCENTsp] = ACTIONS(292),
    [anon_sym_PERCENTbp] = ACTIONS(292),
    [anon_sym_PERCENTr8w] = ACTIONS(292),
    [anon_sym_PERCENTr9w] = ACTIONS(292),
    [anon_sym_PERCENTr10w] = ACTIONS(292),
    [anon_sym_PERCENTr11w] = ACTIONS(292),
    [anon_sym_PERCENTr12w] = ACTIONS(292),
    [anon_sym_PERCENTr13w] = ACTIONS(292),
    [anon_sym_PERCENTr14w] = ACTIONS(292),
    [anon_sym_PERCENTr15w] = ACTIONS(292),
    [anon_sym_PERCENTal] = ACTIONS(292),
    [anon_sym_PERCENTcl] = ACTIONS(292),
    [anon_sym_PERCENTdl] = ACTIONS(292),
    [anon_sym_PERCENTbl] = ACTIONS(292),
    [anon_sym_PERCENTsil] = ACTIONS(292),
    [anon_sym_PERCENTdil] = ACTIONS(292),
    [anon_sym_PERCENTspl] = ACTIONS(292),
    [anon_sym_PERCENTbpl] = ACTIONS(292),
    [anon_sym_PERCENTr8b] = ACTIONS(292),
    [anon_sym_PERCENTr9b] = ACTIONS(292),
    [anon_sym_PERCENTr10b] = ACTIONS(292),
    [anon_sym_PERCENTr11b] = ACTIONS(292),
    [anon_sym_PERCENTr12b] = ACTIONS(292),
    [anon_sym_PERCENTr13b] = ACTIONS(292),
    [anon_sym_PERCENTr14b] = ACTIONS(292),
    [anon_sym_PERCENTr15b] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_movsq] = ACTIONS(292),
    [anon_sym_cmpsb] = ACTIONS(292),
    [anon_sym_cmpxchg] = ACTIONS(292),
    [anon_sym_movsl] = ACTIONS(292),
    [anon_sym_PERCENTcr0] = ACTIONS(292),
    [anon_sym_PERCENTcr2] = ACTIONS(292),
    [anon_sym_PERCENTcr3] = ACTIONS(292),
    [anon_sym_PERCENTcr4] = ACTIONS(292),
    [anon_sym_PERCENTrip] = ACTIONS(292),
    [anon_sym_PERCENTeip] = ACTIONS(292),
    [anon_sym_PERCENTip] = ACTIONS(292),
    [anon_sym_PERCENTst] = ACTIONS(292),
    [anon_sym_PERCENT] = ACTIONS(292),
  },
  [28] = {
    [aux_sym_comment_token1] = ACTIONS(296),
    [aux_sym_comment_token2] = ACTIONS(296),
    [sym__line_break] = ACTIONS(298),
    [anon_sym_f] = ACTIONS(296),
    [aux_sym_operand_token1] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_DOLLAR] = ACTIONS(296),
    [anon_sym_PERCENTss] = ACTIONS(296),
    [anon_sym_PERCENTcs] = ACTIONS(296),
    [anon_sym_PERCENTds] = ACTIONS(296),
    [anon_sym_PERCENTes] = ACTIONS(296),
    [anon_sym_PERCENTfs] = ACTIONS(296),
    [anon_sym_PERCENTgs] = ACTIONS(296),
    [anon_sym_PERCENTrax] = ACTIONS(296),
    [anon_sym_PERCENTrbx] = ACTIONS(296),
    [anon_sym_PERCENTrcx] = ACTIONS(296),
    [anon_sym_PERCENTrdx] = ACTIONS(296),
    [anon_sym_PERCENTrsi] = ACTIONS(296),
    [anon_sym_PERCENTrdi] = ACTIONS(296),
    [anon_sym_PERCENTrbp] = ACTIONS(296),
    [anon_sym_PERCENTrsp] = ACTIONS(296),
    [anon_sym_PERCENTr8] = ACTIONS(296),
    [anon_sym_PERCENTr9] = ACTIONS(296),
    [anon_sym_PERCENTr10] = ACTIONS(296),
    [anon_sym_PERCENTr11] = ACTIONS(296),
    [anon_sym_PERCENTr12] = ACTIONS(296),
    [anon_sym_PERCENTr13] = ACTIONS(296),
    [anon_sym_PERCENTr14] = ACTIONS(296),
    [anon_sym_PERCENTr15] = ACTIONS(296),
    [anon_sym_PERCENTeax] = ACTIONS(296),
    [anon_sym_PERCENTecx] = ACTIONS(296),
    [anon_sym_PERCENTedx] = ACTIONS(296),
    [anon_sym_PERCENTebx] = ACTIONS(296),
    [anon_sym_PERCENTesi] = ACTIONS(296),
    [anon_sym_PERCENTedi] = ACTIONS(296),
    [anon_sym_PERCENTebp] = ACTIONS(296),
    [anon_sym_PERCENTesp] = ACTIONS(296),
    [anon_sym_PERCENTr8d] = ACTIONS(296),
    [anon_sym_PERCENTr9d] = ACTIONS(296),
    [anon_sym_PERCENTr10d] = ACTIONS(296),
    [anon_sym_PERCENTr11d] = ACTIONS(296),
    [anon_sym_PERCENTr12d] = ACTIONS(296),
    [anon_sym_PERCENTr13d] = ACTIONS(296),
    [anon_sym_PERCENTr14d] = ACTIONS(296),
    [anon_sym_PERCENTr15d] = ACTIONS(296),
    [anon_sym_PERCENTax] = ACTIONS(296),
    [anon_sym_PERCENTcx] = ACTIONS(296),
    [anon_sym_PERCENTdx] = ACTIONS(296),
    [anon_sym_PERCENTbx] = ACTIONS(296),
    [anon_sym_PERCENTsi] = ACTIONS(296),
    [anon_sym_PERCENTdi] = ACTIONS(296),
    [anon_sym_PERCENTsp] = ACTIONS(296),
    [anon_sym_PERCENTbp] = ACTIONS(296),
    [anon_sym_PERCENTr8w] = ACTIONS(296),
    [anon_sym_PERCENTr9w] = ACTIONS(296),
    [anon_sym_PERCENTr10w] = ACTIONS(296),
    [anon_sym_PERCENTr11w] = ACTIONS(296),
    [anon_sym_PERCENTr12w] = ACTIONS(296),
    [anon_sym_PERCENTr13w] = ACTIONS(296),
    [anon_sym_PERCENTr14w] = ACTIONS(296),
    [anon_sym_PERCENTr15w] = ACTIONS(296),
    [anon_sym_PERCENTal] = ACTIONS(296),
    [anon_sym_PERCENTcl] = ACTIONS(296),
    [anon_sym_PERCENTdl] = ACTIONS(296),
    [anon_sym_PERCENTbl] = ACTIONS(296),
    [anon_sym_PERCENTsil] = ACTIONS(296),
    [anon_sym_PERCENTdil] = ACTIONS(296),
    [anon_sym_PERCENTspl] = ACTIONS(296),
    [anon_sym_PERCENTbpl] = ACTIONS(296),
    [anon_sym_PERCENTr8b] = ACTIONS(296),
    [anon_sym_PERCENTr9b] = ACTIONS(296),
    [anon_sym_PERCENTr10b] = ACTIONS(296),
    [anon_sym_PERCENTr11b] = ACTIONS(296),
    [anon_sym_PERCENTr12b] = ACTIONS(296),
    [anon_sym_PERCENTr13b] = ACTIONS(296),
    [anon_sym_PERCENTr14b] = ACTIONS(296),
    [anon_sym_PERCENTr15b] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_movsq] = ACTIONS(296),
    [anon_sym_cmpsb] = ACTIONS(296),
    [anon_sym_cmpxchg] = ACTIONS(296),
    [anon_sym_movsl] = ACTIONS(296),
    [anon_sym_PERCENTcr0] = ACTIONS(296),
    [anon_sym_PERCENTcr2] = ACTIONS(296),
    [anon_sym_PERCENTcr3] = ACTIONS(296),
    [anon_sym_PERCENTcr4] = ACTIONS(296),
    [anon_sym_PERCENTrip] = ACTIONS(296),
    [anon_sym_PERCENTeip] = ACTIONS(296),
    [anon_sym_PERCENTip] = ACTIONS(296),
    [anon_sym_PERCENTst] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
  },
  [29] = {
    [aux_sym_comment_token1] = ACTIONS(300),
    [aux_sym_comment_token2] = ACTIONS(300),
    [sym__line_break] = ACTIONS(302),
    [anon_sym_f] = ACTIONS(300),
    [aux_sym_operand_token1] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(300),
    [anon_sym_DOLLAR] = ACTIONS(300),
    [anon_sym_PERCENTss] = ACTIONS(300),
    [anon_sym_PERCENTcs] = ACTIONS(300),
    [anon_sym_PERCENTds] = ACTIONS(300),
    [anon_sym_PERCENTes] = ACTIONS(300),
    [anon_sym_PERCENTfs] = ACTIONS(300),
    [anon_sym_PERCENTgs] = ACTIONS(300),
    [anon_sym_PERCENTrax] = ACTIONS(300),
    [anon_sym_PERCENTrbx] = ACTIONS(300),
    [anon_sym_PERCENTrcx] = ACTIONS(300),
    [anon_sym_PERCENTrdx] = ACTIONS(300),
    [anon_sym_PERCENTrsi] = ACTIONS(300),
    [anon_sym_PERCENTrdi] = ACTIONS(300),
    [anon_sym_PERCENTrbp] = ACTIONS(300),
    [anon_sym_PERCENTrsp] = ACTIONS(300),
    [anon_sym_PERCENTr8] = ACTIONS(300),
    [anon_sym_PERCENTr9] = ACTIONS(300),
    [anon_sym_PERCENTr10] = ACTIONS(300),
    [anon_sym_PERCENTr11] = ACTIONS(300),
    [anon_sym_PERCENTr12] = ACTIONS(300),
    [anon_sym_PERCENTr13] = ACTIONS(300),
    [anon_sym_PERCENTr14] = ACTIONS(300),
    [anon_sym_PERCENTr15] = ACTIONS(300),
    [anon_sym_PERCENTeax] = ACTIONS(300),
    [anon_sym_PERCENTecx] = ACTIONS(300),
    [anon_sym_PERCENTedx] = ACTIONS(300),
    [anon_sym_PERCENTebx] = ACTIONS(300),
    [anon_sym_PERCENTesi] = ACTIONS(300),
    [anon_sym_PERCENTedi] = ACTIONS(300),
    [anon_sym_PERCENTebp] = ACTIONS(300),
    [anon_sym_PERCENTesp] = ACTIONS(300),
    [anon_sym_PERCENTr8d] = ACTIONS(300),
    [anon_sym_PERCENTr9d] = ACTIONS(300),
    [anon_sym_PERCENTr10d] = ACTIONS(300),
    [anon_sym_PERCENTr11d] = ACTIONS(300),
    [anon_sym_PERCENTr12d] = ACTIONS(300),
    [anon_sym_PERCENTr13d] = ACTIONS(300),
    [anon_sym_PERCENTr14d] = ACTIONS(300),
    [anon_sym_PERCENTr15d] = ACTIONS(300),
    [anon_sym_PERCENTax] = ACTIONS(300),
    [anon_sym_PERCENTcx] = ACTIONS(300),
    [anon_sym_PERCENTdx] = ACTIONS(300),
    [anon_sym_PERCENTbx] = ACTIONS(300),
    [anon_sym_PERCENTsi] = ACTIONS(300),
    [anon_sym_PERCENTdi] = ACTIONS(300),
    [anon_sym_PERCENTsp] = ACTIONS(300),
    [anon_sym_PERCENTbp] = ACTIONS(300),
    [anon_sym_PERCENTr8w] = ACTIONS(300),
    [anon_sym_PERCENTr9w] = ACTIONS(300),
    [anon_sym_PERCENTr10w] = ACTIONS(300),
    [anon_sym_PERCENTr11w] = ACTIONS(300),
    [anon_sym_PERCENTr12w] = ACTIONS(300),
    [anon_sym_PERCENTr13w] = ACTIONS(300),
    [anon_sym_PERCENTr14w] = ACTIONS(300),
    [anon_sym_PERCENTr15w] = ACTIONS(300),
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
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_movsq] = ACTIONS(300),
    [anon_sym_cmpsb] = ACTIONS(300),
    [anon_sym_cmpxchg] = ACTIONS(300),
    [anon_sym_movsl] = ACTIONS(300),
    [anon_sym_PERCENTcr0] = ACTIONS(300),
    [anon_sym_PERCENTcr2] = ACTIONS(300),
    [anon_sym_PERCENTcr3] = ACTIONS(300),
    [anon_sym_PERCENTcr4] = ACTIONS(300),
    [anon_sym_PERCENTrip] = ACTIONS(300),
    [anon_sym_PERCENTeip] = ACTIONS(300),
    [anon_sym_PERCENTip] = ACTIONS(300),
    [anon_sym_PERCENTst] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(300),
  },
  [30] = {
    [sym_registerOperand] = STATE(203),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(261),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(304),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [31] = {
    [sym_registerOperand] = STATE(250),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(306),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(306),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [32] = {
    [sym_registerOperand] = STATE(236),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(279),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(308),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [33] = {
    [sym_registerOperand] = STATE(230),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(302),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(310),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [34] = {
    [aux_sym_comment_token1] = ACTIONS(312),
    [aux_sym_comment_token2] = ACTIONS(312),
    [sym__line_break] = ACTIONS(314),
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
  [35] = {
    [sym_registerOperand] = STATE(252),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(306),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(306),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [36] = {
    [aux_sym_comment_token1] = ACTIONS(106),
    [aux_sym_comment_token2] = ACTIONS(106),
    [sym__line_break] = ACTIONS(108),
    [anon_sym_f] = ACTIONS(106),
    [aux_sym_operand_token1] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(106),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [anon_sym_PERCENTss] = ACTIONS(106),
    [anon_sym_PERCENTcs] = ACTIONS(106),
    [anon_sym_PERCENTds] = ACTIONS(106),
    [anon_sym_PERCENTes] = ACTIONS(106),
    [anon_sym_PERCENTfs] = ACTIONS(106),
    [anon_sym_PERCENTgs] = ACTIONS(106),
    [anon_sym_PERCENTrax] = ACTIONS(106),
    [anon_sym_PERCENTrbx] = ACTIONS(106),
    [anon_sym_PERCENTrcx] = ACTIONS(106),
    [anon_sym_PERCENTrdx] = ACTIONS(106),
    [anon_sym_PERCENTrsi] = ACTIONS(106),
    [anon_sym_PERCENTrdi] = ACTIONS(106),
    [anon_sym_PERCENTrbp] = ACTIONS(106),
    [anon_sym_PERCENTrsp] = ACTIONS(106),
    [anon_sym_PERCENTr8] = ACTIONS(106),
    [anon_sym_PERCENTr9] = ACTIONS(106),
    [anon_sym_PERCENTr10] = ACTIONS(106),
    [anon_sym_PERCENTr11] = ACTIONS(106),
    [anon_sym_PERCENTr12] = ACTIONS(106),
    [anon_sym_PERCENTr13] = ACTIONS(106),
    [anon_sym_PERCENTr14] = ACTIONS(106),
    [anon_sym_PERCENTr15] = ACTIONS(106),
    [anon_sym_PERCENTeax] = ACTIONS(106),
    [anon_sym_PERCENTecx] = ACTIONS(106),
    [anon_sym_PERCENTedx] = ACTIONS(106),
    [anon_sym_PERCENTebx] = ACTIONS(106),
    [anon_sym_PERCENTesi] = ACTIONS(106),
    [anon_sym_PERCENTedi] = ACTIONS(106),
    [anon_sym_PERCENTebp] = ACTIONS(106),
    [anon_sym_PERCENTesp] = ACTIONS(106),
    [anon_sym_PERCENTr8d] = ACTIONS(106),
    [anon_sym_PERCENTr9d] = ACTIONS(106),
    [anon_sym_PERCENTr10d] = ACTIONS(106),
    [anon_sym_PERCENTr11d] = ACTIONS(106),
    [anon_sym_PERCENTr12d] = ACTIONS(106),
    [anon_sym_PERCENTr13d] = ACTIONS(106),
    [anon_sym_PERCENTr14d] = ACTIONS(106),
    [anon_sym_PERCENTr15d] = ACTIONS(106),
    [anon_sym_PERCENTax] = ACTIONS(106),
    [anon_sym_PERCENTcx] = ACTIONS(106),
    [anon_sym_PERCENTdx] = ACTIONS(106),
    [anon_sym_PERCENTbx] = ACTIONS(106),
    [anon_sym_PERCENTsi] = ACTIONS(106),
    [anon_sym_PERCENTdi] = ACTIONS(106),
    [anon_sym_PERCENTsp] = ACTIONS(106),
    [anon_sym_PERCENTbp] = ACTIONS(106),
    [anon_sym_PERCENTr8w] = ACTIONS(106),
    [anon_sym_PERCENTr9w] = ACTIONS(106),
    [anon_sym_PERCENTr10w] = ACTIONS(106),
    [anon_sym_PERCENTr11w] = ACTIONS(106),
    [anon_sym_PERCENTr12w] = ACTIONS(106),
    [anon_sym_PERCENTr13w] = ACTIONS(106),
    [anon_sym_PERCENTr14w] = ACTIONS(106),
    [anon_sym_PERCENTr15w] = ACTIONS(106),
    [anon_sym_PERCENTal] = ACTIONS(106),
    [anon_sym_PERCENTcl] = ACTIONS(106),
    [anon_sym_PERCENTdl] = ACTIONS(106),
    [anon_sym_PERCENTbl] = ACTIONS(106),
    [anon_sym_PERCENTsil] = ACTIONS(106),
    [anon_sym_PERCENTdil] = ACTIONS(106),
    [anon_sym_PERCENTspl] = ACTIONS(106),
    [anon_sym_PERCENTbpl] = ACTIONS(106),
    [anon_sym_PERCENTr8b] = ACTIONS(106),
    [anon_sym_PERCENTr9b] = ACTIONS(106),
    [anon_sym_PERCENTr10b] = ACTIONS(106),
    [anon_sym_PERCENTr11b] = ACTIONS(106),
    [anon_sym_PERCENTr12b] = ACTIONS(106),
    [anon_sym_PERCENTr13b] = ACTIONS(106),
    [anon_sym_PERCENTr14b] = ACTIONS(106),
    [anon_sym_PERCENTr15b] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_movsq] = ACTIONS(106),
    [anon_sym_cmpsb] = ACTIONS(106),
    [anon_sym_cmpxchg] = ACTIONS(106),
    [anon_sym_movsl] = ACTIONS(106),
    [anon_sym_PERCENTcr0] = ACTIONS(106),
    [anon_sym_PERCENTcr2] = ACTIONS(106),
    [anon_sym_PERCENTcr3] = ACTIONS(106),
    [anon_sym_PERCENTcr4] = ACTIONS(106),
    [anon_sym_PERCENTrip] = ACTIONS(106),
    [anon_sym_PERCENTeip] = ACTIONS(106),
    [anon_sym_PERCENTip] = ACTIONS(106),
    [anon_sym_PERCENTst] = ACTIONS(106),
    [anon_sym_PERCENT] = ACTIONS(106),
  },
  [37] = {
    [aux_sym_comment_token1] = ACTIONS(316),
    [aux_sym_comment_token2] = ACTIONS(316),
    [sym__line_break] = ACTIONS(318),
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
  [38] = {
    [sym_registerOperand] = STATE(255),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(307),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(320),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [39] = {
    [sym_registerOperand] = STATE(247),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(304),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(322),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [40] = {
    [aux_sym_comment_token1] = ACTIONS(324),
    [aux_sym_comment_token2] = ACTIONS(324),
    [sym__line_break] = ACTIONS(326),
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
    [sym_registerOperand] = STATE(240),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(261),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(304),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [42] = {
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
  [43] = {
    [sym_registerOperand] = STATE(258),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(308),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(332),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [44] = {
    [aux_sym_comment_token1] = ACTIONS(334),
    [aux_sym_comment_token2] = ACTIONS(334),
    [sym__line_break] = ACTIONS(336),
    [anon_sym_f] = ACTIONS(334),
    [aux_sym_operand_token1] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_DOLLAR] = ACTIONS(334),
    [anon_sym_PERCENTss] = ACTIONS(334),
    [anon_sym_PERCENTcs] = ACTIONS(334),
    [anon_sym_PERCENTds] = ACTIONS(334),
    [anon_sym_PERCENTes] = ACTIONS(334),
    [anon_sym_PERCENTfs] = ACTIONS(334),
    [anon_sym_PERCENTgs] = ACTIONS(334),
    [anon_sym_PERCENTrax] = ACTIONS(334),
    [anon_sym_PERCENTrbx] = ACTIONS(334),
    [anon_sym_PERCENTrcx] = ACTIONS(334),
    [anon_sym_PERCENTrdx] = ACTIONS(334),
    [anon_sym_PERCENTrsi] = ACTIONS(334),
    [anon_sym_PERCENTrdi] = ACTIONS(334),
    [anon_sym_PERCENTrbp] = ACTIONS(334),
    [anon_sym_PERCENTrsp] = ACTIONS(334),
    [anon_sym_PERCENTr8] = ACTIONS(334),
    [anon_sym_PERCENTr9] = ACTIONS(334),
    [anon_sym_PERCENTr10] = ACTIONS(334),
    [anon_sym_PERCENTr11] = ACTIONS(334),
    [anon_sym_PERCENTr12] = ACTIONS(334),
    [anon_sym_PERCENTr13] = ACTIONS(334),
    [anon_sym_PERCENTr14] = ACTIONS(334),
    [anon_sym_PERCENTr15] = ACTIONS(334),
    [anon_sym_PERCENTeax] = ACTIONS(334),
    [anon_sym_PERCENTecx] = ACTIONS(334),
    [anon_sym_PERCENTedx] = ACTIONS(334),
    [anon_sym_PERCENTebx] = ACTIONS(334),
    [anon_sym_PERCENTesi] = ACTIONS(334),
    [anon_sym_PERCENTedi] = ACTIONS(334),
    [anon_sym_PERCENTebp] = ACTIONS(334),
    [anon_sym_PERCENTesp] = ACTIONS(334),
    [anon_sym_PERCENTr8d] = ACTIONS(334),
    [anon_sym_PERCENTr9d] = ACTIONS(334),
    [anon_sym_PERCENTr10d] = ACTIONS(334),
    [anon_sym_PERCENTr11d] = ACTIONS(334),
    [anon_sym_PERCENTr12d] = ACTIONS(334),
    [anon_sym_PERCENTr13d] = ACTIONS(334),
    [anon_sym_PERCENTr14d] = ACTIONS(334),
    [anon_sym_PERCENTr15d] = ACTIONS(334),
    [anon_sym_PERCENTax] = ACTIONS(334),
    [anon_sym_PERCENTcx] = ACTIONS(334),
    [anon_sym_PERCENTdx] = ACTIONS(334),
    [anon_sym_PERCENTbx] = ACTIONS(334),
    [anon_sym_PERCENTsi] = ACTIONS(334),
    [anon_sym_PERCENTdi] = ACTIONS(334),
    [anon_sym_PERCENTsp] = ACTIONS(334),
    [anon_sym_PERCENTbp] = ACTIONS(334),
    [anon_sym_PERCENTr8w] = ACTIONS(334),
    [anon_sym_PERCENTr9w] = ACTIONS(334),
    [anon_sym_PERCENTr10w] = ACTIONS(334),
    [anon_sym_PERCENTr11w] = ACTIONS(334),
    [anon_sym_PERCENTr12w] = ACTIONS(334),
    [anon_sym_PERCENTr13w] = ACTIONS(334),
    [anon_sym_PERCENTr14w] = ACTIONS(334),
    [anon_sym_PERCENTr15w] = ACTIONS(334),
    [anon_sym_PERCENTal] = ACTIONS(334),
    [anon_sym_PERCENTcl] = ACTIONS(334),
    [anon_sym_PERCENTdl] = ACTIONS(334),
    [anon_sym_PERCENTbl] = ACTIONS(334),
    [anon_sym_PERCENTsil] = ACTIONS(334),
    [anon_sym_PERCENTdil] = ACTIONS(334),
    [anon_sym_PERCENTspl] = ACTIONS(334),
    [anon_sym_PERCENTbpl] = ACTIONS(334),
    [anon_sym_PERCENTr8b] = ACTIONS(334),
    [anon_sym_PERCENTr9b] = ACTIONS(334),
    [anon_sym_PERCENTr10b] = ACTIONS(334),
    [anon_sym_PERCENTr11b] = ACTIONS(334),
    [anon_sym_PERCENTr12b] = ACTIONS(334),
    [anon_sym_PERCENTr13b] = ACTIONS(334),
    [anon_sym_PERCENTr14b] = ACTIONS(334),
    [anon_sym_PERCENTr15b] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_movsq] = ACTIONS(334),
    [anon_sym_cmpsb] = ACTIONS(334),
    [anon_sym_cmpxchg] = ACTIONS(334),
    [anon_sym_movsl] = ACTIONS(334),
    [anon_sym_PERCENTcr0] = ACTIONS(334),
    [anon_sym_PERCENTcr2] = ACTIONS(334),
    [anon_sym_PERCENTcr3] = ACTIONS(334),
    [anon_sym_PERCENTcr4] = ACTIONS(334),
    [anon_sym_PERCENTrip] = ACTIONS(334),
    [anon_sym_PERCENTeip] = ACTIONS(334),
    [anon_sym_PERCENTip] = ACTIONS(334),
    [anon_sym_PERCENTst] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
  },
  [45] = {
    [sym_registerOperand] = STATE(257),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_base] = STATE(267),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [sym__comma] = ACTIONS(338),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [46] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(294),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [47] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(296),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [48] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(281),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [49] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(289),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [50] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(262),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [51] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(298),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [52] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(271),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [53] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(265),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [54] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(295),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [55] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(297),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [56] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(275),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [57] = {
    [sym_registerOperand] = STATE(280),
    [sym_segmentRegisterOperand] = STATE(195),
    [sym_generalRegisterOperand] = STATE(195),
    [sym_generalRegister64Bits] = STATE(196),
    [sym_generalRegister32Bits] = STATE(196),
    [sym_generalRegister16Bits] = STATE(196),
    [sym_generalRegister8Bits] = STATE(196),
    [sym_index] = STATE(292),
    [sym_controlRegisterOperand] = STATE(195),
    [sym_instructionRegisterOperand] = STATE(195),
    [sym_floatRegisterOperand] = STATE(195),
    [sym_otherRegisterOperand] = STATE(195),
    [anon_sym_PERCENTss] = ACTIONS(218),
    [anon_sym_PERCENTcs] = ACTIONS(218),
    [anon_sym_PERCENTds] = ACTIONS(218),
    [anon_sym_PERCENTes] = ACTIONS(220),
    [anon_sym_PERCENTfs] = ACTIONS(218),
    [anon_sym_PERCENTgs] = ACTIONS(218),
    [anon_sym_PERCENTrax] = ACTIONS(222),
    [anon_sym_PERCENTrbx] = ACTIONS(222),
    [anon_sym_PERCENTrcx] = ACTIONS(222),
    [anon_sym_PERCENTrdx] = ACTIONS(222),
    [anon_sym_PERCENTrsi] = ACTIONS(222),
    [anon_sym_PERCENTrdi] = ACTIONS(222),
    [anon_sym_PERCENTrbp] = ACTIONS(222),
    [anon_sym_PERCENTrsp] = ACTIONS(222),
    [anon_sym_PERCENTr8] = ACTIONS(224),
    [anon_sym_PERCENTr9] = ACTIONS(224),
    [anon_sym_PERCENTr10] = ACTIONS(224),
    [anon_sym_PERCENTr11] = ACTIONS(224),
    [anon_sym_PERCENTr12] = ACTIONS(224),
    [anon_sym_PERCENTr13] = ACTIONS(224),
    [anon_sym_PERCENTr14] = ACTIONS(224),
    [anon_sym_PERCENTr15] = ACTIONS(224),
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
    [anon_sym_PERCENTax] = ACTIONS(228),
    [anon_sym_PERCENTcx] = ACTIONS(228),
    [anon_sym_PERCENTdx] = ACTIONS(228),
    [anon_sym_PERCENTbx] = ACTIONS(228),
    [anon_sym_PERCENTsi] = ACTIONS(230),
    [anon_sym_PERCENTdi] = ACTIONS(230),
    [anon_sym_PERCENTsp] = ACTIONS(230),
    [anon_sym_PERCENTbp] = ACTIONS(230),
    [anon_sym_PERCENTr8w] = ACTIONS(228),
    [anon_sym_PERCENTr9w] = ACTIONS(228),
    [anon_sym_PERCENTr10w] = ACTIONS(228),
    [anon_sym_PERCENTr11w] = ACTIONS(228),
    [anon_sym_PERCENTr12w] = ACTIONS(228),
    [anon_sym_PERCENTr13w] = ACTIONS(228),
    [anon_sym_PERCENTr14w] = ACTIONS(228),
    [anon_sym_PERCENTr15w] = ACTIONS(228),
    [anon_sym_PERCENTal] = ACTIONS(232),
    [anon_sym_PERCENTcl] = ACTIONS(232),
    [anon_sym_PERCENTdl] = ACTIONS(232),
    [anon_sym_PERCENTbl] = ACTIONS(232),
    [anon_sym_PERCENTsil] = ACTIONS(232),
    [anon_sym_PERCENTdil] = ACTIONS(232),
    [anon_sym_PERCENTspl] = ACTIONS(232),
    [anon_sym_PERCENTbpl] = ACTIONS(232),
    [anon_sym_PERCENTr8b] = ACTIONS(232),
    [anon_sym_PERCENTr9b] = ACTIONS(232),
    [anon_sym_PERCENTr10b] = ACTIONS(232),
    [anon_sym_PERCENTr11b] = ACTIONS(232),
    [anon_sym_PERCENTr12b] = ACTIONS(232),
    [anon_sym_PERCENTr13b] = ACTIONS(232),
    [anon_sym_PERCENTr14b] = ACTIONS(232),
    [anon_sym_PERCENTr15b] = ACTIONS(232),
    [anon_sym_PERCENTcr0] = ACTIONS(234),
    [anon_sym_PERCENTcr2] = ACTIONS(234),
    [anon_sym_PERCENTcr3] = ACTIONS(234),
    [anon_sym_PERCENTcr4] = ACTIONS(234),
    [anon_sym_PERCENTrip] = ACTIONS(236),
    [anon_sym_PERCENTeip] = ACTIONS(236),
    [anon_sym_PERCENTip] = ACTIONS(236),
    [anon_sym_PERCENTst] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(240),
  },
  [58] = {
    [sym_registerOperand] = STATE(185),
    [sym_segmentRegisterOperand] = STATE(175),
    [sym_generalRegisterOperand] = STATE(175),
    [sym_generalRegister64Bits] = STATE(174),
    [sym_generalRegister32Bits] = STATE(174),
    [sym_generalRegister16Bits] = STATE(174),
    [sym_generalRegister8Bits] = STATE(174),
    [sym_controlRegisterOperand] = STATE(175),
    [sym_instructionRegisterOperand] = STATE(175),
    [sym_floatRegisterOperand] = STATE(175),
    [sym_otherRegisterOperand] = STATE(175),
    [anon_sym_PERCENTss] = ACTIONS(186),
    [anon_sym_PERCENTcs] = ACTIONS(186),
    [anon_sym_PERCENTds] = ACTIONS(186),
    [anon_sym_PERCENTes] = ACTIONS(188),
    [anon_sym_PERCENTfs] = ACTIONS(186),
    [anon_sym_PERCENTgs] = ACTIONS(186),
    [anon_sym_PERCENTrax] = ACTIONS(190),
    [anon_sym_PERCENTrbx] = ACTIONS(190),
    [anon_sym_PERCENTrcx] = ACTIONS(190),
    [anon_sym_PERCENTrdx] = ACTIONS(190),
    [anon_sym_PERCENTrsi] = ACTIONS(190),
    [anon_sym_PERCENTrdi] = ACTIONS(190),
    [anon_sym_PERCENTrbp] = ACTIONS(190),
    [anon_sym_PERCENTrsp] = ACTIONS(190),
    [anon_sym_PERCENTr8] = ACTIONS(192),
    [anon_sym_PERCENTr9] = ACTIONS(192),
    [anon_sym_PERCENTr10] = ACTIONS(192),
    [anon_sym_PERCENTr11] = ACTIONS(192),
    [anon_sym_PERCENTr12] = ACTIONS(192),
    [anon_sym_PERCENTr13] = ACTIONS(192),
    [anon_sym_PERCENTr14] = ACTIONS(192),
    [anon_sym_PERCENTr15] = ACTIONS(192),
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
    [anon_sym_PERCENTax] = ACTIONS(196),
    [anon_sym_PERCENTcx] = ACTIONS(196),
    [anon_sym_PERCENTdx] = ACTIONS(196),
    [anon_sym_PERCENTbx] = ACTIONS(196),
    [anon_sym_PERCENTsi] = ACTIONS(198),
    [anon_sym_PERCENTdi] = ACTIONS(198),
    [anon_sym_PERCENTsp] = ACTIONS(198),
    [anon_sym_PERCENTbp] = ACTIONS(198),
    [anon_sym_PERCENTr8w] = ACTIONS(196),
    [anon_sym_PERCENTr9w] = ACTIONS(196),
    [anon_sym_PERCENTr10w] = ACTIONS(196),
    [anon_sym_PERCENTr11w] = ACTIONS(196),
    [anon_sym_PERCENTr12w] = ACTIONS(196),
    [anon_sym_PERCENTr13w] = ACTIONS(196),
    [anon_sym_PERCENTr14w] = ACTIONS(196),
    [anon_sym_PERCENTr15w] = ACTIONS(196),
    [anon_sym_PERCENTal] = ACTIONS(200),
    [anon_sym_PERCENTcl] = ACTIONS(200),
    [anon_sym_PERCENTdl] = ACTIONS(200),
    [anon_sym_PERCENTbl] = ACTIONS(200),
    [anon_sym_PERCENTsil] = ACTIONS(200),
    [anon_sym_PERCENTdil] = ACTIONS(200),
    [anon_sym_PERCENTspl] = ACTIONS(200),
    [anon_sym_PERCENTbpl] = ACTIONS(200),
    [anon_sym_PERCENTr8b] = ACTIONS(200),
    [anon_sym_PERCENTr9b] = ACTIONS(200),
    [anon_sym_PERCENTr10b] = ACTIONS(200),
    [anon_sym_PERCENTr11b] = ACTIONS(200),
    [anon_sym_PERCENTr12b] = ACTIONS(200),
    [anon_sym_PERCENTr13b] = ACTIONS(200),
    [anon_sym_PERCENTr14b] = ACTIONS(200),
    [anon_sym_PERCENTr15b] = ACTIONS(200),
    [anon_sym_PERCENTcr0] = ACTIONS(204),
    [anon_sym_PERCENTcr2] = ACTIONS(204),
    [anon_sym_PERCENTcr3] = ACTIONS(204),
    [anon_sym_PERCENTcr4] = ACTIONS(204),
    [anon_sym_PERCENTrip] = ACTIONS(206),
    [anon_sym_PERCENTeip] = ACTIONS(206),
    [anon_sym_PERCENTip] = ACTIONS(206),
    [anon_sym_PERCENTst] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(210),
  },
  [59] = {
    [sym_registerOperand] = STATE(95),
    [sym_segmentRegisterOperand] = STATE(90),
    [sym_generalRegisterOperand] = STATE(90),
    [sym_generalRegister64Bits] = STATE(92),
    [sym_generalRegister32Bits] = STATE(92),
    [sym_generalRegister16Bits] = STATE(92),
    [sym_generalRegister8Bits] = STATE(92),
    [sym_controlRegisterOperand] = STATE(90),
    [sym_instructionRegisterOperand] = STATE(90),
    [sym_floatRegisterOperand] = STATE(90),
    [sym_otherRegisterOperand] = STATE(90),
    [anon_sym_PERCENTss] = ACTIONS(164),
    [anon_sym_PERCENTcs] = ACTIONS(164),
    [anon_sym_PERCENTds] = ACTIONS(164),
    [anon_sym_PERCENTes] = ACTIONS(82),
    [anon_sym_PERCENTfs] = ACTIONS(164),
    [anon_sym_PERCENTgs] = ACTIONS(164),
    [anon_sym_PERCENTrax] = ACTIONS(166),
    [anon_sym_PERCENTrbx] = ACTIONS(166),
    [anon_sym_PERCENTrcx] = ACTIONS(166),
    [anon_sym_PERCENTrdx] = ACTIONS(166),
    [anon_sym_PERCENTrsi] = ACTIONS(166),
    [anon_sym_PERCENTrdi] = ACTIONS(166),
    [anon_sym_PERCENTrbp] = ACTIONS(166),
    [anon_sym_PERCENTrsp] = ACTIONS(166),
    [anon_sym_PERCENTr8] = ACTIONS(84),
    [anon_sym_PERCENTr9] = ACTIONS(84),
    [anon_sym_PERCENTr10] = ACTIONS(84),
    [anon_sym_PERCENTr11] = ACTIONS(84),
    [anon_sym_PERCENTr12] = ACTIONS(84),
    [anon_sym_PERCENTr13] = ACTIONS(84),
    [anon_sym_PERCENTr14] = ACTIONS(84),
    [anon_sym_PERCENTr15] = ACTIONS(84),
    [anon_sym_PERCENTeax] = ACTIONS(168),
    [anon_sym_PERCENTecx] = ACTIONS(168),
    [anon_sym_PERCENTedx] = ACTIONS(168),
    [anon_sym_PERCENTebx] = ACTIONS(168),
    [anon_sym_PERCENTesi] = ACTIONS(168),
    [anon_sym_PERCENTedi] = ACTIONS(168),
    [anon_sym_PERCENTebp] = ACTIONS(168),
    [anon_sym_PERCENTesp] = ACTIONS(168),
    [anon_sym_PERCENTr8d] = ACTIONS(168),
    [anon_sym_PERCENTr9d] = ACTIONS(168),
    [anon_sym_PERCENTr10d] = ACTIONS(168),
    [anon_sym_PERCENTr11d] = ACTIONS(168),
    [anon_sym_PERCENTr12d] = ACTIONS(168),
    [anon_sym_PERCENTr13d] = ACTIONS(168),
    [anon_sym_PERCENTr14d] = ACTIONS(168),
    [anon_sym_PERCENTr15d] = ACTIONS(168),
    [anon_sym_PERCENTax] = ACTIONS(170),
    [anon_sym_PERCENTcx] = ACTIONS(170),
    [anon_sym_PERCENTdx] = ACTIONS(170),
    [anon_sym_PERCENTbx] = ACTIONS(170),
    [anon_sym_PERCENTsi] = ACTIONS(88),
    [anon_sym_PERCENTdi] = ACTIONS(88),
    [anon_sym_PERCENTsp] = ACTIONS(88),
    [anon_sym_PERCENTbp] = ACTIONS(88),
    [anon_sym_PERCENTr8w] = ACTIONS(170),
    [anon_sym_PERCENTr9w] = ACTIONS(170),
    [anon_sym_PERCENTr10w] = ACTIONS(170),
    [anon_sym_PERCENTr11w] = ACTIONS(170),
    [anon_sym_PERCENTr12w] = ACTIONS(170),
    [anon_sym_PERCENTr13w] = ACTIONS(170),
    [anon_sym_PERCENTr14w] = ACTIONS(170),
    [anon_sym_PERCENTr15w] = ACTIONS(170),
    [anon_sym_PERCENTal] = ACTIONS(172),
    [anon_sym_PERCENTcl] = ACTIONS(172),
    [anon_sym_PERCENTdl] = ACTIONS(172),
    [anon_sym_PERCENTbl] = ACTIONS(172),
    [anon_sym_PERCENTsil] = ACTIONS(172),
    [anon_sym_PERCENTdil] = ACTIONS(172),
    [anon_sym_PERCENTspl] = ACTIONS(172),
    [anon_sym_PERCENTbpl] = ACTIONS(172),
    [anon_sym_PERCENTr8b] = ACTIONS(172),
    [anon_sym_PERCENTr9b] = ACTIONS(172),
    [anon_sym_PERCENTr10b] = ACTIONS(172),
    [anon_sym_PERCENTr11b] = ACTIONS(172),
    [anon_sym_PERCENTr12b] = ACTIONS(172),
    [anon_sym_PERCENTr13b] = ACTIONS(172),
    [anon_sym_PERCENTr14b] = ACTIONS(172),
    [anon_sym_PERCENTr15b] = ACTIONS(172),
    [anon_sym_PERCENTcr0] = ACTIONS(176),
    [anon_sym_PERCENTcr2] = ACTIONS(176),
    [anon_sym_PERCENTcr3] = ACTIONS(176),
    [anon_sym_PERCENTcr4] = ACTIONS(176),
    [anon_sym_PERCENTrip] = ACTIONS(178),
    [anon_sym_PERCENTeip] = ACTIONS(178),
    [anon_sym_PERCENTip] = ACTIONS(178),
    [anon_sym_PERCENTst] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(104),
  },
  [60] = {
    [sym_registerOperand] = STATE(83),
    [sym_segmentRegisterOperand] = STATE(90),
    [sym_generalRegisterOperand] = STATE(90),
    [sym_generalRegister64Bits] = STATE(92),
    [sym_generalRegister32Bits] = STATE(92),
    [sym_generalRegister16Bits] = STATE(92),
    [sym_generalRegister8Bits] = STATE(92),
    [sym_controlRegisterOperand] = STATE(90),
    [sym_instructionRegisterOperand] = STATE(90),
    [sym_floatRegisterOperand] = STATE(90),
    [sym_otherRegisterOperand] = STATE(90),
    [anon_sym_PERCENTss] = ACTIONS(164),
    [anon_sym_PERCENTcs] = ACTIONS(164),
    [anon_sym_PERCENTds] = ACTIONS(164),
    [anon_sym_PERCENTes] = ACTIONS(82),
    [anon_sym_PERCENTfs] = ACTIONS(164),
    [anon_sym_PERCENTgs] = ACTIONS(164),
    [anon_sym_PERCENTrax] = ACTIONS(166),
    [anon_sym_PERCENTrbx] = ACTIONS(166),
    [anon_sym_PERCENTrcx] = ACTIONS(166),
    [anon_sym_PERCENTrdx] = ACTIONS(166),
    [anon_sym_PERCENTrsi] = ACTIONS(166),
    [anon_sym_PERCENTrdi] = ACTIONS(166),
    [anon_sym_PERCENTrbp] = ACTIONS(166),
    [anon_sym_PERCENTrsp] = ACTIONS(166),
    [anon_sym_PERCENTr8] = ACTIONS(84),
    [anon_sym_PERCENTr9] = ACTIONS(84),
    [anon_sym_PERCENTr10] = ACTIONS(84),
    [anon_sym_PERCENTr11] = ACTIONS(84),
    [anon_sym_PERCENTr12] = ACTIONS(84),
    [anon_sym_PERCENTr13] = ACTIONS(84),
    [anon_sym_PERCENTr14] = ACTIONS(84),
    [anon_sym_PERCENTr15] = ACTIONS(84),
    [anon_sym_PERCENTeax] = ACTIONS(168),
    [anon_sym_PERCENTecx] = ACTIONS(168),
    [anon_sym_PERCENTedx] = ACTIONS(168),
    [anon_sym_PERCENTebx] = ACTIONS(168),
    [anon_sym_PERCENTesi] = ACTIONS(168),
    [anon_sym_PERCENTedi] = ACTIONS(168),
    [anon_sym_PERCENTebp] = ACTIONS(168),
    [anon_sym_PERCENTesp] = ACTIONS(168),
    [anon_sym_PERCENTr8d] = ACTIONS(168),
    [anon_sym_PERCENTr9d] = ACTIONS(168),
    [anon_sym_PERCENTr10d] = ACTIONS(168),
    [anon_sym_PERCENTr11d] = ACTIONS(168),
    [anon_sym_PERCENTr12d] = ACTIONS(168),
    [anon_sym_PERCENTr13d] = ACTIONS(168),
    [anon_sym_PERCENTr14d] = ACTIONS(168),
    [anon_sym_PERCENTr15d] = ACTIONS(168),
    [anon_sym_PERCENTax] = ACTIONS(170),
    [anon_sym_PERCENTcx] = ACTIONS(170),
    [anon_sym_PERCENTdx] = ACTIONS(170),
    [anon_sym_PERCENTbx] = ACTIONS(170),
    [anon_sym_PERCENTsi] = ACTIONS(88),
    [anon_sym_PERCENTdi] = ACTIONS(88),
    [anon_sym_PERCENTsp] = ACTIONS(88),
    [anon_sym_PERCENTbp] = ACTIONS(88),
    [anon_sym_PERCENTr8w] = ACTIONS(170),
    [anon_sym_PERCENTr9w] = ACTIONS(170),
    [anon_sym_PERCENTr10w] = ACTIONS(170),
    [anon_sym_PERCENTr11w] = ACTIONS(170),
    [anon_sym_PERCENTr12w] = ACTIONS(170),
    [anon_sym_PERCENTr13w] = ACTIONS(170),
    [anon_sym_PERCENTr14w] = ACTIONS(170),
    [anon_sym_PERCENTr15w] = ACTIONS(170),
    [anon_sym_PERCENTal] = ACTIONS(172),
    [anon_sym_PERCENTcl] = ACTIONS(172),
    [anon_sym_PERCENTdl] = ACTIONS(172),
    [anon_sym_PERCENTbl] = ACTIONS(172),
    [anon_sym_PERCENTsil] = ACTIONS(172),
    [anon_sym_PERCENTdil] = ACTIONS(172),
    [anon_sym_PERCENTspl] = ACTIONS(172),
    [anon_sym_PERCENTbpl] = ACTIONS(172),
    [anon_sym_PERCENTr8b] = ACTIONS(172),
    [anon_sym_PERCENTr9b] = ACTIONS(172),
    [anon_sym_PERCENTr10b] = ACTIONS(172),
    [anon_sym_PERCENTr11b] = ACTIONS(172),
    [anon_sym_PERCENTr12b] = ACTIONS(172),
    [anon_sym_PERCENTr13b] = ACTIONS(172),
    [anon_sym_PERCENTr14b] = ACTIONS(172),
    [anon_sym_PERCENTr15b] = ACTIONS(172),
    [anon_sym_PERCENTcr0] = ACTIONS(176),
    [anon_sym_PERCENTcr2] = ACTIONS(176),
    [anon_sym_PERCENTcr3] = ACTIONS(176),
    [anon_sym_PERCENTcr4] = ACTIONS(176),
    [anon_sym_PERCENTrip] = ACTIONS(178),
    [anon_sym_PERCENTeip] = ACTIONS(178),
    [anon_sym_PERCENTip] = ACTIONS(178),
    [anon_sym_PERCENTst] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(104),
  },
  [61] = {
    [sym_registerOperand] = STATE(187),
    [sym_segmentRegisterOperand] = STATE(175),
    [sym_generalRegisterOperand] = STATE(175),
    [sym_generalRegister64Bits] = STATE(174),
    [sym_generalRegister32Bits] = STATE(174),
    [sym_generalRegister16Bits] = STATE(174),
    [sym_generalRegister8Bits] = STATE(174),
    [sym_controlRegisterOperand] = STATE(175),
    [sym_instructionRegisterOperand] = STATE(175),
    [sym_floatRegisterOperand] = STATE(175),
    [sym_otherRegisterOperand] = STATE(175),
    [anon_sym_PERCENTss] = ACTIONS(186),
    [anon_sym_PERCENTcs] = ACTIONS(186),
    [anon_sym_PERCENTds] = ACTIONS(186),
    [anon_sym_PERCENTes] = ACTIONS(188),
    [anon_sym_PERCENTfs] = ACTIONS(186),
    [anon_sym_PERCENTgs] = ACTIONS(186),
    [anon_sym_PERCENTrax] = ACTIONS(190),
    [anon_sym_PERCENTrbx] = ACTIONS(190),
    [anon_sym_PERCENTrcx] = ACTIONS(190),
    [anon_sym_PERCENTrdx] = ACTIONS(190),
    [anon_sym_PERCENTrsi] = ACTIONS(190),
    [anon_sym_PERCENTrdi] = ACTIONS(190),
    [anon_sym_PERCENTrbp] = ACTIONS(190),
    [anon_sym_PERCENTrsp] = ACTIONS(190),
    [anon_sym_PERCENTr8] = ACTIONS(192),
    [anon_sym_PERCENTr9] = ACTIONS(192),
    [anon_sym_PERCENTr10] = ACTIONS(192),
    [anon_sym_PERCENTr11] = ACTIONS(192),
    [anon_sym_PERCENTr12] = ACTIONS(192),
    [anon_sym_PERCENTr13] = ACTIONS(192),
    [anon_sym_PERCENTr14] = ACTIONS(192),
    [anon_sym_PERCENTr15] = ACTIONS(192),
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
    [anon_sym_PERCENTax] = ACTIONS(196),
    [anon_sym_PERCENTcx] = ACTIONS(196),
    [anon_sym_PERCENTdx] = ACTIONS(196),
    [anon_sym_PERCENTbx] = ACTIONS(196),
    [anon_sym_PERCENTsi] = ACTIONS(198),
    [anon_sym_PERCENTdi] = ACTIONS(198),
    [anon_sym_PERCENTsp] = ACTIONS(198),
    [anon_sym_PERCENTbp] = ACTIONS(198),
    [anon_sym_PERCENTr8w] = ACTIONS(196),
    [anon_sym_PERCENTr9w] = ACTIONS(196),
    [anon_sym_PERCENTr10w] = ACTIONS(196),
    [anon_sym_PERCENTr11w] = ACTIONS(196),
    [anon_sym_PERCENTr12w] = ACTIONS(196),
    [anon_sym_PERCENTr13w] = ACTIONS(196),
    [anon_sym_PERCENTr14w] = ACTIONS(196),
    [anon_sym_PERCENTr15w] = ACTIONS(196),
    [anon_sym_PERCENTal] = ACTIONS(200),
    [anon_sym_PERCENTcl] = ACTIONS(200),
    [anon_sym_PERCENTdl] = ACTIONS(200),
    [anon_sym_PERCENTbl] = ACTIONS(200),
    [anon_sym_PERCENTsil] = ACTIONS(200),
    [anon_sym_PERCENTdil] = ACTIONS(200),
    [anon_sym_PERCENTspl] = ACTIONS(200),
    [anon_sym_PERCENTbpl] = ACTIONS(200),
    [anon_sym_PERCENTr8b] = ACTIONS(200),
    [anon_sym_PERCENTr9b] = ACTIONS(200),
    [anon_sym_PERCENTr10b] = ACTIONS(200),
    [anon_sym_PERCENTr11b] = ACTIONS(200),
    [anon_sym_PERCENTr12b] = ACTIONS(200),
    [anon_sym_PERCENTr13b] = ACTIONS(200),
    [anon_sym_PERCENTr14b] = ACTIONS(200),
    [anon_sym_PERCENTr15b] = ACTIONS(200),
    [anon_sym_PERCENTcr0] = ACTIONS(204),
    [anon_sym_PERCENTcr2] = ACTIONS(204),
    [anon_sym_PERCENTcr3] = ACTIONS(204),
    [anon_sym_PERCENTcr4] = ACTIONS(204),
    [anon_sym_PERCENTrip] = ACTIONS(206),
    [anon_sym_PERCENTeip] = ACTIONS(206),
    [anon_sym_PERCENTip] = ACTIONS(206),
    [anon_sym_PERCENTst] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(210),
  },
  [62] = {
    [aux_sym_operand_repeat1] = STATE(62),
    [sym__comma] = ACTIONS(340),
    [aux_sym_operand_token1] = ACTIONS(342),
    [anon_sym_PERCENTss] = ACTIONS(340),
    [anon_sym_PERCENTcs] = ACTIONS(340),
    [anon_sym_PERCENTds] = ACTIONS(340),
    [anon_sym_PERCENTes] = ACTIONS(345),
    [anon_sym_PERCENTfs] = ACTIONS(340),
    [anon_sym_PERCENTgs] = ACTIONS(340),
    [anon_sym_PERCENTrax] = ACTIONS(340),
    [anon_sym_PERCENTrbx] = ACTIONS(340),
    [anon_sym_PERCENTrcx] = ACTIONS(340),
    [anon_sym_PERCENTrdx] = ACTIONS(340),
    [anon_sym_PERCENTrsi] = ACTIONS(340),
    [anon_sym_PERCENTrdi] = ACTIONS(340),
    [anon_sym_PERCENTrbp] = ACTIONS(340),
    [anon_sym_PERCENTrsp] = ACTIONS(340),
    [anon_sym_PERCENTr8] = ACTIONS(345),
    [anon_sym_PERCENTr9] = ACTIONS(345),
    [anon_sym_PERCENTr10] = ACTIONS(345),
    [anon_sym_PERCENTr11] = ACTIONS(345),
    [anon_sym_PERCENTr12] = ACTIONS(345),
    [anon_sym_PERCENTr13] = ACTIONS(345),
    [anon_sym_PERCENTr14] = ACTIONS(345),
    [anon_sym_PERCENTr15] = ACTIONS(345),
    [anon_sym_PERCENTeax] = ACTIONS(340),
    [anon_sym_PERCENTecx] = ACTIONS(340),
    [anon_sym_PERCENTedx] = ACTIONS(340),
    [anon_sym_PERCENTebx] = ACTIONS(340),
    [anon_sym_PERCENTesi] = ACTIONS(340),
    [anon_sym_PERCENTedi] = ACTIONS(340),
    [anon_sym_PERCENTebp] = ACTIONS(340),
    [anon_sym_PERCENTesp] = ACTIONS(340),
    [anon_sym_PERCENTr8d] = ACTIONS(340),
    [anon_sym_PERCENTr9d] = ACTIONS(340),
    [anon_sym_PERCENTr10d] = ACTIONS(340),
    [anon_sym_PERCENTr11d] = ACTIONS(340),
    [anon_sym_PERCENTr12d] = ACTIONS(340),
    [anon_sym_PERCENTr13d] = ACTIONS(340),
    [anon_sym_PERCENTr14d] = ACTIONS(340),
    [anon_sym_PERCENTr15d] = ACTIONS(340),
    [anon_sym_PERCENTax] = ACTIONS(340),
    [anon_sym_PERCENTcx] = ACTIONS(340),
    [anon_sym_PERCENTdx] = ACTIONS(340),
    [anon_sym_PERCENTbx] = ACTIONS(340),
    [anon_sym_PERCENTsi] = ACTIONS(345),
    [anon_sym_PERCENTdi] = ACTIONS(345),
    [anon_sym_PERCENTsp] = ACTIONS(345),
    [anon_sym_PERCENTbp] = ACTIONS(345),
    [anon_sym_PERCENTr8w] = ACTIONS(340),
    [anon_sym_PERCENTr9w] = ACTIONS(340),
    [anon_sym_PERCENTr10w] = ACTIONS(340),
    [anon_sym_PERCENTr11w] = ACTIONS(340),
    [anon_sym_PERCENTr12w] = ACTIONS(340),
    [anon_sym_PERCENTr13w] = ACTIONS(340),
    [anon_sym_PERCENTr14w] = ACTIONS(340),
    [anon_sym_PERCENTr15w] = ACTIONS(340),
    [anon_sym_PERCENTal] = ACTIONS(340),
    [anon_sym_PERCENTcl] = ACTIONS(340),
    [anon_sym_PERCENTdl] = ACTIONS(340),
    [anon_sym_PERCENTbl] = ACTIONS(340),
    [anon_sym_PERCENTsil] = ACTIONS(340),
    [anon_sym_PERCENTdil] = ACTIONS(340),
    [anon_sym_PERCENTspl] = ACTIONS(340),
    [anon_sym_PERCENTbpl] = ACTIONS(340),
    [anon_sym_PERCENTr8b] = ACTIONS(340),
    [anon_sym_PERCENTr9b] = ACTIONS(340),
    [anon_sym_PERCENTr10b] = ACTIONS(340),
    [anon_sym_PERCENTr11b] = ACTIONS(340),
    [anon_sym_PERCENTr12b] = ACTIONS(340),
    [anon_sym_PERCENTr13b] = ACTIONS(340),
    [anon_sym_PERCENTr14b] = ACTIONS(340),
    [anon_sym_PERCENTr15b] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(340),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_PERCENTcr0] = ACTIONS(340),
    [anon_sym_PERCENTcr2] = ACTIONS(340),
    [anon_sym_PERCENTcr3] = ACTIONS(340),
    [anon_sym_PERCENTcr4] = ACTIONS(340),
    [anon_sym_PERCENTrip] = ACTIONS(340),
    [anon_sym_PERCENTeip] = ACTIONS(340),
    [anon_sym_PERCENTip] = ACTIONS(340),
    [anon_sym_PERCENTst] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(345),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(349), 1,
      sym__line_break,
    ACTIONS(351), 1,
      anon_sym_jmpq,
    ACTIONS(354), 1,
      anon_sym_STAR,
    ACTIONS(357), 1,
      aux_sym_otherFnOperands_token1,
    STATE(63), 1,
      aux_sym_control_repeat1,
    STATE(143), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(205), 1,
      sym_fnOperand,
    ACTIONS(347), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(190), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [30] = 9,
    ACTIONS(362), 1,
      sym__line_break,
    ACTIONS(364), 1,
      anon_sym_jmpq,
    ACTIONS(366), 1,
      anon_sym_STAR,
    ACTIONS(368), 1,
      aux_sym_otherFnOperands_token1,
    STATE(65), 1,
      aux_sym_control_repeat1,
    STATE(71), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(131), 1,
      sym_fnOperand,
    ACTIONS(360), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(133), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [60] = 9,
    ACTIONS(364), 1,
      anon_sym_jmpq,
    ACTIONS(366), 1,
      anon_sym_STAR,
    ACTIONS(368), 1,
      aux_sym_otherFnOperands_token1,
    ACTIONS(372), 1,
      sym__line_break,
    STATE(63), 1,
      aux_sym_control_repeat1,
    STATE(71), 1,
      aux_sym_otherFnOperands_repeat1,
    STATE(117), 1,
      sym_fnOperand,
    ACTIONS(370), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(133), 2,
      sym_indirectOperands,
      sym_otherFnOperands,
  [90] = 3,
    ACTIONS(374), 1,
      aux_sym_operand_token1,
    STATE(66), 1,
      aux_sym_operand_repeat1,
    ACTIONS(345), 8,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [107] = 4,
    ACTIONS(379), 1,
      aux_sym_operand_token1,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      aux_sym_operand_repeat1,
    ACTIONS(377), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [125] = 4,
    ACTIONS(379), 1,
      aux_sym_operand_token1,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      aux_sym_operand_repeat1,
    ACTIONS(383), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [142] = 3,
    ACTIONS(389), 1,
      aux_sym_immediateOperand_token1,
    STATE(69), 1,
      aux_sym_immediateOperand_repeat1,
    ACTIONS(387), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [156] = 6,
    ACTIONS(5), 1,
      aux_sym__address_token1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym__machine_code,
    STATE(154), 1,
      aux_sym__address_repeat1,
    STATE(198), 1,
      sym__address,
    STATE(73), 2,
      sym__line,
      aux_sym_prog_repeat1,
  [176] = 3,
    ACTIONS(396), 1,
      aux_sym_otherFnOperands_token1,
    STATE(78), 1,
      aux_sym_otherFnOperands_repeat1,
    ACTIONS(394), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [190] = 3,
    ACTIONS(379), 1,
      aux_sym_operand_token1,
    STATE(66), 1,
      aux_sym_operand_repeat1,
    ACTIONS(398), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [204] = 6,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      aux_sym__address_token1,
    STATE(2), 1,
      sym__machine_code,
    STATE(154), 1,
      aux_sym__address_repeat1,
    STATE(198), 1,
      sym__address,
    STATE(73), 2,
      sym__line,
      aux_sym_prog_repeat1,
  [224] = 3,
    ACTIONS(407), 1,
      aux_sym_immediateOperand_token1,
    STATE(69), 1,
      aux_sym_immediateOperand_repeat1,
    ACTIONS(405), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [238] = 4,
    ACTIONS(340), 1,
      anon_sym_,
    ACTIONS(409), 1,
      aux_sym_operand_token1,
    STATE(75), 1,
      aux_sym_operand_repeat1,
    ACTIONS(345), 4,
      sym__comma,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [254] = 2,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [266] = 1,
    ACTIONS(416), 7,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      anon_sym_COLON,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [276] = 3,
    ACTIONS(420), 1,
      aux_sym_otherFnOperands_token1,
    STATE(78), 1,
      aux_sym_otherFnOperands_repeat1,
    ACTIONS(418), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [290] = 6,
    ACTIONS(423), 1,
      aux_sym_operand_token1,
    ACTIONS(425), 1,
      anon_sym_DASH,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      aux_sym_operand_repeat1,
    STATE(210), 1,
      sym_memoryAbsoluteOperand,
    STATE(291), 1,
      sym_offset,
  [309] = 1,
    ACTIONS(429), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [318] = 1,
    ACTIONS(431), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [327] = 2,
    ACTIONS(435), 1,
      anon_sym_LBRACE,
    ACTIONS(433), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [338] = 2,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [349] = 1,
    ACTIONS(441), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [358] = 5,
    ACTIONS(443), 1,
      anon_sym_,
    ACTIONS(445), 1,
      aux_sym_operand_token1,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      aux_sym_operand_repeat1,
    ACTIONS(377), 2,
      sym__comma,
      anon_sym_RPAREN,
  [375] = 6,
    ACTIONS(449), 1,
      aux_sym_operand_token1,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      aux_sym_operand_repeat1,
    STATE(110), 1,
      sym_memoryAbsoluteOperand,
    STATE(282), 1,
      sym_offset,
  [394] = 2,
    ACTIONS(457), 1,
      anon_sym_LBRACE,
    ACTIONS(455), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [405] = 2,
    ACTIONS(461), 1,
      sym__line_break,
    ACTIONS(459), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_jmpq,
      anon_sym_STAR,
      aux_sym_otherFnOperands_token1,
  [416] = 2,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [427] = 1,
    ACTIONS(467), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [436] = 2,
    ACTIONS(349), 1,
      sym__line_break,
    ACTIONS(347), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      anon_sym_jmpq,
      anon_sym_STAR,
      aux_sym_otherFnOperands_token1,
  [447] = 1,
    ACTIONS(469), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [456] = 2,
    ACTIONS(471), 1,
      anon_sym_COLON,
    ACTIONS(467), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [467] = 1,
    ACTIONS(473), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [476] = 2,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [487] = 1,
    ACTIONS(479), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [496] = 1,
    ACTIONS(481), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [505] = 1,
    ACTIONS(483), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [514] = 1,
    ACTIONS(485), 6,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
      anon_sym_RPAREN,
  [523] = 2,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(487), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [534] = 1,
    ACTIONS(491), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [542] = 5,
    ACTIONS(383), 1,
      sym__comma,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      aux_sym_operand_token1,
    ACTIONS(493), 1,
      anon_sym_,
    STATE(75), 1,
      aux_sym_operand_repeat1,
  [558] = 1,
    ACTIONS(495), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [566] = 2,
    STATE(278), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [576] = 1,
    ACTIONS(499), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [584] = 2,
    STATE(277), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [594] = 1,
    ACTIONS(501), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [602] = 1,
    ACTIONS(503), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [610] = 2,
    STATE(269), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [620] = 1,
    ACTIONS(505), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [628] = 2,
    ACTIONS(507), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(158), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [638] = 1,
    ACTIONS(509), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [646] = 1,
    ACTIONS(475), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [654] = 1,
    ACTIONS(511), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [662] = 1,
    ACTIONS(513), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [670] = 4,
    ACTIONS(182), 1,
      aux_sym_operand_token1,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      aux_sym_operand_repeat1,
    ACTIONS(443), 2,
      sym__comma,
      anon_sym_RPAREN,
  [684] = 2,
    ACTIONS(519), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(517), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [694] = 2,
    STATE(266), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [704] = 1,
    ACTIONS(521), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [712] = 2,
    STATE(268), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [722] = 2,
    STATE(270), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [732] = 1,
    ACTIONS(523), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [740] = 2,
    ACTIONS(507), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(525), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [750] = 2,
    STATE(263), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [760] = 2,
    STATE(284), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [770] = 1,
    ACTIONS(527), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [778] = 1,
    ACTIONS(529), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [786] = 1,
    ACTIONS(437), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [794] = 2,
    STATE(274), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [804] = 2,
    STATE(264), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [814] = 2,
    ACTIONS(519), 2,
      sym__comma,
      anon_sym_,
    ACTIONS(370), 3,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
  [824] = 2,
    STATE(285), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [834] = 1,
    ACTIONS(531), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [842] = 1,
    ACTIONS(533), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [850] = 1,
    ACTIONS(535), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [858] = 1,
    ACTIONS(537), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [866] = 2,
    STATE(273), 1,
      sym_scale,
    ACTIONS(497), 4,
      anon_sym_1,
      anon_sym_2,
      anon_sym_4,
      anon_sym_8,
  [876] = 1,
    ACTIONS(539), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [884] = 1,
    ACTIONS(541), 5,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      sym__line_break,
      sym__comma,
      anon_sym_,
  [892] = 4,
    ACTIONS(543), 1,
      aux_sym_operand_token1,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      aux_sym_operand_repeat1,
    STATE(288), 1,
      sym_offset,
  [905] = 4,
    ACTIONS(543), 1,
      aux_sym_operand_token1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      aux_sym_operand_repeat1,
    STATE(293), 1,
      sym_offset,
  [918] = 2,
    ACTIONS(549), 1,
      anon_sym_,
    ACTIONS(416), 3,
      anon_sym_COLON,
      sym__comma,
      anon_sym_RPAREN,
  [927] = 4,
    ACTIONS(394), 1,
      sym__comma,
    ACTIONS(551), 1,
      anon_sym_,
    ACTIONS(553), 1,
      aux_sym_otherFnOperands_token1,
    STATE(150), 1,
      aux_sym_otherFnOperands_repeat1,
  [940] = 4,
    ACTIONS(398), 1,
      sym__comma,
    ACTIONS(445), 1,
      aux_sym_operand_token1,
    ACTIONS(555), 1,
      anon_sym_,
    STATE(75), 1,
      aux_sym_operand_repeat1,
  [953] = 4,
    ACTIONS(405), 1,
      sym__comma,
    ACTIONS(557), 1,
      anon_sym_,
    ACTIONS(559), 1,
      aux_sym_immediateOperand_token1,
    STATE(151), 1,
      aux_sym_immediateOperand_repeat1,
  [966] = 3,
    ACTIONS(561), 1,
      sym__line_break,
    STATE(303), 1,
      sym_comment,
    ACTIONS(7), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [977] = 3,
    ACTIONS(563), 1,
      anon_sym_,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 2,
      sym__comma,
      anon_sym_RPAREN,
  [988] = 4,
    ACTIONS(543), 1,
      aux_sym_operand_token1,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      aux_sym_operand_repeat1,
    STATE(286), 1,
      sym_offset,
  [1001] = 4,
    ACTIONS(543), 1,
      aux_sym_operand_token1,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      aux_sym_operand_repeat1,
    STATE(272), 1,
      sym_offset,
  [1014] = 4,
    ACTIONS(418), 1,
      sym__comma,
    ACTIONS(571), 1,
      anon_sym_,
    ACTIONS(573), 1,
      aux_sym_otherFnOperands_token1,
    STATE(150), 1,
      aux_sym_otherFnOperands_repeat1,
  [1027] = 4,
    ACTIONS(387), 1,
      sym__comma,
    ACTIONS(576), 1,
      anon_sym_,
    ACTIONS(578), 1,
      aux_sym_immediateOperand_token1,
    STATE(151), 1,
      aux_sym_immediateOperand_repeat1,
  [1040] = 2,
    ACTIONS(581), 1,
      anon_sym_,
    ACTIONS(479), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1048] = 3,
    ACTIONS(487), 1,
      sym__comma,
    ACTIONS(583), 1,
      anon_sym_,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
  [1058] = 3,
    ACTIONS(587), 1,
      aux_sym__address_token1,
    ACTIONS(589), 1,
      anon_sym_COLON,
    STATE(156), 1,
      aux_sym__address_repeat1,
  [1068] = 2,
    ACTIONS(593), 1,
      sym__line_break,
    ACTIONS(591), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
  [1076] = 3,
    ACTIONS(595), 1,
      aux_sym__address_token1,
    ACTIONS(598), 1,
      anon_sym_COLON,
    STATE(156), 1,
      aux_sym__address_repeat1,
  [1086] = 3,
    ACTIONS(600), 1,
      aux_sym_operand_token2,
    ACTIONS(602), 1,
      anon_sym_GT,
    STATE(173), 1,
      aux_sym_operand_repeat2,
  [1096] = 3,
    ACTIONS(182), 1,
      aux_sym_operand_token1,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      aux_sym_operand_repeat1,
  [1106] = 3,
    ACTIONS(606), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1116] = 3,
    ACTIONS(606), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1126] = 3,
    ACTIONS(182), 1,
      aux_sym_operand_token1,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_operand_repeat1,
  [1136] = 3,
    ACTIONS(606), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1146] = 3,
    ACTIONS(606), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1156] = 3,
    ACTIONS(606), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1166] = 3,
    ACTIONS(606), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1176] = 3,
    ACTIONS(606), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1186] = 3,
    ACTIONS(606), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1196] = 3,
    ACTIONS(182), 1,
      aux_sym_operand_token1,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_operand_repeat1,
  [1206] = 3,
    ACTIONS(600), 1,
      aux_sym_operand_token2,
    ACTIONS(628), 1,
      anon_sym_GT,
    STATE(173), 1,
      aux_sym_operand_repeat2,
  [1216] = 2,
    ACTIONS(630), 1,
      anon_sym_,
    ACTIONS(431), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1224] = 3,
    ACTIONS(632), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1234] = 2,
    ACTIONS(637), 1,
      anon_sym_,
    ACTIONS(441), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1242] = 3,
    ACTIONS(639), 1,
      aux_sym_operand_token2,
    ACTIONS(642), 1,
      anon_sym_GT,
    STATE(173), 1,
      aux_sym_operand_repeat2,
  [1252] = 2,
    ACTIONS(644), 1,
      anon_sym_,
    ACTIONS(469), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1260] = 2,
    ACTIONS(646), 1,
      anon_sym_,
    ACTIONS(467), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1268] = 2,
    ACTIONS(648), 1,
      anon_sym_,
    ACTIONS(485), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1276] = 2,
    ACTIONS(650), 1,
      anon_sym_,
    ACTIONS(429), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1284] = 2,
    ACTIONS(652), 1,
      anon_sym_,
    ACTIONS(483), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1292] = 2,
    ACTIONS(654), 1,
      anon_sym_,
    ACTIONS(481), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1300] = 2,
    ACTIONS(656), 1,
      anon_sym_,
    ACTIONS(473), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1308] = 3,
    ACTIONS(455), 1,
      sym__comma,
    ACTIONS(658), 1,
      anon_sym_,
    ACTIONS(660), 1,
      anon_sym_LBRACE,
  [1318] = 3,
    ACTIONS(463), 1,
      sym__comma,
    ACTIONS(662), 1,
      anon_sym_,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
  [1328] = 2,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    ACTIONS(563), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1336] = 3,
    ACTIONS(606), 1,
      aux_sym_memoryIndirectOperand_token1,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1346] = 3,
    ACTIONS(475), 1,
      sym__comma,
    ACTIONS(670), 1,
      anon_sym_,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
  [1356] = 3,
    ACTIONS(467), 1,
      sym__comma,
    ACTIONS(646), 1,
      anon_sym_,
    ACTIONS(674), 1,
      anon_sym_COLON,
  [1366] = 3,
    ACTIONS(437), 1,
      sym__comma,
    ACTIONS(676), 1,
      anon_sym_,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
  [1376] = 3,
    ACTIONS(433), 1,
      sym__comma,
    ACTIONS(680), 1,
      anon_sym_,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
  [1386] = 3,
    ACTIONS(182), 1,
      aux_sym_operand_token1,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_operand_repeat1,
  [1396] = 2,
    ACTIONS(531), 1,
      sym__comma,
    ACTIONS(686), 1,
      anon_sym_,
  [1403] = 2,
    ACTIONS(688), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(163), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1410] = 1,
    ACTIONS(648), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1415] = 2,
    ACTIONS(690), 1,
      aux_sym_operand_token1,
    STATE(116), 1,
      aux_sym_operand_repeat1,
  [1422] = 2,
    ACTIONS(513), 1,
      sym__comma,
    ACTIONS(692), 1,
      anon_sym_,
  [1429] = 1,
    ACTIONS(646), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1434] = 1,
    ACTIONS(644), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1439] = 2,
    ACTIONS(503), 1,
      sym__comma,
    ACTIONS(694), 1,
      anon_sym_,
  [1446] = 2,
    ACTIONS(696), 1,
      anon_sym_COLON,
    STATE(4), 1,
      sym__colon,
  [1453] = 1,
    ACTIONS(698), 2,
      ts_builtin_sym_end,
      aux_sym__address_token1,
  [1458] = 1,
    ACTIONS(700), 2,
      ts_builtin_sym_end,
      aux_sym__address_token1,
  [1463] = 2,
    ACTIONS(702), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(164), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1470] = 2,
    ACTIONS(704), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(160), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1477] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
  [1484] = 2,
    ACTIONS(710), 1,
      aux_sym_operand_token1,
    STATE(161), 1,
      aux_sym_operand_repeat1,
  [1491] = 2,
    ACTIONS(519), 1,
      sym__comma,
    ACTIONS(712), 1,
      anon_sym_,
  [1498] = 2,
    ACTIONS(507), 1,
      sym__comma,
    ACTIONS(714), 1,
      anon_sym_,
  [1505] = 2,
    ACTIONS(716), 1,
      aux_sym_operand_token1,
    STATE(72), 1,
      aux_sym_operand_repeat1,
  [1512] = 2,
    ACTIONS(718), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(184), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1519] = 2,
    ACTIONS(511), 1,
      sym__comma,
    ACTIONS(720), 1,
      anon_sym_,
  [1526] = 2,
    ACTIONS(505), 1,
      sym__comma,
    ACTIONS(722), 1,
      anon_sym_,
  [1533] = 2,
    ACTIONS(475), 1,
      sym__comma,
    ACTIONS(670), 1,
      anon_sym_,
  [1540] = 2,
    ACTIONS(724), 1,
      aux_sym_operand_token2,
    STATE(157), 1,
      aux_sym_operand_repeat2,
  [1547] = 1,
    ACTIONS(637), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1552] = 2,
    ACTIONS(437), 1,
      sym__comma,
    ACTIONS(676), 1,
      anon_sym_,
  [1559] = 1,
    ACTIONS(630), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1564] = 2,
    ACTIONS(535), 1,
      sym__comma,
    ACTIONS(726), 1,
      anon_sym_,
  [1571] = 2,
    ACTIONS(537), 1,
      sym__comma,
    ACTIONS(728), 1,
      anon_sym_,
  [1578] = 2,
    ACTIONS(539), 1,
      sym__comma,
    ACTIONS(730), 1,
      anon_sym_,
  [1585] = 2,
    ACTIONS(541), 1,
      sym__comma,
    ACTIONS(732), 1,
      anon_sym_,
  [1592] = 2,
    ACTIONS(533), 1,
      sym__comma,
    ACTIONS(734), 1,
      anon_sym_,
  [1599] = 2,
    ACTIONS(527), 1,
      sym__comma,
    ACTIONS(736), 1,
      anon_sym_,
  [1606] = 2,
    ACTIONS(523), 1,
      sym__comma,
    ACTIONS(738), 1,
      anon_sym_,
  [1613] = 2,
    ACTIONS(521), 1,
      sym__comma,
    ACTIONS(740), 1,
      anon_sym_,
  [1620] = 2,
    ACTIONS(509), 1,
      sym__comma,
    ACTIONS(742), 1,
      anon_sym_,
  [1627] = 2,
    ACTIONS(501), 1,
      sym__comma,
    ACTIONS(744), 1,
      anon_sym_,
  [1634] = 2,
    ACTIONS(499), 1,
      sym__comma,
    ACTIONS(746), 1,
      anon_sym_,
  [1641] = 2,
    ACTIONS(491), 1,
      sym__comma,
    ACTIONS(748), 1,
      anon_sym_,
  [1648] = 2,
    ACTIONS(529), 1,
      sym__comma,
    ACTIONS(750), 1,
      anon_sym_,
  [1655] = 2,
    ACTIONS(752), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(162), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1662] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
  [1669] = 2,
    ACTIONS(756), 1,
      aux_sym_immediateOperand_token1,
    STATE(74), 1,
      aux_sym_immediateOperand_repeat1,
  [1676] = 2,
    ACTIONS(495), 1,
      sym__comma,
    ACTIONS(758), 1,
      anon_sym_,
  [1683] = 1,
    ACTIONS(652), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1688] = 1,
    ACTIONS(654), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1693] = 1,
    ACTIONS(581), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1698] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
  [1705] = 2,
    ACTIONS(762), 1,
      aux_sym_operand_token1,
    STATE(85), 1,
      aux_sym_operand_repeat1,
  [1712] = 1,
    ACTIONS(656), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1717] = 1,
    ACTIONS(549), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1722] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
  [1729] = 2,
    ACTIONS(766), 1,
      aux_sym_operand_token1,
    STATE(189), 1,
      aux_sym_operand_repeat1,
  [1736] = 2,
    ACTIONS(768), 1,
      aux_sym_operand_token1,
    STATE(67), 1,
      aux_sym_operand_repeat1,
  [1743] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [1750] = 2,
    ACTIONS(772), 1,
      aux_sym_operand_token1,
    STATE(144), 1,
      aux_sym_operand_repeat1,
  [1757] = 2,
    ACTIONS(774), 1,
      aux_sym_immediateOperand_token1,
    STATE(145), 1,
      aux_sym_immediateOperand_repeat1,
  [1764] = 2,
    ACTIONS(776), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(165), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1771] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
  [1778] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
  [1785] = 1,
    ACTIONS(650), 2,
      sym__comma,
      anon_sym_RPAREN,
  [1790] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
  [1797] = 1,
    ACTIONS(784), 2,
      ts_builtin_sym_end,
      aux_sym__address_token1,
  [1802] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
  [1809] = 2,
    ACTIONS(788), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(166), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1816] = 2,
    ACTIONS(790), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(167), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1823] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [1830] = 2,
    ACTIONS(794), 1,
      aux_sym_operand_token1,
    STATE(168), 1,
      aux_sym_operand_repeat1,
  [1837] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
  [1844] = 2,
    ACTIONS(706), 1,
      sym__comma,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
  [1851] = 2,
    ACTIONS(800), 1,
      aux_sym_operand_token2,
    STATE(169), 1,
      aux_sym_operand_repeat2,
  [1858] = 2,
    ACTIONS(802), 1,
      aux_sym_memoryIndirectOperand_token1,
    STATE(159), 1,
      aux_sym_memoryIndirectOperand_repeat1,
  [1865] = 1,
    ACTIONS(216), 1,
      sym__comma,
  [1869] = 1,
    ACTIONS(804), 1,
      sym__comma,
  [1873] = 1,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
  [1877] = 1,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
  [1881] = 1,
    ACTIONS(810), 1,
      sym__comma,
  [1885] = 1,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
  [1889] = 1,
    ACTIONS(308), 1,
      sym__comma,
  [1893] = 1,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
  [1897] = 1,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
  [1901] = 1,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
  [1905] = 1,
    ACTIONS(820), 1,
      sym__comma,
  [1909] = 1,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
  [1913] = 1,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
  [1917] = 1,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
  [1921] = 1,
    ACTIONS(828), 1,
      sym__comma,
  [1925] = 1,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
  [1929] = 1,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
  [1933] = 1,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [1937] = 1,
    ACTIONS(304), 1,
      sym__comma,
  [1941] = 1,
    ACTIONS(834), 1,
      sym__comma,
  [1945] = 1,
    ACTIONS(836), 1,
      sym__comma,
  [1949] = 1,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
  [1953] = 1,
    ACTIONS(838), 1,
      ts_builtin_sym_end,
  [1957] = 1,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
  [1961] = 1,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
  [1965] = 1,
    ACTIONS(844), 1,
      anon_sym_LPAREN,
  [1969] = 1,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
  [1973] = 1,
    ACTIONS(846), 1,
      anon_sym_LPAREN,
  [1977] = 1,
    ACTIONS(848), 1,
      sym__comma,
  [1981] = 1,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
  [1985] = 1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
  [1989] = 1,
    ACTIONS(852), 1,
      sym__comma,
  [1993] = 1,
    ACTIONS(854), 1,
      anon_sym_LPAREN,
  [1997] = 1,
    ACTIONS(856), 1,
      sym__comma,
  [2001] = 1,
    ACTIONS(858), 1,
      sym__comma,
  [2005] = 1,
    ACTIONS(860), 1,
      sym__comma,
  [2009] = 1,
    ACTIONS(862), 1,
      sym__comma,
  [2013] = 1,
    ACTIONS(864), 1,
      sym__comma,
  [2017] = 1,
    ACTIONS(561), 1,
      sym__line_break,
  [2021] = 1,
    ACTIONS(310), 1,
      sym__comma,
  [2025] = 1,
    ACTIONS(866), 1,
      sym__line_break,
  [2029] = 1,
    ACTIONS(868), 1,
      sym__comma,
  [2033] = 1,
    ACTIONS(870), 1,
      sym__line_break,
  [2037] = 1,
    ACTIONS(242), 1,
      sym__comma,
  [2041] = 1,
    ACTIONS(306), 1,
      sym__comma,
  [2045] = 1,
    ACTIONS(320), 1,
      sym__comma,
  [2049] = 1,
    ACTIONS(332), 1,
      sym__comma,
  [2053] = 1,
    ACTIONS(872), 1,
      sym__comma,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(63)] = 0,
  [SMALL_STATE(64)] = 30,
  [SMALL_STATE(65)] = 60,
  [SMALL_STATE(66)] = 90,
  [SMALL_STATE(67)] = 107,
  [SMALL_STATE(68)] = 125,
  [SMALL_STATE(69)] = 142,
  [SMALL_STATE(70)] = 156,
  [SMALL_STATE(71)] = 176,
  [SMALL_STATE(72)] = 190,
  [SMALL_STATE(73)] = 204,
  [SMALL_STATE(74)] = 224,
  [SMALL_STATE(75)] = 238,
  [SMALL_STATE(76)] = 254,
  [SMALL_STATE(77)] = 266,
  [SMALL_STATE(78)] = 276,
  [SMALL_STATE(79)] = 290,
  [SMALL_STATE(80)] = 309,
  [SMALL_STATE(81)] = 318,
  [SMALL_STATE(82)] = 327,
  [SMALL_STATE(83)] = 338,
  [SMALL_STATE(84)] = 349,
  [SMALL_STATE(85)] = 358,
  [SMALL_STATE(86)] = 375,
  [SMALL_STATE(87)] = 394,
  [SMALL_STATE(88)] = 405,
  [SMALL_STATE(89)] = 416,
  [SMALL_STATE(90)] = 427,
  [SMALL_STATE(91)] = 436,
  [SMALL_STATE(92)] = 447,
  [SMALL_STATE(93)] = 456,
  [SMALL_STATE(94)] = 467,
  [SMALL_STATE(95)] = 476,
  [SMALL_STATE(96)] = 487,
  [SMALL_STATE(97)] = 496,
  [SMALL_STATE(98)] = 505,
  [SMALL_STATE(99)] = 514,
  [SMALL_STATE(100)] = 523,
  [SMALL_STATE(101)] = 534,
  [SMALL_STATE(102)] = 542,
  [SMALL_STATE(103)] = 558,
  [SMALL_STATE(104)] = 566,
  [SMALL_STATE(105)] = 576,
  [SMALL_STATE(106)] = 584,
  [SMALL_STATE(107)] = 594,
  [SMALL_STATE(108)] = 602,
  [SMALL_STATE(109)] = 610,
  [SMALL_STATE(110)] = 620,
  [SMALL_STATE(111)] = 628,
  [SMALL_STATE(112)] = 638,
  [SMALL_STATE(113)] = 646,
  [SMALL_STATE(114)] = 654,
  [SMALL_STATE(115)] = 662,
  [SMALL_STATE(116)] = 670,
  [SMALL_STATE(117)] = 684,
  [SMALL_STATE(118)] = 694,
  [SMALL_STATE(119)] = 704,
  [SMALL_STATE(120)] = 712,
  [SMALL_STATE(121)] = 722,
  [SMALL_STATE(122)] = 732,
  [SMALL_STATE(123)] = 740,
  [SMALL_STATE(124)] = 750,
  [SMALL_STATE(125)] = 760,
  [SMALL_STATE(126)] = 770,
  [SMALL_STATE(127)] = 778,
  [SMALL_STATE(128)] = 786,
  [SMALL_STATE(129)] = 794,
  [SMALL_STATE(130)] = 804,
  [SMALL_STATE(131)] = 814,
  [SMALL_STATE(132)] = 824,
  [SMALL_STATE(133)] = 834,
  [SMALL_STATE(134)] = 842,
  [SMALL_STATE(135)] = 850,
  [SMALL_STATE(136)] = 858,
  [SMALL_STATE(137)] = 866,
  [SMALL_STATE(138)] = 876,
  [SMALL_STATE(139)] = 884,
  [SMALL_STATE(140)] = 892,
  [SMALL_STATE(141)] = 905,
  [SMALL_STATE(142)] = 918,
  [SMALL_STATE(143)] = 927,
  [SMALL_STATE(144)] = 940,
  [SMALL_STATE(145)] = 953,
  [SMALL_STATE(146)] = 966,
  [SMALL_STATE(147)] = 977,
  [SMALL_STATE(148)] = 988,
  [SMALL_STATE(149)] = 1001,
  [SMALL_STATE(150)] = 1014,
  [SMALL_STATE(151)] = 1027,
  [SMALL_STATE(152)] = 1040,
  [SMALL_STATE(153)] = 1048,
  [SMALL_STATE(154)] = 1058,
  [SMALL_STATE(155)] = 1068,
  [SMALL_STATE(156)] = 1076,
  [SMALL_STATE(157)] = 1086,
  [SMALL_STATE(158)] = 1096,
  [SMALL_STATE(159)] = 1106,
  [SMALL_STATE(160)] = 1116,
  [SMALL_STATE(161)] = 1126,
  [SMALL_STATE(162)] = 1136,
  [SMALL_STATE(163)] = 1146,
  [SMALL_STATE(164)] = 1156,
  [SMALL_STATE(165)] = 1166,
  [SMALL_STATE(166)] = 1176,
  [SMALL_STATE(167)] = 1186,
  [SMALL_STATE(168)] = 1196,
  [SMALL_STATE(169)] = 1206,
  [SMALL_STATE(170)] = 1216,
  [SMALL_STATE(171)] = 1224,
  [SMALL_STATE(172)] = 1234,
  [SMALL_STATE(173)] = 1242,
  [SMALL_STATE(174)] = 1252,
  [SMALL_STATE(175)] = 1260,
  [SMALL_STATE(176)] = 1268,
  [SMALL_STATE(177)] = 1276,
  [SMALL_STATE(178)] = 1284,
  [SMALL_STATE(179)] = 1292,
  [SMALL_STATE(180)] = 1300,
  [SMALL_STATE(181)] = 1308,
  [SMALL_STATE(182)] = 1318,
  [SMALL_STATE(183)] = 1328,
  [SMALL_STATE(184)] = 1336,
  [SMALL_STATE(185)] = 1346,
  [SMALL_STATE(186)] = 1356,
  [SMALL_STATE(187)] = 1366,
  [SMALL_STATE(188)] = 1376,
  [SMALL_STATE(189)] = 1386,
  [SMALL_STATE(190)] = 1396,
  [SMALL_STATE(191)] = 1403,
  [SMALL_STATE(192)] = 1410,
  [SMALL_STATE(193)] = 1415,
  [SMALL_STATE(194)] = 1422,
  [SMALL_STATE(195)] = 1429,
  [SMALL_STATE(196)] = 1434,
  [SMALL_STATE(197)] = 1439,
  [SMALL_STATE(198)] = 1446,
  [SMALL_STATE(199)] = 1453,
  [SMALL_STATE(200)] = 1458,
  [SMALL_STATE(201)] = 1463,
  [SMALL_STATE(202)] = 1470,
  [SMALL_STATE(203)] = 1477,
  [SMALL_STATE(204)] = 1484,
  [SMALL_STATE(205)] = 1491,
  [SMALL_STATE(206)] = 1498,
  [SMALL_STATE(207)] = 1505,
  [SMALL_STATE(208)] = 1512,
  [SMALL_STATE(209)] = 1519,
  [SMALL_STATE(210)] = 1526,
  [SMALL_STATE(211)] = 1533,
  [SMALL_STATE(212)] = 1540,
  [SMALL_STATE(213)] = 1547,
  [SMALL_STATE(214)] = 1552,
  [SMALL_STATE(215)] = 1559,
  [SMALL_STATE(216)] = 1564,
  [SMALL_STATE(217)] = 1571,
  [SMALL_STATE(218)] = 1578,
  [SMALL_STATE(219)] = 1585,
  [SMALL_STATE(220)] = 1592,
  [SMALL_STATE(221)] = 1599,
  [SMALL_STATE(222)] = 1606,
  [SMALL_STATE(223)] = 1613,
  [SMALL_STATE(224)] = 1620,
  [SMALL_STATE(225)] = 1627,
  [SMALL_STATE(226)] = 1634,
  [SMALL_STATE(227)] = 1641,
  [SMALL_STATE(228)] = 1648,
  [SMALL_STATE(229)] = 1655,
  [SMALL_STATE(230)] = 1662,
  [SMALL_STATE(231)] = 1669,
  [SMALL_STATE(232)] = 1676,
  [SMALL_STATE(233)] = 1683,
  [SMALL_STATE(234)] = 1688,
  [SMALL_STATE(235)] = 1693,
  [SMALL_STATE(236)] = 1698,
  [SMALL_STATE(237)] = 1705,
  [SMALL_STATE(238)] = 1712,
  [SMALL_STATE(239)] = 1717,
  [SMALL_STATE(240)] = 1722,
  [SMALL_STATE(241)] = 1729,
  [SMALL_STATE(242)] = 1736,
  [SMALL_STATE(243)] = 1743,
  [SMALL_STATE(244)] = 1750,
  [SMALL_STATE(245)] = 1757,
  [SMALL_STATE(246)] = 1764,
  [SMALL_STATE(247)] = 1771,
  [SMALL_STATE(248)] = 1778,
  [SMALL_STATE(249)] = 1785,
  [SMALL_STATE(250)] = 1790,
  [SMALL_STATE(251)] = 1797,
  [SMALL_STATE(252)] = 1802,
  [SMALL_STATE(253)] = 1809,
  [SMALL_STATE(254)] = 1816,
  [SMALL_STATE(255)] = 1823,
  [SMALL_STATE(256)] = 1830,
  [SMALL_STATE(257)] = 1837,
  [SMALL_STATE(258)] = 1844,
  [SMALL_STATE(259)] = 1851,
  [SMALL_STATE(260)] = 1858,
  [SMALL_STATE(261)] = 1865,
  [SMALL_STATE(262)] = 1869,
  [SMALL_STATE(263)] = 1873,
  [SMALL_STATE(264)] = 1877,
  [SMALL_STATE(265)] = 1881,
  [SMALL_STATE(266)] = 1885,
  [SMALL_STATE(267)] = 1889,
  [SMALL_STATE(268)] = 1893,
  [SMALL_STATE(269)] = 1897,
  [SMALL_STATE(270)] = 1901,
  [SMALL_STATE(271)] = 1905,
  [SMALL_STATE(272)] = 1909,
  [SMALL_STATE(273)] = 1913,
  [SMALL_STATE(274)] = 1917,
  [SMALL_STATE(275)] = 1921,
  [SMALL_STATE(276)] = 1925,
  [SMALL_STATE(277)] = 1929,
  [SMALL_STATE(278)] = 1933,
  [SMALL_STATE(279)] = 1937,
  [SMALL_STATE(280)] = 1941,
  [SMALL_STATE(281)] = 1945,
  [SMALL_STATE(282)] = 1949,
  [SMALL_STATE(283)] = 1953,
  [SMALL_STATE(284)] = 1957,
  [SMALL_STATE(285)] = 1961,
  [SMALL_STATE(286)] = 1965,
  [SMALL_STATE(287)] = 1969,
  [SMALL_STATE(288)] = 1973,
  [SMALL_STATE(289)] = 1977,
  [SMALL_STATE(290)] = 1981,
  [SMALL_STATE(291)] = 1985,
  [SMALL_STATE(292)] = 1989,
  [SMALL_STATE(293)] = 1993,
  [SMALL_STATE(294)] = 1997,
  [SMALL_STATE(295)] = 2001,
  [SMALL_STATE(296)] = 2005,
  [SMALL_STATE(297)] = 2009,
  [SMALL_STATE(298)] = 2013,
  [SMALL_STATE(299)] = 2017,
  [SMALL_STATE(300)] = 2021,
  [SMALL_STATE(301)] = 2025,
  [SMALL_STATE(302)] = 2029,
  [SMALL_STATE(303)] = 2033,
  [SMALL_STATE(304)] = 2037,
  [SMALL_STATE(305)] = 2041,
  [SMALL_STATE(306)] = 2045,
  [SMALL_STATE(307)] = 2049,
  [SMALL_STATE(308)] = 2053,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__machine_code_repeat1, 2), SHIFT_REPEAT(3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__machine_code_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__machine_code_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__machine_code, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_code, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__machine_code, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__machine_code, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(244),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(102),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(259),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(245),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(142),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(180),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(152),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(179),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(178),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(140),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(39),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(232),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(177),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(176),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(147),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(237),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LogicalOpcode, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LogicalOpcode, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_MiscellaneousOpcode, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MiscellaneousOpcode, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OperatingSystemSupportOpcode, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OperatingSystemSupportOpcode, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PackUnpackOpcode, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PackUnpackOpcode, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ShiftAndRotateOpcode, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ShiftAndRotateOpcode, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StackOpcode, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StackOpcode, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_StringOpcode, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_StringOpcode, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AccessRegisterOpcode, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AccessRegisterOpcode, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CryptoOpcode, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CryptoOpcode, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ExtractOpcode, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ExtractOpcode, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_InsertOpcode, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_InsertOpcode, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ShuffleOpcode, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ShuffleOpcode, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_PermuteOpcode, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PermuteOpcode, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BlendOpcode, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BlendOpcode, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BroadcastOpcode, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BroadcastOpcode, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_IOOpcode, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IOOpcode, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DataTransferOpcode, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DataTransferOpcode, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BitAndByteOpcode, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BitAndByteOpcode, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BinaryArithmeticOpcode, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BinaryArithmeticOpcode, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(62),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2), SHIFT_REPEAT(190),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2), SHIFT_REPEAT(12),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_control_repeat1, 2), SHIFT_REPEAT(143),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(66),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherRegisterOperand, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryAbsoluteOperand, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2), SHIFT_REPEAT(69),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherFnOperands, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(154),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediateOperand, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operand_repeat1, 2), SHIFT_REPEAT(75),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatRegisterOperand, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segmentRegisterOperand, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2), SHIFT_REPEAT(78),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_controlRegisterOperand, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_otherRegisterOperand, 5),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 5),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floatRegisterOperand, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherRegisterOperand, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_controlOpcode, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controlOpcode, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registerOperand, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegisterOperand, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister64Bits, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister32Bits, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister16Bits, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalRegister8Bits, 1),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instructionRegisterOperand, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 10),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryAbsoluteOperand, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_someOpcode, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 9),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 8),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryOperand, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 8),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 7),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 7),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 7),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 11),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fnOperand, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 6),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memorySegmentBaseOperand, 5),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indirectOperands, 5),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryScalaredIndexedOperand, 6),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memoryIndirectOperand, 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segmentRegisterOperand, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherFnOperands, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediateOperand, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatRegisterOperand, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_otherFnOperands_repeat1, 2), SHIFT_REPEAT(150),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_immediateOperand_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_immediateOperand_repeat1, 2), SHIFT_REPEAT(151),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister32Bits, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 3),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__address, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__address_repeat1, 2), SHIFT_REPEAT(156),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__address_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_otherRegisterOperand, 5),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memoryIndirectOperand_repeat1, 2), SHIFT_REPEAT(171),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memoryIndirectOperand_repeat1, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatRegisterOperand, 4),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operand_repeat2, 2), SHIFT_REPEAT(173),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operand_repeat2, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegisterOperand, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registerOperand, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instructionRegisterOperand, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_controlRegisterOperand, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister8Bits, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister16Bits, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalRegister64Bits, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 4),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 4),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 5),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fnOperand, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryOperand, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 5),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indirectOperands, 5),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 6),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 6),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 6),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 7),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 7),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memorySegmentBaseOperand, 7),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 8),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryIndirectOperand, 8),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 9),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 10),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memoryScalaredIndexedOperand, 11),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_someOpcode, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [838] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scale, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
