#include "binary_trees.h"

/**
 * _height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}


/**
* binary_tree_balance - this function checks for a tree balance.
* @tree: this represents whoose tree balance to be checked,
* Return: the difference between left and right nodes if tree is not NULL.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_node_height;

	size_t right_node_height;

	int tree_node_balance;

	if (tree == NULL)
	{
		return (0);
	}

	left_node_height = _height((*tree).left);

	right_node_height = _height((*tree).right);

	tree_node_balance = left_node_height - right_node_height;

	return (tree_node_balance);
}
