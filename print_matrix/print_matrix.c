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
		for (int j = 0; j != 3; j++) {
	    	printf("%5.2f ", matrix[i][j]);
		}
		printf("\n");
    }
}
