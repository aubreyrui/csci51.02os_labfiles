	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 2
	.globl	__Z5dummyii                     ; -- Begin function _Z5dummyii
	.p2align	2
__Z5dummyii:                            ; @_Z5dummyii
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	str	w0, [sp, #28]
	str	w1, [sp, #24]
	ldr	w8, [sp, #28]
	ldr	w9, [sp, #24]
	add	w8, w8, w9
	str	w8, [sp, #20]
	ldr	w8, [sp, #28]
	ldr	w9, [sp, #24]
	subs	w8, w8, w9
	str	w8, [sp, #16]
	ldr	w8, [sp, #28]
	ldr	w9, [sp, #24]
	mul	w8, w8, w9
	str	w8, [sp, #12]
	ldr	w8, [sp, #28]
	ldr	w9, [sp, #24]
	sdiv	w8, w8, w9
	str	w8, [sp, #8]
	ldr	w8, [sp, #28]
	ldr	w10, [sp, #24]
	sdiv	w9, w8, w10
	mul	w9, w9, w10
	subs	w8, w8, w9
	str	w8, [sp, #4]
	mov	w0, #0                          ; =0x0
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
