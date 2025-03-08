#include "main.h"

/**
 * prime_number_aux - Auxiliar function to check prime number.
 *
 * @n: Number to check.
 * @aux: Auxiliar number to iterate.
 *
 * Return: 1 if n is prime number.
 * 0 if not.
 */

int prime_number_aux(int n, int aux)
{
	if (aux * aux > n)
		return (1);

	if (n % aux == 0)
		return (0);

	return (prime_number_aux(n, aux + 1));
}

/**
 * is_prime_number - Checks if a number is prime number.
 *
 * @n: Number to check.
 *
 * Return: 1 if n is prime number.
 * 0 if not.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_number_aux(n, 2));
}
