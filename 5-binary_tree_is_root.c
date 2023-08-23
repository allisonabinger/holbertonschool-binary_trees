#include "binary_trees.h"
/**
	* binary_tree_is_root - determines if node is the root of tree
	* @node: node to check
	* Return: 1 if so, 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	
	if (node->parent == NULL)
		return (1);
	
	return (0);
	}
