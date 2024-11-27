/*
** EPITECH PROJECT, 2024
** creata_matrix.c
** File description:
** create matrix and return pointer
*/
#include  "architect.h"
#include <stdio.h>

double matrix_mulitply_number(double **first_matrix, double **second_matrix, int i, int j)
{
    double result_number = 0;
    for (int m = 0; m < 3; m++) {
        result_number = result_number + (first_matrix[i][m] * second_matrix[m][j]);
    }
    return result_number;
}

double **multiply_matrix_matrix(double **first_matrix, double **second_matrix)
{
    double **result = create_matrix();

    for (int i = 0; i != 3; i++) {
        for (int j = 0; j != 3; j++) {
            result[i][j] = matrix_mulitply_number(first_matrix, second_matrix, i, j);
        }
    }
    return result;
}
