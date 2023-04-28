section .data
    msg db 'Hello, Holberton', 0x0a, 0x00 ; message to be printed

section .text
    global main

main:
    push rbp        ; save base pointer
    mov rbp, rsp    ; set base pointer to stack pointer

    lea rdi, [msg]  ; load message address into rdi
    mov al, 0       ; clear al register
    call printf     ; call printf function

    mov rsp, rbp    ; restore stack pointer
    pop rbp         ; restore base pointer
    xor eax, eax    ; clear eax register
    ret             ; return to operating system
