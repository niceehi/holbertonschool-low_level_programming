#include <stdio.h>

/**
 * main - prints numbers 0-9 followed by letters a-f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	int q = 97;

	while (x < 58)
	{
		putchar(x);
		x++;
	}

	while (q < 103)
	{
		putchar(q);
		q++;
	}

	putchar('\n');

	return (0);
}
