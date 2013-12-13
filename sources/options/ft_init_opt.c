/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_opt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 18:28:52 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 18:38:07 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ls.h"
#include <stdlib.h>
#include "libft.h"

t_opt	*ft_init_opt(void)
{
	t_opt	*opt;

	opt = (t_opt *)malloc(sizeof(t_opt));
	opt->a = 0;
	opt->t = 0;
	opt->r = 0;
	opt->rec = 0;
	opt->l = 0;
	return (opt);
}
