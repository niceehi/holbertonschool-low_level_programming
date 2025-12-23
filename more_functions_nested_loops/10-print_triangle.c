#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 * 
 * Description: This function prints a right-angled triangle of size `size` using the character `#`.
 * Return: Nothing.
 */
void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size - i; j++)
        {
            _putchar(' ');
        }

        for (j = 1; j <= i; j++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}