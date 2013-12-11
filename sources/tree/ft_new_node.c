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
