#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 *
 * @nmemb: Elements count.
 * @size: Size of the elements of the array.
 *
 * Return: NULL if nmemb or size = 0; or if malloc fails.
 * Othercase, a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	ptr = memory;

	for (i = 0; i < size * nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (memory);
}
