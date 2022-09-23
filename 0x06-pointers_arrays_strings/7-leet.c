#include "main.h"
/**
 * leet - function that conver letters to number
 * @N: String tha will be converted
 * Return: Returns N
 */

char *leet(char *N)
{
	int C = 0;
	int i;
	int lower_char[] = {97, 101, 111, 116, 108};
	int upper_char[] = {65, 69, 79, 84, 76};
	int Num[] = {52, 51, 48, 55, 49};

	while (*(N + C) != '\0')
	{
		for ( i = 0; i < 5; i++)
		{
			if (*(N + C) == lower_char[i] || *(N + C) == upper_char[i])
			{
				*(N + C) = Num[i];
				break;
			}
		}
		C++;
	}
	return (N);
}



