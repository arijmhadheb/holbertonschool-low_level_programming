#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 *@a: pointer to an integer representing the square matrix
 *@size: the size of the square matrix.
 *Return: printing the sum of the two diagonals of a square matrix of integers.
 */
void print_diagsums(int *a, int size)
{
	int sum_p = 0;
	int sum_s = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		sum_p += a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		sum_s += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_p, sum_s);
}
