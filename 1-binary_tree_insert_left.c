#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: node to insert left_child
* @value: value to store in new node
*
* Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent)
	{
		new_node = binary_tree_node(parent, value);

		if (new_node)
		{
			if (parent->left)
			{
				new_node->left = parent->left;
				parent->left->parent = new_node;
			}
			parent->left = new_node;
		}

	}

	return (new_node);
}
