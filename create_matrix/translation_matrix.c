/*
** EPITECH PROJECT, 2024
** create_translation_matrix.c
** File description:
** create a translation matrix with i, j passed as arguments
*/
#include "architect.h"

double **translation_matrix(double i, double j)
{
    double **matrix = create_matrix();

    matrix[0][0] = 1;
    matrix[0][1] = 0;
    matrix[0][2] = i;
    matrix[1][0] = 0;
    matrix[1][1] = 1;
    matrix[1][2] = j;
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 1;
    return matrix;
}
