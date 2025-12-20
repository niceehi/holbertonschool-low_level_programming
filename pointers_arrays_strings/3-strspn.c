#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to be scanned.
 * @accept: String containing accepted characters.
 *
 * Return: Number of bytes in the initial segment of s
 * consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			return (i);
	}

	return (i);
}