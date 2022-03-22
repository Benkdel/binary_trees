#include "binary_trees.h"

/**
 * void binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to a binary trree
 * @func: pointer to a function to be aplied for each node
 * Return: none - void function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	
	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
