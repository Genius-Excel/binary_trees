#include "binary_trees.h"

/**
* binary_tree_insert_left - this function inserts a new node s the left child
		             of another node in a binary tree.
* @parent: tis represents the parent or root node.
* @value: this reperesnts the value to  be set in the node.
* Return: on success, pointer to the new node is returned else NULL/
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/*Dynamically allocate memeory for the new node structure*/
	binary_tree_t *new_bt_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_bt_node = binary_tree_node(parent, value);

	if (new_bt_node == NULL)
	{
		return (NULL);
	}

	if ((*parent).left != NULL)
	{
		(*new_bt_node).left = (*parent).left;
		(*new_bt_node).left->parent = new_bt_node;
	}

	(*parent).left = new_bt_node;

	return (new_bt_node);
}
