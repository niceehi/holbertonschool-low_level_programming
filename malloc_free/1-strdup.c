#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if str = NULL
 * or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	int k = 0, i;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[k] != '\0')
	{
		k++;
	}

	a = malloc(sizeof(char) * (k + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= k; i++)
	{
		*(a + i) = str[i];
	}

	return (a);
}
