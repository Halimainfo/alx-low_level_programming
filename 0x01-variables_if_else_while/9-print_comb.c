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
	int c = 48;

	for (; c <= 57; c++)
	{
		putchar(c);
		if (c < 57){
		putchar(' ');
		putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
