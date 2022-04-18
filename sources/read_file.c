/*
** EPITECH PROJECT, 2021
** read_file.
** File description:
** This function read and return the content on the file.
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/main.h"
#include "../include/my.h"

char *load_file_in_mem(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer;
    struct stat size;
    int len = 0;

    if (fd == -1) return (NULL);
    stat(filepath, &size);
    buffer = malloc(sizeof(char) * size.st_size);
    len = read(fd, buffer, size.st_size);
    if (len == -1) return (NULL);
    return (buffer);
}

char **load_2d_arr_from_file(char const *filepath, struct map_data basedata)
{
    char *buffer = load_file_in_mem(filepath);
    char **array = malloc(sizeof(char *) * basedata.row + 1);
    int k = 0;

    array[0] = malloc(sizeof(char) * basedata.col + 1);
    while (buffer[k] != '\n') {
        array[0][k] = buffer[k];
        k++;
    }
    array[0][k] = buffer[k];
    k = k + 1;
    for (int i = 1; i < basedata.row; i++) {
        array[i] = malloc(sizeof(char) * basedata.col + 1);
        for (int y = 0; y != basedata.col; y++) {
            array[i][y] = buffer[k];
            k++;
        }
    }
    free(buffer);
    return (array);
}