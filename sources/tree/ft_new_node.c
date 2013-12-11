/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 19:18:41 by npineau           #+#    #+#             */
/*   Updated: 2013/12/11 19:21:33 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Create a new node, and allocate it and initialize every element to NULL.
** If the alloction fail, NULL is returned.
*/

t_btree	*ft_new_node(void)
{
	t_btree		*new;

	new = (t_btree *)malloc(sizeof(t_btree));
	if (!new)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->spec = NULL;
	return (new);
}
