section .text
   global _ft_strcpy
        _ft_strcpy:
                xor rcx, rcx ; counter i = 0
                xor rax, rax ; ret value
                mov rax, rdi; we set return value is dest
        loop: 
            cmp byte [rsi + rcx], 0 ; if (src[i] == NULL) ret
            je return
            mov dl, byte [rsi + rcx]; swap rsi with rdi 
            mov byte [rax + rcx], dl
            inc rcx ; i++
            jmp loop
        return: 
            mov byte [rax + rcx], 0 ; set \0 in dest
            ret ; ret destå
section .data
