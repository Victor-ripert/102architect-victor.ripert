/*
** EPITECH PROJECT, 2024
** creata_matrix.c
** File description:
** create matrix and return pointer
*/
#include "architect.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int nb_arg(char flag, char **argv, int i)
{
    if (flag == 't') {
        if (argv[i + 1] != NULL && argv[i + 2] != NULL) {
            if (argv[i + 3] != NULL && argv[i + 3][0] != '-') {
                printf("Too many arguments\n");
                return 84;
            } else {
                return 0;
            }
        } else {
            return 84;
        }
    }
    if (flag == 'z') {
        if (argv[i + 1] != NULL && argv[i + 2] != NULL) {
            if (argv[i + 3] != NULL && argv[i + 3][0] != '-') {
                return 84;
            } else {
                return 0;
            }
        } else {
            return 84;
        }
    }
    if (flag == 'r') {
        if (argv[i + 1] != NULL) {
            if (argv[i + 2] != NULL && argv[i + 2][0] != '-') {
                return 84;
            } else {
                return 0;
            }
        } else {
            return 84;
        }
    }
    if (flag == 's') {
        if (argv[i + 1] != NULL) {
            if (argv[i + 2] != NULL && argv[i + 2][0] != '-') {
                return 84;
            } else {
                return 0;
            }
        } else {
            return 84;
        }
    }
    return 84;
}
