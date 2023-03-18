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
	int c;

	for (i = 48; i < 57; i++)
	{
		for (n = i + 1; n < 58; n++)
		{
			for (c = n + 1; c < 58; c++)
			{
			if (i != n && i != c && c != n)
			{
				putchar(i);
				putchar(n);
				putchar(c);
				if (i == 55 && n == 56 && c == 57)
				{
				continue;
				}
				putchar(',');
				putchar(' ');
			}
			}
			c++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
