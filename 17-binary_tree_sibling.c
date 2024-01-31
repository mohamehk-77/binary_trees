#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: A pointer to the sibling node, or NULL if node is NULL,
 *         the parent is NULL, or the node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	/* If there are more than two children */
	if (node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
