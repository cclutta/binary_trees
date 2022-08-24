#include "binary_trees.h"

/**
* binary_tree_delete - that deletes an entire binary tree
* @tree: pointer to root node
* Return: void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *right, *left;
	if (tree)
	{
		if (tree->right || tree->left)
		{	
			right = tree->right;
			left = tree->left;
			free(right);
			free(left);
		}
	}
}
