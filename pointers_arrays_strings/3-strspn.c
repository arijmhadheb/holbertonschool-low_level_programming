#include "main.h"
#include <stdio.h>
/**
 *_strspn - the function that gets the length of a prefix substring.
 *@s: parameter
 *@accept: parameter
 *Return: Always success
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
