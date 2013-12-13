/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/11 12:57:31 by npineau           #+#    #+#             */
/*   Updated: 2013/12/13 19:13:54 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LS_H
# define FT_LS_H
# include <sys/stat.h>

typedef struct	s_opt
{
	int			l;
	int			a;
	int			t;
	int			r;
	int			rec;
}				t_opt;

typedef struct		s_ddata
{
	char			*name;
	struct stat		*dstat;
}					t_ddata;

typedef struct		s_btree
{
	t_ddata			*spec;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

t_ddata	*ft_new_ddata(void);
t_ddata	*ft_cpy_data(t_ddata *dest, char *src);
void	ft_del_ddata(t_ddata **trash);

int		ft_gather_options(int argc, char **argv, t_opt *opt);
void	ft_put_option(char c, t_opt *opt);
int		ft_tri(t_btree *current, t_btree *new, t_opt *opt);
t_opt	*ft_init_opt(void);

void	ft_print(t_ddata *spec, t_opt *opt);
void	ft_print_error(char *path);
t_btree	*ft_read_dir(char *path, t_opt *opt);
t_ddata	*ft_read_param(char *path);
void	ft_diisplay_res(t_btree *root, t_opt *opt);

t_btree	*ft_new_node(void);
t_btree	*ft_place_node(t_btree *current, t_btree *new, t_opt *opt);
void	ft_parkour(t_btree *current, t_opt *opt);
void	ft_rev_parkour(t_btree *current, t_opt *opt);
void	ft_del_node(t_btree **current);
void	ft_del_tree(t_btree **current);

#endif /* !FT_LS_H */
