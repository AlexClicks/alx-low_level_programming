#include "main.h"

/**
* free_grid - Free 2 dimentional arrays
* @grid: array to be freed
* @height: height of matrix
* Return: nothing
*/

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
