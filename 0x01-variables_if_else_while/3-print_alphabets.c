#include <stdio.h>
/*
 * main - Entry points
 * 
 * Return : Always returns 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}

	printf("\n");

	return (0);
}
