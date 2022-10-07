#include "main.h"

#include <stdlib.h>

/**
* malloc_checked - Function that allocates memory using malloc
* @b: The Sice of the memory to be allocatted
* Return: A pointer to the allocated memory.
*/


void *malloc_checked(unsigned int b)
{
	void *S = malloc(b);

	if (S == NULL)
		exit(98);
	return (S);
}
