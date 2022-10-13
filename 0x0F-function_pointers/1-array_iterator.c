#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - A function pointer
 * @array: Array to be worked on
 * @size: Size of the array
 * @action: pointer function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if(!array || !action)
	{
		return;
	}

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
