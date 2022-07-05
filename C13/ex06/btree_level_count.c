#include "../ft_btree.h"

int	btree_level_count(t_btree *root)
{
	t_btree	*current;

	current = root;
	if (current)
	{
		if (current->left && current->right 
			&& btree_level_count(root->left) >= btree_level_count(root->right))
			return (1 + btree_level_count(root->left));
		else if (current->left && current->right
			&& btree_level_count(root->left) < btree_level_count(root->right))
			return (1 + btree_level_count(root->right));
		else if (current->left)
			return (1 + btree_level_count(root->left));
		else if (current->right)
			return (1 + btree_level_count(root->right));
		else
			return (1);
	}
	return (0);
}
