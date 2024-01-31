#include "binary_trees.h"

/**
* binary_tree_node - tis function creates a binary tree node.
* @parent: this represents the pointer to the root node.
* @value: this represents the value of the parent node.
* Return: on success, pointer to the new node is returned else NULL.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Dynamically allocate memory for the new binary tree node*/

	binary_tree_t *new_bt_node;

	new_bt_node = malloc(sizeof(binary_tree_t));

	/*Check for memory allocation failure.*/
	if (new_bt_node == NULL)
	{
		return (NULL);
	}


	(*new_bt_node).parent = parent;
	(*new_bt_node).n = value;
	(*new_bt_node).left = NULL;
	(*new_bt_node).right = NULL;

	return (new_bt_node);
}
