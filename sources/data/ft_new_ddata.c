/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_ddata.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 12:48:40 by npineau           #+#    #+#             */
/*   Updated: 2013/12/11 12:49:24 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ls.h"

/*
** ft_new_data allocate a structure ddata and allocate inside dstat. name is
** initialized at NULL.
*/

t_ddata	*ft_new_ddata(void)
{
	t_ddata	*new;

	new = (t_ddata)malloc(sizeof(t_ddata));
	if (!new)
		return (NULL);
	new->name = NULL;
	new->dstat = (struct stat)malloc(sizeof(struct stat));
	if (!new->dstat)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
