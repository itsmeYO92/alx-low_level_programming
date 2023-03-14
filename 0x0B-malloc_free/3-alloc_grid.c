#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - allocate 2d array in memory
 * @width: width of the aarray
 * @height: hight of the array
 * Return: pointer to the array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (!(width > 1 && height > 1))
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
