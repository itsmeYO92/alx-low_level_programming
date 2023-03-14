#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free 2d array
 * @grid: pointer to the array
 * @height: hight of the array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		free(grid);
	}
}
