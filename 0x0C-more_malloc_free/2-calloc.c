#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array of @nmemb
* @nmemb: The number of elements.
* @size: The byte size of each array element.
* Return: Return NULL for function faill and Pointer when Program run
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *S;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	S = malloc(size * nmemb);

	if (S == NULL)
		return (NULL);

	filler = S;

	for (index = 0; index < (size * nmemb); index++)

		filler[index] = '\0';

	return (S);
}
