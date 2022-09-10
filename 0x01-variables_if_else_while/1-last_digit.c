#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n;

	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	if (lastn > 5)
	{
		printf("Last digit of %d is is %d and is greater than 5\n", n, lastn);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 8\n", n, lastn);
	}
	return (0);
}
