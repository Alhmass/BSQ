/*
** EPITECH PROJECT, 2020
** headers file.
** File description:
** Header file of bsq project.
*/

struct map_data
{
    int row;
    int col;
    int square_size;
    int x;
    int y;
};
struct map_data determine_cols_rows(char *map);
char *load_file_in_mem(char const *filepath);
char **load_2d_arr_from_file(char const *filepath, struct map_data basedata);
int **initialise_map_in_int(char **map, struct map_data datamap);
int find_min_number(int **resolved_map, int i, int k);
int **find_biggest_square(int **resolved_map, char **map,
        struct map_data datamap);
void find_coordinate_square(int **resolved_map, struct map_data *datamap);
void print_resolved_map(char **map, struct map_data *datamap);
int verif_map(char *map);
int verif_less_lines(char *map, int k);
int verif_char_and_line(char *map, int k);
int verif_empty(char *map);
