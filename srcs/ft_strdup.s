	extern		malloc
	extern		ft_strlen
	extern		ft_strcpy

	section		.text
	global		ft_strdup
ft_strdup:
	push	rdi
	call	ft_strlen
	mov		rdi, rax
	inc		rdi
	call	malloc
	cmp		rax, 0
	je		end
	pop		rdi
	mov		rsi, rdi 
	mov		rdi, rax
	call	ft_strcpy		
end:
	ret
