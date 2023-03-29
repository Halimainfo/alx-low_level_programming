#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _puts - is fonction 
 * @str: string prints a string, followed by a new line
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i];
		i++;
	}
	_putchar('\n');
}
