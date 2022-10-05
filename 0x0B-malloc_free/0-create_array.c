#include "main.h"

/**
* create_array - Creates an array and initialize with character
* @size: size of the array
* @c: character that will be used to initialize the array
* Return: a pointer to an array
*/

char *create_array(unsigned int size, char c)

{

	unsigned int j;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ptr[j] = c;
	return (ptr);

}
