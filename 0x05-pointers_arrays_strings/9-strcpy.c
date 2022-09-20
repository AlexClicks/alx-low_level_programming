#include "main.h"
/**
 * _strcpy - copies the string pointed to src including \o
 * @src: a pointer
 * @dest: a pointer
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
