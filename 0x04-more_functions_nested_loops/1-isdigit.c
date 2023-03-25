#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _isdigit - is fonction check if digit or not
 * @c: alphabet code ascii to check
 * Return: 1 value lower . 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
