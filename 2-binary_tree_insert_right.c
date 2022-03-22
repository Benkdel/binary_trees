#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_right - inserts node at right leg
 * @parent: pointer to the parent node
 * @value: value to be stored in node
 * Return: pointer to new node, or NULL if failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		temp_node = malloc(sizeof(binary_tree_t));
		if (temp_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp_node = parent->right;
		parent->right = new_node;
		new_node->right = temp_node;
		temp_node->parent = new_node;
		new_node->parent = parent;
	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = NULL;
	}
	return (new_node);
}