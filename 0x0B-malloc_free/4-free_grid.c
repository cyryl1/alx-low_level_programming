#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * free_grid - to free a 2 dimensional grid previously
 * created by alloc_grid function
 *
 * @grid: the 2 dimensional grid to be freed
 * @height: row o the grid
 *
 * Return: void
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
