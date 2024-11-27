/*
** EPITECH PROJECT, 2024
** creata_matrix.c
** File description:
** create matrix and return pointer
*/
#include  "architect.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int is_arg_flag(node_transfo_t *flag_arg, char **argv, int i)
{
    double **matrix;

    if (argv[i][1] == 't') {
        matrix = create_translation_matrix(atof(argv[i + 1]), atof(argv[i + 2]));
        printf("Translation along vector (%s, %s)\n", argv[i + 1], argv[i + 2]);
        add_node(flag_arg, matrix);
    }
    if (argv[i][1] == 'z') {
        matrix = create_scaling_matrix(atof(argv[i + 1]), atof(argv[i + 2]));
        printf("Scaling by factors %s and %s\n", argv[i + 1], argv[i + 2]);
        add_node(flag_arg, matrix);
    }
    if (argv[i][1] == 'r') {
        matrix = create_rotation_matrix(atof(argv[i + 1]));
        printf("Rotation by a %s degree angle\n", argv[i + 1]);
        add_node(flag_arg, matrix);
    }
    if (argv[i][1] == 's') {
        matrix = create_reflection_matrix(atof(argv[i + 1]));
        printf("Reflection over an axis with an inclination angle of %s degrees\n", argv[i + 1]);
        add_node(flag_arg, matrix);
    } else {
        return 84;
    }
    return 0;
}

node_transfo_t parsing_arg(int argc, char **argv)
{
    node_transfo_t flag_arg;
    flag_arg = NULL;
    double **matrix = create_translation_matrix(3, 4);

    if (argc < 3) {
        printf("ERROR 84 : too few arguments\n");
        return NULL;
    }
    for (int i = 3; i != argc; i++) {
        if (argv[i][0] == '-') {
            is_arg_flag(&flag_arg, argv, i);
        }
    }
    return flag_arg;
}
