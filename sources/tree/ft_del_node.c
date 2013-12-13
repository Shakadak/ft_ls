/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 15:58:26 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 18:39:31 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_ls.h"

void	ft_del_node(t_btree **current)
{
	ft_del_ddata(&(*current)->spec);
	free(*current);
	*current = NULL;
}
