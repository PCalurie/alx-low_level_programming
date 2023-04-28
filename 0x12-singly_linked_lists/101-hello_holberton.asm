; extern printf: tells the linker that the symbol printf is defined elsewhere

extern printf
	section .data
msg:	 db "Hello, Holberton", 0 ; string to be printed
fmt:	 db "%s", 10, 0 ; format string for printf

	section .text
	global main
main:
	push rbp ; save the base pointer of the previous stack frame
	mov rdi,fmt ; move the address of format string into the first argument register (rdi)
	mov rsi,msg ; move the address of message into the second argument register (rsi)
	mov rax,0 ; set return value to 0
	call printf ; call the printf function with the given arguments

	pop rbp ; restore the base pointer of the previous stack frame
	mov rax,0 ; set return value to 0
	ret ; return from the function
