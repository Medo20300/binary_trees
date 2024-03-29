#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to calculate
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to calculate its bf
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0, bf = 0;

	if (tree)
	{
		l = ((int)binary_tree_height_b(tree->left));
		r = ((int)binary_tree_height_b(tree->right));
		bf = l - r;
	}
	return (bf);
}
