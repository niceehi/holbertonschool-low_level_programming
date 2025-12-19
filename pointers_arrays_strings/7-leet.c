#include "main.h"

/**
 * leet - converts a string to leetspeak
 * @p: string to convert
 *
 * Return: pointer to the modified string
 */
char *leet(char *p)
{
	int i, k;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (p[i] == a[k])
			{
				p[i] = b[k];
				break;
			}
		}
	}

	return (p);
}
