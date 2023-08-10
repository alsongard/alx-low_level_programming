#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free space from arrat
 * @grid: array to be cleared
 * @height: height to be cleared
 * Return: (void)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
