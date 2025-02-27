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

	if (sizeof(*src) == 0)
	{
		return (temp);
	}

        while (n-- > 0 && (*dest != '\0' || *src != '\0'))
        {

                *dest = *src;
                src++;
                dest++;
        }

	if (*src == '\0')
	{
		while (*dest != '\0')
		{
			*dest = ' ';
			dest++;
		}
	}

        return (temp);
}
