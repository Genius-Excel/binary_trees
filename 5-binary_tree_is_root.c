#include "binary_trees.h"

/**
* binary_tree_is_root - this function checks if a tree has no child nodes.
* @node: this reperesnts the node to be checked.
* Return: 1 if node is root esle 0.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}


	if ((*node).parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
