#include "function_pointers.h"

/**
 * int_index - Searches for an int.
 *
 * @array: Array to search the int.
 * @size: Array size.
 * @cmp: Function to compare values.
 *
 * Return: The index of the first element returned by cmp.
 * If no matches, return -1.
 * If size <= 0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
