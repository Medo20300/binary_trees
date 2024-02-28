#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the node is leaf or not
 * @node: the node we want to check
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return 0;
	
	if (node->left || node->right)
		return 0;
	else
		return 1;

}
