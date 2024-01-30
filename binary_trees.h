#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
<<<<<<< HEAD
int binary_tree_is_root(const binary_tree_t *node);
=======
size_t binary_tree_depth(const binary_tree_t *tree);
<<<<<<< HEAD
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

#endif
=======
>>>>>>> 5406dc9dd4f310b6381155f8d99ad5348d9b5641
#endif /* _BINARY_TREES_H_ */
>>>>>>> 5eb1f845a28a4dd646fc695112a8b78f10dc4d0f
