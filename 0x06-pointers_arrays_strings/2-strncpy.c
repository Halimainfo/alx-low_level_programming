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
	while (src[l] != '\0' && l < n)
	{
		dest[l] = src[l];
		l++;
	}
	if (dest[l] != '\0')
		dest[i] = '\0';
	return (dest);
}
