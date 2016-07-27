	.section	.rodata
.LC0:
	.string "***********************Recursive Binary Search***********************\n"
.LC1:
	.string "Enter the number of elements of array: "
.LC2:
	.string "Enter the array in sorted order:\n"
.LC3:
	.string "Enter the value to search for: "
.LC4:
	.string "Value not found!!\n"
.LC5:
	.string "Value found at index "
.LC6:
	.string " !\n"
  # function printi start
.L8:
  # function readi start
  # function prints start
  # t0 = 10
  # function binary_search start
#--param_offset:24
#--param_offset:32
#--param_offset:40
#--param_offset:48
#--loacl var offset: 4 -4
#--loacl var offset: 4 -8
#--loacl var offset: 0 -8
#--loacl var offset: 0 -8
#--loacl var offset: 4 -12
#--loacl var offset: 4 -16
#--loacl var offset: 4 -20
#--loacl var offset: 4 -24
#--loacl var offset: 40 -64
#--loacl var offset: 0 -64
#--loacl var offset: 4 -68
#--loacl var offset: 40 -108
#--loacl var offset: 0 -108
#--loacl var offset: 4 -112
#--loacl var offset: 4 -116
#--loacl var offset: 4 -120
#--loacl var offset: 4 -124
#--loacl var offset: 4 -128
#--loacl var offset: 4 -132
#--loacl var offset: 4 -136
#-136
##ptrarr
##ptrleft
##ptrright
##ptrsearch_key
##ptrmiddle
##ptrtemp
##ptrt1
##ptrt2
##ptrt3
##ptrt4
##ptrt5
##ptrt6
##ptrt7
##ptrt8
##ptrretVal
##ptrt9
##ptrt10
##ptrt11
##ptrbinary_search
##ptrt12
##ptrt13
##ptrt14
##ptrt15
##ptrt16
##ptrt17
	.globl	binary_search
	.type	binary_search, @function
binary_search:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$192,	%rsp
  # if left <right goto .L0
	movl	24(%rbp),	%eax
	cmpl	32(%rbp),	%eax
	jge	.L19
	jmp	.L0
.L19:
  # goto .L1
	jmp	.L1
  # goto .L2
	jmp	.L2
  # if left ==right goto .L0
.L1:
	movl	24(%rbp),	%eax
	cmpl	32(%rbp),	%eax
	jne	.L20
	jmp	.L0
.L20:
  # goto .L3
	jmp	.L3
  # goto .L2
	jmp	.L2
  # goto .L4
.L2:
	jmp	.L4
  # left+right
.L0:
	movl	24(%rbp),	%edx
	movl	32(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-12(%rbp)
  # t4 = 2
	movl	$2,	-16(%rbp)
  # t3/t4
	movl	-12(%rbp),	%eax
	cltd
	idivl	-16(%rbp)
	movl	%eax,	-20(%rbp)
  # middle = t5
	movl	-20(%rbp),	%eax
	movl	%eax,	-4(%rbp)
  # t6 = 0
	movl	$0,	-24(%rbp)
  # t6*10
	movl	-24(%rbp),	%eax
	imull	$10,%eax
	movl	%eax,	-24(%rbp)
  # t6+middle
	movl	-24(%rbp),	%edx
	movl	-4(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-24(%rbp)
  # t6*4
	movl	-24(%rbp),	%eax
	imull	$4,%eax
	movl	%eax,	-24(%rbp)
  # t7 = arr[t6]
	movslq	-24(%rbp),	%rdx
	movq	16(%rbp),	%rdi
	addq	%rdi,	%rdx
	movl	(%rdx),	%eax
	movl	%eax,	-64(%rbp)
  # if t7 ==search_key goto .L5
	movl	-64(%rbp),	%eax
	cmpl	40(%rbp),	%eax
	jne	.L21
	jmp	.L5
.L21:
  # goto .L6
	jmp	.L6
  # goto .L7
	jmp	.L7
  # return middle
.L5:
	movq	-4(%rbp),	%rax
	leave
	ret
  # goto .L8
	jmp	.L8
  # t9 = 0
.L6:
	movl	$0,	-68(%rbp)
  # t9*10
	movl	-68(%rbp),	%eax
	imull	$10,%eax
	movl	%eax,	-68(%rbp)
  # t9+middle
	movl	-68(%rbp),	%edx
	movl	-4(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-68(%rbp)
  # t9*4
	movl	-68(%rbp),	%eax
	imull	$4,%eax
	movl	%eax,	-68(%rbp)
  # t10 = arr[t9]
	movslq	-68(%rbp),	%rdx
	movq	16(%rbp),	%rdi
	addq	%rdi,	%rdx
	movl	(%rdx),	%eax
	movl	%eax,	-108(%rbp)
  # if search_key <t10 goto .L9
	movl	40(%rbp),	%eax
	cmpl	-108(%rbp),	%eax
	jge	.L22
	jmp	.L9
.L22:
  # goto .L10
	jmp	.L10
  # goto .L11
	jmp	.L11
  # t12 = 1
.L9:
	movl	$1,	-116(%rbp)
  # middle-t12
	movl	-4(%rbp),	%edx
	movl	-116(%rbp),	%eax
	subl	%eax,	%edx
	movl	%edx,	%eax
	movl 	%eax,	-120(%rbp)
  # param arr
  # param left
  # param t13
  # param search_key
  # call binary_search 4
	movq	40(%rbp),	%rax
	pushq	%rax
	movq	-120(%rbp),	%rax
	pushq	%rax
	movq	24(%rbp),	%rax
	pushq	%rax
	movq	16(%rbp),	%rax
	pushq	%rax
	call	binary_search
	addq	$32,	%rsp
#--
  # temp = binary_search
	movl	%eax,	-8(%rbp)
  # return temp
	movq	-8(%rbp),	%rax
	leave
	ret
  # goto .L8
	jmp	.L8
  # t14 = 1
.L10:
	movl	$1,	-124(%rbp)
  # middle+t14
	movl	-4(%rbp),	%edx
	movl	-124(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-128(%rbp)
  # param arr
  # param t15
  # param right
  # param search_key
  # call binary_search 4
	movq	40(%rbp),	%rax
	pushq	%rax
	movq	32(%rbp),	%rax
	pushq	%rax
	movq	-128(%rbp),	%rax
	pushq	%rax
	movq	16(%rbp),	%rax
	pushq	%rax
	call	binary_search
	addq	$32,	%rsp
#--
  # temp = binary_search
	movl	%eax,	-8(%rbp)
  # return temp
	movq	-8(%rbp),	%rax
	leave
	ret
  # goto .L8
	jmp	.L8
  # goto .L8
.L11:
	jmp	.L8
  # goto .L8
.L7:
	jmp	.L8
  # t16 = 1
.L3:
	movl	$1,	-132(%rbp)
  # t17 = -t16
	movq	-132(%rbp),	%rax
	negq	 %rax
	movq	%rax,	-136(%rbp)	
  # return t17
	movq	-136(%rbp),	%rax
	leave
	ret
  # goto .L8
	jmp	.L8
  # function binary_search end
.L4:
	leave
	ret
	.size	binary_search,	.-binary_search
  # function main start
#--loacl var offset: 4 -4
#--loacl var offset: 4 -8
#--loacl var offset: 4 -12
#--loacl var offset: 4 -16
#--loacl var offset: 4 -20
#--loacl var offset: 4 -24
#--loacl var offset: 40 -64
#--loacl var offset: 4 -68
#--loacl var offset: 4 -72
#--loacl var offset: 4 -76
#--loacl var offset: 4 -80
#--loacl var offset: 8 -88
#--loacl var offset: 4 -92
#--loacl var offset: 4 -96
#--loacl var offset: 0 -96
#--loacl var offset: 4 -100
#--loacl var offset: 8 -108
#--loacl var offset: 4 -112
#--loacl var offset: 4 -116
#--loacl var offset: 8 -124
#--loacl var offset: 4 -128
#--loacl var offset: 4 -132
#--loacl var offset: 4 -136
#--loacl var offset: 4 -140
#--loacl var offset: 4 -144
#--loacl var offset: 4 -148
#--loacl var offset: 4 -152
#--loacl var offset: 0 -152
#--loacl var offset: 4 -156
#--loacl var offset: 4 -160
#--loacl var offset: 4 -164
#--loacl var offset: 4 -168
#--loacl var offset: 4 -172
#-172
##ptrn
##ptrp
##ptri
##ptrx
##ptrvalue
##ptrt18
##ptra
##ptrprints
##ptr.LC0
##ptr.LC1
##ptrreadi
##ptrt19
##ptr.LC2
##ptrt20
##ptrt21
##ptrt22
##ptrt23
##ptrt24
##ptr.LC3
##ptrt25
##ptrret_value
##ptrbinary_search
##ptrt26
##ptrt27
##ptrt28
##ptrt29
##ptrt30
##ptrt31
##ptr.LC4
##ptr.LC5
##ptrprinti
##ptr.LC6
##ptrt32
##ptrretVal
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$192,	%rsp
  # t18 = 10
	movl	$10,	-24(%rbp)
  # param .LC0
	movq	$.LC0,	%rdi
  # call prints 1
	call	prints
  # param .LC1
	movq	$.LC1,	%rdi
  # call prints 1
	call	prints
  # t19= &p
	leaq	-8(%rbp),	%rax
	movq	%rax,	-88(%rbp)
  # param t19
	movq	-88(%rbp),	%rdi
  # call readi 1
	call	readi
  # n = readi
	movl	%eax,	-4(%rbp)
  # param .LC2
	movq	$.LC2,	%rdi
  # call prints 1
	call	prints
  # t20 = 0
	movl	$0,	-96(%rbp)
  # i = t20
	movl	-96(%rbp),	%eax
	movl	%eax,	-12(%rbp)
  # if i <n goto .L12
.L14:
	movl	-12(%rbp),	%eax
	cmpl	-4(%rbp),	%eax
	jge	.L23
	jmp	.L12
.L23:
  # goto .L13
	jmp	.L13
  # goto .L13
	jmp	.L13
  # t22 = i
.L15:
	movl	-12(%rbp),	%eax
	movl	%eax,	-100(%rbp)
  # i = i+1
	movl	-12(%rbp),	%edx
	addl	$1,	%edx
	movl	%edx,	%eax
	movl	%eax,	-12(%rbp)
  # goto .L14
	jmp	.L14
  # t23= &p
.L12:
	leaq	-8(%rbp),	%rax
	movq	%rax,	-108(%rbp)
  # param t23
	movq	-108(%rbp),	%rdi
  # call readi 1
	call	readi
  # x = readi
	movl	%eax,	-16(%rbp)
  # t24 = 0
	movl	$0,	-112(%rbp)
  # t24*0
	movl	-112(%rbp),	%eax
	imull	$0,%eax
	movl	%eax,	-112(%rbp)
  # t24+i
	movl	-112(%rbp),	%edx
	movl	-12(%rbp),	%eax
	addl	 %edx,	%eax
	movl	 %eax,	-112(%rbp)
  # t24*4
	movl	-112(%rbp),	%eax
	imull	$4,%eax
	movl	%eax,	-112(%rbp)
  # a[t24] = x
	movslq	-112(%rbp),	%rdx
	movslq	-16(%rbp),	%rax
	movq	%rax,	-64(%rbp,%rdx,1)
  # goto .L15
	jmp	.L15
  # param .LC3
.L13:
	movq	$.LC3,	%rdi
  # call prints 1
	call	prints
  # t25= &p
	leaq	-8(%rbp),	%rax
	movq	%rax,	-124(%rbp)
  # param t25
	movq	-124(%rbp),	%rdi
  # call readi 1
	call	readi
  # value = readi
	movl	%eax,	-20(%rbp)
  # t26 = 0
	movl	$0,	-136(%rbp)
  # t27 = 1
	movl	$1,	-140(%rbp)
  # n-t27
	movl	-4(%rbp),	%edx
	movl	-140(%rbp),	%eax
	subl	%eax,	%edx
	movl	%edx,	%eax
	movl 	%eax,	-144(%rbp)
  # param a
  # param t26
  # param t28
  # param value
  # call binary_search 4
	movq	-20(%rbp),	%rax
	pushq	%rax
	movq	-144(%rbp),	%rax
	pushq	%rax
	movq	-136(%rbp),	%rax
	pushq	%rax
	leaq	-64(%rbp),	%rax
	pushq	%rax
	call	binary_search
	addq	$32,	%rsp
#--
  # ret_value = binary_search
	movl	%eax,	-128(%rbp)
  # t29 = 1
	movl	$1,	-148(%rbp)
  # t30 = -t29
	movq	-148(%rbp),	%rax
	negq	 %rax
	movq	%rax,	-152(%rbp)	
  # if ret_value ==t30 goto .L16
	movl	-128(%rbp),	%eax
	cmpl	-152(%rbp),	%eax
	jne	.L24
	jmp	.L16
.L24:
  # goto .L17
	jmp	.L17
  # goto .L18
	jmp	.L18
  # param .LC4
.L16:
	movq	$.LC4,	%rdi
  # call prints 1
	call	prints
  # goto .L18
	jmp	.L18
  # param .LC5
.L17:
	movq	$.LC5,	%rdi
  # call prints 1
	call	prints
  # param ret_value
	movq	-128(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC6
	movq	$.LC6,	%rdi
  # call prints 1
	call	prints
  # goto .L18
	jmp	.L18
  # t32 = 0
.L18:
	movl	$0,	-172(%rbp)
  # return t32
	movq	-172(%rbp),	%rax
	leave
	ret
  # function main end
	leave
	ret
	.size	main,	.-main
