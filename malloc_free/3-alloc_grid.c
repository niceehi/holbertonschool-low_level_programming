#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - создает двумерный массив целых чисел (без очистки при ошибке)
 * @width: ширина
 * @height: высота
 *
 * Return: указатель на массив или NULL
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        
        if (grid[i] == NULL)
            return (NULL);

        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}