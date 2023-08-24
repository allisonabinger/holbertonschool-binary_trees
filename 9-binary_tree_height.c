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
	if (tree->left)
	{
		l_height = 1 + binary_tree_height(tree->left);  /*adding 1 includes the root*/
	}
	if (tree->right)
	{
		r_height = 1 + binary_tree_height(tree->right);  /*adding 1 includes the root*/
	}
	
	if (l_height > r_height)
		return (l_height);

	return (r_height);
}
