#include "main.h"

/**
 * length - helps to do it
 * @s: string to be worked
 * Return: Rerurn string length
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}

/**
 * helper2 - Helps more
 * @i: interger for interation
 * @s: string
 * Return: int value
 */

int helper2(int i, char *s)
{
	if(*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		else
		{
			return (helper2(i + 1, s + 1));
		}
	}
	return (1);

}

/**
 * is_palindrome - fuction that check if itbis palindrom
 * @s: string to check
 * Return: Return if it is palindrome
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (helper2(i, s));
}
