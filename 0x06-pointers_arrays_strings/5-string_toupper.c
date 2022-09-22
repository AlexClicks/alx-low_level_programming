#include "main.h"
/**
 * string_toupper - Function that turn lower case to upper case
 * @N: Character that stores the alphabets
 * Return: Return the text in upoercase*
 */


char *string_toupper(char *N)
{
	int i = 0;

	while ( N[i] != 0)
	{
		if ( N[i] >= 97 && N[i] <= 122)
		{
			N[i] -= 32;
		}

		i++;
	}
	return (N);

}
	

			


