/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   experiment.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 16:58:11 by npineau           #+#    #+#             */
/*   Updated: 2013/12/11 12:04:05 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DIRENT_H
# define DIRENT_H
# include <dirent.h>
#endif
#include "libft.h"

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

static t_btree	*ft_cpy_node(t_btree *new, struct dirent *src)
{
	new->spec = (struct dirent *)malloc(sizeof(src));
	if (!new->spec)
	{
		free(new);
		return (NULL);
	}
	tmp = ft_cpy_dirent(src);
	if (!tmp)
	{
		free(new->spec);
		free(new);
		return (NULL);
	}
	new->spec = tmp;
	return (new);
}
