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
	{
		temp_node = malloc(sizeof(binary_tree_t));
		if (temp_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp_node = parent->left;
		parent->left = new_node;
		new_node->left = temp_node;
		temp_node->parent = new_node;
		new_node->parent = parent;
	}
	else
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
	}
	return (new_node);
}
