#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node at left of parent
 * @parent: pointer to the parent node
 * @value: value to be stored in node
 * Return: pointer to new node, or NULL if failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
		temp_node = parent->left;

	new_node->left = temp_node;
	parent->left = new_node;

	if (temp_node != NULL)
		temp_node->parent = new_node;

	return (new_node);
}
