#include "binary_trees.h"
#include <stdio.h>

/**
 * get_size - measures size of a binary tree
 * @tree: pointer to the tree to be measuted
 * Return: size of the tree, 0 if tree is NULL
 */
size_t get_size(const binary_tree_t *tree)
{
	size_t size_l = 1, size_r = 1;

	if (tree == NULL)
		return (0);

	size_l = tree->left ? 1 + get_size(tree->left) : 0;
	size_r = tree->right ? 1 + get_size(tree->right) : 0;

	return (size_l + size_r);
}

/**
 * binary_tree_size - wrapper for get size
 * @tree: pointer to the tree to be measuted
 * Return: size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t result = 1;

	result = get_size(tree);

	return (result + 1);
}
