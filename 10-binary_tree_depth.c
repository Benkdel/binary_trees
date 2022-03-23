#include "binary_trees.h"

/**
 * node_depth - measures depth of node
 * @tree: pointer to the node to be measured
 * @target_node: value of node to be measured, to be identified
 * Return: depth of node
 */
size_t node_depth(const binary_tree_t *tree, int target_node)
{
	size_t result = 0;

	(void)result;
	(void)tree;
	(void)target_node;

	return (1);
}

/**
 * binary_tree_depth - wrapper function to call node_depth recursively
 * @tree: pointer to the node to be measured
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (node_depth(tree, tree->n));
}
