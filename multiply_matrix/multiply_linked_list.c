/*
** EPITECH PROJECT, 2024
** creata_matrix.c
** File description:
** create matrix and return pointer
*/
#include  "architect.h"
#include <stdio.h>
#include <stdlib.h>

double **multiply_linked_list(node_transfo_t head)
{
    node_transfo_t temp = create_node();
    double **matrix = create_matrix();
    int count = 0;

    temp = head;
    matrix = temp->matrix;
    temp = temp->next;
    while (temp != NULL) {
        matrix = multiply_matrix_matrix(matrix, temp->matrix);
        temp = temp->next;
    }
    return matrix;
}
