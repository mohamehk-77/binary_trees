#include "binary_trees.h"

/**
 * binary_tree_depth - function that count the depth of node
 *
 * @tree: parameter that point to binary tree
 *
 * Return: Depth Of The Node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
