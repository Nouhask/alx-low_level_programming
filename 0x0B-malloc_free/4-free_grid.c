#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_franklin - frees 2d array
 * @franklin: 2d franklin
 * @marshall: marshall dimension of franklin
 * Description: frees memory of franklin
 * Return: nothing
 *
 */
void free_grid(int **franklin, int marshall)
{
	int cdd;

	for (cdd = 0; cdd < marshall; cdd++)
	{
		free(franklin[cdd]);
	}
	free(franklin);
}
