#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function  takes an unsigned integer.
 * @b: unsigned int
 * Return:  a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
