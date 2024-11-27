/*
** EPITECH PROJECT, 2024
** creata_matrix.c
** File description:
** create matrix and return pointer
*/
#include  "architect.h"

double **multiply_matrix_vector(double **matrix, double **vector)
{
    double x;
    double y;
    double third;
    double **result;

    x = (matrix[0][0] * vector[0][0]) + (matrix[0][1] * vector[1][0]) + (matrix[0][2] * vector[2][0]);
    y = (matrix[1][0] * vector[0][0]) + (matrix[1][1] * vector[1][0]) + (matrix[1][2] * vector[2][0]);
    third = (matrix[2][0] * vector[0][0]) + (matrix[2][1] * vector[1][0]) + (matrix[2][2] * vector[2][0]);
    result = create_h_coor(x, y);
    result[2][0] = third;
    return result;
}
