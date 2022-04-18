/*
** EPITECH PROJECT, 2021
** check_map.
** File description:
** This program check the entire validity of the map.
*/

#include "../include/main.h"
#include "../include/my.h"
#include <stdlib.h>

int verif_map(char *map)
{
    int k = 0;

    if (verif_empty(map) == 84)
        return (84);
    while (map[k] != '\n') {
        k++;
    }
    if (map[k + 1] == '\0')
        return (84);
    else if (verif_char_and_line(map, k) == 84)
        return (84);
    else if (verif_less_lines(map, k + 1) == 84)
        return (84);
    return (0);
}

int verif_less_lines(char *map, int k)
{
    int total_char = 0;
    int y = k;
    int total_inmap = 0;

    while (map[y] != '\n')
    {
        y++;
    }
    total_char = (y - k) * my_getnbr(map);
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '.' || map[i] == 'o')
            total_inmap++;
    }
    if (total_inmap != total_char)
        return (84);
    return (0);
}

int verif_char_and_line(char *map, int k)
{
    for (int i = k; map[i] != '\0'; i++) {
        if (map[i] == 'o' || map[i] == '.')
            continue;
        else if (map[i] == '\n' || map[i] == '\0')
            continue;
        else
            return (84);
    }
    return (0);
}

int verif_empty(char *map)
{
    int i = 0;
    int verif_n = 0;

    while (map[i] != '\0') {
        if (map[i] == '\n')
            verif_n = 1;
        i++;
    }
    if (i < 3)
        return (84);
    else if (verif_n == 0)
        return (84);
    else
        return (0);
}
