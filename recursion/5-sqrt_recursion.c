#include "main.h"
/**
 * help - check the input from n to the base number b.
 * @n: a number.
 * @b: a base number
 * Return: the natural square root of a number of b.
 * _sqrt_recursion - return the natural square root of n.
 * @n: the number of square root.
 * Return: the natural square root of n.
 */
int help(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (help(n + 1, b));
}

int _sqrt_recursion(int n)
{
	return (help(1, n));
}
