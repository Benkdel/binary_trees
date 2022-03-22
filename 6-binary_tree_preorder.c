#include "binary_trees.h"

/**
 * void print_num - Prints a number
 * @n: number to be printed
 * Return: none - void function
 */
void print_num(int n)
{
	printf("%d\n", n);
}

/**
 * void binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to a binary trree
 * @func: pointer to a function to be aplied for each node
 * Return: none - void function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
