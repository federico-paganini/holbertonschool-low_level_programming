#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *	     which contains a copy of the string given as a parameter.
 *
 * @str: String to copy.
 *
 * Return: Pointer to a new string which is a duplicate of the string str.
 * If str = NULL returns NULL.
 * NULL if not enought memory.
 */

char *_strdup(char *str)
{
	unsigned int length = _strlen(str);
	unsigned int i = 0;
	char *arr;

	arr = malloc(sizeof(char) * (length + 1));

	if ((str == NULL) || (arr == NULL))
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		arr[i] = str[i];
	}

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
