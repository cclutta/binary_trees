#include "binary_trees.h"

/**
* binary_tree_insert_right- inserts a node as the right-child of another node
* @parent: node to insert left_child
* @value: value to store in new node
*
* Return: new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent)
	{
		new_node = binary_tree_node(parent, value);

		if (new_node)
		{
			if (parent->right)
			{
				new_node->right = parent->right;
				parent->right->parent = new_node;
			}
			parent->right = new_node;
		}
	}


	return (new_node);
}
