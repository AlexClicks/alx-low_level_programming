#include "main.h"
/**
 *  _islower - Entry point
 *
 * @c: Character to be checked
 *
 * Return: Returns the character being checked
 *
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
