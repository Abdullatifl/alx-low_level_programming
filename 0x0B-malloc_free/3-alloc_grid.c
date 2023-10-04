#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int r, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		mee[r] = malloc(sizeof(int) * width);

		if (mee[r] == NULL)
		{
			for (; r >= 0; r--)
				free(mee[r]);

			free(mee);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (z = 0; z < width; z++)
			mee[r][z] = 0;
	}

	return (mee);
}
