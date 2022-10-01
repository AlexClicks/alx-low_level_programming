#include "main.h"

/**

 * _strncat - function that concatenate strings if the size of first one < n

 * @dest: first string to be concatenated

 * @src: Second string to be concatinated

 * @n: character that determine the size of the concatenated string.

 * Return: returns the value of the dest

 */



char *_strncat(char *dest, char *src, int n)

{

	int l = 0;

	int a = 0;



	while (dest[a] != '\0')

	{

		a++;

	}



	while (src[l] != '\0' && n > l)

	{

		dest[a] = src[l];



		a++;

		l++;



	}



	if (n > l)

	{

		dest[a] = '\0';

	}

	return (dest);

}



	
