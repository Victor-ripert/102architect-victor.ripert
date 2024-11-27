/*
** EPITECH PROJECT, 2024
** creat_homo_coord.c
** File description:
** create homogenoaus coordoinate with int passed as arguments
*/
#include "architect.h"
#include <stdlib.h>

double **create_h_coor(double x, double y)
{
    double **coordinate = malloc(sizeof(double *) * 3);

    for (int i = 0; i != 3; i++) {
	coordinate[i] = malloc(sizeof(double) * 1);
    }
    coordinate[0][0] = x;
    coordinate[1][0] = y;
    coordinate[2][0] = 1;
    return coordinate;
}
