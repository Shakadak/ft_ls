# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/12 16:15:34 by npineau           #+#    #+#              #
#    Updated: 2013/12/13 17:45:58 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_ls

LIBFT = libft/libft.a

LIBH = libft/includes

SRC = $(DATA) \
	  $(OPTIONS) \
	  $(TREE) \
	  $(RENDERING) \
	  ft_ls.c

DATA = sources/data/ft_cpy_ddata.c \
	   sources/data/ft_del_ddata.c \
	   sources/data/ft_new_ddata.c

OPTIONS = sources/options/ft_gather_options.c \
		  sources/options/ft_init_opt.c \
		  sources/options/ft_put_option.c \
		  sources/options/ft_tri.c

TREE = sources/tree/ft_del_node.c \
	   sources/tree/ft_del_tree.c \
	   sources/tree/ft_new_node.c \
	   sources/tree/ft_place_node.c \
	   sources/tree/ft_parkour.c \
	   sources/tree/ft_rev_parkour.c

RENDERING = sources/rendering/ft_print.c \
			sources/rendering/ft_print_error.c \
			sources/rendering/ft_read_dir.c \
			sources/rendering/ft_read_param.c

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft fclean
	make -C libft all

$(NAME): $(OBJ)
	gcc -Wall -Wextra -Werror -o $(NAME) -L$(LIBFT) -I$(LIBH) -Iincludes $(OBJ)

%.o: %.c
	gcc -Wall -Wextra -Werror -c $(SRC) -I$(LIBH) -Iincludes
