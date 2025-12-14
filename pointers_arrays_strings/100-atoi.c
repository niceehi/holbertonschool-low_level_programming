#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int r = 0;
    int st = 0;

    while (s[i])
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] == '+')
            ;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            st = 1;
            r = r * 10 + (s[i] - '0');
        }
        else if (st)
            break;

        i++;
    }

    return r * sign;
}
