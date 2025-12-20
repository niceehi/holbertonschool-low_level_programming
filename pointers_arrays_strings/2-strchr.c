#include "main.h"
#include <stddef.h>

/**
 * NULL - Represents a null pointer.
 *
 * Description: Used to indicate that a pointer does not point
 * to any valid memory address.
 */
char *_strchr(char *s, char c)
{
    int k = 0;

    while (s[k] != '\0')
    {
        if (s[k] == c)
            return (s + k);
        k++;
    }

    if (c == '\0')
        return (s + k);

    return NULL;
}