#include "main.h"

#define NULL ((void *)0)

/**
 * verify_char - Verify if a char is in the charset.
 *
 * @charset: Charset for verifying.
 * @str: Char to verify.
 *
 * Return: 0 if the char is not in the charset, 1 if is in.
 */

int verify_char(char *charset, char str)
{
	int i = 0;

	while (charset[i] != '\0')
	{
		if (charset[i] == str)
                        return (1);
		i++;
	}
	return (0);
}

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: String to search.
 * @accept: Charset to compare.
 *
 * Return: Pointer to the first occurrence.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (verify_char(accept, *s))
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
