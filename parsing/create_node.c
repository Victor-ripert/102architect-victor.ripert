/*
** EPITECH PROJECT, 2024
** create_node
** File description:
** create node
*/
#include "architect.h"
#include <stdlib.h>

node_transfo_t create_node(void)
{
    node_transfo_t temp;

    temp = malloc(sizeof(transformation_t));
    temp->next = NULL;
    return temp;
}
