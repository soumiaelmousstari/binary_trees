#include "binary_trees.h"

/**
 * binary_tree_postorder -functin that print the elment in traverse post order
 * @tree: the tree's root node
 * @func: the call's function for node
 */
void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
