#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 201; i++)
	{
		putchar((i%10) + '0');

		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
