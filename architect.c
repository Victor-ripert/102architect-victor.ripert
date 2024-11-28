/*
** EPITECH PROJECT, 2024
** architect
** File description:
** architect
*/
#include "architect.h"
#include <stdio.h>
#include <stdlib.h>

int architect(int argc, char **argv)
{
    double **final_matrix;
    double **coordone;
    double **final_coordone;
    node_transfo_t arguments = create_node();

    coordone = parsing_initial_vector(argc, argv);
    if (coordone == NULL) {
        return 84;
    }
    arguments = parsing_arg(argc, argv);
    if (arguments == NULL) {
        return 84;
    }
    final_matrix = multiply_linked_list(arguments);
    print_matrix(final_matrix);
    final_coordone = multiply_matrix_vector(final_matrix, coordone);
    print_coor_final(coordone, final_coordone);
    return 0;
}
