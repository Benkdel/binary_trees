#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node at right leg
 * @parent: pointer to the parent node
 * @value: value to be stored in node
 * Return: pointer to new node, or NULL if failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
		temp_node = parent->right;

	new_node->right = temp_node;
	parent->right = new_node;

	if (temp_node != NULL)
		temp_node->parent = new_node;

	return (new_node);
}
