#include <stdio.h>
#include "main.h"
/**
 * print_array - print array of length l
 * @a: a pointer given by a
 * @n: a pointer given by main function
 * Return: Returns the array printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i ++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
		}
	}

	printf("\n");
}
