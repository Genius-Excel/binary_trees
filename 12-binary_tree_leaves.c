#include "binary_trees.h"

/**
* binary_tree_leaves - this function calculates e number of leaves in a tree.
* @tree: this reperesents the tree whoose leaves is to be known.
* Return: the number of leaves present if tree is not NULL.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_counter;

	size_t left_leaves;

	size_t right_leaves;
	/*check for tree existence.*/
	if (tree == NULL)
	{
		return (0);
	}

	leaves_counter = 0;

	if ((*tree).left == NULL || (*tree).right == NULL)
	{
		return (1);
	}

	left_leaves = binary_tree_leaves((*tree).left);

	right_leaves = binary_tree_leaves((*tree).right);

	leaves_counter = left_leaves + right_leaves;
	return (leaves_counter);
}
