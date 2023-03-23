#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _islower - is fonction check if lower or not
 * @c: alphabet code ascii to check
 * Return: 1 value lower . 0 otherwise
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
