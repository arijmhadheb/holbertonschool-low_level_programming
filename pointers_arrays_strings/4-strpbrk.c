#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - the function that searches a string for any of a set of bytes.
 *@s: parameter
 *@accept: parameter
 *Retur : a function searches a string for a set of bytes.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
