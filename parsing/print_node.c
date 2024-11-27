/*
** EPITECH PROJECT, 2024
** print_node
** File description:
** print node
*/
#include <stdlib.h>
#include "architect.h"
#include <stdio.h>

void print_node(node_transfo_t file)
{
    node_transfo_t temp;

    temp = file;
    while (temp != NULL) {
        print_matrix(temp->matrix);
        temp = temp->next;
    }
}
