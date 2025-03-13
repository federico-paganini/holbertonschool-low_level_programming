#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Return: Pointer to the newly alocated space in memory.
 * Returns NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int length1 = (s1 != NULL) ? _strlen(s1) : 0;
	unsigned int length2 = (s2 != NULL) ? _strlen(s2) : 0;
	unsigned int tlength = length1 + length2, i = 0;
	char *arr;

	arr = malloc(sizeof(char) * (tlength + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		arr[i] = s1[i];
	}

	for (i = 0; i < length2; i++)
	{
		arr[length1 + i] = s2[i];
	}

	arr[tlength] = '\0';
	return (arr);
}

/**
 * _strlen - Returns the lenght of a string.
 *
 * @s: String to evaluate.
 *
 * Return: Returns the length.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
