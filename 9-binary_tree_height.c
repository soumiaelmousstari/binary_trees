#include "binary_trees.h"

/**
 * binary_tree_height -done the binary tree's height
 * @tree: the root to done the height
 * Return: if tree==NULL return 0 else return 1
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t x = 0, y = 0;

		x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		if (x > y)
			return (x);
		else
			return (y);
	}
	return (0);
}
