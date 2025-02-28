#include "main.h"

/**
 * string_toupper(char *);
 *
 * @str: Pointer to the string to change.
 *
 * Return: Returns the letter in uppercase.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (((str[i] - '0') - 32) + '0');
		}
		i++;
	}
	return (str);
}
