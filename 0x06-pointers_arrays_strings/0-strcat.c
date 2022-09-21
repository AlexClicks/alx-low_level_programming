#include "main.h"
/**
 * _strcat - Function that will concatenate two strings
 * @dest: a variable that will store the first string
 * @src: variable that will hold the second string
 * @ptr: variable that will hold the concatenated string
 * Return: Returns the comcatenated string
 */

char *_strcat(char *dest, char *src)
{
	int length;
	int j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';
	return (dest);
}
