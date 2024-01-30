#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the
 * height of a binary tree
 *
 * @tree: parameter that points to binary tree
 *
 * Return: -1 if tree is NULL, otherwise height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

    if (tree == NULL)
    {
        return 0;
    }

    l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    return (l_height > r_height) ? l_height : r_height;
}

