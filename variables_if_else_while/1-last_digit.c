#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* * main - Prints a text according number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
    int last;
    
    srand(time(0));
	n = rand() - RAND_MAX / 2;
    last = n % 10;

	if(last > 5)
    {
        printf("Last digit of %d is %d and is 5\n", n, last);
    }
    if(last == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, last);
    }
    if(last!=0 && last < 6)
    {
        printf("Last digit of %d is %d less than 6 and not 0\n", n, last);
    }
    
	return (0);
}