#include "main.h"



/**

 * _strstr - Function that searches for a substring in a string

 * @haystack: The string to be worked on

 * @needle: The sub string to be searched for

 * Return: Returns the value of the substring

 */



char *_strstr(char *haystack, char *needle)

{

	int a;

	int b;



	if (needle[0] == '\0')

	{

		return (haystack);

	}

	for (a = 0; haystack[a] != '\0'; a++)

	{

		if (haystack[a] == needle[0])

		{

			for (b = 0; needle[b] != '\0';b++)

			{

				if (haystack[a + b] != needle[b])

				{

					break;

				}

			}

			if (needle[b] == '\0')

			{

				return (haystack + a);

			}

		}

	}

	return ('\0');

}


