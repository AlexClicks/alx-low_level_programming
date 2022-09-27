#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: destination memory to copy to
 * @src: Memory source to copy from
 * @n: n amount of times
 * Return: return the string value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

