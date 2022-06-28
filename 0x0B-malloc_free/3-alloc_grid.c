#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2-D integer grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2-D integer grid
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **p;

	a = b = 0;
	if (height < 1)
		return (NULL);
	p = (int **)malloc(height * sizeof(p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		p[a] = malloc(width * sizeof(int));
		if (p[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(p[b]);
			free(p);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			p[a][b] = 0;
	}
	return (p);
}
