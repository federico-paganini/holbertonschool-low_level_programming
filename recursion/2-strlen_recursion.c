#include "main.h"

/**
 * _strlen_recursion - Retruns the length of a string.
 *
 * @s: String to return the length.
 *
 * Return: Length of the string.
 */

int _strlen_recursion(char *s)
{
	int length = 0;


	if (*s != '\0')
	{
		s++;
		length++;
	}
	_strlen_recursion(s);

	return (length);
}
