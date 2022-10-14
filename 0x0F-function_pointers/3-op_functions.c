#include "3-calc.h"

/**
 * op_add - adds two numbers.
 * @i: first number.
 * @j: second number.
 * Return: add.
 */
int op_add(int i, int j)
{
	return (i + j);
}
/**
 * op_sub - subctracts two numbers.
 * @i: first number.
 * @j: second number.

 * Return: difference.
 */
int op_sub(int i, int j)
{
	return (i - j);
}

/**
 * op_mul - multiplies two numbers.
 * @i: first number.
 * @j: second number.
 *
 * Return: multiplication.
 */
int op_mul(int i, int j)
{
	return (i * j);
}
/**
 * op_div - divides two numbers.
 * @i: first number.
 * @j: second number.
 * Return: division.
 */
int op_div(int i, int j)
{
	if (j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (i / j);
}
/**
 * op_mod - calculates the module of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: remainder of the division.
 */
int op_mod(int i, int j)
{
	if (j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (i % j);
}
