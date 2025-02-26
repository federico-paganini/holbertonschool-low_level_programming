#include <stdio.h>
#include "main.h"


/**
 * _atoi - Converts a string to integer.
 *
 * @s: String to convert.
 *
 * Return: The first int finded (0 if there's no int).
 */

int _atoi(char *s)
{
	int i = 0, n = 0, value = 0, isnum = 0;
	unsigned int absn = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			value++;
		i++;
	}

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			absn = absn * 10 + (s[i] - '0');
			isnum = 1;

			if (s[i + 1] == '\0' || s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}

	value = (value % 2 == 0) ? 0 : -1;
	n = (value == 0) ? absn : absn * value;
	return (isnum ? n : isnum);
}
