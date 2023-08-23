#include "binary_trees.h"
/**
	* binary_tree_height - finds the height of a binary tree
	* @tree: pointer to the root node of the tree to measure the height
	* Return: the height, or 0 if the tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;
	if (tree == NULL)
	{
		return (0);
	}

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
	{
		return (1 + l_height); /*adding 1 includes the root*/
	}
	else
	{
		return (1 + r_height);
	}
}
