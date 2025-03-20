#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string consists only of digits.
 * @s: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * str_length - Returns the length of a string.
 * @s: The input string.
 *
 * Return: Length of the string.
 */
int str_length(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * multiply - Multiplies two positive numbers represented as strings.
 * @num1: First number.
 * @num2: Second number.
 *
 * Return: Pointer to result string (must be freed).
 */
char *multiply(char *num1, char *num2)
{
	int len1 = str_length(num1), len2 = str_length(num2);
	int result[2000];
	char *res_str;
	int i, j, carry, pos1, pos2, prod, start = 0;

	for (i = 0; i < 2000; i++)
		result[i] = -1;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			pos1 = i + j; 
			pos2 = i + j + 1;
			if (result[pos2] == -1)
				result[pos2] = 0;
			
			prod = (num1[i] - '0') * (num2[j] - '0') + result[pos2] + carry;
			result[pos2] = prod % 10;
			carry = prod / 10;
		}
		
		if (result[i + j + 1] == -1)
			result[i + j + 1] = 0;
		result[i + j + 1] += carry;
	}
	while (start < 2000 - 1 && result[start] == -1)
		start++;
	res_str = malloc(2001 - start);
	if (!res_str)
	{
		printf("Error\n");
		return (NULL);
	}
	for (i = start, j = 0; i < 2000; i++, j++)
		res_str[j] = result[i] + '0';
	res_str[j] = '\0';

	return (res_str);
}

/**
 * main - Entry point, multiplies two positive numbers.
 * @argc: Number of arguments.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *result;

	/* Validate arguments */
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	/* Perform multiplication */
	result = multiply(argv[1], argv[2]);
	if (!result)
		return (98);

	/* Print result */
	printf("%s\n", result);

	/* Free allocated memory */
	free(result);

	return (0);
}

