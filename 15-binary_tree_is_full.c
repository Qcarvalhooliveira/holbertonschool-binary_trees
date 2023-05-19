#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right && tree->left)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	else if (tree->right || tree->left)
	{
		return (0);
	}
	else
	{
		return (1);
	}

}
