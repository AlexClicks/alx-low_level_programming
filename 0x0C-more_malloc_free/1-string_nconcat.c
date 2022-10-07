#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates a given length of one string to the other.
* @s1: String1
* @s2: String2
* @n: The maximum Bytes of string2 to be concatenated
* Return: Return NULL if the program fails or a pointer is it is success
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *S;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)

		len++;

	S = malloc(sizeof(char) * (len + 1));

	if (S == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)

		S[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		S[len++] = s2[index];

	S[len] = '\0';

	return (S);
}
