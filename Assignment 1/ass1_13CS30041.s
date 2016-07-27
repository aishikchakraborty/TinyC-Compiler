	.file	"ass1_13CS30041.c"  #source file name
	.section	.rodata			#read only data section
.LC0:							
	.string	"Enter the order: "		#label of f-string 1st printf			
.LC1:
	.string	"%d"					#label of f-string scanf
.LC2:
	.string	"Enter matix A in row-major: "  #label of f-string 2nd printf
.LC3:
	.string	"Enter matix B in row-major: "  #label of f-string 3rd printf
.LC4:
	.string	"The output matrix is:"         #label of f-string 4th printf
.LC5:
	.string	"%d "						
	.text							#Code starts
	.globl	main					#main is a global name		
	.type	main, @function			#main is a function
main:								#main starts
.LFB0:
	.cfi_startproc
	pushq	%rbp					#save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp				#rbp<--rsp  set new stack base pointer
	.cfi_def_cfa_register 6
	subq	$4816, %rsp				#go down 4816 bytes from the stack pointer
	movl	$.LC0, %edi				#printf() function's first parameter
	movl	$0, %eax				#eax<--0
	call	printf					#call printf()
	leaq	-4812(%rbp), %rax		#rax<-- M[rbp-4812]
	movq	%rax, %rsi				#rsi<--rax
	movl	$.LC1, %edi				#"%d" in scanf()
	movl	$0, %eax				#eax<--0 as the no. of vector registers used is zero
	call	__isoc99_scanf			#scanf()
	movl	$.LC2, %edi				#printf() for entering matrix A
	movl	$0, %eax				#eax<--0 as the no. of vector registers used is zero
	call	printf					#call printf()
	movl	-4812(%rbp), %eax		#eax<--M[rbp-4812], stores value of n
	leaq	-4800(%rbp), %rdx		#rdx<--(rbp-4800), stores the address of A
	movq	%rdx, %rsi				#rdx has address of matrix A, the second argument and it is loaded to rsi
	movl	%eax, %edi				#edi<--eax, edi now contains the first argument n
	call	ReadMatrix				#call the function ReadMatrix
	movl	$.LC3, %edi				#printf() for entering the matrix B
	movl	$0, %eax				#eax<--0
	call	printf					#printf()
	movl	-4812(%rbp), %eax		#eax<--M[rbp-4812], stores value of n
	leaq	-3200(%rbp), %rdx		#rdx<--M[rbp-3200], points to the start of matrix B
	movq	%rdx, %rsi				#rsi<--M[rdx], points to start of matrix B
	movl	%eax, %edi				#edi<--eax, n
	call	ReadMatrix				#call ReadMatrix function
	movl	-4812(%rbp), %eax		#eax<--M[rbp-4812], eax stores n
	leaq	-1600(%rbp), %rcx		#rcx<--M[rbp-1600], rcx points to start of C
	leaq	-3200(%rbp), %rdx		#rdx<--M[rbp-3200], rbp points to start of B
	leaq	-4800(%rbp), %rsi		#rsi<--M[rbp-4800], rbp points to start of A
	movl	%eax, %edi				#edi<--M[eax], edi,--n
	call	MultiplyMatrix			#call MultiplyMatrix() function
	movl	$.LC4, %edi				#edi stores the string to be printed :"The output matrix is:"
	call	puts					#puts() function for printing
	movl	$0, -4808(%rbp)			#i<--0
	jmp	.L2
.L5:
	movl	$0, -4804(%rbp)			#j<--0
	jmp	.L3							#jump to .L3
.L4:
	movl	-4804(%rbp), %eax		#eax<--M[rbp-4804], eax<--j
	movslq	%eax, %rcx				#rcx<--j
	movl	-4808(%rbp), %eax		#eax<--M[rbp-4808], eax<--i
	movslq	%eax, %rdx				#sign extend from 32 bits to 64 bits
	movq	%rdx, %rax				#rax<--rdx, rax<--i
	salq	$2, %rax				#shift-left rax by 2 bits , rax<--(rax*2), 4*i
	addq	%rdx, %rax				#rax<--(rdx+rax), rax now stores 5*i
	salq	$2, %rax				#shift-left rax by 2 bits , rax<--(rax*2), rax<--20*i
	addq	%rcx, %rax				#rax<--(rcx + rax), rax<--(20*i + j)
	movl	-1600(%rbp,%rax,4), %eax #eax<--M[rbp-1600 + 4*rax], eax<--C[i][j]
	movl	%eax, %esi				#esi<--M[eax]
	movl	$.LC5, %edi				#edi stores the string :"%d:"
	movl	$0, %eax				#eax<--0 as the no. of vector registers used is zero
	call	printf					#call printf()
	addl	$1, -4804(%rbp)			#increment j, j++
.L3:
	movl	-4812(%rbp), %eax			#eax<--M[rbp-4812], eax<--n
	cmpl	%eax, -4804(%rbp)			#compares eax and M[rbp-4804], compares j and n
	jl	.L4								#if(j<n) jump to .L4
	movl	$10, %edi					#'\n' for putchar(), ASCII of '\n' is 10
	call	putchar						#putchar()
	addl	$1, -4808(%rbp)				#increment i, i++
.L2:
	movl	-4812(%rbp), %eax			#eax<--M[rbp-4812],eax<--n
	cmpl	%eax, -4808(%rbp)			#compares eax and M[rbp-4808], compares i and n
	jl	.L5								#if(i<n) jump to .L5
	movl	$0, %eax					#eax<--0
	leave								#frame and stack pointers get restored
	.cfi_def_cfa 7, 8
	ret									#return
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata					#read-only data section
.LC6:
	.string	"The input matrix is:"		#label of f-string 5th printf
	.text
	.globl	ReadMatrix					#ReadMatrix is a global name
	.type	ReadMatrix, @function		#ReadMatrix is a function
ReadMatrix:								#ReadMatrix starts
.LFB1:
	.cfi_startproc
	pushq	%rbp					#save base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp				#rbp<--rsp  set new stack base pointer
	.cfi_def_cfa_register 6
	subq	$32, %rsp				#set rsp to 32 bytes below original rsp
	movl	%edi, -20(%rbp)			#(rbp-20)<--edi, allocate the n to 20 bytes below base pointer
	movq	%rsi, -32(%rbp)			#(rbp-32)<--rsi, (rbp-32) now points to the array passed as arguments to the functions
	movl	$0, -8(%rbp)			#i=0
	jmp	.L8
.L11:
	movl	$0, -4(%rbp)			#(rbp-4)<--0, j=0
	jmp	.L9
.L10:
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], eax contains i
	movslq	%eax, %rdx				#sign extend from 32 bits to 64 bits
	movq	%rdx, %rax				#rax<--M[rdx]
	salq	$2, %rax				#shift-left rax by 2 bits , rax<--(rax*2)
	addq	%rdx, %rax				#rax<--(rdx+rax), rax now stores 5*i
	salq	$4, %rax				#shift-left rax by 4 bits, rax<--(rax*16), rax now stores 80*i; done as array column size is 20*4=80 bytes
	movq	%rax, %rdx				#rdx<--M[rax]											
	movq	-32(%rbp), %rax			#rax<--M[rbp-32]
	addq	%rax, %rdx				#rdx<--(rax + rdx)
	movl	-4(%rbp), %eax			#eax<--M[rbp-4]
	cltq							
	salq	$2, %rax				#shift-left rax by 2 bits, rax<--(rax*4)
	addq	%rdx, %rax				#rax<--(rax+rdx)
	movq	%rax, %rsi				#rsi<--M[rax]
	movl	$.LC1, %edi				#"%d" label
	movl	$0, %eax				#eax<--0 as the no. of vector registers used is zero
	call	__isoc99_scanf			#scanf()
	addl	$1, -4(%rbp)			#j=j+1 and continue to next iteration
.L9:
	movl	-4(%rbp), %eax			#eax<--M[rbp-4]
	cmpl	-20(%rbp), %eax			#compares M[rbp-20]<--eax, compares j and n
	jl	.L10						#if j<n enter the body of the for loop
	addl	$1, -8(%rbp)			#go out of inside loop and increment i, i++
.L8:
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], stores i in eax
	cmpl	-20(%rbp), %eax			#compares M[rbp-20] and eax, compares i and n
	jl	.L11						#jump if less to the inner loop, i<n
	movl	$.LC6, %edi				#stores the string "The input matrix is:" in edi
	call	puts					#puts() for displaying the string
	movl	$0, -8(%rbp)			#i=0
	jmp	.L12						#jump statement
.L15:
	movl	$0, -4(%rbp)			#M[rbp-4]<--0, j=0
	jmp	.L13						
.L14:
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], eax<--i
	movslq	%eax, %rdx				#rdx<--M[eax], sign bit extended from 32 bits to 64 bit	
	movq	%rdx, %rax				#rax<--M[rdx]
	salq	$2, %rax				#left shift rax by 2 bits, rax<--(rax*4), rax<--4*i
	addq	%rdx, %rax				#rax<--(rax + rdx), rax<--5*i
	salq	$4, %rax				#left shift rax by 4 bits, rax<--(rax*16), rax<--80*i
	movq	%rax, %rdx				#rdx<--M[rax], rdx<--80*i
	movq	-32(%rbp), %rax			#rax<--M[rbp-32], rax points to start of matrix array
	addq	%rax, %rdx				#rdx<--(rdx + rax), rdx points to (start + 80*i)
	movl	-4(%rbp), %eax			#eax<--M[rbp-4], eax<--j
	cltq							#sign extend eax to quad word
	movl	(%rdx,%rax,4), %eax		#eax<--M[rdx+4*rax]
	movl	%eax, %esi				#esi<--eax			
	movl	$.LC5, %edi				#"%d"
	movl	$0, %eax				#eax<--0 as the no. of vector registers used is zero
	call	printf					#printf()
	addl	$1, -4(%rbp)			#increments j by 1, j++
.L13:
	movl	-4(%rbp), %eax			#eax<--M[rbp-4]
	cmpl	-20(%rbp), %eax			#compares M[rbp-20] and eax, compares j and n
	jl	.L14						#if(j<n) jump to .L14
	movl	$10, %edi				#'\n' ASCII code 10 is stored in edi for putchar()
	call	putchar					#putchar()
	addl	$1, -8(%rbp)			#increments i by 1, i++
.L12:
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], stores value of i in eax
	cmpl	-20(%rbp), %eax			#compares eax and M[rbp-20], compares i and n
	jl	.L15						#if(i<n) jump to .L15
	leave							#frame and stack pointers get restored
	.cfi_def_cfa 7, 8
	ret								#return
	.cfi_endproc
.LFE1:
	.size	ReadMatrix, .-ReadMatrix
	.section	.rodata				#read-only data section
.LC7:
	.string	"The transposed matrix is:"		#label of f-string 6th printf
	.text
	.globl	TransposeMatrix			#TransposeMatrix is a global name
	.type	TransposeMatrix, @function	#TransposeMatrix is a function
TransposeMatrix:					#TransposeMatrix starts
.LFB2:
	.cfi_startproc
	pushq	%rbp					#save base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp				#rbp<--rsp  set new stack base pointer
	.cfi_def_cfa_register 6
	subq	$32, %rsp				#set rsp to 32 bytes below original rsp
	movl	%edi, -20(%rbp)			#M[rbp-20]<--edi, allocate the n to 20 bytes below base pointer
	movq	%rsi, -32(%rbp)			#M[rbp-32]<--rsi, points to second array passed as second argument
	movl	$0, -12(%rbp)			#M[rbp-12]<--0, i=0
	jmp	.L17						#jump to .L17
.L20:
	movl	$0, -8(%rbp)			#M[rbp-8]<--0, j=0
	jmp	.L18						#jump to .L18
.L19:
	movl	-12(%rbp), %eax			#eax<--M[rbp-12],eax<--i
	movslq	%eax, %rdx				#rdx<--M[eax], sign bit extended from 32 bits to 64 bit
	movq	%rdx, %rax				#rax<--M[rdx], rax<--i
	salq	$2, %rax				#left shift rax by 2 bits, rax<--(rax*4), rax<--4*i
	addq	%rdx, %rax				#rax<--(rax + rdx), rax<--5*i
	salq	$4, %rax				#left shift rax by 4 bits, rax<--(rax*16), rax<--80*i
	movq	%rax, %rdx				#rdx<--M[rax], rdx<--80*i
	movq	-32(%rbp), %rax			#rax<--M[rbp-32], rax points to start of array passed as second argument
	addq	%rax, %rdx				#rdx<--(rdx + rax), rdx points to (start + 80*i)
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], eax<--j
	cltq							#sign extend eax to quad word
	movl	(%rdx,%rax,4), %eax		#eax<--M[rdx+4*rax], eax points to (start + 80*i + 4*j) or data[i][j]
	movl	%eax, -4(%rbp)			#M[rbp-4]<--eax, (rbp-4) is actually t, t=data[i][j]
	movl	-12(%rbp), %eax			#eax<--M[rbp-12], eax<--i
	movslq	%eax, %rdx				#rdx<--eax, sign bit extended from 32 bits to 64 bit
	movq	%rdx, %rax				#rax<--rdx, rax<--i
	salq	$2, %rax				#left shift rax by 2 bits, rax<--(rax*4), rax<--4*i
	addq	%rdx, %rax				#rax<--(rax + rdx), rax<--5*i
	salq	$4, %rax				#left shift rax by 4 bits, rax<--(rax*16), rax<--80*i
	movq	%rax, %rdx				#rdx<--M[rax], rdx<--80*i
	movq	-32(%rbp), %rax			#rax<--M[rbp-32], rax points to start of array passed as second argument
	leaq	(%rdx,%rax), %rcx		#rcx<--(rdx), rcx<--start + 80*i of array
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], eax<--j		
	movslq	%eax, %rdx				#rdx<--M[eax], sign bit extended from 32 bits to 64 bit
	movq	%rdx, %rax				#rax<--M[rdx], rax<--j
	salq	$2, %rax				#left shift rax by 2 bits, rax<--(rax*4), rax<--4*j
	addq	%rdx, %rax				#rax<--(rax + rdx), rax<--5*j
	salq	$4, %rax				#left shift rax by 4 bits, rax<--(rax*16), rax<--80*j
	movq	%rax, %rdx				#rdx<--M[rax], rdx<--80*j
	movq	-32(%rbp), %rax			#rax<--M[rbp-32], rax points to start of array paased as second argument
	addq	%rax, %rdx				#rdx<--(rdx+rax), rdx points to (start + 80*j)
	movl	-12(%rbp), %eax			#eax<--M[rbp-12], eax<--i
	cltq							#sign extend eax to quad word (eax becomes rax)
	movl	(%rdx,%rax,4), %edx		#edx<--M[rdx+4*rax], edx points to (start of array + 80*j + 4*i), eax points to data[j][i]
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], eax<--j
	cltq							#sign extend eax to quad word (eax becomes rax)
	movl	%edx, (%rcx,%rax,4)		#M[rcx+4*rax]<--edx, M[80*i + 4*j]<--edx, data[i][j]=data[j][i]
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], eax<--j
	movslq	%eax, %rdx				#rdx<--M[eax], sign bit extended from 32 bits to 64 bit
	movq	%rdx, %rax				#rax<--M[rdx], rax<--j
	salq	$2, %rax				#left shift rax by 2 bits, rax<--(rax*4), rax<--4*j
	addq	%rdx, %rax				#rax<--(rax + rdx), rax<--5*j
	salq	$4, %rax				#left shift rax by 4 bits, rax<--(rax*16), rax<--80*j
	movq	%rax, %rdx				#rdx<--M[rax], rdx<--80*j
	movq	-32(%rbp), %rax			#rax<--M[rbp-32], rax points to start of array paased as second argument
	leaq	(%rdx,%rax), %rcx		#rcx<--rdx, rcx<--(start of array + 80*j)
	movl	-12(%rbp), %eax			#eax<--M[rbp-12], eax<--i
	cltq							#sign extend eax to quad word (eax becomes rax)
	movl	-4(%rbp), %edx			#edx<--M[rbp-4], edx<--t
	movl	%edx, (%rcx,%rax,4)		#M[rcx+4*rax]<--edx, M[(start of array+80*j+4*i)]<--t, data[j][i]=t
	addl	$1, -8(%rbp)			#increment j by 1, j++
.L18:
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], eax<--j
	cmpl	-12(%rbp), %eax			#compares eax and M[rbp-12] compares j and i
	jl	.L19						#if(j<i) jump to .L19
	addl	$1, -12(%rbp)			#increment i by 1, i++
.L17:
	movl	-12(%rbp), %eax			#eax<--M[rbp-12], eax<--i
	cmpl	-20(%rbp), %eax			#compare eax and M[rbp-20], compare i and n
	jl	.L20						#if(i<n) jump to .L20
	movl	$.LC7, %edi				#edi stores the string to be printed "The transposed matrix is"
	call	puts					#puts()
	movl	$0, -12(%rbp)			#M[rbp-12]<--0, i=0
	jmp	.L21						#jump to .L21
.L24:
	movl	$0, -8(%rbp)			#M[rbp-8]<--0, j=0
	jmp	.L22						#jump to .L22
.L23:
	movl	-12(%rbp), %eax			#eax<--M[rbp-12], eax<--i
	movslq	%eax, %rdx				#rdx<--M[eax], sign bit extended from 32 bits to 64 bit
	movq	%rdx, %rax				#rax<--M[rdx]
	salq	$2, %rax				#left shift rax by 2 bits, rax<--(rax*4)
	addq	%rdx, %rax				#rax<--(rax + rdx)
	salq	$4, %rax				#left shift rax by 4 bits, rax<--(rax*16), rax<--80*i
	movq	%rax, %rdx				#rdx<--rax
	movq	-32(%rbp), %rax			#rax<--M[rbp-32]
	addq	%rax, %rdx				#rdx<--(rdx + rax)
	movl	-8(%rbp), %eax			#eax<--M[rbp-8]
	cltq							#sign extend eax to quad word
	movl	(%rdx,%rax,4), %eax		#eax<--M[rdx+4*rax], eax<--data[i][j]
	movl	%eax, %esi				#esi<--M[eax]
	movl	$.LC5, %edi				#"%d"
	movl	$0, %eax				#eax<--0 as the no. of vector registers used is zero
	call	printf					#printf()
	addl	$1, -8(%rbp)			#increment j by 1, j++
.L22:
	movl	-8(%rbp), %eax				#eax<--(rbp-8), eax<--j
	cmpl	-20(%rbp), %eax				#compares (rbp-20) and eax, compares j and n
	jl	.L23							#if(j<n) jump to .L23	
	movl	$10, %edi					#'\n' ASCII code 10 is stored in edi for putchar()
	call	putchar						#putchar()
	addl	$1, -12(%rbp)				#increment i by 1, i++
.L21:
	movl	-12(%rbp), %eax				#eax<--(rbp-12)
	cmpl	-20(%rbp), %eax				#compare (rbp-20) and eax, compares i and n
	jl	.L24							#if(i<n) jump to .L24
	leave								#frame and stack pointers get restored
	.cfi_def_cfa 7, 8
	ret									#return
	.cfi_endproc
.LFE2:
	.size	TransposeMatrix, .-TransposeMatrix
	.globl	VectorMultiply				#VectorMultiply is a global name
	.type	VectorMultiply, @function	#VectorMultiply is a function
VectorMultiply:							#VectorMultiply starts
.LFB3:
	.cfi_startproc
	pushq	%rbp					#save base pointer 
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp				#rbp<--rsp  set new stack base pointer
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)			#(rbp-20)<--edi,(rbp-20)<--n
	movq	%rsi, -32(%rbp)			#(rbp-32)<--rsi,(rbp-32) points to start of L[]
	movq	%rdx, -40(%rbp)			#(rbp-40)<--rdx, (rbp-40) points to start of R[]
	movl	$0, -4(%rbp)			#(rbp-4)<--0, (rbp-4)<--result, result=0
	movl	$0, -8(%rbp)			#(rbp-8)<--0, (rbp-8)<--i, i=0;
	jmp	.L26
.L27:
	movl	-8(%rbp), %eax			#eax<--(rbp-8), i
	cltq							#sign extend eax to quad word (eax becomes rax)
	leaq	0(,%rax,4), %rdx		#rdx<--4*rax, rdx<--4*i
	movq	-32(%rbp), %rax			#rax<--M[rbp-32], rax points to start of L[]
	addq	%rdx, %rax				#rax<--(rax + rdx), rax<--L[i]
	movl	(%rax), %edx			#edx<--M[rax], edx<--L[i]
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], eax<--i
	cltq							#sign extend eax to quad word
	leaq	0(,%rax,4), %rcx		#rcx<--4*rax, rcx<--4*i
	movq	-40(%rbp), %rax			#rax<--M[rbp-40], rax points to start of R[]
	addq	%rcx, %rax				#rax<--(rax + rcx), rax<--R[i]
	movl	(%rax), %eax			#eax<--M[rax], eax<--R[i]
	imull	%edx, %eax				#eax<--(eax*edx), eax<--L[i]*R[i]
	addl	%eax, -4(%rbp)			#(rbp-4)<--(rbp-4)+eax, result<-- result+L[i]*R[i]
	addl	$1, -8(%rbp)			#(rbp-8)<--(rbp-8)+1, increment i, i++
.L26:
	movl	-8(%rbp), %eax			#eax<--M[rbp-8], eax<--i
	cmpl	-20(%rbp), %eax			#compares eax and (rbp-20) compares n and i
	jl	.L27						#if(i<n) jump to .l27
	movl	-4(%rbp), %eax			#eax<--M[rbp-4], eax<--result
	popq	%rbp					#----- pop quad word, restores rbp
	.cfi_def_cfa 7, 8
	ret								#return
	.cfi_endproc
.LFE3:
	.size	VectorMultiply, .-VectorMultiply
	.globl	MultiplyMatrix			#MultiplyMatrix is a global name
	.type	MultiplyMatrix, @function	#MultiplyMatrix is a function
MultiplyMatrix:						#MultiplyMatrix starts
.LFB4:
	.cfi_startproc
	pushq	%rbp					#save base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp				#rbp<--rsp  set new stack base pointer
	.cfi_def_cfa_register 6
	pushq	%rbx					#save rbx
	subq	$56, %rsp				#set rsp to 56 bytes below original rsp
	.cfi_offset 3, -24
	movl	%edi, -36(%rbp)			#M[rbp-36]<--edi, n
	movq	%rsi, -48(%rbp)			#Mrbp-48]<--rsi, L[][SIZE]
	movq	%rdx, -56(%rbp)			#M[rbp-56]<--rdx,R[][SIZE]
	movq	%rcx, -64(%rbp)			#M[rbp-64]<--rcx,M[][SIZE]
	movq	-56(%rbp), %rdx			#rdx<--M[rbp-56], rdx points to R[][SIZE]
	movl	-36(%rbp), %eax			#eax<--M[rbp-36], eax points to n
	movq	%rdx, %rsi				#rsi<--rdx
	movl	%eax, %edi				#edi<--eax, edi<--n
	call	TransposeMatrix			#call TranseposeMatrix() function
	movl	$0, -24(%rbp)			#M[rbp-24]<--0, i<--0
	jmp	.L30						#jump to .L30
.L33:
	movl	$0, -20(%rbp)			#(rbp-20)<--0, j<-0
	jmp	.L31						#jump to .L31
.L32:
	movl	-24(%rbp), %eax			#eax<--M[rbp-24], eax<--i
	movslq	%eax, %rdx				#rdx<--eax, sign bit extended from 32 bits to 64 bit
	movq	%rdx, %rax				#rax<--M[rdx], rax<--i
	salq	$2, %rax				#left shift rax by 2 bits, rax<--(rax*4), rax<--4*i
	addq	%rdx, %rax				#rax<--(rax + rdx), rax<--5*i
	salq	$4, %rax				#left shift rax by 4 bits, rax<--(rax*16), rax<--80*i
	movq	%rax, %rdx				#rdx<--M[rax], rdx<--80*i
	movq	-64(%rbp), %rax			#rax<--M[rbp-64], rax points to start of array M
	leaq	(%rdx,%rax), %rbx		#rbx<--(rdx+rax	), rbx points to start of array M + 80*i
	movl	-20(%rbp), %eax			#eax<--M[rbp-20], eax<--j
	movslq	%eax, %rdx				#rdx<--eax, sign bit extended from 32 bits to 64 bit
	movq	%rdx, %rax				#rax<--M[rdx], rax<--j
	salq	$2, %rax				#left shift rax by 2 bits, rax<--(rax*4), rax<--4*j
	addq	%rdx, %rax				#rax<--(rax + rdx), rax<--5*j
	salq	$4, %rax				#left shift rax by 4 bits, rax<--(rax*16), rax<--80*j
	movq	%rax, %rdx				#rdx<--M[rax], rdx<--80*j	
	movq	-56(%rbp), %rax			#rax<--M[rbp-56],rax points to start of R
	addq	%rdx, %rax				#rax<--(rdx + rax), rax points to start of R + 80*j
	movq	%rax, %rsi				#rsi<--M[rax], rsi points to start + 80*j of R
	movl	-24(%rbp), %eax			#eax<--(rbp-24), eax<--i
	movslq	%eax, %rdx				#rdx<--eax, sign bit extended from 32 bits to 64 bit
	movq	%rdx, %rax				#rax<--rdx, rdx<--i
	salq	$2, %rax				#left shift rax by 2 bits, rax<--(rax*4), rax<--4*i
	addq	%rdx, %rax				#rax<--(rax + rdx), rax<--5*i
	salq	$4, %rax				#left shift rax by 4 bits, rax<--(rax*16), rax<--80*i
	movq	%rax, %rdx				#rdx<--rax, rdx<--80*i
	movq	-48(%rbp), %rax			#rax<--M[rbp-48], rax stores start of L array
	addq	%rdx, %rax				#rax<--(rax + rdx), rax stores start + 80*i of L array
	movq	%rax, %rcx				#rcx<--rax, rax stores start + 80*i of L array
	movl	-36(%rbp), %eax			#eax<--(rbp-36), eax<--n
	movq	%rsi, %rdx				#rdx<--rsi, rdx<--start + 80*i of L
	movq	%rcx, %rsi				#rsi<--rcx, rsi<-- start + 80*j of R
	movl	%eax, %edi				#edi<--eax, edi<--n
	call	VectorMultiply			#call VectorMultiply() function
	movl	-20(%rbp), %edx			#edx<--M[rbp-20], edx<-- j
	movslq	%edx, %rdx				#rdx<--eax, sign bit extended from 32 bits to 64 bit
	movl	%eax, (%rbx,%rdx,4)		#M[rbx+4*rdx]<--eax, M[i][j]<--eax, return value gets stored
	addl	$1, -20(%rbp)			#increment j, j++
.L31:
	movl	-20(%rbp), %eax			#eax<--M[rbp-20], eax<--j
	cmpl	-36(%rbp), %eax			#compares eax and M[rbp-36], compares j and n
	jl	.L32						#if(j<n) jump to .L32
	addl	$1, -24(%rbp)			#increment i, i++
.L30:
	movl	-24(%rbp), %eax			#eax<--M[rbp-24], i
	cmpl	-36(%rbp), %eax			#compares eax and M[rbp-36], compares i and n
	jl	.L33						#if(i<n) jump to .L33
	addq	$56, %rsp				#rsp<--(rsp+56), Deallocates the stack frame previously allocated by us
	popq	%rbx					#----pop quad word, restores rbx
	popq	%rbp					#----pop quad word, restores rbp
	.cfi_def_cfa 7, 8
	ret								#return
	.cfi_endproc
.LFE4:
	.size	MultiplyMatrix, .-MultiplyMatrix
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
