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
	int ch = 97;

	for (; ch <= 122; ch++)
	{
		if (ch == 101 || ch == 113)
		{
		ch++;
		}
		putchar(ch);
	putchar('\n');
	}
	return (0);
}
