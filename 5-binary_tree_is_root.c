#include "binary_trees.h"

/**
 * binary_tree_is_root -analyse if node is root
 * @node: the node's pointer to check
 * Return: node is root:1 else: 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
