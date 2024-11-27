/*
** EPITECH PROJECT, 2024
** creata_matrix.c
** File description:
** create matrix and return pointer
*/
#include "architect.h"
#include <stdio.h>

double matrix_mulitply_nb(double **matrix_1, double **matrix_2, int i, int j)
{
    double result_number = 0;

    for (int m = 0; m < 3; m++) {
        result_number = result_number + (matrix_1[i][m] * matrix_2[m][j]);
    }
    return result_number;
}

double **multiply_matrix_matrix(double **matrix_1, double **matrix_2)
{
    double **result = create_matrix();

    for (int i = 0; i != 3; i++) {
        for (int j = 0; j != 3; j++) {
            result[i][j] = matrix_mulitply_nb(matrix_1, matrix_2, i, j);
        }
    }
    return result;
}
