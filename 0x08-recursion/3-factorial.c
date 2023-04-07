#include "main.h"

/**
 * factorial - fonction return the factorial of a given number.
 * @n: The number.
 * Return: factorial - -1 if n lower than 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	else
		return (factorial(n) * factorial(n - 1));
}
