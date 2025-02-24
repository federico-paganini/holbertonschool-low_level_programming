#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 *
 * @c: Character to evaluate.
 *
 * Return: 1 if is an uppercase, 0 if not.
 */

int _isupper(int c)
{
	if ((c - 0) >= 65 && (c - 0) <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
