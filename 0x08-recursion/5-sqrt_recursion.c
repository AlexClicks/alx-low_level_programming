#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - squaring a number using recursion
 * @n: parameter to be sqrt
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Function that prints squareroot by recursion
 * @n: The number to be printed the squareroot
 * @j: Character use for iteration
 * Return: Returns the sqrt of n
 */

int _sqrt(int n, int j)
{
	int square = j * j;

	if (square > n)
	{
		return (-1);
	}

	if (square == n)
	{
		return (j);
	}
	return (_sqrt(n, j + 1));
}
