#include "binary_trees.h"
/**
	* binary_tree_balance - measures balance factor of binary tree
	* @tree: pointer to root node of tree
	* Return: 
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	int left_height = (int)binary_tree_height(tree->left);
	int right_heigh = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}