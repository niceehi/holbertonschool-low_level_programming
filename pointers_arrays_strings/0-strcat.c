#include "main.h"

/**
 * _strcat - concatenates the string pointed to by src
 *           to the end of the string pointed to by dest.
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Найти конец строки dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Копировать src в dest */
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	/* Завершить строку нулевым символом */
	dest[i] = '\0';

	return (dest);
}