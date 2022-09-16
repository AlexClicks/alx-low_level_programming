#include "main.h"
/**
 * print_line - prints the line formed by underscore
 * @n: Integers to print straight line
 *
 * Return: Return a straight line
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

