#include "../ft_btree.h"

s_btree	*btree_create_node(void *item)
{
	t_btree *btree;

	btree = (t_btree)malloc(sizeof(t_btree));
	if (!btree)
		return (NULL);
	btree->item = item;
	btree->left = NULL;
	btree->right = NULL;
	return (btree);
}

//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//#include <stdio.h>
//
// int main()
// {
//     /*create root*/
//     t_btree *root = btree_create_node(1);
//     /* following is the tree after above statement
//          1
//         / \
//       NULL NULL
//     */
//     root->left = btree_create_node(2);
//     root->right = btree_create_node3);
//     /* 2 and 3 become left and right children of 1
//             1
//          /    \
//         2      3
//       /  \    /  \
//    NULL NULL NULL NULL
//     */
 
//     root->left->left = btree_create_node(4);
//     /* 4 becomes left child of 2
//              1
//          /    \
//         2      3
//       /  \    /  \
//      4 NULL NULL NULL
//     / \
//  NULL NULL
//     */
//     getchar();
//     return 0;
// }