#include "binary_trees.h"
/**
	* binary_tree_depth - finds the depth of a tree
	* @tree: pointer to the node to measure the depth
	* Return: depth, or 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;
	binary_tree_t *current_node = tree;

	if (tree == NULL)
		return (0);
	
	else
	{
		while (current_node = current_node->)
		{
			d++;
			current_node = current_node->parent;
		}
	}
	return (d);
}