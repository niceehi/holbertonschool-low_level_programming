#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
    int i, n, k;
    k = 0;
    while(str[k] != '\0')
    {
        k++;
    }
    if(k % 2 == 0)
    {
        n=k/2;
    }
    else
    {
        n = ((k + 1) / 2);
    }
    for(i=n; k>i; i=i+1)
    {
        _putchar(str[i]);
      
    }
    _putchar('\n');
}