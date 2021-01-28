	section		.text
	global		ft_strcmp
ft_strcmp:
	mov		r12, 0
	while:
		mov		r11B, byte[rdi + r12]
		mov		r13B, byte[rsi + r12]
		cmp		r11B, 0
		je		fin_while
		inc		r12
		cmp		r13B, r11B
		jne		fin_while		
		jmp		while
	fin_while:
		mov		rax, 0
		cmp		r13B, r11B
		je		fin
		mov		rax, -1
		cmp		r13B, r11B
		ja		fin
		mov		rax, 1
	fin:
	ret
