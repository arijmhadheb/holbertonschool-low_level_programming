#include "main.h"

/**
 * checker - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
