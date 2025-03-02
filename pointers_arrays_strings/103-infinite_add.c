#include "main.h"

/**
 * _strlen - Gives the size of a string.
 *
 * @ptrStr: String to get the size.
 *
 * Return: The string size.
 */

int _strlen(char *ptrStr)
{
	int length = 0;

	while (ptrStr[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * infinite_add - Adds two numbers.
 *
 * @n1: First number to add.
 * @n2: Second number to add.
 * @r: Buffer to store the result.
 * @size_r: Buffer size.
 *
 * Return: Pointer to the first number possition.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sizen1 = _strlen(n1);
	int sizen2 = _strlen(n2);
	int tens = 0, sum;
	int i = sizen1 - 1, j = sizen2 - 1, k = size_r - 1;

	r[k] = '\0';
	k--;

	if (size_r <= ((sizen1 > sizen2) ? sizen1 : sizen2) + 1)
		return (0);

	while (i >= 0 || j >= 0 || tens)
	{
		if (k < 0)
			return (0);

		sum = tens;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		tens = sum / 10;
		r[k--] = (sum % 10) + '0';
	}

	return (&r[k + 1]);
}
