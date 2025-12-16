#include "main.h"

/**
 * _strncpy - Copies at most n characters from the string pointed to by src
 *            to the buffer pointed to by dest
 * @dest: Pointer to the destination buffer where the content is copied
 * @src: Pointer to the source string that is copied
 * @n: The maximum number of characters to be copied
 * Return: A pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
