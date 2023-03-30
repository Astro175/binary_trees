#include "binary_trees.h"

/**
 * binary_tree_postorder - function that transverses a tree using
 * postorder transversal
 * @tree: tree to transverse
 * @func: pointer to function that print node's data
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
