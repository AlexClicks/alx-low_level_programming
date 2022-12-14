#include "main.h"

/**
 * binary_to_uint- Function that converts binary to unsigned int
 * @b: binary
 * Return: Returns unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0, j;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[count] != '\0')
		count++;

	count -= 1;
	j = 0;

	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))/*&& logical AND operator*/
			return (non_binary);

		if (b[j] == '1')
			number += (1 * (1 << count));/*<< bitwise left shift operator*/
		j++;

	        count--;
	}
	return (number);
}
