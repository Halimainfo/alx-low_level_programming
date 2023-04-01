#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * cap_string - is fonction
 * @c: string
 * Return: char
 */
char *cap_string(char *c)
{
	int i = 0;

	for (i = 0; c[i]; i++)
	{
		if (c[i - 1] == ' ' || c[i - 1] == '\n' ||
				c[i - 1] == '.' || c[i - 1] == '\t' ||
				c[i - 1] == ';' || c[i - 1] == '?' || c[i - 1] == ',' ||
				c[i - 1] == '!' || c[i - 1] == '"' || c[i - 1] == '(' ||
				c[i - 1] == ')' ||
				c[i - 1] == '{' || c[i - 1] == '}' || i == 0)
		{
			if (c[i] <= 122 && c[i] >= 97)
			{
				c[i] -= 32;
			}
		}
	}
	return (c);
}
