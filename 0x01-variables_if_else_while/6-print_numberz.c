#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - is fonction
 * Return: 0 value equal 0 (success). 1 otherwise
 */
int main(void)
{
	char c = '0';

	for (; c <= '9'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
