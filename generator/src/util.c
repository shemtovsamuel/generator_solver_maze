/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** util.c
*/

#include "../include/generator.h"

int my_getnbr(char *str)
{
    int i = 0;
    long int r = 0;
    int c = 1;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            c++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        r = r * 10 - (str[i] - '0');
        i++;
    }
    if (r > 2147483647 || r < -2147483648)
        return (0);
    if (c % 2 == 1)
        r = -(r);
    return (r);
}

void higher_value(int x , int **arr)
{
    int nb_max = 0;

    for (int i = 0; i < x; i++)
        if (arr[2][i] > nb_max)
            nb_max = arr[2][i];
    for (int i = 0; i < x; i++)
        if (arr[2][i] == -1) {
            arr[2][i] = nb_max + 1;
            nb_max++;
        }
}

int minimum(int a, int b)
{
    return ((a > b) ? b : a);
}

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (s1[i] - s2[i]);
}