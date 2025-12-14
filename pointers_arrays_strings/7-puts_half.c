#include "main.h"

void puts_half(char *str)
{
    int i, n, k = 0;
    while(str[i]!='\n')
    {
        k++;
    }
    if(k % 2 == 0)
    {
        for(i=0; k>i; i=(i+1)/2)
        {
            _putchar(str[i]);
        }
    }
    else
    {
        while(k>0)
        {
            n = ((k + 1) / 2);
        }
    }
    _putchar('\n');
}