/*
** EPITECH PROJECT, 2024
** create_scaling_matrix.c
** File description:
** create a scaling matrix with m, n passed as arguments
*/
#include "architect.h"

double **create_scaling_matrix(double m, double n)
{
    double **matrix = create_matrix();

    matrix[0][0] = m;
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    matrix[1][0] = 0;
    matrix[1][1] = n;
    matrix[1][2] = 0;
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 1;
    return matrix;
}
