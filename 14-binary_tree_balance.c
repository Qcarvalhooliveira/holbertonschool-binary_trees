#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	height_left = binary_tree_balance(tree->left);
	height_right = binary_tree_balance(tree->right);

	return (height_left - height_right);
}
