#include "binary_trees.h"

/**
* binary_tree_inorder - es through a binary tree using inorder
* @tree: pointer to root node
* @func: pointer to a function
*
* Return: void
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
{
	if (tree && func)
	{
		
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}