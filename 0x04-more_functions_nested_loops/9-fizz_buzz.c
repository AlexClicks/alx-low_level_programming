#include <stdio.h>
/**
 * main - check the code for the main school
 *
 * Return: Always return 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 = 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
		
		i++;
	}
	putchar('\n');
	return (0);
}


