/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include "architect.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    double **final_matrix;
    double **coordone = parsing_initial_vector(argc, argv);
    double **final_coordone;
    node_transfo_t arguments = create_node();

    arguments = parsing_arg(argc, argv);
    final_matrix = multiply_linked_list(arguments);
    print_matrix(final_matrix);
    final_coordone = multiply_matrix_vector(final_matrix, coordone);
    print_coor_final(coordone, final_coordone);
    return 0;
}
