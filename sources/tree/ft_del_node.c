/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 15:58:26 by npineau           #+#    #+#             */
/*   Updated: 2013/12/12 15:58:28 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_ls.h"

void	ft_del_node(t_btree **current)
{
	if (current->spec != NULL)
	{
		if (current->spec->name)
			free(name);
		if (current->spec->dstat)
			free(dstat);
		free(spec);
	}
	free(*current);
	*current = NULL;
}
