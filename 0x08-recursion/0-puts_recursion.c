#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
 */

void _puts_recursion(char *s)
{
	if (s[i] == '\0')
		_putchar(s[i]);
		_puts_recursion(s[i+1]);
}
