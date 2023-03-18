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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%s is positive", n);

	} else
	{
	if (n == 0)
	{
		printf("%s is zero", n);
	} else
	{
		printf("%s is negative", n);
	}
	}
	return (0);
}
