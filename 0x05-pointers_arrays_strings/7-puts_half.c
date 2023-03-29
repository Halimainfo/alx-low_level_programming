#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * puts_half - is fonction reverse, followed by a new
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int l = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	for (i = 0; i < (l/2); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
