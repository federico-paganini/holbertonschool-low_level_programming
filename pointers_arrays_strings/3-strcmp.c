#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: First string to compare.
 * @s2: Second string to compare.
 * Retrun: Returns te comparison result.
 */

int _strcmp(char *s1, char *s2)
{
	int length1 = 0, length2 = 0;

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	if (length1 == length2)
	{
		return (0);
	}
	else
	{
		if (length1 > length2)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
}
