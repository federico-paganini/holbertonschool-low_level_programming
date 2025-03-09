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

char wildstr_letter(char *s, int j)
{
	if (j < 0)
	{
		return ('*');
	}
	else
	{
	if  (s[j] >= '!' && s[j] <= '~' && s[j] != '*')
		return (s[j]);
	}

	return (wildstr_letter(s, j - 1));
}

int wildstr_compare(char *s1, char *s2, int i, int j)
{
	if (i > 0 && j > 0 && (s1[i] == s2[j] || s2[j] == '*'))
	{
			if (s1[i - 1] == wildstr_letter(s2, j) || wildstr_letter(s2, j) == '*')
				return (wildstr_compare(s1, s2, i - 1, j - 1));
	}
	else
	{
		return (0);
	}

	return (1);
}



int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && (s2[0] == '\0' || s2[0] == '*'))
		return (1);

	return(wildstr_compare(s1, s2, str_length(s1) - 1, str_length(s2) - 1));
}
