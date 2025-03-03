#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Buffer pointed.
 * @b: Constant byte.
 * @n: Bytes to fill.
 *
 * Return: Pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
