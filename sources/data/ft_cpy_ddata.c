/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy_ddata.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 12:12:07 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 18:23:49 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ls.h"
#include "libft.h"
#include <sys/stat.h>

t_ddata	*ft_cpy_data(t_ddata *dest, char *src)
{
	int	ret;

	dest->name = ft_strdup(src);
	if (!dest->name)
	{
		ft_del_ddata(&dest);
		return (NULL);
	}
	ret = stat(dest->name, dest->dstat);
	if (ret == -1)
	{
		ft_print_error(dest->name);
		ft_del_ddata(&dest);
		return (NULL);
	}
	return (dest);
}
