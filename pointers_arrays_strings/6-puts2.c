#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
    int k=0, i;
    
    while(str[k] != '\0')
    {
        k++;
    }
    for(i=0; i < k; i=i+2);
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}