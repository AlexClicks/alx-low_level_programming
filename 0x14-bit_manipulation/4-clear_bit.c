#include "main.h"
/**
 * clear_bit - A function that clears bit to 0 at a given index
 * @n: nmber
 * @index: index within binary nmber
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	m = ~(m << index);

	*n = *n & m;

	return (1);
}
