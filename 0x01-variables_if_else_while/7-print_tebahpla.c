#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - is fonction
 * Return: 0 value equal 0 (success). 1 otherwise
 */
int main(void)
{
	int ch = 122;

	for (; ch >= 97; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
