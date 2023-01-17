#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers (each cell should be
 * initialized to 0)
 * @width: grid width
 * @height: grid height
 *
 * Return: pointer to the created 2D array of integers, NULL (if error)
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i, j;

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			while (i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
