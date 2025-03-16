#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 *
 * @min: Min value to handle.
 * @max: Max value to handle.
 *
 * Return: A pointer to the created array. NULL if min > max
 * or if malloc fails.
 */

int *array_range(int min, int max)
{
	int *array;
	unsigned int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
