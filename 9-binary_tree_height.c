#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the
 * height of a binary tree
 *
 * @tree: parameter that points to binary tree
 *
 * Return: -1 if tree is NULL, otherwise height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
	{
		return (-1);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->right != NULL && tree->left == NULL)
	{
		return (1);
	}
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return ((l_height > r_height ? l_height : r_height) + 1);
}
