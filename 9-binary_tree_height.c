#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to traverse.
 *
 * Return: If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;
	size_t max_height;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	max_height = ((height_left > height_right) ? height_left : height_right);

	return (1 + max_height);
}
