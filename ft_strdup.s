section .text
extern _ft_strlen
extern _ft_strcpy
extern ___error
extern _malloc
        global _ft_strdup
                _ft_strdup:
                    xor rax, rax ; i = 0
                    call _ft_strlen ; i = len(str)
                    inc rax ; for \0
                    push rdi ; save str in stack
                    mov rdi, rax ; first arg is lengtj to send to malloc
                    call _malloc ; now its return rax allocated
                    cmp rax, 0 ; check if there is problem
                    je found_error
                    mov rdi, rax ; first arg is  v allocated 
                    pop rsi ; return the value of str
                    call _ft_strcpy ; now we send rdi and rsi 
                    ret
                found_error:
                    call ___error
                    mov byte [rax], 12
                    mov rax, 0
                    ret
section .data
