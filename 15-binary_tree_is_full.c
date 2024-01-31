#include "binary_trees.h"
/**
 * binary_tree_is_full -  checks if a binary tree is full or not
 * @tree: pointer to the root node of the binary tree
 * Return: true if it's a full tree, false otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	/*if the node has no children ,it is a leaf , full*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/*if the tree has no child ,the tree not full*/
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	/*recursively check both sub-trees*/
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}