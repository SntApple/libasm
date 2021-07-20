global _ft_strcpy

section .text
_ft_strcpy:
    cmp rsi, 0
    je error
    cmp rdi, 0
    je error
    mov r9, 0
.loop:
    mov cl, byte[rsi + r9]
    mov byte[rdi + r9], cl
    cmp cl, 0
    je return
    inc r9  
    jmp .loop

error:
    mov rax, 0
    ret

return:
    mov rax, rdi
    ret