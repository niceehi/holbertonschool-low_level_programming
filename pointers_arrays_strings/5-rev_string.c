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
    
    for(i=0; s[i] !='\n'; ) 
    {
        k = k +1;
    }

    for(i=k-1; i > k/2; i--)
    {
        t = s[i];
        s[i] = s[k - i - 1];
        s[k - i - 1] = t;
    }
}