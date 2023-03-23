#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _isalpha - is fonction check if alphabet or not
 * @c: alphabet code ascii to check
 * Return: 1 value lower . 0 otherwise
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97 || c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
