#include "binary_trees.h"

/**
 * binary_tree_insert_right -In the right child insert a node
 * @parent: the node's pointer to insert ine the rghit child
 * @value: the new node's value
 * Return: NULL in the cases error or parent=NULL
 * the other cases a pointer to the new node
 * Description: If we are in the situation parent
 * has a right child , the new node
 * will take its place,
 * its right child take the value of the olde
 * right childe
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (parent == NULL)
		return (NULL);
	NewNode = binary_tree_node(parent, value);
	if (NewNode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		NewNode->right = parent->right;
		parent->right->parent = NewNode;
	}
	parent->right = NewNode;
	return (NewNode);
}
