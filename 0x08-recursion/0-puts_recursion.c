#include "main.h"

/**
 * _puts_recursion - fonction (Puts with recursion).
 * @s: The string to print.
 * return: nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s + 1);
	}
}
