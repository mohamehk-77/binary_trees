#include "binary_trees.h"
/**
 * binary_tree_is_leaf - func that  checks if a given node is a root
 * @node: pointer to the node to check
 * Return: 1 if the node is leaf , 0 if the node = null
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	binary_tree_is_leaf(node->left);
	binary_tree_is_leaf(node->right);

	if ((node->left == NULL) && (node->right == NULL))
	{
		return (1);
	}
	return (0);
}
