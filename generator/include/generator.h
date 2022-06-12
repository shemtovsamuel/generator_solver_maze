/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** generator.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#ifndef MY_GENERATOR_H_
#define MY_GENERATOR_H_

void display_arr(int x, int **arr);
void convert_arr_to_maze(int x, int **arr, int test);
int **mem_int_2d_array(int x);
void init_first_line(int x, int **arr);
void init_arr(int x, int **arr);
void first_step(int x, int **arr);
void second_step(int x, int **arr);
int my_getnbr(char *str);
void higher_value(int x , int **arr);
void last_to_first_line(int x, int **arr);
void last_step(int x, int **arr);
void loop(int x, int y, int **arr);
int minimum(int a, int b);
void last_impair_line(int x, int **arr);
void management_last_line(int sign, int x, int y, int **arr);
int my_str_isnum(char const *str);
int my_strcmp(char const *s1, char const *s2);

#endif