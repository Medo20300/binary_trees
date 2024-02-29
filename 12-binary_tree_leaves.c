#include "binary_trees.h"
/**
 * binary_tree_leaves - function that return the number of leaves in tree
 * @tree: tree to check
 * Return: count of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0, l = 0, r = 0;
	
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
	{
	return (1);
	}
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		size = l + r;
	}
	return (size);
}
