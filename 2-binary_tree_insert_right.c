#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to parent of node created.
 * @value: integer stored in new node.
 *
 * Return:pointer to the created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == 0)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == 0)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
		new_node->left = NULL;
		parent->right = new_node;
	}
	return (new_node);
}
