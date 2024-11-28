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

int is_arg_flag_next(node_transfo_t *flag_arg, char **argv, int i, int argc)
{
    double **matrix;

    if (argv[i][1] == 'r' && nb_arg('r', argv, i) == 0) {
        matrix = rotation_matrix(atof(argv[i + 1]));
        printf("Rotation by a %s degree angle\n", argv[i + 1]);
        add_node(flag_arg, matrix);
        return 0;
    }
    if (argv[i][1] == 's' && nb_arg('s', argv, i) == 0) {
        matrix = reflection_matrix(atof(argv[i + 1]));
        printf("Reflection over an axis with");
        printf(" an inclination angle of %s degrees\n", argv[i + 1]);
        add_node(flag_arg, matrix);
        return 0;
    }
    return 84;
}

int is_arg_flag(node_transfo_t *flag_arg, char **argv, int i, int argc)
{
    double **matrix;

    if (argv[i][1] == 't' && nb_arg('t', argv, i) == 0) {
        matrix = translation_matrix(atof(argv[i + 1]), atof(argv[i + 2]));
        printf("Translation along vector ");
        printf("(%s, %s)\n", argv[i + 1], argv[i + 2]);
        add_node(flag_arg, matrix);
        return 0;
    }
    if (argv[i][1] == 'z' && nb_arg('z', argv, i) == 0) {
        matrix = scaling_matrix(atof(argv[i + 1]), atof(argv[i + 2]));
        printf("Scaling by factors %s and %s\n", argv[i + 1], argv[i + 2]);
        add_node(flag_arg, matrix);
        return 0;
    }
    return is_arg_flag_next(flag_arg, argv, i, argc);
}

node_transfo_t parsing_arg(int argc, char **argv)
{
    node_transfo_t flag_arg;
    double **matrix = translation_matrix(3, 4);
    int result = 0;

    flag_arg = NULL;
    if (argc < 3) {
        printf("ERROR 84 : too few arguments\n");
        return NULL;
    }
    for (int i = 3; i != argc; i++) {
        if (argv[i][0] == '-' && argv[i][1] <= '0' || argv[i][1] >= '9') {
            if (result += is_arg_flag(&flag_arg, argv, i, argc) == 84) {
                printf("ERROR 84 : too few arguments\n");
                return NULL;
            }
        }
    }
    return flag_arg;
}
