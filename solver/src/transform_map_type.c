/*
** EPITECH PROJECT, 2020
** epitech
** File description:
** transform map.c
*/

#include "../include/solver.h"

void char_to_int_maze(FILE *fp, char *line, int **maze, int **solution)
{
    int width = 0;
    int height = 0;

    while (fscanf(fp, "%s", line) > 0) {
        width = strlen(line);
        for (int i = 0; i < width; i++) {
            if (line[i] == 'X')
                maze[height][i] = 1;
            if (line[i] == '*')
                maze[height][i] = 0;
            else
                solution[height][i] = maze[height][i];
        }
        height++;
    }
}

void int_to_char_maze(int **solution, int x, int y)
{
    char **solved_maze = mem_alloc_2d_array_char(x, y);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (solution[i][j] == 0)
                solved_maze[i][j] = '*';
            if (solution[i][j] == 1)
                solved_maze[i][j] = 'X';
            if (solution[i][j] == 2)
                solved_maze[i][j] = 'o';
        }
    }
    display_maze(solved_maze, x, y);
}