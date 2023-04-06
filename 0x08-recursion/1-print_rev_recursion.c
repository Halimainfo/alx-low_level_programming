#include "main.h"

/**
 * _print_rev_recursion - fonction prints a string in reverse.
 * @s: The string to print.
 * return: nothing
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar(s[i-1]);
		i--;
		_putchar('\0');
	}
	else
	{
		i--;
		_print_rev_recursion(s - 1);
	}
}
