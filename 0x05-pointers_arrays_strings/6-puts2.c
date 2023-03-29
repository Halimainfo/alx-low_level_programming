#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * puts2 - is fonction reverse, followed by a new
 * @str: string
 * Return: nothing
 */
void puts2(char *str)
{
	int l = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	for (i = 0; i < l; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
