#include "main.h"
#include <stdlib.h>

/**
* free_grid - Frees memory allocated for a 2D array
* @grid: Pointer to a 2D array
* @height: Array height (number of rows)
*
* Return: Nothing
*/
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL || height <= 0)
        return;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
}