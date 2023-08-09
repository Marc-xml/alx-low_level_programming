#include<stdlib.h>
/**
 * free_grid - frees grid of 2d array
 * @grid: 2d array
 * @height: height of array
 * Return: returns nothing
 */
void free_grid(**grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
