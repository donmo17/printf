
NAME = libftprintf.a
SRCS = ft_putnbr.c ft_putstr.c ft_strlen.c ft_putchar.c ft_printf.c

OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
	ar -rsc ${NAME} ${OBJS}

all: ${NAME}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
