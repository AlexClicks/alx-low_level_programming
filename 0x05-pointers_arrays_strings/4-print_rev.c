#include "main.h"

/**
 * print_rev - prints a stting in the reverse
 * @s: point obtained from the main function
 * Return: Always 0
 */
void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	while (counter)
	{
		_putchar(s[counter - 1]);
		counter--;
	}
	_putchar(10);
}


