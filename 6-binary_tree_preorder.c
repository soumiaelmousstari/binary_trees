#include "binary_trees.h"

/**
 * binary_tree_preorder -this function print element using pre order
 * @tree: the root node's pointer
 * @func: the function's pointer for calling each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
