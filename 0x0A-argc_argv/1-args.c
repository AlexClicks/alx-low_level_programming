#include <stdio.h>

/**
 * main -  Prints the number of argument used to run the program
 * @argc: The number of argument used to run a function
 * @argv: A pointer to the aray of the arguments that is used to run a function
 * Return: Returns 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

