#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by
 * alloc_grid function.
 * @grid: matrix double pointer
 * @height: rows (pointer)
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 *
 * Return: Double Pointer
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, j, k, fr;

	fr = 0;
	if (width <= 0 || height <= 0)
		return (0);

	s = malloc(height * sizeof(int *));
	if (s == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		*(s + i) = malloc(width * sizeof(int));
		if (*(s + i) == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(*(s + k));
		}
		free(s);
	}
	return (s);
}
