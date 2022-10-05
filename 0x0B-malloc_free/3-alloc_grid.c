#include "main.h"

/**
* alloc_grid - Function that allocates array of integers
* @width: width of an array
* @height: height of an array
* Return: pointer to the array of intergers
*/

int **alloc_grid(int width, int height)
{
	int i, j, n, m;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}


	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
			a[n][m] = 0;
	}
	return (a);

}
