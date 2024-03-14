#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars.
 * @c: char
 * @size: size of char
 * Return:  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	if (size == 0)
		return (NULL);
	b = malloc(size * sizeof(b));
	if (b == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	return (b);
}
