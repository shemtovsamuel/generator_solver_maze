/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** algo.c
*/

#include "../include/generator.h"

void first_step(int x, int **arr)
{
    int r = 0;

    for (int i = 0; i < x - 2; i += 2) {
        r = rand() % 2;
        if ( r != 0) {
            if (arr[0][i] != arr[0][i + 2]) {
                arr[0][i] = minimum(arr[0][i], arr[0][i + 2]);
                arr[0][i + 1] = minimum(arr[0][i], arr[0][i + 2]);
                arr[0][i + 2] = minimum(arr[0][i], arr[0][i + 2]);
            }
        }
    }
}

void second_step(int x, int **arr)
{
    int r = 0;
    int nb = 0;
    int pass = 0;

    for (int i = 0; i < x; i += 2) {
        if (arr[0][i] != nb)
            pass = 0;
        nb = arr[0][i];
        r = rand() % 2;
        if (nb != arr[0][i + 2] && pass == 0) {
            arr[1][i] = arr[0][i];
            arr[2][i] = arr[0][i];
        }
        else if (r != 0) {
            arr[1][i] = arr[0][i];
            arr[2][i] = arr[0][i];
            pass = 1;
        }
    }
    higher_value(x, arr);
}

void last_step(int x, int **arr)
{
    for (int i = 0; i < x - 2; i += 2) {
        if (arr[0][i] != arr[0][i + 2]) {
            arr[0][i] = minimum(arr[0][i], arr[0][i + 2]);
            arr[0][i + 1] = minimum(arr[0][i], arr[0][i + 2]);
            arr[0][i + 2] = minimum(arr[0][i], arr[0][i + 2]);
        }
    }
}

void convert_arr_to_maze(int x, int **arr, int test)
{
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < x; i++) {
            if (arr[j][i] == 0)
                printf("X");
            else
                printf("*");
        }
        if (j == 0)
            printf("\n");
        else if (j != 0 && test == 0) {
            printf("\n");
        }
    }
}

void loop(int x, int y, int **arr)
{
    first_step(x, arr);
    second_step(x, arr);
    convert_arr_to_maze(x, arr, 0);
    last_to_first_line(x, arr);
}