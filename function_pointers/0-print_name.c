#include "function_pointers.h"

/**
 *print_name - Print a name function
 *@name: name of the person
 *@f: function to print.
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
