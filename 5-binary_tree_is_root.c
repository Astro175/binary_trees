#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a node is root or not
 * @node: pointer to node to check
 * Return: Returns if node is root and 0, if it is not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
