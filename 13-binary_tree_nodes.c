#include "binary_trees.h"

/**
 * binary_tree_nodes -done nodes
 * @tree: the tree for doning the nodes
 * Return: if tree==NULL return 0, else return the nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t tree_nodes = 0;

	if (tree)
	{
		tree_nodes += (tree->left || tree->right) ? 1 : 0;
		tree_nodes += binary_tree_nodes(tree->left);
		tree_nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
