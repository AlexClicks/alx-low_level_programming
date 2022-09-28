#include "main.h"
/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: The string to be worked on.
 * Return: Return the returned string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

