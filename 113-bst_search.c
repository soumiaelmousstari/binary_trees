#include "binary_trees.h"

/**
 * bst_search -Searces a value in binary tree
 * @tree: the node of the tree
 * @value: the search's value
 * Return: if tree==NULL or no value return (NULL), else (value's pointer)
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
