#include "binary_trees.h"

/**
 * binary_tree_uncle -finds the node's uncle
 * @node: the node to find its uncle
 * Return: if node == NULL || no uncle return (NULL) else return (uncle)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
