#include "main.h"

/**
 * helper - it helps me
 * @j: helper int
 * @n: integer I'm testing
 * Return: value
 */
int test(int i, int n)
{
	if (n % i == 0 && n != i)
	{
		return (0);
	}
	if (n % i != 0 && i < n)
	{
		return (test(i + 1, n));
	}
	return (1);
}

/**
 * is_prime_number -  check wheather is prime or not
 * @n: interger to work on
 * Return: Return boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}
	return (test(i, n));
}
