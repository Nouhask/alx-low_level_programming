#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a nested loop to make grid
 * @butter: butter input
 * @knif: knif input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int butter, int knif)
{
	int **alsa;
	int z, d;

	if (butter <= 0 || knif <= 0)
		return (NULL);

	alsa = malloc(sizeof(int *) * knif);

	if (alsa == NULL)
		return (NULL);

	for (z = 0; z < knif; z++)
	{
		alsa[z] = malloc(sizeof(int) * butter);

		if (alsa[z] == NULL)
		{
			for (; z >= 0; z--)
				free(alsa[z]);

			free(alsa);
			return (NULL);
		}
	}

	for (z = 0; z < knif; z++)
	{
		for (d = 0; d < butter; d++)
			alsa[z][d] = 0;
	}

	return (alsa);
}
