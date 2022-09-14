#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: charater to hold the number
 *
 * Return: Always return the last number
 */
int print_last_digit(int n)

{
	_putchar('0' + _abs(n % 10));

	return (_abs(n % 10));
}
