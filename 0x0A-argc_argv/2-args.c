#include <stdio.h>

/**
 * main - Prints all the argument used to run it one per line
 * @argc: interger holding the total number of argument used to run the program
 * @argv: A pointer to the array of argument used to run the program.
 * Return: Returns the argument one per line
 */
int main(int argc, char *argv [])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
