#include "binary_trees.h"

/**
* binay_tree_depth - this function calculates the depth of a binary tree.
* @tree: this represents the tree whoose depth is to be known.
* Return: depth of the tree if not NULL else 0.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t bn_tree_depth;

	bn_tree_depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		bn_tree_depth++;
		tree = tree->parent;
	}

	return (bn_tree_depth);
}
