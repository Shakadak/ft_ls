/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_ddata.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 12:57:47 by npineau           #+#    #+#             */
/*   Updated: 2013/12/11 12:58:59 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ls.h"

void	ft_del_ddata(t_ddata **trash)
{
	if (!trash)
		return;
	if (name)
		free(name);
	if (dstat)
		free(stat);
	free(*trash);
	*trash = NULL;
}
