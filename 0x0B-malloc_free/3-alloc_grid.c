#include<stdlib.h>
/**
 * alloc_grind - return pointer to 2d array
 * @width:width of array
 * @height:height of array
 * Return: returns Null on failure
 */
int **alloc_grind(int width, int height)
{
	int *grid, i, j;

	if (width || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
