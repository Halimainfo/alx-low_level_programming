#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                    containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i, l, j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		l++;
	}
	for (i = 0; s2[i]; i++)
	{
		l++;
	}
	ar = malloc(l * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; s2[j]; i++, j++)
	{
		ar[i] = s2[j];
	}
	ar[l] = '\0';
	return (ar);
}
