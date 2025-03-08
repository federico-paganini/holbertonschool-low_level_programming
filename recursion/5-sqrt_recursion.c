#include "main.h"

/**
 * sqrt_aux - Finds a number that is the sqrt of n.
 *
 * @n: Number to find the sqrt.
 * @aux: Auxiliar number to iterate.
 *
 * Return: Result of srqt.
 */

int sqrt_aux(int n, int aux)
{
	if (aux * aux > n)
		return (-1);

	if (aux * aux == n)
		return (aux);

	return (sqrt_aux(n, aux + 1));
}

/**
 * _sqrt_recursion - Finds the natural square root of a number.
 *
 * @n: Number to find the square root.
 *
 * Return: Returns the square root of n.
 * -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_aux(n, 0));
}
