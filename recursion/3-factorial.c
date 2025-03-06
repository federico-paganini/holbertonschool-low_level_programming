#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: Number to return factorial.
 *
 * Return: The result of n factorial.
 * 1 if n = 0
 * -1 if n < 0 (Indicates error).
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
