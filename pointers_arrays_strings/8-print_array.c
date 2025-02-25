#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 *
 * @a: Array to be printed.
 * @n: Position of the array to start to print.
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
