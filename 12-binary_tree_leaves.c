#include "binary_trees.h"

/**
 * get_leaves - computes the number of leaves in a binary tree
 * @tree: pointer to the tree to be measuted
 * Return: size of the tree, 0 if tree is NULL
 */
void get_leaves(const binary_tree_t *tree, int *leaves_counter)
{
	if (tree == NULL)
		return;

	if (tree->left)
		get_leaves(tree->left, leaves_counter);
	if (tree->right)
		get_leaves(tree->right, leaves_counter);

	if (!tree->left && !tree->right)
		*(leaves_counter) += 1;
}

/**
 * binary_tree_leaves - wrapper for get leaves function
 * @tree: pointer to a binary tree
 * Return: number of leaves, or NULL if failed
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int l_counter = 0;

	if (tree == NULL)
		return (0);

	get_leaves(tree, &l_counter);

	return ((size_t)l_counter);
}