#include "main.h"

/**
 * helper - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @b: base number to check
 * Return: natural square root of number base
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
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
