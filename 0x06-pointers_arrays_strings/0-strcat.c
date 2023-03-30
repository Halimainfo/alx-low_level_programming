#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _strcat - is fonction returns the length of a string
 * @dest: first to con
 * @src: secned to con
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
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
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		l++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
