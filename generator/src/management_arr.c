/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** management_arr.c
*/

#include "../include/generator.h"

int **mem_int_2d_array(int x)
{
    int **arr = malloc(sizeof(int *) * 3);

    for (int i = 0; i < 3; i++) {
        arr[i] = malloc(sizeof(int) * x);
        if (arr == NULL)
            return (NULL);
    }
    for (int j = 0; j < 3; j++)
        for (int i = 0; i < x; i++)
            arr[j][i] = 0;
    return (arr);
}

void init_first_line(int x, int **arr)
{
    int j = 0;
    int k = 1;

    for (int i = 0; i < x / 2; i++) {
        arr[0][j] = k;
        j += 2;
        k++;
    }
    if (x > 1 && arr[0][x - 1] == 0 && arr[0][x - 2] == 0)
        arr[0][x - 1] = arr[0][x - 3] + 1;
}

void init_arr(int x, int **arr)
{
    if (x == 1) {
        arr[0][0] = 1;
        arr[2][0] = -1;
    }
    else {
        init_first_line(x, arr);
        for (int i = 0; i < x; i++)
            if (i % 2 == 0)
                arr[2][i] = -1;
    }
}