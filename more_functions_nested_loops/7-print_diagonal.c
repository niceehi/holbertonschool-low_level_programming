#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */

void print_diagonal(int n)
{
    if(n>0)
    {
        while(n>=0)
        {
            _putchar(32);
            n = n - 1;
        }
        _putchar(92);
    }
    _putchar('\n');
}