/*
** EPITECH PROJECT, 2021
** tests_special_cases.
** File description:
** Criterion test file to test special maps.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/main.h"
#include "../include/my.h"

Test(bsq, test_empty_corners, .init=cr_redirect_stdout)
{
    char *map_solved = load_file_in_mem("tests/mouli_maps_solved/intermediate_map_empty_corners");
    int  **resolved_map = {0};
    char *map;
    char **array;
    struct map_data basedata;


    map = load_file_in_mem("tests/mouli_maps/intermediate_map_empty_corners");
    basedata = determine_cols_rows(map);
    array = load_2d_arr_from_file("tests/mouli_maps/intermediate_map_empty_corners", basedata);
    resolved_map = find_biggest_square(resolved_map, array, basedata);
    find_coordinate_square(resolved_map, &basedata);
    print_resolved_map(array, &basedata);
    cr_assert_stdout_eq_str(map_solved, "");
}

Test(bsq, test_filled_corners, .init=cr_redirect_stdout)
{
    char *map_solved = load_file_in_mem("tests/mouli_maps_solved/intermediate_map_filled_corners");
    int  **resolved_map = {0};
    char *map;
    char **array;
    struct map_data basedata;


    map = load_file_in_mem("tests/mouli_maps/intermediate_map_filled_corners");
    basedata = determine_cols_rows(map);
    array = load_2d_arr_from_file("tests/mouli_maps/intermediate_map_filled_corners", basedata);
    resolved_map = find_biggest_square(resolved_map, array, basedata);
    find_coordinate_square(resolved_map, &basedata);
    print_resolved_map(array, &basedata);
    cr_assert_stdout_eq_str(map_solved, "");
}