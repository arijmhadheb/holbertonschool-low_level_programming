#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @x: string 1
 * @y: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *x, char *y)
{
	char *b;
	int i, j, c, d;

	if (x == NULL)
		y = "";
	if (x == NULL)
		y = "";

	for (i = 0; x[i] != '\0'; i++)
		;
	for (j = 0; y[j] != '\0'; j++)
		;

	b = malloc((i * sizeof(*x)) + (j * sizeof(*y)) + 1);
	if (b == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			b[c] = x[c];
		else
			b[c] = y[d++];
	}

	return (b);
}
