	.file	"diffPt3D.cpp"
	.text
	.globl	_Z8diffPt3D7Point3DS_
	.def	_Z8diffPt3D7Point3DS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z8diffPt3D7Point3DS_
_Z8diffPt3D7Point3DS_:
.LFB0:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	leaq	(%rsp), %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, %rsi
	movq	%rdx, %rbx
	movl	(%rsi), %edx
	movl	(%rbx), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev2, Built by MSYS2 project) 14.2.0"
