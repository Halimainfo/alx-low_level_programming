#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_alphabet - is fonction that prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
	_putchar(a);
	}
	_putchar('\n');
}
