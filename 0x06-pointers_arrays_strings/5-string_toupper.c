#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * string_toupper - is fonction changes all lowercase
 * letters of a string to uppercase
 * @c: string
 * Return: char
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c++; c++)
	{
		if (c[i] < 122 && c[i] > 97)
		{
			c[i] = c[i] - 32;
		}
	}
	return ( c);
}
