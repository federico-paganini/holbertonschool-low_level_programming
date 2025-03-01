#include "main.h"

/**
 * rot13 - Encodes a string into rot13.
 *
 * @cptrStr: String to convert.
 *
 * Return: Pointer.
 */

char *rot13(char *cptrStr)
{
	int j, i = 0;
	 const char *charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	 const char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (cptrStr[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (cptrStr[i] == charset[j])
			{
				cptrStr[i] = code[j];
				break;
			}
		}
		i++;
	}
	return (cptrStr);
}
