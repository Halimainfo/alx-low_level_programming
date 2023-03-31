#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _strcmp - is fonction returns the length of a string
 * @s1: first to con
 * @s2: secned to con
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (s1 - s2);
}
