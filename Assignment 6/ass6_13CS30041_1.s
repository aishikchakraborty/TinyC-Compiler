	.section	.rodata
.LC0:
	.string "***********************Some random outputs!!*************************\n"
.LC1:
	.string "Passing pointers to function f!\n"
.LC2:
	.string "Value passed to function: "
.LC3:
	.string "\n"
.LC4:
	.string "Value returned from function s is: "
.LC5:
	.string "\n"
.LC6:
	.string "Read an integer!!"
.LC7:
	.string "\n"
.LC8:
	.string "The integer that was read is:"
.LC9:
	.string "\n"
  # function printi start
  # function prints start
  # function readi start
  # function f start
#--param_offset:24
#--loacl var offset: 4 -4
#--loacl var offset: 4 -8
#--loacl var offset: 4 -12
#--loacl var offset: 4 -16
#-16
##ptra
##ptrb
##ptrt0
##ptrt1
##ptrt2
##ptrretVal
	.globl	f
	.type	f, @function
f:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48,	%rsp
  # t0= *a
	movq	16(%rbp),	%rax
	movl	(%rax),	 %ecx
	movl	%ecx,	-8(%rbp)
  # b = t0
	movl	-8(%rbp),	%eax
	movl	%eax,	-4(%rbp)
  # t1 = 2
	movl	$2,	-12(%rbp)
  # b+t1
	movl	-4(%rbp),	%edx
	movl	-12(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-16(%rbp)
  # b = t2
	movl	-16(%rbp),	%eax
	movl	%eax,	-4(%rbp)
  # return b
	movq	-4(%rbp),	%rax
	leave
	ret
  # function f end
	leave
	ret
	.size	f,	.-f
  # function main start
#--loacl var offset: 4 -4
#--loacl var offset: 4 -8
#--loacl var offset: 8 -16
#--loacl var offset: 4 -20
#--loacl var offset: 4 -24
#--loacl var offset: 4 -28
#--loacl var offset: 8 -36
#--loacl var offset: 4 -40
#--loacl var offset: 4 -44
#--loacl var offset: 4 -48
#--loacl var offset: 4 -52
#--loacl var offset: 4 -56
#--loacl var offset: 4 -60
#--loacl var offset: 4 -64
#--loacl var offset: 4 -68
#--loacl var offset: 4 -72
#--loacl var offset: 4 -76
#--loacl var offset: 4 -80
#--loacl var offset: 4 -84
#--loacl var offset: 4 -88
#-88
##ptra
##ptrb
##ptre
##ptrprints
##ptr.LC0
##ptrt3
##ptrt4
##ptr.LC1
##ptr.LC2
##ptrprinti
##ptr.LC3
##ptrf
##ptr.LC4
##ptr.LC5
##ptr.LC6
##ptr.LC7
##ptrreadi
##ptr.LC8
##ptr.LC9
##ptrt5
##ptrretVal
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$112,	%rsp
  # param .LC0
	movq	$.LC0,	%rdi
  # call prints 1
	call	prints
  # t3 = 3
	movl	$3,	-28(%rbp)
  # b = t3
	movl	-28(%rbp),	%eax
	movl	%eax,	-8(%rbp)
  # t4= &b
	leaq	-8(%rbp),	%rax
	movq	%rax,	-36(%rbp)
  # e = t4
	movl	-36(%rbp),	%eax
	movl	%eax,	-16(%rbp)
  # param .LC1
	movq	$.LC1,	%rdi
  # call prints 1
	call	prints
  # param .LC2
	movq	$.LC2,	%rdi
  # call prints 1
	call	prints
  # param b
	movq	-8(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC3
	movq	$.LC3,	%rdi
  # call prints 1
	call	prints
  # param e
  # call f 1
	movq	-16(%rbp),	%rax
	pushq	%rax
	call	f
	addq	$8,	%rsp
#--
  # a = f
	movl	%eax,	-4(%rbp)
  # param .LC4
	movq	$.LC4,	%rdi
  # call prints 1
	call	prints
  # param a
	movq	-4(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC5
	movq	$.LC5,	%rdi
  # call prints 1
	call	prints
  # param .LC6
	movq	$.LC6,	%rdi
  # call prints 1
	call	prints
  # param .LC7
	movq	$.LC7,	%rdi
  # call prints 1
	call	prints
  # param e
	movq	-16(%rbp),	%rdi
  # call readi 1
	call	readi
  # b = readi
	movl	%eax,	-8(%rbp)
  # param .LC8
	movq	$.LC8,	%rdi
  # call prints 1
	call	prints
  # param b
	movq	-8(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC9
	movq	$.LC9,	%rdi
  # call prints 1
	call	prints
  # t5 = 0
	movl	$0,	-88(%rbp)
  # return t5
	movq	-88(%rbp),	%rax
	leave
	ret
  # function main end
	leave
	ret
	.size	main,	.-main
