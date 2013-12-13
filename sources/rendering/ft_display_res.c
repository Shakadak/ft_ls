/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_res.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 18:57:55 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 19:13:58 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_display_res(t_btree *root, t_opt *opt)
{
	if (opt->r)
		ft_rev_parkour(root, opt);
	else
		ft_parkour(root, opt);
}
