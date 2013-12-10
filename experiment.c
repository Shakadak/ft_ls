/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   experiment.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 16:58:11 by npineau           #+#    #+#             */
/*   Updated: 2013/12/10 19:13:37 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DIRENT_H
# define DIRENT_H
# include <dirent.h>
#endif
#include "libft.h"

typedef struct		s_tree
{
	struct dirent	*spec;
	struct s_tree	*left;
	struct s_tree	*right;
}					t_tree;

int				main(int argc, char **argv)
{
	DIR				*dirp;
	struct dirent	*dp;
	t_tree			*root;

	dp = NULL;
	root = NULL;
	if (argc != 2)
		return (-1);
	dirp = opendir(argv[1]);
	if (!dirp)
	{
		ft_putstr("Couldn't open :");
		ft_putendl(argv[1]);
		return (-1);
	}
	while((dp = readdir(dirp)) != NULL)
}

static t_tree	*ft_new_node(const struct dirent *src
