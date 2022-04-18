/*
** EPITECH PROJECT, 2021
** find_coord_and_print.
** File description:
** This file function find coord of the biggest square and print the final map.
*/

#include "../include/main.h"
#include "../include/my.h"
#include <stdlib.h>

void find_coordinate_square(int **resolved_map, struct map_data *datamap)
{
    datamap->square_size = resolved_map[0][0];
    datamap->x = 0;
    datamap->y = 0;
    for (int i = 0; i < datamap->row; i++) {
        for (int k = 0; k < datamap->col - 1; k++) {
            if (resolved_map[i][k] > datamap->square_size) {
            datamap->square_size = resolved_map[i][k];
            datamap->y = i;
            datamap->x = k;
            }
        }
    }
}

void print_resolved_map(char **map, struct map_data *datamap)
{
    int y_value = datamap->y - (datamap->square_size - 1);
    int x_value = datamap->x - (datamap->square_size - 1);

    for (int i = y_value; i < datamap->y + 1; i++) {
        for (int k = x_value; k < datamap->x + 1; k++) {
            map[i + 1][k] = 'x';
        }
    }
    for (int q = 1; q < datamap->row; q++) {
        my_putstr(map[q]);
    }
}