SRC	= src/ft_printf.c src/ft_handledecimal.c src/ft_handleu.c src/ft_putchar_fd.c src/ft_puthex.c src/ft_putstr_fd.c src/ft_x.c src/ft_xx.c src/handles.c src/handles2.c src/ft_strlen.c

OBJS	= ${SRC:.c=.o}

NAME	= libftprintf.a

CC	= cc

RM	= rm -f

AR	= ar rc

RN	= ranlib

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re