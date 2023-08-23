#include "binary_trees.h"
/**
	* binary_tree_is_leaf - checks to see if a node is a leaf
	* @node: node to check
	* Return: 1 if leaf, 0 otherwise
	*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
