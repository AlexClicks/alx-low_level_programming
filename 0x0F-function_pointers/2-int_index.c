#include "function_pointers.h"

/**
 * int_index - Funtion that searches for an interger
 * @array: Array to be searched
 * @size: Size of the array
 * @cmp: Pointer to the comparing array
 * @Return: Index of the first element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if(array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]))
			{
				return (n);
			}
		}

	}
	return (-1);
}

