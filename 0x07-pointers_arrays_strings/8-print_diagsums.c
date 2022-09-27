#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints sum of two diagonal of a squar
 * @a: Variable to store the length of string
 * @size: Variable for the size of the square
 * Return: Return the sum of the diagonal
 */

void print_diagsums(int *a, int size)
{
	int b;
	int diagO = 0;
	int diagT = 0;

	for (b = 0; b < size; b++)
	{
		diagO += a[(b * size) + b];
		diagT += a[(size - 1) + ((size - 1) * b)];
	}
	printf("%d, %d\n", diagO, diagT);
}
