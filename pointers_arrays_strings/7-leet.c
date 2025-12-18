#include "main.h"

/**
 * @p: pointer to string
 * This function replaces certain letters in the string
 */
char *leet(char *s)
{
	int i;
	int k;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[i] == a[k])
			{
				s[i] = b[k];
				break;
			}
		}
	}

	return (s);
}