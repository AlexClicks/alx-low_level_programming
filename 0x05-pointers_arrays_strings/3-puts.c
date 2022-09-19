#include "main.h"
/**
 * _puts - main functions
 * @str: a pointer given by the main function
 * Return: 0
 */
void _puts(char *str)
{
	int m = 0;

	while(str[m] != '\0')
	{
		_putchar(str[m]);
		m++;
	}

	_putchar(10);
}
