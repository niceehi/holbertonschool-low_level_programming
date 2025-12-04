#include<stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
    char x = 'a';
    while(x <= 'z')
    {
        putchar(x);
        x++;   
    }

    putchar('\n');
    return 0;
}
