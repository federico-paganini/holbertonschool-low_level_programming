#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @str: Sting to capitalize.
 *
 * Return: Pointer.
 */

char *cap_string(char *str)
{
	int i = 0, j = 0;
	const char *charset = ",;.!?\"(){}\n\t ";

	while (str[i] != '\0')
	{
		for (j = 0; charset[j] != '\0'; j++)
		{
			if (str[i] == charset[j])
			{
				if (str[i + 1] >= 'a' && str[i] <= 'z')
				{
					str[i + 1] = (((str[i + 1] - '0') - 32) + '0');
				}
			}
		}
		i++;
	}
	return (str);
}
