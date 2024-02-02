#include "binary_trees.h"

/**
 * binary_tree_is_leaf -test if the node is a leaf
 * @node: the node's pointer to check
 * Return: if node is leaf:1
 * else: 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
