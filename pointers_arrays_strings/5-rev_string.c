#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
    int k, i;
    char t;
    k=0;

    while(s[k]!='0')
    {
        k = k + 1;
    }

    for(i=k-1; i < k/2; i--)
    {
        t = s[i];
        s[i] = s[k - i - 1];
        s[k - i - 1] = t;
    }
}