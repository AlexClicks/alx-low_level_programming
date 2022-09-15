#include "main.h"
/**
 *  _isupper - Entry point
 *
 * @c: Character to be checked
 *
 * Return: Returns the character being checked
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
