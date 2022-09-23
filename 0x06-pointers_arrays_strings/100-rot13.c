#include "main.h"
/**
 * rot13 - function that encode strings to rpt13
 * @N: Variable that holds the strings to be encoded
 * Return: Returns the value of N.
 */

char *rot13(char *s)
{
	int C = 0;
	int i;

	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + C) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + C) == characters[i])
			{
				*(s + C) = rot13[i];
				break;
			}
		}
		C++;
	}
	return (s);
}

