#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a funtion that frees a 2d grid.
 * @grid: a pointer of 2d grid
 * @height: a height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
