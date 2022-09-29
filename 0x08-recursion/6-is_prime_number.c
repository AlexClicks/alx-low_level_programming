#include "main.h"

/**
 * test - it helps me
 * @j: helper int
 * @n: integer I'm testing
 * Return: value
 */
int test(int j, int n)
{
	if (n % j == 0 && n != j)
	{
		return (0);
	}
	if (n % j != 0 && j < n)
	{
		return (test(j + 1, n));
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
	int j = 2;

	if (n < 2)
	{
		return (0);
	}
	return (test(j, n));
}
