/*
** EPITECH PROJECT, 2020
** epitech
** File description:
** solver.c
*/

#include "../include/solver.h"

int solver(int **maze, int **solution, int rows, int cols, int x, int y)
{
    if ((rows == x - 1) && (cols == y - 1)) {
        solution[rows][cols] = 2;
        return 1;
    }
    if (rows >= 0 && cols >= 0 && rows < x && cols < y &&
    solution[rows][cols] == 0 && maze[rows][cols] == 0) {
        solution[rows][cols] = 2;
        if (solver(maze, solution, rows + 1, cols, x, y))
            return (1);
        if (solver(maze, solution, rows, cols + 1, x, y))
            return (1);
        if (solver(maze, solution, rows - 1, cols, x, y))
            return (1);
        if (solver(maze, solution, rows, cols - 1, x, y))
            return (1);
        solution[rows][cols] = 0;
        return (0);
    }
    return (0);
}

int main(int ac, char **av)
{
    FILE *fp;
    int x;
    int y;

    if (check_error(ac, av) == 1)
        return (84);
    fp = fopen(av[1], "r");
    x = get_x_maze(av);
    y = get_y_maze(av);
    char *line = malloc(sizeof(int) * y);
    int **solution = mem_alloc_2d_array_int(x, y);
    int **maze = mem_alloc_2d_array_int(x, y);

    char_to_int_maze(fp, line, maze, solution);
    if (solver(maze, solution, 0, 0, x, y))
        int_to_char_maze(solution, x, y);
    else
        printf("no solution found");
    fclose(fp);
    return (0);
}