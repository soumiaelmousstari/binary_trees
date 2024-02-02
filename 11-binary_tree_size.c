#include "binary_trees.h"

/**
 * binary_tree_size -done the the binary tree's size
 * @tree: the binary tree for doning its size
 * Return: the tree's size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if (tree)
	{
		tree_size += 1;
		tree_size += binary_tree_size(tree->left);
		tree_size += binary_tree_size(tree->right);
	}
	return (tree_size);
}
