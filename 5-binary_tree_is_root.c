#include "binary_trees.h"

/**
 * binary_tree_is_root - check
 *
 * @node: pointer
 *
 * Return: result
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
