#include "main.h"

/**
 * _helper - Checks recursively if n has divisors other than 1 and itself.
 * @n: The number to check.
 * @x: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int _helper(int n, int x)
{
	if (x == 1)
		return (1);

	if (n % x == 0)
		return (0);

	return (_helper(n, x - 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (_helper(n, n / 2));
}