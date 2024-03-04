#include "main.h"
#include <stdio.h>
/**
 *_memset - fills memory with a constant byte.
 *@s: pointer of the area.
 *@b: constant byte.
 *@n: number of byte.
 *Return: pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int count;
	char *p = s;

	for (count = 0; count < n; count++)
	{
		p[count] = b;
	}
	return (p);
}
