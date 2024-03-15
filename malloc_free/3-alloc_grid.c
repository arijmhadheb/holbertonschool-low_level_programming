#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that takes two integers.
 * @width: integer 1
 * @height: integer 2
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	a = malloc(height * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(**a));
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
