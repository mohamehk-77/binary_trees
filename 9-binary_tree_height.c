#include "binary_trees.h"

/**
 * 
 * 
 * 
 * 
 * 
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t l_height;
    size_t r_height;

    if (NULL == tree)
    {
        return (0);
    }
    l_height = binary_tree_height(tree->left);
    r_height = binary_tree_height(tree->right);

    return(l_height > r_height ? l_height : r_height) + 1;
}