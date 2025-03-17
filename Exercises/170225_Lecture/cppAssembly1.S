	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 2
	.globl	__Z5dummyiii                    ; -- Begin function _Z5dummyiii
	.p2align	2
__Z5dummyiii:                           ; @_Z5dummyiii
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	str	w0, [sp, #28]
	str	w1, [sp, #24]
	str	w2, [sp, #20]
	ldr	w8, [sp, #28]
	ldr	w9, [sp, #24]
	add	w8, w8, w9
	str	w8, [sp, #16]
	ldr	w8, [sp, #28]
	ldr	w9, [sp, #20]
	add	w8, w8, w9
	str	w8, [sp, #12]
	ldr	w8, [sp, #16]
	ldr	w9, [sp, #12]
	add	w0, w8, w9
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
