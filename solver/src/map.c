/*
** EPITECH PROJECT, 2020
** epitech
** File description:
** map.c
*/

#include "../include/solver.h"

int **mem_alloc_2d_array_int(int y, int x)
{
    int **grid = calloc(y, sizeof(int *));

    if (grid == NULL)
        return (NULL);
    for (int i = 0; i < y; i++) {
        grid[i] = calloc(x, sizeof(int));
        if (grid[i] == NULL)
            return (NULL);
    }
    return (grid);
}

char **mem_alloc_2d_array_char(int y, int x)
{
    char **grid = calloc(y, sizeof(char *));

    if (grid == NULL)
        return (NULL);
    for (int i = 0; i < y; i++) {
        grid[i] = calloc(x, sizeof(char));
        if (grid[i] == NULL)
            return (NULL);
    }
    return (grid);
}

int get_x_maze(char **av)
{
    FILE *fp = fopen(av[1], "r");
    int ch;
    int x = 1;

    while ((ch = fgetc(fp)) != EOF)
        if (ch == '\n')
            x++;
    fclose(fp);
    return (x);
}

int get_y_maze(char **av)
{
    FILE *fp = fopen(av[1], "r");
    int ch;
    int y = 0;
    int newline = 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (ch != '\n' && newline == 0)
            y++;
        else
            newline = 1;
    }
    fclose(fp);
    return (y);
}