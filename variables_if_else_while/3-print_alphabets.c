#include<stdio.h>
/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
    char x = 'A';
    
    while(x<='Z')
    {
        putchar(x);
        x++;
    }
    putchar('\n');
    return 0;
}