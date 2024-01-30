#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_node - function that create a node
 *
 * @parent: parameter that point to parent node
 *
 * @value: parameter that define the value of the new root
 *
 * Return: Will be NewNode
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = malloc(sizeof(binary_tree_t));

	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return (NewNode);
}

