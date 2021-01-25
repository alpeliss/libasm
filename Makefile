SRCDIR		= ./srcs/
SRCNAME		= ft_write.s	/
		  ft_read.s	/
		  ft_strlen.s	/
		  ft_strcpy.s	/
		  ft_strcmp.s	/
		  ft_strdup.s

SRCS		= ${addprefix ${SRCDIR}, ${SRCNAME}}

OBJS	= ${SRCS:.s=.o}

NAME	= libasm.a

NA	= nasm
NFLAGS	= -f elf64

RM	= rm -f

.s.o:
		${NA} ${NFLAGS} $< -o ${<:.s=.o}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

all: 		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

c:		all clean

.PHONY:		clean fclean re all
© 2021 GitHub, In
