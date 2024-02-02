#include "binary_trees.h"

/**
 * binary_tree_depth -done the node's depth
 * @tree: the node's pointer to done its depth
 * Return: if tree==NULL return 0, else return depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
