section .text
    extern ___error
    global _ft_read
         _ft_read:
            mov rax, 0x2000003 ; call read
            syscall
            jc bad_error ; if there is error jmp 
            ret
        
        bad_error:
            push rax ; save in stack
            call ___error ; return address errno to rax
            pop r8 ; return rax saved from the stack
            mov [rax], r8 ; put value in rax
            mov rax, -1 ; return -1 (there is error)
            ret
section .data
