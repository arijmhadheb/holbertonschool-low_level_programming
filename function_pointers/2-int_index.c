#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searching for an integer in an array
 * @array: A pointer to the first element of the array
 * @size: the size of the array
 * @cmp:  A pointer to a comparison function
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size = 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
