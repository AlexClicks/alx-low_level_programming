#include <stdio.h>
#include "main.h"
/**
 * _strncat - function that concatenate strings if the size of first one < n
 * @dest: first string to be concatenated
 * @src: Second string to be concatinated
 * @n: character that determine the size of the concatenated string.
 * Return: returns the value of the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int j;
	length = 0;
	char *deck;

	while (dest[length] != '\0')
	{
		length++; 
	}
	for (j = 0; src[j] != '\0', sizeof(deck) <= n; j++, length++)
	{
		dest[length] = src[j];
		deck[j] = src[j];
	}
	dest[length] = '\0'; 
	return (dest);
}	
