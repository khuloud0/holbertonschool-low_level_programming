#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - test alloc_grid
 *
 * Return: 0
 */
int main(void)
{
	int **grid;
	int i, j;

	grid = alloc_grid(3, 2);
	if (grid == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", grid[i][j]);
		printf("\n");
	}

	for (i = 0; i < 2; i++)
		free(grid[i]);
	free(grid);

	return (0);
}
