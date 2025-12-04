#include <stdio.h>

/**
 * main - prints numbers 0 to 9 separated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}

	putchar('\n');

	return (0);
}
