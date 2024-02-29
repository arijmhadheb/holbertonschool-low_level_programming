#include "main.h"

/**
 *puts2 -  prints every other character of a string.
 *@str: the string
 */
void puts2(char *str)

{
	int S, i;

	S = 0;

	while (str[S] != '\0')
	{
		S++;
	}
	for (i = 0; i < S; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
