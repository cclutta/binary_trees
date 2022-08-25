#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node
* @node: node to find the sibling
*
* Return: pointer to node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->right && node->parent->left)
		return (node->parent->left);
	else if (node == node->parent->left && node->parent->right)
		return (node->parent->right);
	else
		return (NULL);

}
