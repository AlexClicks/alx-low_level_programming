#include "main.h"
/**
 * times_table - times table functions
 * Return: Returns the times table of numbers
 */
void times_table(void)
{
	int j;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int p = j * i;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_pitchar(',');
				_putchar(' ');
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
