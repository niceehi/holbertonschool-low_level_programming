#include "main.h"

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 */
int sqrt_helper(int n, int x)
{
    if (x * x == n)
        return (x);

    if (x * x > n)
        return (-1);

    return (sqrt_helper(n, x + 1));
}

int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    
    if (n == 1)
        return(1);

    return (sqrt_helper(n, 1));
}
