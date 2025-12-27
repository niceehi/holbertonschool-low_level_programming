#include "main.h"

/**
 * sqrt_helper - Finds the natural square root of a number recursively.
 * @n: The number to find the square root of.
 * @x: The current value being tested as the root.
 *
 * Return: The natural square root of n if it exists, otherwise -1.
 */
int sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 1));
}
