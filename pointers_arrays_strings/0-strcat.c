#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Second string.
 * @src: First string to concat.
 *
 * Return: Returns dest pointer.
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	dest--;
	*dest = ' ';
	dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (temp);
}
