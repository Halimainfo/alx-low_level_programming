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
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
