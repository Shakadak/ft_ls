/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 11:39:43 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 18:37:16 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ls.h"
#include "libft.h"

int	ft_tri(t_btree *current, t_btree *new, t_opt *opt)
{
	time_t	ctime;
	time_t	ntime;

	if (opt->t)
	{
		ctime = current->spec->dstat->st_mtime;
		ntime = new->spec->dstat->st_mtime;
		return (ctime - ntime);
	}
	return (ft_strcmp(new->spec->name, current->spec->name));
}
