#include "binary_trees.h"

/**
* binary_tree_nodes - this fnction counts the binary tree nodes.
* wth at least one child.
* @tree: tree whoose node is to be counted,
* Return: the number of nodes if tree is not NULL.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes;

	size_t right_nodes;

	size_t total_nodes;

	if (tree == NULL)
	{
		return (0);
	}

	left_nodes = binary_tree_nodes((*tree).left);

	right_nodes = binary_tree_nodes((*tree).right);

	total_nodes = left_nodes + 1 + right_nodes;

	if ((*tree).left != NULL || (*tree).right != NULL)
	{
		return (total_nodes);
	}
	else
	{
		return (0);
	}
}
