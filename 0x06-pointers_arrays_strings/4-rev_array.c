#include "main.h"

/**
 * revees_array - Reverse any array stored on a
 * @a: a string given by the main
 * @: character that dertermine the number of the array element.
 * Return: Returns the reversed array.
 */

void reverse_array(int *a, int n)
{
	int N;
	int i = 0;
	int E = n - 1;

	while ( i < n/2)
	{
		N = a[i];
		a[i] = a[E];
		a[E] = N;
		i++;
		end--;
	}
}
