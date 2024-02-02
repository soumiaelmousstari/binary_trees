#include "binary_trees.h"

/**
 * binary_tree_node -I will create a binary tree node
 * @parent: The parent of the tree node I create
 * @value: the new node's value
 * Return: tne new node's pointer
 *         NULL in error cases
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = malloc(sizeof(binary_tree_t));
	if (NewNode == NULL)
		return (NULL);
	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return (NewNode);
}
