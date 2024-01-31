#include "binary_trees.h"

/**
* binary_tree_insert_right - this function inserts a new node at the right of
*  another node in a binary tree.
* @parent: this parent represnts the root node.
* @value: this represents the value to be inserted in the node.
* Return: on succes, pointer to the new node is returned esle NULL.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	/*create a new tree node*/
	new_bt_node = binary_tree_node(parent, value);

	if (new_bt_node == NULL)
	{
		return (NULL);
	}

	if ((*parent).right != NULL)
	{
		(*new_bt_node).right = (*parent).right;
		(*new_bt_node).right->parent = new_bt_node;
	}

	(*parent).right = new_bt_node;

	return (new_bt_node);
}
