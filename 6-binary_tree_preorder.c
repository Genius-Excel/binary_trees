#include "binary_trees.h"

/**
* binary_tree_preorder - this function uses a pre-order traversal.
* @tree: this represnts the tree to be traversed.
* @func: this is a function pointer that represents a unction.
* Return: void.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	if (func == NULL)
	{
		return;
	}

	func((*tree).n);
	binary_tree_preorder((*tree).left, func);
	binary_tree_preorder((*tree).right, func);
}
