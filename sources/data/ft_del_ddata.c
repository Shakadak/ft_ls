/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_ddata.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 12:57:47 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 18:29:53 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ls.h"
#include <stdlib.h>

void	ft_del_ddata(t_ddata **trash)
{
	if (!trash)
		return;
	if ((*trash)->name)
		free((*trash)->name);
	if ((*trash)->dstat)
		free((*trash)->dstat);
	free(*trash);
	*trash = NULL;
}
