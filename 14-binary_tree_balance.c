#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: pointer
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
	{
		return (0);
	}

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: pointer
 * Return: The balance factor of the tree, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
	{
		return (0);
	}

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height - right_height);
}
