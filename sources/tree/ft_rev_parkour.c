/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_parkour.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 13:24:55 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 18:50:25 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "ft_ls.h"

void	ft_rev_parkour(t_btree *current, t_opt *opt)
{
	if (current->right != NULL)
		ft_parkour(current->right, opt);
	ft_print(current->spec, opt);
	if (current->left != NULL)
		ft_parkour(current->left, opt);
}
