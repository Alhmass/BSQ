/*
** EPITECH PROJECT, 2020
** BSQ main file.
** File description:
** Program that find the largest square on a aboard.
*/

#include "../include/main.h"
#include "../include/my.h"
#include <stdlib.h>

int main(int ac, char **argv)
{
    int  **resolved_map = {0};
    char *map;
    char **array;
    struct map_data basedata;

    if (ac < 2) {
        return (84);
    } else {
        if (load_file_in_mem(argv[1]) == NULL) return (84);
        map = load_file_in_mem(argv[1]);
        if (verif_map(map) == 84) return (84);
        basedata = determine_cols_rows(map);
        array = load_2d_arr_from_file(argv[1], basedata);
        resolved_map = find_biggest_square(resolved_map, array, basedata);
        find_coordinate_square(resolved_map, &basedata);
        print_resolved_map(array, &basedata);
        free(array);
        free(map);
        free(resolved_map);
        return (0);
    }
}
