#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: pointer given by the main function
 * Return: Always 0
 */

void puts2(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		if (counter % 2 == 0)
		{
			_putchar(str[counter]);
		}
		counter++;
	}
	_putchar(10);
}


