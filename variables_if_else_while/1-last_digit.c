#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    int a =0;
    cha = n % 10;
    if(a > 5)
    {
        printf("%d and is greater than 5", a);
    }
    if(a < 6 && a != 0)
    {
        printf("%d and is less than 6 and not 0", a);
    }
	return (0);
}