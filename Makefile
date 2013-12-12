# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/12 16:15:34 by npineau           #+#    #+#              #
#    Updated: 2013/12/12 16:49:16 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_ls

LIBFT = libft/libft.a

SRC = sources/data/$(DATA) \
	  sources/options/$(OPTIONS) \
	  sources/tree/$(TREE)

DATA = ft_cpy_ddata.c \
	   ft_del_ddata.c \
	   ft_new_ddata.c

OPTIONS = ft_gather_options.c \
		  ft_print.c \
		  ft_put_option.c \
		  ft_tri.c

TREE = ft_del_node.c \
	   ft_del_tree.c \
	   ft_new_node.c \
	   ft_place_node.c \
	   ft_parkour.c \
	   ft_rev_parkour.c

all: $(LIBFT)

$(LIBFT):
	make -C libft fclean
	make _C libft all
