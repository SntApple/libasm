global _ft_strcmp

section .text
_ft_strcmp:
    mov r9, 0

.loop:
    mov cl, byte[rsi + r9]
    cmp byte[rdi + r9], cl
    jne return
    cmp cl, 0
    je return_zero
    inc r9
    jmp .loop

return:
    cmp byte[rdi + r9], cl
    jb b
    cmp byte[rdi + r9], cl
    ja a

a:
    mov rax, 1
    ret

b:
    mov rax, -1
    ret

return_zero:
    mov rax, 0
    ret