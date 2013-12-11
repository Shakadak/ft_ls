/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gather_options.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 16:09:51 by npineau           #+#    #+#             */
/*   Updated: 2013/12/11 16:27:06 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_ls.h"
#include "libft.h"

static int	ft_is_option(char c);

int			ft_gather_options(int argc, char **argv, t_opt *opt)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < argc && argv[i][0] == '-' && (k = strlen(argv[i])) > 1)
	{
		j = 1;
		while (j < k)
		{
			if (!ft_is_option(argv[i][j]))
			{
				ft_putstr("ls: illegal option -- ");
				ft_putendl(argv[i][j]);
				ft_putendl("usage: ls [-lRart] [file ...]");
				return (-1);
			}
			ft_put_option(argv[i][j], opt);
			j++;
		}
		i++;
	}
	return (i);
}

static int	ft_is_option(char c)
{
	return (c == 'l' || c == 'R' || c == 'a' || c == 'r' || c == 't');
}
