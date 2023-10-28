#include "main.h"
/**
 * free_grid - free memory previously allocated
 * @grid: parameter to the arrray
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
