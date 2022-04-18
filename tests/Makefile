#
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Make file for program infinadd.
#

SRC	=	tests_97_21.c \
		tests_one_line.c \
		tests_column.c \
		tests_34_137.c \
		tests_1_1.c \
		tests_special_cases.c \
		tests_big_maps.c \
		tests_500_and_1000.c \
		tests_187_187.c \
		tests_error_handling.c \
		../sources/read_file.c \
		../sources/bsq.c \
		../sources/find_coord_and_print.c \
		../sources/check_map.c

OBJ = 	$(SRC:.c=.o)

NAME = tests

CFLAGS = -Wall -Werror -Wextra

LDFLAGS = -L../sources/lib/ -lcriterion --coverage

LDLIBS = -lmy

CPPFLAGS = -I../include

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(OBJ) $(OBJ:.o=.gcno) $(OBJ:.o=.gcda)


fclean: clean
	rm -f $(NAME)

re: fclean all

cc: re clean

.PHONY: all clean fclean re cc lib