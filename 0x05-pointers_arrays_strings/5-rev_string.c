#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * rev_string - is fonction reverse
 * @s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		l++;
		i++;
	}
	i = 1;
	j = l - 1;
	while (i <= l/2)
	{
		_putchar(s[j]);
		j = j - 1;
		i++;
	}
}
