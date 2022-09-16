#include "main.h"
/**
 * print_most_numbers - Prints the range of numbers
 *
 * Return: Returns the range 0
 * 
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
