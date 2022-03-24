#include "binary_trees.h"

/**
 * get_height - Measures the height of a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */
size_t get_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + get_height(tree->left) : 0;
	height_r = tree->right ? 1 + get_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to a binary tree
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bf_l = 0, bf_r = 0;

	if (!tree)
		return (0);

	bf_l = tree->left ? 1 + get_height(tree->left) : 0;
	bf_r = tree->right ? 1 + get_height(tree->right) : 0;

	return (bf_l - bf_r);
}
