#include "binary_trees.h"

/**
* binary_tree_size - this function calculates the size of a binary tree.
* @tree: tree whoose size is to be known.
* Return: size of the binary tree if tree is not NULL.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_node_size;

	size_t right_node_size;

	size_t total_size;
	/*Check for existing tree.*/

	if (tree == NULL)
	{
		return (0);
	}

	left_node_size = binary_tree_size((*tree).left);

	right_node_size = binary_tree_size((*tree).right);

	total_size = left_node_size + 1 + right_node_size;

	/*(void)total_size*/

	return (total_size);
}

