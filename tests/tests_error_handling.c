/*
** EPITECH PROJECT, 2021
** tests_error_handling.
** File description:
** Criterion test file to tests invalid maps.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/main.h"
#include "../include/my.h"

Test(bsq, test_empty_map, .init=cr_redirect_stdout)
{
    char *map;

    map = load_file_in_mem("tests/error_maps/empty");
    if (verif_map(map) == 84) 
    cr_assert(true);
    else
    cr_assert(false);
    cr_expect(true);
}

Test(bsq, test_non_existant_map, .init=cr_redirect_stdout)
{
    if (load_file_in_mem("tests/ezvjvjke") == NULL) 
    cr_assert(true);
    else
    cr_assert(false);
    cr_expect(true);
}

Test(bsq, test_different_size_map, .init=cr_redirect_stdout)
{
    char *map;

    map = load_file_in_mem("tests/error_maps/different_size");
    if (verif_map(map) == 84) 
    cr_assert(true);
    else
    cr_assert(false);
    cr_expect(true);
}

Test(bsq, test_less_line_map, .init=cr_redirect_stdout)
{
    char *map;

    map = load_file_in_mem("tests/error_maps/less_line");
    if (verif_map(map) == 84) 
    cr_assert(true);
    else
    cr_assert(false);
    cr_expect(true);
}

Test(bsq, test_invalid_char_map, .init=cr_redirect_stdout)
{
    char *map;

    map = load_file_in_mem("tests/error_maps/invalid_char");
    if (verif_map(map) == 84) 
    cr_assert(true);
    else
    cr_assert(false);
    cr_expect(true);
}