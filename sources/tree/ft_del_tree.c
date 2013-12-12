#include "ft_ls.h"

void	ft_del_tree(t_btree **current)
{
	if (*current->left)
		ft_del_tree(current->left);
	if (*current->right)
		ft_del_tree(current->right);
	ft_del_node(current);
}
