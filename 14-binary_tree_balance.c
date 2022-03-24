#include "binary_trees.h"

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

	bf_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	bf_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (bf_l - bf_r);
}
