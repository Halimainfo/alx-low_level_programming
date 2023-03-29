#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_rev - is fonction reverse, followed by a new
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
	int l = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		l++;
		i++;
	}
	
	for (i = 0, j = l; i <= l; i++)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
