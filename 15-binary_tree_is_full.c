#include "binary_trees.h"

/**
* binary_tree_is_full - this function checks if a tree node is gull.
* @tree: tree to be checked
* Return: 1 if tree is full else 0.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full;

	int right_full;

	int tree_full;

	if (tree == NULL)
	{
		return (0);
	}

	if ((*tree).right == NULL && (*tree).left == NULL)
	{
		return (1);
	}

	if ((*tree).left == NULL || (*tree).right == NULL)
	{
		return (0);
	}

	left_full = binary_tree_is_full((*tree).left);

	right_full = binary_tree_is_full((*tree).right);

	tree_full = left_full && right_full;
	return (tree_full);
}
