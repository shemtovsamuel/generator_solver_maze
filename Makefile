##
## EPITECH PROJECT, 2020
## Projects
## File description:
## Makefile
##

GENERATOR = ./generator/

SOLVER = ./solver/

all:
	make all -s -C $(GENERATOR)
	make all -s -C $(SOLVER)

fclean:
	make fclean -s -C $(GENERATOR)
	make fclean -s -C $(SOLVER)

re: fclean all

.PHONY: all fclean re
