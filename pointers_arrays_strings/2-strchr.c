#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence of c in s,
 * or NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
    int k = 0;

    while (s[k] != '\0')
    {
        if (s[k] == c)
        {
            return (s + k);
        }
        k++;
    }

    return NULL;
}