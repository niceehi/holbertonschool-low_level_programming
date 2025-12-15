#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int r;
	int st;

	i = 0;
	sign = 1;
	r = 0;
	st = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			st = 1;
			r = r * 10 + (s[i] - '0') * sign;
		}
		else if (st)
			break;

		i++;
	}

	return (r);
}
