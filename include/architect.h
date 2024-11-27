/*
** EPITECH PROJECT, 2024
** architect.c
** File description:
** header file for 102 architect project
*/

#ifndef ARCHITECT_H
    #define ARCHITECT_H
double **create_h_coor(double x, double y);
double **create_translation_matrix(double i, double j);
void print_h_coor(double **coordinate);
double **create_scaling_matrix(double m, double n);
double **create_matrix(void);
void print_matrix(double **matrix);
double **create_rotation_matrix(double teta);
double **create_reflection_matrix(double teta);
double **multiply_matrix_vector(double **matrix, double **vector);
double **multiply_matrix_matrix(double **first_matrix, double **second_matrix);
void print_coor_final(double **coordinate, double **final_coordinate);
typedef struct transformation_s {
    double **matrix;
    struct transformation_s *next;
} transformation_t;
typedef transformation_t *node_transfo_t;
node_transfo_t create_node(void);
void add_node(node_transfo_t *head, double **matrix);
void print_node(node_transfo_t file);
int is_arg_flag(node_transfo_t *flag_arg, char **argv, int i);
node_transfo_t parsing_arg(int argc, char **argv);
double **multiply_linked_list(node_transfo_t head);
double **parsing_initial_vector(int argc, char **argv);
#endif /* ARCHITECT_H */
