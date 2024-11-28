/*
** EPITECH PROJECT, 2024
** print matrix
** File description:
** print matrix
*/
#include <stdio.h>

void print_matrix(double **matrix)
{
    for (int i = 0; i != 3; i++) {
        printf("%.2f\t%.2f\t%.2f\n", matrix[i][0], matrix[i][1], matrix[i][2]);
    }
}
