#include "function_pointers.h"
/**
 *int_index - index of array
 *@array: array
 *@cmp: pointer.
 *@size: length of the array.
 *Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int res;
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);

			if (res != 0)
			{
				return (i);
			}
		}

		if (size <= 0)
		{
			return (-1);
		}
	}
	return (-1);
}