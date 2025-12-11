#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
    int k = 0;
    int i;

    while (k <= 9)
    {
        for(i = 0; i <= 14; i++)
        {
            if (i >10)
            {

                _putchar((i / 10) + '0');
            }
            _putchar((i % 10) + '0');
        }
        _putchar('\n');
        k++;
    }
}