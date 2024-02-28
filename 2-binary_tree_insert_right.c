#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: the parent of the node which we want to insert into there right
 * @value: the value of the node we will insert
 * Return: NULL if it fails or the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{ 
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
