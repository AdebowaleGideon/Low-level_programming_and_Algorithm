#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by the alloc_grid function
 * @grid: pointer to a 2 by 2 matrix
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
