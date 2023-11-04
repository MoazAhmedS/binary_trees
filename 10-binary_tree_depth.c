#include "binary_trees.h"

/**
 * binary_tree_depth - size tree
 *
 * @tree: pointer
 *
 * Return: result
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
