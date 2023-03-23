#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_last_digit - is fonction that prints the last digit of a number
 * @n: nomber
 * Return: 0 value equal 0 (success). 1 otherwise
 */
int print_last_digit(int n)
{
	int l = (n % 10);
	
	if (n < 0)
	{
		
		l = ((-n) % 10);
	}
	_putchar(l + '0');
	return (0);
}
