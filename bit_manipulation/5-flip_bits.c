#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: The number to convert.
 * @m: The model number.
 *
 * Return: Number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp = n ^ m;
	unsigned int count = 0;

	while (comp)
	{
		count += comp & 1;
		comp >>= 1;
	}

	return (count);
}
