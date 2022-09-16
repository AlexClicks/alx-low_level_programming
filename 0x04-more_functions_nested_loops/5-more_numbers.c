#include "main.h"
/**
 * more_numbers - Function to get the 10 multioles
 *
 * Return: Returns 0
 */
void more_numbers(void)
{
	char i;
	char j;

	for (j = 0; j <= 9; j++)
	{
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

