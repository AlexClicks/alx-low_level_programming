#include "main.h"
/**
 * print_square - print a square of nxndimension
 *
 * @size: character that determine size of square
 *
 */
void print_square(int size)
{
	int i;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
