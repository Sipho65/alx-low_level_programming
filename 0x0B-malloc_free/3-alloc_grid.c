#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - grid loop
 * @width: width
 * @height: height
 * Return: pizza || null
 */
int **alloc_grid(int width, int height)
{
	int **pizza;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	pizza = malloc(sizeof(int *) * height);

	if (pizza == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pizza[i] = malloc(sizeof(int) * width);

		if (pizza[i] == NULL)
		{
			for (; i >= 0; i--)
				free(pizza[i]);

			free(pizza);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			pizza[i][j] = 0;
	}

	return (pizza);
}

