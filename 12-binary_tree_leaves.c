#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the
 * leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to
 * count the number of leaves
 *
 * Return: The number of leaves in the tree or -1 if the tree is empty
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

