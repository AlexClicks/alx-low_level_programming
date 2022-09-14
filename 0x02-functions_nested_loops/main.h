#include <stdio.h>
/**
 * main - Entry points
 *
 * Return: Always Returns 0
 * 
 */
void print_alphabet()
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
