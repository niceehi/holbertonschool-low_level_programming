#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to be scanned.
 * @accept: String containing characters to match.
 * Return: Pointer to the first occurrence in s of any character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				return (s + i);
		}
	}

	return (NULL);
}
