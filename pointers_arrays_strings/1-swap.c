#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 *
 * @a: First int to swap value.
 * @b: Second int to swap value.
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
