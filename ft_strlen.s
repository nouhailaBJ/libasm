section .text
global _ft_strlen
    _ft_strlen:
            xor rax, rax ; i = 0
            mov rax , -1 ; i = -1
    loop:
            inc rax ; increment i++
            cmp byte [rdi + rax], 0 ; if (str[i] != 0)
            jne loop ; if not cmp is 0 jmp 
            ret ; ret i (rax)
section .data
