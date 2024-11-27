/*
** EPITECH PROJECT, 2024
** print_h_coor.c
** File description:
** print homogenous coordinate
*/
#include "architect.h"
#include <stdio.h>

void print_coor_final(double **coordinate, double **final_coordinate)
{
    print_h_coor(coordinate);
    printf(" => ");
    print_h_coor(final_coordinate);
    printf("\n");
}
