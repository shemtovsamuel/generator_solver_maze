/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** solver.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

#ifndef MY_SOLVER_H_
#define MY_SOLVER_H_

int **mem_alloc_2d_array_int(int y, int x);
char **mem_alloc_2d_array_char(int y, int x);
int get_x_maze(char **av);
int get_y_maze(char **av);
void display_maze(char **solution, int x, int y);
void char_to_int_maze(FILE *fp, char *line, int **maze, int **solution);
void int_to_char_maze(int **solution, int x, int y);
int check_error(int ac, char **av);

#endif