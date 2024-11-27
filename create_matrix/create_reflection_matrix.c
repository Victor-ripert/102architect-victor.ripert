/*
** EPITECH PROJECT, 2024
** create_scaling_matrix.c
** File description:
** create a scaling matrix with m, n passed as arguments
*/
#include "architect.h"
#include <math.h>
#include <stdio.h>

double **create_reflection_matrix(double teta)
{
    double **matrix = create_matrix();
    double teta_radiant = teta * (M_PI / 180);
    teta_radiant *= 2;

    matrix[0][0] = cos((teta_radiant));
    matrix[0][1] = sin((teta_radiant));
    matrix[0][2] = 0;
    matrix[1][0] = sin((teta_radiant));
    matrix[1][1] = cos((teta_radiant)) * -1;
    matrix[1][2] = 0;
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 1;
    return matrix;
}
