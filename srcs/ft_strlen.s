	section .text
	global	ft_strlen
ft_strlen:
	mov		rax, 0						
	cmp		rdi, 0						 
	je		fin_while
	while:
		mov		r11B, byte[rdi + rax]
		cmp		r11B, 0
		je		fin_while
		inc		rax
		jmp		while
	fin_while:
	ret
