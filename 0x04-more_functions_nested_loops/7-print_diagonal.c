#include "main.h"
/**
 * print_diagonal - prints diogonal of leanth l
 *
 * @n: Determines the length of diogonal
 */
void print_diagonal(int n)
{
	int i;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < n; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
}

