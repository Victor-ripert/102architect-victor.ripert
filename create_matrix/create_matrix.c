/*
** EPITECH PROJECT, 2024
** creata_matrix.c
** File description:
** create matrix and return pointer
*/
#include <stdlib.h>

double **create_matrix(void)
{
    double **matrix = malloc(sizeof(double *) * 3);

    for (int i = 0; i != 3; i++) {
	matrix[i] = malloc(sizeof(double) * 3);
    }
    return matrix;
}
