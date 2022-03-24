#include "binary_trees.h"

/**
 * get_nodes - computes the number of nodes other than leaves in a binary tree
 * @tree: pointer to the tree to be measuted
 * @leaves_counter: pointer to int counter of nodes
 * Return: size of the tree, 0 if tree is NULL
 */
void get_nodes(const binary_tree_t *tree, int *leaves_counter)
{
	if (tree == NULL)
		return;

	if (tree->left)
		get_nodes(tree->left, leaves_counter);
	if (tree->right)
		get_nodes(tree->right, leaves_counter);
	if (tree->left || tree->right)
		*(leaves_counter) += 1;
}

/**
 * binary_tree_nodes - wrapper for get nodes function
 * @tree: pointer to a binary tree
 * Return: number of leaves, or NULL if failed
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int l_counter = 0;

	if (tree == NULL)
		return (0);

	get_nodes(tree, &l_counter);

	return ((size_t)l_counter);
}
