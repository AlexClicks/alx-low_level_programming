#include "main.h"
/**
 * _strlen - Prints the length of a string
 * @s: pointer give to the function
 * Return: Returns nu,ber
 */
int _strlen(char *s)
{
	int lent = 0;

	while (s[lent] != '\0')
	{
		lent++;
	}
	return (lent);
}
