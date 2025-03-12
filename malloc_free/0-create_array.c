#include "main.h"
#include <stdlib.h>
#include <string.h>

#define NULL ((void *)0)

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: Aleatory size of array.
 * @c: Char to inicialize the array.
 *
 * Return: A pointer to array. NULL if size = 0 or if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if ((size == 0) | (arr == NULL))
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}

	return (arr);
}
