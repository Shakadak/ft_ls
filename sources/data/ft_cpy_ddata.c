/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy_ddata.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 12:12:07 by npineau           #+#    #+#             */
/*   Updated: 2013/12/11 13:11:39 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ls.h"

int	ft_cpy_data(t_ddata *dest, char *src)
{
	int	ret;

	dest->name = ft_strdup(src);
	if (!dest->name)
	{
		ft_del_ddata(&dest);
		return (-1);
	}
	ret = stat();
	if (ret == -1)
	{
		ft_print_errno(name, dstat);
		ft_del_ddata(&dest);
		return (-1);
	}
	return (new);
}
