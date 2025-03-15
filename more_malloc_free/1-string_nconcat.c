#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: First string to concat.
 * @s2: Second string to concat.
 * @n: Bytes to copy from s2.
 *
 * Return: If fails return NULL. Othercase a pointer to the new memory space.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int extra, length1, length2, i, j = 0;

	length1 = (s1 == NULL) ? 0 : _str_length(s1);
	length2 = (s2 == NULL) ? 0 : length2 = _str_length(s2);
	extra = (n < length2) ? n : length2;
	concat = malloc(sizeof(char) * (length1 + extra + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		concat[j] = s1[i];
		j++;
	}
	
	for (i = 0; i < extra; i++)
	{
		concat[j] = s2[i];
		j++;
	}

	concat[j] = '\0';
	return (concat);
}


/**
 * _str_length - Gets the length of a string.
 *
 * @str: String to get the length.
 *
 * Return: Length of the string.
 */

int _str_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
