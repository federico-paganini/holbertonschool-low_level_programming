#include "main.h"


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
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: String to get the length.
 * @accept: Chars accepted.
 *
 * Return: Number of bytes find.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0' && verify_char(accept, *s))
	{
		i++;
		s++;
	}

	return (i);
}
