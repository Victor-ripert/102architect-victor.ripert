##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## make units tests
##

SRC =	main.c	\
	create_matrix/create_h_coor.c	\
	create_matrix/create_translation_matrix.c	\
	create_matrix/create_matrix.c	\
	create_matrix/create_scaling_matrix.c	\
	create_matrix/create_rotation_matrix.c	\
	create_matrix/create_reflection_matrix.c	\
	print_matrix/print_matrix.c	\
	print_matrix/print_h_coor.c	\
	print_matrix/print_coor_final.c	\
	multiply_matrix/multiply_matrix_vector.c	\
	multiply_matrix/multiply_matrix_matrix.c	\
	multiply_matrix/multiply_linked_list.c	\
	parsing/parsing_arg.c	\
	parsing/parsing_initial_vector.c	\
	parsing/add_node.c	\
	parsing/create_node.c	\
	parsing/print_node.c

NAME	=	bootstrap

CFLAGS += -g3 -iquote ./include

OBJ	=	$(SRC:.c=.o)

.PHONY = all re clean fclean

all:		$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -I./include -lm

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
