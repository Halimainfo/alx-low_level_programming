#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *ar;
	int i, l;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		l++;
	}
	ar = malloc(l * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		ar[i] = str[i];
	}
	ar[l] = '\0';
	return (ar);
}
