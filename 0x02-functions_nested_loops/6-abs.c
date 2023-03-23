#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *  _abs - is fonction give
 * @n: nomber to check absolute value
 * Return: absolute value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			return (-n);
		}
	}
}
