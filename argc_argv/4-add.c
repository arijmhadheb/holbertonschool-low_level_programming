#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int y, s = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (y = 0; y < strlen(e); y++)
			{
				if (e[y] < 48 || e[y] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			s += atoi(e);
			e++;
		}

		printf("%d\n", s);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
