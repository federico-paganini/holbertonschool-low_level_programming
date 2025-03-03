#include "main.h"

#define NULL ((void *)0)

/**
 * _strchr - Locates a character in a string.
 *
 * @s: String to find the character.
 * @c: Character to find.
 *
 * Return: Pointer to the first ocurrence of the character in the string.
 * NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
