#include "main.h"

/**
* _strdup - Function that duplicates strings
* @str: string to be dupliated
* Return: a pointer to the string
*/

char *_strdup(char *str)
{
	int j = 1, i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;
	ptr = (char *)malloc(j * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < j)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);

}
