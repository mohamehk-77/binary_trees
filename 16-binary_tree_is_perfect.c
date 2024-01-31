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

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

/**
 * leaves - Checks if the leaves of the binary tree are at the same level.
 * @tree: A pointer
 * @current_node: The current level of the current leaf.
 * @level: The level of past leaves.
 *
 * Return: 1 if the leaves are at the same level, 0 otherwise.
 */
int leaves(const binary_tree_t *tree, int current_node, int *level)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
	{
		if (*level == 0)
		{
			*level = current_node;
			return (1);
		}
		return (*level == current_node);
	}

	return (leaves(tree->left, current_node + 1, level) &&
			leaves(tree->right, current_node + 1, level));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && (!binary_tree_balance(tree)))
	{
		return (leaves(tree, 0, &level));
	}

	return (0);
}
