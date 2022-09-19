#include "main.h"
/**
 * swap_int - Swap the value of two integers
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	int index;

	index = *a;
	*a = *b;
	*b = index;
}
