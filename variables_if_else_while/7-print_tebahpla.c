#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x = x - 1;
	}

	putchar('\n');

	return (0);
}
