#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _isupper - is fonction check if upper or not
 * @c: alphabet code ascii to check
 * Return: 1 value upper . 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
