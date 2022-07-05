#include "../ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmp)(void *, void *))
{
	t_btree	*new_btree;
	t_btree	*tmp;
	t_btree	*parent;

	new_btree = btree_create_node(item);
	tmp = *root;
	if (!tmp)
	{
		*root = new_btree;
		return ; 
	}
	while (tmp->left || tmp->right)
	{
		parent = tmp;
		if ((*cmp)(tmp->item, item) <= 0)
			tmp = tmp->right;
		else
			tmp = tmp->left;
		if ((*cmp)(parent->item, item) <= 0)
			parent->right = new_btree;
		else
			parent->left = new_btree;
	}
}