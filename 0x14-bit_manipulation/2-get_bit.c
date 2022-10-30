#include "main.h"
/**
 * get_bit - Function that gets bit at index
 * @n: nmber
 * @index: index within binary nmber
 * Return: Returns bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bin;
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	bin = n >> index;
	bit = bin & 1;

	return (bit);
}
