/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parkour.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 13:22:35 by npineau           #+#    #+#             */
/*   Updated: 2013/12/12 13:22:41 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls"

void	ft_parkour(t_btree *current, t_opt *opt)
{
	if (current->left != NULL)
		ft_parkour(curent->left, opt);
	ft_print(current->spec, opt);
	if (current->right != NULL)
		ft_parkour(curent->right);
}
