#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main: prints the products of first two argument
 * @argc: Argument Counter 
 * @argv: Argument vector
 * Return: Returns the product of the argument
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n"); 
	return (1);
}
