#include "main.h"
/**
 * factorial - Function that prints the factorial of a number
 * @n: The number to be returned its factorial
 * Return: Returns an interger
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
