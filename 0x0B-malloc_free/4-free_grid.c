#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory
 *
 * created by alloc_grid()
 *
 * @grid: grid to be freed
 *
 * @height: height of the given grid
 *
 */
void free_grid(int **grid, int height)
{
	int p;

	if (grid == NULL || height == 0)
		return;

	for (p = 0; p < height; p++)
		free(grid[p]);

	free(grid);
}
