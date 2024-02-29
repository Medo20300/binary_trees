#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of the binary tree
 * @tree: the root of the tree
 * Return: the balance factor of the binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, l = 0;
	
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return (l - r);
	}
}
