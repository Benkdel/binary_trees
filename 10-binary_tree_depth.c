#include "binary_trees.h"

/**
 * binary_tree_depth - wrapper function to call node_depth recursively
 * @tree: pointer to the node to be measured
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		result++;
		tree = tree->parent;
	}

	return (result);
}
