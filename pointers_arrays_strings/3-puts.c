#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
    int i;
    for(i=0; str[i] != '\n'; i++)
    {
        putchar(str[i]);
    }

    putchar('\n');
}