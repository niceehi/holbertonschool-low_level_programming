#include "main.h"

/**
 * _memcpy - Copies memory area from source to destination.
 * @dest: Pointer to the destination memory area where the content will
 *        be copied.
 * @src: Pointer to the source memory area from which content will
 *       be copied.
 * @n: Number of bytes to be copied from the memory area src to dest.
 *
 * Return: Pointer to the destination memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
