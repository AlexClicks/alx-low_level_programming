#include "main.h"

/**
 * print_line - Prints a line formed by underscore
 *
 * @n: integer to print underscore
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

