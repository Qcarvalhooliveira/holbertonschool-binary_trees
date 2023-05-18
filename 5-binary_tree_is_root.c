#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root.
 * @node:is a pointer to the node to be checked.
 *
 * Return: 1 if node is a root, If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	else if (node->parent == NULL)
		return (1);

	else
		return (0);
}
