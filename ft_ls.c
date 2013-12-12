/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 19:02:40 by npineau           #+#    #+#             */
/*   Updated: 2013/12/12 19:02:42 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls"

int	main(int argc, char **argv)
{
	t_opt	opt*;
	int		i;

	opt = ft_init_opt(opt);
	if (argc > 1)
		i = ft_gather_options(argc, argv, opt);
	if (argc == 1)
	{
		lelelelelel
			i = 0;
		argv[i] = ".";
	}
	ft_read_dir(i, argc, argv);
	return (0);
}
