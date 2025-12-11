#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */

void print_diagonal(int n)
{
    if(n > 0)
    {
        int x, k;
        for(x=0; x<n; x++)
        {
            for(k=0; k<x; k++)
            {
                _putchar(' ');
            }
            _putchar(92);
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}