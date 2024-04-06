#include "binary_trees.h"
/**
 * binary_tree_depth - measures  depth of specified node from root
 * @tree: pointer to node to check the depth
 * Return: 0 if it is the root or number of depth
 * else return the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
