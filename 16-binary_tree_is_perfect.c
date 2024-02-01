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
* binary_tree_is_perfect - tis function checks for a perfect tree.
* @tree: tree to be checked.
* Return: 1 if perfect else 0.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_node_h;

	size_t right_node_h;

	int tree_perfect;

	int tree_equal;

	int left_perf;

	int right_perf;

	if (tree == NULL)
	{
		return (0);
	}

	left_node_h = _height((*tree).left);

	right_node_h = _height((*tree).right);

	tree_equal = (left_node_h == right_node_h);

	left_perf = binary_tree_is_perfect((*tree).left);
	right_perf = binary_tree_is_perfect((*tree).right);
	tree_perfect = tree_equal && left_perf && right_perf;

	return (tree_perfect);
}
