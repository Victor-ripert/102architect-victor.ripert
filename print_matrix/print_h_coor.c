/*
** EPITECH PROJECT, 2024
** print_h_coor.c
** File description:
** print homogenous coordinate
*/
#include "architect.h"
#include <stdio.h>

void print_h_coor(double **coordinate)
{
    printf("(%.2f, %.2f)", coordinate[0][0], coordinate[1][0]);
}
