NAME = libftprintf.a 
RM = rm -f

SRCS = ft_printf.c ft_putchar.c ft_puthexamaj.c  ft_puthexamin.c ft_putstr.c ft_putunbr.c ft_putpointer.c ft_strlen.c ft_putnbr.c 
OBJ = $(SRCS:.c=.o)

CC      =   gcc 
FLAGS  =   -Wall -Wextra -Werror

all: $(NAME)

# Création de la bibliothèque
$(NAME): $(OBJ) 
	ar -rcs $@ $^
# Compilation des fichiers sources en objets
%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $^
# Suppression des objets
clean:
	$(RM) $(OBJ) 
# Suppression des objets et de la bibliothèque
fclean: clean
	$(RM) $(NAME)
# Recompilation complète
re: fclean all

.PHONY: all bonus clean fclean re