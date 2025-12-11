#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
    int i;
    int k;
    k = size;
    while(k > 0)
    {
        for(i=0; i<size; i++)
        {
            _putchar(35);
        }
        _putchar('\n');
        k = k - 1;
    }
}
