#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
int main(void)
{
    char x;
    x = 'a';
    
    while(x <='z')
    {
        _putchar(x);
        x++;
    }
    _putchar('\n');
}
