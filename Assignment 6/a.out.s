	.section	.rodata
.LC0:
	.string "\n"
  # function printi start
  # function readi start
  # function prints start
  # function main start
#--loacl var offset: 4 -4
#--loacl var offset: 4 -8
#--loacl var offset: 4 -12
#--loacl var offset: 4 -16
#--loacl var offset: 4 -20
#--loacl var offset: 4 -24
#--loacl var offset: 4 -28
#--loacl var offset: 4 -32
#-32
##ptrn
##ptrt0
##ptri
##ptrt1
##ptrprinti
##ptrprints
##ptr.LC0
##ptrt2
##ptrretVal
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64,	%rsp
  # t0 = 3
	movl	$3,	-8(%rbp)
  # n = t0
	movl	-8(%rbp),	%eax
	movl	%eax,	-4(%rbp)
  # t1 = 3
	movl	$3,	-16(%rbp)
  # i = t1
	movl	-16(%rbp),	%eax
	movl	%eax,	-12(%rbp)
  # param n
	movq	-4(%rbp),	%rdi
  # call printi 1
	call	printi
  # param .LC0
	movq	$.LC0,	%rdi
  # call prints 1
	call	prints
  # t2 = 0
	movl	$0,	-32(%rbp)
  # return t2
	movq	-32(%rbp),	%rax
	leave
	ret
  # function main end
	leave
	ret
	.size	main,	.-main
