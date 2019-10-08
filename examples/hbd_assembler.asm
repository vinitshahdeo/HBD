section .text
    global _start                             ; immediately jump to _start

_start:                                         

    mov     edx,len                             ;message length
    mov     ecx,msg                             ;message to write
    mov     ebx,1                               ;file descriptor for stdout
    mov     eax,4                               ;system call number (sys_write)
    int     0x80                                ;call kernel

    mov     eax,1                               ;exit system call number (sys_exit)
    int     0x80                                ;call kernel


section .data
msg:     db  'Happy Birthday!',0xa                 
len:     equ $ - msg                             



; _Compiling and Running in Linux_

; _compile using Netwide Assembler_
; $ nasm -f elf64 happy_birthday.asm -o happy_birthday.o 

; _link to run_
; $ ld happy_birthday.o -o run_msg

; _running from cli_
; $ ./run_msg