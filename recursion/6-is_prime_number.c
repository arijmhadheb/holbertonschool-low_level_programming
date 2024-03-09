#include "main.h"

/**
 * helper - checks recursively the input from is_prime_number
 * @n: iterator
 * @b: base number to check
 * Return: 1 if n is a prime, else return 0 otherwise.
 * is_prime_number - checks if the number is a prime number
 * @n: the number to check
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int helper(int n, int b)
{
	if (b % n == 0 || b < 2)
		return (0);
	else if (n == b - 1)
		return (1);
	else if (b > n)
		return (helper(n + 1, b));
	return (1);
}
