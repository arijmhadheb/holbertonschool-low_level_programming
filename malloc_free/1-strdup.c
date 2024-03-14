#include "main.h"
#include <stdio.h>
/**
 * _strdup - a fucntin tha duplicates a given string.
 * @str: the string
 * Return: a pointer which contains a copy of the string given.
 */
char *_strdup(char *str)
{
	char *d;
	int i, y;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	d = malloc(i * sizeof(*d) + 1);
	if (d == NULL)
		return (NULL);

	for (y = 0; y < i; y++)
		d[y] = str[y];
	d[y] = '\0';

	return (d);
}
