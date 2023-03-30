#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _strncat - is fonction returns the length of a string
 * @dest: first to con
 * @src: secned to con
 * @n: number of con
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	i--;
	dest[i] = ' ';
	i++;
	while (src[l] != '\0' && l < n)
	{
		dest[i] = src[l];
		l++;
		i++;
	}
	if (src[l] != '\0')
	dest[i] = '\0';
	return (dest);
}
