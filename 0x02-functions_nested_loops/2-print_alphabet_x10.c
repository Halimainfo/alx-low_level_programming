#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - is fonction that prints 
 * the alphabet, in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int a = 97;
	int i = 0;

	while (i < 10)
	{
	while (a <= 122)
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
	i++;
	a = 97;
	}
}
