	.section	.rodata
.LC0:
	.string "****************Recursive GCD****************\n"
.LC1:
	.string "Enter a positive number(a) :"
.LC2:
	.string "Enter a positive number(b) :"
.LC3:
	.string "The gcd of "
.LC4:
	.string " & "
.LC5:
	.string " is : "
.LC6:
	.string "\n"
  # function printi start
  # function prints start
  # function readi start
  # function gcd start
#--param_offset:24
#--param_offset:32
#--loacl var offset: 4 -4
#--loacl var offset: 0 -4
#--loacl var offset: 4 -8
#--loacl var offset: 4 -12
#--loacl var offset: 4 -16
#--loacl var offset: 4 -20
#-20
##ptrm
##ptrn
##ptrt0
##ptrt1
##ptra
##ptrb
##ptrt2
##ptrgcd
##ptrretVal
	.globl	gcd
	.type	gcd, @function
gcd:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64,	%rsp
  # t0 = 0
	movl	$0,	-4(%rbp)
  # if n !=t0 goto .L0
	movl	24(%rbp),	%eax
	cmpl	-4(%rbp),	%eax
	je	.L3
	jmp	.L0
.L3:
  # goto .L1
	jmp	.L1
  # goto .L2
	jmp	.L2
  # m%n
.L0:
	movl	16(%rbp),	%eax
	cltd
	idivl	24(%rbp)
	movl	%edx,	-16(%rbp)
  # a = t2
	movl	-16(%rbp),	%eax
	movl	%eax,	-8(%rbp)
  # param n
  # param a
  # call gcd 2
	movq	-8(%rbp),	%rax
	pushq	%rax
	movq	24(%rbp),	%rax
	pushq	%rax
	call	gcd
	addq	$16,	%rsp
#--
  # b = gcd
	movl	%eax,	-12(%rbp)
  # return b
	movq	-12(%rbp),	%rax
	leave
	ret
  # goto .L2
	jmp	.L2
  # return m
.L1:
	movq	16(%rbp),	%rax
	leave
	ret
  # goto .L2
	jmp	.L2
  # function gcd end
.L2:
	leave
	ret
	.size	gcd,	.-gcd
  # function main start
#--loacl var offset: 4 -4
#--loacl var offset: 4 -8
#--loacl var offset: 4 -12
#--loacl var offset: 4 -16
#--loacl var offset: 4 -20
#--loacl var offset: 4 -24
#--loacl var offset: 4 -28
#--loacl var offset: 4 -32
#--loacl var offset: 8 -40
#--loacl var offset: 4 -44
#--loacl var offset: 8 -52
#--loacl var offset: 4 -56
#--loacl var offset: 4 -60
#--loacl var offset: 4 -64
#--loacl var offset: 4 -68
#--loacl var offset: 4 -72
#--loacl var offset: 4 -76
#--loacl var offset: 4 -80
#-80
##ptra
##ptrb
##ptrc
##ptrp
##ptrprints
##ptr.LC0
##ptr.LC1
##ptrreadi
##ptrt3
##ptr.LC2
##ptrt4
##ptr.LC3
##ptrprinti
##ptr.LC4
##ptr.LC5
##ptrgcd
##ptr.LC6
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
  # param .LC1
	movq	$.LC1,	%rdi
  # call prints 1
	call	prints
  # t3= &p
	leaq	-16(%rbp),	%rax
	movq	%rax,	-40(%rbp)
  # param t3
	movq	-40(%rbp),	%rdi
  # call readi 1
	call	readi
  # a = readi
	movl	%eax,	-4(%rbp)
  # param .LC2
	movq	$.LC2,	%rdi
  # call prints 1
	call	prints
  # t4= &p
	leaq	-16(%rbp),	%rax
	movq	%rax,	-52(%rbp)
  # param t4
	movq	-52(%rbp),	%rdi
  # call readi 1
	call	readi
  # b = readi
	movl	%eax,	-8(%rbp)
  # param .LC3
	movq	$.LC3,	%rdi
  # call prints 1
	call	prints
  # param a
	movq	-4(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC4
	movq	$.LC4,	%rdi
  # call prints 1
	call	prints
  # param b
	movq	-8(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC5
	movq	$.LC5,	%rdi
  # call prints 1
	call	prints
  # param a
  # param b
  # call gcd 2
	movq	-8(%rbp),	%rax
	pushq	%rax
	movq	-4(%rbp),	%rax
	pushq	%rax
	call	gcd
	addq	$16,	%rsp
#--
  # c = gcd
	movl	%eax,	-12(%rbp)
  # param c
	movq	-12(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC6
	movq	$.LC6,	%rdi
  # call prints 1
	call	prints
  # t5 = 0
	movl	$0,	-80(%rbp)
  # return t5
	movq	-80(%rbp),	%rax
	leave
	ret
  # function main end
	leave
	ret
	.size	main,	.-main
