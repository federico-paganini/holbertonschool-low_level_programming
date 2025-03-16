#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string consists only of digits.
 *
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */

int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _strlen - Returns the length of a string.
 *
 * @str: The input string.
 *
 * Return: Length of the string.
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length])
		length++;
	return (length);
}

/**
 * multiply - Multiplies two positive numbers represented as strings.
 *
 * @num1: First number.
 * @num2: Second number.
 *
 * Return: Pointer to result string (must be freed).
 */

char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int *result = malloc(len_result * sizeof(int));
	char *res_str;
	int i, j, carry, prod, start = 0;

	if (!result)
		return (NULL);

	for (i = 0; i < len_result; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			prod = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = prod % 10;
			carry = prod / 10;
		}
		result[i + j + 1] += carry;
	}

	while (start < len_result - 1 && result[start] == 0)
		start++;

	res_str = malloc(len_result - start + 1);

	if (!res_str)
	{
		free(result);
		return (NULL);
	}
	for (i = start, j = 0; i < len_result; i++, j++)
		res_str[j] = result[i] + '0';
	res_str[j] = '\0';
	free(result);
	return (res_str);
}

/**
 * main - Entry point, multiplies two positive numbers.
 *
 * @argc: Number of arguments.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 98 on error.
 */

int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || is_digit(argv[1]) == 0 || is_digit(argv[2]) == 0)
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2]);
	if (!result)
	{
		printf("Error\n");
		return (98);
	}
	printf("%s\n", result);
	free(result);
	return (0);
}
