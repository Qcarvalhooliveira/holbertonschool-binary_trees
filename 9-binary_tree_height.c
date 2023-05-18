#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to traverse.
 *
 * Return: If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	int height_left = binary_tree_height(tree->left);
	int height_right = binary_tree_height(tree->right);

	return ((1) + (height_left > height_right ? height_left : height_right));
}
