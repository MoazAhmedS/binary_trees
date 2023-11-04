#include "binary_trees.h"

/**
 * array_to_heap - build
 *
 * @array: array
 * @size: size
 *
 * Return: result
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int index;
	heap_t *root = NULL;

	for (index = 0; index < size; index++)
		heap_insert(&root, array[index]);

	return (root);
}
