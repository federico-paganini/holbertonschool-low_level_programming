#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
 * @cptrStr: String to convert.
 *
 * Return: Pointer.
 */

char *leet(char *cptrStr)
{
	int j, i = 0;
	int charset[5] = {'a', 'e', 'o', 't', 'l'};
	int code[5] = {'4', '3', '0', '7', '1'};

	while (cptrStr[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (cptrStr[i] == charset[j] ||
					cptrStr[i] == (((charset[j] - '0') - 32) + '0'))
			{
				cptrStr[i] = code[j];
			}
		}
		i++;
	}
	return (cptrStr);
}
