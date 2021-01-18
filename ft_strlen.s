	section .text
	global	_ft_strlen
_ft_strlen:
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
