#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node of a tree
* @tree: pointer to the root node
*
* Return: size
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree)
	{
		while (tree->parent)
		{
			tree_depth++;
			tree = tree->parent;
		}
	}
	return (tree_depth);
}
