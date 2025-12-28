#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars
 * @size: The size of the array to be created.
 * @c: The character to initialize the array with.
 * Return: A pointer to the newly allocated array.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int index;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		*(a + index) = c;
	}

	return (a);
}
