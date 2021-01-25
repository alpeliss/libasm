	extern		_malloc
	extern		_ft_strlen
	extern		_ft_strcpy

	section		.text
	global		_ft_strdup
_ft_strdup:
	push	rdi
	call	_ft_strlen
	mov		rdi, rax
	inc		rdi
	call	_malloc
	cmp		rax, 0
	je		end
	pop		rdi
	mov		rsi, rdi 		;
	mov		rdi, rax
	call	_ft_strcpy		
end:
	ret
