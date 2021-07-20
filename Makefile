NAME	= libasm.a

NASM	= nasm

NFLAG	= -fmacho64

SOURCES = ft_read.s ft_strcmp.s ft_strcpy.s ft_strdup.s ft_strlen.s ft_write.s

OBJECTS	= ${SOURCES:.s=.o}

HEADER	= libasm.h

${NAME}:	${OBJECTS}
			ar rc ${NAME} ${OBJECTS}

all:		${NAME}

%.o:%.s		${HEADER}
			${NASM} ${NFLAG} -s $< -o $@

clean:
			rm -f ${OBJECTS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re