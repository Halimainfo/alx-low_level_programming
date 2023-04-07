#include "main.h"

/**
 * _pow_recursion - fonction return value of x raised to the power of y.
 * @x: The number.
 * @y: the power.
 * Return: factorial -1 error - the power.
 */

int _pow_recursion(int x, int y)
{
	int re = 1;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	re *= _pow_recursion(x, y - 1);
	return (re);
}
