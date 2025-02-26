#include "main.h"

/**
 * *_strcpy - Copies the string src to the buffer pointed to by dest.
 *
 * @dest: Pointer to copy src.
 * @src: Pointer to be copied.
 *
 * Return: &dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	
	dest[i] = '\0';
	return (dest);
}
