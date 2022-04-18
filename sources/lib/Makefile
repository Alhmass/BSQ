#
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Library making file.
#

SRC	=	my_putchar.c \
		my_put_nbr.c \
		my_strchr.c \
		my_strlen.c \
		my_putstr.c \
		my_getnbr.c

OBJ = 	$(SRC:.c=.o)

NAME = library

CFLAGS = -Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f libmy.a

re: fclean all

cc: re clean

.PHONY: all clean fclean re cc lib