#include "main.h"
#include <stdlib.h>

/**
* _realloc - Function that reallocates a memory block using malloc and free.
* @ptr: A pointer to the old memory.
* @old_size: The size in bytes of the allocated space for ptr.
* @new_size: The size in bytes for the new memory block.
* Return: Return NULL on program failure and a pointer is the it is success.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;
	char *ptr_copy, *filler;
	unsigned int loc;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);

		if (s == NULL)
			return (NULL);

		return (s);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}

	ptr_copy = ptr;
	s = malloc(sizeof(*ptr_copy) * new_size);

	if (s == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = s;

	for (loc = 0; loc < old_size && loc < new_size; loc++)
		filler[loc] = *ptr_copy++;

	free(ptr);
	return (s);

}
