#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at
 * least 1 child in a binary tree
 *
 * @tree: parameter that point to  the root node of
 * the tree to count the number of nodes
 *
 * Return: the node that have at least 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->right != NULL || tree->left != NULL)
	{
		return (binary_tree_nodes(tree->left) +  1 + binary_tree_nodes(tree->right));
	}
	else
	{
		return (0);
	}
}

