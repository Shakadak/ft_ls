/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_param.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 15:23:49 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 18:48:27 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ls.h"
#include <sys/stat.h>

/*
** Read the parameter, store its stats and return the resulting structure.
*/

t_ddata	*ft_read_param(char *path)
{
	t_ddata	*spec;

	spec = ft_new_ddata();
	spec->name = path;
	stat(path, spec->dstat);
	return (spec);
}
