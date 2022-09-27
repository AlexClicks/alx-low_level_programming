#include "main.h"

/**
 * _strspn - Function that print the prefix of substring
 * @s: The string to be worked on
 * @accept: accepted bytes
 * Return: Returns the unsigned value
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int result = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				result++;
				break;
			}
		}
		if (s[b] == '\0')
		{
			return (result);
		}
	}
	return (result);
}
