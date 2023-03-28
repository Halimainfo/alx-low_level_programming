#include <stdlib.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * swap_int - is fonction swap tow int
 * @a: first nomber
 * @b: scend nomber
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int k = *a;

	*a = *b;
	*b = k;
}
