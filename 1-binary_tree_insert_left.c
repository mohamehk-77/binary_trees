#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert a node in the left of the node
 *
 * @parent: parameter that point to the parent of the node
 *
 * @value: Parameter that define the value of the node of the left
 *
 * Return: The node in the left
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	NewNode = binary_tree_node(parent, value);
	if (NewNode == NULL)
	{
		return (NULL);
	}
	if (parent-> left != NULL)
	{
		NewNode->left = parent->left;
		parent->left->parent = NewNode;
	}
	parent->left = NewNode;
	return (NewNode);
}
