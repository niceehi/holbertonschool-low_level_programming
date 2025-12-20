#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character to find.
 *
 * Return: Pointer to the first occurrence of c,
 * or NULL if not found.
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

	if (c == '\0')
	{
		return (s + k);
	}

	return (NULL);
}