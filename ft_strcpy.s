	section		.text
	global		_ft_strcpy
_ft_strcpy:
	cmp		rdi, 0			;dest
	je		fin_while
	cmp		rsi, 0			;src
	je		fin_while
	mov		rax, rdi
	mov		r12, 0
	while:
		mov		r11B, byte[rsi + r12]
		mov		byte[rdi + r12], r11B
		cmp		r11B, 0
		je 		fin_while
		inc		r12
		jmp		while
	fin_while:
	ret

