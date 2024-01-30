#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that create a node in the right of the parent
 *
 * @parent: parameter that point to the parent of the root
 *
 * @value: parameter that define the value of the node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent != NULL)
	{
		NewNode->right = parent->right;
		parent->right = NewNode;
	}
	parent->right = NewNode;
	return (NewNode);
}
