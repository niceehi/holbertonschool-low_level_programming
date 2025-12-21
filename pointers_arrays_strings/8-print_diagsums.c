#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (stored as a flat array)
 * @size: the number of rows/columns in the square matrix
 */
void print_diagsums(int *a, int size)
{
    int i, j, x = 0, y = 0;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j)
                x = x + a[i * size + j];

            if (i + j == size - 1)
                y = y + a[i * size + j];
        }
    }

    printf("%d, %d\n", x, y);
}