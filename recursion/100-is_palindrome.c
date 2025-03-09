#include "main.h"

/**
 * str_length - Function to get the length of the string.
 *
 * @s: String to get the length.
 *
 * Return: The length of the string.
 */

int str_length(char *s)
{
	return ((*s == '\0') ? 0 : 1 + str_length(s + 1));
}

/**
 * aux_palindrome - Auxiliar function to verify.
 *
 * @s: Original pointer to the string.
 * @i: Iterator to advance.
 * @j: Iterator to return.
 *
 * Return: 1 or 0.
 */

int aux_palindrome(char *s, int i, int j)
{
	if (i > j)
		return (1);

	if (s[j] != s[i])
		return (0);

	return (aux_palindrome(s, i + 1, j - 1));
}


/**
 * is_palindrome - Verify if a string is a palindrome.
 *
 * @s: String to verify.
 *
 * Return: 1 if is or 0 if not palindrome.
 */

int is_palindrome(char *s)
{
	if (s[0] == '\0' || s[1] == '\0')
		return (1);

	return (aux_palindrome(s, 0, str_length(s) - 1));
}
