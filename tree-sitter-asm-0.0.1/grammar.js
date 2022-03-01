module.exports = grammar({
    name: 'asm', //Applicable for our dataset

    //word: $ => $.identifier, //这行的存在会产生Undefined symbol `ReferenceError`

    rules: {
        prog: $ => repeat($._line),
        _line_break: $ => '\n',
        comment: $ => choice(/#.*/, /===.*/),
        _address: $ => prec.left(repeat1(/[0-9a-f]/)), //any hex number
        _byte: $ => /[0-9a-f][0-9a-f]/,
	_colon: $ => /:/,
	_machine_code: $ => seq(
            $._address,
            $._colon,
            repeat($._byte),
	),
	instruction: $ => seq(
	   choice(
              // data instructions
              $.adc,
              $.adcx,
              $.add,
              $.addb,
              $.addl,
              $.addq,
              $.addr32,
              $.addsd,
              $.addss,
              $.addw,
              $.adox,
              $.aesdec,
              $.aesdeclast,
              $.aesenc,
              $.aesenclast,
              $.aeskeygenassist,
              $.and,
              $.andb,
              $.andl,
              $.andn,
              $.andpd,
              $.andps,
              $.andq,
              $.andw,
              $.blendvps,
              $.bsf,
              $.bsr,
              $.bswap,
              $.bt,
              $.btl,
              $.btr,
              $.bts,
              $.cbtw,
              $.cltd,
              $.cltq,
              $.cmova,
              $.cmovae,
              $.cmovb,
              $.cmovbe,
              $.cmove,
              $.cmovg,
              $.cmovge,
              $.cmovl,
              $.cmovle,
              $.cmovne,
              $.cmovns,
              $.cmovo,
              $.cmovp,
              $.cmovs,
              $.cmp,
              $.cmpb,
              $.cmpl,
              $.cmpq,
              $.cmpw,
              $.comisd,
              $.comiss,
              $.cpuid,
              $.cqto,
              $.cvtsd2ss,
              $.cvtsi2sd,
              $.cvtsi2sdl,
              $.cvtsi2sdq,
              $.cvtsi2ss,
              $.cvtsi2ssl,
              $.cvtss2sd,
              $.cvttsd2si,
              $.cvttss2si,
              $.cwtd,
              $.cwtl,
              $.data16,
              $.dec,
              $.div,
              $.divl,
              $.divq,
              $.divsd,
              $.divss,
              $.endbr64,
              $.femms,
              $.fildl,
              $.fldt,
              $.fmulp,
              $.fs,
              $.fstpl,
              $.gs,
              $.idiv,
              $.idivl,
              $.imul,
              $.inc,
              $.incl,
              $.insb,
              $.insl,
              $.kmovw,
              $.knotw,
              $.lea,
              $.leaveq,
              $.lock,
              $.maxsd,
              $.maxss,
              $.mfence,
              $.minsd,
              $.minss,
              $.mov,
              $.movabs,
              $.movapd,
              $.movaps,
              $.movb,
              $.movbe,
              $.movd,
              $.movdqa,
              $.movdqu,
              $.movhlps,
              $.movhps,
              $.movl,
              $.movq,
              $.movsb,
              $.movsbl,
              $.movsbq,
              $.movsbw,
              $.movsd,
              $.movslq,
              $.movss,
              $.movswl,
              $.movswq,
              $.movups,
              $.movw,
              $.movzbl,
              $.movzbq,
              $.movzbw,
              $.movzwl,
              $.mul,
              $.mulb,
              $.mull,
              $.mulq,
              $.mulsd,
              $.mulss,
              $.mulw,
              $.mulx,
              $.neg,
              $.negl,
              $.negq,
              $.nop,
              $.nopl,
              $.nopw,
              $.not,
              $.notl,
              $.notw,
              $.or,
              $.orb,
              $.orl,
              $.orq,
              $.orw,
              $.outsb,
              $.outsl,
              $.packuswb,
              $.paddd,
              $.paddq,
              $.paddw,
              $.palignr,
              $.pand,
              $.pandn,
              $.pblendw,
              $.pclmulhqhqdq,
              $.pclmullqhqdq,
              $.pclmullqlqdq,
              $.pcmpeqb,
              $.pcmpeqd,
              $.pcmpgtd,
              $.pextrb,
              $.pextrq,
              $.pextrw,
              $.pinsrb,
              $.pinsrd,
              $.pinsrw,
              $.pmaddubsw,
              $.pmaddwd,
              $.pmovmskb,
              $.pmuludq,
              $.pop,
              $.popcnt,
              $.por,
              $.prefetcht0,
              $.prefetcht1,
              $.pshufb,
              $.pshufd,
              $.pshufhw,
              $.pshuflw,
              $.pslld,
              $.pslldq,
              $.psllq,
              $.psrad,
              $.psrld,
              $.psrldq,
              $.psrlq,
              $.psrlw,
              $.psubb,
              $.psubd,
              $.psubq,
              $.psubusb,
              $.psubusw,
              $.punpckhbw,
              $.punpckhdq,
              $.punpckhqdq,
              $.punpckhwd,
              $.punpcklbw,
              $.punpckldq,
              $.punpcklqdq,
              $.punpcklwd,
              $.push,
              $.pushq,
              $.pxor,
              $.re,
              $.rep,
              $.repnz,
              $.repz,
              $.retq,
              $.rex,
              $.rex_B,
              $.rex_RB,
              $.rex_RXB,
              $.rex_W,
              $.rex_WB,
              $.rex_WRB,
              $.rex_WRXB,
              $.rex_XB,
              $.rol,
              $.roll,
              $.ror,
              $.rorl,
              $.rorx,
              $.sar,
              $.sarl,
              $.sarx,
              $.sbb,
              $.seta,
              $.setae,
              $.setb,
              $.setbe,
              $.sete,
              $.setg,
              $.setge,
              $.setl,
              $.setle,
              $.setne,
              $.setnp,
              $.setns,
              $.seto,
              $.setp,
              $.sha1msg1,
              $.sha1msg2,
              $.sha1nexte,
              $.sha1rnds4,
              $.shl,
              $.shld,
              $.shll,
              $.shlq,
              $.shlx,
              $.shr,
              $.shrd,
              $.shrl,
              $.shrq,
              $.shrx,
              $.shufpd,
              $.shufps,
              $.ss,
              $.sub,
              $.subb,
              $.subl,
              $.subpd,
              $.subq,
              $.subsd,
              $.subss,
              $.subw,
              $.test,
              $.testb,
              $.testl,
              $.tzcnt,
              $.ucomisd,
              $.ucomiss,
              $.ud2,
              $.unpckhpd,
              $.vaesenc,
              $.vaesenclast,
              $.vblendps,
              $.vblendvps,
              $.vbroadcasti128,
              $.vbroadcasti32x4,
              $.vbroadcastss,
              $.vcvtusi2sd,
              $.vdivsd,
              $.vextracti128,
              $.vextracti32x4,
              $.vinsertf128,
              $.vinserti128,
              $.vinserti32x4,
              $.vinserti64x4,
              $.vmovapd,
              $.vmovaps,
              $.vmovd,
              $.vmovdqa,
              $.vmovdqa32,
              $.vmovdqa64,
              $.vmovdqu,
              $.vmovdqu32,
              $.vmovdqu64,
              $.vmovq,
              $.vmovsd,
              $.vmovss,
              $.vmovups,
              $.vmulsd,
              $.vpackusdw,
              $.vpaddb,
              $.vpaddd,
              $.vpaddq,
              $.vpaddw,
              $.vpalignr,
              $.vpand,
              $.vpblendd,
              $.vpblendmd,
              $.vpbroadcastd,
              $.vpbroadcastq,
              $.vpclmulhqhqdq,
              $.vpclmulhqlqdq,
              $.vpclmullqhqdq,
              $.vpclmullqlqdq,
              $.vpcmpgtd,
              $.vpcmpltud,
              $.vperm2f128,
              $.vperm2i128,
              $.vpermd,
              $.vpermi2d,
              $.vpermq,
              $.vpermt2d,
              $.vpextrw,
              $.vpinsrb,
              $.vpinsrd,
              $.vpinsrq,
              $.vpinsrw,
              $.vpmaddubsw,
              $.vpmaddwd,
              $.vpmullw,
              $.vpmuludq,
              $.vpor,
              $.vprord,
              $.vprorq,
              $.vpshufb,
              $.vpshufd,
              $.vpslld,
              $.vpslldq,
              $.vpsllq,
              $.vpsllw,
              $.vpsrld,
              $.vpsrldq,
              $.vpsrlq,
              $.vpsrlw,
              $.vpsubd,
              $.vpsubq,
              $.vpsubusw,
              $.vpsubw,
              $.vpunpckhdq,
              $.vpunpckhqdq,
              $.vpunpckhwd,
              $.vpunpckldq,
              $.vpunpcklqdq,
              $.vpunpcklwd,
              $.vpxor,
              $.vpxord,
              $.vshufi32x4,
              $.vshufi64x2,
              $.vshufps,
              $.vsubsd,
              $.vucomisd,
              $.vucomiss,
              $.vunpckhpd,
              $.vunpckhps,
              $.vunpcklpd,
              $.vunpcklps,
              $.vxorps,
              $.vzeroall,
              $.vzeroupper,
              $.xchg,
              $.xgetbv,
              $.xor,
              $.xorl,
              $.xorpd,
              $.xorps,
              $.xorw,
	      // control instructions
              $.callq,
              $.ja,
              $.jae,
              $.jb,
              $.jbe,
              $.je,
              $.jg,
              $.jge,
              $.jl,
              $.jle,
              $.jmp,
              $.jmpq,
              $.jne,
              $.jno,
              $.jns,
              $.jo,
              $.jp,
              $.jrcxz,
              $.js,
              $.notrack),
            optional($.comment),
	),
        _line: $ => seq(
	    optional($._machine_code),
            optional($.instruction),
	    $._line_break
        ),

        operand: $ => prec.left(repeat1(/[0-9a-zA-Z%$\(\)-{}<>_:]/)), //any identifier
	// assume that there is no leading space before _address in each line
	// _arguments: $ => seq(optional(repeat(seq($.operand, choice(',', ' ')))), $.operand),
	// tolerate leading spaces but may fail at some data instructions where spaces are used inside operands
	_arguments: $ => seq(optional(repeat(seq($.operand, ','))), $.operand),
        adc: $ => seq( 'adc', optional($._arguments)),
        adcx: $ => seq( 'adcx', optional($._arguments)),
        add: $ => seq( 'add', optional($._arguments)),
        addb: $ => seq( 'addb', optional($._arguments)),
        addl: $ => seq( 'addl', optional($._arguments)),
        addq: $ => seq( 'addq', optional($._arguments)),
        addr32: $ => seq( 'addr32', optional($._arguments)),
        addsd: $ => seq( 'addsd', optional($._arguments)),
        addss: $ => seq( 'addss', optional($._arguments)),
        addw: $ => seq( 'addw', optional($._arguments)),
        adox: $ => seq( 'adox', optional($._arguments)),
        aesdec: $ => seq( 'aesdec', optional($._arguments)),
        aesdeclast: $ => seq( 'aesdeclast', optional($._arguments)),
        aesenc: $ => seq( 'aesenc', optional($._arguments)),
        aesenclast: $ => seq( 'aesenclast', optional($._arguments)),
        aeskeygenassist: $ => seq( 'aeskeygenassist', optional($._arguments)),
        and: $ => seq( 'and', optional($._arguments)),
        andb: $ => seq( 'andb', optional($._arguments)),
        andl: $ => seq( 'andl', optional($._arguments)),
        andn: $ => seq( 'andn', optional($._arguments)),
        andpd: $ => seq( 'andpd', optional($._arguments)),
        andps: $ => seq( 'andps', optional($._arguments)),
        andq: $ => seq( 'andq', optional($._arguments)),
        andw: $ => seq( 'andw', optional($._arguments)),
        blendvps: $ => seq( 'blendvps', optional($._arguments)),
        bsf: $ => seq( 'bsf', optional($._arguments)),
        bsr: $ => seq( 'bsr', optional($._arguments)),
        bswap: $ => seq( 'bswap', optional($._arguments)),
        bt: $ => seq( 'bt', optional($._arguments)),
        btl: $ => seq( 'btl', optional($._arguments)),
        btr: $ => seq( 'btr', optional($._arguments)),
        bts: $ => seq( 'bts', optional($._arguments)),
        cbtw: $ => seq( 'cbtw', optional($._arguments)),
        cltd: $ => seq( 'cltd', optional($._arguments)),
        cltq: $ => seq( 'cltq', optional($._arguments)),
        cmova: $ => seq( 'cmova', optional($._arguments)),
        cmovae: $ => seq( 'cmovae', optional($._arguments)),
        cmovb: $ => seq( 'cmovb', optional($._arguments)),
        cmovbe: $ => seq( 'cmovbe', optional($._arguments)),
        cmove: $ => seq( 'cmove', optional($._arguments)),
        cmovg: $ => seq( 'cmovg', optional($._arguments)),
        cmovge: $ => seq( 'cmovge', optional($._arguments)),
        cmovl: $ => seq( 'cmovl', optional($._arguments)),
        cmovle: $ => seq( 'cmovle', optional($._arguments)),
        cmovne: $ => seq( 'cmovne', optional($._arguments)),
        cmovns: $ => seq( 'cmovns', optional($._arguments)),
        cmovo: $ => seq( 'cmovo', optional($._arguments)),
        cmovp: $ => seq( 'cmovp', optional($._arguments)),
        cmovs: $ => seq( 'cmovs', optional($._arguments)),
        cmp: $ => seq( 'cmp', optional($._arguments)),
        cmpb: $ => seq( 'cmpb', optional($._arguments)),
        cmpl: $ => seq( 'cmpl', optional($._arguments)),
        cmpq: $ => seq( 'cmpq', optional($._arguments)),
        cmpw: $ => seq( 'cmpw', optional($._arguments)),
        comisd: $ => seq( 'comisd', optional($._arguments)),
        comiss: $ => seq( 'comiss', optional($._arguments)),
        cpuid: $ => seq( 'cpuid', optional($._arguments)),
        cqto: $ => seq( 'cqto', optional($._arguments)),
        cvtsd2ss: $ => seq( 'cvtsd2ss', optional($._arguments)),
        cvtsi2sd: $ => seq( 'cvtsi2sd', optional($._arguments)),
        cvtsi2sdl: $ => seq( 'cvtsi2sdl', optional($._arguments)),
        cvtsi2sdq: $ => seq( 'cvtsi2sdq', optional($._arguments)),
        cvtsi2ss: $ => seq( 'cvtsi2ss', optional($._arguments)),
        cvtsi2ssl: $ => seq( 'cvtsi2ssl', optional($._arguments)),
        cvtss2sd: $ => seq( 'cvtss2sd', optional($._arguments)),
        cvttsd2si: $ => seq( 'cvttsd2si', optional($._arguments)),
        cvttss2si: $ => seq( 'cvttss2si', optional($._arguments)),
        cwtd: $ => seq( 'cwtd', optional($._arguments)),
        cwtl: $ => seq( 'cwtl', optional($._arguments)),
        data16: $ => seq( 'data16', optional($._arguments)),
        dec: $ => seq( 'dec', optional($._arguments)),
        div: $ => seq( 'div', optional($._arguments)),
        divl: $ => seq( 'divl', optional($._arguments)),
        divq: $ => seq( 'divq', optional($._arguments)),
        divsd: $ => seq( 'divsd', optional($._arguments)),
        divss: $ => seq( 'divss', optional($._arguments)),
        endbr64: $ => seq( 'endbr64', optional($._arguments)),
        femms: $ => seq( 'femms', optional($._arguments)),
        fildl: $ => seq( 'fildl', optional($._arguments)),
        fldt: $ => seq( 'fldt', optional($._arguments)),
        fmulp: $ => seq( 'fmulp', optional($._arguments)),
        fs: $ => seq( 'fs', optional($._arguments)),
        fstpl: $ => seq( 'fstpl', optional($._arguments)),
        gs: $ => seq( 'gs', optional($._arguments)),
        idiv: $ => seq( 'idiv', optional($._arguments)),
        idivl: $ => seq( 'idivl', optional($._arguments)),
        imul: $ => seq( 'imul', optional($._arguments)),
        inc: $ => seq( 'inc', optional($._arguments)),
        incl: $ => seq( 'incl', optional($._arguments)),
        insb: $ => seq( 'insb', optional($._arguments)),
        insl: $ => seq( 'insl', optional($._arguments)),
        kmovw: $ => seq( 'kmovw', optional($._arguments)),
        knotw: $ => seq( 'knotw', optional($._arguments)),
        lea: $ => seq( 'lea', optional($._arguments)),
        leaveq: $ => seq( 'leaveq', optional($._arguments)),
        lock: $ => seq( 'lock', optional($._arguments)),
        maxsd: $ => seq( 'maxsd', optional($._arguments)),
        maxss: $ => seq( 'maxss', optional($._arguments)),
        mfence: $ => seq( 'mfence', optional($._arguments)),
        minsd: $ => seq( 'minsd', optional($._arguments)),
        minss: $ => seq( 'minss', optional($._arguments)),
        mov: $ => seq( 'mov', optional($._arguments)),
        movabs: $ => seq( 'movabs', optional($._arguments)),
        movapd: $ => seq( 'movapd', optional($._arguments)),
        movaps: $ => seq( 'movaps', optional($._arguments)),
        movb: $ => seq( 'movb', optional($._arguments)),
        movbe: $ => seq( 'movbe', optional($._arguments)),
        movd: $ => seq( 'movd', optional($._arguments)),
        movdqa: $ => seq( 'movdqa', optional($._arguments)),
        movdqu: $ => seq( 'movdqu', optional($._arguments)),
        movhlps: $ => seq( 'movhlps', optional($._arguments)),
        movhps: $ => seq( 'movhps', optional($._arguments)),
        movl: $ => seq( 'movl', optional($._arguments)),
        movq: $ => seq( 'movq', optional($._arguments)),
        movsb: $ => seq( 'movsb', optional($._arguments)),
        movsbl: $ => seq( 'movsbl', optional($._arguments)),
        movsbq: $ => seq( 'movsbq', optional($._arguments)),
        movsbw: $ => seq( 'movsbw', optional($._arguments)),
        movsd: $ => seq( 'movsd', optional($._arguments)),
        movslq: $ => seq( 'movslq', optional($._arguments)),
        movss: $ => seq( 'movss', optional($._arguments)),
        movswl: $ => seq( 'movswl', optional($._arguments)),
        movswq: $ => seq( 'movswq', optional($._arguments)),
        movups: $ => seq( 'movups', optional($._arguments)),
        movw: $ => seq( 'movw', optional($._arguments)),
        movzbl: $ => seq( 'movzbl', optional($._arguments)),
        movzbq: $ => seq( 'movzbq', optional($._arguments)),
        movzbw: $ => seq( 'movzbw', optional($._arguments)),
        movzwl: $ => seq( 'movzwl', optional($._arguments)),
        mul: $ => seq( 'mul', optional($._arguments)),
        mulb: $ => seq( 'mulb', optional($._arguments)),
        mull: $ => seq( 'mull', optional($._arguments)),
        mulq: $ => seq( 'mulq', optional($._arguments)),
        mulsd: $ => seq( 'mulsd', optional($._arguments)),
        mulss: $ => seq( 'mulss', optional($._arguments)),
        mulw: $ => seq( 'mulw', optional($._arguments)),
        mulx: $ => seq( 'mulx', optional($._arguments)),
        neg: $ => seq( 'neg', optional($._arguments)),
        negl: $ => seq( 'negl', optional($._arguments)),
        negq: $ => seq( 'negq', optional($._arguments)),
        nop: $ => seq( 'nop', optional($._arguments)),
        nopl: $ => seq( 'nopl', optional($._arguments)),
        nopw: $ => seq( 'nopw', optional($._arguments)),
        not: $ => seq( 'not', optional($._arguments)),
        notl: $ => seq( 'notl', optional($._arguments)),
        notw: $ => seq( 'notw', optional($._arguments)),
        or: $ => seq( 'or', optional($._arguments)),
        orb: $ => seq( 'orb', optional($._arguments)),
        orl: $ => seq( 'orl', optional($._arguments)),
        orq: $ => seq( 'orq', optional($._arguments)),
        orw: $ => seq( 'orw', optional($._arguments)),
        outsb: $ => seq( 'outsb', optional($._arguments)),
        outsl: $ => seq( 'outsl', optional($._arguments)),
        packuswb: $ => seq( 'packuswb', optional($._arguments)),
        paddd: $ => seq( 'paddd', optional($._arguments)),
        paddq: $ => seq( 'paddq', optional($._arguments)),
        paddw: $ => seq( 'paddw', optional($._arguments)),
        palignr: $ => seq( 'palignr', optional($._arguments)),
        pand: $ => seq( 'pand', optional($._arguments)),
        pandn: $ => seq( 'pandn', optional($._arguments)),
        pblendw: $ => seq( 'pblendw', optional($._arguments)),
        pclmulhqhqdq: $ => seq( 'pclmulhqhqdq', optional($._arguments)),
        pclmullqhqdq: $ => seq( 'pclmullqhqdq', optional($._arguments)),
        pclmullqlqdq: $ => seq( 'pclmullqlqdq', optional($._arguments)),
        pcmpeqb: $ => seq( 'pcmpeqb', optional($._arguments)),
        pcmpeqd: $ => seq( 'pcmpeqd', optional($._arguments)),
        pcmpgtd: $ => seq( 'pcmpgtd', optional($._arguments)),
        pextrb: $ => seq( 'pextrb', optional($._arguments)),
        pextrq: $ => seq( 'pextrq', optional($._arguments)),
        pextrw: $ => seq( 'pextrw', optional($._arguments)),
        pinsrb: $ => seq( 'pinsrb', optional($._arguments)),
        pinsrd: $ => seq( 'pinsrd', optional($._arguments)),
        pinsrw: $ => seq( 'pinsrw', optional($._arguments)),
        pmaddubsw: $ => seq( 'pmaddubsw', optional($._arguments)),
        pmaddwd: $ => seq( 'pmaddwd', optional($._arguments)),
        pmovmskb: $ => seq( 'pmovmskb', optional($._arguments)),
        pmuludq: $ => seq( 'pmuludq', optional($._arguments)),
        pop: $ => seq( 'pop', optional($._arguments)),
        popcnt: $ => seq( 'popcnt', optional($._arguments)),
        por: $ => seq( 'por', optional($._arguments)),
        prefetcht0: $ => seq( 'prefetcht0', optional($._arguments)),
        prefetcht1: $ => seq( 'prefetcht1', optional($._arguments)),
        pshufb: $ => seq( 'pshufb', optional($._arguments)),
        pshufd: $ => seq( 'pshufd', optional($._arguments)),
        pshufhw: $ => seq( 'pshufhw', optional($._arguments)),
        pshuflw: $ => seq( 'pshuflw', optional($._arguments)),
        pslld: $ => seq( 'pslld', optional($._arguments)),
        pslldq: $ => seq( 'pslldq', optional($._arguments)),
        psllq: $ => seq( 'psllq', optional($._arguments)),
        psrad: $ => seq( 'psrad', optional($._arguments)),
        psrld: $ => seq( 'psrld', optional($._arguments)),
        psrldq: $ => seq( 'psrldq', optional($._arguments)),
        psrlq: $ => seq( 'psrlq', optional($._arguments)),
        psrlw: $ => seq( 'psrlw', optional($._arguments)),
        psubb: $ => seq( 'psubb', optional($._arguments)),
        psubd: $ => seq( 'psubd', optional($._arguments)),
        psubq: $ => seq( 'psubq', optional($._arguments)),
        psubusb: $ => seq( 'psubusb', optional($._arguments)),
        psubusw: $ => seq( 'psubusw', optional($._arguments)),
        punpckhbw: $ => seq( 'punpckhbw', optional($._arguments)),
        punpckhdq: $ => seq( 'punpckhdq', optional($._arguments)),
        punpckhqdq: $ => seq( 'punpckhqdq', optional($._arguments)),
        punpckhwd: $ => seq( 'punpckhwd', optional($._arguments)),
        punpcklbw: $ => seq( 'punpcklbw', optional($._arguments)),
        punpckldq: $ => seq( 'punpckldq', optional($._arguments)),
        punpcklqdq: $ => seq( 'punpcklqdq', optional($._arguments)),
        punpcklwd: $ => seq( 'punpcklwd', optional($._arguments)),
        push: $ => seq( 'push', optional($._arguments)),
        pushq: $ => seq( 'pushq', optional($._arguments)),
        pxor: $ => seq( 'pxor', optional($._arguments)),
        re: $ => seq( 're', optional($._arguments)),
        rep: $ => seq( 'rep', optional($._arguments)),
        repnz: $ => seq( 'repnz', optional($._arguments)),
        repz: $ => seq( 'repz', optional($._arguments)),
        retq: $ => seq( 'retq', optional($._arguments)),
        rex: $ => seq( 'rex', optional($._arguments)),
        rex_B: $ => seq( 'rex.B', optional($._arguments)),
        rex_RB: $ => seq( 'rex.RB', optional($._arguments)),
        rex_RXB: $ => seq( 'rex.RXB', optional($._arguments)),
        rex_W: $ => seq( 'rex.W', optional($._arguments)),
        rex_WB: $ => seq( 'rex.WB', optional($._arguments)),
        rex_WRB: $ => seq( 'rex.WRB', optional($._arguments)),
        rex_WRXB: $ => seq( 'rex.WRXB', optional($._arguments)),
        rex_XB: $ => seq( 'rex.XB', optional($._arguments)),
        rol: $ => seq( 'rol', optional($._arguments)),
        roll: $ => seq( 'roll', optional($._arguments)),
        ror: $ => seq( 'ror', optional($._arguments)),
        rorl: $ => seq( 'rorl', optional($._arguments)),
        rorx: $ => seq( 'rorx', optional($._arguments)),
        sar: $ => seq( 'sar', optional($._arguments)),
        sarl: $ => seq( 'sarl', optional($._arguments)),
        sarx: $ => seq( 'sarx', optional($._arguments)),
        sbb: $ => seq( 'sbb', optional($._arguments)),
        seta: $ => seq( 'seta', optional($._arguments)),
        setae: $ => seq( 'setae', optional($._arguments)),
        setb: $ => seq( 'setb', optional($._arguments)),
        setbe: $ => seq( 'setbe', optional($._arguments)),
        sete: $ => seq( 'sete', optional($._arguments)),
        setg: $ => seq( 'setg', optional($._arguments)),
        setge: $ => seq( 'setge', optional($._arguments)),
        setl: $ => seq( 'setl', optional($._arguments)),
        setle: $ => seq( 'setle', optional($._arguments)),
        setne: $ => seq( 'setne', optional($._arguments)),
        setnp: $ => seq( 'setnp', optional($._arguments)),
        setns: $ => seq( 'setns', optional($._arguments)),
        seto: $ => seq( 'seto', optional($._arguments)),
        setp: $ => seq( 'setp', optional($._arguments)),
        sha1msg1: $ => seq( 'sha1msg1', optional($._arguments)),
        sha1msg2: $ => seq( 'sha1msg2', optional($._arguments)),
        sha1nexte: $ => seq( 'sha1nexte', optional($._arguments)),
        sha1rnds4: $ => seq( 'sha1rnds4', optional($._arguments)),
        shl: $ => seq( 'shl', optional($._arguments)),
        shld: $ => seq( 'shld', optional($._arguments)),
        shll: $ => seq( 'shll', optional($._arguments)),
        shlq: $ => seq( 'shlq', optional($._arguments)),
        shlx: $ => seq( 'shlx', optional($._arguments)),
        shr: $ => seq( 'shr', optional($._arguments)),
        shrd: $ => seq( 'shrd', optional($._arguments)),
        shrl: $ => seq( 'shrl', optional($._arguments)),
        shrq: $ => seq( 'shrq', optional($._arguments)),
        shrx: $ => seq( 'shrx', optional($._arguments)),
        shufpd: $ => seq( 'shufpd', optional($._arguments)),
        shufps: $ => seq( 'shufps', optional($._arguments)),
        ss: $ => seq( 'ss', optional($._arguments)),
        sub: $ => seq( 'sub', optional($._arguments)),
        subb: $ => seq( 'subb', optional($._arguments)),
        subl: $ => seq( 'subl', optional($._arguments)),
        subpd: $ => seq( 'subpd', optional($._arguments)),
        subq: $ => seq( 'subq', optional($._arguments)),
        subsd: $ => seq( 'subsd', optional($._arguments)),
        subss: $ => seq( 'subss', optional($._arguments)),
        subw: $ => seq( 'subw', optional($._arguments)),
        test: $ => seq( 'test', optional($._arguments)),
        testb: $ => seq( 'testb', optional($._arguments)),
        testl: $ => seq( 'testl', optional($._arguments)),
        tzcnt: $ => seq( 'tzcnt', optional($._arguments)),
        ucomisd: $ => seq( 'ucomisd', optional($._arguments)),
        ucomiss: $ => seq( 'ucomiss', optional($._arguments)),
        ud2: $ => seq( 'ud2', optional($._arguments)),
        unpckhpd: $ => seq( 'unpckhpd', optional($._arguments)),
        vaesenc: $ => seq( 'vaesenc', optional($._arguments)),
        vaesenclast: $ => seq( 'vaesenclast', optional($._arguments)),
        vblendps: $ => seq( 'vblendps', optional($._arguments)),
        vblendvps: $ => seq( 'vblendvps', optional($._arguments)),
        vbroadcasti128: $ => seq( 'vbroadcasti128', optional($._arguments)),
        vbroadcasti32x4: $ => seq( 'vbroadcasti32x4', optional($._arguments)),
        vbroadcastss: $ => seq( 'vbroadcastss', optional($._arguments)),
        vcvtusi2sd: $ => seq( 'vcvtusi2sd', optional($._arguments)),
        vdivsd: $ => seq( 'vdivsd', optional($._arguments)),
        vextracti128: $ => seq( 'vextracti128', optional($._arguments)),
        vextracti32x4: $ => seq( 'vextracti32x4', optional($._arguments)),
        vinsertf128: $ => seq( 'vinsertf128', optional($._arguments)),
        vinserti128: $ => seq( 'vinserti128', optional($._arguments)),
        vinserti32x4: $ => seq( 'vinserti32x4', optional($._arguments)),
        vinserti64x4: $ => seq( 'vinserti64x4', optional($._arguments)),
        vmovapd: $ => seq( 'vmovapd', optional($._arguments)),
        vmovaps: $ => seq( 'vmovaps', optional($._arguments)),
        vmovd: $ => seq( 'vmovd', optional($._arguments)),
        vmovdqa: $ => seq( 'vmovdqa', optional($._arguments)),
        vmovdqa32: $ => seq( 'vmovdqa32', optional($._arguments)),
        vmovdqa64: $ => seq( 'vmovdqa64', optional($._arguments)),
        vmovdqu: $ => seq( 'vmovdqu', optional($._arguments)),
        vmovdqu32: $ => seq( 'vmovdqu32', optional($._arguments)),
        vmovdqu64: $ => seq( 'vmovdqu64', optional($._arguments)),
        vmovq: $ => seq( 'vmovq', optional($._arguments)),
        vmovsd: $ => seq( 'vmovsd', optional($._arguments)),
        vmovss: $ => seq( 'vmovss', optional($._arguments)),
        vmovups: $ => seq( 'vmovups', optional($._arguments)),
        vmulsd: $ => seq( 'vmulsd', optional($._arguments)),
        vpackusdw: $ => seq( 'vpackusdw', optional($._arguments)),
        vpaddb: $ => seq( 'vpaddb', optional($._arguments)),
        vpaddd: $ => seq( 'vpaddd', optional($._arguments)),
        vpaddq: $ => seq( 'vpaddq', optional($._arguments)),
        vpaddw: $ => seq( 'vpaddw', optional($._arguments)),
        vpalignr: $ => seq( 'vpalignr', optional($._arguments)),
        vpand: $ => seq( 'vpand', optional($._arguments)),
        vpblendd: $ => seq( 'vpblendd', optional($._arguments)),
        vpblendmd: $ => seq( 'vpblendmd', optional($._arguments)),
        vpbroadcastd: $ => seq( 'vpbroadcastd', optional($._arguments)),
        vpbroadcastq: $ => seq( 'vpbroadcastq', optional($._arguments)),
        vpclmulhqhqdq: $ => seq( 'vpclmulhqhqdq', optional($._arguments)),
        vpclmulhqlqdq: $ => seq( 'vpclmulhqlqdq', optional($._arguments)),
        vpclmullqhqdq: $ => seq( 'vpclmullqhqdq', optional($._arguments)),
        vpclmullqlqdq: $ => seq( 'vpclmullqlqdq', optional($._arguments)),
        vpcmpgtd: $ => seq( 'vpcmpgtd', optional($._arguments)),
        vpcmpltud: $ => seq( 'vpcmpltud', optional($._arguments)),
        vperm2f128: $ => seq( 'vperm2f128', optional($._arguments)),
        vperm2i128: $ => seq( 'vperm2i128', optional($._arguments)),
        vpermd: $ => seq( 'vpermd', optional($._arguments)),
        vpermi2d: $ => seq( 'vpermi2d', optional($._arguments)),
        vpermq: $ => seq( 'vpermq', optional($._arguments)),
        vpermt2d: $ => seq( 'vpermt2d', optional($._arguments)),
        vpextrw: $ => seq( 'vpextrw', optional($._arguments)),
        vpinsrb: $ => seq( 'vpinsrb', optional($._arguments)),
        vpinsrd: $ => seq( 'vpinsrd', optional($._arguments)),
        vpinsrq: $ => seq( 'vpinsrq', optional($._arguments)),
        vpinsrw: $ => seq( 'vpinsrw', optional($._arguments)),
        vpmaddubsw: $ => seq( 'vpmaddubsw', optional($._arguments)),
        vpmaddwd: $ => seq( 'vpmaddwd', optional($._arguments)),
        vpmullw: $ => seq( 'vpmullw', optional($._arguments)),
        vpmuludq: $ => seq( 'vpmuludq', optional($._arguments)),
        vpor: $ => seq( 'vpor', optional($._arguments)),
        vprord: $ => seq( 'vprord', optional($._arguments)),
        vprorq: $ => seq( 'vprorq', optional($._arguments)),
        vpshufb: $ => seq( 'vpshufb', optional($._arguments)),
        vpshufd: $ => seq( 'vpshufd', optional($._arguments)),
        vpslld: $ => seq( 'vpslld', optional($._arguments)),
        vpslldq: $ => seq( 'vpslldq', optional($._arguments)),
        vpsllq: $ => seq( 'vpsllq', optional($._arguments)),
        vpsllw: $ => seq( 'vpsllw', optional($._arguments)),
        vpsrld: $ => seq( 'vpsrld', optional($._arguments)),
        vpsrld: $ => seq( 'vpsrld', optional($._arguments)),
        vpsrldq: $ => seq( 'vpsrldq', optional($._arguments)),
        vpsrlq: $ => seq( 'vpsrlq', optional($._arguments)),
        vpsrlw: $ => seq( 'vpsrlw', optional($._arguments)),
        vpsubd: $ => seq( 'vpsubd', optional($._arguments)),
        vpsubq: $ => seq( 'vpsubq', optional($._arguments)),
        vpsubusw: $ => seq( 'vpsubusw', optional($._arguments)),
        vpsubw: $ => seq( 'vpsubw', optional($._arguments)),
        vpunpckhdq: $ => seq( 'vpunpckhdq', optional($._arguments)),
        vpunpckhqdq: $ => seq( 'vpunpckhqdq', optional($._arguments)),
        vpunpckhwd: $ => seq( 'vpunpckhwd', optional($._arguments)),
        vpunpckldq: $ => seq( 'vpunpckldq', optional($._arguments)),
        vpunpcklqdq: $ => seq( 'vpunpcklqdq', optional($._arguments)),
        vpunpcklwd: $ => seq( 'vpunpcklwd', optional($._arguments)),
        vpxor: $ => seq( 'vpxor', optional($._arguments)),
        vpxord: $ => seq( 'vpxord', optional($._arguments)),
        vshufi32x4: $ => seq( 'vshufi32x4', optional($._arguments)),
        vshufi64x2: $ => seq( 'vshufi64x2', optional($._arguments)),
        vshufps: $ => seq( 'vshufps', optional($._arguments)),
        vsubsd: $ => seq( 'vsubsd', optional($._arguments)),
        vucomisd: $ => seq( 'vucomisd', optional($._arguments)),
        vucomiss: $ => seq( 'vucomiss', optional($._arguments)),
        vunpckhpd: $ => seq( 'vunpckhpd', optional($._arguments)),
        vunpckhps: $ => seq( 'vunpckhps', optional($._arguments)),
        vunpcklpd: $ => seq( 'vunpcklpd', optional($._arguments)),
        vunpcklps: $ => seq( 'vunpcklps', optional($._arguments)),
        vxorps: $ => seq( 'vxorps', optional($._arguments)),
        vzeroall: $ => seq( 'vzeroall', optional($._arguments)),
        vzeroupper: $ => seq( 'vzeroupper', optional($._arguments)),
        xchg: $ => seq( 'xchg', optional($._arguments)),
        xgetbv: $ => seq( 'xgetbv', optional($._arguments)),
        xor: $ => seq( 'xor', optional($._arguments)),
        xorl: $ => seq( 'xorl', optional($._arguments)),
        xorpd: $ => seq( 'xorpd', optional($._arguments)),
        xorps: $ => seq( 'xorps', optional($._arguments)),
        xorw: $ => seq('xorw', optional($._arguments)),

        fn: $ => prec.left(repeat1(/[\*0-9a-zA-Z%$_\(\)<>,:+{}&\[\];\.\w]/)),
        callq: $ => seq( 'callq', $.fn),
        ja: $ => seq( 'ja', $.fn),
        jae: $ => seq( 'jae', $.fn),
        jb: $ => seq( 'jb', $.fn),
        jbe: $ => seq( 'jbe', $.fn),
        je: $ => seq( 'je', $.fn),
        jg: $ => seq( 'jg', $.fn),
        jge: $ => seq( 'jge', $.fn),
        jl: $ => seq( 'jl', $.fn),
        jle: $ => seq( 'jle', $.fn),
        jmp: $ => seq( 'jmp', $.fn),
        jmpq: $ => seq( 'jmpq', $.fn),
        jne: $ => seq( 'jne', $.fn),
        jno: $ => seq( 'jno', $.fn),
        jns: $ => seq( 'jns', $.fn),
        jo: $ => seq( 'jo', $.fn),
        jp: $ => seq( 'jp', $.fn),
        jrcxz: $ => seq( 'jrcxz', $.fn),
        js: $ => seq( 'js', $.fn),
        notrack: $ => seq( 'notrack', $.fn),

    }
});
