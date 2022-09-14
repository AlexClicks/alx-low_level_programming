#include "main.h"
/**
 * print_sign - main function
 *
 * @n: character to compare
 *
 * Return: Either return 1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
