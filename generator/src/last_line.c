/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** display.c
*/

#include "../include/generator.h"

void last_to_first_line(int x, int **arr)
{
    for (int i = 0; i < x; i++)
        arr[0][i] = arr[2][i];

    for (int i = 0; i < x; i++)
        arr[1][i] = 0;

    for (int i = 0; i < x; i++)
            if (i % 2 == 0)
                arr[2][i] = -1;
}

void last_impair_line(int x, int **arr)
{
    for (int j = 0; j < 1; j++) {
        for (int i = 0; i < x; i++) {
            if (arr[j][i] == 0)
                printf("X");
            else
            printf("*");
        }
    }
}

void management_last_line(int sign, int x, int y, int **arr)
{
    if (sign == 0) {
        for (int i = 0; i < x; i++)
            arr[1][i] = 1;
        convert_arr_to_maze(x, arr, 1);
    }
    else {
        for (int i = 0; i < x; i++)
            arr[0][i] = 1;
        last_impair_line(x, arr);
    }
}