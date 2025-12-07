#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
    int x = n % 10;
    _putchar(x);
    
    return(x);
}