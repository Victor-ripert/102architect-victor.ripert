/*
** EPITECH PROJECT, 2024
** creata_matrix.c
** File description:
** create matrix and return pointer
*/
#include "architect.h"

double **multiply_matrix_vector(double **m, double **v)
{
    double x;
    double y;
    double third;
    double **result;

    x = (m[0][0] * v[0][0]) + (m[0][1] * v[1][0]) + (m[0][2] * v[2][0]);
    y = (m[1][0] * v[0][0]) + (m[1][1] * v[1][0]) + (m[1][2] * v[2][0]);
    third = (m[2][0] * v[0][0]) + (m[2][1] * v[1][0]) + (m[2][2] * v[2][0]);
    result = create_h_coor(x, y);
    result[2][0] = third;
    return result;
}
