#include "main.h"

/**
 * swap_int - Swaps the values of two int.
 * @a: The first int to be swapped.
 * @b: The second int to be swapped.
 */
void swap_int(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}