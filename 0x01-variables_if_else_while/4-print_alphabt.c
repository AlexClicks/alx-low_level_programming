#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always returns 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}

		putchar(a);
	}
	
	printf("\n");
	return (0);
}
