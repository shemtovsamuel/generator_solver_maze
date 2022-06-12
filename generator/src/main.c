/*
** EPITECH PROJECT, 2020
** epitech
** File description:
** generator.c
*/

#include "../include/generator.h"

void game_loop(int x, int y, int **arr)
{
    int sign = 0;

    if (y % 2 != 0) {
        sign = 1;
        y -= 1;
    }
    if (sign == 1)
        for (int i = 0; i < (y / 2); i++)
            loop(x, y, arr);
    else
        for (int i = 0; i < (y / 2) - 1; i++)
            loop(x, y, arr);
    management_last_line(sign, x, y, arr);
}

int check_error(int ac, char **av, int x, int y)
{
    if (my_str_isnum(av[1]) == 0 || my_str_isnum(av[2]) == 0)
        exit (84);
    if (ac == 4 && my_strcmp(av[3], "perfect") != 0)
        exit (84);
    if (x <= 0 || y <= 0)
        exit (84);
    return (0);
}

int main(int ac, char **av)
{
    int x = 0;
    int y = 0;
    int **arr = NULL;

    srand(time(NULL));
    if (ac < 3 || ac > 4)
        return (84);
    x = my_getnbr(av[1]);
    y = my_getnbr(av[2]);
    check_error(ac, av, x, y);
    arr = mem_int_2d_array(x);
    init_arr(x, arr);
    game_loop(x, y, arr);
    return (0);
}