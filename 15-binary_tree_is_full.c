#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is FULL
 * @tree: pointer to a binary tree
 * Return: 1 if tree is full, 0 if not or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
