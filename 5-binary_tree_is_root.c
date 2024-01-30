#include "binary_trees.h"
/**
 * binary_tree_is_root - func  that checks if a node is the root of its tree
 * @node: pointer to the node to be checked
 * Return: true if it's the root, false otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	binary_tree_is_root(node->left);
	binary_tree_is_root(node->right);

	if ((node->left != NULL && node->right != NULL) || !node->parent)
	{
		return (1);
	}
	return (0);
}
