#include "binary_trees.h"
#include "binary_tree_height.c"
/**
	* binary_tree_balance - measures balance factor of binary tree
	* @tree: pointer to root node of tree
	* Return:
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}
