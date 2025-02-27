#include "main.h"

/**
 * _strncpy - Copies a string.
 *
 * @dest: Destiny of string.
 * @src: Source string.
 * @n: Number of bytes to copy.
 *
 * Return: The pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (n-- > 0)
	{
		if (*src != '\0')
		{
			*temp = *src;
			src++;
		}
		else
		{
			*temp = '\0';
		}
		temp++;
	}
	return (dest);
}
