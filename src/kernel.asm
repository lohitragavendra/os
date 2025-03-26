bits 32
section .text
    align 4
    dd 0x1BADB002
    dd 0x00
    dd - (0x1BADB002+0x00)

global start
extern kmain        ; function is located in C code (kernel.c)

start:
    cli             ; clears the interrupts
    call kmain      ; send processor to continue execution from the kmain function in C
    hlt             ; halt the CPU, pause execution

section .note.GNU-stack noexec  ; Prevents executable stack warning

