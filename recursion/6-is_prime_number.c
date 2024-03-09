#include "main.h"
/**
 * is_prime_number - checks if the number is a prime number
 * @n: the number to check
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int is_prime_number(int n, int i)
{
	if (i % n == 0 || i < 2)
		return (0);
	else if (n == i - 1)
		return (1);
	else if (i > n)
		return (is_prime_number(n + 1, i ));
	return (1);
}
