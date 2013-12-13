/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 15:36:29 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 18:47:09 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <dirent.h>
#include "ft_ls.h"
#include <string.h>

t_btree	*ft_read_dir(char *path, t_opt *opt)
{
	DIR				*dirp;
	struct dirent	*dp;
	t_btree			*root;
	t_btree			*tmp;

	root = NULL;
	dirp = opendir(path);
	if (!dirp)
		ft_print_error(path);
	while ((dp = readdir(dirp)) != NULL)
	{
		tmp = ft_new_node();
		tmp->spec = ft_read_param(dp->d_name);
		root = ft_place_node(root, tmp, opt);
	}
	closedir(dirp);
	return (root);
}
