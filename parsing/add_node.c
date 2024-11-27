/*
** EPITECH PROJECT, 2024
** add_node
** File description:
** add_node
*/
#include <stdlib.h>
#include "architect.h"

void add_node(node_transfo_t *head, double **matrix_value)
{
    node_transfo_t temp = create_node();

    temp->matrix = matrix_value;
    temp->next = *head;
    *head = temp;
}
