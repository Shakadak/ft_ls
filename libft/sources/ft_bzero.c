/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:44:42 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:59:27 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *src, size_t length)
{
	unsigned char	*dest;

	dest = (unsigned char *)src;
	if (src && length)
	{
		while (length > 0)
		{
			dest[length - 1] = 0;
			length--;
		}
	}
}
