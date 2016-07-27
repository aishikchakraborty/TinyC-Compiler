	.section	.rodata
.LC0:
	.string "*****************Recursive Factorial**********************\n"
.LC1:
	.string "Enter a number(<=10) for finding factorial!\n"
.LC2:
	.string "Error!! Number is >10!!\n"
.LC3:
	.string "The factorial of "
.LC4:
	.string " is : "
.LC5:
	.string "\n"
.LC6:
	.string "*****************Recursive Fibonacci*************************************\n"
.LC7:
	.string "Enter a number(<=10) for finding nth Fibonaci!\n"
.LC8:
	.string "Error!! Number is >10!!\n"
.LC9:
	.string "The "
.LC10:
	.string "th fibonacci is : "
.LC11:
	.string "\n"
  # function printi start
  # function prints start
  # function readi start
  # function factorial start
#--param_offset:24
#--loacl var offset: 4 -4
#--loacl var offset: 0 -4
#--loacl var offset: 4 -8
#--loacl var offset: 4 -12
#--loacl var offset: 4 -16
#--loacl var offset: 4 -20
#--loacl var offset: 4 -24
#--loacl var offset: 4 -28
#-28
##ptrn
##ptrt0
##ptrt1
##ptrt2
##ptrretVal
##ptra
##ptrfactorial
##ptrt3
##ptrt4
##ptrt5
	.globl	factorial
	.type	factorial, @function
factorial:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64,	%rsp
  # t0 = 0
	movl	$0,	-4(%rbp)
  # if n ==t0 goto .L0
	movl	16(%rbp),	%eax
	cmpl	-4(%rbp),	%eax
	jne	.L13
	jmp	.L0
.L13:
  # goto .L1
	jmp	.L1
  # goto .L2
	jmp	.L2
  # t2 = 1
.L0:
	movl	$1,	-8(%rbp)
  # return t2
	movq	-8(%rbp),	%rax
	leave
	ret
  # goto .L2
	jmp	.L2
  # t3 = 1
.L1:
	movl	$1,	-20(%rbp)
  # n-t3
	movl	16(%rbp),	%edx
	movl	-20(%rbp),	%eax
	subl	%eax,	%edx
	movl	%edx,	%eax
	movl 	%eax,	-24(%rbp)
  # param t4
  # call factorial 1
	movq	-24(%rbp),	%rax
	pushq	%rax
	call	factorial
	addq	$8,	%rsp
#--
  # a = factorial
	movl	%eax,	-12(%rbp)
  # goto .L2
	jmp	.L2
  # n*a
.L2:
	movl	16(%rbp),	%eax
	imull	-12(%rbp),%eax
	movl	%eax,	-28(%rbp)
  # return t5
	movq	-28(%rbp),	%rax
	leave
	ret
  # function factorial end
	leave
	ret
	.size	factorial,	.-factorial
  # function fibonaci start
#--param_offset:24
#--loacl var offset: 4 -4
#--loacl var offset: 0 -4
#--loacl var offset: 4 -8
#--loacl var offset: 4 -12
#--loacl var offset: 0 -12
#--loacl var offset: 4 -16
#--loacl var offset: 4 -20
#--loacl var offset: 4 -24
#--loacl var offset: 4 -28
#--loacl var offset: 4 -32
#--loacl var offset: 4 -36
#--loacl var offset: 4 -40
#--loacl var offset: 4 -44
#--loacl var offset: 4 -48
#--loacl var offset: 4 -52
#-52
##ptri
##ptrt6
##ptrt7
##ptrt8
##ptrretVal
##ptrt9
##ptrt10
##ptrt11
##ptra
##ptrb
##ptrc
##ptrfibonaci
##ptrt12
##ptrt13
##ptrt14
##ptrt15
##ptrt16
	.globl	fibonaci
	.type	fibonaci, @function
fibonaci:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$80,	%rsp
  # t6 = 0
	movl	$0,	-4(%rbp)
  # if i ==t6 goto .L3
	movl	16(%rbp),	%eax
	cmpl	-4(%rbp),	%eax
	jne	.L14
	jmp	.L3
.L14:
  # goto .L4
	jmp	.L4
  # goto .L4
	jmp	.L4
  # t8 = 0
.L3:
	movl	$0,	-8(%rbp)
  # return t8
	movq	-8(%rbp),	%rax
	leave
	ret
  # goto .L4
	jmp	.L4
  # t9 = 1
.L4:
	movl	$1,	-12(%rbp)
  # if i ==t9 goto .L5
	movl	16(%rbp),	%eax
	cmpl	-12(%rbp),	%eax
	jne	.L15
	jmp	.L5
.L15:
  # goto .L6
	jmp	.L6
  # goto .L6
	jmp	.L6
  # t11 = 1
.L5:
	movl	$1,	-16(%rbp)
  # return t11
	movq	-16(%rbp),	%rax
	leave
	ret
  # goto .L6
	jmp	.L6
  # t12 = 1
.L6:
	movl	$1,	-36(%rbp)
  # i-t12
	movl	16(%rbp),	%edx
	movl	-36(%rbp),	%eax
	subl	%eax,	%edx
	movl	%edx,	%eax
	movl 	%eax,	-40(%rbp)
  # param t13
  # call fibonaci 1
	movq	-40(%rbp),	%rax
	pushq	%rax
	call	fibonaci
	addq	$8,	%rsp
#--
  # a = fibonaci
	movl	%eax,	-20(%rbp)
  # t14 = 2
	movl	$2,	-44(%rbp)
  # i-t14
	movl	16(%rbp),	%edx
	movl	-44(%rbp),	%eax
	subl	%eax,	%edx
	movl	%edx,	%eax
	movl 	%eax,	-48(%rbp)
  # param t15
  # call fibonaci 1
	movq	-48(%rbp),	%rax
	pushq	%rax
	call	fibonaci
	addq	$8,	%rsp
#--
  # b = fibonaci
	movl	%eax,	-24(%rbp)
  # a+b
	movl	-20(%rbp),	%edx
	movl	-24(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-52(%rbp)
  # c = t16
	movl	-52(%rbp),	%eax
	movl	%eax,	-28(%rbp)
  # return c
	movq	-28(%rbp),	%rax
	leave
	ret
  # function fibonaci end
	leave
	ret
	.size	fibonaci,	.-fibonaci
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
#--loacl var offset: 0 -44
#--loacl var offset: 4 -48
#--loacl var offset: 4 -52
#--loacl var offset: 4 -56
#--loacl var offset: 4 -60
#--loacl var offset: 4 -64
#--loacl var offset: 4 -68
#--loacl var offset: 4 -72
#--loacl var offset: 4 -76
#--loacl var offset: 8 -84
#--loacl var offset: 4 -88
#--loacl var offset: 0 -88
#--loacl var offset: 4 -92
#--loacl var offset: 4 -96
#--loacl var offset: 4 -100
#--loacl var offset: 4 -104
#--loacl var offset: 4 -108
#--loacl var offset: 4 -112
#-112
##ptrnum
##ptrfact
##ptrfib
##ptrprints
##ptr.LC0
##ptr.LC1
##ptrp
##ptrreadi
##ptrt17
##ptrt18
##ptrt19
##ptr.LC2
##ptrfactorial
##ptr.LC3
##ptrprinti
##ptr.LC4
##ptr.LC5
##ptr.LC6
##ptr.LC7
##ptrt20
##ptrt21
##ptrt22
##ptr.LC8
##ptrfibonaci
##ptr.LC9
##ptr.LC10
##ptr.LC11
##ptrt23
##ptrretVal
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$144,	%rsp
  # param .LC0
	movq	$.LC0,	%rdi
  # call prints 1
	call	prints
  # param .LC1
	movq	$.LC1,	%rdi
  # call prints 1
	call	prints
  # t17= &p
	leaq	-28(%rbp),	%rax
	movq	%rax,	-40(%rbp)
  # param t17
	movq	-40(%rbp),	%rdi
  # call readi 1
	call	readi
  # num = readi
	movl	%eax,	-4(%rbp)
  # t18 = 10
	movl	$10,	-44(%rbp)
  # if num >t18 goto .L7
	movl	-4(%rbp),	%eax
	cmpl	-44(%rbp),	%eax
	jle	.L16
	jmp	.L7
.L16:
  # goto .L8
	jmp	.L8
  # goto .L9
	jmp	.L9
  # param .LC2
.L7:
	movq	$.LC2,	%rdi
  # call prints 1
	call	prints
  # goto .L9
	jmp	.L9
  # param num
.L8:
  # call factorial 1
	movq	-4(%rbp),	%rax
	pushq	%rax
	call	factorial
	addq	$8,	%rsp
#--
  # fact = factorial
	movl	%eax,	-8(%rbp)
  # param .LC3
	movq	$.LC3,	%rdi
  # call prints 1
	call	prints
  # param num
	movq	-4(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC4
	movq	$.LC4,	%rdi
  # call prints 1
	call	prints
  # param fact
	movq	-8(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC5
	movq	$.LC5,	%rdi
  # call prints 1
	call	prints
  # goto .L9
	jmp	.L9
  # param .LC6
.L9:
	movq	$.LC6,	%rdi
  # call prints 1
	call	prints
  # param .LC7
	movq	$.LC7,	%rdi
  # call prints 1
	call	prints
  # t20= &p
	leaq	-28(%rbp),	%rax
	movq	%rax,	-84(%rbp)
  # param t20
	movq	-84(%rbp),	%rdi
  # call readi 1
	call	readi
  # num = readi
	movl	%eax,	-4(%rbp)
  # t21 = 10
	movl	$10,	-88(%rbp)
  # if num >t21 goto .L10
	movl	-4(%rbp),	%eax
	cmpl	-88(%rbp),	%eax
	jle	.L17
	jmp	.L10
.L17:
  # goto .L11
	jmp	.L11
  # goto .L12
	jmp	.L12
  # param .LC8
.L10:
	movq	$.LC8,	%rdi
  # call prints 1
	call	prints
  # goto .L12
	jmp	.L12
  # param num
.L11:
  # call fibonaci 1
	movq	-4(%rbp),	%rax
	pushq	%rax
	call	fibonaci
	addq	$8,	%rsp
#--
  # fib = fibonaci
	movl	%eax,	-12(%rbp)
  # param .LC9
	movq	$.LC9,	%rdi
  # call prints 1
	call	prints
  # param num
	movq	-4(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC10
	movq	$.LC10,	%rdi
  # call prints 1
	call	prints
  # param fib
	movq	-12(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC11
	movq	$.LC11,	%rdi
  # call prints 1
	call	prints
  # goto .L12
	jmp	.L12
  # t23 = 0
.L12:
	movl	$0,	-112(%rbp)
  # return t23
	movq	-112(%rbp),	%rax
	leave
	ret
  # function main end
	leave
	ret
	.size	main,	.-main
