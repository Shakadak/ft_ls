/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 12:57:31 by npineau           #+#    #+#             */
/*   Updated: 2013/12/11 13:12:59 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LS_H
# define FT_LS_H

typedef struct		s_ddata
{
	char			*name;
	struct stat		*dstat;
}					t_ddata;

typedef struct		s_btree
{
	t_ddata			*spec;
	struct s_tree	*left;
	struct s_tree	*right;
}					t_btree;

#endif
