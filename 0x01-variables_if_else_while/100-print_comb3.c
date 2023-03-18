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
	int n;
	int i;

	for (i = 48; i < 57; i++)
	{
		for (n = i + 1; n < 58; n++)
		{
			if (i != n)
			{
				putchar(i);
				putchar(n);
				if (i == 56 && n == 57)
				{
				continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}
