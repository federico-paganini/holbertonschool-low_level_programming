#include "main.h"

/**
 * wildcmp - Compares two strings in a wild way.
 *
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: 1 if the strings are identical; 0 in other cases.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

	return (0);
}
