#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return: Pointer to a 2D array initialized to 0, or NULL on failure
 */
int	**alloc_grid(int width, int height)
{
	int	**grid;
	int	i;
	int	j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}

		i++;
	}

	return (grid);
}
