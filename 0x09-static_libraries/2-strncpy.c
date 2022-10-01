#include "main.h"





/**

 * _strncpy - Function that copy one string to another one

 * @dest: variable used to stire the first string

 * @src: Variable use to store the second string

 * @n: variable used to store the maximium size of string concatenated.

 * Return: Resturns the value of dest

 */





char *_strncpy(char *dest, char *src, int n)

{

	int i;



	while (i < n && src[i] != '\0')

	{

		dest[i] = src[i];

		i++;

	}

	while (i < n)

	{

		dest[i] = '\0';

		i++;

	}

	return (dest);

}
