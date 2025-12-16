#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
    int i, k=0;
    while(src[k] != '\0')
    {
        k++;
    }
    for(i = 0; i<n && src[i] != '\0'; i++)
    {
        dest[k+i] = src[i]
    }
    dest[k + i] = '\0';

    return(dest);
}