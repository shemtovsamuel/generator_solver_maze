##
## EPITECH PROJECT, 2020
## epitech
## File description:
## Makefile
##

SRC =	src/main.c \
		src/generator.c \
		src/last_line.c \
		src/management_arr.c \
		src/util.c \

NAME = generator

INCLUDE = -I ../include

LIB = -L../lib -lmy -lm

MY = dante.h

all: $(NAME)

$(NAME):
	@make all -s -C ../lib/my
	@gcc $(INCLUDE) -o $(NAME) $(SRC) $(LIB)

clean:
	@make clean -s -C ../lib/my

fclean: clean
	@make fclean -s -C ../lib/my
	@rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re