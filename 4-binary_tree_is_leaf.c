#include "binary_trees.h"

/**
* binary_tree_is_leaf - this fnctin checs if a node is a leaf node.
* @node: node of the tree to be checked if it is a leaf.
* Return: 1 if leaf else 0.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	/*Check if the node is not attached to another.*/

	if ((*node).left == NULL && (*node).right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
