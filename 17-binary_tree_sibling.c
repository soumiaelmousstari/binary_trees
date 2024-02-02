#include "binary_trees.h"

/**
 * binary_tree_sibling -finds a node's sibling
 * @node: the node to find its sibling
 * Return: if node==NULL || sibling return (NULL) else return (the sibling)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
