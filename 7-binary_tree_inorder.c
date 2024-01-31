#include "binary_trees.h"

/**
* binary_tree_inorder - this function uses a inorder traversal.
* @tree: this represnts the tree to be traversed.
* @func: this is a function pointer that represents a unction.
* Return: void.
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	if (func == NULL)
	{
		return;
	}

	binary_tree_inorder((*tree).left, func);
	func((*tree).n);
	binary_tree_inorder((*tree).right, func);
}
