global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc
extern ___error

section .text
_ft_strdup:
    cmp rdi, 0
    je get_null
    call _ft_strlen
    mov r9, rax
    inc r9
    push rdi
    mov rdi, r9
    call _malloc
    cmp rax, 0
    je error
    mov rdi, rax
    pop r9
    mov rsi, r9
    call _ft_strcpy
    ret

error:
    push rax
    call ___error
    pop r9
    mov [rax],r9
    mov rax, 0
    ret

get_null:
    mov rax, 0
    ret