section .text
        global _ft_strcmp
                _ft_strcmp:
                    xor rcx, rcx ; i == 0
                    xor rax, rax ; cmp == 0
                loop:
                    mov al, byte [rdi + rcx]
                    mov bl, byte [rsi + rcx]
                    cmp al, 0
                    je return
                    cmp bl, 0
                    je return
                    cmp al, bl
                    jne return
                    inc rcx
                    jmp loop
                return :
                    sub rax, rbx
                    je is_null
                    jge is_positive
                    jle is_negative
                is_positive:
                    mov rax, 1
                    ret
                is_negative:
                    mov rax, -1
                    ret
                is_null:
                    mov rax, 0
                    ret
section .data
