#include "binary_trees.h"

/**
* binary_tree_is_root - that checks if a node is a root
* @node: node to check
*
* Return: int
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	else
		return (0);
}
