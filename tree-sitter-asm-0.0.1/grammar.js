module.exports = grammar({
    name: 'asm', //Applicable for our dataset

    //word: $ => $.identifier, //这行的存在会产生Undefined symbol `ReferenceError`

    //We don"t consider Assembly Language Labels (removed on preprocessing)

    rules: {
        prog: $ => repeat($._line),
        _address: $ => prec.left(repeat1(/[0-9A-F]/)), //any hex number
        _byte: $ => /[0-9a-f][0-9a-f]/,
        comment: $ => choice(/#.*/, /===.*/),
        _line_break: $ => '\n',
        _colon: $ => ':',
        _comma: $ => /,/,
        _machine_code: $ => seq(
            $._address,
            $._colon,
            repeat($._byte),
        ),

        _line: $ => seq(
            //$._machine_code,
            optional($._machine_code),
            optional($.instruction),
            optional($.comment),
            $._line_break
        ),


        instruction: $ => choice(
            $.data,
            $.control
        ),

        data: $ => seq(
            $.opcode,
            optional(repeat(seq($.operand, choice($._comma, ' ')))),
            optional($.operand)
        ),

        opcode: $ => choice(
            $.BinaryArithmeticOpcode,
            $.BitAndByteOpcode,
            //$.ControlTransferOpcode,  //this is replaced by controlOpcode
            $.DataTransferOpcode,
            $.IOOpcode,
            $.LogicalOpcode,
            $.MiscellaneousOpcode,
            $.OperatingSystemSupportOpcode,
            $.PackUnpackOpcode,
            $.ShiftAndRotateOpcode,
            $.StackOpcode,
            $.StringOpcode,
            $.AccessRegisterOpcode,
            $.CryptoOpcode,
            $.ExtractOpcode,
            $.InsertOpcode,
            $.ShuffleOpcode,
            $.PermuteOpcode,
            $.BlendOpcode,
            $.BroadcastOpcode
        ),

        BinaryArithmeticOpcode: $ => choice(
            'adc', 'add', 'addq', 'addl', 'addss', 'addw', 'addb',
            'cmp', 'cmpb', 'cmpw', 'cmpl', 'cmpq', 'comiss', 'comisd',
            'inc', 'incl', 'dec',
            'div', 'divq', 'divl', 'divss', 'divsd', 'idiv', 'idivl',
            'sub', 'subq', 'subl', 'subss', 'subw', 'subb', 'subsd', 'subpd', 'sbb',
            'mul', 'mulq', 'mull', 'mulss', 'mulw', 'mulb', 'mulsd', 'mulx', 'imul',
            'neg', 'negl', 'negq',
            'fmulp',
            'vpclmulhqlqdq', 'pclmullqlqdq', 'pclmullqhqdq',
            'vpclmullqhqdq', 'vpclmulhqhqdq', 'pclmulhqhqdq', 'vpclmullqlqdq',
            'adcx', 'adox', 'vmulsd',
            'vpaddd', 'vpaddb', 'vpaddq', 'vpaddw',
            'vpcmpgtd', 'vdivsd',
            'vpmaddubsw', 'vpmaddwd', 'vpmullw', 'vpmuludq',
            'vucomisd', 'vucomiss', 'addsd', 'ucomisd', 'ucomiss',
            'maxsd', 'minsd', 'maxss', 'minss',
            'vsubsd', 'vpsubusw', 'vpsubq', 'vpsubd', 'vpsubw',
            'psubd', 'pmaddwd', 'paddw', 'psubusw', 'psubusb', 'psubb', 'psubq',
            'paddq', 'pmuludq', 'pmaddubsw', 'paddd',
            'pcmpgtd', 'pcmpeqd', 'pcmpeqb', 'vpcmpltud'
        ),

        BitAndByteOpcode: $ => choice(
            'bsf', 'bsr', 'bts', 'bt', 'btr', 'btl',
            'setne', 'setb', 'sete', 'setbe',
            'seta', 'setge', 'setae', 'setl',
            'setle', 'setg', 'seto', 'setnp',
            'setp', 'setns',
            'test', 'testb', 'testl',
            'knotw'
        ),

        DataTransferOpcode: $ => choice(
            'bswap', 'cbtw', 'cltd', 'cltq',
            'cmovbe', 'cmovl', 'cmovae', 'cmovo',
            'cmovne', 'cmovns', 'cmovg', 'cmovp',
            'cmove', 'cmovge', 'cmovb', 'cmova',
            'cmovle', 'cmovs',
            'cwtl', 'cbtw', 'cwtd', 'cltd', 'cltq', 'cqto',
            'cvttsd2si', 'cvtss2sd', 'cvttss2si',
            'cvtsi2sd', 'cvtsi2ss', 'cvtsi2sdq',
            'cvtsi2sdl', 'cvtsd2ss', 'cvtsi2ssl', 'vcvtusi2sd',
            'mov', 'movw', 'movl', 'movq', 'movb',
            'movabs', 'movsbw', 'movsbq', 'movsbl',
            'movswl', 'movswq', 'movzbw', 'movzbq', 'movzbl',
            'movzwl', 'movaps', 'movhlps', 'movss', 'movups', 'movsd',
            'movd', 'movhps', 'movdqa', 'movbe', 'movapd', 'movdqu',
            'xchg', 'fildl', 'fldt', 'fstpl',
            'vmovaps', 'vmovapd', 'vmovss', 'vmovdqu', 'vmovdqu64', 'vmovdqu32',
            'vmovdqa', 'vmovdqa32', 'vmovdqa64', 'vmovq', 'vmovups', 'vmovd',
            'vmovsd', 'pmovmskb'
        ),

        IOOpcode: $ => choice(
            'insb', 'insl', 'outsb', 'outsl'
        ),

        LogicalOpcode: $ => choice(
            'or', 'orq', 'orl', 'orb', 'orw',
            'xor', 'xorl', 'xorw', 'xorps', 'xorpd', 'vxorps', 'vpxord', 'vpxor',
            'and', 'andq', 'andl', 'andw', 'andb', 'andn', 'andpd', 'pand', 'pandn', 'andps', 'vpand',
            'not', 'notl', 'notw',
            'vpor', 'por', 'pxor'
        ),

        MiscellaneousOpcode: $ => choice(
            'cpuid', 'lea', 'popcnt',
            'nop', 'nopl', 'nopw',
            'ud2', 'data16', 'sha1rnds4',
            'addr32', 'sha1msg1', 'sha1msg2',
            'sha1nexte', 'endbr64',
            'gs', 're', 'ss'
        ),

        OperatingSystemSupportOpcode: $ => choice(
            'lock',
            'prefetcht1',
            'prefetcht0',
            'mfence',
            'femms',
            'tzcnt',
            'leaveq', 'retq'
        ),

        PackUnpackOpcode: $ => choice(
            'packuswb', 'punpckhbw', 'punpckhdq', 'punpckhwd',
            'punpcklbw', 'punpckldq', 'punpcklwd',
            'vpunpcklwd', 'vpunpckldq',
            'punpcklqdq', 'punpckhqdq',
            'vpunpckhqdq', 'vpunpckhdq',
            'vpunpcklqdq', 'vpunpckhwd',
            'vpackusdw', 'vpalignr', 'palignr',
            'vunpckhpd', 'vunpckhps', 'vunpcklpd', 'vunpcklps', 'unpckhpd'
        ),

        ShiftAndRotateOpcode: $ => choice(
            'rol', 'ror', 'sar', 'sarl', 'sarx',
            'shl', 'shll', 'shld', 'shlx', 'shlq',
            'shr', 'shrq', 'shrd', 'shrl', 'shrx',
            'vprord', 'vprorq',
            'rorl', 'roll',
            'vpslldq', 'vpslld', 'vpsllq', 'vpsllw',
            'vpsrldq', 'vpsrld', 'vpsrlq', 'vpsrlw',
            'rorx', 'psrld', 'psrlw', 'psllq', 'psrlq',
            'pslldq', 'psrldq', 'psrad', 'pslld'
        ),

        StackOpcode: $ => choice(
            'push', 'pushq', 'pop'
        ),

        StringOpcode: $ => choice(
            'movslq', 'movsb', 'rep', 'repz', 'repnz'
        ),

        AccessRegisterOpcode: $ => choice(
            'rex', 'rex.WB', 'rex.WRB',
            'rex.RXB', 'rex.B', 'rex.WRXB',
            'rex.XB', 'rex.W', 'rex.RB',
            'xgetbv', 'fs', 'kmovw',
            'vzeroall', 'vzeroupper'
        ),

        CryptoOpcode: $ => choice(
            'aesdec', 'aesdeclast',
            'aesenc', 'aesenclast', 'vaesenc', 'vaesenclast',
            'aeskeygenassist'
        ),

        ExtractOpcode: $ => choice(
            'vpextrw',
            'vextracti128', 'vextracti32x4',
            'pextrq', 'pextrw', 'pextrb'
        ),

        InsertOpcode: $ => choice(
            'vpinsrw', 'vpinsrd', 'vpinsrq', 'vpinsrb',
            'vinserti128', 'vinserti32x4', 'vinserti64x4', 'vinsertf128',
            'pinsrw', 'pinsrb', 'pinsrd'
        ),

        ShuffleOpcode: $ => choice(
            'vpshufb', 'vpshufd', 'vshufps',
            'vshufi32x4', 'vshufi64x2',
            'shufps', 'pshuflw', 'pshufd',
            'pshufhw', 'shufpd', 'pshufb'
        ),

        PermuteOpcode: $ => choice(
            'vperm2f128', 'vperm2i128', 'vpermd', 'vpermq', 'vpermt2d', 'vpermi2d'
        ),

        BlendOpcode: $ => choice(
            'vblendps', 'vblendvps', 'vpblendmd',
            'vpblendd', 'pblendw',
            'blendvps'
        ),

        BroadcastOpcode: $ => choice(
            'vbroadcastss', 'vpbroadcastq', 'vpbroadcastd', 'vbroadcasti128', 'vbroadcasti32x4'
        ),

        operand: $ => choice(
            $.immediateOperand,
            $.registerOperand,
            $.memoryOperand,
            $.someOpcode,
            // $.controlOpcode,
            // $.opcode,
            seq('f', prec.left(repeat1(/[0-9a-zA-Z_]/))),
            seq('<', prec.left(repeat1(/[0-9a-zA-Z+_]/)), '>')
            //$.otherOperand
        ),

        immediateOperand: $ => seq( //constant expressions
            '$',
            prec.left(repeat1(/[0-9a-z%$\(\)-:{}<>A-Z_]/))
        ),

        registerOperand: $ => choice(
            $.generalRegisterOperand,
            $.segmentRegisterOperand,
            $.controlRegisterOperand,
            $.instructionRegisterOperand,
            $.floatRegisterOperand,
            $.otherRegisterOperand
        ),

        segmentRegisterOperand: $ => choice(
            '%ss', '%cs', '%ds', '%es', '%fs', '%gs'
        ),

        generalRegisterOperand: $ => choice(
            $.generalRegister64Bits,
            $.generalRegister32Bits,
            $.generalRegister16Bits,
            $.generalRegister8Bits
        ),

        generalRegister64Bits: $ => choice(
            '%rax', '%rbx', '%rcx', '%rdx', '%rsi', '%rdi', '%rbp', '%rsp',
            '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15'
        ),

        generalRegister32Bits: $ => choice(
            '%eax', '%ecx', '%edx', '%ebx', '%esi', '%edi', '%ebp', '%esp',
            '%r8d', '%r9d', '%r10d', '%r11d', '%r12d', '%r13d', '%r14d', '%r15d'
        ),

        generalRegister16Bits: $ => choice(
            '%ax', '%cx', '%dx', '%bx', '%si', '%di', '%sp', '%bp',
            '%r8w', '%r9w', '%r10w', '%r11w', '%r12w', '%r13w', '%r14w', '%r15w'
        ),

        generalRegister8Bits: $ => choice(
            '%al', '%cl', '%dl', '%bl', '%sil', '%dil', '%spl', '%bpl',
            '%r8b', '%r9b', '%r10b', '%r11b', '%r12b', '%r13b', '%r14b', '%r15b'
        ),

        memoryOperand: $ => choice(
            $.memoryScalaredIndexedOperand,
            $.memorySegmentBaseOperand,
            $.memoryIndirectOperand,
            $.memoryAbsoluteOperand,
        ),

        memoryScalaredIndexedOperand: $ => seq(
            optional(seq($.segmentRegisterOperand, ':')),
            optional('-'),
            optional($.offset),
            '(',
            optional($.base),
            $._comma,
            $.index,
            $._comma,
            $.scale,
            ')'

        ),

        memorySegmentBaseOperand: $ => seq(
            $.segmentRegisterOperand,
            ':',
            choice(
                $.memoryAbsoluteOperand,
                seq(
                    optional('-'),
                    optional($.offset),
                    '(',
                    $.registerOperand,
                    ')'
                )
            )
        ),

        memoryIndirectOperand: $ => seq(
            optional('-'),
            optional($.offset),
            '(',
            $.registerOperand,
            ')',
            optional(
                seq(
                    '{',
                    prec.left(repeat1(/[%0-9a-zA-Z_]/)),
                    '}'
                )
            )
        ),

        offset: $ => prec.left(repeat1(/[0-9a-zA-Z_]/)), //don't contain '(' and ')'

        base: $ => $.registerOperand,
        index: $ => $.registerOperand,
        scale: $ => choice(
            '1',
            '2',
            '4',
            '8'
        ),

        memoryAbsoluteOperand: $ => prec.left(repeat1(/[0-9a-zA-Z_]/)),

        // not counted in 406 opcodes, only occur in operand position
        someOpcode: $ => choice(
            'movsq',
            'cmpsb',
            'cmpxchg',
            'movsl'
        ),

        //otherOperand: $ => prec.left(repeat1(/[0-9a-z%$\(\)-:{}<>A-Z_]/)), //any identifier

        control: $ => seq(
            $.controlOpcode,
            optional(repeat(seq($.fnOperand, choice($._comma, ' ')))),
            optional($.fnOperand)
        ),

        controlOpcode: $ => choice(
            'callq',
            'ja',
            'jae',
            'jb',
            'jbe',
            'je',
            'jg',
            'jge',
            'jl',
            'jle',
            'jmp',
            'jmpq',
            'jne',
            'jno',
            'jns',
            'jo',
            'jp',
            'jrcxz',
            'js',
            'notrack'
        ),
        // fn: $ => prec.left(repeat1(/[*0-9a-zA-Z%$_\(\)<>,:+{}&\[\];\.]/)),

        fnOperand: $ => choice(
            'jmpq',
            $.indirectOperands, //Only jump and call instructions can use indirect operands
            $.otherFnOperands
        ),

        indirectOperands: $ => seq(
            '*',
            optional(prec.left(repeat1(/[0-9a-zA-Z_]/))),
            optional('('),
            $.registerOperand,
            optional(')')
        ),

        controlRegisterOperand: $ => choice(
            '%cr0', '%cr2', '%cr3', '%cr4'
        ),

        instructionRegisterOperand: $ => choice(
            '%rip', //rip is the instruction pointer register(hence the name).
            '%eip',
            '%ip'
        ),

        floatRegisterOperand: $ => seq(
            '%st',
            optional(
                seq(
                    '(',
                    prec.left(repeat1(/[0-9a-zA-Z_]/)),
                    ')'
                )
            )
        ),

        otherRegisterOperand: $ => seq(
            '%',
            prec.left(repeat1(/[0-9a-zA-Z_]/)),
            optional(
                seq(
                    '{',
                    prec.left(repeat1(/[%0-9a-zA-Z_]/)),
                    '}'
                )
            )
        ),

        // specificRegister: $ => choice(

        // ),

        otherFnOperands: $ => prec.left(repeat1(/[0-9a-zA-Z%$_\(\)<>,:+{}&\[\];\.]/)),

    }
});
