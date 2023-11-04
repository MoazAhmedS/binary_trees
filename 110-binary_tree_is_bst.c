#include "binary_trees.h"

int binary_tree_is_bst(const binary_tree_t *tree);
int is_bst_helper(const binary_tree_t *tree, int low, int high);
/**
 * binary_tree_is_bst - check
 *
 * @tree: pointer
 *
 * Return: result
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}

/**
 * is_bst_helper - check
 *
 * @tree: pointer
 * @low: low
 * @high: high
 *
 * Return: result
 */
int is_bst_helper(const binary_tree_t *tree, int low, int high)
{
	if (tree != NULL)
	{
		if (tree->n < low || tree->n > high)
			return (0);
		return (is_bst_helper(tree->left, low, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, high));
	}

	return (1);
}
