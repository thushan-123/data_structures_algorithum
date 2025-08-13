bits 64
        global _start

        section .data
    message: db "Hello Thush"

        section .text
    _start:
        mov rax, 1
        mov rdi, 1
        mov rsi, message
        mov rdx, 11
        syscall

        mov rax, 60
        mov rdi, 0
        syscall