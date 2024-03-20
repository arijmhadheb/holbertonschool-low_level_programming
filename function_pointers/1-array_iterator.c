#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a given function.
 * @array: a pointer to the first element of the array.
 * @size: the size of the array
 * @action: the pointer that takes an integer parameter
 * Return: a given function excutable
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
