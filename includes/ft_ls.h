/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 12:57:31 by npineau           #+#    #+#             */
/*   Updated: 2013/12/12 13:45:59 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LS_H
# define FT_LS_H

typedef struct	s_opt
{
	int			l;
	int			a;
	int			t;
	int			r;
	int			rev;
}				t_opt;

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

t_ddata	*ft_new_ddata(void);
int		ft_cpy_data(t_ddata *dest, char *src);
void	ft_del_ddata(t_ddata **trash);
int		ft_gather_options(int argc, char **argv, t_opt *opt);
void	ft_put_option(char c, t_opt *opt);
int		ft_tri(t_btree *current, t_btree *new, t_opt *opt);
t_btree	*ft_new_node(void);
t_btree	*ft_place_node(t_btree *current, t_btree *new, t_opt *opt);
void	ft_parkour(t_btree *current, t_opt *opt);
void	ft_rev_parkour(t_btree *current, t_opt *opt);

#endif
