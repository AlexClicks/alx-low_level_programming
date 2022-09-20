#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: String to work on
 * Return: Return the second half of the string
 */

void puts_half(char *str)
{
	int length;
	int i;
	int n;

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	n = (length - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
