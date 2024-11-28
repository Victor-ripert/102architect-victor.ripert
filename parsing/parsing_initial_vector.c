/*
** EPITECH PROJECT, 2024
** creata_matrix.c
** File description:
** create matrix and return pointer
*/
#include "architect.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

double **parsing_initial_vector(int argc, char **argv)
{
    double **coordone;

    if (argc > 3) {
        coordone = create_h_coor(atof(argv[1]), atof(argv[2]));
        return coordone;
    }
    return NULL;
}
