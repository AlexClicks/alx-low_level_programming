#include "main.h"

/**
 * _strchr - Function that locate a particular character in a string
 * 2s: The string to be worked on
 * @c: The character to be searched for
 * Return: Returns c
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	if (s[j] == c)
	{
		return (s + j);
	}
	return (0);
}
