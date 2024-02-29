#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of the binary tree
 * @tree: the root of the tree
 * Return: the balance factor of the binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{ 	
	int l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left)
	{
		l = binary_tree_balance(tree->left);
		l++;
	}
	if (tree->right)
	{  
		r = binary_tree_balance(tree->right);
		r++;    
	}
	return (l - r);
	}
}
