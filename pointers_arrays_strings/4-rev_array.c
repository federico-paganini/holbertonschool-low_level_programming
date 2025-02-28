#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: An array of integers.
 * @n: The number of elements to swap.
 */

void reverse_array(int *a, int n)
{
	int i, temp[100];

	n--;
	for (i = 0; i <= n; i++)
	{
		temp[i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = temp[n];
		n--;
	}
}
