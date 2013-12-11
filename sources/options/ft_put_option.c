/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_option.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 18:20:21 by npineau           #+#    #+#             */
/*   Updated: 2013/12/11 18:20:57 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ls.h"

void	ft_put_option(char c, t_opt *opt)
{
	if (c == 'l')
		opt->l = 1;
	else if (c == 'a')
		opt->a == 1;
	else if (c == 'r')
		opt->r = 1;
	else if (c == 't')
		opt->c = 1;
	else if (c == 'R')
		opt->rec = 1;
}
