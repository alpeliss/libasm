	section		.text
	global		ft_write
ft_write:
	mov		r10, rdx
	mov		rax, 0x02000004
	syscall
	jc		error
	mov		rax, r10
	ret
error:
	mov		rax, -1
	ret
