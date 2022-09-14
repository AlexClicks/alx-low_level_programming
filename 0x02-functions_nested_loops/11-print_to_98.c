#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * 11-print_to_98 - print the intergers from n to 98
 * @n: the number from were the program will start printing
 * Return: Return all the intergers from n to 98
 */
int print_to_98(int n)
{
	int i;
	
	if (n > 98)
	{
		for (i = n; i >= 98; i--);
		printf("%d", i);

		if (i != 98)
		{
			printf(", ");
		}
	}
	else 
	{
		for ( i = n; i <= 98; i++)
		{
			printf("%d", i);

			if ( != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

