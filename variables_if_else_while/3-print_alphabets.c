#include<stdio.h>
/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
    char x = 'A';
    char y = 'a';
    
    while(y<='z')
    {
        putchar(y);
        y++;
    }
    while(x<='Z')
    {
        putchar(x);
        x++;
    }
    
    putchar('\n');
    return 0;
}