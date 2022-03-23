#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree->left != NULL)
		return (binary_tree_height(tree->left) + 1);
	if (tree->right != NULL)
		return (binary_tree_height(tree->right) + 1);

	return (0);
}
