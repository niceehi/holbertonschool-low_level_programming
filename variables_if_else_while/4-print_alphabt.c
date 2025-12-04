#include<stdio.h>
/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */

int main(void)
{
    
    char x = 'a';

    while(x <= 'z')
    {
        if(x != 'q' && x != 'e')
        {
            putchar(x);   
        }
        x++;
    }

    putchar('\n');

    return 0;
}