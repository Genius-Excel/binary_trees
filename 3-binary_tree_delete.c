#include "binary_trees.h"

/**
* binary_tree_delete - this function deletes the entire node in a tree.
* @tree: pointer to the binary tree to be deleted.
* Return: None.
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	/*Deletes all the nodes form the left branch*/
	binary_tree_delete((*tree).left);

	/*Deletes all the nodes from the right branch.*/
	binary_tree_delete((*tree).right);

	free(tree);
}
