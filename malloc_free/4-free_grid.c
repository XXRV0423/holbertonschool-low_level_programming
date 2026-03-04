#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid of integers
 * @grid: The 2D grid to free
 * @height: Number of rows
 *
 * Return: void
 */
void	free_grid(int **grid, int height)
{
	int	i;

	if (grid == NULL)
		return;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
