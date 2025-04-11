#include "main.h"
#include <unistd.h>

/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: Number to print in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned long int bits = sizeof(n) * 8;
	int i, leading = 1;

	for (i = bits - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			leading = 0;
			write(1, "1", 1);
		}
		else if (!leading)
		{
			write(1, "0", 1);
		}
	}

	if (leading)
		write(1, "0", 1);

	write(1, "\n", 1);
}
