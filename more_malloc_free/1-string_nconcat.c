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

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
	{
		length2 = 0;
	}
	else
	{
		length2 = _str_length(s2);
	}

	length1 = _str_length(s1);
	extra = (length1 == 0 || length2 == 0) ? 0 : 1;
	concat = malloc(sizeof(char) * (length1 + n + extra));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		concat[j] = s1[i];
		j++;
	}

	if (extra == 1)
	{
		concat[j] = ' ';
		j++;
	}

	for (i = 0; i < n; i++)
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
