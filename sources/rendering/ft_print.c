/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 15:40:23 by npineau           #+#    #+#             */
/*   Updated: 2013/12/12 15:40:26 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls"
#include "libft.h"

void	ft_print(t_ddata *spec, t_opt *opt)
{
	if (!opt->a && spec->name[0] == '.')
		return;
	ft_putendl(spec->name);
}
