#include "main.h"
/**
 * print_alphabet_x10 -This prints alphabet 10 times
 *
 * Return: always 0
 *
 */
void print_alphabet_x10(void)
{
	char a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}

		_putchar('\n');
	}
}
