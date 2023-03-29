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
	char ll[200];

	while (s[i] != '\0')
	{
		l++;
		ll[i] = s[i];
		i++;
	}
	for (i= 0, j = l - 1; i <= l; i++)
	{
		s[j] = ll[i];
		j = j - 1;
	}
}
