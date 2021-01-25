	section	.text
	global	ft_read
ft_read:
	mov		r10, rdx
	mov		rax, 0x02000003
	syscall
	jc error
	mov		rax, r10
	ret
error:
	mov		rax, -1
	ret
