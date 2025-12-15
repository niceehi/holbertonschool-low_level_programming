#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates at most n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, k = 0;

    while (dest[k] != '\0')
    {
        k++;
    }

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[k + i] = src[i];
    }

    dest[k + i] = '\0';

    return dest;
}