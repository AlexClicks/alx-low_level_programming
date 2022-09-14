#include "main.h"
/**
 * _isalpha - main function
 *
 * @c: character compare
 *
 * Return: Returns 1 if condition is true and 2 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
