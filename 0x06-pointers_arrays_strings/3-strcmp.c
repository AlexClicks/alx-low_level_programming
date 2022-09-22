#include "main.h"
/**
 * _strcmp - Function to copy s1 to s2
 * @s1: string to be copied
 * @s2: string to be copied to 
 * Return: returns the value os s1
 */

int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while ( *str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}

	return ( *str_one - *str_two);
}
