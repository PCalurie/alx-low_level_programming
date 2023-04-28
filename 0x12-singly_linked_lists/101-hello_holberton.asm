section .data
    msg db 'Hello, Holberton', 10, 0

section .text
    global main

main:
    mov rax, 0
    mov rdi, msg
    call printf
    mov rax, 0
    ret
