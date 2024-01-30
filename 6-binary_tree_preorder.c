#include "binary_trees.h"
/**
 * binary_tree_preorder - Performs a pre-order traversal of the tree rooted at node
 * @tree: pointer The binary tree to traverse
 * @func: pointer to func call
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check for empty tree or function pointer */
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
