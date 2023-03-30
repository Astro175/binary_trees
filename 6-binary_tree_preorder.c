#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that traverses a node with preorder
 * @tree: tree/node to tranverse
 * @func: function pointer to print the data
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->right, func);
	binary_tree_preorder(tree->left, func);
}
