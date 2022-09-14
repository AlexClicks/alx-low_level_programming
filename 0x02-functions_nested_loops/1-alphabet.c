#include "main.h"
/**
 * print_alphabet - prints the alphabets
 *
 * Return: Returns all the alphabets in small letter
 */
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
