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
	size_t height, depth;

	(void)root;
	(void)argc;
	(void)argv;
	(void)ret;
	(void)height;
	(void)depth;

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
	case 6:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		root->left->left = binary_tree_node(root->left, 6);
		root->left->right = binary_tree_node(root->left, 56);
		root->right->left = binary_tree_node(root->right, 256);
		root->right->right = binary_tree_node(root->right, 512);
		binary_tree_print(root);
		binary_tree_preorder(root, &print_num);
		break;
	case 7:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		root->left->left = binary_tree_node(root->left, 6);
		root->left->right = binary_tree_node(root->left, 56);
		root->right->left = binary_tree_node(root->right, 256);
		root->right->right = binary_tree_node(root->right, 512);
		binary_tree_print(root);
		binary_tree_inorder(root, &print_num);
		break;
	case 8:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		root->left->left = binary_tree_node(root->left, 6);
		root->left->right = binary_tree_node(root->left, 56);
		root->right->left = binary_tree_node(root->right, 256);
		root->right->right = binary_tree_node(root->right, 512);
		binary_tree_print(root);
		binary_tree_postorder(root, &print_num);
		break;
	case 9:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_insert_right(root->left, 54);
		binary_tree_insert_right(root, 128);
		binary_tree_print(root);
		height = binary_tree_height(root);
		printf("Height from %d: %lu\n", root->n, height);
		height = binary_tree_height(root->right);
		printf("Height from %d: %lu\n", root->right->n, height);
		height = binary_tree_height(root->left->right);
		printf("Height from %d: %lu\n", root->left->right->n, height);
		break;
	case 10:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_insert_right(root->left, 54);
		binary_tree_insert_right(root, 128);
		binary_tree_print(root);
		depth = binary_tree_depth(root);
		printf("Depth of %d: %lu\n", root->n, depth);
		depth = binary_tree_depth(root->right);
		printf("Depth of %d: %lu\n", root->right->n, depth);
		depth = binary_tree_depth(root->left->right);
		printf("Depth of %d: %lu\n", root->left->right->n, depth);
		break;
	default:
		break;
	}
	return (0);
}
