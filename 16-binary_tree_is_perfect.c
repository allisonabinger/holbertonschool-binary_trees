#include "binary_trees.h"
#include "10-binary_tree_depth.c"
/**
	* binary_tree_is_perfect - checks if a binary tree is perfect
	* @tree: pointer to root node
	* Return: 1 if perfect, 0 if not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int dl, dr;

	if (tree == NULL)
	{
		return (0);
	}
	dl = binary_tree_depth(tree->left);
	dr = binary_tree_depth(tree->right);

	if (dl == dr)
	{
		return (1);
	}

	return (0);
}
