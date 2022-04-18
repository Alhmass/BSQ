/*
** EPITECH PROJECT, 2020
** bsq.
** File description:
** This file contain others function of the bsq program.
*/

#include "../include/main.h"
#include "../include/my.h"
#include <stdlib.h>

struct map_data determine_cols_rows(char *map)
{
    struct map_data rowcoldata;
    int i = 0;
    rowcoldata.col = 1;

    rowcoldata.row = my_getnbr(map) + 1;
    while (map[i] != '\n') {
        i++;
    }
    i = i + 1;
    while (map[i] != '\n') {
        rowcoldata.col = rowcoldata.col + 1;
        i++;
    }
    return (rowcoldata);
}

int **initialise_map_in_int(char **map, struct map_data datamap)
{
    int **resolved_map = malloc(sizeof(int *) * datamap.row - 1);

    for (int x = 0; x < datamap.row; x++) {
        resolved_map[x] = malloc(sizeof(int) * datamap.col);
    }
    for (int i = 0; i < datamap.col; i++) {
        if (map[1][i] == 'o')
            resolved_map[0][i] = 0;
        else if (map[1][i] == '.')
            resolved_map[0][i] = 1;
        else
            resolved_map[0][i] = '\0';
    }
    for (int k = 1; k < datamap.row - 1; k++) {
        if (map[k + 1][0] == 'o')
            resolved_map[k][0] = 0;
        else if (map[k + 1][0] == '.')
            resolved_map[k][0] = 1;
    }
    return (resolved_map);
}

int find_min_number(int **resolved_map, int i, int k)
{
    int min = 0;

    min = resolved_map[i - 1][k];
    if (min > resolved_map[i - 1][k - 1])
        min = resolved_map[i - 1][k - 1];
    if (min > resolved_map[i][k - 1])
        min = resolved_map[i][k - 1];
    return (min);
}

int **find_biggest_square(int **resolved_map, char **map,
        struct map_data datamap)
{
    resolved_map = initialise_map_in_int(map, datamap);

    for (int i = 1; i < datamap.row - 1; i++) {
        for (int k = 1; k < datamap.col - 1; k++) {
            if (map[i + 1][k] == 'o') {
                resolved_map[i][k] = 0;
            } else if (map[i + 1][k] == '.') {
                resolved_map[i][k] = 1 + find_min_number(resolved_map, i, k);
            }
        }
    }
    return (resolved_map);
}