module.exports = grammar({
    name: 'assembly', //Applicable for our dataset

    //word: $ => $.identifier, //这行的存在会产生Undefined symbol `ReferenceError`

    rules: {
      prog: $ => repeat($._line),

      _line: $ => seq(choice( //下面这些rules里面之间不会有重复的opcode
        $.instruction_one_operand,
        $.instruction_two_operands,
        $.instruction_three_operands,
        $.instruction_four_operands, 
        $.instruction_six_operands,
        $.instruction_undetermined_operands),
        "\n"
      ),

      instruction_one_operand: $ => seq(
        repeat($.operand),
        ':',
        repeat($.two_bytes),
        optional(
          seq(
            $.opcodes_one_operand,
            $.operand
          )
        )
      ),

      opcodes_one_operand: $ => choice(
        'gs',
        'idiv',
        'negl',
        'negq',
        'jp',
        'jrcxz',
        'notw',
        'setl',
        'jle',
        'divl',
        'setge',
        'fldt',
        'neg',
        'notl',
        'setb',
        'fs',
        'push',
        'seto',
        'sete',
        'setle',
        'seta',
        'not',
        'div',
        'notrack',
        'jns',
        'mulw',
        'rex.RB',
        'incl',
        'setbe',
        'setp',
        'idivl',
        'setns',
        'inc',
        'setne',
        'divq',
        'prefetcht1',
        'fstpl',
        'pop',
        'mulq',
        'mul',
        'bswap',
        'fildl',
        'dec',
        'setae',
        'js',
        'mull',
        'setnp',
        'mulb',
        'setg'
      ),

      instruction_two_operands: $ => seq(
        repeat($.operand),
        ':',
        repeat($.two_bytes),
        $.opcodes_two_operands,
        $.operand,
        ',',
        $.operand
      ),

      opcodes_two_operands : $ => choice(
        'vucomiss',
        'vmovss',
        'vmovapd',
        'vpbroadcastd',
        'orl',
        'pclmullqlqdq',
        'por',
        'pcmpgtd',
        'movswq',
        'psrldq',
        'rep',
        'kmovw',
        'movhlps',
        'addq',
        'psrlq',
        'punpcklwd',
        'outsb',
        'bsf',
        'pcmpeqb',
        'maxsd',
        'sha1msg1',
        'andpd',
        'vmovd',
        'pmuludq',
        'vbroadcasti32x4',
        'ucomisd',
        'popcnt',
        'pmovmskb',
        'psubusb',
        'cmovp',
        'psubusw',
        'cmova',
        'psubq',
        'cmovge',
        'subl',
        'cmovbe',
        'punpckhdq',
        'psrlw',
        'cvttsd2si',
        'cmovb',
        'cvtsd2ss',
        'movzbq',
        'rex.WB',
        'xchg',
        'aesdec',
        'punpckhbw',
        'cvtsi2sd',
        'psubd',
        'adox',
        'vmovdqa32',
        'packuswb',
        'btr',
        'cvtsi2sdl',
        'vbroadcastss',
        'subpd',
        'aesdeclast',
        'andw',
        'pslld',
        'vmovaps',
        'xorl',
        'divss',
        'punpckhqdq',
        'btl',
        'pmaddubsw',
        'pmaddwd',
        'movsbw',
        'orq',
        'cvtss2sd',
        'divsd',
        'vmovq',
        'xorw',
        'minsd',
        'xorps',
        'bsr',
        'pslldq',
        'cmovo',
        'lock',
        'ucomiss',
        'punpcklqdq',
        'cmovle',
        'roll',
        'vbroadcasti128',
        'outsl',
        'psubb',
        'movhps',
        'movapd',
        'punpckldq',
        'movabs',
        'rex',
        'cmovne',
        'pclmulhqhqdq',
        'fmulp',
        'cmovns',
        'bt',
        'orb',
        'movbe',
        'vmovdqu64',
        'maxss',
        'xorpd',
        'psllq',
        'pcmpeqd',
        'punpcklbw',
        'cvttss2si',
        'andps',
        'orw',
        'cmove',
        'paddd',
        're',
        'andb',
        'movsb',
        'andl',
        'vmovdqa',
        'paddq',
        'aesenclast',
        'minss',
        'cmovg',
        'vucomisd',
        'vmovsd',
        'adcx',
        'cmovl',
        'comisd',
        'cvtsi2sdq',
        'subq',
        'knotw',
        'pxor',
        'pandn',
        'repnz',
        'bts',
        'tzcnt',
        'paddw',
        'pclmullqhqdq',
        'rorl',
        'psrld',
        'insl',
        'insb',
        'punpckhwd',
        'pshufb',
        'cvtsi2ss',
        'testl',
        'comiss',
        'aesenc',
        'cvtsi2ssl',
        'psrad',
        'vpbroadcastq',
        'unpckhpd',
        'test',
        'sha1nexte',
        'cmovae',
        'sha1msg2',
        'movzbw',
        'vmovdqa64',
        'cmovs'
      ),
      
      instruction_three_operands: $ => seq(
        repeat($.operand),
        ':',
        repeat($.two_bytes),
        $.opcodes_three_operands,
        $.operand,
        ',',
        $.operand,
        ',',
        $.operand
      ),
      
      opcodes_three_operands : $ => choice(
        'vpaddb',
        'vpsrlq',
        'vpmaddubsw',
        'shrd',
        'vextracti128',
        'vunpcklpd',
        'vcvtusi2sd',
        'vpsubw',
        'shufpd',
        'vpunpckhqdq',
        'pextrb',
        'vxorps',
        'vpxord',
        'nopw',
        'vprord',
        'shrx',
        'rorx',
        'vpunpckhwd',
        'pinsrw',
        'vpmuludq',
        'vpunpcklqdq',
        'vpand',
        'aeskeygenassist',
        'vaesenc',
        'vpcmpltud',
        'vpextrw',
        'vpslldq',
        'vprorq',
        'blendvps',
        'pshufd',
        'vpaddw',
        'vpsllw',
        'vpsrld',
        'pextrq',
        'vpsubd',
        'pextrw',
        'shufps',
        'pshuflw',
        'vpsubq',
        'shld',
        'vpslld',
        'vpermt2d',
        'vunpckhpd',
        'vmulsd',
        'vpunpckhdq',
        'vpshufd',
        'vpor',
        'vpunpckldq',
        'vextracti32x4',
        'vsubsd',
        'vpmaddwd',
        'pblendw',
        'vunpckhps',
        'vpblendmd',
        'vpsllq',
        'sarx',
        'shlx',
        'vpxor',
        'vpermd',
        'vpcmpgtd',
        'vpsubusw',
        'vpackusdw',
        'mulx',
        'vpsrlw',
        'vpaddq',
        'pshufhw',
        'andn',
        'vpunpcklwd',
        'palignr',
        'pinsrd',
        'vpsrldq',
        'vpermq',
        'vunpcklps',
        'sha1rnds4',
        'vpermi2d',
        'vaesenclast',
        'vdivsd',
        'vpaddd',
        'pinsrb',
        'vpmullw',
        'vpshufb'
      ),

      instruction_four_operands: $ => seq (
        repeat($.operand),
        ':',
        repeat($.two_bytes),
        $.opcodes_four_operands,
        $.operand,
        ',',
        $.operand,
        ',',
        $.operand,
        ',',
        $.operand
      ),

      opcodes_four_operands : $ => choice(
        'vpinsrw',
        'vpblendd',
        'vinserti128',
        'vshufi64x2',
        'addw',
        'vperm2i128',
        'vpinsrd',
        'vpinsrq',
        'vpinsrb',
        'vperm2f128',
        'vshufi32x4',
        'vblendps',
        'vshufps',
        'vpalignr',
        'vblendvps'
      ),

      instruction_six_operands: $ => seq(
        repeat($.operand),
        ':',
        repeat($.two_bytes),
        $.opcodes_six_operands,
        $.operand,
        ',',
        $.operand,
        ',',
        $.operand,
        ',',
        $.operand,
        ',',
        $.operand,
        ',',
        $.operand
      ),

      opcodes_six_operands : $ => choice(
        'vinsertf128',
        'vinserti32x4'
      ),

      instruction_undetermined_operands: $ => seq(
        repeat($.operand),
        ':',
        repeat($.two_bytes),
        $.opcodes_undetermined_operands,
        optional(
          seq(
            repeat($.operand),
            ','
          ),
        ),
        optional(repeat
             ($.operand))
      ),

      opcodes_undetermined_operands: $ => choice(
        'movsbl',
        'cmpb',
        'cwtl',
        'shrl',
        'xor',
        'andq',
        'cmp',
        'cwtd',
        'movdqa',
        'movq',
        'addb',
        'jno',
        'rex.W',
        'testb',
        'addsd',
        'rol',
        'sar',
        'rex.B',
        'vmovdqu',
        'callq',
        'movups',
        'vpclmullqhqdq',
        'subss',
        'jb',
        'rex.RXB',
        'jae',
        'and',
        'mulsd',
        'addl',
        'jmp',
        'jne',
        'cltq',
        'sub',
        'je',
        'cltd',
        'movb',
        'movaps',
        'cpuid',
        'vmovdqu32',
        'jo',
        'jmpq',
        'or',
        'rex.WRB',
        'movl',
        'retq',
        'jge',
        'movsd',
        'jg',
        'movss',
        'vpclmulhqhqdq',
        'shl',
        'subw',
        'ror',
        'cbtw',
        'repz',
        'mulss',
        'movw',
        'vpclmullqlqdq',
        'movsbq',
        'nopl',
        'shll',
        'cqto',
        'mov',
        'ss',
        'adc',
        'leaveq',
        'lea',
        'movslq',
        'mfence',
        'ud2',
        'rex.WRXB',
        'shr',
        'vpclmulhqlqdq',
        'movzbl',
        'femms',
        'addss',
        'movzwl',
        'sbb',
        'cmpq',
        'xgetbv',
        'pushq',
        'endbr64',
        'vzeroupper',
        'ja',
        'nop',
        'addr32',
        'movdqu',
        'pand',
        'movswl',
        'prefetcht0',
        'vmovups',
        'add',
        'subsd',
        'subb',
        'vinserti64x4',
        'rex.XB',
        'vzeroall',
        'shrq',
        'sarl',
        'cmpw',
        'data16',
        'jbe',
        'jl',
        'shlq',
        'cmpl',
        'movd',
        'imul'
      ),
      
      operand: $ => prec.left(repeat1(/./)), //any char

      two_bytes: $ => /[0-9a-f][0-9a-f]/

      // choice(
      //   $.register
      // ),

      // register: $ => choice(
      //   '%rdi',
      //   '%rax'
      // )
    }
  });