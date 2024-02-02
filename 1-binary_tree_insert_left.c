#include "binary_trees.h"

/**
 * binary_tree_insert_left -In left child of another binary tree insert a node
 * @parent: tne left child's node to insert
 * @value: the new node's value
 * Return: NULL: in error cases or parent=NULL
 * in the other cases the new node's pointer
 * Description: the new node will take the place
 * of the olde left childe if parent has  a left child
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (parent == NULL)
		return (NULL);
	NewNode = binary_tree_node(parent, value);
	if (NewNode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		NewNode->left = parent->left;
		parent->left->parent = NewNode;
	}
	parent->left = NewNode;
	return (NewNode);
}
