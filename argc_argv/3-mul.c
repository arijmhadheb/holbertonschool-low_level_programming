#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i = 0, y = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", i * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
