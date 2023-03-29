#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _strlen - is fonction returns the length of a string
 * @s: alphabet code ascii to check
 * Return: nothing
 */
int _strlen(char *s)
{
	int l = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		l++;
		i++;
	}
	return(l);
}
