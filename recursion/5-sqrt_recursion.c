#include "main.h"

/**
 * helper - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @b: base number to check
 * Return: natural square root of number base
 * _sqrt_recursion - Calculates the natural square 
 * root of a number recursively.
 * @n: The number for which the square root is to be calculated.
 * Return: The natural square root of the number 'n', or -1 if 'n' does not
 * have a natural square root.
 */
int helper(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (helper(n + 1, b));
}

int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
