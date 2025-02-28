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
	int i;

	while (cptrStr[i] != '\0')
	{
		char c = cptrStr[i];

		c = (c >= 'A' && c <= 'Z') ? c + 32 : c;
		switch (c)
		{
			case 'a':
				cptrStr[i] = 4;
				break;
			case 'e':
				cptrStr[i] = 3;
				break;
			case 'o':
				cptrStr[i] = 0;
				break;
			case 't':
				cptrStr[i] = 7;
				break;
			case 'l':
				cptrStr[i] = 1;
				break;
		}
	}
	return (cptrStr);
}
