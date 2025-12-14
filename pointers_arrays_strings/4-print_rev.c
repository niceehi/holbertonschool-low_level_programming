#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
    int i, k;
    k = 0;
    for(i=0; s[i] != '\0'; i++)
    {
        k = k+1;
    }
    k = k - 1;
    while(k>=0)
    {
        _putchar(s[k]);
        k= k - 1;
    }
    _putchar('\n');
}