#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include ""
/**
	* binary_tree_is_full - checks if a binary tree is full
	* @tree: pointer to the root node of the tree
	* Return: leaf # or 0 if NULL
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_size(tree) % 2 == 0)
	{
		return (0);
	}
	if (binary_tree_balance(tree) == 0)
	{
		return (1);
	}
}