#include "../binary_trees.h"
#include <stdio.h>
#include <string.h>

/**
 * test - testing entry point
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	binary_tree_t *root, *null_root = NULL;
	unsigned int n_task = 0;
	int ret, balance;
	size_t height, depth, size;

	(void)root;
	(void)argc;
	(void)argv;
	(void)ret;
	(void)height;
	(void)depth;
	(void)size;
	(void)null_root;
	(void)balance;

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
	case 11:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_insert_right(root->left, 54);
		binary_tree_insert_right(root, 128);
		binary_tree_print(root);
		size = binary_tree_size(root);
		printf("Size of %d: %lu\n", root->n, size);
		size = binary_tree_size(root->right);
		printf("Size of %d: %lu\n", root->right->n, size);
		size = binary_tree_size(root->left->right);
		printf("Size of %d: %lu\n", root->left->right->n, size);
		
		printf(" \n\n ============= \n Edge cases for task 11: \n\n ======================= \n");
		binary_tree_delete(root);
		root = binary_tree_node(NULL, 56);
		binary_tree_insert_right(root, 1);
		binary_tree_insert_right(root, 2);
		binary_tree_insert_right(root, 3);
		binary_tree_insert_right(root, 4);
		binary_tree_print(root);
		size = binary_tree_size(root);
		printf("Size of %d: %lu\n\n", root->n, size);
		
		binary_tree_delete(root);
		root = binary_tree_node(NULL, 55);
		binary_tree_insert_left(root, 1);
		binary_tree_insert_left(root, 2);
		binary_tree_insert_left(root, 3);
		binary_tree_insert_left(root, 4);
		binary_tree_print(root);
		size = binary_tree_size(root);
		printf("Size of %d: %lu\n\n", root->n, size);
		
		binary_tree_delete(root);
		root = binary_tree_node(NULL, 99);
		binary_tree_print(root);
		size = binary_tree_size(root);
		printf("Size of %d: %lu\n\n", root->n, size);
		
		binary_tree_print(null_root);
		size = binary_tree_size(null_root);
		printf("Size of %d: %lu\n\n", 000, size);
		break;
	case 12:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_insert_right(root->left, 54);
		binary_tree_insert_right(root, 128);
		binary_tree_print(root);
		size = binary_tree_leaves(root);
		printf("Leaves in %d: %lu\n", root->n, size);
		size = binary_tree_leaves(root->right);
		printf("Leaves in %d: %lu\n", root->right->n, size);
		size = binary_tree_leaves(root->left->right);
		printf("Leaves in %d: %lu\n", root->left->right->n, size);
		break;
	case 13:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_insert_right(root->left, 54);
		binary_tree_insert_right(root, 128);
		binary_tree_print(root);
		size = binary_tree_nodes(root);
		printf("Nodes in %d: %lu\n", root->n, size);
		size = binary_tree_nodes(root->right);
		printf("Nodes in %d: %lu\n", root->right->n, size);
		size = binary_tree_nodes(root->left->right);
		printf("Nodes in %d: %lu\n", root->left->right->n, size);
		break;
	case 14:
		root = binary_tree_node(NULL, 98);
		root->left = binary_tree_node(root, 12);
		root->right = binary_tree_node(root, 402);
		binary_tree_insert_right(root->left, 54);
		binary_tree_insert_right(root, 128);
		binary_tree_insert_left(root, 45);
		binary_tree_insert_right(root->left, 50);
		binary_tree_insert_left(root->left->left, 10);
		binary_tree_insert_left(root->left->left->left, 8);
		binary_tree_print(root);
		balance = binary_tree_balance(root);
		printf("Balance of %d: %+d\n", root->n, balance);
		balance = binary_tree_balance(root->right);
		printf("Balance of %d: %+d\n", root->right->n, balance);
		balance = binary_tree_balance(root->left->left->right);
		printf("Balance of %d: %+d\n", root->left->left->right->n, balance);
		break;
	default:
		break;
	}
	return (0);
}
