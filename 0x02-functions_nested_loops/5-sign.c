#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_sign - is fonction check sign of nomber
 * @n: nomber to check
 * Return: 1 value positive . 0 zero . -1 negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else
	{
		if (n == 0)
			return (0);
		else
			return (-1);
	}
}
