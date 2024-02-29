#include "binary_trees.h"
/**
 * binary_tree_depth - calculate the depth of the passed node
 * @tree: the node
 * Return: the depth of the passed node or NULL if the tree is null
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i;

	if (tree == NULL)
		return 0
	for (i = 0; tree->parent != NULL; i++)
	{
		tree = tree->parent;
	}
	return (i);
}
