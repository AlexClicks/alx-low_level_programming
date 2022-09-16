# include "main.h"
/**
 * print_triangle - prints triangle
 *
 * @size: size of the triangle
 */
void print_triangle( int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i < size; i++)
	{
		for (j = size - i ; j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = i; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

