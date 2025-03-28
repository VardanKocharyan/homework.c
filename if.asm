extern printf
extern scanf

section .data
	printf_for db "print the number",10,0
	scanf_form db "%d",0

section .bss

section .text
global main
main:

	push rbp
	mov rbp , rsp
	sub rsp , 32

	xor rax , rax
	xor rbx , rbx

	mov rdi , scanf_form
	mov rsi , [rbp - 4]
	call scanf

	mov rdi , scanf_form
	mov rsi , [rbp - 8]
	call scanf

	mov eax, [rbp - 4]
	mov ebx , [rbp - 8]
if:
	cmp eax , 0
	jg L1

else_if:
	cmp eax , 0
	jl L2

else:

	mov rdi , printf_form
	mov rsi , 



	mov rsp , rbp
	pop rbp
ret
