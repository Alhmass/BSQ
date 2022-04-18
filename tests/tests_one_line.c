/*
** EPITECH PROJECT, 2021
** tests_one_line.c
** File description:
** Criterion test file for one line map.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/main.h"
#include "../include/my.h"

Test(bsq, test_one_line_empty, .init=cr_redirect_stdout)
{
    char *map_solved = load_file_in_mem("tests/mouli_maps_solved/intermediate_map_one_empty_line");
    int  **resolved_map = {0};
    char *map;
    char **array;
    struct map_data basedata;


    map = load_file_in_mem("tests/mouli_maps/intermediate_map_one_empty_line");
    basedata = determine_cols_rows(map);
    array = load_2d_arr_from_file("tests/mouli_maps/intermediate_map_one_empty_line", basedata);
    resolved_map = find_biggest_square(resolved_map, array, basedata);
    find_coordinate_square(resolved_map, &basedata);
    print_resolved_map(array, &basedata);
    cr_assert_stdout_eq_str(map_solved, "");
}

Test(bsq, test_one_filled_line, .init=cr_redirect_stdout)
{
    char *map_solved = load_file_in_mem("tests/mouli_maps_solved/intermediate_map_one_filled_line");
    int  **resolved_map = {0};
    char *map;
    char **array;
    struct map_data basedata;


    map = load_file_in_mem("tests/mouli_maps/intermediate_map_one_filled_line");
    basedata = determine_cols_rows(map);
    array = load_2d_arr_from_file("tests/mouli_maps/intermediate_map_one_filled_line", basedata);
    resolved_map = find_biggest_square(resolved_map, array, basedata);
    find_coordinate_square(resolved_map, &basedata);
    print_resolved_map(array, &basedata);
    cr_assert_stdout_eq_str(map_solved, "");
}

Test(bsq, test_one_line_with_obstacles_25pc, .init=cr_redirect_stdout)
{
    char *map_solved = load_file_in_mem("tests/mouli_maps_solved/intermediate_map_one_line_with_obstacles_25pc");
    int  **resolved_map = {0};
    char *map;
    char **array;
    struct map_data basedata;


    map = load_file_in_mem("tests/mouli_maps/intermediate_map_one_line_with_obstacles_25pc");
    basedata = determine_cols_rows(map);
    array = load_2d_arr_from_file("tests/mouli_maps/intermediate_map_one_line_with_obstacles_25pc", basedata);
    resolved_map = find_biggest_square(resolved_map, array, basedata);
    find_coordinate_square(resolved_map, &basedata);
    print_resolved_map(array, &basedata);
    cr_assert_stdout_eq_str(map_solved, "");
}

Test(bsq, test_one_line_with_obstacles_50pc, .init=cr_redirect_stdout)
{
    char *map_solved = load_file_in_mem("tests/mouli_maps_solved/intermediate_map_one_line_with_obstacles_50pc");
    int  **resolved_map = {0};
    char *map;
    char **array;
    struct map_data basedata;


    map = load_file_in_mem("tests/mouli_maps/intermediate_map_one_line_with_obstacles_50pc");
    basedata = determine_cols_rows(map);
    array = load_2d_arr_from_file("tests/mouli_maps/intermediate_map_one_line_with_obstacles_50pc", basedata);
    resolved_map = find_biggest_square(resolved_map, array, basedata);
    find_coordinate_square(resolved_map, &basedata);
    print_resolved_map(array, &basedata);
    cr_assert_stdout_eq_str(map_solved, "");
}

Test(bsq, test_one_line_with_obstacles_75pc, .init=cr_redirect_stdout)
{
    char *map_solved = load_file_in_mem("tests/mouli_maps_solved/intermediate_map_one_line_with_obstacles_75pc");
    int  **resolved_map = {0};
    char *map;
    char **array;
    struct map_data basedata;


    map = load_file_in_mem("tests/mouli_maps/intermediate_map_one_line_with_obstacles_75pc");
    basedata = determine_cols_rows(map);
    array = load_2d_arr_from_file("tests/mouli_maps/intermediate_map_one_line_with_obstacles_75pc", basedata);
    resolved_map = find_biggest_square(resolved_map, array, basedata);
    find_coordinate_square(resolved_map, &basedata);
    print_resolved_map(array, &basedata);
    cr_assert_stdout_eq_str(map_solved, "");
}