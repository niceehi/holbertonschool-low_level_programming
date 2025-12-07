#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i < 10)
	{
		x = 'a';
		
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		
		_putchar('\n');
		i++;
	}
}
