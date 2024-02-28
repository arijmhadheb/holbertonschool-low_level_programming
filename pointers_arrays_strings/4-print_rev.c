#include "main.h"
/**
 *print_rev - prints a string, in reverse.
 *@s: the string
 *Return: void
 */
void print_rev(char *s)

{
	{
		int i, j, L;

		i = 0;

		while (s[i] != '\0')
		{
			i++;
		}

		L = i;

		for (j = L - 1; j >= 0; j--)
		{
			_putchar(s[j]);
		}

		_putchar('\n');
	}
}
