#include "main.h"

/**
* str_concat - Function that concatenate two strings
* @s1: string 1
* @s2: string 2
* Return: Returns the concatenated strings
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, m = 0, n = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	m = i + j;
	s = (char *)malloc(m * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (n < m)
	{
		if (n < i)
			s[n] = s1[n];
		if (n >= i)
		{
			s[n] = s2[j];
			j++;
		}
	        n++;
	}
	s[n] = '\0';
	return (s);

}
