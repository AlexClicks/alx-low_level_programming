#include "main.h"
#include <stdlib.h>

/**
* array_range - Function that returns array of integers from @min to @max
* @min: The first value of the array.
* @max: The last value of the array.
* Return: Return NULL if the Function fails or Pointer to the array
*/

int *array_range(int min, int max)
{
	int *s, loc, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	for (loc = 0; loc < size; loc++)
		s[loc] = min++;
	return (s);

}
