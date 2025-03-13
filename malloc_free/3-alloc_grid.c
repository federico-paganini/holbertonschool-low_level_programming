#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *
 * @width: First array to dimensione.
 * @height: Second array to dimensione.
 *
 * Return: A pointer to the bidimensional array.
 * NULL if it fails or if one or both parameters are 0 or less.
 */

int **alloc_grid(int width, int height)
{
	int **bidArr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	bidArr = malloc(sizeof(int *) * height);

	if (bidArr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		bidArr[i] = malloc(sizeof(int) * width);

		if (bidArr[i] == NULL)
		{
			while (i > 0)
			{
				free(bidArr[i - 1]);
				i--;
			}
			free(bidArr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			bidArr[i][j] = 0;
		}
	}
	return (bidArr);
}
