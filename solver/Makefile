##
## EPITECH PROJECT, 2020
## epitech
## File description:
## Makefile
##

SRC =	src/solver.c \
		src/map.c	\
		src/display.c	\
		src/transform_map_type.c 	\
		src/check.c 	\

NAME = solver

INCLUDE = -I ../include

LIB = -L../lib -lmy -lm

MY = dante.h

all: $(NAME)

$(NAME):
	@make all -s -C ../lib/my
	@gcc $(INCLUDE) -o $(NAME) $(SRC) $(LIB) -g3

clean:
	@make clean -s -C ../lib/my

fclean: clean
	@make fclean -s -C ../lib/my
	@rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re