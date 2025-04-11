#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: String to convert.
 *
 * Return: The converted number.
 * 0 if chars are not 1 or 0, or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1;

		if (*b == '1')
			result |= 1;
		b++;
	}

	return (result);
}
