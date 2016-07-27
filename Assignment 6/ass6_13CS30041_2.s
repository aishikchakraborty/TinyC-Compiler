	.section	.rodata
.LC0:
	.string "******************element by element product of two arrays******************\n"
.LC1:
	.string "Enter the number of elements of arrays a and b: "
.LC2:
	.string "Enter the elements of array a:\n"
.LC3:
	.string "Enter the elements of array b:\n"
.LC4:
	.string "The elements of the product array are:\n"
.LC5:
	.string " "
.LC6:
	.string "\n"
  # function printi start
  # function prints start
  # function readi start
  # function main start
#--loacl var offset: 4 -4
#--loacl var offset: 4 -8
#--loacl var offset: 4 -12
#--loacl var offset: 40 -52
#--loacl var offset: 4 -56
#--loacl var offset: 40 -96
#--loacl var offset: 4 -100
#--loacl var offset: 4 -104
#--loacl var offset: 4 -108
#--loacl var offset: 4 -112
#--loacl var offset: 4 -116
#--loacl var offset: 4 -120
#--loacl var offset: 4 -124
#--loacl var offset: 4 -128
#--loacl var offset: 8 -136
#--loacl var offset: 4 -140
#--loacl var offset: 4 -144
#--loacl var offset: 0 -144
#--loacl var offset: 4 -148
#--loacl var offset: 8 -156
#--loacl var offset: 4 -160
#--loacl var offset: 4 -164
#--loacl var offset: 4 -168
#--loacl var offset: 0 -168
#--loacl var offset: 4 -172
#--loacl var offset: 8 -180
#--loacl var offset: 4 -184
#--loacl var offset: 4 -188
#--loacl var offset: 4 -192
#--loacl var offset: 0 -192
#--loacl var offset: 4 -196
#--loacl var offset: 4 -200
#--loacl var offset: 4 -204
#--loacl var offset: 4 -208
#--loacl var offset: 4 -212
#--loacl var offset: 4 -216
#--loacl var offset: 4 -220
#--loacl var offset: 4 -224
#--loacl var offset: 4 -228
#--loacl var offset: 4 -232
#-232
##ptrprints
##ptr.LC0
##ptrt0
##ptra
##ptrt1
##ptrb
##ptrp
##ptrn
##ptrx
##ptri
##ptry
##ptrz
##ptr.LC1
##ptrreadi
##ptrt2
##ptr.LC2
##ptrt3
##ptrt4
##ptrt5
##ptrt6
##ptrt7
##ptr.LC3
##ptrt8
##ptrt9
##ptrt10
##ptrt11
##ptrt12
##ptr.LC4
##ptrt13
##ptrt14
##ptrt15
##ptrt16
##ptrt17
##ptrt18
##ptrt19
##ptrt20
##ptrprinti
##ptr.LC5
##ptr.LC6
##ptrt21
##ptrretVal
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$256,	%rsp
  # param .LC0
	movq	$.LC0,	%rdi
  # call prints 1
	call	prints
  # t0 = 10
	movl	$10,	-12(%rbp)
  # t1 = 10
	movl	$10,	-56(%rbp)
  # param .LC1
	movq	$.LC1,	%rdi
  # call prints 1
	call	prints
  # t2= &p
	leaq	-100(%rbp),	%rax
	movq	%rax,	-136(%rbp)
  # param t2
	movq	-136(%rbp),	%rdi
  # call readi 1
	call	readi
  # n = readi
	movl	%eax,	-104(%rbp)
  # param .LC2
	movq	$.LC2,	%rdi
  # call prints 1
	call	prints
  # t3 = 0
	movl	$0,	-144(%rbp)
  # i = t3
	movl	-144(%rbp),	%eax
	movl	%eax,	-112(%rbp)
  # if i <n goto .L0
.L2:
	movl	-112(%rbp),	%eax
	cmpl	-104(%rbp),	%eax
	jge	.L12
	jmp	.L0
.L12:
  # goto .L1
	jmp	.L1
  # goto .L1
	jmp	.L1
  # t5 = i
.L3:
	movl	-112(%rbp),	%eax
	movl	%eax,	-148(%rbp)
  # i = i+1
	movl	-112(%rbp),	%edx
	addl	$1,	%edx
	movl	%edx,	%eax
	movl	%eax,	-112(%rbp)
  # goto .L2
	jmp	.L2
  # t6= &p
.L0:
	leaq	-100(%rbp),	%rax
	movq	%rax,	-156(%rbp)
  # param t6
	movq	-156(%rbp),	%rdi
  # call readi 1
	call	readi
  # x = readi
	movl	%eax,	-108(%rbp)
  # t7 = 0
	movl	$0,	-160(%rbp)
  # t7*0
	movl	-160(%rbp),	%eax
	imull	$0,%eax
	movl	%eax,	-160(%rbp)
  # t7+i
	movl	-160(%rbp),	%edx
	movl	-112(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-160(%rbp)
  # t7*4
	movl	-160(%rbp),	%eax
	imull	$4,%eax
	movl	%eax,	-160(%rbp)
  # a[t7] = x
	movslq	-160(%rbp),	%rdx
	movslq	-108(%rbp),	%rax
	movq	%rax,	-52(%rbp,%rdx,1)
  # goto .L3
	jmp	.L3
  # param .LC3
.L1:
	movq	$.LC3,	%rdi
  # call prints 1
	call	prints
  # t8 = 0
	movl	$0,	-168(%rbp)
  # i = t8
	movl	-168(%rbp),	%eax
	movl	%eax,	-112(%rbp)
  # if i <n goto .L4
.L6:
	movl	-112(%rbp),	%eax
	cmpl	-104(%rbp),	%eax
	jge	.L13
	jmp	.L4
.L13:
  # goto .L5
	jmp	.L5
  # goto .L5
	jmp	.L5
  # t10 = i
.L7:
	movl	-112(%rbp),	%eax
	movl	%eax,	-172(%rbp)
  # i = i+1
	movl	-112(%rbp),	%edx
	addl	$1,	%edx
	movl	%edx,	%eax
	movl	%eax,	-112(%rbp)
  # goto .L6
	jmp	.L6
  # t11= &p
.L4:
	leaq	-100(%rbp),	%rax
	movq	%rax,	-180(%rbp)
  # param t11
	movq	-180(%rbp),	%rdi
  # call readi 1
	call	readi
  # x = readi
	movl	%eax,	-108(%rbp)
  # t12 = 0
	movl	$0,	-184(%rbp)
  # t12*0
	movl	-184(%rbp),	%eax
	imull	$0,%eax
	movl	%eax,	-184(%rbp)
  # t12+i
	movl	-184(%rbp),	%edx
	movl	-112(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-184(%rbp)
  # t12*4
	movl	-184(%rbp),	%eax
	imull	$4,%eax
	movl	%eax,	-184(%rbp)
  # b[t12] = x
	movslq	-184(%rbp),	%rdx
	movslq	-108(%rbp),	%rax
	movq	%rax,	-96(%rbp,%rdx,1)
  # goto .L7
	jmp	.L7
  # param .LC4
.L5:
	movq	$.LC4,	%rdi
  # call prints 1
	call	prints
  # t13 = 0
	movl	$0,	-192(%rbp)
  # i = t13
	movl	-192(%rbp),	%eax
	movl	%eax,	-112(%rbp)
  # if i <n goto .L8
.L10:
	movl	-112(%rbp),	%eax
	cmpl	-104(%rbp),	%eax
	jge	.L14
	jmp	.L8
.L14:
  # goto .L9
	jmp	.L9
  # goto .L9
	jmp	.L9
  # t15 = i
.L11:
	movl	-112(%rbp),	%eax
	movl	%eax,	-196(%rbp)
  # i = i+1
	movl	-112(%rbp),	%edx
	addl	$1,	%edx
	movl	%edx,	%eax
	movl	%eax,	-112(%rbp)
  # goto .L10
	jmp	.L10
  # t16 = 0
.L8:
	movl	$0,	-200(%rbp)
  # t16*0
	movl	-200(%rbp),	%eax
	imull	$0,%eax
	movl	%eax,	-200(%rbp)
  # t16+i
	movl	-200(%rbp),	%edx
	movl	-112(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-200(%rbp)
  # t16*4
	movl	-200(%rbp),	%eax
	imull	$4,%eax
	movl	%eax,	-200(%rbp)
  # t17 = a[t16]
	movslq	-200(%rbp),	%rdx
	movl	-52(%rbp,%rdx,1),	%eax
	movl	%eax,	-204(%rbp)
  # x = t17
	movl	-204(%rbp),	%eax
	movl	%eax,	-108(%rbp)
  # t18 = 0
	movl	$0,	-208(%rbp)
  # t18*0
	movl	-208(%rbp),	%eax
	imull	$0,%eax
	movl	%eax,	-208(%rbp)
  # t18+i
	movl	-208(%rbp),	%edx
	movl	-112(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-208(%rbp)
  # t18*4
	movl	-208(%rbp),	%eax
	imull	$4,%eax
	movl	%eax,	-208(%rbp)
  # t19 = b[t18]
	movslq	-208(%rbp),	%rdx
	movl	-96(%rbp,%rdx,1),	%eax
	movl	%eax,	-212(%rbp)
  # y = t19
	movl	-212(%rbp),	%eax
	movl	%eax,	-116(%rbp)
  # x*y
	movl	-108(%rbp),	%eax
	imull	-116(%rbp),%eax
	movl	%eax,	-216(%rbp)
  # z = t20
	movl	-216(%rbp),	%eax
	movl	%eax,	-120(%rbp)
  # param z
	movq	-120(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC5
	movq	$.LC5,	%rdi
  # call prints 1
	call	prints
  # goto .L11
	jmp	.L11
  # param .LC6
.L9:
	movq	$.LC6,	%rdi
  # call prints 1
	call	prints
  # t21 = 0
	movl	$0,	-232(%rbp)
  # return t21
	movq	-232(%rbp),	%rax
	leave
	ret
  # function main end
	leave
	ret
	.size	main,	.-main
