#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - test free_grid
 *
 * Return: 0
 */
int main(void)
{
	int **grid;
	int i, j;
	int width = 3, height = 2;

	grid = alloc_grid(width, height);
	if (grid == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = i + j;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			printf("%d ", grid[i][j]);
		printf("\n");
	}

	free_grid(grid, height);

	return (0);
}
