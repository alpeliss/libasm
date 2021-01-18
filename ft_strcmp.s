	section		.text
	global		_ft_strcmp
_ft_strcmp:
	mov		r12, 0
	mov		al, 0
	while:
		mov		r11B, byte[rsi + r12]
		cmp		byte[rdi + r12], r11B
		je		fin_while
		cmp		r11B, 0
		je		fin_while
		inc		r12
		jmp		while
	fin_while:
		sub		al, byte[rdi + r12]
		add		al, r11B
	ret
