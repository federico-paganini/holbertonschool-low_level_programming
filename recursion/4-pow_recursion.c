#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 *
 * @x: Number to multiplicate.
 * @y: Times to multiplicate.
 *
 * Return: y lower than 0, return -1.
 * y = 0 returns 1. Returns the result in the other cases.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
