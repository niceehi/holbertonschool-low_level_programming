#include "main.h"
#include <ctype.h> 

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	char delimiters[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !islower(str[i]))
			i++;
		if (str[i] == '\0')
			break;
		if (i == 0 || strchr(delimiters, str[i - 1]) != NULL)
			str[i] = toupper(str[i]);

		i++;
	}

	return (str);
}

