#
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Library making file.
#

SRC	=	sources/main.c \
		sources/bsq.c \
		sources/find_coord_and_print.c \
		sources/check_map.c \
		sources/read_file.c


OBJ = 	$(SRC:.c=.o)

NAME = bsq

LDFLAGS = -L./sources/lib/

LDLIBS = -lmy

CPPFLAGS = -I./include

CFLAGS = -Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJ) lib
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

lib:
	make -C sources/lib

clean:
	make clean -C tests/
	make clean -C sources/lib/
	rm -f $(OBJ) $(OBJ:.o=.gcno) $(OBJ:.o=.gcda)

fclean: clean
	make fclean -C tests/
	make fclean -C sources/lib/
	rm -f $(NAME)

re: fclean all

cc: re clean

unit_tests: CFLAGS += --coverage
unit_tests: fclean all
	make -C tests/

tests_run: unit_tests
	./tests/tests

.PHONY: all clean fclean re cc lib