/*
** EPITECH PROJECT, 2020
** epitech
** File description:
** display.c
*/

#include "../include/solver.h"

void display_maze(char **solution, int x, int y)
{
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (solution[i][j] == '*')
                printf("\033[0;36m");
            if (solution[i][j] == 'X')
                printf("\033[0;31m");
            if (solution[i][j] == 'o')
                printf("\033[0;33m");
            printf("%c", solution[i][j]);
        }
        if (i != x - 1)
            printf("\n");
    }
}