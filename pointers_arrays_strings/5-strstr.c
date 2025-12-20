#include "main.h"
#include <stddef.h>  /* для NULL */

/**
 * _strstr - Locates a substring.
 * @haystack: String to search in.
 * @needle: Substring to find.
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    int i, k;

    if (needle[0] == '\0')
        return haystack;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (k = 0; needle[k] != '\0'; k++)
        {
            if (haystack[i + k] != needle[k])
                break;
        }
        if (needle[k] == '\0')
            return (haystack + i);
    }

    return NULL;
}
