#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: String to reverse.
 */

void rev_string(char *s)
{
	char t;
	int i = 0, j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	j--;

	while (i < j)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i++;
		j--;
	}
}
