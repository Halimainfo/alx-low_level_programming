#include "main.h"

/**
 * _pow_recursion - fonction return value of x raised to the power of y.
 * @x: The number.
 * @y: the power.
 * Return: factorial -1 error - the power.
 */

int _sqrt_recursion(int n)
{
	int re = n / 2;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if ( re * re == n)
		return (re);
	re = _sqrt_recursion(n / 2);
	return (re);
}
