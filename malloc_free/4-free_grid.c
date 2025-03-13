#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a bidimensional array created previously.
 *
 * @grid: Array to free.
 * @height: Parameter to use to set free the array.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
