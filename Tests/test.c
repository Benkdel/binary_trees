#include "../binary_trees.h"

/**
 * test - testing entry point
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	binary_tree_t *root;
	unsigned int n_task = 0;
	int ret;

	(void)root;
	(void)argc;
	(void)argv;
	(void)ret;

	if (argc != 2)
	{
		printf("Please enter the number of task to execute\n");
		return (0);
	}

	n_task = atoi(argv[1]);
	printf("Task to be executed %i\n", n_task);
	switch (n_task)
	{
	case 0:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->left->left = binary_tree_node(root->left, 6);
		root->left->right = binary_tree_node(root->left, 16);
		root->right = binary_tree_node(root, 402);
		root->right->left = binary_tree_node(root->right, 256);
		root->right->right = binary_tree_node(root->right, 512);
		binary_tree_print(root);
		break;

	case 1:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_print(root);
		printf("\n");
		binary_tree_insert_left(root->right, 128);
		binary_tree_insert_left(root, 54);
		binary_tree_print(root);
		break;

	case 2:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_print(root);
		printf("\n");
		binary_tree_insert_right(root->left, 54);
		binary_tree_insert_right(root, 128);
		binary_tree_print(root);
		break;

	case 3:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_insert_right(root->left, 54);
		binary_tree_insert_right(root, 128);
		binary_tree_print(root);
		binary_tree_delete(root);
		break;

	case 4:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_insert_right(root->left, 54);
		binary_tree_insert_right(root, 128);
		binary_tree_print(root);

		ret = binary_tree_is_leaf(root);
		printf("Is %d a leaf: %d\n", root->n, ret);
		ret = binary_tree_is_leaf(root->right);
		printf("Is %d a leaf: %d\n", root->right->n, ret);
		ret = binary_tree_is_leaf(root->right->right);
		printf("Is %d a leaf: %d\n", root->right->right->n, ret);
		break;
	case 5:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_insert_right(root->left, 54);
		binary_tree_insert_right(root, 128);
		binary_tree_print(root);

		ret = binary_tree_is_root(root);
		printf("Is %d a root: %d\n", root->n, ret);
		ret = binary_tree_is_root(root->right);
		printf("Is %d a root: %d\n", root->right->n, ret);
		ret = binary_tree_is_root(root->right->right);
		printf("Is %d a root: %d\n", root->right->right->n, ret);
		break;

	default:
		break;
	}
	return (0);
}
