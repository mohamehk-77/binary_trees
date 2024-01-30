#include "binary_trees.h"

/**
 * binary_tree_postorder - function goes through a binary
 * tree using in-order traversal
 *
 * @tree: parameter that point to binary tree
 *
 * @func: parameter that point to func call
 *
 * Return: Do nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
    binary_tree_postorder(tree->right, func);
	binary_tree_postorder(tree->left, func);
	func(tree->n);
}
