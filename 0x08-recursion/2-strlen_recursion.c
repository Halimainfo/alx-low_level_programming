#include "main.h"

/**
 * _strlen_recursion - fonction returns the length of a string.
 * @s: The string.
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
