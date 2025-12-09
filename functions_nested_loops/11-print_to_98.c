#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 *
 * Return: void
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            printf("%d", n);
            
            if (n != 98)
            {
                printf(", ");
            }
            n++;
        }
    }
    else 
    {
        while (n >= 98)
        {
            printf("%d", n);

            if (n != 98)
            {
                printf(", ");
            }
            n--;
        }
    }
    
    printf("\n");
}
=======
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The number to start printing from.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}

	printf("\n");
}
>>>>>>> 36a02d8948a4cff91f81f7c8fbd60bde7bd8c871
