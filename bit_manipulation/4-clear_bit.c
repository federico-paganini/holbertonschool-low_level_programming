#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: Number to change bit.
 * @index: Index to change bit.
 *
 * Return: 1 on succes. -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &=  ~(1UL << index);

	return (1);
}
